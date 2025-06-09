#pragma once

#include <string>

namespace mrbind::Strings
{
    // Replaces `a` with `b` in `source`.
    [[nodiscard]] inline std::string Replace(std::string_view source, std::string_view a, std::string_view b)
    {
        std::string ret;

        std::size_t cur_pos;
        std::size_t last_pos = 0;

        while ((cur_pos = source.find(a, last_pos)) != std::string::npos)
        {
            ret.append(source, last_pos, cur_pos - last_pos);
            ret += b;
            last_pos = cur_pos + a.size();
        }

        ret += source.substr(last_pos);
        return ret;
    }
}
