// Intentionally no pragma once, though currently it doesn't matter (to allow re-including the target file multiple times).

#include <mrbind/targets/pybind11/core.h>

#include <mrbind/targets/pybind11/output_params_of_builtin_types.h>
#include <mrbind/targets/pybind11/bind_std.h>
#include <mrbind/targets/pybind11/bind_std_func.h>
#include <mrbind/targets/pybind11/bind_std_future.h>
#include <mrbind/targets/pybind11/bind_std_iostream.h>
#include <mrbind/targets/pybind11/bind_std_other.h>

#if __has_include(<parallel_hashmap/phmap.h>)
#include <mrbind/targets/pybind11/bind_phmap.h>
#endif

#if (!defined(MB_PB11_ALLOW_STD_EXPECTED) || MB_PB11_ALLOW_STD_EXPECTED) && __has_include(<expected>)
// Libstdc++'s `<expected>` header checks `__cpp_concepts` and disables the class if the value is too small.
// This makes their `std::expected` unusable on Clang (last tested on Clang 18).
#if __cplusplus > 202002L && (!defined(_GLIBCXX_RELEASE) || __cpp_concepts >= 202002L)
#include <mrbind/targets/pybind11/bind_std_expected.h>
#endif
#endif

#if (!defined(MB_PB11_ALLOW_TL_EXPECTED) || MB_PB11_ALLOW_TL_EXPECTED) && __has_include(<tl/expected.hpp>)
#include <mrbind/targets/pybind11/bind_tl_expected.h>
#endif

// Casters for `std::filesystem::path`.
#include <pybind11/stl/filesystem.h>
