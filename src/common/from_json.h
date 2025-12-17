#pragma once

#include "common/meta.h"
#include "common/ordered_set_and_map.h"
#include "common/reflection.h"

#include <cstdlib>
#include <functional>
#include <iostream>
#include <string_view>
#include <type_traits>
#include <unordered_map>
#include <variant>

namespace mrbind
{
    namespace detail::JsonParser
    {
        template <typename T>
        [[nodiscard]] auto strto_low(const char *str, char **str_end, int base = 0)
        {
            if constexpr (std::is_integral_v<T>)
            {
                constexpr bool use_long = sizeof(T) <= sizeof(long);
                constexpr bool is_signed = std::is_signed_v<T>;

                if constexpr (use_long && is_signed)
                    return std::strtol(str, str_end, base);
                else if constexpr (use_long && !is_signed)
                    return std::strtoul(str, str_end, base);
                else if constexpr (!use_long && is_signed)
                    return std::strtoll(str, str_end, base);
                else // !use_long && !is_signed
                    return std::strtoull(str, str_end, base);
            }
            else
            {
                if constexpr (sizeof(T) <= sizeof(float))
                    return std::strtof(str, str_end);
                else if constexpr (sizeof(T) <= sizeof(double))
                    return std::strtod(str, str_end);
                else if constexpr (sizeof(T) <= sizeof(long double))
                    return std::strtold(str, str_end);
            }
        }

        template <typename T>
        [[nodiscard]] T strto(const char *str, const char **str_end, int base = 0)
        {
            char *end = const_cast<char *>(str);
            errno = 0; // `strto*` appears to indicate out-of-range errors only by setting `errno`.
            auto raw_result = strto_low<T>(str, &end, base);
            if (end == str || errno != 0)
            {
                *str_end = str;
                return 0;
            }

            T result = T(raw_result);
            if (decltype(raw_result)(result) != raw_result) // Check roundtrip conversion.
            {
                *str_end = str;
                return 0;
            }

            *str_end = end;
            return result;
        }

        template <typename T>
        struct RangeTraits
        {
            static constexpr bool is_range = false;
        };
        template <typename T> requires std::ranges::forward_range<T>
        struct RangeTraits<T>
        {
            static constexpr bool is_range = true;
            static constexpr bool is_fixed_size = false;
            static constexpr bool is_map_like = ContainerIsMapLike<T>;
            using value_type = std::ranges::range_value_t<T>;
        };
        template <typename T, std::size_t N>
        struct RangeTraits<std::array<T, N>>
        {
            static constexpr bool is_range = true;
            static constexpr bool is_fixed_size = true;
            static constexpr bool is_map_like = false;
            using value_type = T;
        };
        template <typename T>
        struct RangeTraits<OrderedSet<T>>
        {
            static constexpr bool is_range = true;
            static constexpr bool is_fixed_size = false;
            static constexpr bool is_map_like = false;
            using value_type = T;
        };
        template <typename T, typename U>
        struct RangeTraits<OrderedMap<T, U>>
        {
            static constexpr bool is_range = true;
            static constexpr bool is_fixed_size = false;
            static constexpr bool is_map_like = true;
            using value_type = std::pair<const T, U>;
        };
    }

    struct JsonParser
    {
        std::string_view input_filename_for_errors;

        std::string_view original_input;
        std::string_view input;

        [[noreturn]] void ThrowParseError(std::string_view message)
        {
            // Find the line and column of the current location, to show a better error message.
            const char *cur = original_input.data();
            int row = 1;
            int col = 1;

            while (cur != input.data())
            {
                if (*cur == '\n')
                {
                    row++;
                    col = 1;
                }
                else
                {
                    col++;
                }

                cur++;
            }

            std::string full_message(input_filename_for_errors);
            full_message += ':';
            full_message += std::to_string(row);
            full_message += ':';
            full_message += std::to_string(col);
            full_message += ": error: ";
            full_message += message;

            throw std::runtime_error(full_message);
        }

