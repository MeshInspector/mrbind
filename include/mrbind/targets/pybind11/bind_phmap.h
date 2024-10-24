#pragma once

#include "bind_std.h"

#include <parallel_hashmap/phmap.h>
// phmap::flat_hash_map
template <typename T, typename U, typename ...P>
struct MRBind::pb11::CustomTypeBinding<phmap::flat_hash_map<T, U, P...>>
    : DefaultCustomTypeBinding<phmap::flat_hash_map<T, U, P...>>,
    RegisterTypeWithCustomBindingIfApplicable<T>
{
    [[nodiscard]] static decltype(auto) pybind_init(auto f, pybind11::handle &m, const char *n) {return f(pybind11::patched::bind_map<phmap::flat_hash_map<T, U, P...>>(m, n));}

    // Make sure the element type is loaded first.
    // Normally it doesn't matter, but it matters here because we register some methods directly in `pybind_init`.
    // We could just avoid doing that for `std::vector`, but it's harder to pull off here, because `bind_map` registers SEVERAL different types (duh).
    static std::unordered_set<std::type_index> base_typeids() {return {typeid(typename StripToUnderlyingType<T>::type), typeid(typename StripToUnderlyingType<U>::type)};}

    #if MB_PB11_ENABLE_CXX_STYLE_CONTAINER_METHODS
    static void bind_members(typename DefaultCustomTypeBinding<phmap::flat_hash_map<T, U, P...>>::pybind_type &c)
    {
        // Copy constructor.
        if constexpr (pybind11::detail::is_copy_constructible<phmap::flat_hash_map<T, U, P...>>::value)
            c.def(pybind11::init<const phmap::flat_hash_map<T, U, P...> &>());

        c.def("size", [](const phmap::flat_hash_map<T, U, P...> &v){return v.size();});
    }
    #endif
};
