#pragma once

#include <tl/expected.hpp>

// Fixed `is_copy_constructible` for `tl::expected` (to correctly recurse into stuff with bad SFINAE, such as `std::vector`).
template <typename T, typename U>
struct pybind11::detail::is_copy_constructible<tl::expected<T, U>>
    : std::conjunction<pybind11::detail::is_copy_constructible<T>, pybind11::detail::is_copy_constructible<U>>
{};

// Adjust `tl::expected<T, U>` to `std::unique_ptr<T>` or throw.
// This is purely to make the API nicer, it makes the object appear as `T` or `None` in Python, instead of `std::optional<T>`.
template <typename T, typename U>
requires
    // Because we need to be able to move the object into `std::unique_ptr`.
    std::movable<T>
struct MRBind::detail::pb11::ReturnTypeAdjustment<tl::expected<T, U>>
    : RegisterTypeWithCustomBindingIfApplicable<T, U>
{
    static auto Adjust(tl::expected<T, U> &&value)
    {
        if (value)
        {
            // Note that pybind11 normally doesn't support `unique_ptr` to builtin types ("holders are not supported for non-custom types", or whatever).
            // But we have code in `TryAddFunc()` that adjusts `unique_ptr`s to builtin types to raw pointers, which works around this.
            return AdjustReturnedValue<typename OptionalReturnType<T>::type>(OptionalReturnType<T>::make(std::move(*value)));
        }
        else
        {
            // If `expected` uses `std::string[_view]` as the failure state, throw it directly as a string.
            // Because `tl::bad_expected_access` for some reason doesn't display strings in its `.what()`.
            if constexpr (std::is_same_v<U, std::string>)
                throw std::runtime_error(value.error());
            else if constexpr (std::is_same_v<U, std::string_view>)
                throw std::runtime_error(std::string(value.error()));
            else
                throw tl::bad_expected_access<U>(std::move(value.error()));
        }
    }
};

// tl::expected
template <typename T, typename U>
struct MRBind::detail::pb11::CustomTypeBinding<tl::expected<T, U>>
    : DefaultCustomTypeBinding<tl::expected<T, U>>,
    RegisterTypeWithCustomBindingIfApplicable<T, U>
{
    template <bool InDerivedClass>
    static void bind_members(pybind11::module_ &, auto &c)
    {
        using TT = typename std::remove_reference_t<decltype(c.type)>::type;

        // Construct with the default-constructed valid value.
        if constexpr (std::default_initializable<T> || std::is_void_v<T>)
            c.type.def(pybind11::init<>(), "Constructs in the valid state, with the default-constructed value.");

        // Copy constructor.
        if constexpr (pybind11::detail::is_copy_constructible<tl::expected<T, U>>::value)
        {
            c.type.def(pybind11::init<const tl::expected<T, U> &>());
            if constexpr (InDerivedClass)
                pybind11::implicitly_convertible<tl::expected<T, U>, TT>();
        }

        // Construct with the valid value.
        // `pybind11::detail::is_copy_constructible` gives the "correct" result for types such as `std::vector`.
        if constexpr (!std::is_void_v<T> && pybind11::detail::is_copy_constructible<T>::value)
            c.type.def(pybind11::init([](const T &value){return new TT(value);}), "Constructs in the valid state.");

        // Construct with the unexpected value.
        // `pybind11::detail::is_copy_constructible` gives the "correct" result for types such as `std::vector`.
        if constexpr (pybind11::detail::is_copy_constructible<U>::value)
            c.type.def_static("make_unexpected", [](const U &err){return new TT(tl::unexpect, err);}, "Constructs in the error state.");

        if constexpr (!InDerivedClass)
        {
            // Check for validity.
            c.type.def("__bool__", [](const TT &e){return e.has_value();}, "Returns true if holds a value, false if holds an error.");

            // Get value or throw if none.
            c.type.def("value", [](const TT &e) -> decltype(auto)
            {
                if constexpr (std::is_void_v<T>)
                {
                    // `.value()` has a SFINAE condition that rejects `T == void`, so we have to throw manually?
                    if (!e)
                        throw tl::bad_expected_access<U>(e.error());

                    return;
                }
                else
                {
                    return (AdjustReturnedValue<decltype(e.value())>)(e.value()); // `.value()` should throw on failure.
                }
            }, pybind11::return_value_policy::reference_internal);

            // Get error or throw if none.
            c.type.def("error", [](const TT &e) -> auto &&
            {
                if (e.has_value())
                    throw std::runtime_error("This `tl::expected` doesn't hold an error.");
                else
                    return (AdjustReturnedValue<decltype(e.error())>)(e.error());
            }, pybind11::return_value_policy::reference_internal);
        }
    }
};