        void SkipWhitespace()
        {
            while (!input.empty() && std::string_view(" \t\v\n\r").find(input.front()) != std::string_view::npos)
                input.remove_prefix(1);
        }

        void ExpectEndOfFileMaybeAfterWhitespace()
        {
            SkipWhitespace();
            if (!input.empty())
                ThrowParseError("Unparsed junk at the end of input.");
        }

        [[nodiscard]] bool TryConsume(std::string_view str)
        {
            if (input.starts_with(str))
            {
                input.remove_prefix(str.size());
                return true;
            }

            return false;
        }
        void Consume(std::string_view str)
        {
            if (!TryConsume(str))
            {
                std::string error = "Expected `";
                error += str;
                error += "`.";
                ThrowParseError(error);
            }
        }


        // Parsing specific types:

        // Bools.
        void Parse(bool &out)
        {
            if (TryConsume("true"))
                out = true;
            else if (TryConsume("false"))
                out = false;
            else
                ThrowParseError("Expected `true` or `false`.");
        }

        // Strings.
        void Parse(std::string &out)
        {
            const std::string_view input_before_string = input;

            out.clear();

            Consume("\"");

            while (true)
            {
                if (input.empty())
                {
                    input = input_before_string;
                    ThrowParseError("Unterminated string literal.");
                }

                if (TryConsume("\""))
                    break;

                if (TryConsume("\\"))
                {
                    if (TryConsume("\"")) {out += '"'; continue;}
                    if (TryConsume("\\")) {out += '\\'; continue;}
                    if (TryConsume("/")) {out += '/'; continue;}
                    if (TryConsume("b")) {out += '\b'; continue;}
                    if (TryConsume("f")) {out += '\f'; continue;}
                    if (TryConsume("n")) {out += '\n'; continue;}
                    if (TryConsume("r")) {out += '\r'; continue;}
                    if (TryConsume("t")) {out += '\t'; continue;}

                    if (!TryConsume("u"))
                        ThrowParseError("Invalid escape sequence.");

                    const std::string_view input_at_hex = input;

                    int number = 0;
                    for (int i = 0; i < 4; i++)
                    {
                        if (input.empty())
                            ThrowParseError("Incomplete escape sequence.");

                        char ch = input.front();
                        input.remove_prefix(1);

                        bool is_digit = ch >= '0' && ch <= '9';
                        bool is_hex_lower = !is_digit && ch >= 'a' && ch <= 'f';
                        bool is_hex_upper = !is_digit && !is_hex_lower && ch >= 'A' && ch <= 'F';
                        if (!is_digit && !is_hex_lower && !is_hex_upper)
                            ThrowParseError("Expected hex digit in the escape sequence.");

                        int digit = is_digit ? ch - '0' : (is_hex_lower ? ch - 'a' : ch - 'A') + 10;
                        number = number * 16 + digit;
                    }

                    if (number <= 0x7f)
                    {
                        out += char(number);
                    }
                    else if (number <= 0x7ff)
                    {
                        out += char(0b11000000 | (number >> 6));
                        out += char(0b10000000 | (number & 0b00111111));
                    }
                    else if (number <= 0xffff)
                    {
                        out += char(0b11100000 |  (number >> 12));
                        out += char(0b10000000 | ((number >>  6) & 0b00111111));
                        out += char(0b10000000 | ( number        & 0b00111111));
                    }
                    // 4-byte UTF-8 can't be represented by 4 hex digits.
                    // Conveniently, 4 hex digits fit exactly into 3 UTF-8 bytes,
                    //   so the condition `number <= 0xffff` above is enough.
                    // else if (number <= 0x10ffff)
                    // {
                    //     out += char(0b11110000 |  (number >> 18));
                    //     out += char(0b10000000 | ((number >> 12) & 0b00111111));
                    //     out += char(0b10000000 | ((number >>  6) & 0b00111111));
                    //     out += char(0b10000000 | ( number        & 0b00111111));
                    // }
                    else
                    {
                        input = input_at_hex;
                        ThrowParseError("Escape sequence is out of range.");
                    }

                    continue;
                }

                out += input.front();
                input.remove_prefix(1);
            }
        }

