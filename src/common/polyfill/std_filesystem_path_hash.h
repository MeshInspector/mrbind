#pragma once

#include <version>

// Old libstdc++ didn't have `std::hash<std::filesystem::path>`, which was added by a defect report (LWG 3657):
// https://github.com/gcc-mirror/gcc/commit/e3c5e8360b4e4799e1e2daf74282629248690f23
// It shipped natively in GCC 12 and was backported only to the libstdc++ 11 branch, first appearing in the
// GCC 11.4.0 release (`__GLIBCXX__ == 20230528`); the 9.x and 10.x branches and 11.0-11.3 never got it. So
// define the polyfill only where the standard library still lacks the specialization -- otherwise it clashes
// with the one libstdc++ already provides (e.g. on Ubuntu jammy, which now ships libstdc++ 11.4).
#if defined(_GLIBCXX_RELEASE) && _GLIBCXX_RELEASE < 12 && !(_GLIBCXX_RELEASE == 11 && __GLIBCXX__ >= 20230528)

#include <cstddef>
#include <filesystem>
#include <utility>

template <>
struct std::hash<std::filesystem::path>
{
    std::size_t operator()(const std::filesystem::path &p) const noexcept
    {
        return std::filesystem::hash_value(p);
    }
};

#endif
