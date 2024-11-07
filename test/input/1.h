#include <vector>

namespace MR
{
    struct X {};

    struct A
    {
        using B = X;
        using C __attribute__((__annotate__("mrbind::ignore"))) = X;
    };

    inline void foo(A::C) {}
    inline std::vector<X> bar() {return {};}
}
