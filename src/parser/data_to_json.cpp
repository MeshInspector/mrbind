#include "data_to_json.h"

#include "common/meta.h"
#include "common/reflection.h"

#include <concepts>
#include <string_view>
#include <string>
#include <tuple>
#include <type_traits>

namespace mrbind
{
    namespace
    {
        template <typename T>
        struct WriteToJsonTraits
        {
            // void operator()(JsonWriter &json, const T &value)
        };

        struct JsonWriter
        {
            llvm::raw_ostream *out = nullptr;

            int indentation = 0;
            bool indentation_needed = false;

            // Those are initially true, and when writing the first field they are set to false.
            std::vector<char/*bool*/> first_elem_stack;

            void Indent()
            {
                for (int i = 0; i < indentation; i++)
                    *out << "    ";
            }

            void IndentIfNeeded()
            {
                if (indentation_needed)
                {
                    indentation_needed = false;
                    Indent();
                }
            }

            void LineBreak()
            {
                *out << '\n';
                indentation_needed = true;
            }

            template <typename T>
            void WriteValueLow(const T &value)
            {
                IndentIfNeeded();
                WriteToJsonTraits<T>{}(*this, value);
            }

            void BeginListLow(char ch)
            {
                first_elem_stack.push_back(true);
                IndentIfNeeded();
                indentation++;
                *out << ch;
            }

            void EndListLow(char ch)
            {
                if (!first_elem_stack.back())
                    LineBreak();
                first_elem_stack.pop_back();
                indentation--;
                IndentIfNeeded();
                *out << ch;
            }

            void BeginArray() {BeginListLow('[');}
            void EndArray() {EndListLow(']');}

            void BeginObject() {BeginListLow('{');}
            void EndObject() {EndListLow('}');}

            void BeginElem()
            {
                if (!first_elem_stack.back())
                    *out << ',';

                LineBreak();
            }

            void EndElem()
            {
                if (first_elem_stack.back())
                    first_elem_stack.back() = false;
            }

            void WriteElem(const auto &value)
            {
                BeginElem();
                WriteValueLow(value);
                EndElem();
            }

            void BeginField(std::string_view name)
            {
                BeginElem();
                IndentIfNeeded();
                WriteValueLow(name);
                *out << ": ";
            }

            void EndField()
            {
                EndElem();
            }

            void WriteField(std::string_view name, const auto &value)
            {
                BeginField(name);
                WriteValueLow(value);
                EndField();
            }
        };

        template <std::convertible_to<std::string_view> T>
        struct WriteToJsonTraits<T>
        {
            void operator()(JsonWriter &json, const T &value)
            {
                std::string_view view = value;

                *json.out << '"';

                for (std::size_t i = 0; i < view.size(); i++)
                {
                    char ch = view[i];

                    if (ch == '\b' || ch == '\f' || ch == '\r')
                        continue; // Strip weird characters.

                    if (ch == '\n') {*json.out << "\\n"; continue;}
                    if (ch == '\t') {*json.out << "\\t"; continue;}

                    // Escape sequences.
                    if (ch & 0b10000000 || (unsigned char)ch < 32 || (unsigned char)ch >= 128)
                    {
                        std::size_t bytes = 0;
                        if      ((ch & 0b11100000) == 0b11000000) bytes = 2;
                        else if ((ch & 0b11110000) == 0b11100000) bytes = 3;
                        else if ((ch & 0b11111000) == 0b11110000)
                        {
                            assert(false && "UTF-8 character too large, JSON can't encode larger than 0xFFFF.");
                            *json.out << "\\uFFFD"; // Placeholder character.
                            break;
                        }

                        if (bytes == 0)
                        {
                            assert(false && "Invalid UTF-8.");
                            *json.out << "\\uFFFD"; // Placeholder character.
                            break;
                        }

                        char32_t value = (unsigned char)ch & (0xff >> bytes);
                        for (std::size_t j = 1; j < bytes; j++)
                        {
                            if (i + j >= view.size() || (view[i+j] & 0b11000000) != 0b10000000)
                            {
                                assert(false && "Incomplete multibyte UTF-8 character.");
                                *json.out << "\\uFFFD"; // Placeholder character.
                                break;
                            }

                            // Extract bits and append them to the code.
                            value = value << 6 | (view[i+j] & 0b00111111);
                        }

                        i += bytes - 1;

                        char escape[16];
                        std::snprintf(escape, sizeof escape, "\\u%04x", value);
                        *json.out << escape;
                        continue;
                    }

                    if (ch == '"' || ch == '\\')
                        *json.out << '\\';
                    *json.out << ch;
                }

                *json.out << '"';
            }
        };

