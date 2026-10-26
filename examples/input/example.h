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
}
