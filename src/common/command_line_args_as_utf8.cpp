#include "command_line_args_as_utf8.h"

#include <cstddef>
#include <stdexcept>

#ifdef _WIN32
#define MOMINMAX
// No WIN32_LEAN_AND_MEAN, since that apparently excludes at least `CommandLineToArgvW()`, which we need.
#include <windows.h>
#endif

namespace mrbind
{
    CommandLineArgsAsUtf8::CommandLineArgsAsUtf8(int new_argc, char **new_argv)
    {
        #ifndef _WIN32
        argc = new_argc;
        argv = new_argv;
        #else
        // Those can be in a narrow codepage with some characters lost. We'll get them independently in UTF-16.
        // This function is heavily inspired by: https://github.com/libsdl-org/SDL/blob/main/src/main/windows/SDL_sysmain_runapp.c
        (void)new_argc;
        (void)new_argv;

        struct ArgvwGuard
        {
            LPWSTR *value = nullptr;
            ~ArgvwGuard()
            {
                LocalFree(value); // No-op on null pointers.
            }
        };
        ArgvwGuard argvw_guard{CommandLineToArgvW(GetCommandLineW(), &argc)};
        if (!argvw_guard.value)
            throw std::runtime_error("`CommandLineToArgvW` returned null.");

        argv_storage.resize(std::size_t(argc));
        argv_ptrs_storage.resize(std::size_t(argc) + 1);
        argv = argv_ptrs_storage.data();

        for (std::size_t i = 0; i < std::size_t(argc); i++)
        {
            // Compute the buffer size (including the null-terminator), or zero on failure.
            const int out_size = WideCharToMultiByte(/*target encoding:*/CP_UTF8, /*flags:*/0, /*input:*/argvw_guard.value[i], /*input size:*/-1, /*output:*/nullptr, /*output size:*/0, /*fallback char:*/nullptr, /*output, had unrepresentable symbols:*/nullptr);
            if (!out_size)
                throw std::runtime_error("`WideCharToMultiByte` returned zero during the size calculation.");

            argv_storage[i].resize(std::size_t(out_size) - 1); // The null-terminator is added automatically.
            if (WideCharToMultiByte(/*target encoding:*/CP_UTF8, /*flags:*/0, /*input:*/argvw_guard.value[i], /*input size:*/-1, /*output:*/argv_storage[i].data(), /*output size:*/out_size, /*fallback char:*/nullptr, /*output, had unrepresentable symbols:*/nullptr) == 0)
                throw std::runtime_error("`WideCharToMultiByte` returned zero during the conversion.");

            argv_ptrs_storage[i] = argv_storage[i].data();
        }
        #endif
    }
}
