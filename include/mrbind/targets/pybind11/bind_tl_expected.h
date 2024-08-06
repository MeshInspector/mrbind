#pragma once

#include <tl/expected.hpp>

// Fixed `is_copy_constructible` for `tl::expected` (to correctly recurse into stuff with bad SFINAE, such as `std::vector`).
template <typename T, typename U>
struct pybind11::detail::is_copy_constructible<tl::expected<T, U>>
    : std::conjunction<pybind11::detail::is_copy_constructible<T>, pybind11::detail::is_copy_constructible<U>>
{};

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
            // `pybind11::detail::is_copy_constructible` gives the "correct" result for types such as `std::vector`.
            if constexpr (!std::is_void_v<T> && pybind11::detail::is_copy_constructible<T>::value)
                c.type.def(pybind11::init([](const T &value){return new TT(value);}), "Constructs in the valid state.");
        }
        else
        {
            // Construct with the unexpected value.
            // `pybind11::detail::is_copy_constructible` gives the "correct" result for types such as `std::vector`.
            if constexpr (pybind11::detail::is_copy_constructible<U>::value)
                c.type.def_static("make_unexpected", [](const U &err){return new TT(tl::unexpect, err);}, "Constructs in the error state.");

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
                    return e.value(); // `.value()` should throw on failure.
                }
            }, pybind11::return_value_policy::reference_internal);

            // Get error or throw if none.
            c.type.def("error", [](const TT &e) -> auto &&
            {
                if (e.has_value())
                    throw std::runtime_error("This `tl::expected` doesn't hold an error.");
                else
                    return e.error();
            }, pybind11::return_value_policy::reference_internal);
        }
    }
};
