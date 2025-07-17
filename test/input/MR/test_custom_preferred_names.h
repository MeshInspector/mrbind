#pragma once

namespace MR::CustomPrefNames
{
    template <typename T>
    struct A;

    using Ai = A<int>;
    using Af = A<float>;

    template <typename T>
    struct
        __attribute__((__preferred_name__(Ai)))
        __attribute__((__preferred_name__(Af))) // This gets ignored because we have a full specialization.
        A
    {};

    template <> struct __attribute__((__annotate__("mrbind::preferred_name=MR::CustomPrefNames::Af"))) A<float> {};

    inline void blah()
    {
        // Need those for the attribute to kick in, see: https://github.com/llvm/llvm-project/issues/106358
        [[maybe_unused]] Ai i;
        [[maybe_unused]] Af f;
    }
}
