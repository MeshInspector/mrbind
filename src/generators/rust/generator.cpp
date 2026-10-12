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
                if (word == "size_t" || word == "std::size_t") return "usize";
                if (word == "ptrdiff_t" || word == "std::ptrdiff_t") return "isize";
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

        if (auto ptr = type.As<cppdecl::Pointer>(i))
        {
            (void)ptr;
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
                info.module = &GetModuleForNamespace(ns_parts);
                info.rust_unqual = UniqueName(info.module->used_names, RustIdent(unqual));
            }
            info.rust_path = info.module->rust_path + "::" + info.rust_unqual;
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
        std::string &out = output_files["src/ffi.rs"];
        out += "//! Raw declarations of the C bindings. Generated by mrbind, do not edit.\n";
        out += "#![allow(non_camel_case_types, non_snake_case, non_upper_case_globals, dead_code, improper_ctypes, clippy::all)]\n\n";
        out += "use core::ffi::{c_char, c_int, c_void};\n";
        out += "use core::marker::{PhantomData, PhantomPinned};\n\n";

        const std::string pass_by = c_desc.helpers_prefix + "PassBy";
        out += "/// How an object is passed to a C function. Matches the C enum of the same name.\n";
        out += "pub type " + pass_by + " = c_int;\n";
        int i = 0;
        for (std::string_view name : {"DefaultConstruct", "Copy", "Move", "MoveAndDestroy", "DefaultArgument", "NoObject"})
            out += "pub const " + pass_by + "_" + std::string(name) + ": " + pass_by + " = " + std::to_string(i++) + ";\n";
        out += "\n";
        out += "pub type " + c_desc.helpers_prefix + "ExceptionHandlerFuncPtr = Option<unsafe extern \"C\" fn(messages: *const *const c_char, type_names: *const *const c_char, userdata: *mut c_void)>;\n\n";

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
                out += "#[repr(C)]\npub struct " + name + "\n{\n    _data: [u8; 0],\n    _marker: PhantomData<(*mut u8, PhantomPinned)>,\n}\n\n";
            }
        }

        // Functions, grouped by the library they come from.
        std::map<std::string, std::string> blocks;
        auto AddFunc = [&](const std::string &group, const CInterop::BasicFuncLike &func)
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
            blocks[group] += "    " + decl;
        };

        for (const auto &func : c_desc.functions)
            AddFunc(func.output_file.group, func);

        for (const auto &[cpp_name, info] : types_by_cpp_name)
        {
            if (!info.class_desc)
                continue;
            const auto &cl = *info.class_desc;
            for (const auto &method : cl.methods)
                AddFunc(cl.output_file.group, method);
            for (const auto &field : cl.fields)
            {
                const_cast<CInterop::ClassField &>(field).ForEachAccessor([&](const CInterop::ClassField::Accessor &accessor)
                {
                    AddFunc(cl.output_file.group, accessor);
                });
            }
            if (info.has_destroy)
                blocks[cl.output_file.group] += "    pub fn " + RustIdent(info.c_name + "_Destroy") + "(_this: *const " + RustIdent(info.c_name) + ");\n";
        }

        std::string &common = blocks[""];
        common += "    pub fn " + c_desc.helpers_prefix + "Free(ptr: *mut c_void);\n";
        common += "    pub fn " + c_desc.helpers_prefix + "FreeArray(ptr: *mut c_void);\n";
        if (c_desc.exception_handling_enabled)
            common += "    pub fn " + c_desc.helpers_prefix + "SetExceptionHandler(func: " + c_desc.helpers_prefix + "ExceptionHandlerFuncPtr, userdata: *mut c_void);\n";

        for (const auto &[group, body] : blocks)
        {
            auto lib_iter = imported_lib_names.find(group);
            if (lib_iter == imported_lib_names.end())
                throw std::runtime_error("No library name specified for the file group `" + group + "`, pass `--imported-split-lib-name " + group + " <name>`.");
            if (windows_raw_dylib)
            {
                out += "#[cfg_attr(windows, link(name = \"" + lib_iter->second + "\", kind = \"raw-dylib\"))]\n";
                out += "#[cfg_attr(not(windows), link(name = \"" + lib_iter->second + "\"))]\n";
            }
            else
            {
                out += "#[link(name = \"" + lib_iter->second + "\")]\n";
            }
            out += "unsafe extern \"C\"\n{\n" + body + "}\n\n";
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
            std::string &out = info.module->body;
            out += MakeDocComment(info.enum_desc->comment, 0, "Generated from enum `" + cpp_name + "`. The constants are associated constants of this type.");
            out += "pub use crate::ffi::" + RustIdent(info.c_name) + " as " + info.rust_unqual + ";\n\n";
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

    bool Generator::EmitFuncLike(Module &module, const CInterop::BasicFuncLike &func, const CInterop::BasicClassMethodLike *method_like, const TypeInfo *this_type, std::string rust_name, int indent)
    {
        (void)method_like;

        std::vector<ParamStrings> params;
        std::string receiver;
        int num_ref_inputs = 0;
        bool is_unsafe = false;
        bool is_raw = false;
        for (const auto &param : func.params)
        {
            auto mapped = MapParam(param, this_type);
            if (!mapped)
            {
                num_funcs_skipped++;
                skipped_funcs.push_back(func.c_name);
                return false;
            }
            if (mapped->skip)
                continue;
            if (mapped->is_receiver)
                receiver = mapped->receiver;
            num_ref_inputs += mapped->num_ref_inputs;
            is_unsafe |= mapped->is_unsafe;
            is_raw |= mapped->is_raw;
            params.push_back(std::move(*mapped));
        }

        const bool can_elide = !receiver.empty() || num_ref_inputs == 1;
        auto ret = MapReturn(func.ret, can_elide);
        if (!ret)
        {
            num_funcs_skipped++;
            skipped_funcs.push_back(func.c_name);
            return false;
        }
        is_raw |= ret->is_raw;
        if (is_raw)
            num_funcs_raw++;

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
        out += "fn " + rust_name + "(";
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

        module.body += Indent(out, indent);
        return true;
    }

    void Generator::EmitClasses()
    {
        for (auto &[cpp_name, info] : types_by_cpp_name)
        {
            if (!info.class_desc)
                continue;
            const auto &cl = *info.class_desc;
            std::string &out = info.module->body;
            const std::string ffi_name = "crate::ffi::" + RustIdent(info.c_name);

            if (info.IsExposedStruct())
            {
                out += MakeDocComment(cl.comment, 0, "Generated from struct `" + cpp_name + "`. The fields are accessed directly.");
                out += "pub use " + ffi_name + " as " + info.rust_unqual + ";\n\n";
            }
            else
            {
                std::string note = "Generated from class `" + cpp_name + "`.";
                if (info.has_destroy)
                    note += " Heap-allocated instances are held in `Owned<" + info.rust_unqual + ">`.";
                else
                    note += " Can't be created from Rust, only references to it are used.";
                out += MakeDocComment(cl.comment, 0, note);
                out += "#[repr(transparent)]\npub struct " + info.rust_unqual + "(" + ffi_name + ");\n\n";
                if (info.has_destroy)
                {
                    out += "unsafe impl crate::CppClass for " + info.rust_unqual + "\n{\n";
                    out += "    unsafe fn destroy(ptr: *mut Self) {crate::ffi::" + RustIdent(info.c_name + "_Destroy") + "(ptr as *const " + ffi_name + ")}\n}\n\n";
                }
            }

            // Methods.
            Module methods_module;
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
                std::size_t old_size = methods_module.body.size();
                if (!EmitFuncLike(methods_module, method, &method, &info, rust_name, 1))
                    continue;

                auto ctor = std::get_if<CInterop::MethodKinds::Constructor>(&method.var);
                if (ctor && ctor->is_copying_ctor && info.has_destroy && !info.copy_ctor_mapped)
                {
                    // Check that this got the expected `(other: &Self) -> Owned<Self>` signature.
                    std::string_view emitted(methods_module.body);
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
                    EmitFuncLike(methods_module, *field.getter_const, &*field.getter_const, &info, UniqueName(used_names, RustIdent(field_name)), 1);
                if (field.getter_mutable)
                    EmitFuncLike(methods_module, *field.getter_mutable, &*field.getter_mutable, &info, UniqueName(used_names, RustIdent(field_name + "_mut")), 1);
                if (field.setter)
                    EmitFuncLike(methods_module, *field.setter, &*field.setter, &info, UniqueName(used_names, RustIdent("set_" + field_name)), 1);
                if (field.getter_array_size)
                    EmitFuncLike(methods_module, *field.getter_array_size, &*field.getter_array_size, &info, UniqueName(used_names, RustIdent(field_name + "_size")), 1);
            }

            if (!methods_module.body.empty())
            {
                out += "impl " + info.rust_unqual + "\n{\n" + methods_module.body + "}\n\n";
            }

            if (info.copy_ctor_mapped)
            {
                out += "unsafe impl crate::CppCopy for " + info.rust_unqual + "\n{\n";
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
                    out += "impl " + info.rust_unqual + "\n{\n";
                    out += "    pub fn as_bytes(&self) -> &[u8]\n    {\n        unsafe {core::slice::from_raw_parts(crate::ffi::" + info.c_name + "_data(self as *const Self as *const " + ffi_name + ") as *const u8, crate::ffi::" + info.c_name + "_size(self as *const Self as *const " + ffi_name + "))}\n    }\n\n";
                    out += "    pub fn to_str(&self) -> Result<&str, core::str::Utf8Error> {core::str::from_utf8(self.as_bytes())}\n}\n\n";
                    out += "impl core::fmt::Display for " + info.rust_unqual + "\n{\n    fn fmt(&self, f: &mut core::fmt::Formatter<'_>) -> core::fmt::Result {f.write_str(&String::from_utf8_lossy(self.as_bytes()))}\n}\n\n";
                    out += "impl core::fmt::Debug for " + info.rust_unqual + "\n{\n    fn fmt(&self, f: &mut core::fmt::Formatter<'_>) -> core::fmt::Result {core::fmt::Debug::fmt(&*String::from_utf8_lossy(self.as_bytes()), f)}\n}\n\n";
                }
            }
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
        std::map<std::pair<Module *, std::string>, int> simple_name_counts;

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
                        info.simple_name = SnakeCase(PartToString(name->parts.back()));
                }
            }
            info.module = &GetModuleForNamespace(ns_parts);
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
            EmitFuncLike(*info.module, c_desc.functions[i], nullptr, nullptr, name, 0);
        }
    }

    void Generator::EmitModuleFiles()
    {
        std::string &lib = output_files["src/lib.rs"];
        lib += "//! Rust bindings generated by mrbind. Do not edit.\n//!\n//! The `ffi` module holds the raw C declarations, everything else is a safe wrapper on top of them.\n";
        lib += "#![allow(non_camel_case_types, non_snake_case, non_upper_case_globals, dead_code, unused_unsafe, unused_variables, unused_imports, clippy::all)]\n\n";
        lib += "pub mod ffi;\n";
        for (const auto &[name, child] : root.children)
            lib += "pub mod " + name + ";\n";
        lib += "\n";
        lib += root.body;

        // Emits a module body with its nested modules, indented.
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
            std::string &file = output_files["src/" + name + ".rs"];
            file += "//! Generated by mrbind. Do not edit.\n\n";
            file += EmitModule(EmitModule, child, 0);
        }

        if (crate_name)
        {
            output_files["Cargo.toml"] =
                "[package]\n"
                "name = \"" + *crate_name + "\"\n"
                "version = \"0.1.0\"\n"
                "edition = \"2021\"\n"
                "rust-version = \"1.82\"\n"
                "build = \"build.rs\"\n"
                "\n"
                "[lib]\n"
                "path = \"src/lib.rs\"\n";

            // The environment variable that points to the directory with the C shared libraries.
            std::string env_var;
            for (char ch : *crate_name)
                env_var += (ch >= 'a' && ch <= 'z') ? char(ch - 'a' + 'A') : (ch == '-' ? '_' : ch);
            env_var += "_LIB_DIR";
            output_files["build.rs"] =
                "// Generated by mrbind. Points the linker to the C bindings library, if `" + env_var + "` is set.\n"
                "fn main()\n"
                "{\n"
                "    println!(\"cargo:rerun-if-env-changed=" + env_var + "\");\n"
                "    if let Ok(dir) = std::env::var(\"" + env_var + "\")\n"
                "    {\n"
                "        if dir.is_empty() {return;}\n"
                "        println!(\"cargo:rustc-link-search=native={dir}\");\n"
                "    }\n"
                "}\n";
        }
    }

    void Generator::Generate()
    {
        CollectTypes();
        EmitFfi();
        EmitRuntime();
        EmitEnums();
        EmitClasses();
        EmitFreeFunctions();
        EmitModuleFiles();
    }
}
