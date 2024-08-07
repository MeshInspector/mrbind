#include <utility>

namespace MR
{
    struct A : std::integral_constant<int, 1> {};
    struct B : std::integral_constant<int, -1> {};
}
