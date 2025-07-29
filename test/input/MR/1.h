#pragma once

#include <memory>
#include <set>
#include <string>
#include <vector>

namespace MR
{
    template <typename T = int, std::enable_if_t<sizeof(T) == 42, int> = 0>
    void foo() {}
}
