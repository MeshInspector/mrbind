#include "data_to_json.h"

#include <concepts>
#include <string_view>
#include <string>
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
                json.BeginArray();
                for (const auto &elem : value)
                    json.WriteElem(elem);
                json.EndArray();
            }
        };

        template <typename T>
        struct WriteToJsonTraits<std::optional<T>>
        {
            void operator()(JsonWriter &json, const std::optional<T> &value)
            {
                if (value)
                    json.WriteValueLow(*value);
                else
                    json.WriteValueLow(nullptr);
            }
        };

        // Our custom types:

        struct StringOrNull
        {
            std::string_view str;
        };

        template <>
        struct WriteToJsonTraits<StringOrNull>
        {
            void operator()(JsonWriter &json, const StringOrNull &value)
            {
                if (!value.str.empty())
                    json.WriteValueLow(value.str);
                else
                    json.WriteValueLow(nullptr);
            }
        };

        // Parsed data types:

        void WriteNestedEntities(JsonWriter &json, const std::derived_from<EntityContainer> auto &e)
        {
            json.BeginField("nested");
            json.BeginArray();

            for (const auto &elem : e.nested)
            {
                json.BeginElem();
                json.WriteValueLow(elem);
                json.EndElem();
            }

            json.EndArray();
            json.EndField();
        }

        template <>
        struct WriteToJsonTraits<Type>
        {
            void operator()(JsonWriter &json, const Type &value)
            {
                json.BeginObject();
                json.WriteField("pretty", value.pretty);
                json.WriteField("canonical", value.canonical);
                json.EndObject();
            }
        };

        template <>
        struct WriteToJsonTraits<FuncParam>
        {
            void operator()(JsonWriter &json, const FuncParam &value)
            {
                json.BeginObject();
                json.WriteField("name", StringOrNull{value.name});
                json.WriteField("type", value.type);
                json.WriteField("default_argument", StringOrNull{value.default_argument});
                json.EndObject();
            }
        };

        template <>
        struct WriteToJsonTraits<EnumEntity>
        {
            void operator()(JsonWriter &json, const EnumEntity &value)
            {
                json.BeginObject();
                json.WriteField("kind", "enum");
                json.WriteField("name", value.name);
                json.WriteField("full_type", value.full_type);
                json.WriteField("canonical_underlying_type", value.canonical_underlying_type);
                json.WriteField("is_scoped", value.is_scoped);
                json.WriteField("is_signed", value.is_signed);
                json.WriteField("comment", value.comment);

                json.BeginField("elems");
                json.BeginArray();
                for (const EnumElem &elem : value.elems)
                {
                    json.BeginElem();
                    json.BeginObject();

                    json.WriteField("name", elem.name);
                    if (value.is_signed)
                        json.WriteField("value", std::int64_t(elem.raw_value));
                    else
                        json.WriteField("value", std::uint64_t(elem.raw_value));
                    json.WriteField("comment", elem.comment);

                    json.EndObject();
                    json.EndElem();
                }
                json.EndArray();
                json.EndField();

                json.EndObject();
            }
        };

        template <>
        struct WriteToJsonTraits<CopyMoveKind>
        {
            void operator()(JsonWriter &json, const CopyMoveKind &value)
            {
                switch (value)
                {
                  case CopyMoveKind::none:
                    json.WriteValueLow("none");
                    return;
                  case CopyMoveKind::copy:
                    json.WriteValueLow("copy");
                    return;
                  case CopyMoveKind::move:
                    json.WriteValueLow("move");
                    return;
                }

                assert(false && "Unknown enum!");
            }
        };

        template <typename T>
        void WriteFuncInfo(JsonWriter &json, const T &value)
        {
            // Here `ClassConvOp` doesn't need special handling.

            if constexpr (std::derived_from<T, ClassMethod>)
            {
                json.WriteField("name", value.name);
                json.WriteField("simple_name", value.simple_name);
                json.WriteField("full_name", value.simple_name);
            }
            if constexpr (std::derived_from<T, FuncEntity>) // The two happen to match at the moment, but this is a coincidence.
            {
                json.WriteField("name", value.name);
                json.WriteField("simple_name", value.simple_name);
                json.WriteField("qual_name", value.qual_name);
                json.WriteField("full_qual_name", value.full_qual_name);
            }

            if constexpr (std::derived_from<T, ClassCtor>)
            {
                json.WriteField("is_explicit", value.is_explicit);
                json.WriteField("kind", value.kind);
            }
            if constexpr (std::derived_from<T, ClassMethod>)
            {
                json.WriteField("is_static", value.is_static);
                json.WriteField("assignment_kind", value.assignment_kind);
            }

            if constexpr (std::derived_from<T, BasicReturningFunc>)
                json.WriteField("return_type", value.return_type);

            if constexpr (std::derived_from<T, BasicReturningClassFunc>)
                json.WriteField("is_const", value.is_const);

            json.WriteField("comment", value.comment);

            json.WriteField("params", value.params);
        }

        template <>
        struct WriteToJsonTraits<FuncEntity>
        {
            void operator()(JsonWriter &json, const FuncEntity &value)
            {
                json.BeginObject();
                json.WriteField("kind", "function");
                WriteFuncInfo(json, value);
                json.EndObject();
            }
        };

        template <>
        struct WriteToJsonTraits<ClassField>
        {
            void operator()(JsonWriter &json, const ClassField &value)
            {
                json.BeginObject();
                json.WriteField("member_kind", "field");
                json.WriteField("name", value.name);
                json.WriteField("full_name", value.full_name);
                json.WriteField("type", value.type);
                json.WriteField("is_static", value.is_static);
                json.WriteField("comment", value.comment);
                json.EndObject();
            }
        };
        template <>
        struct WriteToJsonTraits<ClassCtor>
        {
            void operator()(JsonWriter &json, const ClassCtor &value)
            {
                json.BeginObject();
                json.WriteField("member_kind", "constructor");
                WriteFuncInfo(json, value);
                json.EndObject();
            }
        };
        template <>
        struct WriteToJsonTraits<ClassMethod>
        {
            void operator()(JsonWriter &json, const ClassMethod &value)
            {
                json.BeginObject();
                json.WriteField("member_kind", "method");
                WriteFuncInfo(json, value);
                json.EndObject();
            }
        };
        template <>
        struct WriteToJsonTraits<ClassConvOp>
        {
            void operator()(JsonWriter &json, const ClassConvOp &value)
            {
                json.BeginObject();
                json.WriteField("member_kind", "conversion_operator");
                WriteFuncInfo(json, value);
                json.EndObject();
            }
        };

        template <>
        struct WriteToJsonTraits<ClassMemberVariant>
        {
            void operator()(JsonWriter &json, const ClassMemberVariant &value)
            {
                std::visit([&](const auto &elem){json.WriteValueLow(elem);}, value);
            }
        };

        template <>
        struct WriteToJsonTraits<ClassBase>
        {
            void operator()(JsonWriter &json, const ClassBase &value)
            {
                json.BeginObject();
                json.WriteField("is_virtual", value.is_virtual);
                json.WriteField("type", value.type);
                json.EndObject();
            }
        };

        template <>
        struct WriteToJsonTraits<ClassKind>
        {
            void operator()(JsonWriter &json, const ClassKind &value)
            {
                switch (value)
                {
                    case ClassKind::struct_: json.WriteValueLow("struct"); return;
                    case ClassKind::class_: json.WriteValueLow("class"); return;
                    case ClassKind::union_: json.WriteValueLow("union"); return;
                  default:
                    assert(false && "Invalid enum.");
                }
            }
        };

        template <>
        struct WriteToJsonTraits<ClassEntity>
        {
            void operator()(JsonWriter &json, const ClassEntity &value)
            {
                json.BeginObject();
                json.WriteField("kind", "class");
                json.WriteField("class_kind", value.kind);
                json.WriteField("name", value.name);
                json.WriteField("full_type", value.full_type);
                json.WriteField("comment", value.comment);
                json.WriteField("bases", value.bases);
                json.WriteField("members", value.members);
                WriteNestedEntities(json, value);
                json.EndObject();
            }
        };

        template <>
        struct WriteToJsonTraits<TypedefEntity>
        {
            void operator()(JsonWriter &json, const TypedefEntity &value)
            {
                json.BeginObject();
                json.WriteField("kind", "typedef");
                json.WriteField("name", value.name);
                json.WriteField("full_name", value.full_name);
                json.WriteField("type", value.type);
                json.WriteField("comment", value.comment);
                json.EndObject();
            }
        };

        template <>
        struct WriteToJsonTraits<NamespaceEntity>
        {
            void operator()(JsonWriter &json, const NamespaceEntity &value)
            {
                json.BeginObject();
                json.WriteField("kind", "namespace");
                json.WriteField("name", StringOrNull{value.name});
                json.WriteField("is_inline", value.is_inline);
                json.WriteField("comment", value.comment);
                WriteNestedEntities(json, value);
                json.EndObject();
            }
        };

        template <>
        struct WriteToJsonTraits<Entity>
        {
            void operator()(JsonWriter &json, const Entity &value)
            {
                std::visit([&](const auto &elem){json.WriteValueLow(elem);}, *value.variant);
            }
        };
    }

    void ParsedFileToJson(const ParsedFile &file, llvm::raw_ostream &out)
    {
        JsonWriter json;
        json.out = &out;

        json.BeginObject();
        json.WriteField("original_file", file.original_file);
        json.WriteField("guessed_impl_file", file.guessed_impl_file);
        json.WriteField("impl_file_preprocessor_directives", file.impl_file_preprocessor_directives);

        json.WriteField("fragment_index", file.fragment_index);
        json.WriteField("num_fragments", file.num_fragments);

        json.BeginField("entities");
        json.BeginArray();
        for (const auto &elem : file.entities.nested)
        {
            json.BeginElem();
            json.WriteValueLow(elem);
            json.EndElem();
        }
        json.EndArray();
        json.EndField();

        json.BeginField("alt_type_spellings");
        json.BeginObject();
        for (const auto &type : file.alt_type_spellings)
            json.WriteField(type.first, type.second);
        json.EndObject();
        json.EndField();

        json.EndObject();

        out << '\n';
    }
}
