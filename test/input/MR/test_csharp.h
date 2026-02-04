#pragma once

#include <filesystem>
#include <iostream>
#include <memory>
#include <optional>
#include <variant>
#include <vector>

// This is a mixed bag of tests primarily intended for testing the C# bindings.

#if PARSING_FOR_C_BINDINGS
#  define MBTEST_LIFETIMEBOUND [[clang::lifetimebound]]
#  if __clang_major__ >= 20 // Added in Clang 20.
#    define MBTEST_LIFETIME_CAPTURE_BY(x) [[clang::lifetime_capture_by(x)]]
#  else
#    define MBTEST_LIFETIME_CAPTURE_BY(x)
#  endif
#else
// Define those to nothing when compiling the C bindings, since my Clang 21 ICEs when doing lifetime-based warning checks. `-w` also fixes those ICEs.
#  define MBTEST_LIFETIMEBOUND
#  define MBTEST_LIFETIME_CAPTURE_BY(x)
#endif

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

    inline int &&test_int_rref(int &&a, int &&b = 42) {(void)a; (void)b; return (int &&)default_int;}
    inline const int &&test_int_crref(const int &&a, const int &&b = 42) {(void)a; (void)b; return (const int &&)default_int;}

    inline int *test_int_ptr(int *a, int *b = nullptr, int *c = &default_int) {(void)a; (void)b; (void)c; return &default_int;}
    inline const int *test_int_cptr(const int *a, const int *b = nullptr, const int *c = &default_int) {(void)a; (void)b; (void)c; return &default_int;}

    inline unsigned short default_ushort = 42;

    inline unsigned short test_ushort(unsigned short a, unsigned short b = 42) {std::cout << int(a) << ' ' << int(b) << '\n'; return b;}
    inline unsigned short &test_ushort_ref(unsigned short &a, unsigned short &b = default_ushort) {(void)a; (void)b; return default_ushort;}
    inline const unsigned short &test_ushort_cref(const unsigned short &a, const unsigned short &b = default_ushort) {(void)a; (void)b; return default_ushort;}
    inline unsigned short &&test_ushort_rref(unsigned short &&a, unsigned short &&b = (unsigned short &&)default_ushort) {(void)a; (void)b; return (unsigned short &&)default_ushort;}
    inline const unsigned short &&test_ushort_crref(const unsigned short &&a, const unsigned short &&b = (unsigned short &&)default_ushort) {(void)a; (void)b; return (unsigned short &&)default_ushort;}
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
    inline E1 &&test_enum_rref(E1 &&a, E1 &&b = (E1 &&)default_e1) {(void)a; (void)b; return (E1 &&)default_e1;}
    inline const E1 &&test_enum_crref(const E1 &&a, const E1 &&b = (E1 &&)default_e1) {(void)a; (void)b; return (E1 &&)default_e1;}
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
    inline E2 &&test_enum_rref(E2 &&a, E2 &&b = (E2 &&)default_e2) {(void)a; (void)b; return (E2 &&)default_e2;}
    inline const E2 &&test_enum_crref(const E2 &&a, const E2 &&b = (E2 &&)default_e2) {(void)a; (void)b; return (E2 &&)default_e2;}
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
    inline Trivial &&test_class_trivial_rref(Trivial &&a, Trivial &&b = (Trivial &&)default_trivial) {(void)a; (void)b; return (Trivial &&)default_trivial;}
    inline const Trivial &&test_class_trivial_crref(const Trivial &&a, const Trivial &&b = (Trivial &&)default_trivial) {(void)a; (void)b; return (const Trivial &&)default_trivial;}
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
    inline NonTrivial &&test_class_nontrivial_rref(NonTrivial &&a, NonTrivial &&b = (NonTrivial &&)default_nontrivial) {(void)a; (void)b; return (NonTrivial &&)default_nontrivial;}
    inline const NonTrivial &&test_class_nontrivial_crref(const NonTrivial &&a, const NonTrivial &&b = (NonTrivial &&)default_nontrivial) {(void)a; (void)b; return (const NonTrivial &&)default_nontrivial;}
    inline NonTrivial *test_class_nontrivial_ptr(NonTrivial *a, NonTrivial *b = nullptr, NonTrivial *c = &default_nontrivial) {(void)a; (void)b; (void)c; return &default_nontrivial;}
    inline const NonTrivial *test_class_nontrivial_cptr(const NonTrivial *a, const NonTrivial *b = nullptr, const NonTrivial *c = &default_nontrivial) {(void)a; (void)b; (void)c; return &default_nontrivial;}

    inline void *test_void_ptr(void *a, void *b = nullptr, void *c = (void *)42) {(void)a; (void)b; (void)c; return nullptr;}
    inline const void *test_void_cptr(const void *a, const void *b = nullptr, const void *c = (const void *)42) {(void)a; (void)b; (void)c; return nullptr;}

    struct SA {};
    struct SB {std::string s;}; // Make this non-trivial for a change.
    struct SC : SA, SB {};

    struct SD
    {
        virtual ~SD() = default; // Make the base virtual, this allows downcasts (which use `dynamic_cast` at the moment, and need the base to be polymorphic.

        // Add the remaining stuff to silence deprection warnings caused by the destructor:
        SD() = default;
        SD(const SD &) = default;
        SD(SD &&) = default;
        SD &operator=(const SD &) = default;
        SD &operator=(SD &&) = default;
    };
    struct SE {std::string s;}; // Make this non-trivial for a change.
    struct SF : SD, SE {};

    inline std::shared_ptr<SE> mark_se_as_shared() {return nullptr;} // Mark this hierarchy as backed by `std::shared_ptr` as well.

    inline std::shared_ptr<SA> default_shptr;

    // Poking a shared pointer type for a single class causes `std::shared_ptr` to be instantiated for the entire hierarchy (when `--bind-shared-ptr-virally`, which is required for `C#`).
    inline std::shared_ptr<SA> test_shptr(std::shared_ptr<SA> a, std::shared_ptr<SA> b = default_shptr) {(void)a; return b;}
    inline std::shared_ptr<SA> &test_shptr_ref(std::shared_ptr<SA> &a, std::shared_ptr<SA> &b = default_shptr) {(void)a; return b;}
    inline const std::shared_ptr<SA> &test_shptr_cref(const std::shared_ptr<SA> &a, const std::shared_ptr<SA> &b = default_shptr) {(void)a; return b;}
    inline std::shared_ptr<SA> &&test_shptr_rref(std::shared_ptr<SA> &&a, std::shared_ptr<SA> &&b = (std::shared_ptr<SA> &&)default_shptr) {(void)a; return b;}
    inline const std::shared_ptr<SA> &&test_shptr_crref(const std::shared_ptr<SA> &&a, const std::shared_ptr<SA> &&b = (std::shared_ptr<SA> &&)default_shptr) {(void)a; return b;}
    inline std::shared_ptr<SA> *test_shptr_ptr(std::shared_ptr<SA> *a, std::shared_ptr<SA> *b = &default_shptr) {(void)a; return b;}
    inline const std::shared_ptr<SA> *test_shptr_cptr(const std::shared_ptr<SA> *a, const std::shared_ptr<SA> *b = &default_shptr) {(void)a; return b;}

    inline std::shared_ptr<const SA> default_shcptr;

    inline std::shared_ptr<const SA> test_shcptr(std::shared_ptr<const SA> a, std::shared_ptr<const SA> b = default_shcptr) {(void)a; return b;}
    inline std::shared_ptr<const SA> &test_shcptr_ref(std::shared_ptr<const SA> &a, std::shared_ptr<const SA> &b = default_shcptr) {(void)a; return b;}
    inline const std::shared_ptr<const SA> &test_shcptr_cref(const std::shared_ptr<const SA> &a, const std::shared_ptr<const SA> &b = default_shcptr) {(void)a; return b;}
    inline std::shared_ptr<const SA> &&test_shcptr_rref(std::shared_ptr<const SA> &&a, std::shared_ptr<const SA> &&b = (std::shared_ptr<const SA> &&)default_shcptr) {(void)a; return b;}
    inline const std::shared_ptr<const SA> &&test_shcptr_crref(const std::shared_ptr<const SA> &&a, const std::shared_ptr<const SA> &&b = (std::shared_ptr<const SA> &&)default_shcptr) {(void)a; return b;}
    inline std::shared_ptr<const SA> *test_shcptr_ptr(std::shared_ptr<const SA> *a, std::shared_ptr<const SA> *b = &default_shcptr) {(void)a; return b;}
    inline const std::shared_ptr<const SA> *test_shcptr_cptr(const std::shared_ptr<const SA> *a, const std::shared_ptr<const SA> *b = &default_shcptr) {(void)a; return b;}


    inline std::string default_string;

    inline std::string test_string(std::string a, std::string b = default_string) {(void)a; return b;}
    inline std::string &test_string_ref(std::string &a, std::string &b = default_string) {(void)a; return b;}
    inline const std::string &test_string_cref(const std::string &a, const std::string &b = default_string) {(void)a; return b;}
    inline std::string &&test_string_rref(std::string &&a, std::string &&b = (std::string &&)default_string) {(void)a; return b;}
    inline const std::string &&test_string_crref(const std::string &&a, const std::string &&b = (std::string &&)default_string) {(void)a; return b;}
    inline std::string *test_string_ptr(std::string *a, std::string *b = &default_string) {(void)a; return b;}
    inline const std::string *test_string_cptr(const std::string *a, const std::string *b = &default_string) {(void)a; return b;}


    inline std::string_view default_stringview;

    inline std::string_view test_stringview(std::string_view a, std::string_view b = default_stringview) {(void)a; return b;}
    inline std::string_view &test_stringview_ref(std::string_view &a, std::string_view &b = default_stringview) {(void)a; return b;}
    inline const std::string_view &test_stringview_cref(const std::string_view &a, const std::string_view &b = default_stringview) {(void)a; return b;}
    inline std::string_view &&test_stringview_rref(std::string_view &&a, std::string_view &&b = (std::string_view &&)default_stringview) {(void)a; return b;}
    inline const std::string_view &&test_stringview_crref(const std::string_view &&a, const std::string_view &&b = (std::string_view &&)default_stringview) {(void)a; return b;}
    inline std::string_view *test_stringview_ptr(std::string_view *a, std::string_view *b = &default_stringview) {(void)a; return b;}
    inline const std::string_view *test_stringview_cptr(const std::string_view *a, const std::string_view *b = &default_stringview) {(void)a; return b;}


    inline std::filesystem::path default_fspath;

    inline std::filesystem::path test_fspath(std::filesystem::path a, std::filesystem::path b = default_fspath) {(void)a; return b;}
    inline std::filesystem::path &test_fspath_ref(std::filesystem::path &a, std::filesystem::path &b = default_fspath) {(void)a; return b;}
    inline const std::filesystem::path &test_fspath_cref(const std::filesystem::path &a, const std::filesystem::path &b = default_fspath) {(void)a; return b;}
    inline std::filesystem::path &&test_fspath_rref(std::filesystem::path &&a, std::filesystem::path &&b = (std::filesystem::path &&)default_fspath) {(void)a; return b;}
    inline const std::filesystem::path &&test_fspath_crref(const std::filesystem::path &&a, const std::filesystem::path &&b = (std::filesystem::path &&)default_fspath) {(void)a; return b;}
    inline std::filesystem::path *test_fspath_ptr(std::filesystem::path *a, std::filesystem::path *b = &default_fspath) {(void)a; return b;}
    inline const std::filesystem::path *test_fspath_cptr(const std::filesystem::path *a, const std::filesystem::path *b = &default_fspath) {(void)a; return b;}


    // Nested classes.
    struct Outer
    {
        void foo() {}

        struct Inner
        {
            void bar() {}
        };
    };


    struct TestFields
    {
        int i;
        static int static_i;
        const int const_i;
        static const int static_const_i;
        int &i_ref;
        static int &static_i_ref;
        const int &const_i_ref;
        static const int &static_const_i_ref;

        std::string s;
        const std::string const_s;
        static std::string static_s;
        static const std::string static_const_s;
        std::string &s_ref;
        const std::string &const_s_ref;
        static std::string &static_s_ref;
        static const std::string &static_const_s_ref;
    };


    struct TestConstness
    {
        void foo() {}
        void foo() const {}
    };


    // Test operators `++` and `--`:

    // This is the happy path.
    // This emits static operators in the const half, and non-static operators (or functions pre C# 14) in the non-const half.
    struct IncrDecrA
    {
        IncrDecrA &operator++() {return *this;}
        IncrDecrA operator++(int) {return *this;}
        IncrDecrA &operator--() {return *this;}
        IncrDecrA operator--(int) {return *this;}
    };

    // This is a somewhat happy path. Same as above, but everything gets emitted in the const half.
    struct IncrDecrB
    {
        const IncrDecrB &operator++() const {return *this;}
        IncrDecrB operator++(int) const {return *this;}
        const IncrDecrB &operator--() const {return *this;}
        IncrDecrB operator--(int) const {return *this;}
    };

    // This is a somewhat happy path. Since here the copy ctor takes a non-const reference, the static operators get added to the non-const half.
    // The non-static ones are not marked const, so they're also in the non-const half.
    struct IncrDecrC
    {
        IncrDecrC() = default;
        IncrDecrC(IncrDecrC &) = default;

        IncrDecrC &operator++() {return *this;}
        IncrDecrC operator++(int) {return *this;}
        IncrDecrC &operator--() {return *this;}
        IncrDecrC operator--(int) {return *this;}
    };

    // This is a somewhat happy path. Since here the copy ctor takes a non-const reference, the static operators get added to the non-const half.
    // The non-static ones are in the const half due to being marked const.
    struct IncrDecrD
    {
        IncrDecrD() = default;
        IncrDecrD(IncrDecrD &) = default;

        const IncrDecrD &operator++() const {return *this;}
        IncrDecrD operator++(int) const {return {};}
        const IncrDecrD &operator--() const {return *this;}
        IncrDecrD operator--(int) const {return {};}
    };

    // Here we don't special-case those operators due to the class being non-copyable (and not trivially movable). They get spawned as functions as usual, in the non-const half.
    struct IncrDecrE
    {
        IncrDecrE() = default;
        IncrDecrE(IncrDecrE &&) {} // Non-trivial! See above.
        IncrDecrE &operator++() {return *this;}
        IncrDecrE operator++(int) {return {};}
        IncrDecrE &operator--() {return *this;}
        IncrDecrE operator--(int) {return {};}
    };

    // Here we don't special-case those operators due to the class being non-copyable (and not trivially movable). They get spawned as functions as usual, in the const half.
    struct IncrDecrF
    {
        IncrDecrF() = default;
        IncrDecrF(IncrDecrF &&) {} // Non-trivial! See above.
        const IncrDecrF &operator++() const {return *this;}
        IncrDecrF operator++(int) const {return {};}
        const IncrDecrF &operator--() const {return *this;}
        IncrDecrF operator--(int) const {return {};}
    };

    // This class is non-copyable, but is trivially movable, so we treat it as if it was copyable.
    struct IncrDecrG
    {
        IncrDecrG() = default;
        IncrDecrG(IncrDecrG &&) = default;
        IncrDecrG &operator++() {return *this;}
        IncrDecrG operator++(int) {return {};}
        IncrDecrG &operator--() {return *this;}
        IncrDecrG operator--(int) {return {};}
    };

    // This class is non-copyable, but is trivially movable, so we treat it as if it was copyable.
    struct IncrDecrH
    {
        IncrDecrH() = default;
        IncrDecrH(IncrDecrH &&) = default;
        const IncrDecrH &operator++() const {return *this;}
        IncrDecrH operator++(int) const {return {};}
        const IncrDecrH &operator--() const {return *this;}
        IncrDecrH operator--(int) const {return {};}
    };

    // Friend functions.
    struct IncrDecrI
    {
        friend int operator++(IncrDecrI) {return 42;}
        friend int operator++(IncrDecrI, int) {return 42;}
        friend int operator--(IncrDecrI) {return 42;}
        friend int operator--(IncrDecrI, int) {return 42;}
    };



    // Test equality comparison.

    struct EqualityA
    {
        bool operator==(int) {return true;}
        bool operator!=(int) {return false;}
        bool operator==(const EqualityA &) const {return true;}
    };

    // Return type isn't `bool`.
    struct EqualityB
    {
        int operator==(int) {return true;}
        int operator!=(int) {return false;}
        int operator==(const EqualityB &) const {return true;}
    };

    // Return type is `void`.
    struct EqualityC
    {
        void operator==(int) {}
        void operator!=(int) {}
        void operator==(const EqualityC &) const {}
    };

    // The C# parameter type ends with `?`, and isn't a managed type.
    struct EqualityD
    {
        bool operator==(const int *) {return false;}
    };

    // The C# parameter type ends with `?`, and is a managed type.
    struct EqualityE
    {
        bool operator==(EqualityD *) {return false;}
    };


    // Test relational comparisons:

    // The happy path, the operator is const.
    struct RelationalA
    {
        bool operator<(const RelationalA &) const {return false;}
        bool operator>(const RelationalA &) const {return false;}
        bool operator<=(const RelationalA &) const {return false;}
        bool operator>=(const RelationalA &) const {return false;}
    };

    // The happy path, the operator is non-const.
    struct RelationalB
    {
        bool operator<(RelationalB &) {return false;}
        bool operator>(RelationalB &) {return false;}
        bool operator<=(RelationalB &) {return false;}
        bool operator>=(RelationalB &) {return false;}
    };

    // The operators have mixed constness, which causes them to be demoted to functions.
    struct RelationalC
    {
        bool operator<(RelationalC &) const {return false;}
        bool operator>(RelationalC &) const {return false;}
        // bool operator<=(RelationalC &) const {return false;} // Skip one operator to observe the function missing.
        bool operator>=(RelationalC &) const {return false;}
    };

    // The operators have operands of different types, causing them to be demoted to functions.
    struct RelationalD
    {
        bool operator<(RelationalC &) const {return false;}
        bool operator>(RelationalC &) const {return false;}
        bool operator<=(RelationalC &) const {return false;}
        bool operator>=(RelationalC &) const {return false;}
    };

    // The operators have a weird return type.
    struct RelationalE
    {
        int operator<(RelationalC &) const {return 42;}
        int operator>(RelationalC &) const {return 42;}
        int operator<=(RelationalC &) const {return 42;}
        int operator>=(RelationalC &) const {return 42;}
    };

    // The operators return void.
    struct RelationalF
    {
        void operator<(RelationalC &) const {}
        void operator>(RelationalC &) const {}
        void operator<=(RelationalC &) const {}
        void operator>=(RelationalC &) const {}
    };


    // Free function operators getting injected into the lhs type:

    // The operator is injected correctly.
    struct StaticOpsLhsA {};
    inline int operator+(StaticOpsLhsA, int) {return 42;}

    // The operator injects but becomes a function, because it returns void.
    struct StaticOpsLhsB {};
    inline void operator+(StaticOpsLhsB, int) {}

    // The operator fails to inject because the class isn't copyable (and isn't trivially movable), and the operator takes it by value.
    struct StaticOpsLhsC
    {
        StaticOpsLhsC() = default;
        StaticOpsLhsC(StaticOpsLhsC &&) {}
    };
    inline int operator+(StaticOpsLhsC, int) {return 42;}

    // The class is non-copyable, but is trivially movable, so the by-value operator injects fine.
    struct StaticOpsLhsD
    {
        StaticOpsLhsD() = default;
        StaticOpsLhsD(StaticOpsLhsD &&) = default;
    };
    inline int operator+(StaticOpsLhsD, int) {return 42;}

    // The class isn't copyable, but the operator takes it by reference, so it injects fine.
    struct StaticOpsLhsE
    {
        StaticOpsLhsE() = default;
        StaticOpsLhsE(StaticOpsLhsE &&) = default;
        StaticOpsLhsE &operator=(StaticOpsLhsE &&) = default;
    };
    inline int operator+(StaticOpsLhsE &, int) {return 42;}

    // The class isn't copyable, but the operator takes it by const reference, so it injects fine.
    struct StaticOpsLhsF
    {
        StaticOpsLhsF() = default;
        StaticOpsLhsF(StaticOpsLhsF &&) = default;
        StaticOpsLhsF &operator=(StaticOpsLhsF &&) = default;
    };
    inline int operator+(const StaticOpsLhsF &, int) {return 42;}

    // The copy ctor uses a non-const reference, so an operator with a by-value parameter gets injected into the non-const half.
    struct StaticOpsLhsG
    {
        StaticOpsLhsG() = default;
        StaticOpsLhsG(StaticOpsLhsG &) = default;
    };
    inline int operator+(StaticOpsLhsG, int) {return 42;}

    // The copy ctor uses a non-const reference, but it doesn't matter because the operator takes the parameter by const reference,
    //   so the operator gets injected into the const half.
    struct StaticOpsLhsH
    {
        StaticOpsLhsH() = default;
        StaticOpsLhsH(StaticOpsLhsH &) = default;
    };
    inline int operator+(const StaticOpsLhsH &, int) {return 42;}


    // Free function operators getting injected into the rhs type:

    // The operator is injected correctly.
    struct StaticOpsRhsA {};
    inline int operator+(int, StaticOpsRhsA) {return 42;}

    // The operator injects but becomes a function, because it returns void.
    struct StaticOpsRhsB {};
    inline void operator+(int, StaticOpsRhsB) {}

    // The operator fails to inject because the class isn't copyable (and isn't trivially movable), and the operator takes it by value.
    struct StaticOpsRhsC
    {
        StaticOpsRhsC() = default;
        StaticOpsRhsC(StaticOpsRhsC &&) {}
    };
    inline int operator+(int, StaticOpsRhsC) {return 42;}

    // The class is non-copyable, but is trivially movable, so the by-value operator injects fine.
    struct StaticOpsRhsD
    {
        StaticOpsRhsD() = default;
        StaticOpsRhsD(StaticOpsRhsD &&) = default;
    };
    inline int operator+(int, StaticOpsRhsD) {return 42;}

    // The class isn't copyable, but the operator takes it by reference, so it injects fine.
    struct StaticOpsRhsE
    {
        StaticOpsRhsE() = default;
        StaticOpsRhsE(StaticOpsRhsE &&) = default;
        StaticOpsRhsE &operator=(StaticOpsRhsE &&) = default;
    };
    inline int operator+(int, StaticOpsRhsE &) {return 42;}

    // The class isn't copyable, but the operator takes it by const reference, so it injects fine.
    struct StaticOpsRhsF
    {
        StaticOpsRhsF() = default;
        StaticOpsRhsF(StaticOpsRhsF &&) = default;
        StaticOpsRhsF &operator=(StaticOpsRhsF &&) = default;
    };
    inline int operator+(int, const StaticOpsRhsF &) {return 42;}

    // The copy ctor uses a non-const reference, so an operator with a by-value parameter gets injected into the non-const half.
    struct StaticOpsRhsG
    {
        StaticOpsRhsG() = default;
        StaticOpsRhsG(StaticOpsRhsG &) = default;
    };
    inline int operator+(int, StaticOpsRhsG) {return 42;}

    // The copy ctor uses a non-const reference, but it doesn't matter because the operator takes the parameter by const reference,
    //   so the operator gets injected into the const half.
    struct StaticOpsRhsH
    {
        StaticOpsRhsH() = default;
        StaticOpsRhsH(StaticOpsRhsH &) = default;
    };
    inline int operator+(int, const StaticOpsRhsH &) {return 42;}


    // Other injection cases:

    enum class StaticOpsEnum {};
    // Fails to inject, becomes a free function.
    inline int operator+(StaticOpsEnum, int) {return 42;}


    struct StaticOpsMixedLhs {};
    struct StaticOpsMixedRhs {};
    // Gets injected into the lhs by default.
    inline int operator+(StaticOpsMixedLhs, StaticOpsMixedRhs) {return 42;}


    // Check how non-trivial class types are passed by value into operators.
    class NonTrivialClassOps
    {
        std::string x;

      public:
        int operator+(int) {return 42;}
    };

    inline int operator+(NonTrivialClassOps, float) {return 42;}
    inline int operator+(float, NonTrivialClassOps) {return 42;}


    // The class is non-copyable, so operators with by-value parameters fail to inject.
    struct NonCopyableClassByValueOps
    {
        NonCopyableClassByValueOps() = default;
        NonCopyableClassByValueOps(NonCopyableClassByValueOps &&) = default;
        NonCopyableClassByValueOps &operator=(NonCopyableClassByValueOps &&) = default;
    };
    inline int operator+(NonCopyableClassByValueOps, int) {return 42;}
    inline int operator+(int, NonCopyableClassByValueOps) {return 42;}


    // Other operators:

    // Test the call operator, since it can have an unusual amount of arguments.
    // Not testing `[]` here to be able to run the tests on older C++.
    struct CallOp
    {
        void operator()() {}
        int operator()(int, int, int) {return 42;}
    };


    // Test some generic operators.
    #define MBTEST_MAKE_TEST_OPS_CLASS(name_, ret_, ret_expr_, param_, .../*extras_*/) \
        struct name_ \
        { \
            __VA_ARGS__ \
          public: \
            /* Unary plus. */ \
            ret_ operator+() {return ret_expr_;} \
            /* Binary plus. */ \
            ret_ operator+(param_) {return ret_expr_;} \
            /* Unary minus. */ \
            ret_ operator-() {return ret_expr_;} \
            /* Binary minus. */ \
            ret_ operator-(param_) {return ret_expr_;} \
            /* Dereference (unary star). */ \
            ret_ operator*() {return ret_expr_;} \
            /* Multiply (binary star). */ \
            ret_ operator*(param_) {return ret_expr_;} \
            /* Divide. */ \
            ret_ operator/(param_) {return ret_expr_;} \
            /* Modulo. */ \
            ret_ operator%(param_) {return ret_expr_;} \
            /* Bit xor. */ \
            ret_ operator^(param_) {return ret_expr_;} \
            /* Address of. */ \
            ret_ operator&() {return ret_expr_;} \
            /* Bit and. */ \
            ret_ operator&(param_) {return ret_expr_;} \
            /* Bit or. */ \
            ret_ operator|(param_) {return ret_expr_;} \
            /* Bit negate. */ \
            ret_ operator~() {return ret_expr_;} \
            /* Boolean negate. */ \
            ret_ operator!() {return ret_expr_;} \
            /* Assign. */ \
            ret_ operator=(param_) {return ret_expr_;} \
            /* Plus assign. */ \
            ret_ operator+=(param_) {return ret_expr_;} \
            /* Minus assign. */ \
            ret_ operator-=(param_) {return ret_expr_;} \
            /* Multiply assign. */ \
            ret_ operator*=(param_) {return ret_expr_;} \
            /* Divide assign. */ \
            ret_ operator/=(param_) {return ret_expr_;} \
            /* Modulo assign. */ \
            ret_ operator%=(param_) {return ret_expr_;} \
            /* Bit xor assign. */ \
            ret_ operator^=(param_) {return ret_expr_;} \
            /* Bit and assign. */ \
            ret_ operator&=(param_) {return ret_expr_;} \
            /* Bit or assign. */ \
            ret_ operator|=(param_) {return ret_expr_;} \
            /* Left shift. */ \
            ret_ operator<<(param_) {return ret_expr_;} \
            /* Right shift. */ \
            ret_ operator>>(param_) {return ret_expr_;} \
            /* Left shift assign. */ \
            ret_ operator<<=(param_) {return ret_expr_;} \
            /* Right shift assign. */ \
            ret_ operator>>=(param_) {return ret_expr_;} \
            /* Compare three way. */ \
            ret_ operator<=>(param_) {return ret_expr_;} \
            /* And. */ \
            ret_ operator&&(param_) {return ret_expr_;} \
            /* Or. */ \
            ret_ operator||(param_) {return ret_expr_;} \
            /* Comma. */ \
            ret_ operator,(param_) {return ret_expr_;} \
            /* Arrow star. */ \
            ret_ operator->*(param_) {return ret_expr_;} \
            /* Arrow. */ \
            ret_ operator->() {return ret_expr_;} \
            /* Function call. */ \
            ret_ operator()(param_) {return ret_expr_;} \
            /* Indexing. */ \
            ret_ operator[](param_) {return ret_expr_;} \
            /* Since we have a custom assignment, we also need a custom copy ctor to avoid the deprecation warning. */ \
            name_(const name_ &) = default; \
        };

    MBTEST_MAKE_TEST_OPS_CLASS(TestOpsA, int, 42, TestOpsA)
    MBTEST_MAKE_TEST_OPS_CLASS(TestOpsB, int, 42, TestOpsB, private: std::string s;) // Make the class non-trivial.
    MBTEST_MAKE_TEST_OPS_CLASS(TestOpsC, void,, TestOpsA) // Return void.


    // Subscription operator.

    struct IndexerA
    {
        int x;
        int &operator[](int i) {(void)i; return x;}
    };

    struct IndexerB
    {
        IndexerA a;
        const IndexerA &operator[](int i) const {(void)i; return a;}
        const IndexerA &operator[](int i, int j) const {(void)i; (void)j; return a;}
        const IndexerA &operator[]() const {return a;}
    };

    struct IndexerC
    {
        int operator[](int i) {(void)i; return 42;}
        float operator[](int i) const {(void)i; return 12.3f;}
    };


    // Conversion operators. We preserve explicit-ness.
    struct ConvOp
    {
        operator int() {return 42;}
        explicit operator float() {return 43;}
    };

    // Conversion operators to references.
    class ConvOpToRef
    {
        float f = 0;
        unsigned short s = 0;

      public:
        // Not to a reference.
        operator int() {return 42;}
        // To a reference.
        operator float &() {return f;}
        // To a reference, explicit.
        explicit operator unsigned short &() {return s;}
    };

    // Conversions to string-like types.
    // Those create the additional `operator string` to convert directly to a C# string, and `override string ToString()` to override the method of the implicit base `object`.

    struct StringConvString
    {
        operator std::string() {return "blah";}
    };
    struct StringConvStringView
    {
        // Mark this `explicit` and `const` for a change.
        explicit operator std::string_view() const {return "bleh";}
    };
    struct StringConvFsPath
    {
        operator std::filesystem::path() {return "bluh";}
    };


    // Conversion constructors. Right now we only provide conversion operators for implicit ones,
    //   because I have no idea when the explicit ones could be useful.
    struct ConvCtor
    {
        ConvCtor() {}
        ConvCtor(int) {}
        ConvCtor(int, int) {}
        ConvCtor(short, int = 42) {} // This counts as a conversion constructor.
        explicit ConvCtor(float) {}
        explicit ConvCtor(float, float) {}
    };

    // Test that the default argument of the parameter of a converting constructor is stripped when rewriting it as a conversion operator.
    struct ConvCtorWithDefArg
    {
        ConvCtorWithDefArg(int = 42) {}
    };

    // A non-trivial move-only class with a converting ctor.
    // Here we test that our converting constructors injected into `_ByValue_...` don't attempt to copy the class.
    class ConvCtorNonTrivialRestricted
    {
        std::string s;
      public:
        ConvCtorNonTrivialRestricted(int) {}
        ConvCtorNonTrivialRestricted(ConvCtorNonTrivialRestricted &&) = default;
        ConvCtorNonTrivialRestricted &operator=(ConvCtorNonTrivialRestricted &&) = default;
    };

    // A converting ctor in an exposed struct.
    struct ConvCtorExposed
    {
        int x;
        ConvCtorExposed(int) {}
    };

    // A sad class that's copyable but not movable.
    // This can often happen if you have a user-provided destructor.
    class ConvCtorCopyButNoMove
    {
        std::string s; // Non-trivial.

      public:
        ConvCtorCopyButNoMove(int) {}

        ConvCtorCopyButNoMove(const ConvCtorCopyButNoMove &) = default;
        ConvCtorCopyButNoMove &operator=(const ConvCtorCopyButNoMove &) = default;
        ConvCtorCopyButNoMove(ConvCtorCopyButNoMove &&) = delete;
        ConvCtorCopyButNoMove &operator=(ConvCtorCopyButNoMove &&) = delete;
    };


    // Test how a trivial class with a converting constructor gets the additional conversion operators in its parameter passing helpers.
    class ConvCtorTrivial
    {
        void foo() {}
      public:
        ConvCtorTrivial() {}
        ConvCtorTrivial(int) {}
    };
    inline ConvCtorTrivial default_convtrivial;

    inline ConvCtorTrivial test_class_convtrivial(ConvCtorTrivial a, ConvCtorTrivial b = {}) {(void)a; (void)b; return {};}
    inline ConvCtorTrivial &test_class_convtrivial_ref(ConvCtorTrivial &a, ConvCtorTrivial &b = default_convtrivial) {(void)a; (void)b; return default_convtrivial;}
    inline const ConvCtorTrivial &test_class_convtrivial_cref(const ConvCtorTrivial &a, const ConvCtorTrivial &b = default_convtrivial) {(void)a; (void)b; return default_convtrivial;}
    inline ConvCtorTrivial *test_class_convtrivial_ptr(ConvCtorTrivial *a, ConvCtorTrivial *b = nullptr, ConvCtorTrivial *c = &default_convtrivial) {(void)a; (void)b; (void)c; return &default_convtrivial;}
    inline const ConvCtorTrivial *test_class_convtrivial_cptr(const ConvCtorTrivial *a, const ConvCtorTrivial *b = nullptr, const ConvCtorTrivial *c = &default_convtrivial) {(void)a; (void)b; (void)c; return &default_convtrivial;}

    // Test how a non-trivial class with a converting constructor gets the additional conversion operators in its parameter passing helpers.
    class ConvCtorNonTrivial
    {
        std::string a;
      public:
        ConvCtorNonTrivial() {}
        ConvCtorNonTrivial(int) {}
    };
    inline ConvCtorNonTrivial default_convnontrivial;

    inline ConvCtorNonTrivial test_class_convnontrivial(ConvCtorNonTrivial a, ConvCtorNonTrivial b = {}) {(void)a; (void)b; return {};}
    inline ConvCtorNonTrivial &test_class_convnontrivial_ref(ConvCtorNonTrivial &a, ConvCtorNonTrivial &b = default_convnontrivial) {(void)a; (void)b; return default_convnontrivial;}
    inline const ConvCtorNonTrivial &test_class_convnontrivial_cref(const ConvCtorNonTrivial &a, const ConvCtorNonTrivial &b = default_convnontrivial) {(void)a; (void)b; return default_convnontrivial;}
    inline ConvCtorNonTrivial *test_class_convnontrivial_ptr(ConvCtorNonTrivial *a, ConvCtorNonTrivial *b = nullptr, ConvCtorNonTrivial *c = &default_convnontrivial) {(void)a; (void)b; (void)c; return &default_convnontrivial;}
    inline const ConvCtorNonTrivial *test_class_convnontrivial_cptr(const ConvCtorNonTrivial *a, const ConvCtorNonTrivial *b = nullptr, const ConvCtorNonTrivial *c = &default_convnontrivial) {(void)a; (void)b; (void)c; return &default_convnontrivial;}


    // Exposed structs:

    struct ExposedLayout
    {
        unsigned short x;
        // This is field `y`!
        int y;
        double z;
        int arr[3];

        bool b;
        bool ba[4][5];

        void foo() {}
        void bar() const {}

        static void blah() {}

        // Try some jank operators.
        void operator++() {}

        int operator+(int) {return 42;}
        // Test how returning references to an exposed struct works, since C# overloaded operators can't return `ref`.
        // Note that this operator must be `const` to test this correctly, since we turn non-const operators in exposed structs into functions.
        ExposedLayout &operator*(int) const {return const_cast<ExposedLayout &>(*this);}
        const ExposedLayout &operator+(int) const {return *this;} // Same, but return a const ref.
        bool operator<(const ExposedLayout &) const {return false;}
        friend int operator-(int, ExposedLayout) {return 43;}
        friend int operator/(int, ExposedLayout &) {return 43;}
        friend int operator%(int, const ExposedLayout &) {return 43;}

        bool operator==(float) {return true;}
        bool operator<(char) {return true;}
    };
    inline void operator--(ExposedLayout) {}

    inline ExposedLayout default_exposed;

    inline ExposedLayout test_exposed(ExposedLayout a, ExposedLayout b = default_exposed) {(void)a; return b;}
    inline ExposedLayout &test_exposed_ref(ExposedLayout &a, ExposedLayout &b = default_exposed) {(void)a; (void)b; return default_exposed;}
    inline const ExposedLayout &test_exposed_cref(const ExposedLayout &a, const ExposedLayout &b = default_exposed) {(void)a; (void)b; return default_exposed;}
    inline ExposedLayout &&test_exposed_rref(ExposedLayout &&a, ExposedLayout &&b = (ExposedLayout &&)default_exposed) {(void)a; (void)b; return (ExposedLayout &&)default_exposed;}
    inline const ExposedLayout &&test_exposed_crref(const ExposedLayout &&a, const ExposedLayout &&b = (ExposedLayout &&)default_exposed) {(void)a; (void)b; return (const ExposedLayout &&)default_exposed;}
    inline ExposedLayout *test_exposed_ptr(ExposedLayout *a, ExposedLayout *b = nullptr, ExposedLayout *c = &default_exposed) {(void)a; (void)b; (void)c; return &default_exposed;}
    inline const ExposedLayout *test_exposed_cptr(const ExposedLayout *a, const ExposedLayout *b = nullptr, const ExposedLayout *c = &default_exposed) {(void)a; (void)b; (void)c; return &default_exposed;}

    // This broke at one point, so testing it too.
    inline std::vector<ExposedLayout> test_exposed_vec() {return {};}

    // Test that capturing lifetime of an exposed struct is a no-op.
    inline NonTrivial &asave_ref_in_exposed_layout(ExposedLayout &ref MBTEST_LIFETIMEBOUND) {(void)ref; return default_nontrivial;}


    // This one is backed by a shared pointer.
    struct ExposedLayoutSh
    {
        unsigned short x;
        // This is field `y`!
        int y;
        double z;
        int arr[3];

        bool b;
        bool ba[4][5];

        void foo() {}
        void bar() const {}

        static void blah() {}

        // Try some jank operators.
        void operator++() {}

        int operator+(int) {return 42;}
        int operator*(int) const {return 42;}
        bool operator<(const ExposedLayoutSh &) const {return false;}
        friend int operator-(int, ExposedLayoutSh) {return 43;}
        friend int operator/(int, ExposedLayoutSh &) {return 43;}
        friend int operator%(int, const ExposedLayoutSh &) {return 43;}

        bool operator==(float) {return true;}
        bool operator<(char) {return true;}

        // While we're at it, test comparison against another exposed struct, since this is apparently non-trivial.
        bool operator==(const ExposedLayout &) const {return true;}
        // And against itself, too.
        bool operator==(const ExposedLayoutSh &) const {return true;}
    };
    inline void operator--(ExposedLayoutSh) {}

    inline std::shared_ptr<ExposedLayoutSh> make_exposed_sh() {return nullptr;}

    inline ExposedLayoutSh default_exposed_sh;

    inline ExposedLayoutSh test_exposed(ExposedLayoutSh a, ExposedLayoutSh b = default_exposed_sh) {(void)a; return b;}
    inline ExposedLayoutSh &test_exposed_ref(ExposedLayoutSh &a, ExposedLayoutSh &b = default_exposed_sh) {(void)a; (void)b; return default_exposed_sh;}
    inline const ExposedLayoutSh &test_exposed_cref(const ExposedLayoutSh &a, const ExposedLayoutSh &b = default_exposed_sh) {(void)a; (void)b; return default_exposed_sh;}
    inline ExposedLayoutSh *test_exposed_ptr(ExposedLayoutSh *a, ExposedLayoutSh *b = nullptr, ExposedLayoutSh *c = &default_exposed_sh) {(void)a; (void)b; (void)c; return &default_exposed_sh;}
    inline const ExposedLayoutSh *test_exposed_cptr(const ExposedLayoutSh *a, const ExposedLayoutSh *b = nullptr, const ExposedLayoutSh *c = &default_exposed_sh) {(void)a; (void)b; (void)c; return &default_exposed_sh;}

    struct ExposedLayoutB
    {
        int x;

        // Some random ctor.
        ExposedLayoutB(int, int) {}

        // This gets a lifetime annotation from `--infer-lifetime-constructors`, but it should be a no-op in an exposed struct.
        ExposedLayoutB(const A &) {}

        // And try an equality comparison!
        friend bool operator==(const ExposedLayoutB &, const ExposedLayoutB &) {return true;}
    };


    // Test various array members.
    struct ArrayMembers
    {
        int i = 42;

        int ia[2] = {10, 20};
        int iaa[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

        const int ci = 43;

        const int cia[2] = {100, 200};
        const int ciaa[3][4] = {{10,20,30,40}, {50,60,70,80}, {90,100,110,120}};

        std::string s = "s";

        std::string sa[2] = {"sa0", "sa1"};
        // std::string saa[3][4]; // The C generator doesn't support those yet. We'd need to expose them as flat arrays, with N size getters, I think?

        const std::string cs = "cs";

        const std::string csa[2] = {"csa0", "csa1"};
        // const std::string csaa[6][7]; // See above.
    };


    // 50 shades of `std::optional`:

    inline std::optional<int> default_optint;

    inline       std::optional<int>  test_optint     (      std::optional<int>  a,       std::optional<int>  b = default_optint,       std::optional<int>  c =  default_optint) {(void)a; (void)b; return c;}
    inline       std::optional<int> &test_optint_ref (      std::optional<int> &a,       std::optional<int> &b = default_optint                                               ) {(void)a; (void)b; return default_optint;}
    inline const std::optional<int> &test_optint_cref(const std::optional<int> &a, const std::optional<int> &b = default_optint                                               ) {(void)a; (void)b; return default_optint;}
    inline       std::optional<int> *test_optint_ptr (      std::optional<int> *a,       std::optional<int> *b = nullptr       ,       std::optional<int> *c = &default_optint) {(void)a; (void)b; (void)c; return &default_optint;}
    inline const std::optional<int> *test_optint_cptr(const std::optional<int> *a, const std::optional<int> *b = nullptr       , const std::optional<int> *c = &default_optint) {(void)a; (void)b; (void)c; return &default_optint;}

    inline std::optional<std::string> default_optstr;

    inline       std::optional<std::string>  test_optstr     (      std::optional<std::string>  a,       std::optional<std::string>  b = default_optstr,       std::optional<std::string>  c =  default_optstr) {(void)a; (void)b; return c;}
    inline       std::optional<std::string> &test_optstr_ref (      std::optional<std::string> &a,       std::optional<std::string> &b = default_optstr                                               ) {(void)a; (void)b; return default_optstr;}
    inline const std::optional<std::string> &test_optstr_cref(const std::optional<std::string> &a, const std::optional<std::string> &b = default_optstr                                               ) {(void)a; (void)b; return default_optstr;}
    inline       std::optional<std::string> *test_optstr_ptr (      std::optional<std::string> *a,       std::optional<std::string> *b = nullptr       ,       std::optional<std::string> *c = &default_optstr) {(void)a; (void)b; (void)c; return &default_optstr;}
    inline const std::optional<std::string> *test_optstr_cptr(const std::optional<std::string> *a, const std::optional<std::string> *b = nullptr       , const std::optional<std::string> *c = &default_optstr) {(void)a; (void)b; (void)c; return &default_optstr;}

    inline std::optional<Trivial> default_opttriv;

    inline       std::optional<Trivial>  test_opttriv     (      std::optional<Trivial>  a,       std::optional<Trivial>  b = default_opttriv,       std::optional<Trivial>  c =  default_opttriv) {(void)a; (void)b; return c;}
    inline       std::optional<Trivial> &test_opttriv_ref (      std::optional<Trivial> &a,       std::optional<Trivial> &b = default_opttriv                                                    ) {(void)a; (void)b; return default_opttriv;}
    inline const std::optional<Trivial> &test_opttriv_cref(const std::optional<Trivial> &a, const std::optional<Trivial> &b = default_opttriv                                                    ) {(void)a; (void)b; return default_opttriv;}
    inline       std::optional<Trivial> *test_opttriv_ptr (      std::optional<Trivial> *a,       std::optional<Trivial> *b = nullptr        ,       std::optional<Trivial> *c = &default_opttriv) {(void)a; (void)b; (void)c; return &default_opttriv;}
    inline const std::optional<Trivial> *test_opttriv_cptr(const std::optional<Trivial> *a, const std::optional<Trivial> *b = nullptr        , const std::optional<Trivial> *c = &default_opttriv) {(void)a; (void)b; (void)c; return &default_opttriv;}

    inline std::optional<NonTrivial> default_optnontriv;

    inline       std::optional<NonTrivial>  test_optnontriv     (      std::optional<NonTrivial>  a,       std::optional<NonTrivial>  b = default_optnontriv,       std::optional<NonTrivial>  c =  default_optnontriv) {(void)a; (void)b; return c;}
    inline       std::optional<NonTrivial> &test_optnontriv_ref (      std::optional<NonTrivial> &a,       std::optional<NonTrivial> &b = default_optnontriv                                                          ) {(void)a; (void)b; return default_optnontriv;}
    inline const std::optional<NonTrivial> &test_optnontriv_cref(const std::optional<NonTrivial> &a, const std::optional<NonTrivial> &b = default_optnontriv                                                          ) {(void)a; (void)b; return default_optnontriv;}
    inline       std::optional<NonTrivial> *test_optnontriv_ptr (      std::optional<NonTrivial> *a,       std::optional<NonTrivial> *b = nullptr           ,       std::optional<NonTrivial> *c = &default_optnontriv) {(void)a; (void)b; (void)c; return &default_optnontriv;}
    inline const std::optional<NonTrivial> *test_optnontriv_cptr(const std::optional<NonTrivial> *a, const std::optional<NonTrivial> *b = nullptr           , const std::optional<NonTrivial> *c = &default_optnontriv) {(void)a; (void)b; (void)c; return &default_optnontriv;}

    inline std::optional<ExposedLayoutSh> default_optshexp;

    inline       std::optional<ExposedLayoutSh>  test_optshexp     (      std::optional<ExposedLayoutSh>  a,       std::optional<ExposedLayoutSh>  b = default_optshexp,       std::optional<ExposedLayoutSh>  c =  default_optshexp) {(void)a; (void)b; return c;}
    inline       std::optional<ExposedLayoutSh> &test_optshexp_ref (      std::optional<ExposedLayoutSh> &a,       std::optional<ExposedLayoutSh> &b = default_optshexp                                                             ) {(void)a; (void)b; return default_optshexp;}
    inline const std::optional<ExposedLayoutSh> &test_optshexp_cref(const std::optional<ExposedLayoutSh> &a, const std::optional<ExposedLayoutSh> &b = default_optshexp                                                             ) {(void)a; (void)b; return default_optshexp;}
    inline       std::optional<ExposedLayoutSh> *test_optshexp_ptr (      std::optional<ExposedLayoutSh> *a,       std::optional<ExposedLayoutSh> *b = nullptr         ,       std::optional<ExposedLayoutSh> *c = &default_optshexp) {(void)a; (void)b; (void)c; return &default_optshexp;}
    inline const std::optional<ExposedLayoutSh> *test_optshexp_cptr(const std::optional<ExposedLayoutSh> *a, const std::optional<ExposedLayoutSh> *b = nullptr         , const std::optional<ExposedLayoutSh> *c = &default_optshexp) {(void)a; (void)b; (void)c; return &default_optshexp;}

    inline std::optional<SA> default_optshtriv;

    inline       std::optional<SA>  test_optshtriv     (      std::optional<SA>  a,       std::optional<SA>  b = default_optshtriv,       std::optional<SA>  c =  default_optshtriv) {(void)a; (void)b; return c;}
    inline       std::optional<SA> &test_optshtriv_ref (      std::optional<SA> &a,       std::optional<SA> &b = default_optshtriv                                                 ) {(void)a; (void)b; return default_optshtriv;}
    inline const std::optional<SA> &test_optshtriv_cref(const std::optional<SA> &a, const std::optional<SA> &b = default_optshtriv                                                 ) {(void)a; (void)b; return default_optshtriv;}
    inline       std::optional<SA> *test_optshtriv_ptr (      std::optional<SA> *a,       std::optional<SA> *b = nullptr          ,       std::optional<SA> *c = &default_optshtriv) {(void)a; (void)b; (void)c; return &default_optshtriv;}
    inline const std::optional<SA> *test_optshtriv_cptr(const std::optional<SA> *a, const std::optional<SA> *b = nullptr          , const std::optional<SA> *c = &default_optshtriv) {(void)a; (void)b; (void)c; return &default_optshtriv;}


    // Tag types:

    inline std::greater<int> test_tag(std::greater<int> a, std::greater<int> b = std::greater<int>{}) {(void)a; return b;}
    // Returning refs doesn't work in C for now. It's not very useful.
    // Passing non-const lvalues refs intentionally doesn't work.
    // inline std::greater<int> &test_tag_ref() {}
    inline /*const std::greater<int> &*/void test_tag_cref(const std::greater<int> &a, const std::greater<int> &b = std::greater<int>{}) {(void)a; (void)b;}
    inline std::greater<int> *test_tag_ptr() {return nullptr;}
    inline const std::greater<int> *test_tag_cptr() {return nullptr;}


    // `std::variant`:

    using Variant = std::variant<std::monostate, int, float>;

    inline Variant default_variant;

    inline Variant test_variant(Variant a, Variant b = default_variant) {(void)a; return b;}
    inline Variant &test_variant_ref(Variant &a, Variant &b = default_variant) {(void)a; return b;}
    inline const Variant &test_variant_cref(const Variant &a, const Variant &b = default_variant) {(void)a; return b;}
    inline Variant *test_variant_ptr(Variant *a, Variant *b = &default_variant) {(void)a; return b;}
    inline const Variant *test_variant_cptr(const Variant *a, const Variant *b = &default_variant) {(void)a; return b;}

    // Test a variant that has duplicate element types.
    inline std::variant<std::monostate, int, float, float> test_variant_with_repeated_types() {return {};}


    // Input and output streams:

    inline std::ostream &test_iostreams_ref(std::istream &) {return std::cout;}
    inline std::ostream *test_iostreams_ptr(std::istream *) {return &std::cout;}
    inline const std::ostream &test_iostreams_cref(const std::istream &) {return std::cout;}
    inline const std::ostream *test_iostreams_cptr(const std::istream *) {return &std::cout;}


    // `std::unique_ptr`:

    inline std::unique_ptr<int> default_uniqueptr;

    inline std::unique_ptr<int> test_uniqueptr(std::unique_ptr<int> a, std::unique_ptr<int> b = std::move(default_uniqueptr)) {(void)a; (void)b; return {};}
    inline std::unique_ptr<int> &test_uniqueptr_ref(std::unique_ptr<int> &a, std::unique_ptr<int> &b = default_uniqueptr) {(void)a; (void)b; return default_uniqueptr;}
    inline const std::unique_ptr<int> &test_uniqueptr_cref(const std::unique_ptr<int> &a, const std::unique_ptr<int> &b = default_uniqueptr) {(void)a; (void)b; return default_uniqueptr;}
    inline std::unique_ptr<int> *test_uniqueptr_ptr(std::unique_ptr<int> *a, std::unique_ptr<int> *b = nullptr, std::unique_ptr<int> *c = &default_uniqueptr) {(void)a; (void)b; (void)c; return &default_uniqueptr;}
    inline const std::unique_ptr<int> *test_uniqueptr_cptr(const std::unique_ptr<int> *a, const std::unique_ptr<int> *b = nullptr, const std::unique_ptr<int> *c = &default_uniqueptr) {(void)a; (void)b; (void)c; return &default_uniqueptr;}


    // Pointers and references to arrays. Only known-size types for now.

    using PlainArray = int[42];
    inline PlainArray default_plainarr;

    inline PlainArray &test_plainarr_ref(PlainArray &a, PlainArray &b = default_plainarr) {(void)a; (void)b; return default_plainarr;}
    inline const PlainArray &test_plainarr_cref(const PlainArray &a, const PlainArray &b = default_plainarr) {(void)a; (void)b; return default_plainarr;}
    inline PlainArray &&test_plainarr_rref(PlainArray &&a, PlainArray &&b = (PlainArray &&)default_plainarr) {(void)a; (void)b; return (PlainArray &&)default_plainarr;}
    inline const PlainArray &&test_plainarr_crref(const PlainArray &&a, const PlainArray &&b = (PlainArray &&)default_plainarr) {(void)a; (void)b; return (const PlainArray &&)default_plainarr;}
    inline PlainArray *test_plainarr_ptr(PlainArray *a, PlainArray *b = nullptr, PlainArray *c = &default_plainarr) {(void)a; (void)b; (void)c; return &default_plainarr;}
    inline const PlainArray *test_plainarr_cptr(const PlainArray *a, const PlainArray *b = nullptr, const PlainArray *c = &default_plainarr) {(void)a; (void)b; (void)c; return &default_plainarr;}

    using PlainArray2 = int[10][20];
    inline PlainArray2 default_plainarr2;

    inline PlainArray2 &test_plainarr2_ref(PlainArray2 &a, PlainArray2 &b = default_plainarr2) {(void)a; (void)b; return default_plainarr2;}
    inline const PlainArray2 &test_plainarr2_cref(const PlainArray2 &a, const PlainArray2 &b = default_plainarr2) {(void)a; (void)b; return default_plainarr2;}
    inline PlainArray2 &&test_plainarr2_rref(PlainArray2 &&a, PlainArray2 &&b = (PlainArray2 &&)default_plainarr2) {(void)a; (void)b; return (PlainArray2 &&)default_plainarr2;}
    inline const PlainArray2 &&test_plainarr2_crref(const PlainArray2 &&a, const PlainArray2 &&b = (PlainArray2 &&)default_plainarr2) {(void)a; (void)b; return (const PlainArray2 &&)default_plainarr2;}
    inline PlainArray2 *test_plainarr2_ptr(PlainArray2 *a, PlainArray2 *b = nullptr, PlainArray2 *c = &default_plainarr2) {(void)a; (void)b; (void)c; return &default_plainarr2;}
    inline const PlainArray2 *test_plainarr2_cptr(const PlainArray2 *a, const PlainArray2 *b = nullptr, const PlainArray2 *c = &default_plainarr2) {(void)a; (void)b; (void)c; return &default_plainarr2;}

    using PlainArrayEnum = E1[42];
    inline PlainArrayEnum default_plainarrenum;

    inline PlainArrayEnum &test_plainarrenum_ref(PlainArrayEnum &a, PlainArrayEnum &b = default_plainarrenum) {(void)a; (void)b; return default_plainarrenum;}
    inline const PlainArrayEnum &test_plainarrenum_cref(const PlainArrayEnum &a, const PlainArrayEnum &b = default_plainarrenum) {(void)a; (void)b; return default_plainarrenum;}
    inline PlainArrayEnum *test_plainarrenum_ptr(PlainArrayEnum *a, PlainArrayEnum *b = nullptr, PlainArrayEnum *c = &default_plainarrenum) {(void)a; (void)b; (void)c; return &default_plainarrenum;}
    inline const PlainArrayEnum *test_plainarrenum_cptr(const PlainArrayEnum *a, const PlainArrayEnum *b = nullptr, const PlainArrayEnum *c = &default_plainarrenum) {(void)a; (void)b; (void)c; return &default_plainarrenum;}

    using PlainArrayEnum2 = E1[10][20];
    inline PlainArrayEnum2 default_plainarrenum2;

    inline PlainArrayEnum2 &test_plainarrenum2_ref(PlainArrayEnum2 &a, PlainArrayEnum2 &b = default_plainarrenum2) {(void)a; (void)b; return default_plainarrenum2;}
    inline const PlainArrayEnum2 &test_plainarrenum2_cref(const PlainArrayEnum2 &a, const PlainArrayEnum2 &b = default_plainarrenum2) {(void)a; (void)b; return default_plainarrenum2;}
    inline PlainArrayEnum2 *test_plainarrenum2_ptr(PlainArrayEnum2 *a, PlainArrayEnum2 *b = nullptr, PlainArrayEnum2 *c = &default_plainarrenum2) {(void)a; (void)b; (void)c; return &default_plainarrenum2;}
    inline const PlainArrayEnum2 *test_plainarrenum2_cptr(const PlainArrayEnum2 *a, const PlainArrayEnum2 *b = nullptr, const PlainArrayEnum2 *c = &default_plainarrenum2) {(void)a; (void)b; (void)c; return &default_plainarrenum2;}


    // Some multi-level pointer madness:

    inline PlainArray **test_ptrs1(PlainArray **ptr, PlainArray *&ref) {(void)ptr; (void)ref; return nullptr;}
    inline PlainArray ***test_ptrs2(PlainArray ***ptr, PlainArray **&ref) {(void)ptr; (void)ref; return nullptr;}

    using IntPtr = int *;
    inline IntPtr default_intptr = nullptr;

    inline IntPtr &test_intptr_ref(IntPtr &a, IntPtr &b = default_intptr) {(void)a; (void)b; return default_intptr;}
    inline const IntPtr &test_intptr_cref(const IntPtr &a, const IntPtr &b = default_intptr) {(void)a; (void)b; return default_intptr;}
    inline IntPtr *test_intptr_ptr(IntPtr *a, IntPtr *b = nullptr, IntPtr *c = &default_intptr) {(void)a; (void)b; (void)c; return &default_intptr;}
    inline const IntPtr *test_intptr_cptr(const IntPtr *a, const IntPtr *b = nullptr, const IntPtr *c = &default_intptr) {(void)a; (void)b; (void)c; return &default_intptr;}

    using IntCptr = const int *;
    inline IntCptr default_intcptr = nullptr;

    inline IntCptr &test_intcptr_ref(IntCptr &a, IntCptr &b = default_intcptr) {(void)a; (void)b; return default_intcptr;}
    inline const IntCptr &test_intcptr_cref(const IntCptr &a, const IntCptr &b = default_intcptr) {(void)a; (void)b; return default_intcptr;}
    inline IntCptr *test_intcptr_ptr(IntCptr *a, IntCptr *b = nullptr, IntCptr *c = &default_intcptr) {(void)a; (void)b; (void)c; return &default_intcptr;}
    inline const IntCptr *test_intcptr_cptr(const IntCptr *a, const IntCptr *b = nullptr, const IntCptr *c = &default_intcptr) {(void)a; (void)b; (void)c; return &default_intcptr;}


    using IntPtrPtr = int **;
    inline IntPtrPtr default_intptrptr = nullptr;

    inline IntPtrPtr &test_intptrptr_ref(IntPtrPtr &a, IntPtrPtr &b = default_intptrptr) {(void)a; (void)b; return default_intptrptr;}
    inline const IntPtrPtr &test_intptrptr_cref(const IntPtrPtr &a, const IntPtrPtr &b = default_intptrptr) {(void)a; (void)b; return default_intptrptr;}
    inline IntPtrPtr *test_intptrptr_ptr(IntPtrPtr *a, IntPtrPtr *b = nullptr, IntPtrPtr *c = &default_intptrptr) {(void)a; (void)b; (void)c; return &default_intptrptr;}
    inline const IntPtrPtr *test_intptrptr_cptr(const IntPtrPtr *a, const IntPtrPtr *b = nullptr, const IntPtrPtr *c = &default_intptrptr) {(void)a; (void)b; (void)c; return &default_intptrptr;}


    using VoidPtr = void *;
    inline VoidPtr default_voidptr = nullptr;

    inline VoidPtr &test_voidptr_ref(VoidPtr &a, VoidPtr &b = default_voidptr) {(void)a; (void)b; return default_voidptr;}
    inline const VoidPtr &test_voidptr_cref(const VoidPtr &a, const VoidPtr &b = default_voidptr) {(void)a; (void)b; return default_voidptr;}
    inline VoidPtr *test_voidptr_ptr(VoidPtr *a, VoidPtr *b = nullptr, VoidPtr *c = &default_voidptr) {(void)a; (void)b; (void)c; return &default_voidptr;}
    inline const VoidPtr *test_voidptr_cptr(const VoidPtr *a, const VoidPtr *b = nullptr, const VoidPtr *c = &default_voidptr) {(void)a; (void)b; (void)c; return &default_voidptr;}

    using VoidPtrPtr = void **;
    inline VoidPtrPtr default_voidptrptr = nullptr;

    inline VoidPtrPtr &test_voidptrptr_ref(VoidPtrPtr &a, VoidPtrPtr &b = default_voidptrptr) {(void)a; (void)b; return default_voidptrptr;}
    inline const VoidPtrPtr &test_voidptrptr_cref(const VoidPtrPtr &a, const VoidPtrPtr &b = default_voidptrptr) {(void)a; (void)b; return default_voidptrptr;}
    inline VoidPtrPtr *test_voidptrptr_ptr(VoidPtrPtr *a, VoidPtrPtr *b = nullptr, VoidPtrPtr *c = &default_voidptrptr) {(void)a; (void)b; (void)c; return &default_voidptrptr;}
    inline const VoidPtrPtr *test_voidptrptr_cptr(const VoidPtrPtr *a, const VoidPtrPtr *b = nullptr, const VoidPtrPtr *c = &default_voidptrptr) {(void)a; (void)b; (void)c; return &default_voidptrptr;}


    using ArrPtr = PlainArray *;
    inline ArrPtr default_arrptr = nullptr;

    inline ArrPtr &test_arrptr_ref(ArrPtr &a, ArrPtr &b = default_arrptr) {(void)a; (void)b; return default_arrptr;}
    inline const ArrPtr &test_arrptr_cref(const ArrPtr &a, const ArrPtr &b = default_arrptr) {(void)a; (void)b; return default_arrptr;}
    inline ArrPtr *test_arrptr_ptr(ArrPtr *a, ArrPtr *b = nullptr, ArrPtr *c = &default_arrptr) {(void)a; (void)b; (void)c; return &default_arrptr;}
    inline const ArrPtr *test_arrptr_cptr(const ArrPtr *a, const ArrPtr *b = nullptr, const ArrPtr *c = &default_arrptr) {(void)a; (void)b; (void)c; return &default_arrptr;}

    using ArrCptr = const PlainArray *;
    inline ArrCptr default_arrcptr = nullptr;

    inline ArrCptr &test_arrcptr_ref(ArrCptr &a, ArrCptr &b = default_arrcptr) {(void)a; (void)b; return default_arrcptr;}
    inline const ArrCptr &test_arrcptr_cref(const ArrCptr &a, const ArrCptr &b = default_arrcptr) {(void)a; (void)b; return default_arrcptr;}
    inline ArrCptr *test_arrcptr_ptr(ArrCptr *a, ArrCptr *b = nullptr, ArrCptr *c = &default_arrcptr) {(void)a; (void)b; (void)c; return &default_arrcptr;}
    inline const ArrCptr *test_arrcptr_cptr(const ArrCptr *a, const ArrCptr *b = nullptr, const ArrCptr *c = &default_arrcptr) {(void)a; (void)b; (void)c; return &default_arrcptr;}


    // Members having the same name as the exposed class, after rewriting.

    struct NameConflicts
    {
        int name_conflicts;
        void name_Conflicts() {}

        struct A {};
        A a;
    };

    inline void nameConflicts() {}

    struct NameConflictsExposed
    {
        int name_conflicts_exposed;
        void name_Conflicts_exposed() {}

        struct A {int x;};
        A a;
    };

    inline void nameConflictsExposed() {}


    // Test how template arguments are added to function names when needed to avoid ambiguities.

    template <typename T> void template_a(T) {}
    template <typename T> T template_b() {return {};}
    template <typename T> void template_c() {}

    inline void instantiate()
    {
        template_a<int>({});
        template_a<float>({});
        template_b<int>();
        template_b<float>();
        template_c<int>();
        template_c<float>();
    }

    struct AmbiguousTemplates
    {
        template <typename T> void template_a(T) {}
        template <typename T> T template_b() {return {};}
        template <typename T> void template_c() {}

        inline void instantiate()
        {
            template_a<int>({});
            template_a<float>({});
            template_b<int>();
            template_b<float>();
            template_c<int>();
            template_c<float>();
        }
    };


    // Test that we don't produce the const and non-const overloads of the same function under the same name in C#, as that would be a compilation error in C#.
    struct ConstNonconstConflicts
    {
        int x;

        void foo(int) {}
        void foo(float) const {}

        void foo(char) {}
        void foo(char) const {}

        int operator+() {return 42;}
        int operator+() const {return 42;}

        // Since this returns void, it gets rewritten into a method.
        void operator~() {}
        void operator~() const {}

        friend int operator-(ConstNonconstConflicts &) {return 42;}
        friend int operator-(const ConstNonconstConflicts &) {return 42;}

        // Since this returns void, it gets rewritten into a method.
        friend void operator!(ConstNonconstConflicts &) {}
        friend void operator!(const ConstNonconstConflicts &) {}

        int operator/(int) {return 42;}
        int operator/(int) const {return 42;}
        friend int operator&(int, ConstNonconstConflicts &) {return 42;}
        friend int operator&(int, const ConstNonconstConflicts &) {return 42;}
    };


    // Class fields of pointer types:

    struct ClassMemberPointersClass
    {
        A *a;
        const A *b;
        A &c;
        const A &d;

        static A *sa;
        static const A *sb;
        static A &sc;
        static const A &sd;
    };

    struct ClassMemberPointersExposed
    {
        ExposedLayout *a;
        const ExposedLayout *b;
        ExposedLayout &c;
        const ExposedLayout &d;

        static ExposedLayout *sa;
        static const ExposedLayout *sb;
        static ExposedLayout &sc;
        static const ExposedLayout &sd;
    };

    struct ClassMemberPointersUshort
    {
        unsigned short *a;
        const unsigned short *b;
        unsigned short &c;
        const unsigned short &d;

        static unsigned short *sa;
        static const unsigned short *sb;
        static unsigned short &sc;
        static const unsigned short &sd;
    };

    struct ClassMemberPointersBool
    {
        bool *a;
        const bool *b;
        bool &c;
        const bool &d;

        static bool *sa;
        static const bool *sb;
        static bool &sc;
        static const bool &sd;
    };



    // Keep-alive sorcery:

    struct LifetimesA
    {
        int x = 42;

        // Some degenerate cases that have to be ignored in C#, because we don't support the lifetime operations for those types.
        int &foo() MBTEST_LIFETIMEBOUND {return x;}
        void bar(int &ref MBTEST_LIFETIME_CAPTURE_BY(this)) {(void)ref;}
    };

    struct LifetimesB
    {
        LifetimesA a;

        // `--infer-lifetime-iterators` should act on those:
        LifetimesA *begin() {return &a;}
        LifetimesA *end() {return &a;}
        LifetimesA &operator*() {return a;}
    };
    // `--infer-lifetime-iterators` should act on those:
    inline const LifetimesA *begin(const LifetimesB &b) {return &b.a;}
    inline const LifetimesA *end(const LifetimesB &b) {return &b.a;}
    inline const LifetimesA &operator*(const LifetimesB &b) {return b.a;}

    struct LifetimesC
    {
        LifetimesA a;

        // `--infer-lifetime-iterators` should act on those:
        friend const LifetimesA *begin(const LifetimesC &c) {return &c.a;}
        friend const LifetimesA *end(const LifetimesC &c) {return &c.a;}
        friend const LifetimesA &operator*(const LifetimesC &c) {return c.a;}
    };

    struct LifetimesD
    {
        LifetimesA a;

        LifetimesA &get() MBTEST_LIFETIMEBOUND {return a;}

        LifetimesA &return_ref(LifetimesA &ref MBTEST_LIFETIMEBOUND) {return ref;}
        static LifetimesA &return_ref_static(LifetimesA &ref MBTEST_LIFETIMEBOUND) {return ref;}

        void store_ref_in_this(LifetimesA &ref MBTEST_LIFETIME_CAPTURE_BY(this)) {(void)ref;}
        void store_ref_in_param(LifetimesA &ref MBTEST_LIFETIME_CAPTURE_BY(other_ref), LifetimesB &other_ref) {(void)ref; (void)other_ref;}

        void store_this_in_param(LifetimesA &ref) MBTEST_LIFETIME_CAPTURE_BY(ref) {(void)ref;}

        // Store param references in this. The two annotation styles are equivalent for constructors.
        LifetimesD(LifetimesA &ref MBTEST_LIFETIMEBOUND, LifetimesB &other_ref MBTEST_LIFETIME_CAPTURE_BY(this)) {(void)ref; (void)other_ref;}

        // `--infer-lifetime-constructors` should act on this.
        LifetimesD(LifetimesA &ref) {(void)ref;}

        // Store reference to this in param.
        // `--infer-lifetime-constructors` skips this, because we already have custom attributes.
        LifetimesD(LifetimesB &ref) MBTEST_LIFETIME_CAPTURE_BY(ref) {(void)ref;}
    };


    // Implementing `IEnumerable`:

    // Const member functions.
    struct IterableA
    {
        int arr[3] = {1, 2, 3};

        const int *begin() const {return arr;}
        const int *end() const {return arr + 3;}
    };

    // Mutable member functions.
    struct IterableB
    {
        int arr[3] = {1, 2, 3};

        int *begin() {return arr;}
        int *end() {return arr + 3;}
    };

    // Both const and mutable member functions.
    struct IterableC
    {
        int arr[3] = {1, 2, 3};

        int *begin() {return arr;}
        int *end() {return arr + 3;}
        const int *begin() const {return arr;}
        const int *end() const {return arr + 3;}
    };

    // Const free functions.
    struct IterableD
    {
        int arr[3] = {1, 2, 3};

        friend const int *begin(const IterableD &self) {return self.arr;}
        friend const int *end(const IterableD &self) {return self.arr + 3;}
    };

    // Mutable free functions.
    struct IterableE
    {
        int arr[3] = {1, 2, 3};

        friend int *begin(IterableE &self) {return self.arr;}
        friend int *end(IterableE &self) {return self.arr + 3;}
    };

    // Both const and mutable free functions.
    struct IterableF
    {
        int arr[3] = {1, 2, 3};

        friend const int *begin(const IterableF &self) {return self.arr;}
        friend const int *end(const IterableF &self) {return self.arr + 3;}
        friend int *begin(IterableF &self) {return self.arr;}
        friend int *end(IterableF &self) {return self.arr + 3;}
    };

    // Returning mutable class instances.
    struct IterableG
    {
        std::string arr[3] = {"a", "b", "c"};

        std::string *begin() {return arr;}
        std::string *end() {return arr + 3;}
    };

    // Returning const class instances.
    struct IterableH
    {
        std::string arr[3] = {"a", "b", "c"};

        // Not making those functions `const` for a change.
        const std::string *begin() {return arr;}
        const std::string *end() {return arr + 3;}
    };

    // Returning mutable exposed struct instances.
    struct IterableI
    {
        ExposedLayout arr[3];

        ExposedLayout *begin() {return arr;}
        ExposedLayout *end() {return arr + 3;}
    };

    // Returning const exposed struct instances.
    struct IterableJ
    {
        ExposedLayout arr[3];

        // Not making those functions `const` for a change.
        const ExposedLayout *begin() {return arr;}
        const ExposedLayout *end() {return arr + 3;}
    };

    // Vectors of pointers to a class.
    // Currently `IEnumerable` is disabled for those, it needs to be fixed.
    inline std::vector<A *> test_vec_of_mut_ptr_to_class() {return {};}
    inline std::vector<const A *> test_vec_of_const_ptr_to_class() {return {};}
}


