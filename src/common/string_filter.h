#pragma once

#include <compare>
#include <functional>
#include <regex>
#include <set>
#include <string>

namespace mrbind
{
    class StringFilter
    {
        std::set<std::string, std::less<>> exact;

        struct Regex
        {
            std::regex regex;
            std::string value;

            Regex(std::string value) : regex(value.begin(), value.end()), value(std::move(value)) {}

            friend bool operator==(const Regex &a, const Regex &b) {return a.value == b.value;}
            friend auto operator<=>(const Regex &a, const Regex &b) {return a.value <=> b.value;}
        };
        std::set<Regex> regexes;

      public:
        StringFilter() {}

        void Insert(std::string value)
        {
            if (value.size() > 2 && value.starts_with('/') && value.ends_with('/'))
            {
                value.pop_back();
                value.erase(value.begin());
                regexes.insert(std::move(value));
            }
            else
            {
                exact.insert(std::move(value));
            }
        }

        [[nodiscard]] bool Contains(std::string_view value) const
        {
            if (exact.contains(value))
                return true;

            for (const Regex &r : regexes)
            {
                if (std::regex_match(value.begin(), value.end(), r.regex))
                    return true;
            }

            return false;
        }
    };
}
