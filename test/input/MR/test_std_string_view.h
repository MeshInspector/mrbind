#pragma once

#include <iostream>
#include <string_view>

namespace MR::StdStringView
{
    inline void Set(std::string_view s)
    {
        std::cout << s << '\n';
    }

    inline void SetWithDefault(std::string_view s = "42")
    {
        std::cout << s << '\n';
    }

    inline std::string_view Get()
    {
        return "Hello!";
    }

    inline void WriteToRef(std::string_view &ref)
    {
        ref = "Hello!";
    }

    inline void WriteToPtr(std::string_view *ptr)
    {
        *ptr = "Hello!";
    }

    inline void ConstRef(const std::string_view &s)
    {
        std::cout << s << '\n';
    }
    inline void RvalueRef(std::string_view &&s)
    {
        std::cout << s << '\n';
    }
    inline void ConstRvalueRef(const std::string_view &&s)
    {
        std::cout << s << '\n';
    }
}