        // Numbers.
        template <typename T> requires(std::is_arithmetic_v<T> && !std::is_same_v<T, bool>)
        void Parse(T &out)
        {
            const std::string_view input_before_number = input;

            std::string chars;

            // Sign.
            if constexpr (std::is_signed_v<T>)
            {
                if (TryConsume("-"))
                    chars += '-';
            }

            // Integral part.
            if (TryConsume("0"))
            {
                chars += '0';
            }
            else if (!input.empty() && input.front() >= '1'/*sic*/ && input.front() <= '9')
            {
                do
                {
                    chars += input.front();
                    input.remove_prefix(1);
                }
                while (!input.empty() && input.front() >= '0' && input.front() <= '9');
            }

            if constexpr (std::is_floating_point_v<T>)
            {
                // Fractional part.
                if (TryConsume("."))
                {
                    chars += '.';
                    while (!input.empty() && input.front() >= '0' && input.front() <= '9')
                    {
                        chars += input.front();
                        input.remove_prefix(1);
                    }
                }

                // Exponent.
                if (TryConsume("e") || TryConsume("E"))
                {
                    chars += 'e';

                    if (TryConsume("+"))
                        chars += '+';
                    else if (TryConsume("-"))
                        chars += '-';

                    while (!input.empty() && input.front() >= '0' && input.front() <= '9')
                    {
                        chars += input.front();
                        input.remove_prefix(1);
                    }
                }
            }

            if (chars.empty())
            {
                if constexpr (std::is_floating_point_v<T>)
                    ThrowParseError("Expected a floating-point number.");
                else if constexpr (std::is_signed_v<T>)
                    ThrowParseError("Expected a signed integer.");
                else
                    ThrowParseError("Expected an unsigned integer.");
            }

            // Abort if the number continues after this point.
            // This is purely for nicer errors.
            if (!input.empty() && ((input.front() >= '0' && input.front() <= '9') || input.front() == '.' || input.front() == '+' || input.front() == '-' || input.front() == 'e' || input.front() == 'E'))
            {
                if constexpr (std::is_floating_point_v<T>)
                    ThrowParseError("Expected the floating-point number to end here.");
                else if constexpr (std::is_signed_v<T>)
                    ThrowParseError("Expected the signed integer to end here.");
                else
                    ThrowParseError("Expected the unsigned integer to end here.");
            }

            const char *end = chars.c_str();
            out = detail::JsonParser::strto<T>(chars.c_str(), &end, 10);
            if (end != chars.data() + chars.size())
            {
                input = input_before_number;
                ThrowParseError("The number failed to parse, could be too large for the target type.");
            }
        }

