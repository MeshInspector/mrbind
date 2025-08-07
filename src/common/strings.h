#pragma once

#include <string_view>
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

    // Splits `input` by `sep`. Calls `func` which is `(std::string_view part) -> ??` on every part, including empty parts.
    // The return type of the lambda must be convertible to a `bool`. We stop the iteration if it's truthy and propagate the return value.
    // Otherwise we return the result from the last iteration.
    inline auto Split(std::string_view input, std::string_view sep, auto &&func)
    {
        while (true)
        {
            auto pos = input.find(sep);

            if (pos == std::string_view::npos)
                return func(auto(input));

            if (auto ret = func(input.substr(0, pos)))
                return ret;
            input.remove_prefix(pos + sep.size());
        }
    }

    // Splits `input` at newlines, calls `func` (which is `(std::string &line) -> bool`) on each line,
    //   and then reassembles the modified lines.
    // If `func` returns true, then the line is skipped entirely, and the newline isn't added.
    [[nodiscard]] inline std::string ModifyLines(std::string_view input, auto &&func)
    {
        std::string ret;
        bool first = true;

        (Split)(input, "\n", [&](std::string_view part)
        {
            std::string part_str(part);

            if (func(part_str))
                return false;

            if (first)
                first = false;
            else
                ret += '\n';

            ret += part_str;

            return false;
        });

        return ret;
    }
}
