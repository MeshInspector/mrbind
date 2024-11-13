#include <vector>

namespace MR
{
    struct A
    {
        int x;
        float y;
    };
    struct B : A
    {
        int z;
    };

    struct C
    {
        int x;
        C() {}
    };

    struct D
    {};
}