// `std::expected`:

// Libstdc++'s `<expected>` header checks `__cpp_concepts` and disables the class if the value is too small.
// This makes their `std::expected` unusable on Clang 18. Works on Clang 20 though.
#if __has_include(<expected>) && __cplusplus > 202002L && (!defined(_GLIBCXX_RELEASE) || __cpp_concepts >= 202002L)
#include <expected>
namespace MR::CSharp
{
    inline std::expected<int, float> default_expected_int;

    inline std::expected<int, float> test_expected_int(std::expected<int, float> a, std::expected<int, float> b = std::expected<int, float>{42}) {(void)a; (void)b; return {};}
    inline std::expected<int, float> &test_expected_int_ref(std::expected<int, float> &a, std::expected<int, float> &b = default_expected_int) {(void)a; (void)b; return default_expected_int;}
    inline const std::expected<int, float> &test_expected_int_cref(const std::expected<int, float> &a, const std::expected<int, float> &b = default_expected_int) {(void)a; (void)b; return default_expected_int;}
    inline std::expected<int, float> *test_expected_int_ptr(std::expected<int, float> *a, std::expected<int, float> *b = nullptr, std::expected<int, float> *c = &default_expected_int) {(void)a; (void)b; (void)c; return &default_expected_int;}
    inline const std::expected<int, float> *test_expected_int_cptr(const std::expected<int, float> *a, const std::expected<int, float> *b = nullptr, const std::expected<int, float> *c = &default_expected_int) {(void)a; (void)b; (void)c; return &default_expected_int;}


