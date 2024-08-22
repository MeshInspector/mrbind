#pragma once

#include <future>

namespace MRBind::detail::pb11
{
    // Adjust `std::optional<T>` to `std::unique_ptr<T>`.
    // This is purely to make the API nicer, it makes the object appear as `T` or `None` in Python, instead of `std::optional<T>`.
    template <typename T>
    requires
        // Because we need to be able to move the object into `std::unique_ptr`.
        std::movable<T>
    struct ReturnTypeAdjustment<std::optional<T>>
    {
        static auto Adjust(std::optional<T> &&value)
        {
            typename OptionalReturnType<T>::type ret;
            if (value)
                // Note that pybind11 normally doesn't support `unique_ptr` to builtin types ("holders are not supported for non-custom types", or whatever).
                // But we have code in `TryAddFunc()` that adjusts `unique_ptr`s to builtin types to raw pointers, which works around this.
                ret = OptionalReturnType<T>::make(std::move(*value));
            return AdjustReturnedValue<decltype(ret)>(std::move(ret));
        }
    };
}

// This holds patched versions of pybind11's `bind_vector`, `bind_map`, etc.
// We do that for two reasons:
// * We must set holder types to `shared_ptr<T>`. In theory they provide a template parameter to do that,
//   but we ALSO need to specify a parent class. We can abuse the holder parameter for the parent class, but we can't have both without patching.
namespace pybind11::patched
{
    template <typename Vector, typename... Extras>
    class_<Vector, std::shared_ptr<Vector>, Extras...> bind_vector(handle scope, std::string const &name /*, Args &&...args*/)
    {
        using Class_ = class_<Vector, std::shared_ptr<Vector>, Extras...>;

        // If the value_type is unregistered (e.g. a converting type) or is itself registered
        // module-local then make the vector binding module-local as well:
        using vtype = typename Vector::value_type;
        auto *vtype_info = detail::get_type_info(typeid(vtype));
        bool local = !vtype_info || vtype_info->module_local;

        Class_ cl(scope, name.c_str(), pybind11::module_local(local) /*, std::forward<Args>(args)...*/);

        // Declare the buffer interface if a buffer_protocol() is passed in
        detail::vector_buffer<Vector, Class_ /*, Args...*/>(cl);

        cl.def(init<>());

        // Register comparison-related operators and functions (if possible)
        detail::vector_if_equal_operator<Vector, Class_>(cl);

        // Register stream insertion operator (if possible)
        detail::vector_if_insertion_operator<Vector, Class_>(cl, name);

        // Modifiers require copyable vector value type
        detail::vector_modifiers<Vector, Class_>(cl);

        // Accessor and iterator; return by value if copyable, otherwise we return by ref + keep-alive
        detail::vector_accessor<Vector, Class_>(cl);

        cl.def(
            "__bool__",
            [](const Vector &v) -> bool { return !v.empty(); },
            "Check whether the list is nonempty");

        cl.def("__len__", &Vector::size);

        return cl;
    }

