#pragma once

#include <version>

// Old libstdc++ didn't have `std::hash<std::filesystem::path>`, which was added in a defect report: https://cplusplus.github.io/LWG/issue3657
// It exists since libstdc++ 11.4 (first added to trunk in https://github.com/gcc-mirror/gcc/commit/e3c5e8360b4e4799e1e2daf74282629248690f23, then backported to 11.x).
#if defined(_GLIBCXX_RELEASE) && (_GLIBCXX_RELEASE < 11 || (_GLIBCXX_RELEASE == 11 && __GLIBCXX__ < 20230528))

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
