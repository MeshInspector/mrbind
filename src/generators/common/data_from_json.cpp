#include "data_from_json.h"
#include "common/meta.h"

#include <functional>
#include <iostream>
#include <string_view>
#include <unordered_map>

namespace mrbind
{
    namespace
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

            T result = raw_result;
            if (decltype(raw_result)(result) != raw_result) // Check roundtrip conversion.
            {
                *str_end = str;
                return 0;
            }

            *str_end = end;
            return result;
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

            void ExpectEndOfFile()
            {
                SkipWhitespace();
                if (!input.empty())
                    ThrowParseError("Unparsed junk at the end of input.");
            }

            [[nodiscard]] bool TryConsume(char ch)
            {
                if (input.starts_with(ch))
                {
                    input.remove_prefix(1);
                    return true;
                }

                return false;
            }
            void Consume(char ch)
            {
                if (!TryConsume(ch))
                    ThrowParseError(std::string("Expected `") + ch + "`.");
            }


            // Parsing specific types:

            // Strings.
            void Parse(std::string &out)
            {
                const std::string_view input_before_string = input;

                out.clear();

                Consume('"');

                while (true)
                {
                    if (input.empty())
                    {
                        input = input_before_string;
                        ThrowParseError("Unterminated string literal.");
                    }

                    if (TryConsume('"'))
                        break;

                    if (TryConsume('\\'))
                    {
                        if (TryConsume('"')) {out += '"'; continue;}
                        if (TryConsume('\\')) {out += '\\'; continue;}
                        if (TryConsume('/')) {out += '/'; continue;}
                        if (TryConsume('b')) {out += '\b'; continue;}
                        if (TryConsume('f')) {out += '\f'; continue;}
                        if (TryConsume('n')) {out += '\n'; continue;}
                        if (TryConsume('r')) {out += '\r'; continue;}
                        if (TryConsume('t')) {out += '\t'; continue;}

                        if (!TryConsume('u'))
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
                        // else
                        // {
                        //     input = input_at_hex;
                        //     ThrowParseError("Escape sequence is out of range.");
                        // }

                        continue;
                    }

                    out += input.front();
                    input.remove_prefix(1);
                }
            }

            // Numbers.
            template <typename T> requires std::is_arithmetic_v<T>
            void Parse(T &out)
            {
                const std::string_view input_before_number = input;

                std::string chars;

                // Sign.
                if constexpr (std::is_signed_v<T>)
                {
                    if (TryConsume('-'))
                        chars += '-';
                }

                // Integral part.
                if (TryConsume('0'))
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
                    if (TryConsume('.'))
                    {
                        chars += '.';
                        while (!input.empty() && input.front() >= '0' && input.front() <= '9')
                        {
                            chars += input.front();
                            input.remove_prefix(1);
                        }
                    }

                    // Exponent.
                    if (TryConsume('e') || TryConsume('E'))
                    {
                        chars += 'e';

                        if (TryConsume('+'))
                            chars += '+';
                        else if (TryConsume('-'))
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
                out = strto<T>(chars.c_str(), &end, 10);
                if (end != chars.data() + chars.size())
                {
                    input = input_before_number;
                    ThrowParseError("The number failed to parse, could be too large for the target type.");
                }
            }

            // Containers.
            template <typename T> requires std::ranges::forward_range<T>
            void Parse(T &out)
            {
                constexpr bool can_clear = requires{out.clear();};
                if constexpr (can_clear)
                    out.clear(); // Can't clear fixed-size containers.

                constexpr bool is_obj = ContainerIsMapLike<T> && IsKeyValuePair<std::ranges::range_value_t<T>>;

                Consume("[{"[is_obj]);
                const char end_bracket = "]}"[is_obj];

                SkipWhitespace();

                if (TryConsume(end_bracket))
                    return;


                std::size_t i = 0;

                while (true)
                {
                    const std::string_view input_before_elem = input;

                    typename AdjustNewContainerElem<std::ranges::range_value_t<T>>::type new_elem{};

                    if constexpr (is_obj)
                    {
                        Parse(std::get<0>(new_elem));
                        SkipWhitespace();
                        Consume(':');
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
                    else if constexpr (!can_clear)
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

                    if (TryConsume(','))
                    {
                        SkipWhitespace();
                        continue;
                    }

                    if (TryConsume(end_bracket))
                    {
                        if constexpr (!can_clear)
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
            template <typename T> requires(!std::ranges::forward_range<T> && requires{std::tuple_size<T>::value;})
            void Parse(T &out)
            {
                Consume('[');
                SkipWhitespace();

                if constexpr (std::tuple_size_v<T> == 0)
                {
                    Consume(']');
                }
                else
                {
                    std::apply([&](auto &elem0, auto &... elems)
                    {
                        Parse(elem0);
                        SkipWhitespace();

                        ([&]{
                            Consume(',');
                            SkipWhitespace();
                            Parse(elems);
                            SkipWhitespace();
                        }(), ...);
                    }, out);

                    Consume(']');
                }
            }

            // Reflected structs
            template <ReflStruct T>
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

                Consume('{');
                SkipWhitespace();

                while (true)
                {
                    if (TryConsume('}'))
                        break;

                    if (num_parsed > 0)
                    {
                        Consume(',');
                        SkipWhitespace();
                    }

                    const std::string_view input_before_name = input;

                    std::string name;
                    Parse(name);
                    SkipWhitespace();
                    Consume(':');
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
        };

    }

    ParsedFile JsonToParsedFile(std::string input_filename_for_errors, std::string_view input)
    {
        JsonParser parser;
        parser.input_filename_for_errors = input_filename_for_errors;
        parser.input = parser.original_input = input;

        Type x;
        parser.Parse(x);
        std::cout << x.pretty << '\n';
        std::cout << x.canonical << '\n';

        #error TODO: enums (including bit flags)

        return {};
    }
}
