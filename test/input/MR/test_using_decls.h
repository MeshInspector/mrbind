#pragma once

// This class doesn't get a binding. We inherit from it and add `--ignore-mentions-of` to test that nothing gets imported from it.
struct UsingDecls_IgnoreMentionsOf
{
    UsingDecls_IgnoreMentionsOf(float) {}
    void operator=(float) {}

    int BlahField;
    inline static int BlahStaticVar;

    void BlahMethod() {}
    static void BlahStaticFunc() {}

    operator float() {return 42.f;}

    enum class BlahEnum {};
    using BlahTypedef = int;
};

namespace MR::UsingDecls
{
    // Test how `using` declarations import things.

    struct A
    {
        A(int) {}
        void operator=(int) {}

        int Field;
        inline static int StaticVar;

        void Method() {}
        static void StaticFunc() {}

        operator int() {return 42;}

        enum class E {};

        using Typedef = int;
    };

    struct B : A, UsingDecls_IgnoreMentionsOf
    {
        using A::A;
        using A::operator=;
        using A::Field;
        using A::StaticVar;
        using A::Method;
        using A::StaticFunc;
        using A::operator int;
        using A::E;       // Doesn't work yet. Should create an imaginary typedef.
        using A::Typedef; // Doesn't work yet.

        using UsingDecls_IgnoreMentionsOf::UsingDecls_IgnoreMentionsOf;
        using UsingDecls_IgnoreMentionsOf::operator=;
        using UsingDecls_IgnoreMentionsOf::BlahField;
        using UsingDecls_IgnoreMentionsOf::BlahStaticVar;
        using UsingDecls_IgnoreMentionsOf::BlahMethod;
        using UsingDecls_IgnoreMentionsOf::BlahStaticFunc;
        using UsingDecls_IgnoreMentionsOf::operator float;
        using UsingDecls_IgnoreMentionsOf::BlahEnum;
        using UsingDecls_IgnoreMentionsOf::BlahTypedef;
    };
}
