#pragma once

#include <iostream>
#include <memory>

// This is a mixed bag of tests primarily intended for testing the C# bindings.

namespace MR::CSharp
{
    inline void foo() {std::cout << "Hello!\n";}
    inline int test_int(int a, int b = 42) {return a + b;}

    inline bool test_bool(bool a, bool b = true) {return a || b;}

    inline bool default_bool = false;

    inline void test_bool_ref(bool &a, bool &b = default_bool) {a = true; b = true;}
    inline int test_bool_ref2(bool &a, bool &b = default_bool) {a = true; b = true; return 42;}

    inline bool &get_bool_ref() {return default_bool;}
    inline void print_bool_ref() {std::cout << default_bool << '\n';}
    inline const bool &test_bool_cref(const bool &, const bool & = default_bool) {return default_bool;}

    inline int default_int = 42;

    inline int &test_int_ref(int &a, int &b = default_int) {(void)a; (void)b; return default_int;}
    inline const int &test_int_cref(const int &a, const int &b = default_int) {(void)a; (void)b; return default_int;}

    inline int *test_int_ptr(int *a, int *b = nullptr, int *c = &default_int) {(void)a; (void)b; (void)c; return &default_int;}
    inline const int *test_int_cptr(const int *a, const int *b = nullptr, const int *c = &default_int) {(void)a; (void)b; (void)c; return &default_int;}

    /// Enum comment.
    enum class E1
    {
        // A
        a = 10,
        // B
        b = 20,
        // C
        c = 30,
    };
    inline E1 default_e1 = E1::b;

    inline E1 test_enum(E1 a, E1 b = E1::b) {std::cout << int(a) << ' ' << int(b) << '\n'; return b;}
    inline E1 &test_enum_ref(E1 &a, E1 &b = default_e1) {(void)a; (void)b; return default_e1;}
    inline const E1 &test_enum_cref(const E1 &a, const E1 &b = default_e1) {(void)a; (void)b; return default_e1;}
    inline E1 *test_enum_ptr(E1 *a, E1 *b = nullptr, E1 *c = &default_e1) {(void)a; (void)b; (void)c; return &default_e1;}
    inline const E1 *test_enum_cptr(const E1 *a, const E1 *b = nullptr, const E1 *c = &default_e1) {(void)a; (void)b; (void)c; return &default_e1;}

    enum class E2 : bool
    {
        a, b,
    };
    inline E2 default_e2 = E2::b;

    inline E2 test_bool_enum(E2 a, E2 b = E2::b) {std::cout << int(a) << ' ' << int(b) << '\n'; return b;}
    inline E2 &test_bool_enum_ref(E2 &a, E2 &b = default_e2) {(void)a; (void)b; return default_e2;}
    inline const E2 &test_bool_enum_cref(const E2 &a, const E2 &b = default_e2) {(void)a; (void)b; return default_e2;}
    inline E2 *test_bool_enum_ptr(E2 *a, E2 *b = nullptr, E2 *c = &default_e2) {(void)a; (void)b; (void)c; return &default_e2;}
    inline const E2 *test_bool_enum_cptr(const E2 *a, const E2 *b = nullptr, const E2 *c = &default_e2) {(void)a; (void)b; (void)c; return &default_e2;}

    struct A
    {
        int a = 10;

        void foo() {}
        void bar(int, int) const {}

        static void static_foo() {}
        static void static_bar(int, int) {}

        virtual ~A() = default;
        virtual void virtual_foo() {}
        virtual void virtual_bar(int, int) const {}

        int &refs(int &x, int &) {return x;}
    };
}
