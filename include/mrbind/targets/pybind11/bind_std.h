#pragma once

// Adjust `std::optional<T>` to `std::unique_ptr<T>`.
// This is purely to make the API nicer, it makes the object appear as `T` or `None` in Python, instead of `std::optional<T>`.
template <typename T>
requires
    // Because we need to be able to move the object into `std::unique_ptr`.
    std::movable<T>
struct MRBind::pb11::ReturnTypeTraits<std::optional<T>>
{
    static decltype(auto) Adjust(std::optional<T> &&value)
    {
        typename OptionalReturnType<T>::type ret;
        if (value)
            // Note that pybind11 normally doesn't support `unique_ptr` to builtin types ("holders are not supported for non-custom types", or whatever).
            // But we have code in `TryAddFunc()` that adjusts `unique_ptr`s to builtin types to raw pointers, which works around this.
            ret = OptionalReturnType<T>::make(std::move(*value));
        return AdjustReturnedValue<decltype(ret)>(std::move(ret));
    }
};

// Propagate type registration through `std::pair`.
template <typename T, typename U>
struct MRBind::pb11::CustomizeDecomposingTypeForRegistration<std::pair<T, U>> {using type = CatTypeLists<DecomposeTypeForRegistration<T>, DecomposeTypeForRegistration<U>>;};




// This holds patched versions of pybind11's `bind_vector`, `bind_map`, etc.
namespace pybind11::patched
{
    template <typename Vector, typename... Extras>
    class_<Vector, std::shared_ptr<Vector>, Extras...> bind_vector(handle scope, std::string const &name /*, Args &&...args*/)
    {
        using ValueType = typename Vector::value_type;

        using Class_ = class_<Vector, std::shared_ptr<Vector>, Extras...>;

        Class_ cl(scope, name.c_str() /*, std::forward<Args>(args)...*/);

        // Declare the buffer interface if a buffer_protocol() is passed in
        detail::vector_buffer<Vector, Class_ /*, Args...*/>(cl);

        cl.def(init<>());

        // Register comparison-related operators and functions (if possible)
        if constexpr (MRBind::pb11::IsEqualityComparable<typename Vector::value_type>::value)
            detail::vector_if_equal_operator<Vector, Class_>(cl);

        // Modifiers require copyable vector value type
        detail::vector_modifiers<Vector, Class_>(cl);

        // Implicit conversion from a python list.
        // Putting `pybind11::iterable` there also kinda works, but has a stronger effect of also accepting other C++ containers.
        // It messes up with overload resolution really badly. For example, if you have a template accepting vectors with two different element types,
        //   if the overload isn't selected during the first pass (which can happen for any reason, e.g. I believe even `None`->pointer conversion forces
        //   delaying the overload resolution to the second pass), then during the second pass ANY vector type will match, which makes us sensitive to the order of the overloads,
        //   which is unworkable.
        pybind11::implicitly_convertible<pybind11::list, Vector>();

        // Accessor and iterator; return by value if copyable, otherwise we return by ref + keep-alive
        detail::vector_accessor<Vector, Class_>(cl);

        cl.def(
            +"__bool__",
            +[](const Vector &v) -> bool { return !v.empty(); },
            +"Check whether the list is nonempty");

        cl.def(+"__len__", &Vector::size);

        // Convert to string.
        if constexpr (requires(std::ostream &stream, const ValueType &elem){stream << elem;})
        {
            cl.def(
                +"__repr__",
                [name](const Vector &s)
                {
                    std::ostringstream ss;
                    ss << name << '[';
                    bool first = true;
                    for (const auto &elem : s)
                    {
                        if (first)
                            first = false;
                        else
                            ss << ", ";
                        if constexpr (std::is_same_v<ValueType, char> || std::is_same_v<ValueType, unsigned char> || std::is_same_v<ValueType, signed char>)
                            ss << int(elem);
                        else
                            ss << elem;
                    }
                    ss << ']';
                    return std::move(ss).str();
                },
                +"Return the canonical string representation of this map."
            );
        }

        // The data pointer as an integer.
        cl.def(
            +"data_pointer",
            [](const Vector &v)
            {
                return std::uintptr_t(v.data());
            },
            +"Returns the pointer to the contiguous vector contents, as an integer."
        );

        // The sizeof of the element type.
        cl.def_property_readonly_static(
            +"element_type_byte_size",
            [](const pybind11::object &)
            {
                return sizeof(ValueType);
            },
            +"Returns the size of the element type, in bytes. Use with `data_pointer()`."
        );

        return cl;
    }

