#include "string_manip.h"

namespace mrbind
{
    std::string EscapeQuoteString(std::string_view str)
    {
        std::string ret;
        ret.reserve(str.size() + 2);
        ret += '"';
        for (char ch : str)
        {
            if (ch == '\r')
                continue; // Strip CR completely, only keep LF.

            if (ch == '\n')
            {
                ret += "\\n";
                continue;
            }

            if (ch == '"' || ch == '\\')
                ret += '\\';
            ret += ch;
        }
        ret += '"';
        return ret;
    }
}
