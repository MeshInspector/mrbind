#pragma once

#include <mrbind/targets/pybind11/core.h>

// phmap::flat_hash_map
#include <parallel_hashmap/phmap.h>
MB_PB11_ADD_CUSTOM_TYPE(
    // Intentionally no custom allocator support for now, to make things easier.
    (template <typename T, typename U>),
    (phmap::flat_hash_map<T, U>),
    (pybind11::class_<ThisType>),
    (pybind11::bind_map<ThisType>(m, pb11::ToPythonName("phmap_flat_hash_map") + "_" + pb11::ToPythonName(MRBind::TypeName<T>()) + "_to_" + pb11::ToPythonName(MRBind::TypeName<U>()))),
    (),
    ()
)
