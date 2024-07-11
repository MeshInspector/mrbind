#pragma once

#include <future>


// std::vector
#include <vector>
template <typename ...P>
struct MRBind::detail::pb11::CustomTypeBinding<std::vector<P...>>
    : public DefaultCustomTypeBinding<std::vector<P...>>
{
    template <typename U>
    [[nodiscard]] static decltype(auto) pybind_init(auto f, pybind11::module_ &m, const char *n) {return f(pybind11::bind_vector<U>(m, n));}

    #if MB_PB11_ENABLE_CXX_STYLE_CONTAINER_METHODS
    static void bind_members(pybind11::module_ &, auto &c, bool second_pass)
    {
        if (!second_pass)
            return;

        using TT = typename std::remove_reference_t<decltype(c.type)>::type;
        c.type.def("size", [](const TT &v){return v.size();});
        if constexpr (std::copyable<typename TT::value_type>)
        {
            if constexpr (std::is_default_constructible_v<typename TT::value_type>)
                c.type.def("resize", [](TT &v, std::size_t n){v.resize(n);});
            c.type.def("resize", [](TT &v, std::size_t n, const typename TT::value_type &value){v.resize(n, value);});
        }
    }
    #endif
};
// std::map
#include <map>
template <typename ...P>
struct MRBind::detail::pb11::CustomTypeBinding<std::map<P...>>
    : public DefaultCustomTypeBinding<std::map<P...>>
{
    template <typename U>
    [[nodiscard]] static decltype(auto) pybind_init(auto f, pybind11::module_ &m, const char *n) {return f(pybind11::bind_map<U>(m, n));}

    #if MB_PB11_ENABLE_CXX_STYLE_CONTAINER_METHODS
    static void bind_members(pybind11::module_ &, auto &c, bool second_pass)
    {
        if (!second_pass)
            return;

        using TT = typename std::remove_reference_t<decltype(c.type)>::type;
        c.type.def("size", [](const TT &v){return v.size();});
    }
    #endif
};
// std::optional
#include <optional>
template <typename T>
struct MRBind::detail::pb11::CustomTypeBinding<std::optional<T>>
    : public DefaultCustomTypeBinding<std::optional<T>>
{
    static void bind_members(pybind11::module_ &, auto &c, bool second_pass)
    {
        using TT = typename std::remove_reference_t<decltype(c.type)>::type;

        if (!second_pass)
        {
            c.type.def(pybind11::init<>());

            // Allow constructing from `T`, but only if copyable!
            if constexpr (std::copyable<T>)
            {
                c.type.def(pybind11::init<T>());
                pybind11::implicitly_convertible<T, TT>();
            }

            // Allow constructing from `None`.
            c.type.def(pybind11::init([](std::nullptr_t){return TT{};}));
            pybind11::implicitly_convertible<std::nullptr_t, TT>();
        }
        else
        {
            c.type.def("__bool__", [](const TT &opt){return opt.has_value();});

            if constexpr (std::copyable<T>)
            {
                c.type.def("value", [](const TT &opt) -> const auto & {return opt.value();});
            }
        }
    }
};
// std::variant
#include <variant>
template <typename ...P>
struct MRBind::detail::pb11::CustomTypeBinding<std::variant<P...>>
    : public DefaultCustomTypeBinding<std::variant<P...>>
{
    static void bind_members(pybind11::module_ &, auto &c, bool second_pass)
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
