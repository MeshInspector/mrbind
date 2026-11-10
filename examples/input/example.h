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

    struct A
    {
        friend auto operator<=>(const A &, const A &) = default;
    };

    struct B
    {
        void foo(int) {}

        auto operator<=>(const B &) const = default;
        // void foo() {}
    };

    inline std::strong_ordering returns_strong_ordering() {return std::strong_ordering::less;}
    inline std::weak_ordering returns_weak_ordering() {return std::weak_ordering::less;}
    inline std::partial_ordering returns_partial_ordering() {return std::partial_ordering::less;}
}
