#pragma once

namespace MR::AbstractClasses
{
    struct A
    {
        virtual void foo() = 0;
    };

    struct B
    {
        virtual void foo() = 0;

        virtual ~B() = default;
    };

    struct C : B {};
}
