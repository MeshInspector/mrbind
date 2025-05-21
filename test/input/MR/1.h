#pragma once

#include <string>
#include <vector>

namespace MR
{
    struct A
    {
        std::string x;
    };

    inline std::vector<A> foo() {return {};}
    inline void bar(std::vector<A>) {}
}
