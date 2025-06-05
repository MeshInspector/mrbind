#pragma once

#include <string>
#include <variant>

namespace MR::StdVariant
{
    std::variant<int, float> foo();
    void bar(std::variant<int, float, float>);
    void baz(std::variant<int, float, std::string>);
}
