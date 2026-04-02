#pragma once

#include <iostream>

namespace Example
{
    inline void SayHello()
    {
        std::cout << "Hello!\n";
    }

    inline int Square(int x)
    {
        return x * x;
    }

    inline int Sum(int x, int y = 42)
    {
        return x + y;
    }

    enum E1 {};
    enum class E2 {a, b, c};

    struct A
    {
        int x = 1;
        const float y = 42;
        inline static int z = 2;
        inline static const float w = 43;
    };
}
