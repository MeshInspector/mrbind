#pragma once

namespace MR::NestedTemplateInst
{
    template <typename T>
    struct A
    {
        // This struct needs special care to be instantiated, even with the typedef below. Hmm.
        template <typename TT> struct AA {};
    };
    using A0 = A<int>::AA<float>;
}
