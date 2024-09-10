#include <iostream>

namespace MR
{
    struct A
    {
        int x = 42;
    };

    inline std::ostream &operator<<(std::ostream &o, const A &a) {return o << a.x << '\n';}
    inline std::istream &operator>>(std::istream &o, A &a) {return o >> a.x;}
}
