#include <set>
#include <unordered_set>

#include <tl/expected.hpp>

namespace MR
{
    inline std::set<int> foo() {return {1,2,3};}
    inline std::unordered_set<int> bar() {return {1,2,3};}
}
