#pragma once

#include <functional>

namespace MR::Tags
{
    void foo(std::less<int>);
    void foo(const std::less<> &);
    void foo(std::greater<int> &&);
    void foo(const std::greater<> &&);
    std::less<int> foo();
}
