#pragma once

namespace MR::OverloadSuffix
{
    // Just normal stuff with no annotations:

    inline void foo_a(int) {}
    inline void foo_a(float) {}
    inline void foo_a(int, int) {}

    inline void bar_a(int) {}
    inline void bar_a(float) {}

    inline void baz_a(int) {}
    inline void baz_a(int, int) {}

    struct A
    {
        void foo(int) {}
        void foo(float) {}
        void foo(int, int) {}

        A(int) {}
        A(float) {}
        A(int, int) {}

        inline void operator-(int) {}
        inline void operator-(float) {}

        inline void operator[](int) {}
        inline void operator[](float) {}
    };

    inline void operator+(A &) {}
    inline void operator+(const A &) {}


    // With empty suffix:

    [[clang::annotate("mrbind::overload_suffix=")]] inline void foo_b(int) {}
    inline void foo_b(float) {}
    inline void foo_b(int, int) {}

    [[clang::annotate("mrbind::overload_suffix=")]] inline void bar_b(int) {}
    inline void bar_b(float) {}

    [[clang::annotate("mrbind::overload_suffix=")]] inline void baz_b(int) {}
    inline void baz_b(int, int) {}

    struct B
    {
        [[clang::annotate("mrbind::overload_suffix=")]] void foo(int) {}
        void foo(float) {}
        void foo(int, int) {}

        [[clang::annotate("mrbind::overload_suffix=")]] B(int) {}
        B(float) {}
        B(int, int) {}

        // Currently has no effect on those.
        [[clang::annotate("mrbind::overload_suffix=")]] inline void operator-(int) {}
        inline void operator-(float) {}

        // Works on those, though.
        [[clang::annotate("mrbind::overload_suffix=")]] inline void operator[](int) {}
        inline void operator[](float) {}
    };

    // Currently has no effect on those.
    [[clang::annotate("mrbind::overload_suffix=")]] inline void operator+(B &) {}
    inline void operator+(const B &) {}


    // With custom suffix:

    [[clang::annotate("mrbind::overload_suffix=blah")]] inline void foo_c(int) {}
    inline void foo_c(float) {}
    inline void foo_c(int, int) {}

    [[clang::annotate("mrbind::overload_suffix=blah")]] inline void bar_c(int) {}
    inline void bar_c(float) {}

    [[clang::annotate("mrbind::overload_suffix=blah")]] inline void baz_c(int) {}
    inline void baz_c(int, int) {}

    struct C
    {
        [[clang::annotate("mrbind::overload_suffix=blah")]] void foo(int) {}
        void foo(float) {}
        void foo(int, int) {}

        [[clang::annotate("mrbind::overload_suffix=blah")]] C(int) {}
        C(float) {}
        C(int, int) {}

        // Currently has no effect on those.
        [[clang::annotate("mrbind::overload_suffix=blah")]] inline void operator-(int) {}
        inline void operator-(float) {}

        // Works on those, though.
        [[clang::annotate("mrbind::overload_suffix=blah")]] inline void operator[](int) {}
        inline void operator[](float) {}
    };

    // Currently has no effect on those.
    [[clang::annotate("mrbind::overload_suffix=blah")]] inline void operator+(C &) {}
    inline void operator+(const C &) {}
}
