// Intentionally no pragma once, for `core.h`.

#include <mrbind/targets/pybind11/core.h>

#include <mrbind/targets/pybind11/bind_stl.h>

#if __has_include(<parallel_hashmap/phmap.h>)
#include <mrbind/targets/pybind11/bind_phmap.h>
#endif

#if __has_include(<tl/expected.hpp>)
#include <mrbind/targets/pybind11/bind_tl_expected.h>
#endif
