#pragma once

namespace MR::TypedefsInTemplates
{
    // This tests a specific Clang bug/quirk.
    // Certain typedefs in templates get their names printed without the template arguments of the enclosing class template, breaking our code generation.

    template <typename TT>
    struct A
    {
        using U = int; // The issues only reproduces if this doesn't depend on the template parameter.

        U foo();
    };
    using A0 = A<int>;

    template <typename T>
    struct B
    {
        using U = int;

        template <typename TT>
        struct BB
        {
            using UU = int;

            U foo(); // Reports `B::U` without template arguments.
            UU foo2(); // Reports `B::BB::U`, without template arguments.
        };

        // BB<float> foo(); // Works fine.
    };
    using B0 = B<int>::BB<float>;

    void bar(A0::U);
}
