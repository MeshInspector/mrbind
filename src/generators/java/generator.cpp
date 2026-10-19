#include "generators/java/generator.h"

#include "common/hash.h"
#include "common/strings.h"

#include <cppdecl/declarations/parse.h>
#include <cppdecl/declarations/to_string.h>
#include <cppdecl/misc/string_helpers.h>

#include <algorithm>
#include <cassert>
#include <cctype>
#include <cstdint>
#include <cstdio>
#include <stdexcept>
#include <variant>

namespace mrbind::Java
{
    namespace
    {
        [[nodiscard]] std::string Indent(std::string_view str, int levels)
        {
            if (levels <= 0 || str.empty())
                return std::string(str);
            std::string pad(std::size_t(levels) * 4, ' ');
            std::string ret;
            std::size_t pos = 0;
            while (pos < str.size())
            {
                std::size_t end = str.find('\n', pos);
                if (end == std::string_view::npos)
                    end = str.size();
                if (end > pos)
                {
                    ret += pad;
                    ret += str.substr(pos, end - pos);
                }
                ret += '\n';
                pos = end + 1;
            }
            return ret;
        }

        [[nodiscard]] std::string EscapeJavaString(std::string_view str)
        {
            std::string ret;
            for (char ch : str)
            {
                if (ch == '\\' || ch == '"')
                    ret += '\\';
                if (ch == '\n')
                    ret += "\\n";
                else if (ch == '\r')
                    ret += "\\r";
                else
                    ret += ch;
            }
            return ret;
        }

        [[nodiscard]] std::string JoinNameParts(const std::vector<std::string> &parts, std::string_view sep)
        {
            std::string ret;
            for (const auto &part : parts)
            {
                if (!ret.empty())
                    ret += sep;
                ret += part;
            }
            return ret;
        }

        [[nodiscard]] std::string PartToString(const cppdecl::UnqualifiedName &part)
        {
            if (auto str = std::get_if<std::string>(&part.var))
                return *str;
            return cppdecl::ToCode(part, {});
        }

        // Returns true if the type is `const char *`.
        [[nodiscard]] bool IsConstCharPtr(const cppdecl::Type &type)
        {
            return type.modifiers.size() == 1 && type.Is<cppdecl::Pointer>() && type.IsConst(1) && type.simple_type.name.AsSingleWord() == "char" && type.simple_type.flags == cppdecl::SimpleTypeFlags{};
        }

        [[nodiscard]] std::string ToLower(std::string str)
        {
            for (char &ch : str)
                ch = char(std::tolower((unsigned char)ch));
            return str;
        }

        // The boxed type of a Java primitive, or the type itself.
        [[nodiscard]] std::string Boxed(const std::string &prim)
        {
            if (prim == "int") return "java.lang.Integer";
            if (prim == "long") return "java.lang.Long";
            if (prim == "short") return "java.lang.Short";
            if (prim == "byte") return "java.lang.Byte";
            if (prim == "float") return "java.lang.Float";
            if (prim == "double") return "java.lang.Double";
            if (prim == "boolean") return "java.lang.Boolean";
            if (prim == "char") return "java.lang.Character";
            return prim;
        }

        // Returns the Java identifier of an output file path component: `1` -> `_1`.
        [[nodiscard]] std::string PathIdent(std::string_view str)
        {
            return JavaIdent(std::string(str));
        }

        constexpr std::string_view kMemorySegment = "java.lang.foreign.MemorySegment";
        constexpr std::string_view kArena = "java.lang.foreign.Arena";
        constexpr std::string_view kValueLayout = "java.lang.foreign.ValueLayout";
        constexpr std::string_view kMemoryLayout = "java.lang.foreign.MemoryLayout";
    }

