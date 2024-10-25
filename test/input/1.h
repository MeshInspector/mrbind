#include <functional>

#include <tl/expected.hpp>

namespace MR
{
    struct A
    {
        int a;
        std::function<int(int)> b;
        inline static int c;
        inline static std::function<float(float)> d;

        int foo(int x)
        {
            return b(x);
        }
        float bar(float x)
        {
            return d(x);
        }
    };
}
