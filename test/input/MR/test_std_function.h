#pragma once

#include <functional>

namespace MR::StdFunction
{
    inline void foo(std::function<int(int a, int)>) {}

    enum E {};
    inline void foo(std::function<E(int, E)>) {}
}
