#pragma once

#include <string_view>


namespace MRBind
{
    // Splits a string into a callback.
    // `func` is `(std::string_view segment) -> bool`. If it returns true, the whole function stops and also returns true.
    template <typename F>
    bool split(std::string_view str, std::string_view sep, F&& func)
    {
        std::size_t index = 0;

        while (true)
        {
            std::size_t newIndex = str.find(sep, index);
            if (func(str.substr(index, newIndex - index)))
                return true;
            if (newIndex == std::string_view::npos)
                break;
            index = newIndex + sep.size();
        }
        return false;
    }
}