        // Containers.
        template <typename T> requires detail::JsonParser::RangeTraits<T>::is_range
        void Parse(T &out)
        {
            using Traits = detail::JsonParser::RangeTraits<T>;

            if constexpr (!Traits::is_fixed_size)
                out = T{}; // Can't clear fixed-size containers. No `.clear()` in our `OrderedSet` and `OrderedMap`.

            constexpr bool is_obj = Traits::is_map_like && IsKeyValuePair<typename Traits::value_type>;

            Consume(is_obj ? "{" : "[");
            const std::string_view end_bracket = is_obj ? "}" : "]";

            SkipWhitespace();

            if (TryConsume(end_bracket))
                return;


            std::size_t i = 0;

            while (true)
            {
                const std::string_view input_before_elem = input;

                typename AdjustNewContainerElem<typename Traits::value_type>::type new_elem{};

                if constexpr (is_obj)
                {
                    Parse(std::get<0>(new_elem));
                    SkipWhitespace();
                    Consume(":");
                    SkipWhitespace();
                    Parse(std::get<1>(new_elem));
                }
                else
                {
                    Parse(new_elem);
                }

                if constexpr (requires{out.push_back(std::move(new_elem));})
                {
                    out.push_back(std::move(new_elem));
                }
                else if constexpr (requires{out.insert(std::move(new_elem));})
                {
                    if (!out.insert(std::move(new_elem)).second)
                    {
                        input = input_before_elem;
                        ThrowParseError("Duplicate key.");
                    }
                }
                else if constexpr (requires{out.Insert(std::move(new_elem));}) // Capitalized `Insert()` in our own `OrderedSet` and `OrderedMap`.
                {
                    if (!out.Insert(std::move(new_elem)))
                    {
                        input = input_before_elem;
                        ThrowParseError("Duplicate key.");
                    }
                }
                else if constexpr (Traits::is_fixed_size)
                {
                    if (i >= std::size(out))
                    {
                        input = input_before_elem;
                        ThrowParseError("Too many elements in a fixed-size array, expected exactly " + std::to_string(std::size(out)) + ".");
                    }

                    // A fixed-size array?
                    out[i] = std::move(new_elem);
                }
                else
                {
                    static_assert(false, "Don't know how to insert into this container.");
                }

                SkipWhitespace();

                if (TryConsume(","))
                {
                    SkipWhitespace();
                    continue;
                }

                if (TryConsume(end_bracket))
                {
                    if constexpr (Traits::is_fixed_size)
                    {
                        if (i < std::size(out))
                            ThrowParseError("Too few elements in a fixed-size array, expected exactly " + std::to_string(std::size(out)) + ".");
                    }

                    break;
                }

                i++;
            }
        }

        // Tuple-like types.
        template <typename T> requires(!std::ranges::forward_range<T> && !ReflNeedsAdjust<T> && requires{std::tuple_size<T>::value;})
        void Parse(T &out)
        {
            Consume("[");
            SkipWhitespace();

            if constexpr (std::tuple_size_v<T> == 0)
            {
                Consume("]");
            }
            else
            {
                std::apply([&](auto &elem0, auto &... elems)
                {
                    Parse(elem0);
                    SkipWhitespace();

                    ([&]{
                        Consume(",");
                        SkipWhitespace();
                        Parse(elems);
                        SkipWhitespace();
                    }(), ...);
                }, out);

                Consume("]");
            }
        }

        // Reflected structs.
        template <ReflStruct T> requires(!ReflNeedsAdjust<T>)
        void Parse(T &out)
        {
            static const auto name_to_func = [&]{
                std::unordered_map<std::string, std::function<void(JsonParser &, std::size_t &, std::vector<char> &, T &)>> ret;

                std::size_t i = 0;
                ReflForEachMember(out, [&]<typename U>(const char *name, U &member)
                {
                    bool ok = ret.try_emplace(name, [i = i++, name, offset = (char *)&member - (char *)&out](JsonParser &self, std::size_t &num_parsed, std::vector<char> &flags, T &target)
                    {
                        if (flags[i])
                            self.ThrowParseError(std::string("Duplicate field: ") + name + ".");

                        U &target_member = *(U *)((char *)&target + offset);
                        self.Parse(target_member);

                        flags[i] = true;
                        num_parsed++;
                    }).second;
                    if (!ok)
                        throw std::logic_error("Internal error: Duplicate fields are not allowed in reflected structs.");

                    return false;
                });

                return ret;
            }();

            std::size_t num_parsed = 0;
            std::vector<char> field_flags(name_to_func.size());

            const std::string_view input_before_struct = input;

            Consume("{");
            SkipWhitespace();

            while (true)
            {
                if (TryConsume("}"))
                    break;

                if (num_parsed > 0)
                {
                    Consume(",");
                    SkipWhitespace();
                }

                const std::string_view input_before_name = input;

                std::string name;
                Parse(name);
                SkipWhitespace();
                Consume(":");
                SkipWhitespace();

                auto it = name_to_func.find(name);
                if (it == name_to_func.end())
                {
                    input = input_before_name;
                    ThrowParseError("No such field in this struct.");
                }

                it->second(*this, num_parsed, field_flags, out);
                SkipWhitespace();
            }

            if (num_parsed < name_to_func.size())
            {
                input = input_before_struct;
                std::string error = "Some fields are missing in this struct:";
                std::size_t i = 0;
                bool first = true;
                ReflForEachMember(out, [&](const char *name, auto &)
                {
                    if (!field_flags[i])
                    {
                        if (first)
                            first = false;
                        else
                            error += ',';
                        error += ' ';
                        error += name;
                    }

                    i++;

                    return false;
                });
                error += '.';
                ThrowParseError(error);
            }
        }