    std::string JavaIdent(std::string str)
    {
        static const std::set<std::string_view> keywords = {
            "abstract", "assert", "boolean", "break", "byte", "case", "catch", "char", "class", "const", "continue", "default", "do", "double",
            "else", "enum", "extends", "final", "finally", "float", "for", "goto", "if", "implements", "import", "instanceof", "int", "interface",
            "long", "native", "new", "package", "private", "protected", "public", "return", "short", "static", "strictfp", "super", "switch",
            "synchronized", "this", "throw", "throws", "transient", "try", "void", "volatile", "while", "true", "false", "null", "_",
            "var", "record", "yield", "sealed", "permits",
        };

        for (char &ch : str)
        {
            bool ok = (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') || ch == '_';
            if (!ok)
                ch = '_';
        }
        if (str.empty())
            str = "_unnamed";
        if (str.front() >= '0' && str.front() <= '9')
            str = '_' + str;
        if (keywords.contains(str))
            return str + '_';
        return str;
    }

    std::string JavaMethodName(std::string_view str)
    {
        std::string ret(str);
        if (!ret.empty() && ret.front() >= 'A' && ret.front() <= 'Z')
            ret.front() = char(ret.front() - 'A' + 'a');
        return JavaIdent(ret);
    }

    std::string Capitalize(std::string str)
    {
        if (!str.empty() && str.front() >= 'a' && str.front() <= 'z')
            str.front() = char(str.front() - 'a' + 'A');
        return str;
    }

    const cppdecl::Type &Generator::ParseTypeOrThrow(const std::string &str)
    {
        auto [iter, is_new] = cached_parsed_types.try_emplace(str);
        if (!is_new)
            return iter->second;

        std::string_view view = str;
        auto ret = cppdecl::ParseType(view);
        if (auto error = std::get_if<cppdecl::ParseError>(&ret))
            throw std::runtime_error("Unable to parse type `" + str + "`, error at offset " + std::to_string(view.data() - str.data()) + ": " + error->message);
        if (!view.empty())
            throw std::runtime_error("Unable to parse type `" + str + "`, junk starting at offset " + std::to_string(view.data() - str.data()) + ".");
        iter->second = std::move(std::get<cppdecl::Type>(ret));
        return iter->second;
    }

    Generator::Module &Generator::GetModuleForNamespace(std::vector<std::string> ns_parts)
    {
        // Like in the C# and Rust generators, `--replace-namespace` goes first, then `--force-namespace` applies to what ended up in the global namespace.
        for (const auto &[from, to] : replaced_namespaces)
        {
            if (ns_parts.size() >= from.size() && std::equal(from.begin(), from.end(), ns_parts.begin()))
            {
                ns_parts.erase(ns_parts.begin(), ns_parts.begin() + std::ptrdiff_t(from.size()));
                ns_parts.insert(ns_parts.begin(), to.begin(), to.end());
            }
        }
        if (ns_parts.empty())
            ns_parts = forced_namespace;

        Module *m = &root;
        for (const auto &part : ns_parts)
        {
            std::string name = JavaIdent(ToLower(part));
            if (name == "ffi")
                name += '_';
            auto [iter, is_new] = m->children.try_emplace(name);
            if (is_new)
            {
                iter->second.package = m->package + "." + name;
                iter->second.dir = m->dir + "/" + name;
                iter->second.used_names.insert("Functions"); // The holder of the free functions.
                for (const auto &segment : base_package_segments)
                    iter->second.used_names.insert(segment);
            }
            m = &iter->second;
        }
        return *m;
    }

    Generator::FileClass &Generator::GetFileClass(const CInterop::OutputFile &file)
    {
        auto [iter, is_new] = file_classes.try_emplace(file.relative_name);
        FileClass &ret = iter->second;
        if (is_new)
        {
            ret.relative_name = file.relative_name;
            ret.group = file.group;
            std::string_view str = file.relative_name;
            while (!str.empty())
            {
                std::size_t sep = str.find('/');
                std::string_view part = str.substr(0, sep);
                if (!part.empty())
                    ret.idents.push_back(PathIdent(part));
                str = sep == std::string_view::npos ? std::string_view{} : str.substr(sep + 1);
            }
            if (ret.idents.empty())
                throw std::runtime_error("Bad relative file name in the input JSON: `" + file.relative_name + "`.");
            ret.idents.back() = ShortenClassName(ret.idents.back());
            ret.java_path = base_package + ".ffi." + JoinNameParts(ret.idents, ".");
        }
        else if (ret.group != file.group)
        {
            throw std::runtime_error("The file `" + file.relative_name + "` is mentioned with two different groups: `" + ret.group + "` and `" + file.group + "`.");
        }
        return ret;
    }

    std::string Generator::HandleHolder(const FileClass &file, std::size_t index)
    {
        return file.java_path + ".H" + std::to_string(index / handles_per_chunk);
    }

    std::string Generator::ShortenClassName(std::string name) const
    {
        // A Java class is a file, so the name counts towards the path length limit of Windows. Same scheme as the C generator uses for the headers.
        if (max_class_name_length != 0 && name.size() > max_class_name_length)
        {
            auto hash = Hash(std::string_view(name).substr(max_class_name_length));
            name.resize(max_class_name_length);
            char buffer[32];
            std::snprintf(buffer, sizeof buffer, "__%x", (unsigned int)hash);
            name += buffer;
        }
        return name;
    }

    std::string Generator::UniqueName(std::set<std::string> &used, std::string name)
    {
        if (used.insert(name).second)
            return name;
        for (int i = 2;; i++)
        {
            std::string candidate = name + '_' + std::to_string(i);
            if (used.insert(candidate).second)
                return candidate;
        }
    }

    std::string Generator::MakeDocComment(const CInterop::Comment &comment, int indent, const std::string &extra_line) const
    {
        std::vector<std::string> lines;
        std::string_view str = comment.c_style;
        std::size_t pos = 0;
        while (pos < str.size())
        {
            std::size_t end = str.find('\n', pos);
            if (end == std::string_view::npos)
                end = str.size();
            std::string_view line = str.substr(pos, end - pos);
            pos = end + 1;

            while (!line.empty() && (line.front() == ' ' || line.front() == '\t'))
                line.remove_prefix(1);
            for (std::string_view prefix : {"///", "//!", "//", "/**", "/*!", "/*", "*/"})
            {
                if (line.starts_with(prefix))
                {
                    line.remove_prefix(prefix.size());
                    break;
                }
            }
            if (line.starts_with("*") && !line.starts_with("*/"))
                line.remove_prefix(1);
            if (line.ends_with("*/"))
                line.remove_suffix(2);
            while (!line.empty() && (line.back() == ' ' || line.back() == '\t' || line.back() == '\r'))
                line.remove_suffix(1);
            if (line.starts_with(' '))
                line.remove_prefix(1);
            lines.push_back(Strings::Replace(line, "*/", "*&#47;"));
        }
        if (!extra_line.empty())
        {
            if (!lines.empty())
                lines.push_back("");
            lines.push_back(extra_line);
        }
        if (lines.empty())
            return {};

        std::string ret = "/**\n";
        for (const auto &line : lines)
        {
            ret += " *";
            if (!line.empty())
            {
                ret += ' ';
                ret += line;
            }
            ret += '\n';
        }
        ret += " */\n";
        return Indent(ret, indent);
    }

    std::optional<Generator::JavaType> Generator::CTypeToJava(const std::string &str)
    {
        return CTypeToJava(ParseTypeOrThrow(str), 0);
    }

    std::optional<Generator::JavaType> Generator::CTypeToJava(const cppdecl::Type &type, std::size_t i)
    {
        auto Prim = [](std::string_view layout, std::string_view java, std::string_view size, bool platform_dependent = false)
        {
            JavaType ret;
            ret.layout = std::string(kValueLayout) + "." + std::string(layout);
            ret.java = java;
            ret.size_expr = size;
            ret.platform_dependent = platform_dependent;
            return ret;
        };

        if (i == type.modifiers.size())
        {
            std::string_view word = type.simple_type.name.AsSingleWord();
            const bool is_unsigned = bool(type.simple_type.flags & cppdecl::SimpleTypeFlags::unsigned_);
            const bool is_signed = bool(type.simple_type.flags & cppdecl::SimpleTypeFlags::explicitly_signed);

            if (!word.empty())
            {
                if (word == "void")
                {
                    JavaType ret;
                    ret.java = "void";
                    return ret;
                }
                if (word == "bool") return Prim("JAVA_BOOLEAN", "boolean", "1");
                if (word == "char") return Prim("JAVA_BYTE", "byte", "1");
                if (word == "short") return Prim("JAVA_SHORT", "short", "2");
                if (word == "int") return Prim("JAVA_INT", "int", "4");
                if (word == "long")
                {
                    JavaType ret;
                    ret.layout = RuntimeClass("Ffi") + ".C_LONG";
                    ret.java = "long";
                    ret.size_expr = "8";
                    ret.platform_dependent = true;
                    ret.is_c_long = true;
                    return ret;
                }
                if (word == "long long") return Prim("JAVA_LONG", "long", "8");
                if (is_unsigned || is_signed) return {};
                if (word == "float") return Prim("JAVA_FLOAT", "float", "4");
                if (word == "double") return Prim("JAVA_DOUBLE", "double", "8");
                if (word == "size_t" || word == "ptrdiff_t" || word == "intptr_t" || word == "uintptr_t") return Prim("JAVA_LONG", "long", "8", true);
                if (word == "int8_t" || word == "uint8_t") return Prim("JAVA_BYTE", "byte", "1");
                if (word == "int16_t" || word == "uint16_t") return Prim("JAVA_SHORT", "short", "2");
                if (word == "int32_t" || word == "uint32_t") return Prim("JAVA_INT", "int", "4");
                if (word == "int64_t" || word == "uint64_t") return Prim("JAVA_LONG", "long", "8");
                if (word == "long double" || word == "wchar_t" || word == "char8_t" || word == "char16_t" || word == "char32_t") return {};
            }

            std::string name = cppdecl::ToCode(type.simple_type.name, {});
            if (name == c_desc.helpers_prefix + "PassBy")
                return Prim("JAVA_INT", "int", "4");
            // The fixed-size typedefs of `--canonicalize-to-fixed-size-typedefs`, e.g. `MR_C_int64_t`. Those are always the fixed size, even when spelled via `size_t`.
            if (name.starts_with(c_desc.helpers_prefix))
            {
                std::string_view rest = std::string_view(name).substr(c_desc.helpers_prefix.size());
                if (rest == "int8_t" || rest == "uint8_t") return Prim("JAVA_BYTE", "byte", "1");
                if (rest == "int16_t" || rest == "uint16_t") return Prim("JAVA_SHORT", "short", "2");
                if (rest == "int32_t" || rest == "uint32_t") return Prim("JAVA_INT", "int", "4");
                if (rest == "int64_t" || rest == "uint64_t") return Prim("JAVA_LONG", "long", "8");
            }

            const TypeInfo *info = nullptr;
            if (auto iter = types_by_c_name.find(name); iter != types_by_c_name.end())
                info = iter->second;
            else if (auto iter2 = types_by_cpp_name.find(name); iter2 != types_by_cpp_name.end())
                info = &iter2->second;
            if (!info)
                return {};

            if (info->IsEnum())
            {
                JavaType ret;
                ret.layout = info->enum_layout;
                ret.java = info->enum_java_type;
                ret.size_expr = info->enum_size;
                ret.type_info = info;
                return ret;
            }
            if (info->IsExposedStruct())
            {
                JavaType ret;
                ret.layout = info->java_path + ".LAYOUT";
                ret.java = std::string(kMemorySegment);
                ret.size_expr = info->java_path + ".LAYOUT.byteSize()";
                ret.platform_dependent = platform_dependent_structs.contains(info->cpp_name);
                ret.type_info = info;
                return ret;
            }
            return {}; // Opaque classes can't be used by value.
        }

        if (type.Is<cppdecl::Pointer>(i))
        {
            JavaType ret;
            ret.layout = std::string(kValueLayout) + ".ADDRESS";
            ret.java = std::string(kMemorySegment);
            ret.size_expr = "8";
            ret.is_pointer = true;
            ret.platform_dependent = true;
            if (type.Is<cppdecl::Function>(i + 1))
                return ret;
            // The pointee must be something we know, or `void`.
            if (type.simple_type.name.AsSingleWord() != "void")
            {
                std::size_t j = i + 1;
                while (j < type.modifiers.size() && (type.Is<cppdecl::Pointer>(j) || type.Is<cppdecl::Array>(j)))
                    j++;
                if (j < type.modifiers.size())
                    return {};
                auto pointee = CTypeToJava(type, j);
                if (!pointee)
                {
                    // Pointers to opaque classes.
                    std::string name = cppdecl::ToCode(type.simple_type.name, {});
                    if (!types_by_c_name.contains(name) && !types_by_cpp_name.contains(name))
                        return {};
                }
            }
            return ret;
        }

        if (auto arr = type.As<cppdecl::Array>(i))
        {
            if (arr->size.tokens.size() != 1)
                return {};
            auto lit = std::get_if<cppdecl::NumericLiteral>(&arr->size.tokens.front());
            if (!lit)
                return {};
            auto size = lit->ToInteger<std::uint64_t>();
            if (!size)
                return {};
            auto inner = CTypeToJava(type, i + 1);
            if (!inner || inner->java == "void")
                return {};
            JavaType ret;
            ret.layout = std::string(kMemoryLayout) + ".sequenceLayout(" + std::to_string(*size) + ", " + inner->layout + ")";
            ret.java = std::string(kMemorySegment);
            ret.size_expr = "(" + inner->size_expr + " * " + std::to_string(*size) + ")";
            ret.platform_dependent = inner->platform_dependent;
            ret.array_dims = inner->array_dims;
            ret.array_dims.insert(ret.array_dims.begin(), *size);
            ret.array_elem = inner->array_dims.empty() ? std::make_shared<JavaType>(*inner) : inner->array_elem;
            return ret;
        }

        return {};
    }

    void Generator::CollectTypes()
    {
        root.package = base_package;
        std::string base_dir = base_package;
        std::replace(base_dir.begin(), base_dir.end(), '.', '/');
        root.dir = base_dir;
        root.used_names.insert("Functions");
        for (std::string_view name : {"Ffi", "Native", "CppObject", "CppStruct", "CppException", "UnexpectedResultException"})
            root.used_names.insert(std::string(name));
        // A class named like a segment of the base package would shadow the package in the qualified names inside of it.
        Strings::Split(base_package, ".", [&](std::string_view segment)
        {
            base_package_segments.push_back(std::string(segment));
            root.used_names.insert(std::string(segment));
            return false;
        });

        // First pass: register all names, so that nested classes can find their enclosing classes.
        for (const auto &cpp_name : c_desc.cpp_types.Vec())
        {
            const CInterop::TypeDesc &desc = c_desc.cpp_types.Map().at(cpp_name);
            TypeInfo info;
            info.cpp_name = cpp_name;
            if (auto class_desc = std::get_if<CInterop::TypeKinds::Class>(&desc.var))
            {
                info.class_desc = class_desc;
                info.c_name = class_desc->c_name;
            }
            else if (auto enum_desc = std::get_if<CInterop::TypeKinds::Enum>(&desc.var))
            {
                info.enum_desc = enum_desc;
                info.c_name = enum_desc->c_name;
            }
            else
            {
                continue;
            }
            info.traits = desc.traits ? &*desc.traits : nullptr;
            info.has_destroy = info.class_desc && info.class_desc->kind != CInterop::ClassKind::exposed_struct && info.class_desc->kind != CInterop::ClassKind::ref_only
                && info.traits && info.traits->destructible != CInterop::SpecialMemberKind::disabled;
            info.copyable = info.class_desc && info.traits && info.traits->copy_constructible != CInterop::SpecialMemberKind::disabled;
            types_by_cpp_name.try_emplace(cpp_name, std::move(info));
        }

        for (auto &[cpp_name, info] : types_by_cpp_name)
        {
            types_by_c_name[info.c_name] = &info;

            const cppdecl::Type &type = ParseTypeOrThrow(cpp_name);
            const auto &parts = type.simple_type.name.parts;

            bool use_c_name = !type.IsOnlyQualifiedName() || parts.empty();
            for (const auto &part : parts)
            {
                if (part.template_args || !std::holds_alternative<std::string>(part.var))
                    use_c_name = true;
            }
            if (!use_c_name && (PartToString(parts.front()) == "std" || PartToString(parts.front()) == "tl"))
                use_c_name = true;

            if (use_c_name)
            {
                // Template instantiations of parsed classes go to the package of their namespace, named after the C name minus the namespace.
                // Everything else (`std::...` and such) goes to the base package, named after the C name minus the helpers prefix.
                std::vector<std::string> ns_parts;
                if (type.IsOnlyQualifiedName() && !parts.empty() && std::holds_alternative<std::string>(parts.front().var) && PartToString(parts.front()) != "std" && PartToString(parts.front()) != "tl")
                {
                    for (std::size_t i = 0; i + 1 < parts.size() && !parts[i].template_args && std::holds_alternative<std::string>(parts[i].var); i++)
                    {
                        std::string prefix = JoinNameParts(ns_parts, "::") + (ns_parts.empty() ? "" : "::") + PartToString(parts[i]);
                        if (types_by_cpp_name.contains(prefix))
                            break;
                        ns_parts.push_back(PartToString(parts[i]));
                    }
                }

                std::string ident = info.c_name;
                std::string ns_prefix = JoinNameParts(ns_parts, "_") + "_";
                if (!ns_parts.empty() && ident.starts_with(ns_prefix))
                    ident.erase(0, ns_prefix.size());
                else if (ident.starts_with(c_desc.helpers_prefix))
                    ident.erase(0, c_desc.helpers_prefix.size());
                else
                    ns_parts.clear();
                info.module = &GetModuleForNamespace(std::move(ns_parts));
                info.java_unqual = UniqueName(info.module->used_names, ShortenClassName(JavaIdent(ident)));
            }
            else
            {
                std::vector<std::string> ns_parts;
                std::string unqual;
                std::string prefix;
                for (std::size_t i = 0; i + 1 < parts.size(); i++)
                {
                    if (!prefix.empty())
                        prefix += "::";
                    prefix += PartToString(parts[i]);
                    if (types_by_cpp_name.contains(prefix))
                    {
                        // Nested in a class. Merge the remaining parts.
                        std::vector<std::string> rest;
                        for (std::size_t j = i; j < parts.size(); j++)
                            rest.push_back(PartToString(parts[j]));
                        unqual = JoinNameParts(rest, "_");
                        break;
                    }
                    ns_parts.push_back(PartToString(parts[i]));
                }
                if (unqual.empty())
                    unqual = PartToString(parts.back());
                info.module = &GetModuleForNamespace(std::move(ns_parts));
                info.java_unqual = UniqueName(info.module->used_names, ShortenClassName(JavaIdent(unqual)));
            }
            info.java_path = info.module->package + "." + info.java_unqual;
            info.file = &GetFileClass(info.class_desc ? info.class_desc->output_file : info.enum_desc->output_file);

            if (info.IsEnum())
            {
                auto underlying = CTypeToJava(info.enum_desc->underlying_type);
                if (!underlying || underlying->java == "void" || underlying->is_pointer)
                    throw std::runtime_error("Unknown underlying type `" + info.enum_desc->underlying_type + "` of enum `" + cpp_name + "`.");
                info.enum_layout = underlying->layout;
                info.enum_java_type = underlying->java;
                info.enum_size = underlying->size_expr;
                info.enum_is_c_long = underlying->is_c_long;
            }
        }

        // Exposed structs whose layout depends on the platform: those with pointers or `size_t`-like fields, directly or in nested structs.
        // The sizes in the description JSON are for the platform the C bindings were generated on, so we can't check them for those.
        for (bool changed = true; changed;)
        {
            changed = false;
            for (const auto &[cpp_name, info] : types_by_cpp_name)
            {
                if (!info.IsExposedStruct() || platform_dependent_structs.contains(cpp_name))
                    continue;
                for (const auto &field : info.class_desc->fields)
                {
                    if (field.is_static)
                        continue;
                    auto type = CTypeToJava(field.type);
                    if (type && type->platform_dependent)
                    {
                        platform_dependent_structs.insert(cpp_name);
                        changed = true;
                        break;
                    }
                }
            }
        }
    }

    std::string Generator::HandleDecl(const CInterop::BasicFuncLike &func, bool &ok)
    {
        ok = true;
        std::vector<std::string> layouts;
        for (const auto &param : func.params)
        {
            for (const auto &c_param : param.c_params)
            {
                auto type = CTypeToJava(c_param.c_type);
                if (!type || type->java == "void")
                {
                    ok = false;
                    return {};
                }
                layouts.push_back(type->layout);
            }
        }
        auto ret_type = CTypeToJava(func.ret.c_type);
        if (!ret_type)
        {
            ok = false;
            return {};
        }

        std::string desc;
        if (ret_type->java == "void")
            desc = "java.lang.foreign.FunctionDescriptor.ofVoid(" + JoinNameParts(layouts, ", ") + ")";
        else
            desc = "java.lang.foreign.FunctionDescriptor.of(" + ret_type->layout + (layouts.empty() ? "" : ", " + JoinNameParts(layouts, ", ")) + ")";
        return "static final java.lang.invoke.MethodHandle " + JavaIdent(func.c_name) + " = " + RuntimeClass("Ffi") + ".downcall(\"\", \"" + func.c_name + "\", " + desc + ");\n";
    }

    void Generator::EmitHandles()
    {
        auto AddHandle = [&](FileClass &file, const std::string &c_name, std::string decl)
        {
            // The group is only known here.
            auto lib_iter = imported_lib_names.find(file.group);
            if (lib_iter == imported_lib_names.end())
                throw std::runtime_error("No library name specified for the file group `" + file.group + "`, pass `--imported-split-lib-name " + file.group + " <name>`.");
            decl = Strings::Replace(decl, ".downcall(\"\", ", ".downcall(\"" + EscapeJavaString(file.group) + "\", ");
            handle_paths[c_name] = HandleHolder(file, file.handles.size()) + "." + JavaIdent(c_name);
            file.handles.push_back(std::move(decl));
        };

        auto AddFunc = [&](FileClass &file, const CInterop::BasicFuncLike &func)
        {
            num_funcs_total++;
            bool ok = false;
            std::string decl = HandleDecl(func, ok);
            if (!ok)
            {
                num_funcs_skipped++;
                skipped_funcs.push_back(func.c_name);
                return;
            }
            AddHandle(file, func.c_name, std::move(decl));
        };

        for (const auto &func : c_desc.functions)
            AddFunc(GetFileClass(func.output_file), func);

        for (auto &[cpp_name, info] : types_by_cpp_name)
        {
            if (!info.class_desc)
                continue;
            const auto &cl = *info.class_desc;
            for (const auto &method : cl.methods)
                AddFunc(*info.file, method);
            for (const auto &field : cl.fields)
            {
                const_cast<CInterop::ClassField &>(field).ForEachAccessor([&](const CInterop::ClassField::Accessor &accessor)
                {
                    AddFunc(*info.file, accessor);
                });
            }
            if (info.has_destroy)
            {
                std::string c_name = info.c_name + "_Destroy";
                AddHandle(*info.file, c_name, "static final java.lang.invoke.MethodHandle " + JavaIdent(c_name) + " = " + RuntimeClass("Ffi") + ".downcall(\"\", \"" + c_name + "\", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));\n");
                info.destroy_handle = handle_paths.at(c_name);
            }

            // The casts, which the description doesn't list. The names mirror what the C generator emits.
            auto AddSimple = [&](const std::string &c_name, std::size_t num_ptr_args, bool returns_ptr)
            {
                std::string desc = returns_ptr ? "java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS" : "java.lang.foreign.FunctionDescriptor.ofVoid(";
                for (std::size_t i = 0; i < num_ptr_args; i++)
                    desc += (returns_ptr || i > 0 ? ", " : "") + std::string("java.lang.foreign.ValueLayout.ADDRESS");
                desc += ")";
                AddHandle(*info.file, c_name, "static final java.lang.invoke.MethodHandle " + JavaIdent(c_name) + " = " + RuntimeClass("Ffi") + ".downcall(\"\", \"" + c_name + "\", " + desc + ");\n");
            };
            ForEachCastBase(info, [&](const TypeInfo &base, CInterop::InheritanceInfo::Kind kind)
            {
                AddSimple(info.c_name + "_MutableUpcastTo_" + base.c_name, 1, true);
                if (kind == CInterop::InheritanceInfo::Kind::non_virt)
                    AddSimple(info.c_name + "_MutableStaticDowncastFrom_" + base.c_name, 1, true);
                if (base.class_desc->is_polymorphic)
                    AddSimple(info.c_name + "_MutableDynamicDowncastFrom_" + base.c_name, 1, true);
            });
            if (cl.callable_info && info.has_destroy)
            {
                AddSimple(info.c_name + "_ConstructEx", 4, true);
                AddSimple(info.c_name + "_AssignEx", 5, false);
            }
        }
    }

    void Generator::ForEachCastBase(const TypeInfo &info, const std::function<void(const TypeInfo &base, CInterop::InheritanceInfo::Kind kind)> &func) const
    {
        // This mirrors what the C generator emits: casts to all the bases up to the first ambiguous one,
        //   static downcasts from the non-virtual bases, dynamic downcasts from the polymorphic bases.
        const auto &inh = info.class_desc->inheritance_info;
        for (const std::string &base_cpp : inh.bases_indirect.Vec())
        {
            const auto kind = inh.bases_indirect.Map().at(base_cpp);
            if (kind == CInterop::InheritanceInfo::Kind::ambiguous)
                break;
            auto iter = types_by_cpp_name.find(base_cpp);
            if (iter == types_by_cpp_name.end() || !iter->second.class_desc)
                continue;
            func(iter->second, kind);
        }
    }

    void Generator::EmitCasts(const TypeInfo &info, std::string &members, std::set<std::string> &used_keys)
    {
        const std::string F = RuntimeClass("Ffi");
        const std::string MS(kMemorySegment);

        // A non-owning wrapper around a pointer returned by a cast.
        auto WrapRef = [&](const TypeInfo &t, const std::string &owner)
        {
            if (t.IsExposedStruct())
                return "new " + t.java_path + "(__ret.reinterpret(" + t.java_path + ".LAYOUT.byteSize()), " + owner + ")";
            return "new " + t.java_path + "(__ret, " + (t.has_destroy ? "false, " : "") + owner + ")";
        };
        auto UniqueMethod = [&](std::string name, const std::string &sig)
        {
            std::string base = name;
            for (int i = 2; !used_keys.insert(name + "(" + sig + ")").second; i++)
                name = base + "_" + std::to_string(i);
            return name;
        };
        auto Method = [&](const std::string &doc, const std::string &head, const std::string &c_name, const std::string &arg, const std::string &result, const std::string &fence)
        {
            members += "/** " + doc + "\n *\n * Calls `" + c_name + "()`. */\n";
            members += head + "\n{\n    try\n    {\n";
            members += "        " + MS + " __ret = (" + MS + ")" + handle_paths.at(c_name) + ".invokeExact(" + arg + ");\n";
            members += "        return " + result + ";\n";
            members += "    }\n    catch (java.lang.Throwable __e)\n    {\n        throw " + F + ".rethrow(__e);\n    }\n";
            members += "    finally\n    {\n        java.lang.ref.Reference.reachabilityFence(" + fence + ");\n    }\n}\n\n";
        };

        ForEachCastBase(info, [&](const TypeInfo &base, CInterop::InheritanceInfo::Kind kind)
        {
            const std::string suffix = Capitalize(base.java_unqual);
            std::string name = UniqueMethod("upcastTo" + suffix, "");
            Method("Upcasts to the base class `" + base.cpp_name + "`. The result refers to this object.",
                "public " + base.java_path + " " + name + "()", info.c_name + "_MutableUpcastTo_" + base.c_name, "rawPointer()", WrapRef(base, "this"), "this");
            if (kind == CInterop::InheritanceInfo::Kind::non_virt)
            {
                name = UniqueMethod("staticDowncastFrom" + suffix, base.java_path);
                Method("Static downcast from the base class `" + base.cpp_name + "`. Undefined behavior if the object isn't actually a `" + info.java_unqual + "`. The result refers to `object`.",
                    "public static " + info.java_path + " " + name + "(" + base.java_path + " object)", info.c_name + "_MutableStaticDowncastFrom_" + base.c_name, F + ".ptrNonNull(object, \"object\")", WrapRef(info, "object"), "object");
            }
            if (base.class_desc->is_polymorphic)
            {
                name = UniqueMethod("dynamicDowncastFrom" + suffix, base.java_path);
                Method("Dynamic downcast from the base class `" + base.cpp_name + "`. Returns null if the object isn't actually a `" + info.java_unqual + "`. The result refers to `object`.",
                    "public static " + info.java_path + " " + name + "(" + base.java_path + " object)", info.c_name + "_MutableDynamicDowncastFrom_" + base.c_name, F + ".ptrNonNull(object, \"object\")", "__ret.address() == 0 ? null : " + WrapRef(info, "object"), "object");
            }
        });
    }

    void Generator::EmitStdFunction(const TypeInfo &info, std::string &members, std::set<std::string> &used_keys)
    {
        const auto &sf = *info.class_desc->callable_info;
        const std::string F = RuntimeClass("Ffi");
        const std::string MS(kMemorySegment);
        const std::string ctor_c_name = info.c_name + "_ConstructEx";
        const std::string assign_c_name = info.c_name + "_AssignEx";
        if (!handle_paths.contains(ctor_c_name) || !handle_paths.contains(assign_c_name))
            return;

        // The C callback: `R (*)(args..., [out params], void *_userdata, void **_cleanup_value)`.
        const cppdecl::Type &type = ParseTypeOrThrow(sf.stateful_func_c_type);
        const cppdecl::Function *fn = type.As<cppdecl::Function>(1);
        if (!fn || fn->params.size() < 2)
            return;
        cppdecl::Type ret_c = type;
        ret_c.modifiers.erase(ret_c.modifiers.begin(), ret_c.modifiers.begin() + 2);
        auto ret_type = CTypeToJava(ret_c);
        if (!ret_type || ret_type->is_c_long)
            return;

        struct Arg
        {
            std::string name;
            JavaType c_type;
            std::string fn_type; // The parameter type of the Java callable, empty for the parameters it doesn't see.
            std::string convert; // An expression in terms of `name`.
        };
        std::vector<Arg> args;
        std::string ret_fn_type = ret_type->java;
        std::string ret_convert; // Statements, `__ret` holds the result of the Java callable.
        std::string default_ret; // What the trampoline returns if the callable throws.
        bool returns_class = false;
        const std::string pass_by = c_desc.helpers_prefix + "PassBy";

        auto DefaultOf = [&](const std::string &java_type) -> std::string
        {
            if (java_type == "void") return "";
            if (java_type == "boolean") return "false";
            if (java_type == "float") return "0f";
            if (java_type == "double") return "0.0";
            if (java_type == MS) return MS + ".NULL";
            return "0";
        };

        for (std::size_t i = 0; i + 2 < fn->params.size(); i++)
        {
            const auto &param = fn->params[i];
            const std::string name = param.name.AsSingleWord().empty() ? "_" + std::to_string(i + 1) : std::string(param.name.AsSingleWord());
            auto c_type = CTypeToJava(param.type);
            if (!c_type || c_type->java == "void" || c_type->is_c_long)
                return;

            if (name.starts_with("_return"))
            {
                // The output parameters of the return value. We only understand a class returned by value.
                if (name != "_return_pass_by" || i != 0 || param.type.modifiers.size() != 1 || !param.type.Is<cppdecl::Pointer>() || cppdecl::ToCode(param.type.simple_type.name, {}) != pass_by)
                    return;
                if (ret_c.modifiers.size() != 1 || !ret_c.Is<cppdecl::Pointer>() || ret_c.IsConst(1))
                    return;
                auto iter = types_by_c_name.find(cppdecl::ToCode(ret_c.simple_type.name, {}));
                if (iter == types_by_c_name.end() || !iter->second->has_destroy)
                    return;
                returns_class = true;
                ret_fn_type = iter->second->java_path;
                ret_convert = name + ".reinterpret(4).set(java.lang.foreign.ValueLayout.JAVA_INT, 0, " + F + ".PASS_BY_MOVE_AND_DESTROY);\nreturn java.util.Objects.requireNonNull(__ret, \"The callback returned null.\").release();\n";
                // On failure the C bindings default-construct the result.
                default_ret = MS + ".NULL";
                args.push_back({name, *c_type, "", ""});
                continue;
            }

            Arg arg{name, *c_type, c_type->java, name};
            if (param.type.modifiers.empty())
            {
                if (c_type->type_info && c_type->type_info->IsEnum())
                {
                    arg.fn_type = c_type->type_info->java_path;
                    arg.convert = c_type->type_info->java_path + ".of(" + name + ")";
                }
                else if (c_type->type_info && c_type->type_info->IsExposedStruct())
                {
                    // The segment only lives for the duration of the call, so copy it.
                    arg.fn_type = c_type->type_info->java_path;
                    arg.convert = "new " + c_type->type_info->java_path + "(" + F + ".allocStruct(" + c_type->type_info->java_path + ".LAYOUT).copyFrom(" + name + "), null)";
                }
            }
            else if (param.type.modifiers.size() == 1 && param.type.Is<cppdecl::Pointer>())
            {
                auto iter = types_by_c_name.find(cppdecl::ToCode(param.type.simple_type.name, {}));
                if (iter != types_by_c_name.end() && iter->second->class_desc)
                {
                    const TypeInfo &t = *iter->second;
                    arg.fn_type = t.java_path;
                    if (t.IsExposedStruct())
                        arg.convert = name + ".address() == 0 ? null : new " + t.java_path + "(" + name + ".reinterpret(" + t.java_path + ".LAYOUT.byteSize()), null)";
                    else
                        arg.convert = name + ".address() == 0 ? null : new " + t.java_path + "(" + name + ", " + (t.has_destroy ? "false, " : "") + "null)";
                }
            }
            args.push_back(std::move(arg));
        }

        if (!returns_class)
        {
            default_ret = DefaultOf(ret_type->java);
            if (ret_type->java == "void")
                ret_convert = "";
            else if (ret_c.modifiers.empty() && ret_type->type_info && ret_type->type_info->IsEnum())
            {
                ret_fn_type = ret_type->type_info->java_path;
                ret_convert = "return java.util.Objects.requireNonNull(__ret, \"The callback returned null.\").value;\n";
            }
            else if (ret_c.modifiers.empty() && ret_type->type_info && ret_type->type_info->IsExposedStruct())
            {
                ret_fn_type = ret_type->type_info->java_path;
                ret_convert = "return " + F + ".ptrNonNull(__ret, \"the callback result\");\n";
            }
            else
                ret_convert = "return __ret;\n";
        }

        // The callable interface, the trampoline, and the construction.
        std::string fn_params, call_args, c_params, layouts;
        for (const Arg &arg : args)
        {
            c_params += arg.c_type.java + " " + arg.name + ", ";
            layouts += arg.c_type.layout + ", ";
            if (arg.fn_type.empty())
                continue;
            fn_params += (fn_params.empty() ? "" : ", ") + arg.fn_type + " " + arg.name;
            call_args += (call_args.empty() ? "" : ", ") + arg.convert;
        }
        const std::string desc = ret_type->java == "void"
            ? "java.lang.foreign.FunctionDescriptor.ofVoid(" + layouts + "java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS)"
            : "java.lang.foreign.FunctionDescriptor.of(" + ret_type->layout + ", " + layouts + "java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS)";

        members += "/** A Java callable that an instance can hold, see `of()`. */\n";
        members += "@java.lang.FunctionalInterface\npublic interface Fn\n{\n    " + ret_fn_type + " call(" + fn_params + ");\n}\n\n";
        members += "private static final " + MS + " CALL_STUB = " + F + ".upcall(java.lang.invoke.MethodHandles.lookup(), " + info.java_unqual + ".class, \"__call\", " + desc + ");\n\n";
        members += "private static " + ret_type->java + " __call(" + c_params + MS + " _userdata, " + MS + " _cleanup_value)\n{\n";
        members += "    Fn func = (Fn)" + F + ".callbackState(_userdata);\n";
        members += "    try\n    {\n";
        if (ret_fn_type == "void")
            members += "        func.call(" + call_args + ");\n";
        else
            members += "        " + ret_fn_type + " __ret = func.call(" + call_args + ");\n";
        members += Indent(ret_convert, 2);
        members += "    }\n    catch (java.lang.Throwable __e)\n    {\n        " + F + ".callbackFailed(__e);\n";
        if (!default_ret.empty())
            members += "        return " + default_ret + ";\n";
        members += "    }\n}\n\n";

        auto UniqueMethod = [&](std::string name, const std::string &sig)
        {
            std::string base = name;
            for (int i = 2; !used_keys.insert(name + "(" + sig + ")").second; i++)
                name = base + "_" + std::to_string(i);
            return name;
        };
        const std::string fn_type = info.java_path + ".Fn";
        const std::string callbacks = "CALL_STUB, " + F + ".newCallbackState(java.util.Objects.requireNonNull(func, \"func\")), " + MS + ".NULL, " + F + ".CALLBACK_STATE_STUB";
        std::string name = UniqueMethod("of", fn_type);
        members += "/** Constructs an instance holding a Java callable. The copies of the instance share it. An exception thrown by the callable is rethrown by the wrapper that called into C.\n *\n * Calls `" + ctor_c_name + "()`. */\n";
        members += "public static " + info.java_path + " " + name + "(Fn func)\n{\n    try\n    {\n";
        members += "        " + MS + " __ret = (" + MS + ")" + handle_paths.at(ctor_c_name) + ".invokeExact(" + callbacks + ");\n";
        members += "        " + F + ".checkException();\n        return new " + info.java_path + "(__ret, true, null);\n";
        members += "    }\n    catch (java.lang.Throwable __e)\n    {\n        throw " + F + ".rethrow(__e);\n    }\n}\n\n";
        name = UniqueMethod("assignFn", fn_type);
        members += "/** Replaces the stored callable with a Java one.\n *\n * Calls `" + assign_c_name + "()`. */\n";
        members += "public void " + name + "(Fn func)\n{\n    try\n    {\n";
        members += "        " + handle_paths.at(assign_c_name) + ".invokeExact(rawPointer(), " + callbacks + ");\n";
        members += "        " + F + ".checkException();\n";
        members += "    }\n    catch (java.lang.Throwable __e)\n    {\n        throw " + F + ".rethrow(__e);\n    }\n    finally\n    {\n        java.lang.ref.Reference.reachabilityFence(this);\n    }\n}\n\n";
    }

    void Generator::EmitRuntime()
    {
        const std::string pkg_line = "package " + base_package + ";\n\n";
        const std::string &hp = c_desc.helpers_prefix;

        // Native.
        output_files[root.dir + "/Native.java"] = pkg_line + R"(/** Implemented by the wrappers of native objects. */
public interface Native
{
    /** The address of the native object. For opaque classes it's a zero-length segment, for exposed structs it covers the struct. */
    java.lang.foreign.MemorySegment rawPointer();
}
)";

        // CppException.
        output_files[root.dir + "/CppException.java"] = pkg_line + R"(/** A C++ exception thrown by the C bindings. */
public class CppException extends java.lang.RuntimeException
{
    private static final long serialVersionUID = 1;

    public CppException(java.lang.String message) {super(message);}
}
)";

