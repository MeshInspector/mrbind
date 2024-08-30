#pragma once

#include <algorithm>
#include <array>
#include <cstddef>
#include <string_view>

namespace MRBind
{
    namespace detail::type_name
    {
        template <typename T>
        constexpr std::string_view RawTypeName()
        {
            #ifdef _MSC_VER
            return __FUNCSIG__;
            #else
            return __PRETTY_FUNCTION__;
            #endif
        }

        // This is only valid for `T = int`. Using a template to hopefully prevent redundant calculations.
        template <typename T = int>
        constexpr std::size_t prefix_len = RawTypeName<T>().rfind("int");

        // This is only valid for `T = int`. Using a template to hopefully prevent redundant calculations.
        template <typename T = int>
        constexpr std::size_t suffix_len = RawTypeName<T>().size() - prefix_len<T> - 3;

        // On MSVC, removes `class` and other unnecessary strings from type names.
        // Returns the new length.
        // It's recommended to include the null terminator in `size`, then we also null-terminate the resulting string and include it in the resulting length.
        constexpr std::size_t CleanUpTypeName(char *buffer, std::size_t size)
        {
            #ifndef _MSC_VER
            (void)buffer;
            return size;
            #else
            std::string_view view(buffer, size); // Yes, with the null at the end.

            auto RemoveTypePrefix = [&](std::string_view to_remove)
            {
                std::size_t region_start = 0;
                std::size_t source_pos = std::size_t(-1);
                std::size_t target_pos = 0;
                while (true)
                {
                    source_pos = view.find(to_remove, source_pos + 1);
                    if (source_pos == std::string_view::npos)
                        break;
                    char ch = 0;
                    if (source_pos == 0 || !(ch = view[source_pos - 1], (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') || ch == '_'))
                    {
                        std::size_t n = source_pos - region_start;
                        std::copy_n(view.begin() + region_start, n, buffer + target_pos);
                        target_pos += n;
                        source_pos += to_remove.size();
                        region_start = source_pos;
                    }
                }
                std::size_t n = view.size() - region_start;
                std::copy_n(view.begin() + region_start, n, buffer + target_pos);
                target_pos += n;
                view = std::string_view(view.data(), target_pos);
            };

            RemoveTypePrefix("struct ");
            RemoveTypePrefix("class ");
            RemoveTypePrefix("union ");
            RemoveTypePrefix("enum ");

            { // Condense `> >` into `>>`.
                std::size_t target_pos = 1;
                for (std::size_t i = 1; i + 1 < view.size(); i++)
                {
                    if (buffer[i] == ' ' && buffer[i-1] == '>' && buffer[i+1] == '>')
                        continue;
                    buffer[target_pos++] = buffer[i];
                }
                if (!view.empty())
                    buffer[target_pos++] = buffer[view.size()-1];
                view = std::string_view(view.data(), target_pos);
            }

            return view.size();
            #endif
        }

        template <std::size_t N>
        struct BufferAndLen
        {
            std::array<char, N> buffer;
            std::size_t len = 0;
        };

        template <typename T>
        constexpr auto storage = []{
            #ifndef _MSC_VER
            // On GCC and Clang, return the name as is.
            constexpr auto raw_name = RawTypeName<T>();
            std::array<char, raw_name.size() - prefix_len<> - suffix_len<> + 1> ret{};
            std::copy_n(raw_name.begin() + prefix_len<>, ret.size() - 1, ret.begin());
            return ret;
            #else
            // On MSVC, strip `class ` and some other junk strings.
            constexpr auto trimmed_name = []{
                constexpr auto raw_name = RawTypeName<T>();
                BufferAndLen<raw_name.size() - prefix_len<> - suffix_len<> + 1> ret{};
                std::copy_n(raw_name.begin() + prefix_len<>, ret.buffer.size() - 1, ret.buffer.begin());

                ret.len = CleanUpTypeName(ret.buffer.data(), ret.buffer.size());
                return ret;
            }();

            std::array<char, trimmed_name.len> ret{};
            std::copy_n(trimmed_name.buffer.begin(), trimmed_name.len, ret.begin());
            return ret;
            #endif
        }();
    }

    // Returns the type name at compile-time (using `__PRETTY_FUNCTION__` or `__FUNCSIG__`, depending on the compiler).
    template <typename T>
    [[nodiscard]] constexpr std::string_view TypeName()
    {
        if constexpr (std::is_same_v<T, std::string>)
            return "std::string"; // It tends to vary a lot across compilers due to it being a typedef and having default template arguments.
        else
            return std::string_view(detail::type_name::storage<T>.data(), detail::type_name::storage<T>.size() - 1);
    }

    // ---

    #if 0
    template <typename> struct BakedTypeName; // Codegen defines this when you add `--emit-type-names`.

    // If there's a baked type name for `T`, return that. Otherwise return the normal unbaked name.
    template <typename T>
    [[nodiscard]] constexpr std::string_view BakedTypeNameOrFallback()
    {
        if constexpr (requires{BakedTypeName<T>::value;})
            return BakedTypeName<T>::value;
        else
            return TypeName<T>();
    }
    #endif
}
