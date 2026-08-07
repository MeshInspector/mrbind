#pragma once

namespace MR::StaticFuncs
{
    struct A
    {
        inline static int x = 42;
        inline static void blah() {}
    };

    // The default arguments here mention class members and enum constants without full qualification.
    // Check that they get fully qualified in the generated code, which is outside of this scope.
    struct DefaultArgsMentioningMembers
    {
        static constexpr int limit = 42;
        enum E {e0, e1};

        void ByStaticMember(int n = limit) {(void)n;}
        void ByEnumConstant(E e = e1) {(void)e;}
        static void ByStaticMemberExpr(int n = limit + 1 - A::x) {(void)n;}
    };
}