    inline std::expected<void, float> default_expected_void;

    inline std::expected<void, float> test_expected_void(std::expected<void, float> a, std::expected<void, float> b = std::expected<void, float>{}) {(void)a; (void)b; return {};}
    inline std::expected<void, float> &test_expected_void_ref(std::expected<void, float> &a, std::expected<void, float> &b = default_expected_void) {(void)a; (void)b; return default_expected_void;}
    inline const std::expected<void, float> &test_expected_void_cref(const std::expected<void, float> &a, const std::expected<void, float> &b = default_expected_void) {(void)a; (void)b; return default_expected_void;}
    inline std::expected<void, float> *test_expected_void_ptr(std::expected<void, float> *a, std::expected<void, float> *b = nullptr, std::expected<void, float> *c = &default_expected_void) {(void)a; (void)b; (void)c; return &default_expected_void;}
    inline const std::expected<void, float> *test_expected_void_cptr(const std::expected<void, float> *a, const std::expected<void, float> *b = nullptr, const std::expected<void, float> *c = &default_expected_void) {(void)a; (void)b; (void)c; return &default_expected_void;}


    inline std::expected<E1, float> default_expected_enum;

    inline std::expected<E1, float> test_expected_enum(std::expected<E1, float> a, std::expected<E1, float> b = std::expected<E1, float>{E1::b}) {(void)a; (void)b; return {};}
    inline std::expected<E1, float> &test_expected_enum_ref(std::expected<E1, float> &a, std::expected<E1, float> &b = default_expected_enum) {(void)a; (void)b; return default_expected_enum;}
    inline const std::expected<E1, float> &test_expected_enum_cref(const std::expected<E1, float> &a, const std::expected<E1, float> &b = default_expected_enum) {(void)a; (void)b; return default_expected_enum;}
    inline std::expected<E1, float> *test_expected_enum_ptr(std::expected<E1, float> *a, std::expected<E1, float> *b = nullptr, std::expected<E1, float> *c = &default_expected_enum) {(void)a; (void)b; (void)c; return &default_expected_enum;}
    inline const std::expected<E1, float> *test_expected_enum_cptr(const std::expected<E1, float> *a, const std::expected<E1, float> *b = nullptr, const std::expected<E1, float> *c = &default_expected_enum) {(void)a; (void)b; (void)c; return &default_expected_enum;}


