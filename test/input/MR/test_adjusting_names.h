#pragma once

#include <cstddef>

namespace MR::AdjustingNames
{
    // When we're gonna call `foo<MR_C_uint64_t>()` in the source file, we must include the header for our typedef (and for the template arguments in general).
    // And we must make sure that the typedef gets applied to the name correctly.
    template <typename T>
    void foo() {}

    inline void bar() {foo<std::size_t>();}

    // And test that `uint64_t` is correctly adjusted in some other kinds of names.
    // Though here we don't really test that each of them brings its own includes.

    struct A
    {
        template <typename T>
        void foo() {}

        template <typename T>
        inline static T var = 0;

        inline void bar() {foo<std::size_t>(); (void)var<std::size_t>;}

        operator std::size_t();
    };
}
