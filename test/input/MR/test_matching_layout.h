#pragma once

namespace MR::MatchingLayout
{
    struct A
    {
        int a;
        short b;
        float c;
    };

    struct B
    {
        short x = 0;
        A a;
        char y;
    };

    B foo();
    void bar(B);
    void baz(B = B{});
    B *bleh(B *);
}
