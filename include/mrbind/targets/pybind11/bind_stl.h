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
template <typename ...P>
struct MRBind::detail::pb11::CustomTypeBinding<std::vector<P...>>
    : public DefaultCustomTypeBinding<std::vector<P...>>
{
    template <typename U>
    [[nodiscard]] static decltype(auto) pybind_init(auto f, pybind11::module_ &m, UnfinishedModule &, const char *n) {return f(pybind11::bind_vector<U>(m, n));}
};
// std::map
#include <map>
template <typename ...P>
struct MRBind::detail::pb11::CustomTypeBinding<std::map<P...>>
    : public DefaultCustomTypeBinding<std::map<P...>>
{
    template <typename U>
    [[nodiscard]] static decltype(auto) pybind_init(auto f, pybind11::module_ &m, UnfinishedModule &, const char *n) {return f(pybind11::bind_map<U>(m, n));}
};
// std::optional
#include <optional>
template <typename T>
struct MRBind::detail::pb11::CustomTypeBinding<std::optional<T>>
    : public DefaultCustomTypeBinding<std::optional<T>>
{
    static void bind_members(pybind11::module_ &, UnfinishedModule &, auto &c, bool second_pass)
    {
        using TT = typename std::remove_reference_t<decltype(c.type)>::type;

        if (!second_pass)
        {
            c.type.def(pybind11::init<>());

            // Allow constructing from `T`.
            c.type.def(pybind11::init<T>());
            pybind11::implicitly_convertible<T, TT>();

            // Allow constructing from `None`.
            c.type.def(pybind11::init([](std::nullptr_t){return TT{};}));
            pybind11::implicitly_convertible<std::nullptr_t, TT>();
        }
        else
        {
            c.type.def("__bool__", [](const TT &opt){return opt.has_value();});
            c.type.def("value", [](const TT &opt) -> const auto & {return opt.value();});
        }
    }
};
// std::variant
#include <variant>
template <typename ...P>
struct MRBind::detail::pb11::CustomTypeBinding<std::variant<P...>>
    : public DefaultCustomTypeBinding<std::variant<P...>>
{
    static void bind_members(pybind11::module_ &, UnfinishedModule &, auto &c, bool second_pass)
    {
        using TT = typename std::remove_reference_t<decltype(c.type)>::type;

        static constexpr auto cur_type = [](const TT &var) -> std::string
        {
            if (var.valueless_by_exception())
                return "";
            else
                return std::visit([]<typename T>(const T &){return pb11::ToPythonName(MRBind::TypeName<T>());}, var);
        };

        if (!second_pass)
        {
            if constexpr ((std::default_initializable<P> && ...))
                c.type.def(pybind11::init<>());

            ([&]{
                // Allow constructing from `P...`.
                c.type.def(pybind11::init<P>());
                pybind11::implicitly_convertible<P, TT>();
            }(), ...);

        }
        else
        {
            c.type.def("current_type", cur_type, "Returns the current type name as a string. Call `get_<TypeName>()` to get the value.");

            ([&]{
                // Allow getting `P...`.
                c.type.def(("get_" + pb11::ToPythonName(MRBind::TypeName<P>())).c_str(), [](const TT &var){return std::get<P>(var);}, "Return this alternative, or throw if it's not active.");
            }(), ...);
        }
    }
};
