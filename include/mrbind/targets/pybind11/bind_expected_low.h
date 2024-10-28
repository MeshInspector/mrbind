// Intentionally no pragma once, because this header is used twice: for `std::expected` and for `tl::expected`.

#if MB_USE_STD_EXPECTED
#include <expected>
#define tl std
#else
#include <tl/expected.hpp>
#endif


// Fixed `is_copy_constructible` for `tl::expected` (to correctly recurse into stuff with bad SFINAE, such as `std::vector`).
template <typename T, typename U>
struct pybind11::detail::is_copy_constructible<tl::expected<T, U>>
    : std::conjunction<pybind11::detail::is_copy_constructible<T>, pybind11::detail::is_copy_constructible<U>>
{};
template <typename T, typename U>
struct pybind11::detail::is_copy_assignable<tl::expected<T, U>>
    : std::conjunction<pybind11::detail::is_copy_assignable<T>, pybind11::detail::is_copy_assignable<U>>
{};

// Fixed `equality_comparable` for `std::expected` only, where it's not SFINAE-friendly.
#if MB_USE_STD_EXPECTED
template <typename T, typename U>
struct MRBind::pb11::IsEqualityComparable<tl::expected<T, U>> : std::bool_constant<IsEqualityComparable<T>::value && IsEqualityComparable<U>::value> {};
template <typename U>
struct MRBind::pb11::IsEqualityComparable<tl::expected<void, U>> : IsEqualityComparable<U> {};
#endif

namespace MRBind::pb11::detail::Expected
{
    // `e` is required to be in the error state. Then throws some information about that error.
    // This is needed for two reasons:
    // 1. It's not possible to call `.value()` if `T == void` (a SFINAE condition rejects that), and there seems to be no alternative.
    // 2. The default exception message doesn't seem to include the error message (even if available), and we want it.
    template <typename T, typename U>
    [[noreturn]] void ThrowErrorFromExpected(const tl::expected<T, U> &e)
    {
        if constexpr (std::is_same_v<U, std::string>)
            throw std::runtime_error(e.error());
        else if constexpr (std::is_same_v<U, std::string_view>)
            throw std::runtime_error(std::string(e.error()));
        else
            throw tl::bad_expected_access<U>(std::move(e.error()));
    }
}

// Adjust `tl::expected<T, U>` to `std::unique_ptr<T>` or throw.
// This is purely to make the API nicer, it makes the object appear as `T` or `None` in Python, instead of `std::optional<T>`.
template <typename T, typename U>
requires
    // Because we need to be able to move the object into `std::unique_ptr`.
    std::is_void_v<T> || std::movable<T>
struct MRBind::pb11::ReturnTypeTraits<tl::expected<T, U>>
    : RegisterTypeWithCustomBindingIfApplicable<T, U>
{
    static decltype(auto) Adjust(tl::expected<T, U> &&value)
    {
        if (value)
        {
            if constexpr (std::is_void_v<T>)
                return;
            else
                // Note that pybind11 normally doesn't support `unique_ptr` to builtin types ("holders are not supported for non-custom types", or whatever).
                // But we have code in `TryAddFunc()` that adjusts `unique_ptr`s to builtin types to raw pointers, which works around this.
                return AdjustReturnedValue<typename OptionalReturnType<T>::type>(OptionalReturnType<T>::make(std::move(*value)));
        }
        else
        {
            MRBind::pb11::detail::Expected::ThrowErrorFromExpected(value);
        }
    }
};

// tl::expected
template <typename T, typename U>
struct MRBind::pb11::CustomTypeBinding<tl::expected<T, U>>
    : DefaultCustomTypeBinding<tl::expected<T, U>>,
    RegisterTypeWithCustomBindingIfApplicable<T, U>
{
    // If defined, `std::expected` and `tl::expected` both become just `expected`,
    // unifying the interface across platforms using different flavors of `expected`.
    #if MB_PB11_MERGE_STL_TL_EXPECTED
    [[nodiscard]] static std::string cpp_type_name()
    {
        return std::string("expected<") + TypeidTypeName<T>() + ", " + TypeidTypeName<U>() + ">";
    }
    #endif

    static void bind_members(typename DefaultCustomTypeBinding<tl::expected<T, U>>::pybind_type &c)
    {
        // Construct with the default-constructed valid value.
        if constexpr (std::default_initializable<T> || std::is_void_v<T>)
            c.def(pybind11::init<>(), "Constructs in the valid state, with the default-constructed value.");

        // Copy constructor.
        if constexpr (pybind11::detail::is_copy_constructible<tl::expected<T, U>>::value)
            c.def(pybind11::init<const tl::expected<T, U> &>());

        // Construct with the valid value.
        // `pybind11::detail::is_copy_constructible` gives the "correct" result for types such as `std::vector`.
        if constexpr (!std::is_void_v<T> && pybind11::detail::is_copy_constructible<T>::value)
            c.def(pybind11::init([](const T &value){return new tl::expected<T, U>(value);}), "Constructs in the valid state.");

        // Construct with the unexpected value.
        // `pybind11::detail::is_copy_constructible` gives the "correct" result for types such as `std::vector`.
        if constexpr (pybind11::detail::is_copy_constructible<U>::value)
            c.def_static("make_unexpected", [](const U &err){return new tl::expected<T, U>(tl::unexpect, err);}, "Constructs in the error state.");

        // Check for validity.
        c.def("__bool__", [](const tl::expected<T, U> &e){return e.has_value();}, "Returns true if holds a value, false if holds an error.");

        // Get value or throw if none.
        c.def("value",
            [](const tl::expected<T, U> &e) -> decltype(auto)
            {
                // Throw if no value.
                // We could use this function only in the `T == void` branch, but since it gives better exception messages, we use it always.
                if (!e)
                    MRBind::pb11::detail::Expected::ThrowErrorFromExpected(e);

                if constexpr (std::is_void_v<T>)
                    return;
                else
                    return (AdjustReturnedValue<decltype(e.value())>)(e.value());
            },
            pybind11::return_value_policy::reference_internal
        );

        // Get error or throw if none.
        c.def("error", [](const tl::expected<T, U> &e) -> decltype(auto)
        {
            if (e.has_value())
                throw std::runtime_error("This `tl::expected` doesn't hold an error.");
            else
                return (AdjustReturnedValue<decltype(e.error())>)(e.error());
        }, pybind11::return_value_policy::reference_internal);
    }
};

#if MB_USE_STD_EXPECTED
#undef tl
#endif
