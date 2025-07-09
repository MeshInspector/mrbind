#pragma once

#include <cstddef>
#include <vector>

namespace MR::TestSizeT
{
    std::size_t foo(std::size_t);
    std::size_t *&foo(std::size_t *&);
    std::vector<std::size_t> foo(std::vector<std::size_t>);

    std::ptrdiff_t foo(std::ptrdiff_t);
    std::ptrdiff_t *&foo(std::ptrdiff_t *&);
    std::vector<std::ptrdiff_t> foo(std::vector<std::ptrdiff_t>);

    template <typename T>
    struct A
    {
        using V = std::vector<T>;
        typename V::value_type foo();
    };

    using A0 = A<std::size_t>;
}
