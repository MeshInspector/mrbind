// Intentionally no pragma once, though currently it doesn't matter (to allow re-including the target file multiple times).

#include <mrbind/targets/pybind11/core.h>

#include <mrbind/targets/pybind11/bind_std.h>
#include <mrbind/targets/pybind11/bind_std_func.h>
#include <mrbind/targets/pybind11/bind_std_iostream.h>

#if __has_include(<parallel_hashmap/phmap.h>)
#include <mrbind/targets/pybind11/bind_phmap.h>
#endif

#if __has_include(<expected>)
// The second half of the condition is copied from libstdc++'s `<expected>` header. The contents are disable if this is false.
#if !defined(_GLIBCXX_RELEASE) || (__cplusplus > 202002L && __cpp_concepts >= 202002L)
#include <mrbind/targets/pybind11/bind_std_expected.h>
#endif
#endif

#if __has_include(<tl/expected.hpp>)
#include <mrbind/targets/pybind11/bind_tl_expected.h>
#endif

// Casters for `std::filesystem::path`.
#include <pybind11/stl/filesystem.h>
