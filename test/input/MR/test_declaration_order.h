#pragma once

namespace MR::DeclOrder
{
    // Here all classes are whitelisted using `--expose-as-struct`.

    struct A
    {
        enum class E {};

        int blah;

        struct B
        {
            int bleh;

            A a();
            E b();
        };

        B c();
        E d();
    };

    template <bool X>
    struct C
    {
        int bleh;
        C<!X> blah();
    };
    using C0 = C<false>;
    using C1 = C<true>;
}
