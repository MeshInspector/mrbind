#include <iostream>

namespace MR
{
    // foo
    // bar
    inline void foo()
    {
        std::cout << "Hello, world!\n";
    }

    /// foo
    /// barrr
    inline float sqr(float x, float y)
    {
        return x * y;
    }
}
