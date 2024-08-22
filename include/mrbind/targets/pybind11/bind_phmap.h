#pragma once

#include <parallel_hashmap/phmap.h>
// phmap::flat_hash_map
template <typename T, typename ...P>
struct MRBind::detail::pb11::CustomTypeBinding<phmap::flat_hash_map<T, P...>>
    : DefaultCustomTypeBinding<phmap::flat_hash_map<T, P...>>,
    RegisterTypeWithCustomBindingIfApplicable<T>
{
    template <typename U, typename ...Q>
    [[nodiscard]] static decltype(auto) pybind_init(auto f, pybind11::module_ &m, const char *n) {return f(pybind11::bind_map<U, Q...>(m, n));}

    #if MB_PB11_ENABLE_CXX_STYLE_CONTAINER_METHODS
    template <bool InDerivedClass>
    static void bind_members(pybind11::module_ &, auto &c)
    {
        using TT = typename std::remove_reference_t<decltype(c.type)>::type;

        // Copy constructor.
        if constexpr (pybind11::detail::is_copy_constructible<phmap::flat_hash_map<T, P...>>::value)
        {
            c.type.def(pybind11::init<const phmap::flat_hash_map<T, P...> &>());
            if constexpr (InDerivedClass)
                pybind11::implicitly_convertible<phmap::flat_hash_map<T, P...>, TT>();
        }

        if constexpr (!InDerivedClass)
        {
            c.type.def("size", [](const TT &v){return v.size();});
        }
    }
    #endif
};
