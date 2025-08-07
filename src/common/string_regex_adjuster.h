#pragma once

#include "common/strings.h"

#include <exception>
#include <regex>
#include <stdexcept>
#include <string_view>
#include <string>
#include <vector>

namespace mrbind
{
    struct StringRegexAdjuster
    {
        struct Rule
        {
            std::regex regex;
            std::string replacement;
            bool global = false; // Replace multiple times?
        };
        std::vector<Rule> rules;

        // Adds a new rule in the format `s/.../.../` or `s/.../.../g`.
        // The separator can be any single character, not necessarily a slash, but can't be escaped in the regex or the replacement string.
        void AddRule(std::string_view input)
        {
            Rule new_rule;

            try
            {
                // Consume `s`.
                if (!input.starts_with('s'))
                    throw std::runtime_error("Expected the rule to start with `s`.");
                input.remove_prefix(1);

                // Consume separator.
                if (input.empty())
                    throw std::runtime_error("Expected a separator after the initial `s`.");
                const char sep = input.front();
                input.remove_prefix(1);

                // Extract the regex part.
                std::string_view regex_view;
                {
                    auto pos = input.find(sep);
                    if (pos == std::string_view::npos)
                        throw std::runtime_error("Expected separator `" + std::string(1, sep) + "` after the regex.");
                    regex_view = std::string_view(input.data(), pos);
                    input.remove_prefix(pos + 1);
                }

                { // Extract the replacement string.
                    auto pos = input.find(sep);
                    if (pos == std::string_view::npos)
                        throw std::runtime_error("Expected separator `" + std::string(1, sep) + "` after the replacement string.");
                    new_rule.replacement = std::string(input.data(), pos);
                    input.remove_prefix(pos + 1);
                }

                // Consume the global flag, if any.
                if (input.starts_with('g'))
                {
                    input.remove_prefix(1);
                    new_rule.global = true;
                }

                // Error on unparsed junk.
                if (!input.empty())
                    throw std::runtime_error("Unparsed junk after the rule: `" + std::string(input) + "`.");

                // Now finally, parse the regex. This throws on failure.
                try
                {
                    new_rule.regex = std::regex(regex_view.begin(), regex_view.end());
                }
                catch (...)
                {
                    std::throw_with_nested(std::runtime_error("While parsing regex `" + std::string(regex_view) + "`:"));

                }
            }
            catch (...)
            {
                std::throw_with_nested(std::runtime_error("While parsing replacement rule `" + std::string(input) + "`:"));
            }

            rules.push_back(std::move(new_rule));
        }

        // Applies this adjuster to a string.
        void Adjust(std::string &str) const
        {
            for (const Rule &rule : rules)
            {
                bool skip = false;
                str = Strings::ModifyLines(str, [&](std::string &part)
                {
                    if (skip)
                        return false;

                    // Make sure we don't destroy the empty lines that were already empty in the input.
                    // This matters e.g. for the trailing empty line.
                    if (part.empty())
                        return false;

                    std::string new_part = std::regex_replace(part, rule.regex, rule.replacement, rule.global ? std::regex_constants::format_default : std::regex_constants::format_first_only);
                    if (!rule.global && new_part != part) // Ugh, a manual string comparison!
                        skip = true; // Already applied once, no more for this rule.

                    if (new_part.empty())
                        return true; // If we got an empty string after replacement, destroy this line entirely.

                    part = std::move(new_part);
                    return false;
                });
            }
        }
    };
}