    template <typename Map, typename... Extras>
    class_<Map, std::shared_ptr<Map>, Extras...> bind_map(handle scope, const std::string &name /*, Args &&...args*/)
    {
        using KeyType = typename Map::key_type;
        using MappedType = typename Map::mapped_type;
        using KeysView = detail::keys_view;
        using ValuesView = detail::values_view;
        using ItemsView = detail::items_view;
        using Class_ = class_<Map, std::shared_ptr<Map>, Extras...>;

        Class_ cl(scope, name.c_str() /*, std::forward<Args>(args)...*/);

        // Wrap KeysView if it wasn't already wrapped
        if (!detail::get_type_info(typeid(KeysView))) {
            class_<KeysView> keys_view(scope, "KeysView");
            keys_view.def("__len__", &KeysView::len);
            keys_view.def("__iter__",
                          &KeysView::iter,
                          keep_alive<0, 1>() /* Essential: keep view alive while iterator exists */
            );
            keys_view.def("__contains__", &KeysView::contains);
        }
        // Similarly for ValuesView:
        if (!detail::get_type_info(typeid(ValuesView))) {
            class_<ValuesView> values_view(scope, "ValuesView");
            values_view.def("__len__", &ValuesView::len);
            values_view.def("__iter__",
                            &ValuesView::iter,
                            keep_alive<0, 1>() /* Essential: keep view alive while iterator exists */
            );
        }
        // Similarly for ItemsView:
        if (!detail::get_type_info(typeid(ItemsView))) {
            class_<ItemsView> items_view(scope, "ItemsView");
            items_view.def("__len__", &ItemsView::len);
            items_view.def("__iter__",
                           &ItemsView::iter,
                           keep_alive<0, 1>() /* Essential: keep view alive while iterator exists */
            );
        }

        cl.def(init<>());

        // Register stream insertion operator (if possible)
        detail::map_if_insertion_operator<Map, Class_>(cl, name);

        cl.def(
            +"__bool__",
            +[](const Map &m) -> bool { return !m.empty(); },
            +"Check whether the map is nonempty");

        cl.def(
            +"__iter__",
            +[](Map &m) { return make_key_iterator(m.begin(), m.end()); },
            keep_alive<0, 1>() /* Essential: keep map alive while iterator exists */
        );

        cl.def(
            "keys",
            [](Map &m) { return std::unique_ptr<KeysView>(new detail::KeysViewImpl<Map>(m)); },
            keep_alive<0, 1>() /* Essential: keep map alive while view exists */
        );

        cl.def(
            "values",
            [](Map &m) { return std::unique_ptr<ValuesView>(new detail::ValuesViewImpl<Map>(m)); },
            keep_alive<0, 1>() /* Essential: keep map alive while view exists */
        );

        cl.def(
            "items",
            [](Map &m) { return std::unique_ptr<ItemsView>(new detail::ItemsViewImpl<Map>(m)); },
            keep_alive<0, 1>() /* Essential: keep map alive while view exists */
        );

        cl.def(
            +"__getitem__",
            +[](Map &m, const KeyType &k) -> MappedType & {
                auto it = m.find(k);
                if (it == m.end()) {
                    throw key_error();
                }
                return it->second;
            },
            return_value_policy::reference_internal // ref + keepalive
        );

        cl.def(+"__contains__", +[](Map &m, const KeyType &k) -> bool {
            auto it = m.find(k);
            if (it == m.end()) {
                return false;
            }
            return true;
        });
        // Fallback for when the object is not of the key type
        cl.def(+"__contains__", +[](Map &, const object &) -> bool { return false; });

        // Assignment provided only if the type is copyable
        detail::map_assignment<Map, Class_>(cl);

        cl.def(+"__delitem__", +[](Map &m, const KeyType &k) {
            auto it = m.find(k);
            if (it == m.end()) {
                throw key_error();
            }
            m.erase(it);
        });

        cl.def(+"__len__", &Map::size);

        return cl;
    }
}