        template <>
        struct WriteToJsonTraits<bool>
        {
            void operator()(JsonWriter &json, bool value)
            {
                *json.out << (value ? "true" : "false");
            }
        };

        template <>
        struct WriteToJsonTraits<std::nullptr_t>
        {
            void operator()(JsonWriter &json, std::nullptr_t)
            {
                *json.out << "null";
            }
        };

        template <typename T> requires std::is_arithmetic_v<T>
        struct WriteToJsonTraits<T>
        {
            void operator()(JsonWriter &json, T value)
            {
                *json.out << value;
            }
        };

        template <std::ranges::input_range T> requires(!std::convertible_to<T, std::string_view>)
        struct WriteToJsonTraits<T>
        {
            void operator()(JsonWriter &json, const T &value)
            {
                if constexpr (ContainerIsMapLike<T> && IsKeyValuePair<std::ranges::range_value_t<T>>)
                {
                    json.BeginObject();
                    for (const auto &elem : value)
                        json.WriteField(std::get<0>(elem), std::get<1>(elem));
                    json.EndObject();
                }
                else
                {
                    json.BeginArray();
                    for (const auto &elem : value)
                        json.WriteElem(elem);
                    json.EndArray();
                }
            }
        };

        template <typename T>
        struct WriteToJsonTraits<std::optional<T>>
        {
            static_assert(!IsStdOptional<T>::value, "Optionals of optionals are not supported.");

            void operator()(JsonWriter &json, const std::optional<T> &value)
            {
                if (value)
                    json.WriteValueLow(*value);
                else
                    json.WriteValueLow(nullptr);
            }
        };

        template <typename ...P>
        struct WriteToJsonTraits<std::variant<P...>>
        {
            void operator()(JsonWriter &json, const std::variant<P...> &value)
            {
                json.BeginObject();

                json.WriteField("kind", std::visit([]<typename T>(const T &) -> std::string_view {return T::name_in_variant;}, value));
                std::visit([&](const auto &elem){json.WriteField("value", elem);}, value);

                json.EndObject();
            }
        };

        // Reflected structs.
        template <ReflStruct T> requires(!ReflNeedsAdjust<T>)
        struct WriteToJsonTraits<T>
        {
            void operator()(JsonWriter &json, const T &value)
            {
                json.BeginObject();
                ReflForEachMember(value, [&](std::string_view name, const auto &member)
                {
                    json.WriteField(name, member);
                    return false;
                });
                json.EndObject();
            }
        };

        // Adjusted reflected types.
        template <ReflNeedsAdjust T>
        struct WriteToJsonTraits<T>
        {
            void operator()(JsonWriter &json, const T &value)
            {
                WriteToJsonTraits<std::remove_cvref_t<decltype((ReflAdjust)(value))>>{}(json, (ReflAdjust)(value));
            }
        };

        // Reflected enums.
        template <ReflEnum T>
        struct WriteToJsonTraits<T>
        {
            void operator()(JsonWriter &json, const T &value)
            {
                if constexpr (IsFlagLike<T>)
                {
                    json.BeginArray();

                    T copy = value;

                    ReflForEachEnumConstant<T>([&](const char *this_name, T this_value)
                    {
                        if (bool(copy & this_value) && (value & this_value) == this_value)
                        {
                            json.WriteElem(this_name);
                            copy &= ~this_value;
                        }

                        return !bool(copy);
                    });

                    if (bool(copy))
                        throw std::runtime_error("Unknown flag enum value.");

                    json.EndArray();
                }
                else
                {
                    bool ok = ReflForEachEnumConstant<T>([&](const char *this_name, T this_value)
                    {
                        bool found = value == this_value;
                        if (found)
                            json.WriteValueLow(this_name);
                        return found;
                    });
                    if (!ok)
                        throw std::runtime_error("Unknown enum value.");
                }
            }
        };
    }

    void ParsedFileToJson(const ParsedFile &file, llvm::raw_ostream &out)
    {
        JsonWriter json;
        json.out = &out;

        json.WriteValueLow(file);

        out << '\n';
    }
}
