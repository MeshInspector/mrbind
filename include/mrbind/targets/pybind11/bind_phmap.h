#pragma once

#include <mrbind/targets/pybind11/core.h>

#include <parallel_hashmap/phmap.h>
// phmap::flat_hash_map
template <typename ...P>
struct MRBind::detail::pb11::CustomTypeBinding<phmap::flat_hash_map<P...>>
    : public DefaultCustomTypeBinding<phmap::flat_hash_map<P...>>
{
    template <typename U>
    [[nodiscard]] static decltype(auto) pybind_init(auto f, pybind11::module_ &m, UnfinishedModule &, const char *n) {return f(pybind11::bind_map<U>(m, n));}

    #if MB_PB11_ENABLE_CXX_STYLE_CONTAINER_METHODS
    static void bind_members(pybind11::module_ &, UnfinishedModule &, auto &c, bool second_pass)
    {
        if (!second_pass)
            return;

        using TT = typename std::remove_reference_t<decltype(c.type)>::type;
        c.type.def("size", [](const TT &v){return v.size();});
    }
    #endif
};
