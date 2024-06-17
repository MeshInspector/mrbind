#pragma once

#include <mrbind/targets/pybind11/core.h>

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

MB_PB11_ADD_CUSTOM_TYPE(
    (template <typename T, typename U>),
    (tl::expected<T, U>),
    (pybind11::class_<ThisType>),
    (m, (pb11::ToPythonName("tl_expected") + "_" + pb11::ToPythonName(MRBind::TypeName<T>()) + "_or_" + pb11::ToPythonName(MRBind::TypeName<U>())).c_str()),
    (),
    (
        // Construct with the default-constructed valid value.
        if constexpr (std::default_initializable<T> || std::is_void_v<T>)
            _.def(pybind11::init<>(), "Constructs in the valid state, with the default-constructed value.");

        // Construct with the valid value.
        if constexpr (!std::is_void_v<T>)
            _.def(pybind11::init([](T value){return ThisType(std::move(value));}), "Constructs in the valid state.");

        // Construct with the unexpected value.
        _.def_static("make_unexpected", [](U err){return ThisType(tl::unexpected<U>(std::move(err)));}, "Constructs in the error state.");

        // Check for validity.
        _.def("__bool__", [](const tl::expected<T, U> &e){return e.has_value();}, "Returns true if holds a value, false if holds an error.");

        // Get value or throw if none.
        _.def("value", [](const tl::expected<T, U> &e)
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
        _.def("error", [](const tl::expected<T, U> &e)
        {
            if (e.has_value())
                throw std::runtime_error("This `tl::expected` doesn't hold an error.");
            else
                return e.error();
        });
    )
)
