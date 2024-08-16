#pragma once

#include <cstddef>
#include <string_view>

namespace MRBind
{
    // A compile-time constant string.
    template <std::size_t N>
    struct ConstString
    {
        char value[N]{};

        consteval ConstString() {}

        consteval ConstString(const char (&new_value)[N])
        {
            // Don't check for the null terminator for faster build times.
            // Also don't use `std::copy_n` for the same reason.

            for (std::size_t i = 0; i < N; i++)
                value[i] = new_value[i];
        }

        // This would be `consteval`, but Clang 18 complains about it when applying it to a return value of a consteval function (a bug?).
        [[nodiscard]] constexpr std::string_view view() const
        {
            return {value, N-1};
        }
    };
}
