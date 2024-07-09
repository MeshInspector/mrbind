#pragma once

// tl::expected
#include <tl/expected.hpp>

namespace MRBind::detail::pb11
{
    // Adjust `tl::expected` elementwise.
    template <typename T, typename U>
    struct ReturnTypeTraits<tl::expected<T, U>>
    {
        static typename AdjustedReturnType<T>::type Adjust(tl::expected<T, U> &&value)
        {
            if constexpr (std::is_void_v<T>)
            {
                // `.value()` has a SFINAE condition that rejects `T == void`, so we have to throw manually?
                if (!value)
                    throw tl::bad_expected_access<U>(std::move(value).error());
            }
            else
            {
                return (AdjustReturnedValue<T>)(std::move(value).value()); // `.value()` should throw on failure.
            }
        }
    };
}

// tl::expected
template <typename T, typename U>
struct MRBind::detail::pb11::CustomTypeBinding<tl::expected<T, U>>
    : public DefaultCustomTypeBinding<tl::expected<T, U>>
{
    static void bind_members(pybind11::module_ &, auto &c, bool second_pass)
    {
        using TT = typename std::remove_reference_t<decltype(c.type)>::type;

        if (!second_pass)
        {
            // Construct with the default-constructed valid value.
            if constexpr (std::default_initializable<T> || std::is_void_v<T>)
                c.type.def(pybind11::init<>(), "Constructs in the valid state, with the default-constructed value.");

            // Construct with the valid value.
            if constexpr (!std::is_void_v<T>)
                c.type.def(pybind11::init([](T value){return TT(std::move(value));}), "Constructs in the valid state.");
        }
        else
        {
            // Construct with the unexpected value.
            c.type.def_static("make_unexpected", [](U err){return TT(tl::unexpected<U>(std::move(err)));}, "Constructs in the error state.");

            // Check for validity.
            c.type.def("__bool__", [](const TT &e){return e.has_value();}, "Returns true if holds a value, false if holds an error.");

            // Get value or throw if none.
            c.type.def("value", [](const TT &e)
            {
                if constexpr (std::is_void_v<T>)
                {
                    // `.value()` has a SFINAE condition that rejects `T == void`, so we have to throw manually?
                    if (!e)
                        throw tl::bad_expected_access<U>(e.error());
                }
                else
                {
                    return e.value(); // `.value()` should throw on failure.
                }
            });

            // Get error or throw if none.
            c.type.def("error", [](const TT &e)
            {
                if (e.has_value())
                    throw std::runtime_error("This `tl::expected` doesn't hold an error.");
                else
                    return e.error();
            });
        }
    }
};
