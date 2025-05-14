#pragma once

#include <iostream>
#include <span>
#include <string>

namespace MR
{
    inline void SetString(std::string s)
    {
        std::cout << s << '\n';
    }

    inline void SetStringWithDefault(std::string s = "42")
    {
        std::cout << s << '\n';
    }

    inline std::string GetString()
    {
        return "Hello!";
    }

    inline int *foo(int *) {return nullptr;}
}
