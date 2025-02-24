#include <concepts>

namespace MR
{
    template <std::floating_point T>
    struct A {};
    template <typename T>
    struct B
    {
        void foo(A<T> *) requires std::floating_point<T> {}
    };

    using B0 = B<int>;
}
