#pragma once

#include <mrbind/targets/pybind11/core.h>

#include <parallel_hashmap/phmap.h>
// phmap::flat_hash_map
template <typename ...P>
struct MRBind::detail::pb11::CustomTypeBinding<phmap::flat_hash_map<P...>>
    : public DefaultCustomTypeBinding<phmap::flat_hash_map<P...>>
{
    template <typename U>
    [[nodiscard]] static decltype(auto) pybind_init(auto f, pybind11::module_ &m, const char *n) {return f(pybind11::bind_map<U>(m, n));}
};
