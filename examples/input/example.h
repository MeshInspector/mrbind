#pragma once

#include <iostream>

#ifdef __clang__
#define EXAMPLE_OVERLOAD_SUFFIX(x) [[clang::annotate("mrbind::overload_suffix=" #x)]]
#else
#define EXAMPLE_OVERLOAD_SUFFIX(x)
#endif

namespace Example
{
    EXAMPLE_OVERLOAD_SUFFIX(blah) void foo(int);
    void foo(float);
}