        // Reflected enums.
        template <ReflEnum T>
        void Parse(T &out)
        {
            static const auto name_to_value = []{
                std::unordered_map<std::string, T> ret;
                ReflForEachEnumConstant<T>([&](const char *name, T value)
                {
                    if (!ret.try_emplace(name, value).second)
                        throw std::logic_error(std::string("Internal error: Duplicate enum constant name: ") + name);
                    return false;
                });
                return ret;
            }();

            const std::string_view input_before_enum = input;

            if constexpr (IsFlagLike<T>)
            {
                std::vector<std::string> vec;
                Parse(vec);

                out = {};

                for (const std::string &elem_name : vec)
                {
                    auto it = name_to_value.find(elem_name);
                    if (it == name_to_value.end())
                    {
                        input = input_before_enum;
                        throw std::runtime_error("No such constant in the enum.");
                    }
                    out |= it->second;
                }
            }
            else
            {
                std::string str;
                Parse(str);
                auto it = name_to_value.find(str);
                if (it == name_to_value.end())
                {
                    input = input_before_enum;
                    throw std::runtime_error("No such constant in the enum.");
                }
                out = it->second;
            }
        }

        // Optionals.
        template <typename T>
        void Parse(std::optional<T> &out)
        {
            static_assert(!IsStdOptional<T>::value, "Optionals of optionals are not supported.");

            if (TryConsume("null"))
            {
                out.reset();
            }
            else
            {
                out.emplace();
                Parse(*out);
            }
        }

        // Variants.
        template <typename ...P>
        void Parse(std::variant<P...> &out)
        {
            Consume("{");
            SkipWhitespace();
            Consume("\"kind\"");
            SkipWhitespace();
            Consume(":");
            SkipWhitespace();

            const std::string_view input_before_name = input;

            std::string kind;
            Parse(kind);

            const std::unordered_map<std::string, void(*)(JsonParser &, std::variant<P...> &)> name_to_func = {
                {
                    std::string(P::name_in_variant),
                    +[](JsonParser &self, std::variant<P...> &v)
                    {
                        P &elem = v.template emplace<P>();
                        self.Parse(elem);
                    }
                }...
            };

            auto it = name_to_func.find(kind);
            if (it == name_to_func.end())
            {
                input = input_before_name;
                ThrowParseError("No such type in the variant.");
            }

            SkipWhitespace();
            Consume(",");
            SkipWhitespace();
            Consume("\"value\"");
            SkipWhitespace();
            Consume(":");
            SkipWhitespace();

            it->second(*this, out);

            SkipWhitespace();
            Consume("}");
        }

        // Adjusted types.
        template <ReflNeedsAdjust T>
        void Parse(T &out)
        {
            Parse((ReflAdjust)(out));
        }
    };

    template <typename T>
    [[nodiscard]] T LoadFromJson(std::string_view input_filename_for_errors, std::string_view input)
    {
        JsonParser parser;
        parser.input_filename_for_errors = input_filename_for_errors;
        parser.input = parser.original_input = input;

        parser.SkipWhitespace();

        T ret;
        parser.Parse(ret);

        parser.ExpectEndOfFileMaybeAfterWhitespace();

        return ret;
    }
}
