#pragma once

#include <memory>
#include <string>
#include <vector>

namespace MR
{
    struct A
    {
        std::string x;

        A() {}
        A(const A &) = default;
        A(A &&) = default;

        A &operator=(A) {return *this;}
    };

    inline std::vector<A> foo() {return {};}
    inline void bar(std::vector<A>) {}
}
