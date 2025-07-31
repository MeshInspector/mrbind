#pragma once

#include <string>

namespace MR::Aggregates
{
    // Aggregates get elementwise constructors. This is necessary if their elements are not default-constructible,
    //   because otherwise there would be no way to construct them.
    struct A {int x; std::string y;};

    // This is an empty aggregate, it doesn't need an elementwise constructor.
    struct B {};
}