        output_files[root.dir + "/UnexpectedResultException.java"] = pkg_line + R"(/** Thrown by the wrappers of C++ functions returning `expected<T, E>` when the result holds an error. The message is the error converted to a string. */
public class UnexpectedResultException extends java.lang.RuntimeException
{
    private static final long serialVersionUID = 1;

    public UnexpectedResultException(java.lang.String message) {super(message);}
}
)";

        // CppObject.
        output_files[root.dir + "/CppObject.java"] = pkg_line + R"(/**
 * The base class of the wrappers of the opaque C++ classes.
 *
 * An instance either owns its C++ object (then the object is destroyed when the wrapper is garbage-collected or closed),
 * or is a reference to an object owned by something else. References returned by methods keep their owner alive.
 */
public abstract class CppObject implements Native, java.lang.AutoCloseable
{
    // Runs the destructor from the cleaner. Must not reference the wrapper, or it would never be collected.
    private static final class State implements java.lang.Runnable
    {
        final java.lang.foreign.MemorySegment ptr;
        final java.util.function.Consumer<java.lang.foreign.MemorySegment> destroy;
        volatile boolean owned = true;

        State(java.lang.foreign.MemorySegment ptr, java.util.function.Consumer<java.lang.foreign.MemorySegment> destroy)
        {
            this.ptr = ptr;
            this.destroy = destroy;
        }

        @java.lang.Override public void run()
        {
            if (owned)
            {
                owned = false;
                destroy.accept(ptr);
            }
        }
    }

    private final java.lang.foreign.MemorySegment ptr;
    private final State state; // Null if not owned.
    private final java.lang.ref.Cleaner.Cleanable cleanable;
    @java.lang.SuppressWarnings("unused") private final java.lang.Object owner; // Only here to keep the owner of a reference alive.
    private boolean closed;

    /**
     * Wraps a pointer from the C bindings. If `destroy` is not null, the object is owned and `destroy` is called on it when the wrapper dies.
     * `owner` is kept alive as long as this wrapper is.
     */
    @java.lang.SuppressWarnings("this-escape")
    protected CppObject(java.lang.foreign.MemorySegment ptr, java.util.function.Consumer<java.lang.foreign.MemorySegment> destroy, java.lang.Object owner)
    {
        if (ptr.address() == 0)
            throw new java.lang.NullPointerException("The C bindings returned a null pointer.");
        this.ptr = ptr;
        this.owner = owner;
        if (destroy != null)
        {
            state = new State(ptr, destroy);
            cleanable = Ffi.CLEANER.register(this, state);
        }
        else
        {
            state = null;
            cleanable = null;
        }
    }

    @java.lang.Override public final java.lang.foreign.MemorySegment rawPointer()
    {
        if (closed)
            throw new java.lang.IllegalStateException("This object was closed or moved from.");
        return ptr;
    }

    /** Does this wrapper own its C++ object? */
    public final boolean isOwned() {return state != null && state.owned;}

    /** Destroys the C++ object now, if owned. The wrapper can't be used after this. Calling it again does nothing. */
    @java.lang.Override public final void close()
    {
        closed = true;
        if (cleanable != null)
            cleanable.clean();
    }

    /** Gives up the ownership of the C++ object and returns its pointer. The caller is responsible for destroying it. The wrapper can't be used after this. */
    public final java.lang.foreign.MemorySegment release()
    {
        if (!isOwned())
            throw new java.lang.IllegalStateException("This object is not owned by the wrapper, it can't be moved from.");
        state.owned = false;
        closed = true;
        return ptr;
    }
}
)";

        // CppStruct.
        output_files[root.dir + "/CppStruct.java"] = pkg_line + R"(/**
 * The base class of the wrappers of the C++ structs exposed with `--expose-as-struct`.
 *
 * An instance is a view over a memory segment holding the struct. Instances created in Java own their memory (freed by the garbage collector),
 * those returned by reference from the bindings point into memory owned by something else, which they keep alive.
 */
public abstract class CppStruct implements Native
{
    protected final java.lang.foreign.MemorySegment segment;
    @java.lang.SuppressWarnings("unused") private final java.lang.Object owner; // Only here to keep the owner of a reference alive.

    /** Wraps a segment of the exact struct size. `owner` is kept alive as long as this wrapper is. */
    protected CppStruct(java.lang.foreign.MemorySegment segment, java.lang.Object owner)
    {
        this.segment = segment;
        this.owner = owner;
    }

