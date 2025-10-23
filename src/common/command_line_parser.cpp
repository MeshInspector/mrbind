#include "command_line_parser.h"

#include <cstdlib>
#include <stdexcept>
#include <unordered_set>

namespace mrbind
{
    CommandLineParser::CommandLineParser() {}

    void CommandLineParser::AddFlag(std::string name, Flag flag)
    {
        if (!flags.TryEmplace(std::move(name), std::move(flag)).second)
            throw std::logic_error("Duplicate command line flag registered: `" + name + "`."); // The `name` will still be valid if nothing was inserted.
    }

    void CommandLineParser::Parse(int argc, char **argv) const
    {
        (void)argc;

        if (!*argv)
            return; // No arguments, not even a program name;
        argv++;

        std::unordered_set<const Flag *> once_args;

        while (*argv)
        {
            std::string_view flag = *argv++;

            std::vector<std::string_view> flag_args;

            if (auto sep = flag.find('='); sep != std::string::npos)
            {
                flag_args.push_back(flag.substr(sep + 1));
                flag = flag.substr(0, sep);
            }

            if (flag == "--help")
            {
                if (!flag_args.empty())
                    throw std::runtime_error("Flag `--help` takes no arguments.");

                std::vector<std::string> flags_with_args;
                flags_with_args.reserve(flags.Vec().size());

                std::size_t max_size = 6; // For `--help`.

                for (const auto &key : flags.Vec())
                {
                    const Flag &flag = flags.Map().at(key);

                    std::string &new_str = flags_with_args.emplace_back(key);
                    for (const auto &arg : flag.arg_names)
                    {
                        new_str += " <";
                        new_str += arg;
                        new_str += '>';
                    }

                    if (new_str.size() > max_size)
                        max_size = new_str.size();
                }

                std::puts("Flags:");

                std::printf("  %-*s  - Shows this page.\n", (int)max_size, "--help");
                for (std::size_t i = 0; i < flags.Vec().size(); i++)
                    std::printf("  %-*s  - %s\n", (int)max_size, flags.Vec()[i].c_str(), flags.Map().at(flags.Vec()[i]).desc.c_str());

                std::exit(0);
            }

            auto iter = flags.Map().find(flag);
            if (iter == flags.Map().end())
                throw std::runtime_error("No such flag: `" + std::string(flag) + "`, try `--help`.");

            if (!iter->second.allow_repeat && !once_args.insert(&iter->second).second)
                throw std::runtime_error("Flag `" + std::string(flag) + "` can be used at most once.");

            // If `=` was used, make sure the flag takes exactly one argument.
            if (!flag_args.empty())
            {
                if (iter->second.arg_names.empty())
                    throw std::runtime_error("Flag `" + std::string(flag) + "` takes no arguments.");
                if (iter->second.arg_names.size() > 1)
                    throw std::runtime_error("Flag `" + std::string(flag) + "` takes more than one argument, so `=` can't be used with it.");
            }

            while (flag_args.size() < iter->second.arg_names.size())
            {
                if (!*argv)
                    throw std::runtime_error("Not enough arguments for flag `" + std::string(flag) + "`, it takes " + std::to_string(iter->second.arg_names.size()) + ".");

                flag_args.push_back(*argv++);
            }

            iter->second.func(flag_args);
        }
    }
}