    template <typename Map, typename... Extras>
    class_<Map, std::shared_ptr<Map>, Extras...> bind_map(handle scope, const std::string &name /*, Args &&...args*/)
    {
        using KeyType = typename Map::key_type;
        using MappedType = typename Map::mapped_type;
        using KeysView = detail::keys_view<Map>;
        using ValuesView = detail::values_view<Map>;
        using ItemsView = detail::items_view<Map>;
        using Class_ = class_<Map, std::shared_ptr<Map>, Extras...>;

        // If either type is a non-module-local bound type then make the map binding non-local as well;
        // otherwise (e.g. both types are either module-local or converting) the map will be
        // module-local.
        auto *tinfo = detail::get_type_info(typeid(MappedType));
        bool local = !tinfo || tinfo->module_local;
        if (local) {
            tinfo = detail::get_type_info(typeid(KeyType));
            local = !tinfo || tinfo->module_local;
        }

        Class_ cl(scope, name.c_str(), pybind11::module_local(local) /*, std::forward<Args>(args)...*/);
        class_<KeysView> keys_view(
            scope, ("KeysView[" + name + "]").c_str(), pybind11::module_local(local));
        class_<ValuesView> values_view(
            scope, ("ValuesView[" + name + "]").c_str(), pybind11::module_local(local));
        class_<ItemsView> items_view(
            scope, ("ItemsView[" + name + "]").c_str(), pybind11::module_local(local));

        cl.def(init<>());

        // Register stream insertion operator (if possible)
        detail::map_if_insertion_operator<Map, Class_>(cl, name);

        cl.def(
            "__bool__",
            [](const Map &m) -> bool { return !m.empty(); },
            "Check whether the map is nonempty");

        cl.def(
            "__iter__",
            [](Map &m) { return make_key_iterator(m.begin(), m.end()); },
            keep_alive<0, 1>() /* Essential: keep map alive while iterator exists */
        );

        cl.def(
            "keys",
            [](Map &m) { return KeysView{m}; },
            keep_alive<0, 1>() /* Essential: keep map alive while view exists */
        );

        cl.def(
            "values",
            [](Map &m) { return ValuesView{m}; },
            keep_alive<0, 1>() /* Essential: keep map alive while view exists */
        );

        cl.def(
            "items",
            [](Map &m) { return ItemsView{m}; },
            keep_alive<0, 1>() /* Essential: keep map alive while view exists */
        );

        cl.def(
            "__getitem__",
            [](Map &m, const KeyType &k) -> MappedType & {
                auto it = m.find(k);
                if (it == m.end()) {
                    throw key_error();
                }
                return it->second;
            },
            return_value_policy::reference_internal // ref + keepalive
        );

        cl.def("__contains__", [](Map &m, const KeyType &k) -> bool {
            auto it = m.find(k);
            if (it == m.end()) {
                return false;
            }
            return true;
        });
        // Fallback for when the object is not of the key type
        cl.def("__contains__", [](Map &, const object &) -> bool { return false; });

        // Assignment provided only if the type is copyable
        detail::map_assignment<Map, Class_>(cl);

        cl.def("__delitem__", [](Map &m, const KeyType &k) {
            auto it = m.find(k);
            if (it == m.end()) {
                throw key_error();
            }
            m.erase(it);
        });

        cl.def("__len__", &Map::size);

        keys_view.def("__len__", [](KeysView &view) { return view.map.size(); });
        keys_view.def(
            "__iter__",
            [](KeysView &view) { return make_key_iterator(view.map.begin(), view.map.end()); },
            keep_alive<0, 1>() /* Essential: keep view alive while iterator exists */
        );
        keys_view.def("__contains__", [](KeysView &view, const KeyType &k) -> bool {
            auto it = view.map.find(k);
            if (it == view.map.end()) {
                return false;
            }
            return true;
        });
        // Fallback for when the object is not of the key type
        keys_view.def("__contains__", [](KeysView &, const object &) -> bool { return false; });

        values_view.def("__len__", [](ValuesView &view) { return view.map.size(); });
        values_view.def(
            "__iter__",
            [](ValuesView &view) { return make_value_iterator(view.map.begin(), view.map.end()); },
            keep_alive<0, 1>() /* Essential: keep view alive while iterator exists */
        );

        items_view.def("__len__", [](ItemsView &view) { return view.map.size(); });
        items_view.def(
            "__iter__",
            [](ItemsView &view) { return make_iterator(view.map.begin(), view.map.end()); },
            keep_alive<0, 1>() /* Essential: keep view alive while iterator exists */
        );

        return cl;
    }
}

