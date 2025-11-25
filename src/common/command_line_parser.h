#pragma once

#include "common/ordered_set_and_map.h"

#include <span>
#include <string_view>
#include <string>

namespace mrbind
{
    struct CommandLineParser
    {
        // The elements are always null-terminated.
        using ArgSpan = std::span<const std::string_view>;

        struct Flag
        {
            // Allow using the flag more than once?
            bool allow_repeat = false;

            // The name of each flag argument, if any, for the help page.
            std::vector<std::string> arg_names{}; // `{}` to tell Clang that this is optional.

            // The flag description for `--help`.
            std::string desc;

            // The callback. The size of `args` will always match the size of `arg_names`.
            // Each element in `args` is always null-terminated.
            std::function<void(ArgSpan args)> func;
        };

        OrderedMap<std::string, Flag> flags;

        CommandLineParser();

        void AddFlag(std::string name, Flag flag);

        void Parse(int argc, char **argv) const;
    };
}
