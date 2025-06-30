#pragma once

#include <iostream>

namespace MR::IOStream
{
    struct A
    {
        friend void operator<<(std::ostream &, const A &);
        friend void operator>>(std::istream &, A &);
    };
}
