#pragma once

#include <algorithm>
#include <cstddef>
#include <string_view>

namespace MRBind
{
    namespace detail::ConstStringDetails
    {
        inline void ArrayMustBeNullTerminated() {}
    }

    // A compile-time constant string.
    template <std::size_t N>
    struct ConstString
    {
        char value[N]{};

        consteval ConstString() {}

        consteval ConstString(const char (&new_value)[N])
        {
            if (new_value[N-1] != '\0')
                detail::ConstStringDetails::ArrayMustBeNullTerminated(); // This causes a compilation error when triggered.

            std::copy_n(new_value, N, value);
        }

        [[nodiscard]] consteval std::string_view view() const
        {
            return {value, N-1};
        }
    };
}
