#pragma once

#include <filesystem>
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

    inline unsigned short default_ushort = 42;

    inline unsigned short test_ushort(unsigned short a, unsigned short b = 42) {std::cout << int(a) << ' ' << int(b) << '\n'; return b;}
    inline unsigned short &test_ushort_ref(unsigned short &a, unsigned short &b = default_ushort) {(void)a; (void)b; return default_ushort;}
    inline const unsigned short &test_ushort_cref(const unsigned short &a, const unsigned short &b = default_ushort) {(void)a; (void)b; return default_ushort;}
    inline unsigned short *test_ushort_ptr(unsigned short *a, unsigned short *b = nullptr, unsigned short *c = &default_ushort) {(void)a; (void)b; (void)c; return &default_ushort;}
    inline const unsigned short *test_ushort_cptr(const unsigned short *a, const unsigned short *b = nullptr, const unsigned short *c = &default_ushort) {(void)a; (void)b; (void)c; return &default_ushort;}


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

    inline E2 test_enum(E2 a, E2 b = E2::b) {std::cout << int(a) << ' ' << int(b) << '\n'; return b;}
    inline E2 &test_enum_ref(E2 &a, E2 &b = default_e2) {(void)a; (void)b; return default_e2;}
    inline const E2 &test_enum_cref(const E2 &a, const E2 &b = default_e2) {(void)a; (void)b; return default_e2;}
    inline E2 *test_enum_ptr(E2 *a, E2 *b = nullptr, E2 *c = &default_e2) {(void)a; (void)b; (void)c; return &default_e2;}
    inline const E2 *test_enum_cptr(const E2 *a, const E2 *b = nullptr, const E2 *c = &default_e2) {(void)a; (void)b; (void)c; return &default_e2;}

    struct A
    {
        A() = default;
        A(const A &) = default;
        A(A &&) = default;
        A &operator=(const A &) = default;
        A &operator=(A &&) = default;
        virtual ~A() = default;

        int a = 10;

        void foo() {}
        void bar(int, int) const {}

        static void static_foo() {}
        static void static_bar(int, int) {}

        virtual void virtual_foo() {}
        virtual void virtual_bar(int, int) const {}

        int &refs(int &x, int &) {return x;}
    };

    struct B : A
    {
        B() {}
        B(int a, int b) {(void)a; (void)b;}
    };
    struct C : virtual A {};

    struct D
    {
        void d1() const {}
        void d2() {}
    };

    struct E
    {
        void e1() const {}
        void e2() {}
    };

    struct F : A, D, E {};
    // Even if the secondary bases are virtual, this doesn't affect anything.
    struct G : A, D, virtual E {};

    // Ambiguous direct bases are detected by the generator and cause it to error.
    #if 0
    #ifdef __GNUC__
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Winaccessible-base"
    #endif
    struct Ambig1 : A, B {}; // The first base is ambiguous.
    struct Ambig2 : B, A {}; // The non-first base is ambiguous.
    #ifdef __GNUC__
    #pragma GCC diagnostic pop
    #endif
    #endif

    class Trivial
    {
        void foo() {}
    };
    class TrivialDerived : Trivial {};
    inline Trivial default_trivial;

    inline Trivial test_class_trivial(Trivial a, Trivial b = {}) {(void)a; (void)b; return {};}
    inline Trivial &test_class_trivial_ref(Trivial &a, Trivial &b = default_trivial) {(void)a; (void)b; return default_trivial;}
    inline const Trivial &test_class_trivial_cref(const Trivial &a, const Trivial &b = default_trivial) {(void)a; (void)b; return default_trivial;}
    inline Trivial *test_class_trivial_ptr(Trivial *a, Trivial *b = nullptr, Trivial *c = &default_trivial) {(void)a; (void)b; (void)c; return &default_trivial;}
    inline const Trivial *test_class_trivial_cptr(const Trivial *a, const Trivial *b = nullptr, const Trivial *c = &default_trivial) {(void)a; (void)b; (void)c; return &default_trivial;}

    class NonTrivial
    {
        std::string a;
    };
    class NonTrivialDerived : NonTrivial {};
    inline NonTrivial default_nontrivial;

    inline NonTrivial test_class_nontrivial(NonTrivial a, NonTrivial b = {}) {(void)a; (void)b; return {};}
    inline NonTrivial &test_class_nontrivial_ref(NonTrivial &a, NonTrivial &b = default_nontrivial) {(void)a; (void)b; return default_nontrivial;}
    inline const NonTrivial &test_class_nontrivial_cref(const NonTrivial &a, const NonTrivial &b = default_nontrivial) {(void)a; (void)b; return default_nontrivial;}
    inline NonTrivial *test_class_nontrivial_ptr(NonTrivial *a, NonTrivial *b = nullptr, NonTrivial *c = &default_nontrivial) {(void)a; (void)b; (void)c; return &default_nontrivial;}
    inline const NonTrivial *test_class_nontrivial_cptr(const NonTrivial *a, const NonTrivial *b = nullptr, const NonTrivial *c = &default_nontrivial) {(void)a; (void)b; (void)c; return &default_nontrivial;}

    inline void *test_void_ptr(void *a, void *b = nullptr, void *c = (void *)42) {(void)a; (void)b; (void)c; return nullptr;}
    inline const void *test_void_cptr(const void *a, const void *b = nullptr, const void *c = (const void *)42) {(void)a; (void)b; (void)c; return nullptr;}

    struct SA {};
    struct SB {};
    struct SC : SA, SB {};

    inline std::shared_ptr<SA> default_shptr;

    // Pokeing a shared pointer type for a single class causes `std::shared_ptr` to be instantiated for the entire hierarchy (when `--bind-shared-ptr-virally`, which is required for `C#`).
    inline std::shared_ptr<SA> test_shptr(std::shared_ptr<SA> a, std::shared_ptr<SA> b = default_shptr) {(void)a; return b;}
    inline std::shared_ptr<SA> &test_shptr_ref(std::shared_ptr<SA> &a, std::shared_ptr<SA> &b = default_shptr) {(void)a; return b;}
    inline const std::shared_ptr<SA> &test_shptr_cref(const std::shared_ptr<SA> &a, const std::shared_ptr<SA> &b = default_shptr) {(void)a; return b;}
    inline std::shared_ptr<SA> *test_shptr_ptr(std::shared_ptr<SA> *a, std::shared_ptr<SA> *b = &default_shptr) {(void)a; return b;}
    inline const std::shared_ptr<SA> *test_shptr_cptr(const std::shared_ptr<SA> *a, const std::shared_ptr<SA> *b = &default_shptr) {(void)a; return b;}

    inline std::shared_ptr<const SA> default_shcptr;

    inline std::shared_ptr<const SA> test_shcptr(std::shared_ptr<const SA> a, std::shared_ptr<const SA> b = default_shcptr) {(void)a; return b;}
    inline std::shared_ptr<const SA> &test_shcptr_ref(std::shared_ptr<const SA> &a, std::shared_ptr<const SA> &b = default_shcptr) {(void)a; return b;}
    inline const std::shared_ptr<const SA> &test_shcptr_cref(const std::shared_ptr<const SA> &a, const std::shared_ptr<const SA> &b = default_shcptr) {(void)a; return b;}
    inline std::shared_ptr<const SA> *test_shcptr_ptr(std::shared_ptr<const SA> *a, std::shared_ptr<const SA> *b = &default_shcptr) {(void)a; return b;}
    inline const std::shared_ptr<const SA> *test_shcptr_cptr(const std::shared_ptr<const SA> *a, const std::shared_ptr<const SA> *b = &default_shcptr) {(void)a; return b;}


    inline std::string default_string;

    inline std::string test_string(std::string a, std::string b = default_string) {(void)a; return b;}
    inline std::string &test_string_ref(std::string &a, std::string &b = default_string) {(void)a; return b;}
    inline const std::string &test_string_cref(const std::string &a, const std::string &b = default_string) {(void)a; return b;}
    inline std::string *test_string_ptr(std::string *a, std::string *b = &default_string) {(void)a; return b;}
    inline const std::string *test_string_cptr(const std::string *a, const std::string *b = &default_string) {(void)a; return b;}


    inline std::string_view default_stringview;

    inline std::string_view test_stringview(std::string_view a, std::string_view b = default_stringview) {(void)a; return b;}
    inline std::string_view &test_stringview_ref(std::string_view &a, std::string_view &b = default_stringview) {(void)a; return b;}
    inline const std::string_view &test_stringview_cref(const std::string_view &a, const std::string_view &b = default_stringview) {(void)a; return b;}
    inline std::string_view *test_stringview_ptr(std::string_view *a, std::string_view *b = &default_stringview) {(void)a; return b;}
    inline const std::string_view *test_stringview_cptr(const std::string_view *a, const std::string_view *b = &default_stringview) {(void)a; return b;}


    inline std::filesystem::path default_fspath;

    inline std::filesystem::path test_fspath(std::filesystem::path a, std::filesystem::path b = default_fspath) {(void)a; return b;}
    inline std::filesystem::path &test_fspath_ref(std::filesystem::path &a, std::filesystem::path &b = default_fspath) {(void)a; return b;}
    inline const std::filesystem::path &test_fspath_cref(const std::filesystem::path &a, const std::filesystem::path &b = default_fspath) {(void)a; return b;}
    inline std::filesystem::path *test_fspath_ptr(std::filesystem::path *a, std::filesystem::path *b = &default_fspath) {(void)a; return b;}
    inline const std::filesystem::path *test_fspath_cptr(const std::filesystem::path *a, const std::filesystem::path *b = &default_fspath) {(void)a; return b;}
}
