#include <set>
#include <unordered_set>

#include <tl/expected.hpp>

namespace MR
{
    // I'm foo!
    inline std::set<int> foo() {return {1,2,3};}
    inline std::unordered_set<int> bar() {return {1,2,3};}

    using Set = std::unordered_set<int>;

    struct A
    {
        int foo() {return 42;}
        static int bar() {return 43;}
    };
}
