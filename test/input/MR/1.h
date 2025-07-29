#pragma once

#include <memory>
#include <set>
#include <string>
#include <vector>

namespace MR
{
    template <typename T = int, typename U = std::enable_if_t<sizeof(T) == 42>>
    void foo() {}

    template <typename T = int, typename U = std::enable_if_t<sizeof(T) == sizeof(int)>>
    void bar() {}
}
