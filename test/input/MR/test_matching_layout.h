#pragma once

namespace MR::MatchingLayout
{
    struct A
    {
        // first
        int a;
        // second
        short b;
        // third
        float c;

        // Having static fields is not an error! Those get their normal getters and setters.
        static int x;
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
