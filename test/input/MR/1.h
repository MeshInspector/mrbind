// #include <iostream>

#include "2.h"

namespace MR
{
    struct A
    {
        int x;
        // A() {}
        // A(int) {}
        // A(const A &) = delete;

        template <typename T> A(T) {}
    };

    inline void foo()
    {
        A a(42);
    }

    enum E {};

    A foo(A x, A y = 42);
    int bar(int x, int y = 42);
    E baz(E x, E y = E{});
}
