#pragma once

#include "bind_std.h"

#include <parallel_hashmap/phmap.h>
// phmap::flat_hash_map
template <typename T, typename ...P>
struct MRBind::detail::pb11::CustomTypeBinding<phmap::flat_hash_map<T, P...>>
    : DefaultCustomTypeBinding<phmap::flat_hash_map<T, P...>>,
    RegisterTypeWithCustomBindingIfApplicable<T>
{
    [[nodiscard]] static decltype(auto) pybind_init(auto f, pybind11::module_ &m, const char *n) {return f(pybind11::patched::bind_map<phmap::flat_hash_map<T, P...>>(m, n));}

    #if MB_PB11_ENABLE_CXX_STYLE_CONTAINER_METHODS
    static void bind_members(pybind11::module_ &, typename DefaultCustomTypeBinding<phmap::flat_hash_map<T, P...>>::pybind_type &c)
    {
        // Copy constructor.
        if constexpr (pybind11::detail::is_copy_constructible<phmap::flat_hash_map<T, P...>>::value)
            c.def(pybind11::init<const phmap::flat_hash_map<T, P...> &>());

        c.def("size", [](const phmap::flat_hash_map<T, P...> &v){return v.size();});
    }
    #endif
};
