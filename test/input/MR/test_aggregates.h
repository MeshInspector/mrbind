#pragma once

#include <string>

namespace MR::Aggregates
{
    // Aggregates get elementwise constructors. This is necessary if their elements are not default-constructible,
    //   because otherwise there would be no way to construct them.
    struct A {int x; std::string y;};

    // This is an empty aggregate, it doesn't need an elementwise constructor.
    struct B {};

    struct NonDefaultConstructible {NonDefaultConstructible() = delete;};

    // Test the optional limit on the number of fields that we aggregate-initialize.
    struct C {int a,b,c,d,e,f,g,h;};
    struct D {int a,b,c,d,e,f,g,h,i;};
    struct E {int a,b,c,d,e,f,g,h,i; NonDefaultConstructible j;}; // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
}