    inline std::expected<Trivial, float> default_expected_triv;

    inline std::expected<Trivial, float> test_expected_triv(std::expected<Trivial, float> a, std::expected<Trivial, float> b = std::expected<Trivial, float>{Trivial{}}) {(void)a; (void)b; return {};}
    inline std::expected<Trivial, float> &test_expected_triv_ref(std::expected<Trivial, float> &a, std::expected<Trivial, float> &b = default_expected_triv) {(void)a; (void)b; return default_expected_triv;}
    inline const std::expected<Trivial, float> &test_expected_triv_cref(const std::expected<Trivial, float> &a, const std::expected<Trivial, float> &b = default_expected_triv) {(void)a; (void)b; return default_expected_triv;}
    inline std::expected<Trivial, float> *test_expected_triv_ptr(std::expected<Trivial, float> *a, std::expected<Trivial, float> *b = nullptr, std::expected<Trivial, float> *c = &default_expected_triv) {(void)a; (void)b; (void)c; return &default_expected_triv;}
    inline const std::expected<Trivial, float> *test_expected_triv_cptr(const std::expected<Trivial, float> *a, const std::expected<Trivial, float> *b = nullptr, const std::expected<Trivial, float> *c = &default_expected_triv) {(void)a; (void)b; (void)c; return &default_expected_triv;}


