#pragma once

#include <string>
#include <vector>

namespace mrbind
{
    // Gets the command-line arguments in UTF-8 in a portable manner.
    // Usage: `CommandLineArgsAsUtf8 args(argc, argv);`, then use `args.argc` and `args.argv`.
    // Only does non-trivial things on Windows, where it converts the arguments to UTF-8.
    class CommandLineArgsAsUtf8
    {
      public:
        int argc = 0;
        char **argv = nullptr;

      private:
        #ifdef _WIN32
        std::vector<std::string> argv_storage;
        std::vector<char *> argv_ptrs_storage;
        #endif

      public:
        CommandLineArgsAsUtf8() {}

        CommandLineArgsAsUtf8(int new_argc, char **new_argv);

        // The pointers are stable under moves, so this is fine.
        CommandLineArgsAsUtf8(CommandLineArgsAsUtf8 &&) = default;
        CommandLineArgsAsUtf8 &operator=(CommandLineArgsAsUtf8 &&) = default;
    };
}
