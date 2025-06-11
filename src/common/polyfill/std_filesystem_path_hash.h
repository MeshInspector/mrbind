#pragma once

#include <version>

// Old libstdc++ didn't have `std::hash<std::filesystem::path>`, which was apparently added in a defect report.
// GCC added it in this commit: https://github.com/gcc-mirror/gcc/commit/e3c5e8360b4e4799e1e2daf74282629248690f23
#if defined(_GLIBCXX_RELEASE) && _GLIBCXX_RELEASE < 12

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