// std::vector
#include <vector>
template <typename T, typename A>
struct MRBind::pb11::CustomTypeBinding<std::vector<T, A>>
    : DefaultCustomTypeBinding<std::vector<T, A>>,
    RegisterTypeDependencies<AdjustContainerElemType<T>>
{
    [[nodiscard]] static decltype(auto) pybind_init(auto f, pybind11::handle &m, const char *n) {return f(pybind11::patched::bind_vector<std::vector<T, A>>(m, n));}

    // Make sure the element type is loaded first.
    // Normally it doesn't matter, but it matters here because we register some methods directly in `pybind_init`.
    // We could just avoid doing that here, but it's harder to pull off for `std::map`, which registers SEVERAL different types in the `bind_map` (duh).
    static std::unordered_set<MRBind::TypeIndex> base_typeids() {return MakeBaseTypeids<T>();}

    #if MB_PB11_ENABLE_CXX_STYLE_CONTAINER_METHODS
    static void bind_members(typename DefaultCustomTypeBinding<std::vector<T, A>>::pybind_type &c)
    {
        // Copy constructor.
        if constexpr (pybind11::detail::is_copy_constructible<std::vector<T, A>>::value)
            c.def(pybind11::init<const std::vector<T, A> &>());

        c.def(+"size", +[](const std::vector<T, A> &v){return v.size();});
        c.def(+"empty", +[](const std::vector<T, A> &v){return v.empty();});
        if constexpr (pybind11::detail::is_copy_constructible<T>::value && pybind11::detail::is_copy_assignable<T>::value)
        {
            if constexpr (std::is_default_constructible_v<T>)
                c.def("resize", +[](std::vector<T, A> &v, std::size_t n){v.resize(n);});
            c.def("resize", +[](std::vector<T, A> &v, std::size_t n, const T &value){v.resize(n, value);});
        }
    }
    #endif
};
// Basic map-like.
namespace MRBind::pb11::detail::BindStd
{
    template <typename T>
    struct BindMapLike
        : DefaultCustomTypeBinding<T>,
        RegisterTypeDependencies<typename T::key_type, AdjustContainerElemType<typename T::mapped_type>>
    {
        [[nodiscard]] static decltype(auto) pybind_init(auto f, pybind11::handle &m, const char *n) {return f(pybind11::patched::bind_map<T>(m, n));}

        // Make sure the element type is loaded first.
        // Normally it doesn't matter, but it matters here because we register some methods directly in `pybind_init`.
        // We could just avoid doing that for `std::vector`, but it's harder to pull off here, because `bind_map` registers SEVERAL different types (duh).
        static std::unordered_set<MRBind::TypeIndex> base_typeids() {return MakeBaseTypeids<typename T::key_type, typename T::mapped_type>();}

        #if MB_PB11_ENABLE_CXX_STYLE_CONTAINER_METHODS
        static void bind_members(typename DefaultCustomTypeBinding<T>::pybind_type &c)
        {
            using TT = typename std::remove_reference_t<decltype(c)>::type;

            // Copy constructor.
            if constexpr (pybind11::detail::is_copy_constructible<T>::value)
                c.def(pybind11::init<const T &>());

            c.def(+"size", +[](const T &v){return v.size();});
        }
        #endif
    };
}
// std::map
#include <map>
template <typename T, typename U, typename L, typename A>
struct MRBind::pb11::CustomTypeBinding<std::map<T,U,L,A>> : MRBind::pb11::detail::BindStd::BindMapLike<std::map<T,U,L,A>> {};
template <typename T, typename U, typename L, typename A>
struct MRBind::pb11::CustomTypeBinding<std::multimap<T,U,L,A>> : MRBind::pb11::detail::BindStd::BindMapLike<std::multimap<T,U,L,A>> {};
// std::unordered_map
#include <unordered_map>
template <typename T, typename U, typename H, typename E, typename A>
struct MRBind::pb11::CustomTypeBinding<std::unordered_map<T,U,H,E,A>> : MRBind::pb11::detail::BindStd::BindMapLike<std::unordered_map<T,U,H,E,A>> {};
template <typename T, typename U, typename H, typename E, typename A>
struct MRBind::pb11::CustomTypeBinding<std::unordered_multimap<T,U,H,E,A>> : MRBind::pb11::detail::BindStd::BindMapLike<std::unordered_multimap<T,U,H,E,A>> {};
// std::array
#include <array>
template <typename T, std::size_t N>
struct MRBind::pb11::CustomTypeBinding<std::array<T, N>>
    : DefaultCustomTypeBinding<std::array<T, N>>,
    RegisterTypeDependencies<AdjustContainerElemType<T>>
{
    [[nodiscard]] static std::string cpp_type_name()
    {
        // Not using the native name here, because `std::size_t N` ends up being spelled as `42ul`.
        return std::string("std::array<") + TypeidTypeName<T>() + ", " + std::to_string(N) + ">";
    }

    static void bind_members(typename DefaultCustomTypeBinding<std::array<T, N>>::pybind_type &c)
    {
        // Default constructor.
        if constexpr (std::default_initializable<std::array<T, N>>)
            c.def(pybind11::init(+[]{return std::make_shared<std::array<T, N>>();}));

        // Copy constructor.
        if constexpr (pybind11::detail::is_copy_constructible<std::array<T, N>>::value)
            c.def(pybind11::init<const std::array<T, N> &>());

        // Constructor from a range. Mostly copied from `pybind11::detail::vector_modifiers`.
        if constexpr (pybind11::detail::is_copy_assignable<T>::value || N == 0)
        {
            c.def(pybind11::init(
                +[](const pybind11::iterable &it)
                {
                    std::shared_ptr<std::array<T, N>> ret = std::make_shared<std::array<T, N>>();

                    std::size_t i = 0;
                    for (pybind11::handle h : it)
                    {
                        if (i >= N)
                            throw std::runtime_error("Too many elements in `std::array` initializer, expected " + std::to_string(N) + ".");
                        if constexpr (N > 0)
                            (*ret)[i++] = h.cast<T>();
                    }
                    if (i < N)
                        throw std::runtime_error("Too few elements in `std::array` initializer, expected " + std::to_string(N) + ".");

                    return ret;
                }
            ), ("Initialize from a list of " + std::to_string(N) + "elements.").c_str());
        }

        // Length.
        c.def(+"__len__", +[](const std::array<T, N> &){return N;});

        // Indexing operator (read).
        TryAddFuncSimple<
            FuncKind::member_nonstatic,
            +[](std::array<T, N> &array, std::size_t i) -> auto &&
            {
                if (i >= N)
                    throw pybind11::index_error();
                return array[i];
            },
            // Parameters:
            std::array<T, N> &, // `this`
            std::size_t
        >(
            c,
            "__getitem__"
        );

        // Indexing operator (write).
        if constexpr (pybind11::detail::is_copy_assignable<T>::value)
        {
            TryAddFuncSimple<
                FuncKind::member_nonstatic,
                +[](std::array<T, N> &array, std::size_t i, const T &value)
                {
                    if (i >= N)
                        throw pybind11::index_error();
                    array[i] = value;
                },
                // Parameters:
                std::array<T, N> &, // `this`
                std::size_t,
                const T &
            >(
                c,
                "__setitem__"
            );
        }

        // Iteratable.
        (TryMakeIterable<std::array<T, N>>)(c);

        // Converting to a string.
        if constexpr (requires(std::ostream &o, const T &t){o << t;})
        {
            c.def(
                +"__repr__",
                +[](const std::array<T, N> &v)
                {
                    static const std::string name = ToPythonName(CustomTypeBinding::cpp_type_name());
                    std::ostringstream s;
                    s << name << '[';
                    for (std::size_t i = 0; i < v.size(); i++)
                    {
                        if (i != 0)
                            s << ", ";
                        s << v[i];
                    }
                    s << ']';
                    return std::move(s).str();
                }
            );
        }
    }
};
// Basic set-like.
namespace MRBind::pb11::detail::BindStd
{
    template <typename T>
    requires std::same_as<typename T::value_type, typename T::key_type> // Basic sanity check.
    struct BindSetLike
        : DefaultCustomTypeBinding<T>,
        RegisterTypeDependencies<AdjustContainerElemType<typename T::value_type>>
    {
        static void bind_members(typename DefaultCustomTypeBinding<T>::pybind_type &c)
        {
            MRBind::pb11::TryMakeIterable<T>(c);

            using ValueType = typename T::value_type;

            // This interface is modelled after this: https://docs.python.org/3/library/stdtypes.html#set
            // I only implemented some basic functions.

            // Default constructor.
            c.def(pybind11::init<>());

            // Constructor from a range. Mostly copied from `pybind11::detail::vector_modifiers`.
            if constexpr (pybind11::detail::is_copy_assignable<T>::value)
            {
                c.def(pybind11::init(
                    +[](const pybind11::iterable &it)
                    {
                        std::shared_ptr<T> ret = std::make_shared<T>();
                        for (pybind11::handle h : it)
                            ret->insert(h.cast<ValueType>());
                        return ret;
                    }
                ));
            }

            // Size.
            c.def(+"__len__", +[](const T &s){return s.size();});

            // Check for element.
            c.def(
                +"__contains__",
                +[](T &s, const ValueType &k) -> bool
                {
                    return s.contains(k);
                }
            );

            // Add element.
            if constexpr (std::copyable<T>)
            {
                MRBind::pb11::TryAddFuncSimple<
                    MRBind::pb11::FuncKind::member_nonstatic,
                    +[](T &s, const ValueType &k)
                    {
                        s.insert(k);
                    },
                    T &, const ValueType &
                >(
                    c,
                    "add"
                );
            }

            // Remove element or throw.
            MRBind::pb11::TryAddFuncSimple<
                MRBind::pb11::FuncKind::member_nonstatic,
                +[](T &s, const ValueType &k)
                {
                    auto it = s.find(k);
                    if (it == s.end())
                        throw pybind11::key_error("No such element to `remove()`.");
                    s.erase(it);
                },
                T &, const ValueType &
            >(
                c,
                "remove"
            );

            // Remove element or do nothing.
            MRBind::pb11::TryAddFuncSimple<
                MRBind::pb11::FuncKind::member_nonstatic,
                +[](T &s, const ValueType &k)
                {
                    return s.erase(k); // This method returns nothing for Python sets, while we return the number of the erased elements. Why not.
                },
                T &, const ValueType &
            >(
                c,
                "discard"
            );

            // Remove any element or throw.
            MRBind::pb11::TryAddFuncSimple<
                MRBind::pb11::FuncKind::member_nonstatic,
                +[](T &s)
                {
                    if (s.empty())
                        throw pybind11::key_error("Can't `pop()` from an empty set.");
                    s.erase(s.begin());
                },
                T &
            >(
                c,
                "pop"
            );

            // Convert to string.
            if constexpr (requires(std::ostream &stream, const ValueType &elem){stream << elem;})
            {
                c.def(
                    +"__repr__",
                    +[](const T &s)
                    {
                        static const std::string name = ToPythonName(BindSetLike::cpp_type_name());
                        std::ostringstream ss;
                        ss << name << '{';
                        bool first = true;
                        for (const auto &elem : s)
                        {
                            if (first)
                                first = false;
                            else
                                ss << ", ";
                            ss << elem;
                        }
                        ss << '}';
                        return std::move(ss).str();
                    },
                    "Return the canonical string representation of this map."
                );
            }
        }
    };
}
// std::set
#include <set>
template <typename T, typename C, typename A>
struct MRBind::pb11::CustomTypeBinding<std::set<T,C,A>> : MRBind::pb11::detail::BindStd::BindSetLike<std::set<T,C,A>> {};
template <typename T, typename C, typename A>
struct MRBind::pb11::CustomTypeBinding<std::multiset<T,C,A>> : MRBind::pb11::detail::BindStd::BindSetLike<std::multiset<T,C,A>> {};
// std::unordered_set
#include <unordered_set>
template <typename T, typename H, typename E, typename A>
struct MRBind::pb11::CustomTypeBinding<std::unordered_set<T,H,E,A>> : MRBind::pb11::detail::BindStd::BindSetLike<std::unordered_set<T,H,E,A>> {};
template <typename T, typename H, typename E, typename A>
struct MRBind::pb11::CustomTypeBinding<std::unordered_multiset<T,H,E,A>> : MRBind::pb11::detail::BindStd::BindSetLike<std::unordered_multiset<T,H,E,A>> {};
// std::optional
#include <optional>
template <typename T>
struct MRBind::pb11::CustomTypeBinding<std::optional<T>>
    : DefaultCustomTypeBinding<std::optional<T>>,
    RegisterTypeDependencies<T>
{
    static void bind_members(typename DefaultCustomTypeBinding<std::optional<T>>::pybind_type &c)
    {
        if constexpr (std::default_initializable<std::optional<T>>)
            c.def(pybind11::init<>());

        // Copy constructor.
        if constexpr (pybind11::detail::is_copy_constructible<std::optional<T>>::value)
            c.def(pybind11::init<const std::optional<T> &>());

        // Allow constructing from `T`, but only if copyable!
        if constexpr (std::copyable<T>)
        {
            c.def(pybind11::init<T>());
            pybind11::implicitly_convertible<T, std::optional<T>>();
        }

        // Allow constructing from `None`.
        c.def(pybind11::init(+[](std::nullptr_t){return std::optional<T>{};}));
        pybind11::implicitly_convertible<std::nullptr_t, std::optional<T>>();

        c.def(+"__bool__", +[](const std::optional<T> &opt){return opt.has_value();});

        if constexpr (std::copyable<T>)
        {
            c.def(+"value", +[](const std::optional<T> &opt) -> const auto & {return opt.value();}, pybind11::return_value_policy::reference_internal);
        }
    }
};
// std::variant
#include <variant>
template <typename ...P>
struct MRBind::pb11::CustomTypeBinding<std::variant<P...>>
    : DefaultCustomTypeBinding<std::variant<P...>>,
    RegisterTypeDependencies<P...>
{
    static void bind_members(typename DefaultCustomTypeBinding<std::variant<P...>>::pybind_type &c)
    {
        static constexpr auto cur_type = [](const std::variant<P...> &var) -> std::string
        {
            if (var.valueless_by_exception())
                return "";
            else
                return std::visit([]<typename T>(const T &){return pb11::ToPythonName(TypeidTypeName<T>());}, var);
        };

        if constexpr ((std::default_initializable<P> && ...))
            c.def(pybind11::init<>());

        // Copy constructor.
        if constexpr (pybind11::detail::is_copy_constructible<std::variant<P...>>::value)
            c.def(pybind11::init<const std::variant<P...> &>());

        ([&]{
            // Allow constructing from `P...`.
            c.def(pybind11::init<P>());
            pybind11::implicitly_convertible<P, std::variant<P...>>();
        }(), ...);

        c.def(+"current_type", +cur_type, +"Returns the current type name as a string. Call `get_<TypeName>()` to get the value.");

        ([&]{
            // Allow getting `P...`.
            c.def(("get_" + pb11::ToPythonName(TypeidTypeName<P>())).c_str(), +[](const std::variant<P...> &var){return std::get<P>(var);}, "Return this alternative, or throw if it's not active.");
        }(), ...);
    }
};
template <>
struct MRBind::pb11::CustomTypeBinding<std::monostate> : DefaultCustomTypeBinding<std::monostate> {};
