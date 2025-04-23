// #include <iostream>

#include "2.h"

namespace MR
{
    // enum E {e1};

    // inline int global;
    // inline E global2;

    // int foo(int a, int b = 42);
    // E foo(E a, E b = E::e1);

    // int bar(int &a, int &b = global);
    // E bar(E &a, E &b = global2);

    // E bar(int *a, int *b = (int*)1, int *c = nullptr);

    // struct A {};
    // inline A global3;
    // A &foo(A &, A & = global3);
    // E &foo2(E &, E & = global2);

    struct A
    {
        int x = 0;

        A() = default;

        A(int x) : x(x) {}

        void foo() {}
        void bar(int) const {}
    };
}