    inline std::expected<NonTrivial, float> default_expected_nontriv;

    inline std::expected<NonTrivial, float> test_expected_nontriv(std::expected<NonTrivial, float> a, std::expected<NonTrivial, float> b = std::expected<NonTrivial, float>{NonTrivial{}}) {(void)a; (void)b; return {};}
    inline std::expected<NonTrivial, float> &test_expected_nontriv_ref(std::expected<NonTrivial, float> &a, std::expected<NonTrivial, float> &b = default_expected_nontriv) {(void)a; (void)b; return default_expected_nontriv;}
    inline const std::expected<NonTrivial, float> &test_expected_nontriv_cref(const std::expected<NonTrivial, float> &a, const std::expected<NonTrivial, float> &b = default_expected_nontriv) {(void)a; (void)b; return default_expected_nontriv;}
    inline std::expected<NonTrivial, float> *test_expected_nontriv_ptr(std::expected<NonTrivial, float> *a, std::expected<NonTrivial, float> *b = nullptr, std::expected<NonTrivial, float> *c = &default_expected_nontriv) {(void)a; (void)b; (void)c; return &default_expected_nontriv;}
    inline const std::expected<NonTrivial, float> *test_expected_nontriv_cptr(const std::expected<NonTrivial, float> *a, const std::expected<NonTrivial, float> *b = nullptr, const std::expected<NonTrivial, float> *c = &default_expected_nontriv) {(void)a; (void)b; (void)c; return &default_expected_nontriv;}


