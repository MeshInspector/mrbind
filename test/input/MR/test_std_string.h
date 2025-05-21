#pragma once

#include <iostream>
#include <string>

namespace MR::StdString
{
    inline void Set(std::string s)
    {
        std::cout << s << '\n';
    }

    inline void SetWithDefault(std::string s = "42")
    {
        std::cout << s << '\n';
    }

    inline std::string Get()
    {
        return "Hello!";
    }

    inline void WriteToRef(std::string &ref)
    {
        ref = "Hello!";
    }

    inline void WriteToPtr(std::string *ptr)
    {
        *ptr = "Hello!";
    }

    inline void ConstRef(const std::string &s)
    {
        std::cout << s << '\n';
    }
    inline void RvalueRef(std::string &&s)
    {
        std::cout << s << '\n';
    }
    inline void ConstRvalueRef(const std::string &&s)
    {
        std::cout << s << '\n';
    }
}
