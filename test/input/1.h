#include <functional>

namespace MR
{
    inline void foo(std::less<int>, std::less<>, std::greater<int>) {}
}
