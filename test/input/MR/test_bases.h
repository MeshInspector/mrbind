#pragma once

namespace MR::Bases
{
    struct A {};

    struct B : A {};

    struct B2 : B {};

    struct C : A {};

    struct D : B, C {}; // Indirect ambiguity.

    #pragma clang diagnostic push
    #pragma clang diagnostic ignored "-Winaccessible-base"
    struct D2 : B, A {}; // Direct ambiguity.
    struct D3 : A, B {}; // Direct ambiguity in reverse.
    #pragma clang diagnostic pop

    struct E {};
    struct F : E {};

    struct G : virtual F {}; // Basic virtual inheritance.

    struct H : virtual F, A {}; // Ambiguity through virtual.

    struct I : virtual F, virtual A {}; // Ambiguity between a virtual and a non-virtual base with the same type.
}