// std::vector
#include <vector>
template <typename T, typename ...P>
struct MRBind::detail::pb11::CustomTypeBinding<std::vector<T, P...>>
    : DefaultCustomTypeBinding<std::vector<T, P...>>,
    RegisterTypeWithCustomBindingIfApplicable<T>
{
    template <typename U, typename ...Q>
    [[nodiscard]] static decltype(auto) pybind_init(auto f, pybind11::module_ &m, const char *n) {return f(pybind11::patched::bind_vector<U, Q...>(m, n));}

    #if MB_PB11_ENABLE_CXX_STYLE_CONTAINER_METHODS
    template <bool InDerivedClass>
    static void bind_members(pybind11::module_ &, auto &c)
    {
        using TT = typename std::remove_reference_t<decltype(c.type)>::type;

        // Copy constructor.
        if constexpr (pybind11::detail::is_copy_constructible<std::vector<T, P...>>::value)
        {
            c.type.def(pybind11::init<const std::vector<T, P...> &>());
            if constexpr (InDerivedClass)
                pybind11::implicitly_convertible<std::vector<T, P...>, TT>();
        }

        if constexpr (!InDerivedClass)
        {
            c.type.def("size", [](const TT &v){return v.size();});
            if constexpr (std::copyable<typename TT::value_type>)
            {
                if constexpr (std::is_default_constructible_v<typename TT::value_type>)
                    c.type.def("resize", [](TT &v, std::size_t n){v.resize(n);});
                c.type.def("resize", [](TT &v, std::size_t n, const typename TT::value_type &value){v.resize(n, value);});
            }
        }
    }
    #endif
};
// std::map
#include <map>
template <typename T, typename U, typename ...P>
struct MRBind::detail::pb11::CustomTypeBinding<std::map<T, U, P...>>
    : DefaultCustomTypeBinding<std::map<T, U, P...>>,
    RegisterTypeWithCustomBindingIfApplicable<T, U>
{
    template <typename V, typename ...Q>
    [[nodiscard]] static decltype(auto) pybind_init(auto f, pybind11::module_ &m, const char *n) {return f(pybind11::patched::bind_map<V, Q...>(m, n));}

    #if MB_PB11_ENABLE_CXX_STYLE_CONTAINER_METHODS
    template <bool InDerivedClass>
    static void bind_members(pybind11::module_ &, auto &c)
    {
        using TT = typename std::remove_reference_t<decltype(c.type)>::type;

        // Copy constructor.
        if constexpr (pybind11::detail::is_copy_constructible<std::map<T, U, P...>>::value)
        {
            c.type.def(pybind11::init<const std::map<T, U, P...> &>());
            if constexpr (InDerivedClass)
                pybind11::implicitly_convertible<std::map<T, U, P...>, TT>();
        }

        if constexpr (!InDerivedClass)
        {
            c.type.def("size", [](const TT &v){return v.size();});
        }
    }
    #endif
};
// std::optional
#include <optional>
template <typename T>
struct MRBind::detail::pb11::CustomTypeBinding<std::optional<T>>
    : DefaultCustomTypeBinding<std::optional<T>>,
    RegisterTypeWithCustomBindingIfApplicable<T>
{
    template <bool InDerivedClass>
    static void bind_members(pybind11::module_ &, auto &c)
    {
        using TT = typename std::remove_reference_t<decltype(c.type)>::type;

        if constexpr (std::default_initializable<std::optional<T>>)
            c.type.def(pybind11::init<>());

        // Copy constructor.
        if constexpr (pybind11::detail::is_copy_constructible<std::optional<T>>::value)
        {
            c.type.def(pybind11::init<const std::optional<T> &>());
            if constexpr (InDerivedClass)
                pybind11::implicitly_convertible<std::optional<T>, TT>();
        }

        // Allow constructing from `T`, but only if copyable!
        if constexpr (std::copyable<T>)
        {
            c.type.def(pybind11::init<T>());
            pybind11::implicitly_convertible<T, TT>();
        }

        // Allow constructing from `None`.
        c.type.def(pybind11::init([](std::nullptr_t){return TT{};}));
        pybind11::implicitly_convertible<std::nullptr_t, TT>();

        if constexpr (!InDerivedClass)
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
    : public DefaultCustomTypeBinding<std::variant<P...>>,
    RegisterTypeWithCustomBindingIfApplicable<P...>
{
    template <bool InDerivedClass>
    static void bind_members(pybind11::module_ &, auto &c)
    {
        using TT = typename std::remove_reference_t<decltype(c.type)>::type;

        static constexpr auto cur_type = [](const TT &var) -> std::string
        {
            if (var.valueless_by_exception())
                return "";
            else
                return std::visit([]<typename T>(const T &){return pb11::ToPythonName(MRBind::TypeName<T>());}, var);
        };

        if constexpr ((std::default_initializable<P> && ...))
            c.type.def(pybind11::init<>());

        // Copy constructor.
        if constexpr (pybind11::detail::is_copy_constructible<std::variant<P...>>::value)
        {
            c.type.def(pybind11::init<const std::variant<P...> &>());
            if constexpr (InDerivedClass)
                pybind11::implicitly_convertible<std::variant<P...>, TT>();
        }

        ([&]{
            // Allow constructing from `P...`.
            c.type.def(pybind11::init<P>());
            pybind11::implicitly_convertible<P, TT>();
        }(), ...);

        if constexpr (!InDerivedClass)
        {
            c.type.def("current_type", cur_type, "Returns the current type name as a string. Call `get_<TypeName>()` to get the value.");

            ([&]{
                // Allow getting `P...`.
                c.type.def(("get_" + pb11::ToPythonName(MRBind::TypeName<P>())).c_str(), [](const TT &var){return std::get<P>(var);}, "Return this alternative, or throw if it's not active.");
            }(), ...);
        }
    }
};
