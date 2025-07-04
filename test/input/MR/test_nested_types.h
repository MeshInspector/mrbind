#pragma once

namespace MR::NestedTypes
{
    struct A
    {
        struct B {};
        enum E {};

        B b;
        E e;
    };
}
