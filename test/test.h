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
}
