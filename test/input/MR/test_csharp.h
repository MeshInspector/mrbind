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
    struct SB {private: std::string s;}; // Make this non-trivial for a change.
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


    // Conversion operators. We preserve explicit-ness.
    struct ConvOp
    {
        operator int() {return 42;}
        explicit operator float() {return 43;}
    };

    // Conversion constructors. Right now we only provide conversion operators for implicit ones,
    //   because I have no idea when the explicit ones could be useful.
    struct ConvCtor
    {
        ConvCtor() {}
        ConvCtor(int) {}
        ConvCtor(int, int) {}
        explicit ConvCtor(float) {}
        explicit ConvCtor(float, float) {}
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


    // Exported structs:

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
        int operator*(int) const {return 42;}
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
    inline ExposedLayout *test_exposed_ptr(ExposedLayout *a, ExposedLayout *b = nullptr, ExposedLayout *c = &default_exposed) {(void)a; (void)b; (void)c; return &default_exposed;}
    inline const ExposedLayout *test_exposed_cptr(const ExposedLayout *a, const ExposedLayout *b = nullptr, const ExposedLayout *c = &default_exposed) {(void)a; (void)b; (void)c; return &default_exposed;}


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
}
