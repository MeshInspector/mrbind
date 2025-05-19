#pragma once

#include <iostream>
#include <string>

namespace MR
{
    inline void SetString(std::string_view s)
    {
        std::cout << s << '\n';
    }

    inline void SetStringWithDefault(std::string_view s = "42")
    {
        std::cout << s << '\n';
    }

    inline std::string_view GetString()
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
}