    inline std::expected<SA, float> default_expected_shared;

    inline std::expected<SA, float> test_expected_shared(std::expected<SA, float> a, std::expected<SA, float> b = std::expected<SA, float>{SA{}}) {(void)a; (void)b; return {};}
    inline std::expected<SA, float> &test_expected_shared_ref(std::expected<SA, float> &a, std::expected<SA, float> &b = default_expected_shared) {(void)a; (void)b; return default_expected_shared;}
    inline const std::expected<SA, float> &test_expected_shared_cref(const std::expected<SA, float> &a, const std::expected<SA, float> &b = default_expected_shared) {(void)a; (void)b; return default_expected_shared;}
    inline std::expected<SA, float> *test_expected_shared_ptr(std::expected<SA, float> *a, std::expected<SA, float> *b = nullptr, std::expected<SA, float> *c = &default_expected_shared) {(void)a; (void)b; (void)c; return &default_expected_shared;}
    inline const std::expected<SA, float> *test_expected_shared_cptr(const std::expected<SA, float> *a, const std::expected<SA, float> *b = nullptr, const std::expected<SA, float> *c = &default_expected_shared) {(void)a; (void)b; (void)c; return &default_expected_shared;}


    inline std::expected<ExposedLayout, float> default_expected_exposed;

    inline std::expected<ExposedLayout, float> test_expected_exposed(std::expected<ExposedLayout, float> a, std::expected<ExposedLayout, float> b = std::expected<ExposedLayout, float>{ExposedLayout{}}) {(void)a; (void)b; return {};}
    inline std::expected<ExposedLayout, float> &test_expected_exposed_ref(std::expected<ExposedLayout, float> &a, std::expected<ExposedLayout, float> &b = default_expected_exposed) {(void)a; (void)b; return default_expected_exposed;}
    inline const std::expected<ExposedLayout, float> &test_expected_exposed_cref(const std::expected<ExposedLayout, float> &a, const std::expected<ExposedLayout, float> &b = default_expected_exposed) {(void)a; (void)b; return default_expected_exposed;}
    inline std::expected<ExposedLayout, float> *test_expected_exposed_ptr(std::expected<ExposedLayout, float> *a, std::expected<ExposedLayout, float> *b = nullptr, std::expected<ExposedLayout, float> *c = &default_expected_exposed) {(void)a; (void)b; (void)c; return &default_expected_exposed;}
    inline const std::expected<ExposedLayout, float> *test_expected_exposed_cptr(const std::expected<ExposedLayout, float> *a, const std::expected<ExposedLayout, float> *b = nullptr, const std::expected<ExposedLayout, float> *c = &default_expected_exposed) {(void)a; (void)b; (void)c; return &default_expected_exposed;}


