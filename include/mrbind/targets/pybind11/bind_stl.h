#pragma once

#include <future>

#include <mrbind/targets/pybind11/core.h>

namespace MRBind::detail::pb11
{
    // Adjust returned futures to shared futures.
    template <typename T>
    struct ReturnTypeTraits<std::future<T>>
    {
        static std::shared_future<T> Adjust(std::future<T> &&fut) {return fut.share();}
    };

    // Recursive adjustment:

    // Adjust `std::vector` elementwise. (What about other containers?)
    template <ReturnTypeNeedsAdjusting T, typename ...P>
    struct ReturnTypeTraits<std::vector<T, P...>>
    {
        static std::vector<typename AdjustedReturnType<T>::type> Adjust(std::vector<T, P...> &&value)
        {
            std::vector<typename AdjustedReturnType<T>::type> ret;
            ret.reserve(value.size());
            for (auto &elem : value)
                ret.push_back((AdjustReturnedValue<T>)(std::move(elem)));
            return ret;
        }
    };
}

// std::vector
#include <vector>
MB_PB11_ADD_CUSTOM_TYPE(
    // Intentionally no custom allocator support for now, to make things easier.
    (template <typename T>),
    (std::vector<T>), (),
    (pybind11::class_<ThisType>),
    (pybind11::bind_vector<ThisType>(m, pb11::ToPythonName(MRBind::BakedTypeNameOrFallback<ThisType>()))),
    (),
    ()
)
// std::map
#include <map>
MB_PB11_ADD_CUSTOM_TYPE(
    (template <typename T, typename U>),
    // Intentionally no custom allocator support for now, to make things easier.
    (std::map<T, U>), (),
    (pybind11::class_<ThisType>),
    (pybind11::bind_map<ThisType>(m, pb11::ToPythonName(MRBind::BakedTypeNameOrFallback<ThisType>()))),
    (),
    ()
)
// std::optional
#include <optional>
MB_PB11_ADD_CUSTOM_TYPE(
    (template <typename T>),
    (std::optional<T>), (),
    (pybind11::class_<ThisType>),
    (m, pb11::ToPythonName(MRBind::BakedTypeNameOrFallback<ThisType>()).c_str()),
    (),
    (
        _.def(pybind11::init<>());

        // Allow constructing from `T`.
        _.def(pybind11::init<T>());
        pybind11::implicitly_convertible<T, std::optional<T>>();

        // Allow constructing from `None`.
        _.def(pybind11::init([](std::nullptr_t){return ThisType{};}));
        pybind11::implicitly_convertible<std::nullptr_t, std::optional<T>>();

        _.def("__bool__", [](const std::optional<T> &opt){return opt.has_value();});
        _.def("value", [](const std::optional<T> &opt) -> const auto & {return opt.value();});
    )
)
// std::variant
#include <variant>
MB_PB11_ADD_CUSTOM_TYPE(
    (template <typename ...P>),
    (std::variant<P...>), (),
    (pybind11::class_<ThisType>),
    (m, pb11::ToPythonName(MRBind::BakedTypeNameOrFallback<ThisType>())),
    (),
    (
        if constexpr ((std::default_initializable<P> && ...))
            _.def(pybind11::init<>());

        static constexpr auto cur_type = [](const std::variant<P...> &var) -> std::string
        {
            if (var.valueless_by_exception())
                return "";
            else
                return std::visit([]<typename T>(const T &){return pb11::ToPythonName(MRBind::TypeName<T>());}, var);
        };

        _.def("current_type", cur_type, "Returns the current type name as a string. Call `get_<TypeName>()` to get the value.");

        ([&]{
            // Allow constructing from `P...`.
            _.def(pybind11::init<P>());
            pybind11::implicitly_convertible<P, std::variant<P...>>();

            // Allow getting `P...`.
            _.def(("get_" + pb11::ToPythonName(MRBind::TypeName<P>())).c_str(), [](const std::variant<P...> &var){return std::get<P>(var);}, "Return this alternative, or throw if it's not active.");
        }(), ...);
    )
)
