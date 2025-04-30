#pragma once

#include <array>
#include <cstddef>
#include <string_view>

namespace mrbind
{
    namespace detail::TypeName
    {
        template <typename T>
        consteval std::string_view RawString()
        {
            #ifdef _MSC_VER
            return __FUNCSIG__;
            #else
            return __PRETTY_FUNCTION__;
            #endif
        }

        struct Layout
        {
            std::size_t trim_front;
            std::size_t trim_back;
        };
        template <typename T = int> // To ensure this is evaluated lazily.
        constexpr Layout layout = []{
            std::string_view input = RawString<T>();
            Layout ret;
            ret.trim_front = input.rfind("int");
            ret.trim_back = input.size() - 3 - ret.trim_front;
            return ret;
        }();

        template <typename T>
        constexpr std::size_t type_name_len = RawString<T>().size() - layout<>.trim_front - layout<>.trim_back;
    }

    template <typename T>
    [[nodiscard]] consteval auto TypeNameAsArray() -> std::array<char, detail::TypeName::type_name_len<T>>
    {
        std::array<char, detail::TypeName::type_name_len<T>> ret;
        std::string_view input = detail::TypeName::RawString<T>();
        std::size_t pos = detail::TypeName::layout<>.trim_front;
        for (std::size_t i = 0; i < detail::TypeName::type_name_len<T>; i++, pos++)
            ret[i] = input[pos];
        return ret;
    }

    namespace detail::TypeName
    {
        template <typename T>
        constexpr auto storage_array = TypeNameAsArray<T>();
    }

    // This is always null-terminated.
    template <typename T>
    [[nodiscard]] consteval std::string_view TypeName()
    {
        return {detail::TypeName::storage_array<T>.data(), detail::TypeName::type_name_len<T>};
    }
}