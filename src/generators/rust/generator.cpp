#include "generators/rust/generator.h"

#include "common/strings.h"

#include <cppdecl/declarations/parse.h>
#include <cppdecl/declarations/to_string.h>

#include <algorithm>
#include <cassert>
#include <cctype>
#include <cstdint>
#include <stdexcept>
#include <variant>

namespace mrbind::Rust
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

        [[nodiscard]] std::string EscapeRustString(std::string_view str)
        {
            std::string ret;
            for (char ch : str)
            {
                if (ch == '\\' || ch == '"')
                    ret += '\\';
                if (ch == '\n')
                    ret += "\\n";
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

    }

    std::string SnakeCase(std::string_view str)
    {
        std::string ret;
        for (std::size_t i = 0; i < str.size(); i++)
        {
            char ch = str[i];
            bool upper = ch >= 'A' && ch <= 'Z';
            if (upper && i > 0)
            {
                char prev = str[i - 1];
                bool prev_lower_or_digit = (prev >= 'a' && prev <= 'z') || (prev >= '0' && prev <= '9');
                bool prev_upper = prev >= 'A' && prev <= 'Z';
                bool next_lower = i + 1 < str.size() && str[i + 1] >= 'a' && str[i + 1] <= 'z';
                if (prev_lower_or_digit || (prev_upper && next_lower))
                    ret += '_';
            }
            ret += upper ? char(ch - 'A' + 'a') : ch;
        }
        // Collapse repeated underscores.
        std::string collapsed;
        for (char ch : ret)
        {
            if (ch == '_' && !collapsed.empty() && collapsed.back() == '_')
                continue;
            collapsed += ch;
        }
        return collapsed;
    }

    std::string RustIdent(std::string str)
    {
        static const std::set<std::string_view> keywords = {
            "as", "break", "const", "continue", "crate", "else", "enum", "extern", "false", "fn", "for", "if", "impl", "in", "let", "loop",
            "match", "mod", "move", "mut", "pub", "ref", "return", "self", "Self", "static", "struct", "super", "trait", "true", "type",
            "unsafe", "use", "where", "while", "async", "await", "dyn", "abstract", "become", "box", "do", "final", "macro", "override",
            "priv", "typeof", "unsized", "virtual", "yield", "try", "gen", "union",
        };
        static const std::set<std::string_view> unescapable = {"self", "Self", "super", "crate", "_"};

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
        if (unescapable.contains(str))
            return str + '_';
        if (keywords.contains(str))
            return "r#" + str;
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

    Generator::Module &Generator::GetModuleForNamespace(const std::vector<std::string> &ns_parts)
    {
        Module *m = &root;
        for (const auto &part : ns_parts)
        {
            std::string name = RustIdent(SnakeCase(part));
            if (name == "ffi" || name == "std" || name == "core" || name == "alloc")
                name += '_';
            auto [iter, is_new] = m->children.try_emplace(name);
            if (is_new)
                iter->second.rust_path = m->rust_path + "::" + name;
            m = &iter->second;
        }
        return *m;
    }

    Generator::FileModule &Generator::GetFileModule(const CInterop::OutputFile &file)
    {
        auto [iter, is_new] = file_modules.try_emplace(file.relative_name);
        FileModule &ret = iter->second;
        if (is_new)
        {
            ret.relative_name = file.relative_name;
            ret.group = file.group;
        }
        else if (ret.group != file.group)
        {
            throw std::runtime_error("The file `" + file.relative_name + "` is mentioned with two different groups: `" + ret.group + "` and `" + file.group + "`.");
        }
        return ret;
    }

    void Generator::AssignFileIdents()
    {
        // Register the files and the namespaces of the free functions too, so that all the clashes are known.
        for (const auto &func : c_desc.functions)
        {
            (void)GetFileModule(func.output_file);
            std::vector<std::string> ns_parts = FuncNamespaceParts(func, nullptr);
            (void)GetModuleForNamespace(ns_parts.empty() ? forced_namespace : ns_parts);
        }

        // The top-level identifiers can't clash with the namespace modules and the other entities at the crate root.
        // Since the user only names the namespace modules, the file modules yield, with `#[path]` pointing to the original name.
        std::map<std::string, std::string> top_level_idents; // The original name -> the identifier.
        for (auto &[relative_name, file] : file_modules)
        {
            std::string_view str = relative_name;
            while (!str.empty())
            {
                std::size_t sep = str.find('/');
                std::string_view part = str.substr(0, sep);
                if (!part.empty())
                {
                    std::string ident = RustIdent(std::string(part));
                    if (file.idents.empty())
                    {
                        auto [iter, is_new] = top_level_idents.try_emplace(std::string(part), ident);
                        if (is_new)
                        {
                            auto Taken = [&](const std::string &name)
                            {
                                if (name == "ffi" || root.children.contains(name) || root.used_names.contains(name))
                                    return true;
                                return std::any_of(top_level_idents.begin(), top_level_idents.end(), [&](const auto &pair){return pair.first != part && pair.second == name;});
                            };
                            while (Taken(iter->second))
                                iter->second += '_';
                        }
                        ident = iter->second;
                    }
                    file.idents.push_back(ident);
                }
                str = sep == std::string_view::npos ? std::string_view{} : str.substr(sep + 1);
            }
            if (file.idents.empty())
                throw std::runtime_error("Bad relative file name in the input JSON: `" + relative_name + "`.");
            file.rust_path = "crate::" + JoinNameParts(file.idents, "::");
        }
        for (const auto &[part, ident] : top_level_idents)
            root.used_names.insert(ident);
    }

    void Generator::ReExportType(const TypeInfo &info)
    {
        std::string &out = info.module->body;
        out += "pub use " + info.file->rust_path + "::" + info.file_unqual;
        if (info.file_unqual != info.rust_unqual)
            out += " as " + info.rust_unqual;
        out += ";\n";
    }

    std::string Generator::LinkAttrs(const std::string &group) const
    {
        auto lib_iter = imported_lib_names.find(group);
        if (lib_iter == imported_lib_names.end())
            throw std::runtime_error("No library name specified for the file group `" + group + "`, pass `--imported-split-lib-name " + group + " <name>`.");
        if (windows_raw_dylib)
            return "#[cfg_attr(windows, link(name = \"" + lib_iter->second + "\", kind = \"raw-dylib\"))]\n#[cfg_attr(not(windows), link(name = \"" + lib_iter->second + "\"))]\n";
        return "#[link(name = \"" + lib_iter->second + "\")]\n";
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
        std::string ret;
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

            ret += "///";
            if (!line.empty())
            {
                ret += ' ';
                ret += line;
            }
            ret += '\n';
        }
        if (!extra_line.empty())
        {
            if (!ret.empty())
                ret += "///\n";
            ret += "/// " + extra_line + "\n";
        }
        return Indent(ret, indent);
    }

    std::optional<std::string> Generator::CTypeToRust(const std::string &str, bool top_level_return)
    {
        return CTypeToRust(ParseTypeOrThrow(str), 0, top_level_return);
    }

    std::optional<std::string> Generator::CTypeToRust(const cppdecl::Type &type, std::size_t i, bool top_level_return)
    {
        if (i == type.modifiers.size())
        {
            std::string_view word = type.simple_type.name.AsSingleWord();
            const bool is_unsigned = bool(type.simple_type.flags & cppdecl::SimpleTypeFlags::unsigned_);
            const bool is_signed = bool(type.simple_type.flags & cppdecl::SimpleTypeFlags::explicitly_signed);

            if (!word.empty())
            {
                if (word == "void") return top_level_return ? "()" : "core::ffi::c_void";
                if (word == "bool") return "bool";
                if (word == "char") return is_unsigned ? "core::ffi::c_uchar" : is_signed ? "core::ffi::c_schar" : "core::ffi::c_char";
                if (word == "short") return is_unsigned ? "core::ffi::c_ushort" : "core::ffi::c_short";
                if (word == "int") return is_unsigned ? "core::ffi::c_uint" : "core::ffi::c_int";
                if (word == "long") return is_unsigned ? "core::ffi::c_ulong" : "core::ffi::c_long";
                if (word == "long long") return is_unsigned ? "core::ffi::c_ulonglong" : "core::ffi::c_longlong";
                if (is_unsigned || is_signed) return {};
                if (word == "float") return "f32";
                if (word == "double") return "f64";
                if (word == "size_t") return "usize";
                if (word == "ptrdiff_t") return "isize";
                if (word == "int8_t") return "i8";
                if (word == "uint8_t") return "u8";
                if (word == "int16_t") return "i16";
                if (word == "uint16_t") return "u16";
                if (word == "int32_t") return "i32";
                if (word == "uint32_t") return "u32";
                if (word == "int64_t") return "i64";
                if (word == "uint64_t") return "u64";
                if (word == "intptr_t") return "isize";
                if (word == "uintptr_t") return "usize";
                if (word == "long double" || word == "wchar_t" || word == "char8_t" || word == "char16_t" || word == "char32_t") return {};
            }

            std::string name = cppdecl::ToCode(type.simple_type.name, {});
            if (name == c_desc.helpers_prefix + "PassBy")
                return "crate::ffi::" + name;
            // The fixed-size typedefs of `--canonicalize-to-fixed-size-typedefs`, e.g. `MR_C_int64_t`. Those are always the fixed size, even when spelled via `size_t`.
            if (name.starts_with(c_desc.helpers_prefix))
            {
                std::string_view rest = std::string_view(name).substr(c_desc.helpers_prefix.size());
                for (auto [c, rust] : std::initializer_list<std::pair<std::string_view, std::string_view>>{
                    {"int8_t", "i8"}, {"uint8_t", "u8"}, {"int16_t", "i16"}, {"uint16_t", "u16"}, {"int32_t", "i32"}, {"uint32_t", "u32"}, {"int64_t", "i64"}, {"uint64_t", "u64"},
                })
                {
                    if (rest == c)
                        return std::string(rust);
                }
            }
            if (auto iter = types_by_c_name.find(name); iter != types_by_c_name.end())
                return "crate::ffi::" + RustIdent(iter->second->c_name);
            if (auto iter = types_by_cpp_name.find(name); iter != types_by_cpp_name.end())
                return "crate::ffi::" + RustIdent(iter->second.c_name);
            return {};
        }

        if (type.Is<cppdecl::Pointer>(i))
        {
            if (auto func = type.As<cppdecl::Function>(i + 1))
            {
                std::string ret = "Option<unsafe extern \"C\" fn(";
                for (bool first = true; const auto &param : func->params)
                {
                    if (!std::exchange(first, false))
                        ret += ", ";
                    auto param_str = CTypeToRust(param.type, 0, false);
                    if (!param_str)
                        return {};
                    ret += *param_str;
                }
                ret += ")";
                auto ret_str = CTypeToRust(type, i + 2, true);
                if (!ret_str)
                    return {};
                if (*ret_str != "()")
                    ret += " -> " + *ret_str;
                ret += ">";
                return ret;
            }

            auto inner = CTypeToRust(type, i + 1, false);
            if (!inner)
                return {};
            return (type.IsConst(i + 1) ? "*const " : "*mut ") + *inner;
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
            auto inner = CTypeToRust(type, i + 1, false);
            if (!inner)
                return {};
            return "[" + *inner + "; " + std::to_string(*size) + "]";
        }

        return {};
    }

    void Generator::CollectTypes()
    {
        root.rust_path = "crate";

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
                // Template instantiations of parsed classes go to the module of their namespace, named after the C name minus the namespace.
                // Everything else (`std::...` and such) goes to the crate root, named after the C name minus the helpers prefix.
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
                if (ns_parts.empty())
                    ns_parts = forced_namespace;
                info.module = &GetModuleForNamespace(ns_parts);
                info.rust_unqual = UniqueName(info.module->used_names, RustIdent(ident));
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
                if (ns_parts.empty())
                    ns_parts = forced_namespace;
                info.module = &GetModuleForNamespace(ns_parts);
                info.rust_unqual = UniqueName(info.module->used_names, RustIdent(unqual));
            }
            info.rust_path = info.module->rust_path + "::" + info.rust_unqual;
            info.file = &GetFileModule(info.class_desc ? info.class_desc->output_file : info.enum_desc->output_file);
            info.file_unqual = UniqueName(info.file->used_names, info.rust_unqual);
        }
    }

    std::string Generator::FfiFuncDecl(const CInterop::BasicFuncLike &func, bool &ok)
    {
        ok = true;
        std::string ret = "pub fn " + RustIdent(func.c_name) + "(";
        bool first = true;
        for (const auto &param : func.params)
        {
            for (const auto &c_param : param.c_params)
            {
                auto type = CTypeToRust(c_param.c_type);
                if (!type)
                {
                    ok = false;
                    return {};
                }
                if (!std::exchange(first, false))
                    ret += ", ";
                ret += RustIdent(c_param.name) + ": " + *type;
            }
        }
        ret += ")";
        auto ret_type = CTypeToRust(func.ret.c_type, true);
        if (!ret_type)
        {
            ok = false;
            return {};
        }
        if (*ret_type != "()")
            ret += " -> " + *ret_type;
        ret += ";\n";
        return ret;
    }

    void Generator::EmitFfi()
    {
        // The common helpers go to their own file.
        std::string &helpers = output_files["ffi/__mrbind_helpers.rs"];
        helpers += "//! The common helpers of the C bindings.\n\n";
        const std::string pass_by = c_desc.helpers_prefix + "PassBy";
        helpers += "/// How an object is passed to a C function. Matches the C enum of the same name.\n";
        helpers += "pub type " + pass_by + " = core::ffi::c_int;\n";
        int i = 0;
        for (std::string_view name : {"DefaultConstruct", "Copy", "Move", "MoveAndDestroy", "DefaultArgument", "NoObject"})
            helpers += "pub const " + pass_by + "_" + std::string(name) + ": " + pass_by + " = " + std::to_string(i++) + ";\n";
        helpers += "\n";
        helpers += "pub type " + c_desc.helpers_prefix + "ExceptionHandlerFuncPtr = Option<unsafe extern \"C\" fn(messages: *const *const core::ffi::c_char, type_names: *const *const core::ffi::c_char, userdata: *mut core::ffi::c_void)>;\n\n";
        helpers += LinkAttrs("");
        helpers += "unsafe extern \"C\"\n{\n";
        helpers += "    pub fn " + c_desc.helpers_prefix + "Free(ptr: *mut core::ffi::c_void);\n";
        helpers += "    pub fn " + c_desc.helpers_prefix + "FreeArray(ptr: *mut core::ffi::c_void);\n";
        if (c_desc.exception_handling_enabled)
            helpers += "    pub fn " + c_desc.helpers_prefix + "SetExceptionHandler(func: " + c_desc.helpers_prefix + "ExceptionHandlerFuncPtr, userdata: *mut core::ffi::c_void);\n";
        helpers += "}\n";

        // Exposed structs whose layout depends on the platform: those with pointers or `size_t`-like fields, directly or in nested structs.
        // The sizes in the description JSON are for the platform the C bindings were generated on, so we can't assert them for those.
        std::set<std::string> platform_dependent_structs;
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
                    std::string type = CTypeToRust(field.type).value_or("");
                    bool dependent = false;
                    for (std::string_view marker : {"usize", "isize", "*const", "*mut", "c_long", "c_ulong"})
                        dependent |= type.find(marker) != std::string::npos;
                    for (const auto &dep_name : platform_dependent_structs)
                    {
                        std::string dep_rust = "crate::ffi::" + RustIdent(types_by_cpp_name.at(dep_name).c_name);
                        std::size_t pos = type.find(dep_rust);
                        if (pos != std::string::npos && (pos + dep_rust.size() == type.size() || !(std::isalnum((unsigned char)type[pos + dep_rust.size()]) || type[pos + dep_rust.size()] == '_')))
                            dependent = true;
                    }
                    if (dependent)
                    {
                        platform_dependent_structs.insert(cpp_name);
                        changed = true;
                        break;
                    }
                }
            }
        }

        // Types.
        for (const auto &[cpp_name, info] : types_by_cpp_name)
        {
            std::string &out = info.file->ffi_types;
            std::string name = RustIdent(info.c_name);
            if (info.IsEnum())
            {
                auto underlying = CTypeToRust(info.enum_desc->underlying_type);
                if (!underlying)
                    throw std::runtime_error("Unknown underlying type `" + info.enum_desc->underlying_type + "` of enum `" + cpp_name + "`.");
                auto prim = c_desc.platform_info.FindPrimitiveType(info.enum_desc->underlying_type);
                const bool is_signed = !prim || prim->kind == PrimitiveTypeInfo::Kind::signed_integral;

                out += "/// Generated from enum `" + cpp_name + "`.\n";
                out += "#[repr(transparent)]\n#[derive(Clone, Copy, PartialEq, Eq, Hash, Debug)]\n";
                out += "pub struct " + name + "(pub " + *underlying + ");\n";
                if (!info.enum_desc->elems.empty())
                {
                    out += "impl " + name + "\n{\n";
                    for (const auto &elem : info.enum_desc->elems)
                    {
                        out += MakeDocComment(elem.comment, 1);
                        std::string value = is_signed ? std::to_string(std::int64_t(elem.unsigned_value)) + "i64" : std::to_string(elem.unsigned_value) + "u64";
                        value = *underlying == "bool" ? value + " != 0" : value + " as " + *underlying;
                        out += "    pub const " + RustIdent(elem.name) + ": " + name + " = " + name + "(" + value + ");\n";
                    }
                    out += "}\n";
                }
                out += "\n";
            }
            else if (info.IsExposedStruct())
            {
                const auto &cl = *info.class_desc;
                const bool assert_layout = cl.size_and_alignment && !platform_dependent_structs.contains(cpp_name);
                out += "/// Generated from struct `" + cpp_name + "`. Has the same layout in C, C++, and Rust.\n";
                std::string align = assert_layout ? ", align(" + std::to_string(cl.size_and_alignment->alignment) + ")" : "";
                out += "#[repr(C" + align + ")]\n#[derive(Clone, Copy, Debug)]\n";
                out += "pub struct " + name + "\n{\n";
                std::vector<std::pair<std::string, std::size_t>> offsets;
                for (const auto &field : cl.fields)
                {
                    if (field.is_static)
                        continue;
                    auto type = CTypeToRust(field.type);
                    if (!type)
                        throw std::runtime_error("Can't express the type `" + field.type + "` of field `" + field.name + "` of exposed struct `" + cpp_name + "` in Rust.");
                    out += MakeDocComment(field.comment, 1);
                    std::string field_name = RustIdent(field.name);
                    out += "    pub " + field_name + ": " + *type + ",\n";
                    if (field.layout)
                        offsets.emplace_back(field_name, field.layout->byte_offset);
                }
                out += "}\n";
                if (assert_layout)
                {
                    out += "const _: () =\n{\n";
                    out += "    assert!(core::mem::size_of::<" + name + ">() == " + std::to_string(cl.size_and_alignment->size) + ");\n";
                    out += "    assert!(core::mem::align_of::<" + name + ">() == " + std::to_string(cl.size_and_alignment->alignment) + ");\n";
                    for (const auto &[field_name, offset] : offsets)
                        out += "    assert!(core::mem::offset_of!(" + name + ", " + field_name + ") == " + std::to_string(offset) + ");\n";
                    out += "};\n";
                }
                else if (cl.size_and_alignment)
                {
                    out += "// No layout assertions: this struct has platform-sized fields, and the sizes in the description JSON are for the platform the C bindings were generated on.\n";
                }
                out += "\n";
            }
            else
            {
                out += "/// Generated from class `" + cpp_name + "`. Opaque, only used behind pointers.\n";
                out += "#[repr(C)]\npub struct " + name + "\n{\n    _data: [u8; 0],\n    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,\n}\n\n";
            }
        }

        // Functions, each in the file it comes from.
        auto AddFunc = [&](FileModule &file, const CInterop::BasicFuncLike &func)
        {
            num_funcs_total++;
            bool ok = false;
            std::string decl = FfiFuncDecl(func, ok);
            if (!ok)
            {
                num_funcs_skipped++;
                skipped_funcs.push_back(func.c_name);
                return;
            }
            file.ffi_funcs += "    " + decl;
        };

        for (const auto &func : c_desc.functions)
            AddFunc(GetFileModule(func.output_file), func);

        for (const auto &[cpp_name, info] : types_by_cpp_name)
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
                info.file->ffi_funcs += "    pub fn " + RustIdent(info.c_name + "_Destroy") + "(_this: *const " + RustIdent(info.c_name) + ");\n";
        }
    }

    void Generator::EmitRuntime()
    {
        std::string &out = root.body;
        out += R"(use core::ops::{Deref, DerefMut};

/// Implemented by the opaque C++ classes that can be destroyed.
pub unsafe trait CppClass
{
    unsafe fn destroy(ptr: *mut Self);
}

/// Implemented by the opaque C++ classes that can be copied.
pub unsafe trait CppCopy: CppClass
{
    unsafe fn copy(ptr: *const Self) -> *mut Self;
}

/// An owning handle to a heap-allocated C++ object. Destroys the object when dropped.
/// Dereferences to the class itself, which holds all the methods.
pub struct Owned<T: CppClass>(core::ptr::NonNull<T>);

impl<T: CppClass> Owned<T>
{
    /// Takes ownership of a pointer returned by the C bindings. The pointer must not be null.
    pub unsafe fn from_raw(ptr: *mut T) -> Self
    {
        Self(core::ptr::NonNull::new(ptr).expect("The C bindings returned a null pointer."))
    }

    /// Releases ownership. The caller must destroy the object.
    pub fn into_raw(self) -> *mut T
    {
        let ptr = self.0.as_ptr();
        core::mem::forget(self);
        ptr
    }

    pub fn as_ptr(&self) -> *const T {self.0.as_ptr()}
    pub fn as_mut_ptr(&mut self) -> *mut T {self.0.as_ptr()}
}

impl<T: CppClass> Deref for Owned<T>
{
    type Target = T;
    fn deref(&self) -> &T {unsafe {self.0.as_ref()}}
}

impl<T: CppClass> DerefMut for Owned<T>
{
    fn deref_mut(&mut self) -> &mut T {unsafe {self.0.as_mut()}}
}

impl<T: CppClass> Drop for Owned<T>
{
    fn drop(&mut self) {unsafe {T::destroy(self.0.as_ptr())}}
}

impl<T: CppCopy> Clone for Owned<T>
{
    fn clone(&self) -> Self {unsafe {Self::from_raw(T::copy(self.0.as_ptr()))}}
}

impl<T: CppClass + core::fmt::Debug> core::fmt::Debug for Owned<T>
{
    fn fmt(&self, f: &mut core::fmt::Formatter<'_>) -> core::fmt::Result {(**self).fmt(f)}
}

)";

        if (c_desc.exception_handling_enabled)
        {
            out += "thread_local!\n{\n    static PENDING_EXCEPTION: core::cell::RefCell<Option<String>> = const {core::cell::RefCell::new(None)};\n}\n\n";
            out += "unsafe extern \"C\" fn exception_handler(messages: *const *const core::ffi::c_char, _type_names: *const *const core::ffi::c_char, _userdata: *mut core::ffi::c_void)\n{\n";
            out += "    let mut text = String::new();\n    let mut ptr = messages;\n    while !(*ptr).is_null()\n    {\n        if !text.is_empty() {text.push('\\n');}\n";
            out += "        text.push_str(&core::ffi::CStr::from_ptr(*ptr).to_string_lossy());\n        ptr = ptr.add(1);\n    }\n";
            out += "    PENDING_EXCEPTION.with(|e| *e.borrow_mut() = Some(text));\n}\n\n";
            out += "static INIT_EXCEPTIONS: std::sync::Once = std::sync::Once::new();\n\n";
            out += "#[doc(hidden)]\npub fn __init_exceptions()\n{\n    INIT_EXCEPTIONS.call_once(|| unsafe {crate::ffi::" + c_desc.helpers_prefix + "SetExceptionHandler(Some(exception_handler), core::ptr::null_mut())});\n}\n\n";
            out += "/// Panics if the last call into the C bindings threw a C++ exception.\n#[doc(hidden)]\npub fn __check_exception()\n{\n    if let Some(msg) = PENDING_EXCEPTION.with(|e| e.borrow_mut().take())\n    {\n        panic!(\"C++ exception: {msg}\");\n    }\n}\n\n";
        }
    }

    void Generator::EmitEnums()
    {
        for (const auto &[cpp_name, info] : types_by_cpp_name)
        {
            if (!info.IsEnum())
                continue;
            std::string &out = info.file->body;
            out += MakeDocComment(info.enum_desc->comment, 0, "Generated from enum `" + cpp_name + "`. The constants are associated constants of this type.");
            out += "pub use crate::ffi::" + RustIdent(info.c_name) + " as " + info.file_unqual + ";\n\n";
            ReExportType(info);
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
        std::vector<std::string> ffi_types;
        for (const auto &c_param : param.c_params)
        {
            c_types.push_back(&ParseTypeOrThrow(c_param.c_type));
            auto ffi_type = CTypeToRust(c_param.c_type);
            if (!ffi_type)
                return {};
            ffi_types.push_back(*ffi_type);
        }

        const std::string name = RustIdent(param.name_or_placeholder);
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

        // Describes a single C parameter that is a pointer.
        struct PointerInfo
        {
            bool is_const = false;
            std::string pointee_ffi; // The pointee type as spelled in `ffi`.
            const TypeInfo *pointee_type = nullptr; // Null for builtin pointees.
            bool pointee_is_builtin = false;
        };
        auto AnalyzePointer = [&](const cppdecl::Type &c_type) -> std::optional<PointerInfo>
        {
            if (c_type.modifiers.size() != 1 || !c_type.Is<cppdecl::Pointer>())
                return {};
            PointerInfo info;
            info.is_const = c_type.IsConst(1);
            auto pointee = CTypeToRust(c_type, 1, false);
            if (!pointee)
                return {};
            info.pointee_ffi = *pointee;
            std::string pointee_name = cppdecl::ToCode(c_type.simple_type.name, {});
            if (auto iter = types_by_c_name.find(pointee_name); iter != types_by_c_name.end())
                info.pointee_type = iter->second;
            else if (c_type.simple_type.name.AsSingleWord() != "void" && !c_type.simple_type.name.AsSingleWord().empty())
                info.pointee_is_builtin = true;
            else
                return {};
            return info;
        };

        const std::string pass_by = c_desc.helpers_prefix + "PassBy";
        auto PassByConst = [&](std::string_view mode) {return "crate::ffi::" + pass_by + "_" + std::string(mode);};

        // The receiver.
        if (param.is_this_param && c_types.size() == 1)
        {
            auto ptr = AnalyzePointer(*c_types[0]);
            if (ptr && ptr->pointee_type && this_type && ptr->pointee_type == this_type)
            {
                ret.is_receiver = true;
                ret.receiver = ptr->is_const ? "&self" : "&mut self";
                ret.args.push_back(ptr->is_const ? "self as *const Self as *const " + ptr->pointee_ffi : "self as *mut Self as *mut " + ptr->pointee_ffi);
                ret.num_ref_inputs = 1;
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
                const bool copyable = cl.traits && cl.traits->copy_constructible != CInterop::SpecialMemberKind::disabled;
                const bool movable = cl.has_destroy;
                if (copyable || movable)
                {
                    const bool optional = cpp_is_optional || param.default_arg_affects_parameter_passing;
                    const std::string none_mode = cpp_is_optional ? "NoObject" : "DefaultArgument";
                    if (copyable)
                    {
                        std::string ptr_expr = "r as *const " + cl.rust_path + " as *mut " + ptr->pointee_ffi;
                        if (optional)
                        {
                            ret.rust_params.emplace_back(name, "Option<&" + cl.rust_path + ">");
                            ret.pre += "let (__pb_" + name + ", __ptr_" + name + ") = match " + name + " {Some(r) => (" + PassByConst("Copy") + ", " + ptr_expr + "), None => (" + PassByConst(none_mode) + ", core::ptr::null_mut())};\n";
                            ret.args.push_back("__pb_" + name);
                            ret.args.push_back("__ptr_" + name);
                        }
                        else
                        {
                            ret.rust_params.emplace_back(name, "&" + cl.rust_path);
                            ret.args.push_back(PassByConst("Copy"));
                            ret.args.push_back(name + " as *const " + cl.rust_path + " as *mut " + ptr->pointee_ffi);
                        }
                        ret.num_ref_inputs = 1;
                    }
                    else
                    {
                        std::string ptr_expr = "r.into_raw() as *mut " + ptr->pointee_ffi;
                        if (optional)
                        {
                            ret.rust_params.emplace_back(name, "Option<crate::Owned<" + cl.rust_path + ">>");
                            ret.pre += "let (__pb_" + name + ", __ptr_" + name + ") = match " + name + " {Some(r) => (" + PassByConst("MoveAndDestroy") + ", " + ptr_expr + "), None => (" + PassByConst(none_mode) + ", core::ptr::null_mut())};\n";
                            ret.args.push_back("__pb_" + name);
                            ret.args.push_back("__ptr_" + name);
                        }
                        else
                        {
                            ret.rust_params.emplace_back(name, "crate::Owned<" + cl.rust_path + ">");
                            ret.args.push_back(PassByConst("MoveAndDestroy"));
                            ret.args.push_back(name + ".into_raw() as *mut " + ptr->pointee_ffi);
                        }
                    }
                    return ret;
                }
            }
        }

        // Strings.
        if (c_types.size() == 2 && cpp_is_string && IsConstCharPtr(*c_types[0]) && IsConstCharPtr(*c_types[1]))
        {
            if (param.default_arg_affects_parameter_passing)
            {
                ret.rust_params.emplace_back(name, "Option<&str>");
                ret.pre += "let (__begin_" + name + ", __end_" + name + ") = match " + name + " {Some(s) => (s.as_ptr() as *const core::ffi::c_char, s.as_ptr().wrapping_add(s.len()) as *const core::ffi::c_char), None => (core::ptr::null(), core::ptr::null())};\n";
                ret.args.push_back("__begin_" + name);
                ret.args.push_back("__end_" + name);
            }
            else
            {
                ret.rust_params.emplace_back(name, "&str");
                ret.args.push_back(name + ".as_ptr() as *const core::ffi::c_char");
                ret.args.push_back(name + ".as_ptr().wrapping_add(" + name + ".len()) as *const core::ffi::c_char");
            }
            ret.num_ref_inputs = 1;
            return ret;
        }

        if (c_types.size() == 1)
        {
            const cppdecl::Type &ct = *c_types[0];

            // By value: builtin types, enums, and exposed structs.
            if (ct.modifiers.empty())
            {
                std::string word_name = cppdecl::ToCode(ct.simple_type.name, {});
                auto type_iter = types_by_c_name.find(word_name);
                const bool is_builtin = type_iter == types_by_c_name.end();
                if (is_builtin || type_iter->second->IsEnum() || type_iter->second->IsExposedStruct())
                {
                    if (!param.default_arg_affects_parameter_passing)
                    {
                        ret.rust_params.emplace_back(name, ffi_types[0]);
                        ret.args.push_back(name);
                        return ret;
                    }
                }
            }

            // Pointers.
            if (auto ptr = AnalyzePointer(ct))
            {
                const std::string pointee_path = ptr->pointee_type && !ptr->pointee_type->IsExposedStruct() && !ptr->pointee_type->IsEnum() ? ptr->pointee_type->rust_path : ptr->pointee_ffi;
                const std::string ptr_kw = ptr->is_const ? "*const " : "*mut ";
                const std::string null_expr = ptr->is_const ? "core::ptr::null()" : "core::ptr::null_mut()";
                auto CastExpr = [&](const std::string &var) {return var + " as " + ptr_kw + pointee_path + " as " + ptr_kw + ptr->pointee_ffi;};

                // `std::unique_ptr<T>` takes ownership.
                if (cpp_is_unique_ptr && ptr->pointee_type && ptr->pointee_type->has_destroy && !ptr->is_const)
                {
                    ret.rust_params.emplace_back(name, "crate::Owned<" + pointee_path + ">");
                    ret.args.push_back(name + ".into_raw() as *mut " + ptr->pointee_ffi);
                    return ret;
                }

                const bool is_class_or_builtin = ptr->pointee_is_builtin || (ptr->pointee_type && (ptr->pointee_type->class_desc || ptr->pointee_type->IsEnum()));
                if (is_class_or_builtin && (cpp_shape == CppShape::value || cpp_shape == CppShape::lref || cpp_shape == CppShape::rref || cpp_shape == CppShape::ptr) && !param.is_array_pointer)
                {
                    const bool optional = cpp_shape == CppShape::ptr || param.default_arg_affects_parameter_passing;
                    const std::string ref_type = (ptr->is_const ? "&" : "&mut ") + pointee_path;
                    const bool small_by_value = ptr->pointee_is_builtin || (ptr->pointee_type && ptr->pointee_type->IsEnum());
                    if (optional && small_by_value && cpp_shape == CppShape::value && ptr->is_const)
                    {
                        // A by-value scalar with a default argument: `Option<T>` is nicer than `Option<&T>`.
                        ret.rust_params.emplace_back(name, "Option<" + pointee_path + ">");
                        ret.args.push_back(name + ".as_ref().map_or(" + null_expr + ", |r| " + CastExpr("r") + ")");
                        return ret;
                    }
                    if (optional)
                    {
                        ret.rust_params.emplace_back(name, "Option<" + ref_type + ">");
                        ret.args.push_back(name + ".map_or(" + null_expr + ", |r| " + CastExpr("r") + ")");
                    }
                    else
                    {
                        ret.rust_params.emplace_back(name, ref_type);
                        ret.args.push_back(CastExpr(name));
                    }
                    ret.num_ref_inputs = 1;
                    return ret;
                }
            }
        }

        // Fallback: raw C types.
        for (std::size_t i = 0; i < param.c_params.size(); i++)
        {
            std::string raw_name = RustIdent(param.c_params[i].name);
            ret.rust_params.emplace_back(raw_name, ffi_types[i]);
            ret.args.push_back(raw_name);
        }
        ret.is_unsafe = true;
        ret.is_raw = true;
        return ret;
    }

    std::optional<Generator::ReturnStrings> Generator::MapReturn(const CInterop::FuncReturn &ret, bool can_elide_lifetime)
    {
        ReturnStrings out;
        auto ffi_type = CTypeToRust(ret.c_type, true);
        if (!ffi_type)
            return {};
        out.rust_type = *ffi_type;
        out.convert = "__ret";

        const cppdecl::Type &ct = ParseTypeOrThrow(ret.c_type);
        if (ct.modifiers.empty())
            return out; // Void, builtin, enum, or exposed struct by value.

        if (ct.modifiers.size() == 1 && ct.Is<cppdecl::Pointer>() && !ret.is_array_pointer)
        {
            const bool is_const = ct.IsConst(1);
            std::string pointee_name = cppdecl::ToCode(ct.simple_type.name, {});
            auto type_iter = types_by_c_name.find(pointee_name);
            const TypeInfo *pointee_type = type_iter != types_by_c_name.end() ? type_iter->second : nullptr;
            auto pointee_ffi = CTypeToRust(ct, 1, false);
            if (!pointee_ffi)
                return out;
            const bool pointee_is_builtin = !pointee_type && !ct.simple_type.name.AsSingleWord().empty() && ct.simple_type.name.AsSingleWord() != "void";
            if (!pointee_type && !pointee_is_builtin)
                return out;
            const std::string pointee_path = pointee_type && !pointee_type->IsExposedStruct() && !pointee_type->IsEnum() ? pointee_type->rust_path : *pointee_ffi;

            const cppdecl::Type &cpp = ParseTypeOrThrow(ret.cpp_type);
            cppdecl::Type cpp_base = cpp;
            if (cpp.modifiers.size() == 1 && (cpp.Is<cppdecl::Reference>() || cpp.Is<cppdecl::Pointer>()))
                cpp_base.RemoveModifier();
            cpp_base.RemoveQualifiers(cppdecl::CvQualifiers::const_);
            const std::string cpp_base_str = cppdecl::ToCode(cpp_base, {});

            // Owned objects.
            if (pointee_type && pointee_type->has_destroy && !is_const && (cpp.modifiers.empty() || cpp_base_str.starts_with("std::unique_ptr<")))
            {
                out.rust_type = "crate::Owned<" + pointee_path + ">";
                out.convert = "unsafe {crate::Owned::from_raw(__ret as *mut " + pointee_path + ")}";
                return out;
            }

            if (!can_elide_lifetime)
                return out;

            if (cpp.modifiers.size() == 1 && cpp.Is<cppdecl::Reference>())
            {
                out.rust_type = (is_const ? "&" : "&mut ") + pointee_path;
                out.convert = is_const ? "unsafe {&*(__ret as *const " + pointee_path + ")}" : "unsafe {&mut *(__ret as *mut " + pointee_path + ")}";
                return out;
            }
            if (cpp.modifiers.size() == 1 && cpp.Is<cppdecl::Pointer>())
            {
                out.rust_type = "Option<" + std::string(is_const ? "&" : "&mut ") + pointee_path + ">";
                out.convert = is_const ? "unsafe {(__ret as *const " + pointee_path + ").as_ref()}" : "unsafe {(__ret as *mut " + pointee_path + ").as_mut()}";
                return out;
            }
        }

        out.is_raw = ct.Is<cppdecl::Pointer>() && !ct.Is<cppdecl::Function>(1);
        return out;
    }

    bool Generator::EmitFuncLike(std::string &out_module, const CInterop::BasicFuncLike &func, const CInterop::BasicClassMethodLike *method_like, const TypeInfo *this_type, std::string rust_name, int indent)
    {
        (void)method_like;

        std::vector<ParamStrings> params;
        std::string receiver;
        std::string receiver_args;
        int num_ref_inputs = 0;
        bool is_unsafe = false;
        bool is_raw = false;
        constexpr std::size_t npos = std::size_t(-1);
        std::vector<std::size_t> param_indices(func.params.size(), npos); // The index in the description -> the index in `params`.
        for (std::size_t i = 0; i < func.params.size(); i++)
        {
            auto mapped = MapParam(func.params[i], this_type);
            if (!mapped)
            {
                num_funcs_skipped++;
                skipped_funcs.push_back(func.c_name);
                return false;
            }
            if (mapped->skip)
                continue;
            if (mapped->is_receiver)
            {
                receiver = mapped->receiver;
                receiver_args = mapped->args.front();
                continue;
            }
            num_ref_inputs += mapped->num_ref_inputs;
            is_unsafe |= mapped->is_unsafe;
            is_raw |= mapped->is_raw;
            param_indices[i] = params.size();
            params.push_back(std::move(*mapped));
        }

        // The `[[clang::lifetimebound]]` annotations tell what the returned reference borrows from.
        // Without them we rely on the elision rules, which tie it to `self` or to the only reference parameter.
        auto IsRefType = [](std::string_view type) {return type.starts_with("&") || type.starts_with("Option<&");};
        bool lifetime_self = false;
        std::set<std::size_t> lifetime_params;
        for (const auto &rel : func.lifetimes.relations)
        {
            if (!std::holds_alternative<LifetimeRelation::ReturnValue>(rel.holder))
                continue;
            if (std::holds_alternative<LifetimeRelation::ThisObject>(rel.target))
            {
                if (!receiver.empty())
                    lifetime_self = true;
            }
            else if (auto target = std::get_if<LifetimeRelation::Param>(&rel.target))
            {
                if (target->index < 0 || std::size_t(target->index) >= param_indices.size() || param_indices[std::size_t(target->index)] == npos)
                    continue;
                const ParamStrings &p = params[param_indices[std::size_t(target->index)]];
                if (p.rust_params.size() == 1 && IsRefType(p.rust_params.front().second))
                    lifetime_params.insert(param_indices[std::size_t(target->index)]);
            }
        }
        const bool have_lifetimes = lifetime_self || !lifetime_params.empty();

        const bool can_elide = !receiver.empty() || num_ref_inputs == 1;
        auto ret = MapReturn(func.ret, can_elide || have_lifetimes);
        if (!ret)
        {
            num_funcs_skipped++;
            skipped_funcs.push_back(func.c_name);
            return false;
        }
        is_raw |= ret->is_raw;
        if (is_raw)
            num_funcs_raw++;

        const bool explicit_lifetime = have_lifetimes && IsRefType(ret->rust_type);
        if (explicit_lifetime)
        {
            auto AddLifetime = [](std::string &type)
            {
                std::size_t pos = type.starts_with("Option<") ? 7 : 0;
                type.insert(pos + 1, "'a ");
            };
            AddLifetime(ret->rust_type);
            for (std::size_t i : lifetime_params)
                AddLifetime(params[i].rust_params.front().second);
            if (lifetime_self)
                receiver = receiver == "&self" ? "&'a self" : "&'a mut self";
        }

        std::string out;
        std::string extra_doc = "Calls `" + func.c_name + "()`.";
        if (is_raw)
            extra_doc += " Some types are raw C types, see the C bindings for the details.";
        out += MakeDocComment(func.comment, 0, extra_doc);
        if (!func.comment_extra_lifetimes.c_style.empty())
            out += MakeDocComment(func.comment_extra_lifetimes, 0);
        if (func.is_deprecated)
            out += "#[deprecated(note = \"" + EscapeRustString(*func.is_deprecated) + "\")]\n";

        out += "pub ";
        if (is_unsafe)
            out += "unsafe ";
        out += "fn " + rust_name + (explicit_lifetime ? "<'a>" : "") + "(";
        bool first = true;
        if (!receiver.empty())
        {
            out += receiver;
            first = false;
        }
        for (const auto &param : params)
        {
            for (const auto &[param_name, param_type] : param.rust_params)
            {
                if (!std::exchange(first, false))
                    out += ", ";
                out += param_name + ": " + param_type;
            }
        }
        out += ")";
        if (ret->rust_type != "()")
            out += " -> " + ret->rust_type;
        out += "\n{\n";

        std::string body;
        for (const auto &param : params)
            body += param.pre;
        const bool handle_exceptions = c_desc.exception_handling_enabled && !func.is_noexcept;
        if (handle_exceptions)
            body += "crate::__init_exceptions();\n";
        body += "let __ret = unsafe {crate::ffi::" + RustIdent(func.c_name) + "(";
        first = true;
        if (!receiver_args.empty())
        {
            body += receiver_args;
            first = false;
        }
        for (const auto &param : params)
        {
            for (const auto &arg : param.args)
            {
                if (!std::exchange(first, false))
                    body += ", ";
                body += arg;
            }
        }
        body += ")};\n";
        if (handle_exceptions)
            body += "crate::__check_exception();\n";
        body += ret->convert + "\n";
        out += Indent(body, 1);
        out += "}\n\n";

        out_module += Indent(out, indent);
        return true;
    }

    void Generator::EmitClasses()
    {
        for (auto &[cpp_name, info] : types_by_cpp_name)
        {
            if (!info.class_desc)
                continue;
            const auto &cl = *info.class_desc;
            std::string &out = info.file->body;
            const std::string ffi_name = "crate::ffi::" + RustIdent(info.c_name);
            const std::string &def_name = info.file_unqual;
            ReExportType(info);

            if (info.IsExposedStruct())
            {
                out += MakeDocComment(cl.comment, 0, "Generated from struct `" + cpp_name + "`. The fields are accessed directly.");
                out += "pub use " + ffi_name + " as " + def_name + ";\n\n";
            }
            else
            {
                std::string note = "Generated from class `" + cpp_name + "`.";
                if (info.has_destroy)
                    note += " Heap-allocated instances are held in `Owned<" + info.rust_unqual + ">`.";
                else
                    note += " Can't be created from Rust, only references to it are used.";
                out += MakeDocComment(cl.comment, 0, note);
                out += "#[repr(transparent)]\npub struct " + def_name + "(" + ffi_name + ");\n\n";
                if (info.has_destroy)
                {
                    out += "unsafe impl crate::CppClass for " + def_name + "\n{\n";
                    out += "    unsafe fn destroy(ptr: *mut Self) {crate::ffi::" + RustIdent(info.c_name + "_Destroy") + "(ptr as *const " + ffi_name + ")}\n}\n\n";
                }
            }

            // Methods.
            std::string methods;
            std::set<std::string> used_names;
            const std::string class_prefix = info.c_name + "_";

            // Regular methods that aren't overloaded get their C++ names. Overloaded ones get the disambiguated C names.
            std::map<std::string, int> simple_name_counts;
            for (const auto &method : cl.methods)
            {
                if (auto reg = std::get_if<CInterop::MethodKinds::Regular>(&method.var))
                    simple_name_counts[SnakeCase(reg->name)]++;
            }

            auto MethodRustName = [&](const CInterop::ClassMethod &method) -> std::string
            {
                if (auto reg = std::get_if<CInterop::MethodKinds::Regular>(&method.var))
                {
                    std::string simple = SnakeCase(reg->name);
                    if (simple_name_counts[simple] == 1)
                        return RustIdent(simple);
                }

                std::string suffix;
                bool is_class_prefixed = method.c_name.starts_with(class_prefix);
                if (is_class_prefixed)
                    suffix = method.c_name.substr(class_prefix.size());
                else
                {
                    suffix = method.c_name;
                    if (suffix.starts_with(c_desc.helpers_prefix))
                        suffix.erase(0, c_desc.helpers_prefix.size());
                    // Remove the class name from operator names.
                    if (auto pos = suffix.find(info.c_name); pos != std::string::npos)
                        suffix.erase(pos, info.c_name.size());
                }
                if (std::holds_alternative<CInterop::MethodKinds::Constructor>(method.var) && suffix == "DefaultConstruct")
                    return "new";
                std::string name = SnakeCase(suffix);
                if (!is_class_prefixed)
                    name = "op_" + name;
                while (name.ends_with('_'))
                    name.pop_back();
                return RustIdent(name);
            };

            for (const auto &method : cl.methods)
            {
                std::string rust_name = UniqueName(used_names, MethodRustName(method));
                std::size_t old_size = methods.size();
                if (!EmitFuncLike(methods, method, &method, &info, rust_name, 1))
                    continue;

                auto ctor = std::get_if<CInterop::MethodKinds::Constructor>(&method.var);
                if (ctor && ctor->is_copying_ctor && info.has_destroy && !info.copy_ctor_mapped)
                {
                    // Check that this got the expected `(other: &Self) -> Owned<Self>` signature.
                    std::string_view emitted(methods);
                    emitted.remove_prefix(old_size);
                    std::string sig_head = "pub fn " + rust_name + "(";
                    std::string sig_tail = ": &" + info.rust_path + ") -> crate::Owned<" + info.rust_path + ">\n";
                    std::size_t head_pos = emitted.find(sig_head);
                    std::size_t tail_pos = head_pos == std::string_view::npos ? std::string_view::npos : emitted.find(sig_tail, head_pos);
                    if (tail_pos != std::string_view::npos && emitted.substr(head_pos, tail_pos - head_pos).find(',') == std::string_view::npos)
                    {
                        info.copy_ctor_mapped = true;
                        info.copy_ctor_rust_name = rust_name;
                    }
                }
            }

            for (const auto &field : cl.fields)
            {
                if (info.IsExposedStruct() && !field.is_static)
                    continue;
                std::string field_name = SnakeCase(field.name);
                if (field.getter_const)
                    EmitFuncLike(methods, *field.getter_const, &*field.getter_const, &info, UniqueName(used_names, RustIdent(field_name)), 1);
                if (field.getter_mutable)
                    EmitFuncLike(methods, *field.getter_mutable, &*field.getter_mutable, &info, UniqueName(used_names, RustIdent(field_name + "_mut")), 1);
                if (field.setter)
                    EmitFuncLike(methods, *field.setter, &*field.setter, &info, UniqueName(used_names, RustIdent("set_" + field_name)), 1);
                if (field.getter_array_size)
                    EmitFuncLike(methods, *field.getter_array_size, &*field.getter_array_size, &info, UniqueName(used_names, RustIdent(field_name + "_size")), 1);
            }

            std::string extra;
            EmitCasts(info, methods, used_names, extra);
            if (cl.std_function)
                EmitStdFunction(info, methods, used_names);

            if (!methods.empty())
            {
                out += "impl " + def_name + "\n{\n" + methods + "}\n\n";
            }
            out += extra;

            if (info.copy_ctor_mapped)
            {
                out += "unsafe impl crate::CppCopy for " + def_name + "\n{\n";
                out += "    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::" + info.copy_ctor_rust_name + "(&*ptr).into_raw()}\n}\n\n";
            }

            // Conveniences for `std::string`.
            if (cpp_name == "std::string")
            {
                bool have_data = false, have_size = false;
                for (const auto &method : cl.methods)
                {
                    have_data |= method.c_name == info.c_name + "_data";
                    have_size |= method.c_name == info.c_name + "_size";
                }
                if (have_data && have_size)
                {
                    out += "impl " + def_name + "\n{\n";
                    out += "    pub fn as_bytes(&self) -> &[u8]\n    {\n        unsafe {core::slice::from_raw_parts(crate::ffi::" + info.c_name + "_data(self as *const Self as *const " + ffi_name + ") as *const u8, crate::ffi::" + info.c_name + "_size(self as *const Self as *const " + ffi_name + "))}\n    }\n\n";
                    out += "    pub fn to_str(&self) -> Result<&str, core::str::Utf8Error> {core::str::from_utf8(self.as_bytes())}\n}\n\n";
                    out += "impl core::fmt::Display for " + def_name + "\n{\n    fn fmt(&self, f: &mut core::fmt::Formatter<'_>) -> core::fmt::Result {f.write_str(&String::from_utf8_lossy(self.as_bytes()))}\n}\n\n";
                    out += "impl core::fmt::Debug for " + def_name + "\n{\n    fn fmt(&self, f: &mut core::fmt::Formatter<'_>) -> core::fmt::Result {core::fmt::Debug::fmt(&*String::from_utf8_lossy(self.as_bytes()), f)}\n}\n\n";
                }
            }
        }
    }

    std::vector<std::string> Generator::FuncNamespaceParts(const CInterop::Function &func, std::string *simple_name) const
    {
        std::string qual_name;
        if (auto reg = std::get_if<CInterop::FuncKinds::Regular>(&func.var))
            qual_name = reg->name;
        else if (auto op = std::get_if<CInterop::FuncKinds::Operator>(&func.var))
            qual_name = op->name;

        std::vector<std::string> ns_parts;
        std::string_view view = qual_name;
        auto parsed = cppdecl::ParseQualifiedName(view);
        if (auto name = std::get_if<cppdecl::QualifiedName>(&parsed); name && view.empty())
        {
            for (std::size_t i = 0; i + 1 < name->parts.size(); i++)
                ns_parts.push_back(PartToString(name->parts[i]));
            if (simple_name && std::holds_alternative<CInterop::FuncKinds::Regular>(func.var) && !name->parts.empty())
                *simple_name = SnakeCase(PartToString(name->parts.back()));
        }
        return ns_parts;
    }

    void Generator::EmitCasts(TypeInfo &info, std::string &methods, std::set<std::string> &used_names, std::string &extra)
    {
        const auto &inh = info.class_desc->inheritance_info;
        const std::string self_ffi = "crate::ffi::" + RustIdent(info.c_name);
        const std::string &def_name = info.file_unqual;

        // This mirrors what the C generator emits: casts to all the bases up to the first ambiguous one,
        //   static downcasts from the non-virtual bases, dynamic downcasts from the polymorphic bases.
        for (const std::string &base_cpp : inh.bases_indirect.Vec())
        {
            const auto kind = inh.bases_indirect.Map().at(base_cpp);
            if (kind == CInterop::InheritanceInfo::Kind::ambiguous)
                break;
            auto iter = types_by_cpp_name.find(base_cpp);
            if (iter == types_by_cpp_name.end() || !iter->second.class_desc)
                continue;
            const TypeInfo &base = iter->second;
            const std::string base_ffi = "crate::ffi::" + RustIdent(base.c_name);
            const std::string base_snake = SnakeCase(base.rust_unqual);

            auto Decl = [&](const std::string &c_name, const std::string &from, const std::string &to, bool is_const)
            {
                info.file->ffi_funcs += "    pub fn " + RustIdent(c_name) + "(object: " + (is_const ? "*const " : "*mut ") + from + ") -> " + (is_const ? "*const " : "*mut ") + to + ";\n";
            };

            std::string upcast_names[2];
            for (bool is_const : {true, false})
            {
                const std::string c_name = info.c_name + (is_const ? "_UpcastTo_" : "_MutableUpcastTo_") + base.c_name;
                Decl(c_name, self_ffi, base_ffi, is_const);
                std::string name = UniqueName(used_names, RustIdent("upcast_to_" + base_snake + (is_const ? "" : "_mut")));
                upcast_names[is_const] = name;
                methods += "    /// Upcasts to the base class `" + base.cpp_name + "`.\n    ///\n    /// Calls `" + c_name + "()`.\n";
                if (is_const)
                    methods += "    pub fn " + name + "(&self) -> &" + base.rust_path + "\n    {\n        unsafe {&*(crate::ffi::" + RustIdent(c_name) + "(self as *const Self as *const " + self_ffi + ") as *const " + base.rust_path + ")}\n    }\n\n";
                else
                    methods += "    pub fn " + name + "(&mut self) -> &mut " + base.rust_path + "\n    {\n        unsafe {&mut *(crate::ffi::" + RustIdent(c_name) + "(self as *mut Self as *mut " + self_ffi + ") as *mut " + base.rust_path + ")}\n    }\n\n";
            }
            extra += "impl AsRef<" + base.rust_path + "> for " + def_name + "\n{\n    fn as_ref(&self) -> &" + base.rust_path + " {self." + upcast_names[true] + "()}\n}\n\n";
            extra += "impl AsMut<" + base.rust_path + "> for " + def_name + "\n{\n    fn as_mut(&mut self) -> &mut " + base.rust_path + " {self." + upcast_names[false] + "()}\n}\n\n";

            if (kind == CInterop::InheritanceInfo::Kind::non_virt)
            {
                for (bool is_const : {true, false})
                {
                    const std::string c_name = info.c_name + (is_const ? "_StaticDowncastFrom_" : "_MutableStaticDowncastFrom_") + base.c_name;
                    Decl(c_name, base_ffi, self_ffi, is_const);
                    std::string name = UniqueName(used_names, RustIdent("static_downcast_from_" + base_snake + (is_const ? "" : "_mut")));
                    methods += "    /// Static downcast from the base class `" + base.cpp_name + "`.\n    ///\n    /// Calls `" + c_name + "()`. Undefined behavior if the object isn't actually a `" + info.rust_unqual + "`.\n";
                    if (is_const)
                        methods += "    pub unsafe fn " + name + "(object: &" + base.rust_path + ") -> &Self\n    {\n        &*(crate::ffi::" + RustIdent(c_name) + "(object as *const " + base.rust_path + " as *const " + base_ffi + ") as *const Self)\n    }\n\n";
                    else
                        methods += "    pub unsafe fn " + name + "(object: &mut " + base.rust_path + ") -> &mut Self\n    {\n        &mut *(crate::ffi::" + RustIdent(c_name) + "(object as *mut " + base.rust_path + " as *mut " + base_ffi + ") as *mut Self)\n    }\n\n";
                }
            }

            if (base.class_desc->is_polymorphic)
            {
                for (bool is_const : {true, false})
                {
                    const std::string c_name = info.c_name + (is_const ? "_DynamicDowncastFrom_" : "_MutableDynamicDowncastFrom_") + base.c_name;
                    Decl(c_name, base_ffi, self_ffi, is_const);
                    Decl(info.c_name + (is_const ? "_DynamicDowncastFromOrFail_" : "_MutableDynamicDowncastFromOrFail_") + base.c_name, base_ffi, self_ffi, is_const);
                    std::string name = UniqueName(used_names, RustIdent("dynamic_downcast_from_" + base_snake + (is_const ? "" : "_mut")));
                    methods += "    /// Dynamic downcast from the base class `" + base.cpp_name + "`. Returns `None` if the object isn't actually a `" + info.rust_unqual + "`.\n    ///\n    /// Calls `" + c_name + "()`.\n";
                    if (is_const)
                        methods += "    pub fn " + name + "(object: &" + base.rust_path + ") -> Option<&Self>\n    {\n        unsafe {(crate::ffi::" + RustIdent(c_name) + "(object as *const " + base.rust_path + " as *const " + base_ffi + ") as *const Self).as_ref()}\n    }\n\n";
                    else
                        methods += "    pub fn " + name + "(object: &mut " + base.rust_path + ") -> Option<&mut Self>\n    {\n        unsafe {(crate::ffi::" + RustIdent(c_name) + "(object as *mut " + base.rust_path + " as *mut " + base_ffi + ") as *mut Self).as_mut()}\n    }\n\n";
                }
            }
        }
    }

    void Generator::EmitStdFunction(TypeInfo &info, std::string &methods, std::set<std::string> &used_names)
    {
        const auto &sf = *info.class_desc->std_function;
        const std::string self_ffi = "crate::ffi::" + RustIdent(info.c_name);
        const std::string c_void = "core::ffi::c_void";
        auto stateless = CTypeToRust(sf.stateless_func_c_type);
        auto stateful = CTypeToRust(sf.stateful_func_c_type);
        if (!stateless || !stateful)
            return;

        // The raw declarations.
        const std::string postcall_type = "Option<unsafe extern \"C\" fn(*mut " + c_void + ", *mut " + c_void + ")>";
        const std::string userdata_cb_type = "Option<unsafe extern \"C\" fn(*mut *mut " + c_void + ", *mut " + c_void + ")>";
        std::string &ffi = info.file->ffi_funcs;
        ffi += "    pub fn " + RustIdent(info.c_name + "_ConstructStateless") + "(func: " + *stateless + ") -> *mut " + self_ffi + ";\n";
        ffi += "    pub fn " + RustIdent(info.c_name + "_Assign") + "(_this: *mut " + self_ffi + ", func: " + *stateless + ");\n";
        ffi += "    pub fn " + RustIdent(info.c_name + "_ConstructEx") + "(func: " + *stateful + ", userdata: *mut " + c_void + ", postcall_callback: " + postcall_type + ", userdata_callback: " + userdata_cb_type + ") -> *mut " + self_ffi + ";\n";
        ffi += "    pub fn " + RustIdent(info.c_name + "_AssignEx") + "(_this: *mut " + self_ffi + ", func: " + *stateful + ", userdata: *mut " + c_void + ", postcall_callback: " + postcall_type + ", userdata_callback: " + userdata_cb_type + ");\n";

        // The closure support only covers the callback signatures we understand: scalars, enums and exposed structs by value,
        //   references to classes (which the C callback receives as pointers), and classes returned by value.
        const cppdecl::Type &type = ParseTypeOrThrow(sf.stateful_func_c_type);
        const cppdecl::Function *fn = type.As<cppdecl::Function>(1);
        if (!fn || fn->params.size() < 2)
            return;
        cppdecl::Type ret_c = type;
        ret_c.modifiers.erase(ret_c.modifiers.begin(), ret_c.modifiers.begin() + 2);

        struct Arg
        {
            std::string c_name; // The parameter name in the C callback.
            std::string c_type; // Its type as spelled in `ffi`.
            std::string closure_type;
            std::string convert; // An expression in terms of `c_name`.
        };
        std::vector<Arg> args;
        std::string ret_closure_type;
        std::string ret_convert; // Statements, `__ret` holds the closure result.
        std::string ret_c_type = CTypeToRust(ret_c, 0, true).value_or("");
        bool returns_class = false;

        const std::string pass_by = c_desc.helpers_prefix + "PassBy";
        for (std::size_t i = 0; i + 2 < fn->params.size(); i++)
        {
            const auto &param = fn->params[i];
            const std::string name = param.name.AsSingleWord().empty() ? "_" + std::to_string(i + 1) : std::string(param.name.AsSingleWord());
            auto ffi_type = CTypeToRust(param.type);
            if (!ffi_type)
                return;

            if (name.starts_with("_return"))
            {
                // Output parameters for the return value. We only understand a class returned by value.
                if (name != "_return_pass_by" || i != 0 || param.type.modifiers.size() != 1 || !param.type.Is<cppdecl::Pointer>() || cppdecl::ToCode(param.type.simple_type.name, {}) != pass_by)
                    return;
                if (ret_c.modifiers.size() != 1 || !ret_c.Is<cppdecl::Pointer>() || ret_c.IsConst(1))
                    return;
                auto iter = types_by_c_name.find(cppdecl::ToCode(ret_c.simple_type.name, {}));
                if (iter == types_by_c_name.end() || !iter->second->has_destroy)
                    return;
                returns_class = true;
                ret_closure_type = "crate::Owned<" + iter->second->rust_path + ">";
                ret_convert = "*" + name + " = crate::ffi::" + pass_by + "_MoveAndDestroy;\n__ret.into_raw() as *mut " + *CTypeToRust(ret_c, 1, false);
                args.push_back({name, *ffi_type, "", ""});
                continue;
            }

            Arg arg{name, *ffi_type, "", ""};
            if (param.type.modifiers.empty())
            {
                auto iter = types_by_c_name.find(cppdecl::ToCode(param.type.simple_type.name, {}));
                if (iter != types_by_c_name.end() && !iter->second->IsEnum() && !iter->second->IsExposedStruct())
                    return;
                arg.closure_type = iter != types_by_c_name.end() ? iter->second->rust_path : *ffi_type;
                arg.convert = name;
            }
            else if (param.type.modifiers.size() == 1 && param.type.Is<cppdecl::Pointer>())
            {
                const bool is_const = param.type.IsConst(1);
                std::string pointee_name = cppdecl::ToCode(param.type.simple_type.name, {});
                auto pointee_ffi = CTypeToRust(param.type, 1, false);
                if (!pointee_ffi || pointee_name == "void")
                    return;
                auto iter = types_by_c_name.find(pointee_name);
                std::string pointee = iter != types_by_c_name.end() && !iter->second->IsEnum() && !iter->second->IsExposedStruct() ? iter->second->rust_path : *pointee_ffi;
                if (iter == types_by_c_name.end() && param.type.simple_type.name.AsSingleWord().empty())
                    return;
                arg.closure_type = (is_const ? "&" : "&mut ") + pointee;
                arg.convert = is_const ? "&*(" + name + " as *const " + pointee + ")" : "&mut *(" + name + " as *mut " + pointee + ")";
            }
            else
            {
                return;
            }
            args.push_back(std::move(arg));
        }

        if (!returns_class)
        {
            if (ret_c_type.empty())
                return;
            if (ret_c.modifiers.empty())
            {
                auto iter = types_by_c_name.find(cppdecl::ToCode(ret_c.simple_type.name, {}));
                if (iter != types_by_c_name.end() && !iter->second->IsEnum() && !iter->second->IsExposedStruct())
                    return;
                ret_closure_type = ret_c_type == "()" ? "()" : iter != types_by_c_name.end() ? iter->second->rust_path : ret_c_type;
                ret_convert = "__ret";
            }
            else
            {
                return;
            }
        }

        // The closure signature.
        std::string closure_sig = "Fn(";
        for (bool first = true; const Arg &arg : args)
        {
            if (arg.closure_type.empty())
                continue;
            if (!std::exchange(first, false))
                closure_sig += ", ";
            closure_sig += arg.closure_type;
        }
        closure_sig += ") -> " + ret_closure_type;

        // The C callback signature.
        std::string c_sig;
        for (const Arg &arg : args)
            c_sig += arg.c_name + ": " + arg.c_type + ", ";
        c_sig += "_userdata: *mut " + c_void + ", _cleanup_value: *mut *mut " + c_void + ")";
        if (ret_c_type != "()")
            c_sig += " -> " + ret_c_type;

        std::string call_args;
        for (bool first = true; const Arg &arg : args)
        {
            if (arg.closure_type.empty())
                continue;
            if (!std::exchange(first, false))
                call_args += ", ";
            call_args += arg.convert;
        }

        // The trampolines go next to the class, since the generic inner functions can't see the outer type parameters anyway.
        const std::string prefix = "__" + info.file_unqual;
        std::string &out = info.file->body;
        out += "unsafe extern \"C\" fn " + prefix + "_call<F: " + closure_sig + ">(" + c_sig + "\n{\n";
        out += "    let func = &*(_userdata as *const F);\n";
        out += "    let __ret = func(" + call_args + ");\n";
        out += Indent(ret_convert + "\n", 1);
        out += "}\n\n";
        out += "unsafe extern \"C\" fn " + prefix + "_userdata<F>(_this_userdata: *mut *mut " + c_void + ", _other_userdata: *mut " + c_void + ")\n{\n";
        out += "    if !(*_this_userdata).is_null()\n    {\n        drop(std::sync::Arc::from_raw(*_this_userdata as *const F));\n        *_this_userdata = core::ptr::null_mut();\n    }\n";
        out += "    if !_other_userdata.is_null()\n    {\n        std::sync::Arc::increment_strong_count(_other_userdata as *const F);\n        *_this_userdata = _other_userdata;\n    }\n";
        out += "}\n\n";

        const std::string bounds = closure_sig + " + Send + Sync + 'static";
        const std::string callbacks = "Some(" + prefix + "_call::<F>), std::sync::Arc::into_raw(std::sync::Arc::new(func)) as *mut " + c_void + ", None, Some(" + prefix + "_userdata::<F>)";
        std::string name = UniqueName(used_names, "from_fn");
        methods += "    /// Constructs an instance holding a Rust closure. The copies of the instance share the closure.\n    ///\n    /// Calls `" + info.c_name + "_ConstructEx()`.\n";
        methods += "    pub fn " + name + "<F: " + bounds + ">(func: F) -> crate::Owned<" + info.rust_path + ">\n    {\n";
        methods += "        let __ret = unsafe {crate::ffi::" + RustIdent(info.c_name + "_ConstructEx") + "(" + callbacks + ")};\n";
        methods += "        unsafe {crate::Owned::from_raw(__ret as *mut " + info.rust_path + ")}\n    }\n\n";
        name = UniqueName(used_names, "assign_fn");
        methods += "    /// Replaces the stored callable with a Rust closure.\n    ///\n    /// Calls `" + info.c_name + "_AssignEx()`.\n";
        methods += "    pub fn " + name + "<F: " + bounds + ">(&mut self, func: F)\n    {\n";
        methods += "        unsafe {crate::ffi::" + RustIdent(info.c_name + "_AssignEx") + "(self as *mut Self as *mut " + self_ffi + ", " + callbacks + ")};\n    }\n\n";
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
        std::map<std::pair<Module *, std::string>, int> simple_name_counts;

        for (const auto &func : c_desc.functions)
        {
            FuncInfo &info = infos.emplace_back();
            std::vector<std::string> ns_parts = FuncNamespaceParts(func, &info.simple_name);
            info.module = &GetModuleForNamespace(ns_parts.empty() ? forced_namespace : ns_parts);
            if (!info.simple_name.empty())
                simple_name_counts[{info.module, info.simple_name}]++;

            // Derive the name from the C name, which is unique.
            std::string suffix = func.c_name;
            std::string ns_c_prefix = JoinNameParts(ns_parts, "_") + "_";
            bool is_operator = std::holds_alternative<CInterop::FuncKinds::Operator>(func.var);
            if (!ns_parts.empty() && suffix.starts_with(ns_c_prefix))
                suffix.erase(0, ns_c_prefix.size());
            else if (suffix.starts_with(c_desc.helpers_prefix))
                suffix.erase(0, c_desc.helpers_prefix.size());
            info.c_derived_name = SnakeCase(suffix);
            if (is_operator)
                info.c_derived_name = "op_" + info.c_derived_name;
        }

        // Functions that aren't overloaded get their C++ names. Overloaded ones get the disambiguated C names.
        for (std::size_t i = 0; i < c_desc.functions.size(); i++)
        {
            const FuncInfo &info = infos[i];
            std::string name = info.c_derived_name;
            if (!info.simple_name.empty() && simple_name_counts[{info.module, info.simple_name}] == 1)
                name = info.simple_name;
            name = UniqueName(info.module->used_names, RustIdent(name));

            FileModule &file = GetFileModule(c_desc.functions[i].output_file);
            std::string file_name = UniqueName(file.used_names, name);
            if (!EmitFuncLike(file.body, c_desc.functions[i], nullptr, nullptr, file_name, 0))
                continue;
            info.module->body += "pub use " + file.rust_path + "::" + file_name + (file_name == name ? "" : " as " + name) + ";\n";
        }
    }

    void Generator::EmitModuleFiles()
    {
        // The directory tree of the file modules.
        struct Dir
        {
            std::map<std::string, std::pair<std::string, Dir>> dirs; // Identifier -> original name and the subdirectory.
            std::map<std::string, std::string> files; // Identifier -> original name.
        };
        Dir tree;
        for (const auto &[relative_name, file] : file_modules)
        {
            Dir *dir = &tree;
            std::string_view str = relative_name;
            for (std::size_t i = 0; i < file.idents.size(); i++)
            {
                std::size_t sep = str.find('/');
                std::string orig(str.substr(0, sep));
                str = sep == std::string_view::npos ? std::string_view{} : str.substr(sep + 1);
                if (i + 1 == file.idents.size())
                    dir->files[file.idents[i]] = orig;
                else
                    dir = &dir->dirs.try_emplace(file.idents[i], orig, Dir{}).first->second.second;
            }
        }

        // The `mod` declarations for one directory, for the safe layer or for `ffi`.
        auto ModDecls = [](const Dir &dir, bool is_ffi)
        {
            std::string ret;
            for (const auto &[ident, elem] : dir.dirs)
            {
                if (ident != elem.first)
                    ret += "#[path = \"" + elem.first + "/mod.rs\"]\n";
                ret += "pub mod " + ident + ";\n";
                if (is_ffi)
                    ret += "pub use self::" + ident + "::*;\n";
            }
            for (const auto &[ident, orig] : dir.files)
            {
                if (ident != orig)
                    ret += "#[path = \"" + orig + ".rs\"]\n";
                ret += "pub mod " + ident + ";\n";
                if (is_ffi)
                    ret += "pub use self::" + ident + "::*;\n";
            }
            return ret;
        };

        // Writes the `mod.rs` files of the subdirectories, recursively.
        auto EmitDirs = [&](auto &self, const Dir &dir, const std::string &path, bool is_ffi) -> void
        {
            for (const auto &[ident, elem] : dir.dirs)
            {
                std::string sub_path = path + elem.first + "/";
                output_files[sub_path + "mod.rs"] = ModDecls(elem.second, is_ffi);
                self(self, elem.second, sub_path, is_ffi);
            }
        };

        // Within a namespace module, a nested namespace can't share a name with a type or a function.
        auto CheckModule = [](auto &self, const Module &module) -> void
        {
            for (const auto &[name, child] : module.children)
            {
                if (module.used_names.contains(name))
                    throw std::runtime_error("The nested namespace `" + child.rust_path + "` clashes with a type or function of the same name in `" + module.rust_path + "`. Rename one of them in C++ or adjust `--force-namespace`.");
                self(self, child);
            }
        };
        CheckModule(CheckModule, root);

        std::string &lib = output_files["lib.rs"];
        lib += "//! The `ffi` module holds the raw C declarations. The definitions of the safe wrappers mirror the C file hierarchy,\n";
        lib += "//! and the modules named after the C++ namespaces re-export them.\n";
        lib += "#![allow(non_camel_case_types, non_snake_case, non_upper_case_globals, dead_code, deprecated, unused_unsafe, unused_variables, unused_imports, clippy::all)]\n\n";
        lib += "pub mod ffi;\n";
        lib += ModDecls(tree, false);
        lib += "\n";
        lib += root.body;
        EmitDirs(EmitDirs, tree, "", false);

        // The file modules.
        for (const auto &[relative_name, file] : file_modules)
        {
            std::string &out = output_files[relative_name + ".rs"];
            out += file.body;

            std::string &ffi = output_files["ffi/" + relative_name + ".rs"];
            ffi += file.ffi_types;
            if (!file.ffi_funcs.empty())
            {
                ffi += LinkAttrs(file.group);
                ffi += "unsafe extern \"C\"\n{\n" + file.ffi_funcs + "}\n";
            }
        }

        std::string &ffi_mod = output_files["ffi/mod.rs"];
        ffi_mod += "//! The raw declarations of the C bindings.\n";
        ffi_mod += "//! Everything is re-exported here, so use `crate::ffi::Name` and not the per-file modules.\n";
        ffi_mod += "#![allow(improper_ctypes)]\n\n";
        ffi_mod += "pub mod __mrbind_helpers;\npub use self::__mrbind_helpers::*;\n";
        ffi_mod += ModDecls(tree, true);
        EmitDirs(EmitDirs, tree, "ffi/", true);

        // The namespace modules, nested inline.
        auto EmitModule = [&](auto &self, const Module &module, int indent) -> std::string
        {
            std::string ret = Indent(module.body, indent);
            for (const auto &[name, child] : module.children)
            {
                ret += Indent("pub mod " + name + "\n{\n", indent);
                ret += self(self, child, indent + 1);
                ret += Indent("}\n\n", indent);
            }
            return ret;
        };
        for (const auto &[name, child] : root.children)
        {
            lib += "\npub mod " + name + "\n{\n";
            lib += EmitModule(EmitModule, child, 1);
            lib += "}\n";
        }
    }

    void Generator::Generate()
    {
        CollectTypes();
        AssignFileIdents();
        EmitFfi();
        EmitRuntime();
        EmitEnums();
        EmitClasses();
        EmitFreeFunctions();
        EmitModuleFiles();
    }
}
