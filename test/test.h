#include <string>
#include <vector>
#include <optional>
#include <memory>
#include <map>

#include <tl/expected.hpp>

// Some things we want to eventually include in tests.

namespace MR
{
    struct A {int x = 42;};

    A *f1() {static A a; return &a;}
    A *f2() {return nullptr;}
    A &f3() {return *f1();}

    // Also for shared_ptr.
    std::optional<std::unique_ptr<A>> foo() {return std::make_unique<A>();}
    std::optional<std::unique_ptr<A>> bar() {return {};}

    std::optional<float> x() {return 1.23f;}
    std::optional<float> y() {return {};}

    // Also for shared_ptr.
    tl::expected<std::unique_ptr<A>, std::string> foo2() {return std::make_unique<A>();}
    tl::expected<std::unique_ptr<A>, std::string> bar2() {return tl::unexpected(std::string("Blah!"));}

    tl::expected<void, std::string> foo() {return {};}
    tl::expected<void, std::string> bar() {return tl::unexpected(std::string("Hmm!"));} // Check that this throws!

    // Also for unique_ptr.
    std::shared_ptr<std::string> foo() {return std::make_shared<std::string>("foo");}
    std::shared_ptr<std::string> bar() {return {};}

    std::vector<int> foo() {return std::vector<int>{1,2,3};}
    std::vector<int> bar() {return {};}

    // std::array construction from N-element list (more or less throws)

    // Assignment to pointer properties (including pointer-to-const)

    // ---

    inline std::function<int(int, int)> MakeFunc() {return [](int x, int y){std::cout << x << " + " << y << " -> " << (x + y) << '\n'; return x + y;};}

    // Test both with both `MakeFunc()` and with python lambdas.
    // Everything should work, except python lambdas should be mutually exclusive if called from several threads at a time.
    inline int foo(std::function<int(int, int)> f) {return f(10, 20);}
    inline int bar(std::function<int(int, int)> f) {return std::async(std::launch::async, f, 10, 20).get();}

    // ---

    // Pass `open("file", "c-like-mode")` to those. Test both binary and text files for both functions.

    inline void write(std::ostream &out)
    {
        out << "Hello, world!\n";
    }

    inline void read(std::istream &in)
    {
        std::string line;
        while (std::getline(in, line))
            std::cout << "[" << line << "]\n";
    }

    // ---

    // Ensure that iostream overloads are loaded late, after other ones. Otherwise they will greedily accept any argument type...

    inline void foo(int) {std::cout << "1\n";}
    inline void foo(std::istream &) {std::cout << "2\n";}
    inline void foo(float) {std::cout << "3\n";}

    struct A
    {
        A(int) {std::cout << "1\n";}
        A(std::istream &) {std::cout << "2\n";}
        A(float) {std::cout << "3\n";}

        void foo(int) {std::cout << "1\n";}
        void foo(std::istream &) {std::cout << "2\n";}
        void foo(float) {std::cout << "3\n";}
    };

    // ---

    template <typename T, typename U = int> struct my_basic_string;
    using my_string = my_basic_string<char>;
    using my_wstring = my_basic_string<wchar_t>;
    template <typename T, typename U>
    struct __attribute__((__preferred_name__(my_string)))
    __attribute__((__preferred_name__(my_wstring))) my_basic_string {};
    static_assert((void(std ::type_identity<my_basic_string<char>>{}), true));
    static_assert((void(std ::type_identity<my_basic_string<wchar_t>>{}), true));

    using Y = my_basic_string<wchar_t>;
    using Z = my_wstring;

    void ah(int, std::type_identity_t<int>) {}
    void foo(my_string, my_basic_string<char>) {}

    enum class E {e1, e2};
    template <E> struct X {};
    template <> struct X<E::e2> {};
    using F = X<E::e1>;
    using G = X<E::e2>;

    // ---

    template <typename T> struct Blah
    {
        void a() {}
        struct Bleh {}; // Ensure this is instantiated!
        Bleh foo() {return {};}
    };
    using IntBlah = Blah<int>;

    // ---

    // REPEAT this twice, the second time with classes. This can make a difference.

    // Can be overloaded in python.
    template <typename T> void a(T) {}
    template void a(int);
    template void a(float);

    // CAN'T be overloaded in python, because the argument types map to the same python type.
    template <typename T> void b(T) {}
    template void b(float);
    template void b(double);

    // CAN'T be overloaded in python, because the arguments are literally the same.
    template <typename T> T c() {return {};}
    template float c();
    template double c();

    struct AA
    {
        template <typename T> AA(T) {}

        operator int() {return 42;}
        operator bool() {return false;}

        // Can be overloaded in python.
        template <typename T> void a(T) {}

        // CAN'T be overloaded in python, because the argument types map to the same python type.
        template <typename T> void b(T) {}

        // CAN'T be overloaded in python, because the arguments are literally the same.
        template <typename T> T c() {return {};}
    };
    template void AA::a(int);
    template void AA::a(float);
    template void AA::b(float);
    template void AA::b(double);
    template float AA::c();
    template double AA::c();

    // ---

    inline void foo(int True, int in) {} // Those must be auto-renamed to `true` and `in_`.

    // ---

    #define IGNORE __attribute__((__annotate__("mrbind::ignore")))

    struct IA {};
    struct IGNORE IB {};
    struct IC {};

    inline void i_f1() {}
    IGNORE inline void i_f2() {}
    inline void i_f3() {}

    // ---

    // Reject functions accepting `std::initializer_list<T>`.
    // We could in theory support those, by constructing init_lists at runtime in a non-portable manner.

    void reject_init_list_1(std::initializer_list<int>) {}
    void reject_init_list_2(const std::initializer_list<int> &) {}
    void reject_init_list_3(std::initializer_list<int> &&) {}
}