    @java.lang.Override public final java.lang.foreign.MemorySegment rawPointer() {return segment;}
}
)";

        // Ffi.
        std::string ffi = pkg_line;
        ffi += "/** The runtime support of the bindings. */\n";
        ffi += "@java.lang.SuppressWarnings(\"restricted\") // The restricted methods warn unless `--enable-native-access` is passed, this is where we use them.\n";
        ffi += "public final class Ffi\n{\n";
        ffi += "    private Ffi() {}\n\n";
        ffi += "    public static final java.lang.foreign.Linker LINKER = java.lang.foreign.Linker.nativeLinker();\n";
        ffi += "    public static final java.lang.ref.Cleaner CLEANER = java.lang.ref.Cleaner.create();\n";
        ffi += "    public static final boolean IS_WINDOWS = java.lang.System.getProperty(\"os.name\", \"\").toLowerCase(java.util.Locale.ROOT).startsWith(\"windows\");\n\n";
        ffi += "    /** The layout of C `long`: 4 bytes on Windows, 8 bytes elsewhere. The name lets `downcall()` widen it to a Java `long`. */\n";
        ffi += "    public static final java.lang.foreign.ValueLayout C_LONG = (IS_WINDOWS ? java.lang.foreign.ValueLayout.JAVA_INT : java.lang.foreign.ValueLayout.JAVA_LONG).withName(\"mrbind_c_long\");\n\n";
        ffi += "    /** How an object is passed to a C function. Matches the C enum `" + hp + "PassBy`. */\n";
        int i = 0;
        for (std::string_view name : {"DEFAULT_CONSTRUCT", "COPY", "MOVE", "MOVE_AND_DESTROY", "DEFAULT_ARGUMENT", "NO_OBJECT"})
            ffi += "    public static final int PASS_BY_" + std::string(name) + " = " + std::to_string(i++) + ";\n";
        ffi += "\n";

        // The libraries.
        ffi += "    // The library of each file group of the C bindings, see `--split-library` in the C generator.\n";
        ffi += "    private static final java.util.Map<java.lang.String, java.lang.String> LIB_NAMES = java.util.Map.of(";
        {
            std::vector<std::string> pairs;
            std::map<std::string, std::string> sorted(imported_lib_names.begin(), imported_lib_names.end());
            for (const auto &[group, lib] : sorted)
                pairs.push_back("\"" + EscapeJavaString(group) + "\", \"" + EscapeJavaString(lib) + "\"");
            ffi += JoinNameParts(pairs, ", ");
        }
        ffi += ");\n";
        ffi += "    private static final java.util.Map<java.lang.String, java.lang.foreign.SymbolLookup> LOOKUPS = new java.util.HashMap<>();\n\n";
        ffi += R"(    /**
     * The symbols of the library of a file group. The library is loaded on the first use from the libraries bundled in the jar
     * (see `bundledLibrary()`), else from `java.library.path`
     * (on Windows with `LOAD_WITH_ALTERED_SEARCH_PATH`, so its dependencies are found next to it before anything else: the directory of `java.exe`
     * comes first in the default search order, and it has DLLs like `freetype.dll` that can shadow the real ones).
     * If that fails, it's loaded with `System.loadLibrary()`, and then by its platform-specific file name through the system loader.
     */
    public static synchronized java.lang.foreign.SymbolLookup lookup(java.lang.String group)
    {
        java.lang.foreign.SymbolLookup ret = LOOKUPS.get(group);
        if (ret == null)
        {
            java.lang.String lib = LIB_NAMES.get(group);
            if (lib == null)
                throw new java.lang.IllegalArgumentException("Unknown library group: `" + group + "`.");
            java.nio.file.Path bundled = bundledLibrary(java.lang.System.mapLibraryName(lib));
            if (bundled != null)
            {
                try
                {
                    ret = IS_WINDOWS ? windowsLoad(bundled) : java.lang.foreign.SymbolLookup.libraryLookup(bundled, java.lang.foreign.Arena.global());
                }
                catch (java.lang.Throwable e)
                {
                    throw rethrow(e);
                }
                LOOKUPS.put(group, ret);
                return ret;
            }
            java.lang.Throwable windowsError = null;
            if (IS_WINDOWS)
            {
                try
                {
                    ret = windowsLookup(java.lang.System.mapLibraryName(lib));
                }
                catch (java.lang.Throwable e)
                {
                    windowsError = e;
                }
            }
            if (ret == null)
            {
                try
                {
                    java.lang.System.loadLibrary(lib);
                    ret = java.lang.foreign.SymbolLookup.loaderLookup();
                }
                catch (java.lang.UnsatisfiedLinkError e)
                {
                    if (windowsError != null)
                        e.addSuppressed(windowsError);
                    try
                    {
                        ret = java.lang.foreign.SymbolLookup.libraryLookup(java.lang.System.mapLibraryName(lib), java.lang.foreign.Arena.global());
                    }
                    catch (java.lang.IllegalArgumentException e2)
                    {
                        e.addSuppressed(e2);
                        throw e;
                    }
                }
            }
            LOOKUPS.put(group, ret);
        }
        return ret;
    }

    /**
     * `<os>-<arch>` of the libraries bundled for this platform, e.g. `windows-x86_64`, `linux-aarch64`, `macos-aarch64`
     * (the names of Rust's `target_os` and `target_arch`).
     */
    public static java.lang.String nativePlatform()
    {
        java.lang.String os = java.lang.System.getProperty("os.name", "").toLowerCase(java.util.Locale.ROOT);
        java.lang.String arch = java.lang.System.getProperty("os.arch", "").toLowerCase(java.util.Locale.ROOT);
        os = IS_WINDOWS ? "windows" : os.startsWith("mac") ? "macos" : os.startsWith("linux") ? "linux" : os.replace(' ', '_');
        arch = switch (arch) {case "amd64", "x86_64" -> "x86_64"; case "aarch64", "arm64" -> "aarch64"; default -> arch;};
        return os + "-" + arch;
    }

    private static java.nio.file.Path bundledDir;
    private static boolean bundledDirSearched;

    /**
     * The path of a library bundled in the jar for this platform, or null if there's none. The bundled libraries are listed in the resource
     * `native/<nativePlatform()>/files.txt` next to this class, one `<sha256> <file name>` line each. On the first use they all are extracted to
     * `<package>-native-<hash of files.txt>` in the directory from the system property `<package>.native.cache`, by default `java.io.tmpdir`,
     * and reused by later runs. The libraries find their dependencies next to themselves (rpath `$ORIGIN`, `@loader_path`, or Windows' altered search path).
     */
    private static java.nio.file.Path bundledLibrary(java.lang.String fileName)
    {
        if (!bundledDirSearched)
        {
            bundledDirSearched = true;
            try
            {
                bundledDir = extractBundledLibraries();
            }
            catch (java.io.IOException e)
            {
                throw new java.io.UncheckedIOException("Can't extract the native libraries bundled in the jar.", e);
            }
        }
        if (bundledDir == null)
            return null;
        java.nio.file.Path path = bundledDir.resolve(fileName);
        return java.nio.file.Files.isRegularFile(path) ? path : null;
    }

    private static java.nio.file.Path extractBundledLibraries() throws java.io.IOException
    {
        java.lang.String resourceDir = "native/" + nativePlatform() + "/";
        byte[] list;
        try (java.io.InputStream in = Ffi.class.getResourceAsStream(resourceDir + "files.txt"))
        {
            if (in == null)
                return null;
            list = in.readAllBytes();
        }
        java.lang.String hash;
        try
        {
            hash = java.util.HexFormat.of().formatHex(java.security.MessageDigest.getInstance("SHA-256").digest(list), 0, 8);
        }
        catch (java.security.NoSuchAlgorithmException e)
        {
            throw new java.lang.IllegalStateException(e);
        }
        java.lang.String pkg = Ffi.class.getPackageName();
        java.nio.file.Path parent = java.nio.file.Path.of(java.lang.System.getProperty(pkg + ".native.cache", java.lang.System.getProperty("java.io.tmpdir"))).toAbsolutePath();
        java.nio.file.Path dir = parent.resolve(pkg + "-native-" + hash);
        if (java.nio.file.Files.exists(dir.resolve(".complete")))
            return dir;
        // Extracted to a temporary directory renamed at the end, so another process never sees an incomplete set.
        java.nio.file.Files.createDirectories(parent);
        java.nio.file.Path temp = java.nio.file.Files.createTempDirectory(parent, pkg + "-native-");
        for (java.lang.String line : new java.lang.String(list, java.nio.charset.StandardCharsets.UTF_8).split("\n"))
        {
            java.lang.String name = line.strip();
            int space = name.indexOf(' ');
            if (space >= 0)
                name = name.substring(space + 1).strip();
            if (name.startsWith("*")) // `sha256sum` in binary mode.
                name = name.substring(1);
            if (name.isEmpty())
                continue;
            try (java.io.InputStream in = Ffi.class.getResourceAsStream(resourceDir + name))
            {
                if (in == null)
                    throw new java.io.FileNotFoundException("The resource `" + resourceDir + name + "` listed in `files.txt` is missing.");
                java.nio.file.Files.copy(in, temp.resolve(name));
            }
        }
        java.nio.file.Files.createFile(temp.resolve(".complete"));
        try
        {
            java.nio.file.Files.move(temp, dir, java.nio.file.StandardCopyOption.ATOMIC_MOVE);
        }
        catch (java.io.IOException e)
        {
            // Another process was faster.
            if (!java.nio.file.Files.exists(dir.resolve(".complete")))
                throw e;
            try (java.util.stream.Stream<java.nio.file.Path> files = java.nio.file.Files.list(temp))
            {
                for (java.nio.file.Path file : (java.lang.Iterable<java.nio.file.Path>)files::iterator)
                    java.nio.file.Files.deleteIfExists(file);
            }
            java.nio.file.Files.deleteIfExists(temp);
        }
        return dir;
    }

    // Loads a DLL found in `java.library.path` with `LoadLibraryExW()`, see `lookup()`. Returns null if it's not there, throws if it can't be loaded.
    private static java.lang.foreign.SymbolLookup windowsLookup(java.lang.String fileName) throws java.lang.Throwable
    {
        java.nio.file.Path path = null;
        for (java.lang.String dir : java.lang.System.getProperty("java.library.path", "").split(java.io.File.pathSeparator))
        {
            if (dir.isEmpty())
                continue;
            java.nio.file.Path candidate = java.nio.file.Path.of(dir, fileName);
            if (java.nio.file.Files.isRegularFile(candidate))
            {
                path = candidate.toAbsolutePath();
                break;
            }
        }
        return path == null ? null : windowsLoad(path);
    }

    // Loads a DLL by its absolute path with `LoadLibraryExW(LOAD_WITH_ALTERED_SEARCH_PATH)`, see `lookup()`.
    private static java.lang.foreign.SymbolLookup windowsLoad(java.nio.file.Path path) throws java.lang.Throwable
    {
        java.lang.foreign.SymbolLookup kernel32 = java.lang.foreign.SymbolLookup.libraryLookup("kernel32.dll", java.lang.foreign.Arena.global());
        java.lang.foreign.Linker.Option errorState = java.lang.foreign.Linker.Option.captureCallState("GetLastError");
        java.lang.foreign.StructLayout errorLayout = java.lang.foreign.Linker.Option.captureStateLayout();
        java.lang.invoke.MethodHandle loadLibraryEx = LINKER.downcallHandle(kernel32.find("LoadLibraryExW").orElseThrow(), java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT), errorState);
        java.lang.invoke.MethodHandle getProcAddress = LINKER.downcallHandle(kernel32.find("GetProcAddress").orElseThrow(), java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        java.lang.foreign.MemorySegment module;
        int error;
        try (java.lang.foreign.Arena arena = java.lang.foreign.Arena.ofConfined())
        {
            final int LOAD_WITH_ALTERED_SEARCH_PATH = 0x8;
            java.lang.foreign.MemorySegment state = arena.allocate(errorLayout);
            module = (java.lang.foreign.MemorySegment)loadLibraryEx.invokeExact(state, arena.allocateFrom(path.toString(), java.nio.charset.StandardCharsets.UTF_16LE), java.lang.foreign.MemorySegment.NULL, LOAD_WITH_ALTERED_SEARCH_PATH);
            error = state.get(java.lang.foreign.ValueLayout.JAVA_INT, errorLayout.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("GetLastError")));
        }
        if (module.address() == 0)
            throw new java.lang.UnsatisfiedLinkError("LoadLibraryExW failed for `" + path + "` with the Windows error " + error + (error == 127 ? ": a procedure is missing from one of its dependencies. A DLL of the same name that's already loaded (such as the C++ runtime bundled with the JDK, which java.exe loads first) can be older than the one the library needs" : "") + ".");
        return name ->
        {
            try (java.lang.foreign.Arena arena = java.lang.foreign.Arena.ofConfined())
            {
                java.lang.foreign.MemorySegment address = (java.lang.foreign.MemorySegment)getProcAddress.invokeExact(module, arena.allocateFrom(name));
                return address.address() == 0 ? java.util.Optional.empty() : java.util.Optional.of(address);
            }
            catch (java.lang.Throwable e)
            {
                throw rethrow(e);
            }
        };
    }

    /**
     * Creates the downcall handle of a C function. C `long` parameters and return values are widened to Java `long`.
     * If the library lacks the function, the handle throws `UnsatisfiedLinkError` when called, so the other functions of its class stay usable.
     */
    public static java.lang.invoke.MethodHandle downcall(java.lang.String group, java.lang.String name, java.lang.foreign.FunctionDescriptor desc)
    {
        java.util.Optional<java.lang.foreign.MemorySegment> symbol = lookup(group).find(name);
        java.lang.invoke.MethodHandle handle;
        if (symbol.isPresent())
        {
            handle = LINKER.downcallHandle(symbol.get(), desc);
        }
        else
        {
            java.lang.invoke.MethodType type = desc.toMethodType();
            if (desc.returnLayout().isPresent() && desc.returnLayout().get() instanceof java.lang.foreign.GroupLayout)
                type = type.insertParameterTypes(0, java.lang.foreign.SegmentAllocator.class); // Struct returns take an allocator first.
            java.lang.UnsatisfiedLinkError error = new java.lang.UnsatisfiedLinkError("The function `" + name + "` is missing from the library `" + LIB_NAMES.get(group) + "`.");
            handle = java.lang.invoke.MethodHandles.throwException(type.returnType(), java.lang.UnsatisfiedLinkError.class).bindTo(error);
            handle = java.lang.invoke.MethodHandles.dropArguments(handle, 0, type.parameterList());
        }
        java.lang.invoke.MethodType type = handle.type();
        boolean changed = false;
        if (desc.returnLayout().isPresent() && isCLong(desc.returnLayout().get()) && type.returnType() == int.class)
        {
            type = type.changeReturnType(long.class);
            changed = true;
        }
        java.util.List<java.lang.foreign.MemoryLayout> args = desc.argumentLayouts();
        int offset = type.parameterCount() - args.size(); // 1 if a `SegmentAllocator` was prepended for a struct return.
        for (int i = 0; i < args.size(); i++)
        {
            if (isCLong(args.get(i)) && type.parameterType(i + offset) == int.class)
            {
                type = type.changeParameterType(i + offset, long.class);
                changed = true;
            }
        }
        if (changed)
            handle = java.lang.invoke.MethodHandles.explicitCastArguments(handle, type);
        return handle;
    }

    private static boolean isCLong(java.lang.foreign.MemoryLayout layout)
    {
        return layout.name().isPresent() && layout.name().get().equals("mrbind_c_long");
    }

    public static long getCLong(java.lang.foreign.MemorySegment segment, long offset)
    {
        return IS_WINDOWS ? segment.get(java.lang.foreign.ValueLayout.JAVA_INT, offset) : segment.get(java.lang.foreign.ValueLayout.JAVA_LONG, offset);
    }

    public static void setCLong(java.lang.foreign.MemorySegment segment, long offset, long value)
    {
        if (IS_WINDOWS)
            segment.set(java.lang.foreign.ValueLayout.JAVA_INT, offset, (int)value);
        else
            segment.set(java.lang.foreign.ValueLayout.JAVA_LONG, offset, value);
    }

    /** The pointer of a wrapper, or `NULL` for a null wrapper. */
    public static java.lang.foreign.MemorySegment ptr(Native object)
    {
        return object == null ? java.lang.foreign.MemorySegment.NULL : object.rawPointer();
    }

    /** The pointer of a wrapper. Throws if the wrapper is null. */
    public static java.lang.foreign.MemorySegment ptrNonNull(Native object, java.lang.String name)
    {
        if (object == null)
            throw new java.lang.NullPointerException("The parameter `" + name + "` must not be null.");
        return object.rawPointer();
    }

    // Allocates a single value, for the parameters passed by pointer.
    public static java.lang.foreign.MemorySegment alloc(java.lang.foreign.SegmentAllocator allocator, java.lang.foreign.ValueLayout.OfBoolean layout, boolean value) {return allocator.allocate(layout).fill((byte)(value ? 1 : 0));}
    public static java.lang.foreign.MemorySegment alloc(java.lang.foreign.SegmentAllocator allocator, java.lang.foreign.ValueLayout.OfByte layout, byte value) {return allocator.allocateFrom(layout, value);}
    public static java.lang.foreign.MemorySegment alloc(java.lang.foreign.SegmentAllocator allocator, java.lang.foreign.ValueLayout.OfShort layout, short value) {return allocator.allocateFrom(layout, value);}
    public static java.lang.foreign.MemorySegment alloc(java.lang.foreign.SegmentAllocator allocator, java.lang.foreign.ValueLayout.OfInt layout, int value) {return allocator.allocateFrom(layout, value);}
    public static java.lang.foreign.MemorySegment alloc(java.lang.foreign.SegmentAllocator allocator, java.lang.foreign.ValueLayout.OfLong layout, long value) {return allocator.allocateFrom(layout, value);}
    public static java.lang.foreign.MemorySegment alloc(java.lang.foreign.SegmentAllocator allocator, java.lang.foreign.ValueLayout.OfFloat layout, float value) {return allocator.allocateFrom(layout, value);}
    public static java.lang.foreign.MemorySegment alloc(java.lang.foreign.SegmentAllocator allocator, java.lang.foreign.ValueLayout.OfDouble layout, double value) {return allocator.allocateFrom(layout, value);}

    /** Allocates the UTF-8 bytes of a string, without a null terminator. Returns `NULL` for null. */
    public static java.lang.foreign.MemorySegment utf8(java.lang.foreign.SegmentAllocator allocator, java.lang.String str)
    {
        if (str == null)
            return java.lang.foreign.MemorySegment.NULL;
        byte[] bytes = str.getBytes(java.nio.charset.StandardCharsets.UTF_8);
        return allocator.allocateFrom(java.lang.foreign.ValueLayout.JAVA_BYTE, bytes);
    }

    /** The end pointer of a segment allocated by `utf8()`. `NULL` for `NULL`. */
    public static java.lang.foreign.MemorySegment end(java.lang.foreign.MemorySegment segment)
    {
        return segment.address() == 0 ? java.lang.foreign.MemorySegment.NULL : segment.asSlice(segment.byteSize());
    }

    /** Decodes a UTF-8 string from `size` bytes at `data`. */
    public static java.lang.String string(java.lang.foreign.MemorySegment data, long size)
    {
        if (size == 0)
            return "";
        return new java.lang.String(data.reinterpret(size).toArray(java.lang.foreign.ValueLayout.JAVA_BYTE), java.nio.charset.StandardCharsets.UTF_8);
    }

    /** Builds a struct layout with the C alignment rules: each field is aligned naturally, and the struct is padded to its alignment. */
    public static java.lang.foreign.StructLayout structLayout(java.lang.String[] names, java.lang.foreign.MemoryLayout[] fields)
    {
        java.util.List<java.lang.foreign.MemoryLayout> elems = new java.util.ArrayList<>();
        long offset = 0, align = 1;
        for (int i = 0; i < fields.length; i++)
        {
            long a = fields[i].byteAlignment();
            long pad = (a - offset % a) % a;
            if (pad > 0)
                elems.add(java.lang.foreign.MemoryLayout.paddingLayout(pad));
            elems.add(fields[i].withName(names[i]));
            offset += pad + fields[i].byteSize();
            align = java.lang.Math.max(align, a);
        }
        long pad = (align - offset % align) % align;
        if (pad > 0)
            elems.add(java.lang.foreign.MemoryLayout.paddingLayout(pad));
        if (elems.isEmpty())
            elems.add(java.lang.foreign.MemoryLayout.paddingLayout(1)); // Empty C++ structs have the size 1.
        return java.lang.foreign.MemoryLayout.structLayout(elems.toArray(new java.lang.foreign.MemoryLayout[0]));
    }

    /** Checks a struct layout against the size and alignment the C bindings were generated with. */
    public static void checkLayout(java.lang.foreign.StructLayout layout, long size, long alignment, java.lang.String name)
    {
        if (layout.byteSize() != size || layout.byteAlignment() != alignment)
            throw new java.lang.IllegalStateException("The Java layout of `" + name + "` (" + layout.byteSize() + " bytes, aligned to " + layout.byteAlignment() + ") doesn't match C++ (" + size + " bytes, aligned to " + alignment + ").");
    }

    /** Allocates zeroed memory for a struct. It's freed when the segment becomes unreachable. */
    public static java.lang.foreign.MemorySegment allocStruct(java.lang.foreign.MemoryLayout layout)
    {
        return java.lang.foreign.Arena.ofAuto().allocate(layout);
    }

    /** Converts a `Throwable` from `invokeExact()` to something that can be thrown from a method without a `throws` clause. */
    public static java.lang.RuntimeException rethrow(java.lang.Throwable e)
    {
        if (e instanceof java.lang.RuntimeException r)
            return r;
        if (e instanceof java.lang.Error err)
            throw err;
        return new java.lang.RuntimeException(e);
    }
)";

        ffi += R"JAVA(
    // What the wrapper must throw once the C call returns: a C++ exception message reported by the C bindings (a String),
    // or an exception thrown by a Java callback (a Throwable). Per thread, since the C bindings report per thread.
    private static final java.lang.ThreadLocal<java.lang.Object> PENDING = new java.lang.ThreadLocal<>();

    /** Throws if the last call into the C bindings threw a C++ exception, or a Java callback threw. */
    public static void checkException()
    {
        java.lang.Object pending = PENDING.get();
        if (pending == null)
            return;
        PENDING.remove();
        if (pending instanceof java.lang.Throwable error)
            throw rethrow(error);
        throw new CppException((java.lang.String)pending);
    }

    /** Called by the callback trampolines when the Java callable throws. The exception is rethrown by the wrapper that made the C call. */
    public static void callbackFailed(java.lang.Throwable error)
    {
        if (PENDING.get() == null)
            PENDING.set(error);
    }

    /** Creates an upcall stub for a static method of `cls`. The lookup must be able to see the method. */
    public static java.lang.foreign.MemorySegment upcall(java.lang.invoke.MethodHandles.Lookup lookup, java.lang.Class<?> cls, java.lang.String name, java.lang.foreign.FunctionDescriptor desc)
    {
        try
        {
            return LINKER.upcallStub(lookup.findStatic(cls, name, desc.toMethodType()), desc, java.lang.foreign.Arena.global());
        }
        catch (ReflectiveOperationException e)
        {
            throw new java.lang.IllegalStateException(e);
        }
    }

    // The Java callables held by the `std::function` instances, keyed by the ids that are passed to C as the user data pointers.
    // Each entry is the callable and its reference count: the copies of a `std::function` share the user data.
    private static final java.util.concurrent.ConcurrentHashMap<java.lang.Long, java.lang.Object[]> CALLBACKS = new java.util.concurrent.ConcurrentHashMap<>();
    private static final java.util.concurrent.atomic.AtomicLong NEXT_CALLBACK_ID = new java.util.concurrent.atomic.AtomicLong(1);

    /** Registers a callable and returns its user data pointer, with one reference. */
    public static java.lang.foreign.MemorySegment newCallbackState(java.lang.Object callable)
    {
        long id = NEXT_CALLBACK_ID.getAndIncrement();
        CALLBACKS.put(id, new java.lang.Object[]{callable, new java.util.concurrent.atomic.AtomicInteger(1)});
        return java.lang.foreign.MemorySegment.ofAddress(id);
    }

    /** The callable registered under a user data pointer. */
    public static java.lang.Object callbackState(java.lang.foreign.MemorySegment userdata)
    {
        java.lang.Object[] entry = CALLBACKS.get(userdata.address());
        if (entry == null)
            throw new java.lang.IllegalStateException("Unknown callback state: " + userdata.address() + ".");
        return entry[0];
    }

    // The `userdata_callback` of the C bindings: releases the user data of `this` object, then copies the other one into it, if any.
    private static void callbackStateChanged(java.lang.foreign.MemorySegment thisUserdata, java.lang.foreign.MemorySegment otherUserdata)
    {
        java.lang.foreign.MemorySegment slot = thisUserdata.reinterpret(java.lang.foreign.ValueLayout.ADDRESS.byteSize());
        long current = slot.get(java.lang.foreign.ValueLayout.ADDRESS, 0).address();
        if (current != 0)
        {
            java.lang.Object[] entry = CALLBACKS.get(current);
            if (entry != null && ((java.util.concurrent.atomic.AtomicInteger)entry[1]).decrementAndGet() == 0)
                CALLBACKS.remove(current);
            slot.set(java.lang.foreign.ValueLayout.ADDRESS, 0, java.lang.foreign.MemorySegment.NULL);
        }
        if (otherUserdata.address() != 0)
        {
            java.lang.Object[] entry = CALLBACKS.get(otherUserdata.address());
            if (entry != null)
                ((java.util.concurrent.atomic.AtomicInteger)entry[1]).incrementAndGet();
            slot.set(java.lang.foreign.ValueLayout.ADDRESS, 0, otherUserdata);
        }
    }

    public static final java.lang.foreign.MemorySegment CALLBACK_STATE_STUB = upcall(java.lang.invoke.MethodHandles.lookup(), Ffi.class, "callbackStateChanged", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
)JAVA";

        if (c_desc.exception_handling_enabled)
        {
            ffi += "\n    // C++ exceptions are reported by the C bindings through this callback, which stores the message until the wrapper checks it.\n";
            ffi += "    private static void exceptionHandler(java.lang.foreign.MemorySegment messages, java.lang.foreign.MemorySegment typeNames, java.lang.foreign.MemorySegment userdata)\n    {\n";
            ffi += "        java.lang.StringBuilder text = new java.lang.StringBuilder();\n";
            ffi += "        java.lang.foreign.MemorySegment array = messages.reinterpret(java.lang.Long.MAX_VALUE);\n";
            ffi += "        for (long i = 0;; i++)\n        {\n";
            ffi += "            java.lang.foreign.MemorySegment message = array.getAtIndex(java.lang.foreign.ValueLayout.ADDRESS, i);\n";
            ffi += "            if (message.address() == 0)\n                break;\n";
            ffi += "            if (i > 0)\n                text.append('\\n');\n";
            ffi += "            text.append(message.reinterpret(java.lang.Long.MAX_VALUE).getString(0));\n";
            ffi += "        }\n";
            ffi += "        PENDING.set(text.toString());\n    }\n\n";
            ffi += "    static\n    {\n";
            ffi += "        try\n        {\n";
            ffi += "            java.lang.foreign.MemorySegment stub = upcall(java.lang.invoke.MethodHandles.lookup(), Ffi.class, \"exceptionHandler\", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));\n";
            ffi += "            downcall(\"\", \"" + hp + "SetExceptionHandler\", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS)).invokeExact(stub, java.lang.foreign.MemorySegment.NULL);\n";
            ffi += "        }\n        catch (java.lang.Throwable e)\n        {\n            // The message survives the `NoClassDefFoundError` that the later uses of this class get.\n            throw new java.lang.IllegalStateException(\"Failed to register the C++ exception handler: \" + e, e);\n        }\n    }\n";
        }
        ffi += "}\n";
        output_files[root.dir + "/Ffi.java"] = ffi;
    }

    void Generator::EmitEnums()
    {
        for (const auto &[cpp_name, info] : types_by_cpp_name)
        {
            if (!info.IsEnum())
                continue;
            const auto &en = *info.enum_desc;
            auto prim = c_desc.platform_info.FindPrimitiveType(en.underlying_type);
            const bool is_signed = !prim || prim->kind == PrimitiveTypeInfo::Kind::signed_integral;
            const std::string &jt = info.enum_java_type;

            std::string out = "package " + info.module->package + ";\n\n";
            out += MakeDocComment(en.comment, 0, "The constants are static fields of this class. `value` holds the underlying value, so this can also hold values that aren't named constants.");
            out += "public final class " + info.java_unqual + "\n{\n";
            out += "    public final " + jt + " value;\n\n";
            out += "    public " + info.java_unqual + "(" + jt + " value) {this.value = value;}\n\n";
            std::set<std::string> used;
            for (std::string_view name : {"value", "of", "equals", "hashCode", "toString"})
                used.insert(std::string(name));
            std::vector<std::pair<std::string, std::string>> consts; // Java name, value expression.
            for (const auto &elem : en.elems)
            {
                std::string value;
                if (jt == "boolean")
                    value = elem.unsigned_value ? "true" : "false";
                else if (jt == "long")
                    value = (is_signed ? std::to_string(std::int64_t(elem.unsigned_value)) : std::to_string(std::int64_t(elem.unsigned_value))) + "L";
                else
                {
                    std::int64_t v = is_signed ? std::int64_t(elem.unsigned_value) : std::int64_t(elem.unsigned_value);
                    // Truncate to the Java type, which is always signed.
                    if (jt == "byte") v = std::int8_t(std::uint8_t(v));
                    else if (jt == "short") v = std::int16_t(std::uint16_t(v));
                    else if (jt == "int") v = std::int32_t(std::uint32_t(v));
                    value = jt == "int" ? std::to_string(v) : "(" + jt + ")" + std::to_string(v);
                }
                std::string name = UniqueName(used, JavaIdent(elem.name));
                out += MakeDocComment(elem.comment, 1);
                out += "    public static final " + info.java_unqual + " " + name + " = new " + info.java_unqual + "(" + value + ");\n";
                consts.emplace_back(name, elem.name);
            }
            out += "\n";
            out += "    /** Returns the named constant with this value, or a new instance if there's none. */\n";
            out += "    public static " + info.java_unqual + " of(" + jt + " value)\n    {\n";
            for (const auto &[name, orig] : consts)
                out += "        if (value == " + name + ".value) return " + name + ";\n";
            out += "        return new " + info.java_unqual + "(value);\n    }\n\n";
            out += "    @java.lang.Override public boolean equals(java.lang.Object other) {return other instanceof " + info.java_unqual + " o && o.value == value;}\n";
            out += "    @java.lang.Override public int hashCode() {return " + (jt == "boolean" ? std::string("value ? 1 : 0") : jt == "long" ? std::string("java.lang.Long.hashCode(value)") : std::string(jt == "int" ? "value" : "(int)value")) + ";}\n";
            out += "    @java.lang.Override public java.lang.String toString()\n    {\n";
            for (const auto &[name, orig] : consts)
                out += "        if (value == " + name + ".value) return \"" + EscapeJavaString(orig) + "\";\n";
            out += "        return \"" + EscapeJavaString(info.java_unqual) + "(\" + value + \")\";\n    }\n";
            out += "}\n";
            output_files[info.module->dir + "/" + info.java_unqual + ".java"] = out;
        }
    }

    std::optional<Generator::ParamStrings> Generator::MapParam(const CInterop::FuncParam &param, const TypeInfo *this_type)
    {
        ParamStrings ret;
        if (param.c_params.empty())
        {
            ret.skip = true;
            return ret;
        }

        std::vector<const cppdecl::Type *> c_types;
        std::vector<JavaType> ffi_types;
        for (const auto &c_param : param.c_params)
        {
            c_types.push_back(&ParseTypeOrThrow(c_param.c_type));
            auto ffi_type = CTypeToJava(c_param.c_type);
            if (!ffi_type || ffi_type->java == "void")
                return {};
            ffi_types.push_back(*ffi_type);
        }

        const std::string name = JavaIdent(param.name_or_placeholder);
        const cppdecl::Type &cpp = ParseTypeOrThrow(param.cpp_type);

        // Classify the C++ type.
        enum class CppShape {value, lref, rref, ptr, other};
        CppShape cpp_shape = CppShape::other;
        cppdecl::Type cpp_base = cpp;
        if (cpp.modifiers.empty())
            cpp_shape = CppShape::value;
        else if (cpp.modifiers.size() == 1 && cpp.Is<cppdecl::Reference>())
        {
            cpp_shape = cpp.As<cppdecl::Reference>()->kind == cppdecl::RefQualifier::rvalue ? CppShape::rref : CppShape::lref;
            cpp_base.RemoveModifier();
        }
        else if (cpp.modifiers.size() == 1 && cpp.Is<cppdecl::Pointer>())
        {
            cpp_shape = CppShape::ptr;
            cpp_base.RemoveModifier();
        }
        cpp_base.RemoveQualifiers(cppdecl::CvQualifiers::const_);
        const std::string cpp_base_str = cppdecl::ToCode(cpp_base, {});
        const bool cpp_is_optional = cpp_base_str.starts_with("std::optional<");
        const bool cpp_is_unique_ptr = cpp_base_str.starts_with("std::unique_ptr<");
        const bool cpp_is_string = cpp_base_str == "std::string" || cpp_base_str == "std::string_view" || cpp_base_str == "std::filesystem::path";

        const std::string F = RuntimeClass("Ffi");

        // Describes a single C parameter that is a pointer.
        struct PointerInfo
        {
            bool is_const = false;
            const TypeInfo *pointee_type = nullptr; // Null for builtin pointees.
            std::optional<JavaType> pointee_builtin; // Set for builtin pointees.
        };
        auto AnalyzePointer = [&](const cppdecl::Type &c_type) -> std::optional<PointerInfo>
        {
            if (c_type.modifiers.size() != 1 || !c_type.Is<cppdecl::Pointer>())
                return {};
            PointerInfo info;
            info.is_const = c_type.IsConst(1);
            std::string pointee_name = cppdecl::ToCode(c_type.simple_type.name, {});
            if (auto iter = types_by_c_name.find(pointee_name); iter != types_by_c_name.end())
                info.pointee_type = iter->second;
            else if (c_type.simple_type.name.AsSingleWord() != "void" && !c_type.simple_type.name.AsSingleWord().empty())
            {
                info.pointee_builtin = CTypeToJava(c_type, 1);
                if (!info.pointee_builtin || info.pointee_builtin->java == "void")
                    return {};
            }
            else
                return {};
            return info;
        };

        const std::string pass_by = c_desc.helpers_prefix + "PassBy";

        // The receiver.
        if (param.is_this_param && c_types.size() == 1)
        {
            auto ptr = AnalyzePointer(*c_types[0]);
            if (ptr && ptr->pointee_type && this_type && ptr->pointee_type == this_type)
            {
                ret.is_receiver = true;
                ret.args.push_back("rawPointer()");
                ret.fences.push_back("this");
                return ret;
            }
        }

        // Pass-by-enum classes.
        if (c_types.size() == 2 && c_types[0]->modifiers.empty() && cppdecl::ToCode(c_types[0]->simple_type.name, {}) == pass_by)
        {
            auto ptr = AnalyzePointer(*c_types[1]);
            if (ptr && ptr->pointee_type && ptr->pointee_type->class_desc && !ptr->pointee_type->IsExposedStruct())
            {
                const TypeInfo &cl = *ptr->pointee_type;
                const bool movable = cl.has_destroy;
                if (cl.copyable || movable)
                {
                    const bool optional = cpp_is_optional || param.default_arg_affects_parameter_passing;
                    const std::string none_mode = F + (cpp_is_optional ? ".PASS_BY_NO_OBJECT" : ".PASS_BY_DEFAULT_ARGUMENT");
                    ret.java_params.emplace_back(name, cl.java_path);
                    ret.object_param = name;
                    ret.fences.push_back(name);
                    if (cl.copyable)
                    {
                        if (optional)
                        {
                            ret.args.push_back("(int)(" + name + " == null ? " + none_mode + " : " + F + ".PASS_BY_COPY)");
                            ret.args.push_back(F + ".ptr(" + name + ")");
                        }
                        else
                        {
                            ret.args.push_back(F + ".PASS_BY_COPY");
                            ret.args.push_back(F + ".ptrNonNull(" + name + ", \"" + name + "\")");
                        }
                    }
                    else
                    {
                        // Non-copyable: the object is moved from and destroyed, see `CppObject.release()`.
                        if (optional)
                        {
                            ret.args.push_back("(int)(" + name + " == null ? " + none_mode + " : " + F + ".PASS_BY_MOVE_AND_DESTROY)");
                            ret.args.push_back("(" + std::string(kMemorySegment) + ")(" + name + " == null ? " + std::string(kMemorySegment) + ".NULL : " + name + ".release())");
                        }
                        else
                        {
                            ret.args.push_back(F + ".PASS_BY_MOVE_AND_DESTROY");
                            ret.args.push_back("java.util.Objects.requireNonNull(" + name + ", \"" + name + "\").release()");
                        }
                    }
                    return ret;
                }
            }
        }

        // Strings.
        if (c_types.size() == 2 && cpp_is_string && IsConstCharPtr(*c_types[0]) && IsConstCharPtr(*c_types[1]))
        {
            ret.java_params.emplace_back(name, "java.lang.String");
            ret.needs_arena = true;
            if (param.default_arg_affects_parameter_passing)
                ret.pre += std::string(kMemorySegment) + " __str_" + name + " = " + F + ".utf8(__arena, " + name + ");\n";
            else
                ret.pre += std::string(kMemorySegment) + " __str_" + name + " = " + F + ".utf8(__arena, java.util.Objects.requireNonNull(" + name + ", \"" + name + "\"));\n";
            ret.args.push_back("__str_" + name);
            ret.args.push_back(F + ".end(__str_" + name + ")");
            return ret;
        }

        if (c_types.size() == 1)
        {
            const cppdecl::Type &ct = *c_types[0];
            const JavaType &ffi_type = ffi_types[0];

            // By value: builtin types, enums, and exposed structs.
            if (ct.modifiers.empty() && !param.default_arg_affects_parameter_passing)
            {
                const TypeInfo *type_info = ffi_type.type_info;
                if (!type_info)
                {
                    ret.java_params.emplace_back(name, ffi_type.java);
                    ret.args.push_back(name);
                    return ret;
                }
                if (type_info->IsEnum())
                {
                    ret.java_params.emplace_back(name, type_info->java_path);
                    ret.args.push_back("java.util.Objects.requireNonNull(" + name + ", \"" + name + "\").value");
                    return ret;
                }
                if (type_info->IsExposedStruct())
                {
                    ret.java_params.emplace_back(name, type_info->java_path);
                    ret.args.push_back(F + ".ptrNonNull(" + name + ", \"" + name + "\")");
                    ret.object_param = name;
                    ret.fences.push_back(name);
                    return ret;
                }
            }

            // Pointers.
            if (auto ptr = AnalyzePointer(ct); ptr && !param.is_array_pointer && (cpp_shape == CppShape::value || cpp_shape == CppShape::lref || cpp_shape == CppShape::rref || cpp_shape == CppShape::ptr))
            {
                const bool optional = cpp_shape == CppShape::ptr || param.default_arg_affects_parameter_passing;

                // `std::unique_ptr<T>` takes ownership.
                if (cpp_is_unique_ptr && ptr->pointee_type && ptr->pointee_type->has_destroy && !ptr->is_const)
                {
                    ret.java_params.emplace_back(name, ptr->pointee_type->java_path);
                    ret.args.push_back("java.util.Objects.requireNonNull(" + name + ", \"" + name + "\").release()");
                    return ret;
                }

                // Classes and exposed structs: pass the pointer.
                if (ptr->pointee_type && ptr->pointee_type->class_desc)
                {
                    ret.java_params.emplace_back(name, ptr->pointee_type->java_path);
                    ret.args.push_back(optional ? F + ".ptr(" + name + ")" : F + ".ptrNonNull(" + name + ", \"" + name + "\")");
                    ret.object_param = name;
                    ret.fences.push_back(name);
                    return ret;
                }

                // Enums and builtins by const pointer: allocate a temporary. Mutable ones stay raw, Java can't write through them.
                if (ptr->is_const && ptr->pointee_type && ptr->pointee_type->IsEnum() && !ptr->pointee_type->enum_is_c_long)
                {
                    const TypeInfo &en = *ptr->pointee_type;
                    ret.java_params.emplace_back(name, en.java_path);
                    ret.needs_arena = true;
                    std::string alloc = F + ".alloc(__arena, " + en.enum_layout + ", " + name + ".value)";
                    ret.args.push_back(optional ? "(" + std::string(kMemorySegment) + ")(" + name + " == null ? " + std::string(kMemorySegment) + ".NULL : " + alloc + ")" : F + ".alloc(__arena, " + en.enum_layout + ", java.util.Objects.requireNonNull(" + name + ", \"" + name + "\").value)");
                    return ret;
                }
                if (ptr->is_const && ptr->pointee_builtin && !ptr->pointee_builtin->is_pointer && !ptr->pointee_builtin->is_c_long && !ptr->pointee_builtin->type_info && ptr->pointee_builtin->array_dims.empty())
                {
                    const JavaType &b = *ptr->pointee_builtin;
                    ret.needs_arena = true;
                    if (optional)
                    {
                        ret.java_params.emplace_back(name, Boxed(b.java));
                        ret.args.push_back("(" + std::string(kMemorySegment) + ")(" + name + " == null ? " + std::string(kMemorySegment) + ".NULL : " + F + ".alloc(__arena, " + b.layout + ", " + name + "))");
                    }
                    else
                    {
                        ret.java_params.emplace_back(name, b.java);
                        ret.args.push_back(F + ".alloc(__arena, " + b.layout + ", " + name + ")");
                    }
                    return ret;
                }
            }
        }

        // Fallback: raw C types.
        for (std::size_t i = 0; i < param.c_params.size(); i++)
        {
            std::string raw_name = JavaIdent(param.c_params[i].name);
            ret.java_params.emplace_back(raw_name, ffi_types[i].java);
            ret.args.push_back(raw_name);
        }
        ret.is_raw = true;
        return ret;
    }

    void Generator::CollectExpected()
    {
        for (auto &[cpp_name, info] : types_by_cpp_name)
        {
            if (!info.class_desc || !info.has_destroy)
                continue;
            if (!cpp_name.starts_with("expected<") && !cpp_name.starts_with("std::expected<") && !cpp_name.starts_with("tl::expected<"))
                continue;
            TypeInfo::Expected e;
            for (const auto &method : info.class_desc->methods)
            {
                if (method.c_name == info.c_name + "_success") e.success = &method;
                else if (method.c_name == info.c_name + "_value") e.value = &method;
                else if (method.c_name == info.c_name + "_error") e.error = &method;
            }
            if (!e.success || !e.error || !e.value || CTypeToJava(e.success->ret.c_type).value_or(JavaType{}).java != "boolean")
                continue;
            auto error_ret = MapReturn(e.error->ret, true);
            if (!error_ret || error_ret->java_type == "void")
                continue;
            e.error_handle_type = error_ret->handle_type;
            e.error_convert = error_ret->convert;
            // `expected<void, E>` has a `value()` returning `bool`.
            if (ParseTypeOrThrow(e.value->ret.c_type).Is<cppdecl::Pointer>())
            {
                auto value_ret = MapReturn(e.value->ret, true);
                if (!value_ret || value_ret->java_type == "void")
                    continue;
                e.value_java_type = value_ret->java_type;
                e.value_handle_type = value_ret->handle_type;
                e.value_convert = value_ret->convert;
            }
            else
            {
                e.value = nullptr;
                e.value_java_type = "void";
            }
            info.expected = std::move(e);
        }
    }

    void Generator::EmitExpected(const TypeInfo &info, std::string &members)
    {
        const auto &e = *info.expected;
        const std::string F = RuntimeClass("Ffi");
        auto Get = [&](const CInterop::ClassMethod &method, const std::string &handle_type, const std::string &convert)
        {
            std::string ret = "        " + handle_type + " __ret = (" + handle_type + ")" + handle_paths.at(method.c_name) + ".invokeExact(rawPointer());\n";
            ret += "        " + F + ".checkException();\n";
            if (convert.find("__owner") != std::string::npos)
                ret += "        java.lang.Object __owner = this;\n";
            return ret;
        };
        std::string doc = e.value ? "The value, or throws `UnexpectedResultException` with the error. The returned reference keeps this object alive." : "Throws `UnexpectedResultException` with the error, if any.";
        members += "/** " + doc + " The wrappers of the functions returning this type do this automatically. */\n";
        members += "public " + e.value_java_type + " valueOrThrow()\n{\n    try\n    {\n";
        members += "        if (!(boolean)" + handle_paths.at(e.success->c_name) + ".invokeExact(rawPointer()))\n        {\n";
        members += Indent(Get(*e.error, e.error_handle_type, e.error_convert), 1);
        members += "            throw new " + RuntimeClass("UnexpectedResultException") + "(java.lang.String.valueOf(" + e.error_convert + "));\n        }\n";
        if (e.value)
        {
            members += Get(*e.value, e.value_handle_type, e.value_convert);
            members += "        return " + e.value_convert + ";\n";
        }
        members += "    }\n    catch (java.lang.Throwable __e)\n    {\n        throw " + F + ".rethrow(__e);\n    }\n    finally\n    {\n        java.lang.ref.Reference.reachabilityFence(this);\n    }\n}\n\n";
    }

    std::optional<Generator::ReturnStrings> Generator::MapReturn(const CInterop::FuncReturn &ret, bool non_null)
    {
        ReturnStrings out;
        auto ffi_type = CTypeToJava(ret.c_type);
        if (!ffi_type)
            return {};
        out.java_type = ffi_type->java;
        out.handle_type = ffi_type->java;
        out.convert = "__ret";
        if (ffi_type->java == "void")
            return out;

        const cppdecl::Type &ct = ParseTypeOrThrow(ret.c_type);
        const std::string F = RuntimeClass("Ffi");

        if (ct.modifiers.empty())
        {
            // Builtin, enum, or exposed struct by value.
            if (ffi_type->type_info && ffi_type->type_info->IsEnum())
            {
                out.java_type = ffi_type->type_info->java_path;
                out.convert = ffi_type->type_info->java_path + ".of(__ret)";
            }
            else if (ffi_type->type_info && ffi_type->type_info->IsExposedStruct())
            {
                out.java_type = ffi_type->type_info->java_path;
                out.returns_struct = true;
                out.convert = "new " + ffi_type->type_info->java_path + "(__ret, null)";
            }
            return out;
        }

        if (ct.modifiers.size() == 1 && ct.Is<cppdecl::Pointer>() && !ret.is_array_pointer)
        {
            const bool is_const = ct.IsConst(1);
            std::string pointee_name = cppdecl::ToCode(ct.simple_type.name, {});
            auto type_iter = types_by_c_name.find(pointee_name);
            const TypeInfo *pointee_type = type_iter != types_by_c_name.end() ? type_iter->second : nullptr;
            std::optional<JavaType> pointee_builtin;
            if (!pointee_type && !ct.simple_type.name.AsSingleWord().empty() && ct.simple_type.name.AsSingleWord() != "void")
                pointee_builtin = CTypeToJava(ct, 1);

            const cppdecl::Type &cpp = ParseTypeOrThrow(ret.cpp_type);
            cppdecl::Type cpp_base = cpp;
            const bool cpp_is_ref = cpp.modifiers.size() == 1 && cpp.Is<cppdecl::Reference>();
            const bool cpp_is_ptr = cpp.modifiers.size() == 1 && cpp.Is<cppdecl::Pointer>();
            const bool nullable = cpp_is_ptr && !non_null;
            if (cpp_is_ref || cpp_is_ptr)
                cpp_base.RemoveModifier();
            cpp_base.RemoveQualifiers(cppdecl::CvQualifiers::const_);
            const std::string cpp_base_str = cppdecl::ToCode(cpp_base, {});

            if (pointee_type && pointee_type->class_desc && !pointee_type->IsExposedStruct())
            {
                // Owned objects.
                if (pointee_type->has_destroy && !is_const && (cpp.modifiers.empty() || cpp_base_str.starts_with("std::unique_ptr<")))
                {
                    out.java_type = pointee_type->java_path;
                    out.convert = "new " + pointee_type->java_path + "(__ret, true, null)";
                    if (cpp.modifiers.empty())
                        out.owned_type = pointee_type;
                    return out;
                }
                if (cpp_is_ref || cpp_is_ptr)
                {
                    out.java_type = pointee_type->java_path;
                    std::string make = "new " + pointee_type->java_path + "(__ret, " + (pointee_type->has_destroy ? "false, " : "") + "__owner)";
                    out.convert = nullable ? "__ret.address() == 0 ? null : " + make : make;
                    return out;
                }
            }
            else if (pointee_type && pointee_type->IsExposedStruct() && (cpp_is_ref || cpp_is_ptr))
            {
                out.java_type = pointee_type->java_path;
                std::string make = "new " + pointee_type->java_path + "(__ret.reinterpret(" + pointee_type->java_path + ".LAYOUT.byteSize()), __owner)";
                out.convert = nullable ? "__ret.address() == 0 ? null : " + make : make;
                return out;
            }
            else if (pointee_type && pointee_type->IsEnum() && is_const && !pointee_type->enum_is_c_long && (cpp_is_ref || cpp_is_ptr || cpp.modifiers.empty()))
            {
                out.java_type = pointee_type->java_path;
                std::string make = pointee_type->java_path + ".of(__ret.reinterpret(" + pointee_type->enum_size + ").get(" + pointee_type->enum_layout + ", 0))";
                out.convert = nullable ? "__ret.address() == 0 ? null : " + make : make;
                return out;
            }
            else if (pointee_builtin && !pointee_builtin->is_pointer && !pointee_builtin->type_info && pointee_builtin->array_dims.empty() && is_const && (cpp_is_ref || cpp_is_ptr || cpp.modifiers.empty()))
            {
                std::string read = pointee_builtin->is_c_long
                    ? F + ".getCLong(__ret.reinterpret(8), 0)"
                    : "__ret.reinterpret(" + pointee_builtin->size_expr + ").get(" + pointee_builtin->layout + ", 0)";
                if (nullable)
                {
                    out.java_type = Boxed(pointee_builtin->java);
                    out.convert = "__ret.address() == 0 ? null : (" + out.java_type + ")" + read;
                }
                else
                {
                    out.java_type = pointee_builtin->java;
                    out.convert = read;
                }
                return out;
            }
        }

        out.is_raw = ffi_type->is_pointer;
        return out;
    }

    std::optional<Generator::PreparedFunc> Generator::PrepareFunc(const CInterop::BasicFuncLike &func, const TypeInfo *this_type, bool is_ctor, std::string preferred_name, std::string fallback_name)
    {
        if (!handle_paths.contains(func.c_name))
            return {}; // Skipped already.

        PreparedFunc ret;
        ret.func = &func;
        ret.this_type = this_type;
        ret.is_ctor = is_ctor;
        ret.is_static = true;
        ret.preferred_name = std::move(preferred_name);
        ret.fallback_name = std::move(fallback_name);

        std::vector<std::string> sig_parts;
        ret.param_indices.assign(func.params.size(), std::size_t(-1));
        for (std::size_t i = 0; i < func.params.size(); i++)
        {
            const auto &param = func.params[i];
            auto mapped = MapParam(param, this_type);
            if (!mapped)
            {
                num_funcs_skipped++;
                skipped_funcs.push_back(func.c_name);
                return {};
            }
            if (mapped->skip)
                continue;
            if (mapped->is_receiver)
                ret.is_static = false;
            ret.is_raw |= mapped->is_raw;
            for (const auto &[pname, ptype] : mapped->java_params)
                sig_parts.push_back(ptype);
            ret.param_indices[i] = ret.params.size();
            ret.params.push_back(std::move(*mapped));
        }
        ret.signature = JoinNameParts(sig_parts, ",");

        auto mapped_ret = MapReturn(func.ret);
        if (!mapped_ret)
        {
            num_funcs_skipped++;
            skipped_funcs.push_back(func.c_name);
            return {};
        }
        ret.ret = std::move(*mapped_ret);
        // `expected<T, E>` returned by value: the wrapper returns `T` and throws on an error, like the Python and C# bindings.
        if (deref_expected && ret.ret.owned_type && ret.ret.owned_type->expected && !is_ctor)
        {
            const auto &e = *ret.ret.owned_type->expected;
            ret.ret.convert = "(" + ret.ret.convert + ").valueOrThrow()";
            ret.ret.java_type = e.value_java_type;
            ret.ret.is_statement = e.value_java_type == "void";
            ret.ret.unwraps_expected = true;
        }
        ret.is_raw |= ret.ret.is_raw;
        if (ret.is_raw)
            num_funcs_raw++;
        return ret;
    }

    void Generator::ResolveNames(std::vector<PreparedFunc> &funcs, std::set<std::string> &used_keys, std::vector<std::string> &names)
    {
        // How many functions share a preferred name and a signature.
        std::map<std::pair<std::string, std::string>, int> counts;
        for (const auto &func : funcs)
            counts[{func.preferred_name, func.signature}]++;

        names.clear();
        for (auto &func : funcs)
        {
            std::string name;
            if (!func.preferred_name.empty() && counts[{func.preferred_name, func.signature}] == 1)
                name = func.preferred_name;
            else
            {
                name = func.fallback_name;
                if (func.is_ctor)
                    func.is_ctor = false; // Becomes a static factory.
            }
            // Keep the signatures unique, in case the fallback names clash too.
            std::string base = name;
            for (int i = 2; !used_keys.insert(name + "(" + func.signature + ")").second; i++)
            {
                name = base + "_" + std::to_string(i);
                if (func.is_ctor)
                    func.is_ctor = false;
            }
            names.push_back(name);
        }
    }

    void Generator::EmitPrepared(std::string &out_module, const PreparedFunc &func, const std::string &name, int indent)
    {
        const CInterop::BasicFuncLike &f = *func.func;
        const std::string F = RuntimeClass("Ffi");

        std::string extra_doc = "Calls `" + f.c_name + "()`.";
        if (func.ret.unwraps_expected)
            extra_doc += " The C++ function returns `" + f.ret.cpp_type + "`: the value is returned and an error is thrown as `UnexpectedResultException`.";
        if (func.is_raw)
            extra_doc += " Some types are raw C types, see the C bindings for the details.";
        CInterop::Comment comment;
        comment.c_style = f.comment.c_style + f.comment_extra_lifetimes.c_style;
        std::string out = MakeDocComment(comment, 0, extra_doc);
        if (f.is_deprecated)
            out += "@java.lang.Deprecated\n";

        // The parameter list.
        std::string params_decl, params_pass;
        bool needs_arena = false;
        std::vector<std::string> fences;
        std::string pre;
        std::string object_param; // For `__owner`.
        int num_object_params = 0;
        for (const auto &param : func.params)
        {
            for (const auto &[pname, ptype] : param.java_params)
            {
                if (!params_decl.empty())
                {
                    params_decl += ", ";
                    params_pass += ", ";
                }
                params_decl += ptype + " " + pname;
                params_pass += pname;
            }
            needs_arena |= param.needs_arena;
            pre += param.pre;
            for (const auto &fence : param.fences)
                fences.push_back(fence);
            if (!param.object_param.empty())
            {
                object_param = param.object_param;
                num_object_params++;
            }
        }
        // The `[[clang::lifetimebound]]` annotations (and the lifetimes the C generator infers) tell what the returned reference points into,
        //   and that's what the wrapper keeps alive. Without them it's `this`, or the only object parameter.
        std::vector<std::string> owners;
        for (const auto &rel : f.lifetimes.relations)
        {
            if (!std::holds_alternative<LifetimeRelation::ReturnValue>(rel.holder))
                continue;
            std::string target;
            if (std::holds_alternative<LifetimeRelation::ThisObject>(rel.target))
            {
                if (!func.is_static)
                    target = "this";
            }
            else if (auto param = std::get_if<LifetimeRelation::Param>(&rel.target))
            {
                if (param->index >= 0 && std::size_t(param->index) < func.param_indices.size() && func.param_indices[std::size_t(param->index)] != std::size_t(-1))
                    target = func.params[func.param_indices[std::size_t(param->index)]].object_param;
            }
            if (!target.empty() && std::find(owners.begin(), owners.end(), target) == owners.end())
                owners.push_back(target);
        }
        std::string owner;
        if (owners.empty())
            owner = func.is_static ? (num_object_params == 1 ? object_param : "null") : "this";
        else if (owners.size() == 1)
            owner = owners.front();
        else
            owner = "new java.lang.Object[]{" + JoinNameParts(owners, ", ") + "}";

        // The call.
        std::string args;
        if (func.ret.returns_struct)
            args = "(java.lang.foreign.SegmentAllocator)" + std::string(kArena) + ".ofAuto()";
        for (const auto &param : func.params)
        {
            for (const auto &arg : param.args)
            {
                if (!args.empty())
                    args += ", ";
                args += arg;
            }
        }
        std::string call = handle_paths.at(f.c_name) + ".invokeExact(" + args + ")";
        std::string body = pre;
        if (func.ret.handle_type == "void")
            body += call + ";\n";
        else
            body += func.ret.handle_type + " __ret = (" + func.ret.handle_type + ")" + call + ";\n";
        body += F + ".checkException();\n";
        if (func.is_ctor)
            body += "return __ret;\n"; // The constructor wraps it.
        else if (func.ret.handle_type != "void")
        {
            if (func.ret.convert.find("__owner") != std::string::npos)
                body += "java.lang.Object __owner = " + owner + ";\n";
            body += (func.ret.is_statement ? "" : "return ") + func.ret.convert + ";\n";
        }

        std::string wrapped;
        wrapped += needs_arena ? "try (" + std::string(kArena) + " __arena = " + std::string(kArena) + ".ofConfined())\n{\n" : "try\n{\n";
        wrapped += Indent(body, 1);
        wrapped += "}\ncatch (java.lang.Throwable __e)\n{\n    throw " + F + ".rethrow(__e);\n}\n";
        if (!fences.empty())
        {
            wrapped += "finally\n{\n";
            for (const auto &fence : fences)
                wrapped += "    java.lang.ref.Reference.reachabilityFence(" + fence + ");\n";
            wrapped += "}\n";
        }

        if (func.is_ctor)
        {
            // A real constructor, calling a static helper that does the work.
            const std::string &cl = func.this_type->java_unqual;
            std::string helper = "__ctor_" + name;
            out += "public " + cl + "(" + params_decl + ")\n{\n";
            if (func.this_type->IsExposedStruct())
                out += "    super(" + helper + "(" + params_pass + "), null);\n";
            else
                out += "    this(" + helper + "(" + params_pass + "), true, null);\n";
            out += "}\n\n";
            out += "private static " + std::string(kMemorySegment) + " " + helper + "(" + params_decl + ")\n{\n" + Indent(wrapped, 1) + "}\n\n";
        }
        else
        {
            out += "public " + std::string(func.is_static ? "static " : "") + func.ret.java_type + " " + name + "(" + params_decl + ")\n{\n" + Indent(wrapped, 1) + "}\n\n";
        }

        out_module += Indent(out, indent);
    }

    std::string OperatorName(std::string_view token, bool is_post_incr_or_decr)
    {
        // The same names the C generator uses, in camel case: `!=` -> `opNotEqual`, `+=` -> `opAddAssign`.
        std::string ident = std::string(cppdecl::TokenToIdentifier(token, true));
        if (is_post_incr_or_decr)
            ident = "post_" + ident;
        std::string ret = "op";
        bool upper = true;
        for (char ch : ident)
        {
            if (ch == '_')
            {
                upper = true;
                continue;
            }
            ret += upper ? char(std::toupper((unsigned char)ch)) : ch;
            upper = false;
        }
        return JavaIdent(ret);
    }

    void Generator::EmitClasses()
    {
        const std::string F = RuntimeClass("Ffi");

        for (auto &[cpp_name, info] : types_by_cpp_name)
        {
            if (!info.class_desc)
                continue;
            const auto &cl = *info.class_desc;
            const std::string &def_name = info.java_unqual;

            std::string out = "package " + info.module->package + ";\n\n";
            std::string members; // The class body.
            std::set<std::string> used_keys; // `name(signature)` of the methods.
            for (std::string_view key : {"equals(java.lang.Object)", "hashCode()", "toString()", "getClass()", "notify()", "notifyAll()", "wait()", "wait(long)", "wait(long,int)", "finalize()", "clone()", "rawPointer()"})
                used_keys.insert(std::string(key));
            if (info.expected)
                used_keys.insert("valueOrThrow()");

            if (info.IsExposedStruct())
            {
                used_keys.insert("copy()");
                used_keys.insert("set(" + info.java_path + ")");

                out += MakeDocComment(cl.comment, 0, "Has the same layout as the C++ struct, the fields are accessed in place in native memory.");
                out += "@java.lang.SuppressWarnings({\"restricted\", \"cast\"})\npublic final class " + def_name + " extends " + RuntimeClass("CppStruct") + "\n{\n";

                // The layout.
                std::vector<std::string> field_names, field_layouts;
                struct FieldInfo
                {
                    const CInterop::ClassField *field = nullptr;
                    JavaType type;
                    std::string java_name;
                };
                std::vector<FieldInfo> fields;
                std::set<std::string> used_field_names;
                for (const auto &field : cl.fields)
                {
                    if (field.is_static)
                        continue;
                    auto type = CTypeToJava(field.type);
                    if (!type || type->java == "void")
                        throw std::runtime_error("Can't express the type `" + field.type + "` of field `" + field.name + "` of exposed struct `" + cpp_name + "` in Java.");
                    FieldInfo &fi = fields.emplace_back();
                    fi.field = &field;
                    fi.type = *type;
                    fi.java_name = UniqueName(used_field_names, JavaIdent(field.name));
                    field_names.push_back("\"" + EscapeJavaString(fi.java_name) + "\"");
                    field_layouts.push_back(type->layout);
                }
                members += "/** The native layout of the struct. */\n";
                members += "public static final java.lang.foreign.StructLayout LAYOUT = " + F + ".structLayout(new java.lang.String[]{" + JoinNameParts(field_names, ", ") + "}, new " + std::string(kMemoryLayout) + "[]{" + JoinNameParts(field_layouts, ", ") + "});\n";
                for (const auto &fi : fields)
                    members += "public static final long OFF_" + fi.java_name + " = LAYOUT.byteOffset(" + std::string(kMemoryLayout) + ".PathElement.groupElement(\"" + EscapeJavaString(fi.java_name) + "\"));\n";
                if (cl.size_and_alignment && !platform_dependent_structs.contains(cpp_name))
                    members += "static {" + F + ".checkLayout(LAYOUT, " + std::to_string(cl.size_and_alignment->size) + ", " + std::to_string(cl.size_and_alignment->alignment) + ", \"" + EscapeJavaString(cpp_name) + "\");}\n";
                else if (cl.size_and_alignment)
                    members += "// No layout check: this struct has platform-sized fields, and the sizes in the description JSON are for the platform the C bindings were generated on.\n";
                members += "\n";

                members += "/** Wraps a segment holding the struct. `owner` is kept alive as long as this wrapper is. Not for normal use. */\n";
                members += "public " + def_name + "(" + std::string(kMemorySegment) + " segment, java.lang.Object owner) {super(segment, owner);}\n\n";
                members += "/** A copy of the struct, in its own memory. */\n";
                members += "public " + def_name + " copy() {return new " + def_name + "(" + F + ".allocStruct(LAYOUT).copyFrom(segment), null);}\n\n";
                members += "/** Overwrites the contents with those of another struct. */\n";
                members += "public void set(" + def_name + " other) {segment.copyFrom(" + F + ".ptrNonNull(other, \"other\"));}\n\n";

                // The field accessors.
                for (const auto &fi : fields)
                {
                    const JavaType &t = fi.type;
                    const std::string cap = Capitalize(fi.java_name);
                    std::string doc = MakeDocComment(fi.field->comment, 0);

                    // The element type and the offset expression for arrays.
                    const JavaType &elem = t.array_dims.empty() ? t : *t.array_elem;
                    std::string index_params, index_pass, offset = "OFF_" + fi.java_name;
                    if (!t.array_dims.empty())
                    {
                        std::string flat;
                        for (std::size_t i = 0; i < t.array_dims.size(); i++)
                        {
                            std::string idx = "i" + std::to_string(i);
                            index_params += "int " + idx + ", ";
                            index_pass += "java.util.Objects.checkIndex(" + idx + ", " + std::to_string(t.array_dims[i]) + ")";
                            flat = i == 0 ? index_pass : "(" + flat + ") * " + std::to_string(t.array_dims[i]) + " + " + index_pass;
                            index_pass.clear();
                        }
                        offset += " + (" + flat + ") * " + elem.size_expr;
                    }
                    auto Params = [&](const std::string &extra)
                    {
                        if (extra.empty())
                            return index_params.empty() ? index_params : index_params.substr(0, index_params.size() - 2);
                        return index_params + extra;
                    };

                    std::string key_get = fi.java_name + "(" + (t.array_dims.empty() ? "" : JoinNameParts(std::vector<std::string>(t.array_dims.size(), "int"), ",")) + ")";
                    used_keys.insert(key_get);

                    if (elem.type_info && elem.type_info->IsExposedStruct())
                    {
                        const std::string &st = elem.type_info->java_path;
                        members += doc + "public " + st + " " + fi.java_name + "(" + Params("") + ") {return new " + st + "(segment.asSlice(" + offset + ", " + st + ".LAYOUT.byteSize()), this);}\n";
                        members += "public void set" + cap + "(" + Params(st + " value") + ") {segment.asSlice(" + offset + ", " + st + ".LAYOUT.byteSize()).copyFrom(" + F + ".ptrNonNull(value, \"value\"));}\n\n";
                        used_keys.insert("set" + cap + "(" + JoinNameParts(std::vector<std::string>(t.array_dims.size(), "int"), ",") + (t.array_dims.empty() ? "" : ",") + st + ")");
                    }
                    else if (elem.type_info && elem.type_info->IsEnum())
                    {
                        const TypeInfo &en = *elem.type_info;
                        std::string read = en.enum_is_c_long ? F + ".getCLong(segment, " + offset + ")" : "segment.get(" + en.enum_layout + ", " + offset + ")";
                        std::string write = en.enum_is_c_long ? F + ".setCLong(segment, " + offset + ", value.value)" : "segment.set(" + en.enum_layout + ", " + offset + ", value.value)";
                        members += doc + "public " + en.java_path + " " + fi.java_name + "(" + Params("") + ") {return " + en.java_path + ".of(" + read + ");}\n";
                        members += "public void set" + cap + "(" + Params(en.java_path + " value") + ") {" + write + ";}\n\n";
                    }
                    else
                    {
                        std::string read = elem.is_c_long ? F + ".getCLong(segment, " + offset + ")" : "segment.get(" + elem.layout + ", " + offset + ")";
                        std::string write = elem.is_c_long ? F + ".setCLong(segment, " + offset + ", value)" : "segment.set(" + elem.layout + ", " + offset + ", value)";
                        members += doc + "public " + elem.java + " " + fi.java_name + "(" + Params("") + ") {return " + read + ";}\n";
                        members += "public void set" + cap + "(" + Params(elem.java + " value") + ") {" + write + ";}\n\n";
                    }
                }
            }
            else
            {
                std::string note = info.has_destroy
                    ? "Instances created here own their C++ objects, see `CppObject`."
                    : "Can't be created from Java, only references to it are used.";
                out += MakeDocComment(cl.comment, 0, note);
                out += "@java.lang.SuppressWarnings({\"restricted\", \"cast\"})\npublic final class " + def_name + " extends " + RuntimeClass("CppObject") + "\n{\n";
                for (std::string_view key : {"close()", "release()", "isOwned()"})
                    used_keys.insert(std::string(key));

                if (info.has_destroy)
                {
                    members += "/** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */\n";
                    members += "public " + def_name + "(" + std::string(kMemorySegment) + " ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? " + def_name + "::__destroy : null, owner);}\n\n";
                    members += "private static void __destroy(" + std::string(kMemorySegment) + " ptr)\n{\n    try\n    {\n        " + info.destroy_handle + ".invokeExact(ptr);\n    }\n    catch (java.lang.Throwable e)\n    {\n        throw " + F + ".rethrow(e);\n    }\n}\n\n";
                }
                else
                {
                    members += "/** Wraps a pointer from the C bindings. `owner` is kept alive as long as this wrapper is. Not for normal use. */\n";
                    members += "public " + def_name + "(" + std::string(kMemorySegment) + " ptr, java.lang.Object owner) {super(ptr, null, owner);}\n\n";
                }
            }

            // Methods.
            std::vector<PreparedFunc> funcs;
            const std::string class_prefix = info.c_name + "_";

            // The fallback name derived from the C name, which is unique.
            auto FallbackName = [&](const std::string &c_name, bool is_operator) -> std::string
            {
                (void)this;
                std::string suffix;
                if (c_name.starts_with(class_prefix))
                    return JavaMethodName(c_name.substr(class_prefix.size()));
                suffix = c_name;
                if (suffix.starts_with(c_desc.helpers_prefix))
                    suffix.erase(0, c_desc.helpers_prefix.size());
                // Remove the class name from operator names.
                if (auto pos = suffix.find(info.c_name); pos != std::string::npos)
                    suffix.erase(pos, info.c_name.size());
                while (suffix.ends_with('_'))
                    suffix.pop_back();
                while (suffix.starts_with('_'))
                    suffix.erase(0, 1);
                // Collapse the repeated underscores left by the removal.
                std::string collapsed;
                for (char ch : suffix)
                {
                    if (ch == '_' && !collapsed.empty() && collapsed.back() == '_')
                        continue;
                    collapsed += ch;
                }
                return JavaIdent((is_operator ? "op" : "") + Capitalize(collapsed));
            };

            for (const auto &method : cl.methods)
            {
                std::string preferred, fallback;
                bool is_ctor = false;
                if (auto reg = std::get_if<CInterop::MethodKinds::Regular>(&method.var))
                {
                    preferred = JavaIdent(reg->name);
                    fallback = FallbackName(method.c_name, false);
                }
                else if (std::holds_alternative<CInterop::MethodKinds::Constructor>(method.var))
                {
                    is_ctor = info.has_destroy || info.IsExposedStruct();
                    preferred = is_ctor ? "<init>" : "";
                    fallback = FallbackName(method.c_name, false);
                }
                else
                {
                    const bool is_operator = !method.c_name.starts_with(class_prefix);
                    fallback = FallbackName(method.c_name, is_operator);
                    if (auto op = std::get_if<CInterop::MethodKinds::Operator>(&method.var); op && is_operator)
                        preferred = OperatorName(op->token, op->is_post_incr_or_decr);
                }
                // Constructors return the new object by value, which the mapping handles as an owned pointer or a struct.
                if (auto prepared = PrepareFunc(method, &info, is_ctor, preferred, fallback))
                {
                    // Only methods with the expected shape can be real constructors.
                    if (prepared->is_ctor && !(prepared->is_static && prepared->ret.java_type == info.java_path && (info.IsExposedStruct() ? prepared->ret.returns_struct : prepared->ret.convert.starts_with("new "))))
                    {
                        prepared->is_ctor = false;
                        prepared->preferred_name.clear();
                    }
                    funcs.push_back(std::move(*prepared));
                }
            }

            for (const auto &field : cl.fields)
            {
                if (info.IsExposedStruct() && !field.is_static)
                    continue;
                std::string field_name = JavaIdent(field.name);
                const CInterop::ClassField::Accessor *getter = field.getter_const ? &*field.getter_const : field.getter_mutable ? &*field.getter_mutable : nullptr;
                if (getter)
                {
                    if (auto prepared = PrepareFunc(*getter, &info, false, field_name, FallbackName(getter->c_name, false)))
                        funcs.push_back(std::move(*prepared));
                }
                if (field.setter)
                {
                    if (auto prepared = PrepareFunc(*field.setter, &info, false, JavaIdent("set" + Capitalize(field.name)), FallbackName(field.setter->c_name, false)))
                        funcs.push_back(std::move(*prepared));
                }
                if (field.getter_array_size)
                {
                    if (auto prepared = PrepareFunc(*field.getter_array_size, &info, false, JavaIdent(field.name + "Size"), FallbackName(field.getter_array_size->c_name, false)))
                        funcs.push_back(std::move(*prepared));
                }
            }

            std::vector<std::string> names;
            ResolveNames(funcs, used_keys, names);
            for (std::size_t i = 0; i < funcs.size(); i++)
                EmitPrepared(members, funcs[i], funcs[i].is_ctor ? funcs[i].fallback_name : names[i], 0);

            // The default constructor of an exposed struct without one in C++: zeroed memory.
            if (info.IsExposedStruct() && !used_keys.contains("<init>()"))
            {
                members += "/** Zero-initialized. */\n";
                members += "public " + def_name + "() {super(" + F + ".allocStruct(LAYOUT), null);}\n\n";
            }

            EmitCasts(info, members, used_keys);
            if (cl.callable_info && info.has_destroy)
                EmitStdFunction(info, members, used_keys);
            if (info.expected)
                EmitExpected(info, members);

            // Conveniences for `std::string`.
            if (cpp_name == "std::string")
            {
                auto data_iter = handle_paths.find(info.c_name + "_data");
                auto size_iter = handle_paths.find(info.c_name + "_size");
                if (data_iter != handle_paths.end() && size_iter != handle_paths.end()) // `toString()` is reserved, so no generated method has that name.
                {
                    members += "/** The contents, decoded as UTF-8. */\n";
                    members += "@java.lang.Override public java.lang.String toString()\n{\n    try\n    {\n";
                    members += "        return " + F + ".string((" + std::string(kMemorySegment) + ")" + data_iter->second + ".invokeExact(rawPointer()), (long)" + size_iter->second + ".invokeExact(rawPointer()));\n";
                    members += "    }\n    catch (java.lang.Throwable e)\n    {\n        throw " + F + ".rethrow(e);\n    }\n    finally\n    {\n        java.lang.ref.Reference.reachabilityFence(this);\n    }\n}\n\n";
                }
            }

            while (members.ends_with("\n\n"))
                members.pop_back();
            out += Indent(members, 1);
            out += "}\n";
            output_files[info.module->dir + "/" + def_name + ".java"] = out;
        }
    }

    void Generator::EmitFreeFunctions()
    {
        struct FuncInfo
        {
            Module *module = nullptr;
            std::string simple_name; // The C++ name, empty for operators.
            std::string c_derived_name; // Unique, derived from the C name.
        };
        std::vector<FuncInfo> infos;

        for (const auto &func : c_desc.functions)
        {
            FuncInfo &info = infos.emplace_back();

            std::string qual_name;
            if (auto reg = std::get_if<CInterop::FuncKinds::Regular>(&func.var))
                qual_name = reg->name;
            else if (auto op = std::get_if<CInterop::FuncKinds::Operator>(&func.var))
                qual_name = op->name;

            std::vector<std::string> ns_parts;
            {
                std::string_view view = qual_name;
                auto parsed = cppdecl::ParseQualifiedName(view);
                if (auto name = std::get_if<cppdecl::QualifiedName>(&parsed); name && view.empty())
                {
                    for (std::size_t i = 0; i + 1 < name->parts.size(); i++)
                        ns_parts.push_back(PartToString(name->parts[i]));
                    if (std::holds_alternative<CInterop::FuncKinds::Regular>(func.var) && !name->parts.empty())
                        info.simple_name = JavaIdent(PartToString(name->parts.back()));
                }
            }
            info.module = &GetModuleForNamespace(ns_parts);

            // Derive the name from the C name, which is unique.
            std::string suffix = func.c_name;
            std::string ns_c_prefix = JoinNameParts(ns_parts, "_") + "_";
            bool is_operator = std::holds_alternative<CInterop::FuncKinds::Operator>(func.var);
            if (!ns_parts.empty() && suffix.starts_with(ns_c_prefix))
                suffix.erase(0, ns_c_prefix.size());
            else if (suffix.starts_with(c_desc.helpers_prefix))
                suffix.erase(0, c_desc.helpers_prefix.size());
            info.c_derived_name = is_operator ? JavaIdent("op" + Capitalize(suffix)) : JavaMethodName(suffix);
            if (auto op = std::get_if<CInterop::FuncKinds::Operator>(&func.var))
                info.simple_name = OperatorName(op->token, op->is_post_incr_or_decr);
        }

        // Prepare per module, then resolve the names within each.
        std::map<Module *, std::vector<PreparedFunc>> per_module;
        for (std::size_t i = 0; i < c_desc.functions.size(); i++)
        {
            if (auto prepared = PrepareFunc(c_desc.functions[i], nullptr, false, infos[i].simple_name, infos[i].c_derived_name))
                per_module[infos[i].module].push_back(std::move(*prepared));
        }
        for (auto &[module, funcs] : per_module)
        {
            std::set<std::string> used_keys;
            for (std::string_view key : {"equals(java.lang.Object)", "hashCode()", "toString()", "getClass()", "notify()", "notifyAll()", "wait()", "wait(long)", "wait(long,int)", "finalize()", "clone()"})
                used_keys.insert(std::string(key));
            std::vector<std::string> names;
            ResolveNames(funcs, used_keys, names);
            for (std::size_t i = 0; i < funcs.size(); i++)
                EmitPrepared(module->free_funcs, funcs[i], names[i], 0);
        }
    }

    void Generator::EmitFiles()
    {
        // The `ffi` classes, one per C file.
        // A directory of the C bindings becomes a package, and a package can't share a name with a class in the same parent package.
        std::set<std::string> dir_packages;
        for (const auto &[relative_name, file] : file_classes)
        {
            std::string pkg = base_package + ".ffi";
            for (std::size_t i = 0; i + 1 < file.idents.size(); i++)
            {
                pkg += "." + file.idents[i];
                dir_packages.insert(pkg);
            }
        }
        for (auto &[relative_name, file] : file_classes)
        {
            if (dir_packages.contains(file.java_path) || std::find(base_package_segments.begin(), base_package_segments.end(), file.idents.back()) != base_package_segments.end())
            {
                // Rename the class, and fix up the handle paths pointing to it.
                std::string old_path = file.java_path;
                file.idents.back() += '_';
                file.java_path = base_package + ".ffi." + JoinNameParts(file.idents, ".");
                for (auto &[c_name, path] : handle_paths)
                {
                    if (path.starts_with(old_path + "."))
                        path = file.java_path + path.substr(old_path.size());
                }
                for (auto &[cpp_name, info] : types_by_cpp_name)
                {
                    if (info.destroy_handle.starts_with(old_path + "."))
                        info.destroy_handle = file.java_path + info.destroy_handle.substr(old_path.size());
                }
            }
        }
        // The safe layer is emitted after this, so the handle paths are final there.

        for (const auto &[relative_name, file] : file_classes)
        {
            std::string pkg = base_package + ".ffi";
            std::string dir = root.dir + "/ffi";
            for (std::size_t i = 0; i + 1 < file.idents.size(); i++)
            {
                pkg += "." + file.idents[i];
                dir += "/" + file.idents[i];
            }
            std::string out = "package " + pkg + ";\n\n";
            out += "/** The downcall handles of the C bindings file `" + relative_name + "`. */\n";
            out += "public final class " + file.idents.back() + "\n{\n";
            out += "    private " + file.idents.back() + "() {}\n";
            for (std::size_t i = 0; i < file.handles.size(); i += handles_per_chunk)
            {
                out += "\n    public static final class H" + std::to_string(i / handles_per_chunk) + "\n    {\n";
                out += "        private H" + std::to_string(i / handles_per_chunk) + "() {}\n\n";
                for (std::size_t j = i; j < file.handles.size() && j < i + handles_per_chunk; j++)
                    out += "        public " + file.handles[j];
                out += "    }\n";
            }
            out += "}\n";
            output_files[dir + "/" + file.idents.back() + ".java"] = out;
        }

        // A nested namespace package can't share a name with a class in its parent package.
        auto CheckModule = [&](auto &self, const Module &module) -> void
        {
            for (const auto &[name, child] : module.children)
            {
                if (module.used_names.contains(name))
                    throw std::runtime_error("The nested namespace package `" + child.package + "` clashes with a class of the same name. Rename one of them in C++ or adjust `--force-namespace`.");
                self(self, child);
            }
        };
        if (root.children.contains("ffi"))
            throw std::runtime_error("A namespace package clashes with the `ffi` package.");
        CheckModule(CheckModule, root);
    }

    void Generator::Generate()
    {
        CollectTypes();
        CollectExpected();
        EmitHandles();
        EmitRuntime();
        EmitEnums();
        EmitFiles(); // Before the classes, since this can rename the `ffi` classes.
        EmitClasses();
        EmitFreeFunctions();
        // The `Functions` classes of the namespace packages.
        auto WriteFunctions = [&](auto &self, const Module &module) -> void
        {
            for (const auto &[name, child] : module.children)
                self(self, child);
            if (!module.free_funcs.empty())
            {
                std::string out = "package " + module.package + ";\n\n";
                out += "/** The free functions of this namespace. */\n";
                out += "@java.lang.SuppressWarnings({\"restricted\", \"cast\"})\npublic final class Functions\n{\n    private Functions() {}\n\n";
                std::string body = module.free_funcs;
                while (body.ends_with("\n\n"))
                    body.pop_back();
                out += Indent(body, 1);
                out += "}\n";
                output_files[module.dir + "/Functions.java"] = out;
            }
        };
        WriteFunctions(WriteFunctions, root);
    }
}