    inline std::expected<ExposedLayoutSh, float> default_expected_exposed_shared;

    inline std::expected<ExposedLayoutSh, float> test_expected_exposed_shared(std::expected<ExposedLayoutSh, float> a, std::expected<ExposedLayoutSh, float> b = std::expected<ExposedLayoutSh, float>{ExposedLayoutSh{}}) {(void)a; (void)b; return {};}
    inline std::expected<ExposedLayoutSh, float> &test_expected_exposed_shared_ref(std::expected<ExposedLayoutSh, float> &a, std::expected<ExposedLayoutSh, float> &b = default_expected_exposed_shared) {(void)a; (void)b; return default_expected_exposed_shared;}
    inline const std::expected<ExposedLayoutSh, float> &test_expected_exposed_shared_cref(const std::expected<ExposedLayoutSh, float> &a, const std::expected<ExposedLayoutSh, float> &b = default_expected_exposed_shared) {(void)a; (void)b; return default_expected_exposed_shared;}
    inline std::expected<ExposedLayoutSh, float> *test_expected_exposed_shared_ptr(std::expected<ExposedLayoutSh, float> *a, std::expected<ExposedLayoutSh, float> *b = nullptr, std::expected<ExposedLayoutSh, float> *c = &default_expected_exposed_shared) {(void)a; (void)b; (void)c; return &default_expected_exposed_shared;}
    inline const std::expected<ExposedLayoutSh, float> *test_expected_exposed_shared_cptr(const std::expected<ExposedLayoutSh, float> *a, const std::expected<ExposedLayoutSh, float> *b = nullptr, const std::expected<ExposedLayoutSh, float> *c = &default_expected_exposed_shared) {(void)a; (void)b; (void)c; return &default_expected_exposed_shared;}
}
#endif
