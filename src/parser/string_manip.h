#pragma once

#include <string>
#include <string_view>

namespace mrbind
{
    // Wrap the string in double quotes and escape any weird characters..
    [[nodiscard]] std::string EscapeQuoteString(std::string_view str);
}
