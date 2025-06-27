#pragma once

#include <functional>
#include <string>

namespace MR::StdFunction
{
    inline void foo(std::function<int()>) {}
    inline void foo(std::function<void(int, int)>) {}

    inline void foo(std::function<int(int a, int)>) {}

    enum E {};
    inline void foo(std::function<E(int, E)>) {}

    inline void foo(std::function<std::string(int, float)>) {}
    inline void foo(std::function<void(std::string)>) {}

    struct A {std::string a;};
    inline void foo(std::function<void(A)>) {}
    inline void foo(std::function<A()>) {}
}
