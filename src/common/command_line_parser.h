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

        // You probably shouldn't touch this manually, prefer `AddFlag()`.
        OrderedMap<std::string, Flag> flags;

        // If false, ignore `--help`.
        bool enable_help_flag = true;

        // If true, exit the application after printing the `--help` message.
        bool exit_after_printing_help = true;

        // This is printed before the list of flags in response to `--help`.
        // You can assign something else to this. This should end with a newline.
        std::string help_banner = "Flags:\n";

        // This is printed after the flags.
        std::string help_footer;

        // If set, this is called when receiving an unknown flag, instead of throwing an exception.
        // If this returns true, all remaining false are considered unknown and go straight to this function (until it returns false again, then the flags starting from the next one will continue to be parsed).
        std::function<bool(const char *)> on_unknown_flag = nullptr;


        CommandLineParser();

        void AddFlag(std::string name, Flag flag);

        // You should preprocess your arguments using `mrbind::CommandLineArgsAsUtf8` before passing them here.
        void Parse(int argc, char **argv) const;


        // Static helpers:

        // Sadly `strtoull()` requires `str` to be null-terminated.
        [[nodiscard]] static std::size_t ParseSizeT(const std::string &str);
    };
}
