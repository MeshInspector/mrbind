#pragma once

namespace MR::LifetimeInference
{
    struct A
    {
        int x = 42;
        int *begin() {return &x;}
        int *end() {return &x;}
    };
    inline int *begin(A &a) {return &a.x;}
    inline int *end(A &a) {return &a.x;}

    struct B
    {
        int x = 42;
        friend int *begin(B &b) {return &b.x;}
        friend int *end(B &b) {return &b.x;}
    };

    struct C
    {
        C(A &, int &, int) {}
    };
}
