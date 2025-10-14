#pragma once

// At the time of writing this, the `--copy-inherited-members` flag that this is supposed to test isn't merged yet.
// But this is still useful for testing various kinds of inheritance.

namespace MR::CopyInheritedMembers
{
    struct A
    {
        int Field;
        inline static int StaticField;

        void Method();
        static void StaticFunc();

        operator int();
    };

    struct B
    {
        int Field;
        inline static int StaticField;

        void Method();
        static void StaticFunc();

        operator int();
    };

    struct C : A, B {}; // This gets nothing.

    struct D : B {};
    struct E : A, D {}; // This gets nothing.
    struct F : D, A {}; // This gets nothing.

    struct G : virtual A {};
    struct H : G, virtual A {}; // This gets everything from `A`.
    struct I : virtual A, G {}; // This gets everything from `A`.

    struct J : A {};

    struct K : G, J {}; // This gets nothing.
    struct L : J, G {}; // This gets nothing.
}
