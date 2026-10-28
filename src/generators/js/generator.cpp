#include "generators/js/generator.h"

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

namespace mrbind::Js
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

        [[nodiscard]] std::string EscapeJsString(std::string_view str)
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


        // The relative path prefix from a module at `path` (relative to the output dir) to the output dir.
        [[nodiscard]] std::string ToRootPrefix(std::string_view path)
        {
            std::string ret;
            for (char ch : path)
            {
                if (ch == '/')
                    ret += "../";
            }
            return ret.empty() ? "./" : ret;
        }

        constexpr std::string_view kReservedInstance[] = {
            "constructor", "rawPointer", "isOwned", "delete", "release", "valueOrThrow", "toString", "valueOf", "toJSON", "__proto__", "__ptr", "__owner", "__state",
        };
        constexpr std::string_view kReservedStatic[] = {
            "name", "length", "prototype", "caller", "arguments", "__ctor", "__destroy", "__stub", "__trampoline", "SIZE", "ALIGNMENT",
        };
    }

    std::string JsIdent(std::string str)
    {
        static const std::set<std::string_view> keywords = {
            "await", "break", "case", "catch", "class", "const", "continue", "debugger", "default", "delete", "do", "else", "enum", "export", "extends",
            "false", "finally", "for", "function", "if", "import", "in", "instanceof", "new", "null", "return", "super", "switch", "this", "throw",
            "true", "try", "typeof", "var", "void", "while", "with", "yield", "let", "static", "implements", "interface", "package", "private",
            "protected", "public", "arguments", "eval", "undefined", "NaN", "Infinity",
            // The imports and the locals of the generated modules.
            "L", "ffi", "args", "__ret", "__sp", "__sret", "__owner", "__e", "__n", "__v", "__p",
        };
        str = JsPropertyName(std::move(str));
        if (keywords.contains(str))
            return str + '_';
        return str;
    }

    std::string JsPropertyName(std::string str)
    {
        for (char &ch : str)
        {
            bool ok = (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') || ch == '_' || ch == '$';
            if (!ok)
                ch = '_';
        }
        if (str.empty())
            str = "_unnamed";
        if (str.front() >= '0' && str.front() <= '9')
            str = '_' + str;
        return str;
    }

    std::string Capitalize(std::string str)
    {
        if (!str.empty() && str.front() >= 'a' && str.front() <= 'z')
            str.front() = char(str.front() - 'a' + 'A');
        return str;
    }

    std::string JsMethodName(std::string str)
    {
        if (!str.empty() && str.front() >= 'A' && str.front() <= 'Z')
            str.front() = char(str.front() - 'A' + 'a');
        return JsPropertyName(std::move(str));
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
        return JsPropertyName(ret);
    }

    std::size_t Generator::ScalarSize(Scalar s) const
    {
        switch (s)
        {
            case Scalar::void_: return 0;
            case Scalar::bool_: case Scalar::i8: case Scalar::u8: return 1;
            case Scalar::i16: case Scalar::u16: return 2;
            case Scalar::i32: case Scalar::u32: case Scalar::f32: return 4;
            case Scalar::i64: case Scalar::u64: case Scalar::f64: return 8;
            case Scalar::ptr: case Scalar::isize: case Scalar::usize: return PointerSize();
            case Scalar::struct_: return 0;
        }
        return 0;
    }

    char Generator::ScalarSigChar(Scalar s)
    {
        switch (s)
        {
            case Scalar::void_: return 'v';
            case Scalar::i64: case Scalar::u64: return 'j';
            case Scalar::ptr: case Scalar::isize: case Scalar::usize: return 'p';
            case Scalar::f32: return 'f';
            case Scalar::f64: return 'd';
            default: return 'i';
        }
    }

    std::string Generator::HeapIndex(const std::string &addr, int shift) const
    {
        // `>>>` would truncate the wasm64 addresses above 4 GB. They stay below 2^53, so the division is exact for the aligned ones.
        if (shift == 0)
            return addr;
        if (wasm64)
            return "(" + addr + ") / " + std::to_string(1 << shift);
        return "(" + addr + ") >>> " + std::to_string(shift);
    }

    std::string Generator::HeapRead(Scalar s, const std::string &addr) const
    {
        // The views are functions: in a `-pthread` module another thread can grow the memory at any time, see `ffi.mjs`.
        if (IsPointerSized(s) && wasm64)
            return "Number(ffi." + std::string(s == Scalar::isize ? "HEAP64" : "HEAPU64") + "()[" + HeapIndex(addr, 3) + "])";
        switch (s)
        {
            case Scalar::isize: return "ffi.HEAP32()[" + HeapIndex(addr, 2) + "]";
            case Scalar::usize: return "ffi.HEAPU32()[" + HeapIndex(addr, 2) + "]";
            case Scalar::bool_: return "(ffi.HEAPU8()[" + addr + "] !== 0)";
            case Scalar::i8: return "ffi.HEAP8()[" + addr + "]";
            case Scalar::u8: return "ffi.HEAPU8()[" + addr + "]";
            case Scalar::i16: return "ffi.HEAP16()[" + HeapIndex(addr, 1) + "]";
            case Scalar::u16: return "ffi.HEAPU16()[" + HeapIndex(addr, 1) + "]";
            case Scalar::i32: return "ffi.HEAP32()[" + HeapIndex(addr, 2) + "]";
            case Scalar::u32: case Scalar::ptr: return "ffi.HEAPU32()[" + HeapIndex(addr, 2) + "]";
            case Scalar::i64: return "ffi.HEAP64()[" + HeapIndex(addr, 3) + "]";
            case Scalar::u64: return "ffi.HEAPU64()[" + HeapIndex(addr, 3) + "]";
            case Scalar::f32: return "ffi.HEAPF32()[" + HeapIndex(addr, 2) + "]";
            case Scalar::f64: return "ffi.HEAPF64()[" + HeapIndex(addr, 3) + "]";
            default: throw std::logic_error("Internal error: HeapRead() of a non-scalar.");
        }
    }

    std::string Generator::HeapReadRaw(Scalar s, const std::string &addr) const
    {
        if (IsPointerSized(s) && wasm64)
            return "ffi." + std::string(s == Scalar::isize ? "HEAP64" : "HEAPU64") + "()[" + HeapIndex(addr, 3) + "]";
        if (s == Scalar::bool_)
            return "ffi.HEAPU8()[" + addr + "]";
        return HeapRead(s, addr);
    }

    std::string Generator::HeapWrite(Scalar s, const std::string &addr, const std::string &value) const
    {
        if (IsPointerSized(s) && wasm64)
            return "ffi.HEAPU64()[" + HeapIndex(addr, 3) + "] = " + (s == Scalar::ptr ? "BigInt(" + value + ")" : "ffi.toI64(" + value + ")");
        switch (s)
        {
            case Scalar::bool_: return "ffi.HEAPU8()[" + addr + "] = " + value + " ? 1 : 0";
            case Scalar::i8: case Scalar::u8: return "ffi.HEAPU8()[" + addr + "] = " + value;
            case Scalar::i16: case Scalar::u16: return "ffi.HEAPU16()[" + HeapIndex(addr, 1) + "] = " + value;
            case Scalar::i32: case Scalar::u32: case Scalar::ptr: case Scalar::isize: case Scalar::usize: return "ffi.HEAPU32()[" + HeapIndex(addr, 2) + "] = " + value;
            case Scalar::i64: return "ffi.HEAP64()[" + HeapIndex(addr, 3) + "] = ffi.toI64(" + value + ")";
            case Scalar::u64: return "ffi.HEAPU64()[" + HeapIndex(addr, 3) + "] = ffi.toI64(" + value + ")";
            case Scalar::f32: return "ffi.HEAPF32()[" + HeapIndex(addr, 2) + "] = " + value;
            case Scalar::f64: return "ffi.HEAPF64()[" + HeapIndex(addr, 3) + "] = " + value;
            default: throw std::logic_error("Internal error: HeapWrite() of a non-scalar.");
        }
    }

    std::string Generator::FromWasm(Scalar s, const std::string &expr) const
    {
        if (IsPointerSized(s) && wasm64)
            return "Number(" + expr + ")";
        switch (s)
        {
            case Scalar::isize: return expr;
            case Scalar::usize: return "(" + expr + " >>> 0)";
            case Scalar::bool_: return "(" + expr + " !== 0)";
            case Scalar::i8: return "((" + expr + " << 24) >> 24)";
            case Scalar::u8: return "(" + expr + " & 255)";
            case Scalar::i16: return "((" + expr + " << 16) >> 16)";
            case Scalar::u16: return "(" + expr + " & 65535)";
            case Scalar::u32: case Scalar::ptr: return "(" + expr + " >>> 0)";
            case Scalar::u64: return "BigInt.asUintN(64, " + expr + ")";
            default: return expr;
        }
    }

    std::string Generator::ToWasm(Scalar s, const std::string &expr) const
    {
        if (IsPointerSized(s) && wasm64)
            return s == Scalar::ptr ? "BigInt(" + expr + ")" : "ffi.toI64(" + expr + ")";
        switch (s)
        {
            case Scalar::bool_: return "(" + expr + " ? 1 : 0)";
            case Scalar::i8: return "((" + expr + " << 24) >> 24)";
            case Scalar::u8: return "(" + expr + " & 255)";
            case Scalar::i16: return "((" + expr + " << 16) >> 16)";
            case Scalar::u16: return "(" + expr + " & 65535)";
            case Scalar::i64: case Scalar::u64: return "ffi.toI64(" + expr + ")";
            default: return expr;
        }
    }

    std::string Generator::TsScalar(Scalar s, bool is_param)
    {
        switch (s)
        {
            case Scalar::void_: return "void";
            case Scalar::bool_: return "boolean";
            case Scalar::i64: case Scalar::u64: return is_param ? "number | bigint" : "bigint";
            default: return "number";
        }
    }

    std::string Generator::ScalarCheck(Scalar s, const std::string &expr)
    {
        switch (s)
        {
            case Scalar::bool_: return "typeof " + expr + " === \"boolean\"";
            case Scalar::i64: case Scalar::u64: return "(typeof " + expr + " === \"number\" || typeof " + expr + " === \"bigint\")";
            default: return "typeof " + expr + " === \"number\"";
        }
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
        // Like in the other generators, `--replace-namespace` goes first, then `--force-namespace` applies to what ended up in the global namespace.
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
            std::string name = JsIdent(part);
            auto [iter, is_new] = m->children.try_emplace(name);
            if (is_new)
            {
                iter->second.ns_parts = m->ns_parts;
                iter->second.ns_parts.push_back(part);
                iter->second.path = (m == &root ? "ns" : m->path) + "/" + name;
                iter->second.to_root = ToRootPrefix(iter->second.path);
            }
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
            std::string path = "lib";
            std::string_view str = file.relative_name;
            while (!str.empty())
            {
                std::size_t sep = str.find('/');
                std::string_view part = str.substr(0, sep);
                if (!part.empty())
                    path += "/" + ShortenFileName(JsPropertyName(std::string(part)));
                str = sep == std::string_view::npos ? std::string_view{} : str.substr(sep + 1);
            }
            if (path == "lib")
                throw std::runtime_error("Bad relative file name in the input JSON: `" + file.relative_name + "`.");
            ret.path = path;
            ret.to_root = ToRootPrefix(path);
        }
        return ret;
    }

    std::string Generator::ShortenFileName(std::string name) const
    {
        if (max_file_name_length != 0 && name.size() > max_file_name_length)
        {
            auto hash = Hash(std::string_view(name).substr(max_file_name_length));
            name.resize(max_file_name_length);
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
            lines.push_back(Strings::Replace(extra_line, "*/", "*&#47;"));
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

    std::optional<Generator::JsType> Generator::CTypeToJs(const std::string &str)
    {
        return CTypeToJs(ParseTypeOrThrow(str), 0);
    }

    std::optional<Generator::JsType> Generator::CTypeToJs(const cppdecl::Type &type, std::size_t i)
    {
        auto Prim = [this](Scalar s, bool platform_dependent = false)
        {
            JsType ret;
            ret.scalar = s;
            ret.size = ScalarSize(s);
            ret.alignment = ret.size == 0 ? 1 : ret.size;
            ret.platform_dependent = platform_dependent;
            return ret;
        };

        if (i == type.modifiers.size())
        {
            std::string_view word = type.simple_type.name.AsSingleWord();
            const bool is_unsigned = bool(type.simple_type.flags & cppdecl::SimpleTypeFlags::unsigned_);

            if (!word.empty())
            {
                if (word == "void") return JsType{};
                if (word == "bool") return Prim(Scalar::bool_);
                if (word == "char") return Prim(is_unsigned ? Scalar::u8 : Scalar::i8);
                if (word == "short") return Prim(is_unsigned ? Scalar::u16 : Scalar::i16);
                if (word == "int") return Prim(is_unsigned ? Scalar::u32 : Scalar::i32);
                if (word == "long") return Prim(is_unsigned ? Scalar::usize : Scalar::isize, true); // ILP32 in wasm32, LP64 in wasm64.
                if (word == "long long") return Prim(is_unsigned ? Scalar::u64 : Scalar::i64);
                if (word == "float") return Prim(Scalar::f32);
                if (word == "double") return Prim(Scalar::f64);
                if (word == "size_t" || word == "uintptr_t") return Prim(Scalar::usize, true);
                if (word == "ptrdiff_t" || word == "intptr_t") return Prim(Scalar::isize, true);
                if (word == "int8_t") return Prim(Scalar::i8);
                if (word == "uint8_t") return Prim(Scalar::u8);
                if (word == "int16_t") return Prim(Scalar::i16);
                if (word == "uint16_t") return Prim(Scalar::u16);
                if (word == "int32_t") return Prim(Scalar::i32);
                if (word == "uint32_t") return Prim(Scalar::u32);
                if (word == "int64_t") return Prim(Scalar::i64);
                if (word == "uint64_t") return Prim(Scalar::u64);
                if (word == "wchar_t") return Prim(Scalar::i32);
                if (word == "char8_t") return Prim(Scalar::u8);
                if (word == "char16_t") return Prim(Scalar::u16);
                if (word == "char32_t") return Prim(Scalar::u32);
                if (word == "long double") return {};
            }

            std::string name = cppdecl::ToCode(type.simple_type.name, {});
            if (name == c_desc.helpers_prefix + "PassBy")
                return Prim(Scalar::i32);
            // The fixed-size typedefs of `--canonicalize-to-fixed-size-typedefs`, e.g. `MR_C_int64_t`. Those are always the fixed size, even when spelled via `size_t`.
            if (name.starts_with(c_desc.helpers_prefix))
            {
                std::string_view rest = std::string_view(name).substr(c_desc.helpers_prefix.size());
                if (rest == "int8_t") return Prim(Scalar::i8);
                if (rest == "uint8_t") return Prim(Scalar::u8);
                if (rest == "int16_t") return Prim(Scalar::i16);
                if (rest == "uint16_t") return Prim(Scalar::u16);
                if (rest == "int32_t") return Prim(Scalar::i32);
                if (rest == "uint32_t") return Prim(Scalar::u32);
                if (rest == "int64_t") return Prim(Scalar::i64);
                if (rest == "uint64_t") return Prim(Scalar::u64);
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
                JsType ret = Prim(info->enum_scalar);
                ret.type_info = info;
                return ret;
            }
            if (info->IsExposedStruct())
            {
                JsType ret;
                ret.scalar = Scalar::struct_;
                ret.size = info->layout.size;
                ret.alignment = info->layout.alignment;
                ret.platform_dependent = info->layout.platform_dependent;
                ret.type_info = info;
                return ret;
            }
            return {}; // Opaque classes can't be used by value.
        }

        if (type.Is<cppdecl::Pointer>(i))
        {
            JsType ret = Prim(Scalar::ptr, true);
            ret.is_pointer = true;
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
                auto pointee = CTypeToJs(type, j);
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
            auto inner = CTypeToJs(type, i + 1);
            if (!inner || inner->IsVoid())
                return {};
            JsType ret;
            ret.scalar = inner->scalar;
            ret.size = inner->size * *size;
            ret.alignment = inner->alignment;
            ret.platform_dependent = inner->platform_dependent;
            ret.type_info = inner->type_info;
            ret.array_dims = inner->array_dims;
            ret.array_dims.insert(ret.array_dims.begin(), *size);
            ret.array_elem = inner->array_dims.empty() ? std::make_shared<JsType>(*inner) : inner->array_elem;
            return ret;
        }

        return {};
    }

    void Generator::CollectTypes()
    {
        root.path = "index";
        root.to_root = "./";
        for (std::string_view name : {"init", "initWithModule", "ffi", "CppObject", "CppStruct", "CppException", "UnexpectedResultException", "default"})
            root.used_names.insert(std::string(name));

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

        // The `lib` export names are the C names, which are unique. But reserve the runtime names first.
        for (std::string_view name : {"ffi", "L", "default"})
            used_js_names.insert(std::string(name));

        for (auto &[cpp_name, info] : types_by_cpp_name)
        {
            types_by_c_name[info.c_name] = &info;
            info.js_name = UniqueName(used_js_names, JsIdent(info.c_name));
            info.js_ref = "L." + info.js_name;
            info.file = &GetFileModule(info.class_desc ? info.class_desc->output_file : info.enum_desc->output_file);

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
                // Everything else (`std::...` and such) goes to the root module, named after the C name minus the helpers prefix.
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
                info.public_name = UniqueName(info.module->used_names, JsIdent(ident));
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
                info.public_name = UniqueName(info.module->used_names, JsIdent(unqual));
            }

            if (info.IsEnum())
            {
                auto underlying = CTypeToJs(info.enum_desc->underlying_type);
                if (!underlying || underlying->IsVoid() || underlying->is_pointer || underlying->scalar == Scalar::struct_)
                    throw std::runtime_error("Unknown underlying type `" + info.enum_desc->underlying_type + "` of enum `" + cpp_name + "`.");
                info.enum_scalar = underlying->scalar;
                auto prim = c_desc.platform_info.FindPrimitiveType(info.enum_desc->underlying_type);
                info.enum_is_signed = !prim || prim->kind == PrimitiveTypeInfo::Kind::signed_integral;
                if (info.enum_scalar == Scalar::u8 || info.enum_scalar == Scalar::u16 || info.enum_scalar == Scalar::u32 || info.enum_scalar == Scalar::u64 || info.enum_scalar == Scalar::usize)
                    info.enum_is_signed = false;
            }
        }
    }

    void Generator::ComputeStructLayouts()
    {
        // The wasm C ABI: natural alignment of every field, the struct is padded to its alignment, `long long` and `double` are aligned to 8.
        // Computed here instead of being read from the JSON, since the JSON describes the host platform of the C generator.
        std::set<std::string> done;
        auto Compute = [&](auto &self, TypeInfo &info) -> void
        {
            if (!info.IsExposedStruct() || done.contains(info.cpp_name))
                return;
            done.insert(info.cpp_name);
            TypeInfo::StructLayout &l = info.layout;
            std::size_t offset = 0;
            std::size_t num_scalar_leaves = 0;
            std::optional<Scalar> leaf;
            std::size_t leaf_offset = 0;
            std::size_t leaf_size = 0;
            for (const auto &field : info.class_desc->fields)
            {
                if (field.is_static)
                    continue;
                // The fields of nested structs are needed first.
                const cppdecl::Type &ft = ParseTypeOrThrow(field.type);
                if (ft.modifiers.empty() || std::all_of(ft.modifiers.begin(), ft.modifiers.end(), [](const auto &m){return std::holds_alternative<cppdecl::Array>(m.var);}))
                {
                    std::string name = cppdecl::ToCode(ft.simple_type.name, {});
                    auto iter = types_by_cpp_name.find(name);
                    if (iter == types_by_cpp_name.end())
                    {
                        if (auto iter2 = types_by_c_name.find(name); iter2 != types_by_c_name.end())
                            self(self, *iter2->second);
                    }
                    else
                        self(self, iter->second);
                }
                auto type = CTypeToJs(field.type);
                if (!type || type->IsVoid())
                    throw std::runtime_error("Can't express the type `" + field.type + "` of field `" + field.name + "` of exposed struct `" + info.cpp_name + "` in JS.");
                std::size_t a = type->alignment;
                offset = (offset + a - 1) / a * a;
                l.field_offsets.push_back(offset);
                l.alignment = std::max(l.alignment, a);
                l.platform_dependent |= type->platform_dependent;

                // The singleton rule of the wasm C ABI: a struct holding a single scalar (possibly nested, possibly in arrays of one element) is passed as that scalar.
                std::uint64_t num_elems = 1;
                for (auto d : type->array_dims)
                    num_elems *= d;
                if (type->scalar == Scalar::struct_)
                {
                    const TypeInfo::StructLayout &inner = type->type_info->layout;
                    if (inner.singleton)
                    {
                        num_scalar_leaves += num_elems;
                        leaf = inner.singleton;
                        leaf_offset = offset + inner.singleton_offset;
                        leaf_size = ScalarSize(*inner.singleton);
                    }
                    else if (inner.size != 0)
                        num_scalar_leaves += 2; // Not a singleton.
                }
                else
                {
                    num_scalar_leaves += num_elems;
                    leaf = type->scalar;
                    leaf_offset = offset;
                    leaf_size = ScalarSize(type->scalar);
                }
                offset += type->size;
            }
            if (l.field_offsets.empty())
            {
                l.size = 1; // Empty C++ structs.
                l.alignment = 1;
            }
            else
                l.size = (offset + l.alignment - 1) / l.alignment * l.alignment;
            if (num_scalar_leaves == 1 && leaf && leaf_size == l.size)
            {
                l.singleton = leaf;
                l.singleton_offset = leaf_offset;
            }

            // Check against the JSON when the sizes are platform-independent.
            if (!l.platform_dependent && info.class_desc->size_and_alignment)
            {
                if (info.class_desc->size_and_alignment->size != l.size || info.class_desc->size_and_alignment->alignment != l.alignment)
                    throw std::runtime_error("Internal error: the computed wasm layout of `" + info.cpp_name + "` (" + std::to_string(l.size) + " bytes, aligned to " + std::to_string(l.alignment) + ") doesn't match the one in the description JSON (" + std::to_string(info.class_desc->size_and_alignment->size) + " bytes, aligned to " + std::to_string(info.class_desc->size_and_alignment->alignment) + ").");
                std::size_t i = 0;
                for (const auto &field : info.class_desc->fields)
                {
                    if (field.is_static)
                        continue;
                    if (field.layout && field.layout->byte_offset != l.field_offsets[i])
                        throw std::runtime_error("Internal error: the computed wasm offset of the field `" + field.name + "` of `" + info.cpp_name + "` (" + std::to_string(l.field_offsets[i]) + ") doesn't match the one in the description JSON (" + std::to_string(field.layout->byte_offset) + ").");
                    i++;
                }
            }
        };
        for (auto &[cpp_name, info] : types_by_cpp_name)
            Compute(Compute, info);
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

    void Generator::CollectExportedFunctions()
    {
        auto Add = [&](const std::string &name) {exported_c_functions.insert(name);};

        for (const auto &func : c_desc.functions)
            Add(func.c_name);
        for (auto &[cpp_name, info] : types_by_cpp_name)
        {
            if (!info.class_desc)
                continue;
            const auto &cl = *info.class_desc;
            for (const auto &method : cl.methods)
                Add(method.c_name);
            for (const auto &field : cl.fields)
            {
                const_cast<CInterop::ClassField &>(field).ForEachAccessor([&](const CInterop::ClassField::Accessor &accessor)
                {
                    Add(accessor.c_name);
                });
            }
            if (info.has_destroy)
                Add(info.c_name + "_Destroy");
            ForEachCastBase(info, [&](const TypeInfo &base, CInterop::InheritanceInfo::Kind kind)
            {
                Add(info.c_name + "_MutableUpcastTo_" + base.c_name);
                if (kind == CInterop::InheritanceInfo::Kind::non_virt)
                    Add(info.c_name + "_MutableStaticDowncastFrom_" + base.c_name);
                if (base.class_desc->is_polymorphic)
                    Add(info.c_name + "_MutableDynamicDowncastFrom_" + base.c_name);
            });
            if (cl.callable_info && info.has_destroy)
            {
                Add(info.c_name + "_ConstructEx");
                Add(info.c_name + "_AssignEx");
            }
        }
        if (c_desc.exception_handling_enabled)
            Add(c_desc.helpers_prefix + "SetExceptionHandler");
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
        std::vector<JsType> ffi_types;
        for (const auto &c_param : param.c_params)
        {
            c_types.push_back(&ParseTypeOrThrow(c_param.c_type));
            auto ffi_type = CTypeToJs(c_param.c_type);
            if (!ffi_type || ffi_type->IsVoid())
                return {};
            ffi_types.push_back(*ffi_type);
        }

        const std::string name = JsIdent(param.name_or_placeholder);
        ret.name = name;
        if (param.default_arg_spelling)
            ret.default_arg = *param.default_arg_spelling;
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
            const TypeInfo *pointee_type = nullptr; // Null for builtin pointees.
            std::optional<JsType> pointee_builtin; // Set for builtin pointees.
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
                info.pointee_builtin = CTypeToJs(c_type, 1);
                if (!info.pointee_builtin || info.pointee_builtin->IsVoid())
                    return {};
            }
            else
                return {};
            return info;
        };

        const std::string pass_by = c_desc.helpers_prefix + "PassBy";

        auto ClassParam = [&](const TypeInfo &cl, bool optional, bool allow_function)
        {
            ret.ts_type = cl.js_ref + (allow_function ? " | " + cl.js_ref + ".Fn" : "");
            ret.optional = optional;
            ret.sig_key = cl.js_name + (optional ? "?" : "");
            std::string check = "__v instanceof " + cl.js_ref;
            if (allow_function)
                check += " || typeof __v === \"function\"";
            if (optional)
                check = "__v == null || " + check;
            ret.check = "(" + check + ")";
            ret.object_param = name;
        };
        auto PtrOf = [&](const std::string &var, bool optional)
        {
            return optional ? "ffi.ptr(" + var + ")" : "ffi.ptrNonNull(" + var + ", \"" + EscapeJsString(name) + "\")";
        };

        // The receiver.
        if (param.is_this_param && c_types.size() == 1)
        {
            auto ptr = AnalyzePointer(*c_types[0]);
            if (ptr && ptr->pointee_type && this_type && ptr->pointee_type == this_type)
            {
                ret.is_receiver = true;
                ret.args.push_back(PtrToWasm("this.rawPointer()"));
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
                    const std::string none_mode = cpp_is_optional ? "ffi.PASS_BY_NO_OBJECT" : "ffi.PASS_BY_DEFAULT_ARGUMENT";
                    // A `std::function` parameter also accepts a JS function, wrapped into a temporary that is destroyed after the call.
                    const bool callable = cl.class_desc->callable_info && cl.has_destroy && cl.copyable;
                    ClassParam(cl, optional, callable);
                    std::string var = name;
                    if (callable)
                    {
                        var = "__fn_" + name;
                        ret.decl += "let " + var + " = null;\n";
                        ret.pre += var + " = typeof " + name + " === \"function\" ? " + cl.js_ref + ".of(" + name + ") : " + name + ";\n";
                        ret.post += "if (" + var + " !== null && " + var + " !== " + name + ") " + var + ".delete();\n";
                    }
                    if (cl.copyable)
                    {
                        if (optional)
                        {
                            ret.args.push_back("(" + var + " == null ? " + none_mode + " : ffi.PASS_BY_COPY)");
                            ret.args.push_back(PtrToWasm("ffi.ptr(" + var + ")"));
                        }
                        else
                        {
                            ret.args.push_back("ffi.PASS_BY_COPY");
                            ret.args.push_back(PtrToWasm(PtrOf(var, false)));
                        }
                    }
                    else
                    {
                        // Non-copyable: the object is moved from and destroyed, see `CppObject.release()`.
                        if (optional)
                        {
                            ret.args.push_back("(" + var + " == null ? " + none_mode + " : ffi.PASS_BY_MOVE_AND_DESTROY)");
                            ret.args.push_back(PtrToWasm("(" + var + " == null ? 0 : " + var + ".release())"));
                            ret.releases = true;
                        }
                        else
                        {
                            ret.args.push_back("ffi.PASS_BY_MOVE_AND_DESTROY");
                            ret.args.push_back(PtrToWasm("ffi.nonNull(" + var + ", \"" + EscapeJsString(name) + "\").release()"));
                        }
                        ret.releases = true;
                    }
                    return ret;
                }
            }
        }

        // Strings.
        if (c_types.size() == 2 && cpp_is_string && IsConstCharPtr(*c_types[0]) && IsConstCharPtr(*c_types[1]))
        {
            ret.ts_type = "string";
            ret.optional = param.default_arg_affects_parameter_passing;
            ret.sig_key = ret.optional ? "string?" : "string";
            ret.check = ret.optional ? "(__v == null || typeof __v === \"string\")" : "typeof __v === \"string\"";
            ret.needs_stack = true;
            if (ret.optional)
                ret.pre += "const __str_" + name + " = " + name + " == null ? 0 : ffi.utf8(" + name + ");\n";
            else
                ret.pre += "const __str_" + name + " = ffi.utf8(ffi.nonNullString(" + name + ", \"" + EscapeJsString(name) + "\"));\n";
            ret.pre += "const __end_" + name + " = " + (ret.optional ? name + " == null ? 0 : " : "") + "ffi.utf8End();\n";
            ret.args.push_back(PtrToWasm("__str_" + name));
            ret.args.push_back(PtrToWasm("__end_" + name));
            return ret;
        }

        if (c_types.size() == 1)
        {
            const cppdecl::Type &ct = *c_types[0];
            const JsType &ffi_type = ffi_types[0];

            // By value: builtin types, enums, and exposed structs.
            if (ct.modifiers.empty() && !param.default_arg_affects_parameter_passing)
            {
                const TypeInfo *type_info = ffi_type.type_info;
                if (!type_info)
                {
                    ret.ts_type = TsScalar(ffi_type.scalar, true);
                    ret.sig_key = ret.ts_type;
                    ret.check = ScalarCheck(ffi_type.scalar, "__v");
                    ret.args.push_back(ToWasm(ffi_type.scalar, name));
                    return ret;
                }
                if (type_info->IsEnum())
                {
                    ret.ts_type = type_info->js_ref;
                    ret.sig_key = TsScalar(type_info->enum_scalar, true);
                    ret.check = ScalarCheck(type_info->enum_scalar, "__v");
                    ret.args.push_back(ToWasm(type_info->enum_scalar, name));
                    return ret;
                }
                if (type_info->IsExposedStruct())
                {
                    // The wasm C ABI: a singleton struct is passed as its scalar, the others by a pointer to a copy that the callee may modify.
                    ClassParam(*type_info, false, false);
                    const auto &l = type_info->layout;
                    if (l.singleton)
                        ret.args.push_back(HeapReadRaw(*l.singleton, PtrOf(name, false) + " + " + std::to_string(l.singleton_offset)));
                    else
                    {
                        ret.needs_stack = true;
                        ret.pre += "const __copy_" + name + " = ffi.stackCopy(" + PtrOf(name, false) + ", " + std::to_string(l.size) + ");\n";
                        ret.args.push_back(PtrToWasm("__copy_" + name));
                    }
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
                    ClassParam(*ptr->pointee_type, false, false);
                    ret.args.push_back(PtrToWasm("ffi.nonNull(" + name + ", \"" + EscapeJsString(name) + "\").release()"));
                    ret.releases = true;
                    return ret;
                }

                // Classes and exposed structs: pass the pointer.
                if (ptr->pointee_type && ptr->pointee_type->class_desc)
                {
                    ClassParam(*ptr->pointee_type, optional, false);
                    ret.args.push_back(PtrToWasm(PtrOf(name, optional)));
                    return ret;
                }

                const bool builtin_pointee = ptr->pointee_builtin && !ptr->pointee_builtin->is_pointer && !ptr->pointee_builtin->type_info && ptr->pointee_builtin->array_dims.empty() && ptr->pointee_builtin->scalar != Scalar::struct_;

                // Mutable builtins (`int &`, `int *`): a `<type>_output` object, which owns the scalars in wasm memory, like in the Python bindings.
                if (builtin_pointee && !ptr->is_const && (cpp_shape == CppShape::lref || cpp_shape == CppShape::ptr))
                {
                    cppdecl::Type pointee = *c_types[0];
                    pointee.RemoveModifier();
                    std::string cls = cppdecl::ToCode(pointee, {}) + "_output";
                    for (char &ch : cls)
                    {
                        if (ch == ' ' || ch == ':')
                            ch = '_';
                    }
                    scalar_outputs.try_emplace(cls, ptr->pointee_builtin->scalar);
                    const std::string ref = "L." + cls;
                    ret.ts_type = ref;
                    ret.optional = optional;
                    ret.sig_key = cls + (optional ? "?" : "");
                    ret.check = optional ? "(__v == null || __v instanceof " + ref + ")" : "__v instanceof " + ref;
                    // A reference needs exactly one element, a pointer can point to an array.
                    std::string p = cpp_shape == CppShape::lref ? "ffi.ScalarOutput.ref(" + name + ", \"" + EscapeJsString(name) + "\")" : PtrOf(name, false);
                    ret.args.push_back(PtrToWasm(optional ? "(" + name + " == null ? 0 : " + p + ")" : p));
                    return ret;
                }

                // Enums and builtins by const pointer: allocate a temporary. Rvalue references to builtins too, their changes aren't visible to the caller.
                const JsType *scalar = nullptr;
                const TypeInfo *en = nullptr;
                if (ptr->is_const && ptr->pointee_type && ptr->pointee_type->IsEnum())
                    en = ptr->pointee_type;
                else if (builtin_pointee && (ptr->is_const || cpp_shape == CppShape::rref))
                    scalar = &*ptr->pointee_builtin;
                if (en || scalar)
                {
                    const Scalar s = en ? en->enum_scalar : scalar->scalar;
                    ret.ts_type = en ? en->js_ref : TsScalar(s, true);
                    ret.optional = optional;
                    ret.sig_key = TsScalar(s, true) + (optional ? "?" : "");
                    ret.check = optional ? "(__v == null || " + ScalarCheck(s, "__v") + ")" : ScalarCheck(s, "__v");
                    ret.needs_stack = true;
                    std::string alloc = "ffi.stackScalar(" + std::to_string(ScalarSize(s)) + ", (p) => {" + HeapWrite(s, "p", name) + ";})";
                    if (optional)
                        ret.pre += "const __ptr_" + name + " = " + name + " == null ? 0 : " + alloc + ";\n";
                    else
                        ret.pre += "const __ptr_" + name + " = " + alloc + ";\n";
                    ret.args.push_back(PtrToWasm("__ptr_" + name));
                    return ret;
                }
            }
        }

        // Fallback: raw C types.
        if (c_types.size() == 1)
        {
            ret.ts_type = TsScalar(ffi_types[0].scalar, true);
            ret.sig_key = ret.ts_type;
            ret.check = ScalarCheck(ffi_types[0].scalar, "__v");
            ret.args.push_back(ToWasm(ffi_types[0].scalar, name));
        }
        else
        {
            // Several C parameters: a single JS parameter holding an array of raw values.
            ret.ts_type = "[";
            for (std::size_t i = 0; i < param.c_params.size(); i++)
            {
                if (i > 0)
                    ret.ts_type += ", ";
                ret.ts_type += TsScalar(ffi_types[i].scalar, true);
                ret.args.push_back(ToWasm(ffi_types[i].scalar, name + "[" + std::to_string(i) + "]"));
            }
            ret.ts_type += "]";
            ret.sig_key = "array" + std::to_string(param.c_params.size());
            ret.check = "Array.isArray(__v)";
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
            if (!e.success || !e.error || !e.value)
                continue;
            auto success_type = CTypeToJs(e.success->ret.c_type);
            if (!success_type || success_type->scalar != Scalar::bool_)
                continue;
            auto error_ret = MapReturn(e.error->ret, true);
            if (!error_ret || error_ret->ts_type == "void" || error_ret->sret)
                continue;
            e.error_convert = error_ret->convert;
            e.error_pre = error_ret->pre;
            // `expected<void, E>` has a `value()` returning `bool`.
            if (ParseTypeOrThrow(e.value->ret.c_type).Is<cppdecl::Pointer>())
            {
                auto value_ret = MapReturn(e.value->ret, true);
                if (!value_ret || value_ret->ts_type == "void" || value_ret->sret)
                    continue;
                e.value_ts_type = value_ret->ts_type;
                e.value_convert = value_ret->convert;
                e.value_pre = value_ret->pre;
            }
            else
            {
                e.value = nullptr;
                e.value_ts_type = "void";
            }
            info.expected = std::move(e);
        }
    }

    std::optional<Generator::ReturnStrings> Generator::MapReturn(const CInterop::FuncReturn &ret, bool non_null, bool allow_string_conversion)
    {
        ReturnStrings out;
        auto ffi_type = CTypeToJs(ret.c_type);
        if (!ffi_type)
            return {};
        out.wasm_scalar = ffi_type->scalar;
        if (ffi_type->IsVoid())
        {
            out.ts_type = "void";
            return out;
        }
        out.ts_type = TsScalar(ffi_type->scalar, false);
        out.convert = FromWasm(ffi_type->scalar, "__ret");

        const cppdecl::Type &ct = ParseTypeOrThrow(ret.c_type);

        if (ct.modifiers.empty())
        {
            // Builtin, enum, or exposed struct by value.
            if (ffi_type->type_info && ffi_type->type_info->IsEnum())
            {
                out.ts_type = ffi_type->type_info->js_ref;
                out.convert = FromWasm(ffi_type->type_info->enum_scalar, "__ret");
            }
            else if (ffi_type->type_info && ffi_type->type_info->IsExposedStruct())
            {
                // The wasm C ABI: a singleton struct is returned as its scalar, the others through a result pointer passed first.
                const TypeInfo &st = *ffi_type->type_info;
                out.ts_type = st.js_ref;
                out.returns_struct = true;
                out.pre = "const __sret = ffi.malloc(" + std::to_string(st.layout.size) + ");\n";
                if (st.layout.singleton)
                {
                    out.wasm_scalar = *st.layout.singleton;
                    out.sret_store = HeapWrite(*st.layout.singleton, "__sret + " + std::to_string(st.layout.singleton_offset), "__ret");
                    out.convert = "(" + out.sret_store + ", new " + st.js_ref + "(ffi.RAW, __sret, true, null))";
                }
                else
                {
                    out.sret = true;
                    out.wasm_scalar = Scalar::void_;
                    out.convert = "new " + st.js_ref + "(ffi.RAW, __sret, true, null)";
                }
            }
            return out;
        }

        if (ct.modifiers.size() == 1 && ct.Is<cppdecl::Pointer>() && !ret.is_array_pointer)
        {
            const bool is_const = ct.IsConst(1);
            const std::string r = PtrFromWasm("__ret"); // The returned pointer as a number.
            std::string pointee_name = cppdecl::ToCode(ct.simple_type.name, {});
            auto type_iter = types_by_c_name.find(pointee_name);
            const TypeInfo *pointee_type = type_iter != types_by_c_name.end() ? type_iter->second : nullptr;
            std::optional<JsType> pointee_builtin;
            if (!pointee_type && !ct.simple_type.name.AsSingleWord().empty() && ct.simple_type.name.AsSingleWord() != "void")
                pointee_builtin = CTypeToJs(ct, 1);

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
                    out.ts_type = pointee_type->js_ref;
                    out.convert = "new " + pointee_type->js_ref + "(ffi.RAW, " + r + ", true, null)";
                    if (cpp.modifiers.empty())
                    {
                        out.owned_type = pointee_type;
                        // `std::string` returned by value becomes a JS string.
                        if (convert_strings && allow_string_conversion && pointee_type->cpp_name == "std::string" && exported_c_functions.contains(pointee_type->c_name + "_data") && exported_c_functions.contains(pointee_type->c_name + "_size"))
                        {
                            out.ts_type = "string";
                            out.convert = "ffi.takeString(" + r + ")";
                            out.converts_string = true;
                            out.owned_type = nullptr;
                        }
                    }
                    return out;
                }
                if (cpp_is_ref || cpp_is_ptr)
                {
                    out.ts_type = pointee_type->js_ref + (nullable ? " | null" : "");
                    std::string make = "new " + pointee_type->js_ref + "(ffi.RAW, " + r + ", false, __owner)";
                    out.convert = nullable ? "(" + r + " === 0 ? null : " + make + ")" : make;
                    return out;
                }
            }
            else if (pointee_type && pointee_type->IsExposedStruct() && (cpp_is_ref || cpp_is_ptr))
            {
                out.ts_type = pointee_type->js_ref + (nullable ? " | null" : "");
                std::string make = "new " + pointee_type->js_ref + "(ffi.RAW, " + r + ", false, __owner)";
                out.convert = nullable ? "(" + r + " === 0 ? null : " + make + ")" : make;
                return out;
            }
            else if (pointee_type && pointee_type->IsEnum() && is_const && (cpp_is_ref || cpp_is_ptr || cpp.modifiers.empty()))
            {
                out.ts_type = pointee_type->js_ref + (nullable ? " | null" : "");
                std::string make = HeapRead(pointee_type->enum_scalar, r);
                out.convert = nullable ? "(" + r + " === 0 ? null : " + make + ")" : make;
                return out;
            }
            else if (pointee_builtin && !pointee_builtin->is_pointer && !pointee_builtin->type_info && pointee_builtin->array_dims.empty() && pointee_builtin->scalar != Scalar::struct_ && is_const && (cpp_is_ref || cpp_is_ptr || cpp.modifiers.empty()))
            {
                std::string read = HeapRead(pointee_builtin->scalar, r);
                out.ts_type = TsScalar(pointee_builtin->scalar, false) + (nullable ? " | null" : "");
                out.convert = nullable ? "(" + r + " === 0 ? null : " + read + ")" : read;
                return out;
            }
        }

        out.is_raw = ffi_type->is_pointer;
        return out;
    }

    std::optional<Generator::PreparedFunc> Generator::PrepareFunc(const CInterop::BasicFuncLike &func, const TypeInfo *this_type, bool is_ctor, std::string preferred_name, std::string fallback_name)
    {
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
            {
                ret.is_static = false;
                continue;
            }
            ret.is_raw |= mapped->is_raw;
            sig_parts.push_back(mapped->sig_key);
            ret.param_indices[i] = ret.params.size();
            ret.params.push_back(std::move(*mapped));
        }
        ret.signature = JoinNameParts(sig_parts, ",");
        ret.num_required = ret.params.size();
        while (ret.num_required > 0 && ret.params[ret.num_required - 1].optional)
            ret.num_required--;

        auto mapped_ret = MapReturn(func.ret, false, !is_ctor);
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
            ret.ret.ts_type = e.value_ts_type;
            ret.ret.is_statement = e.value_ts_type == "void";
            ret.ret.unwraps_expected = true;
        }
        ret.is_raw |= ret.ret.is_raw;
        if (ret.is_raw)
            num_funcs_raw++;
        num_funcs_total++;
        return ret;
    }

    void Generator::ResolveNames(std::vector<PreparedFunc> &funcs, std::set<std::string> &used_names, std::vector<std::string> &names, std::vector<OverloadGroup> &groups)
    {
        // The overloads sharing a preferred name form a group, unless their JS signatures clash, then the later ones get their fallback names.
        std::map<std::string, std::set<std::string>> seen_signatures;
        std::map<std::string, std::size_t> group_index;
        names.assign(funcs.size(), "");
        groups.clear();
        for (std::size_t i = 0; i < funcs.size(); i++)
        {
            PreparedFunc &func = funcs[i];
            const bool use_preferred = !func.preferred_name.empty() && !used_names.contains(func.preferred_name) && seen_signatures[func.preferred_name].insert(func.signature).second;
            if (!use_preferred)
            {
                if (func.is_ctor)
                    func.is_ctor = false; // Becomes a static factory.
                continue;
            }
            auto [iter, is_new] = group_index.try_emplace(func.preferred_name, groups.size());
            if (is_new)
                groups.push_back({func.preferred_name, {}});
            groups[iter->second].funcs.push_back(i);
        }
        for (const auto &group : groups)
            used_names.insert(group.name);
        // Now the implementation names: the preferred name for the only member of a group, else the fallback names.
        for (const auto &group : groups)
        {
            if (group.funcs.size() == 1)
                names[group.funcs.front()] = group.name;
        }
        for (std::size_t i = 0; i < funcs.size(); i++)
        {
            if (!names[i].empty())
                continue;
            std::string name = funcs[i].fallback_name;
            for (int j = 2; !used_names.insert(name).second; j++)
                name = funcs[i].fallback_name + "_" + std::to_string(j);
            names[i] = name;
        }
    }

    Generator::EmittedFunc Generator::EmitFuncBody(const PreparedFunc &func)
    {
        const CInterop::BasicFuncLike &f = *func.func;
        EmittedFunc out;

        std::string extra_doc = "Calls `" + f.c_name + "()`.";
        if (func.ret.unwraps_expected)
            extra_doc += " The C++ function returns `" + f.ret.cpp_type + "`: the value is returned and an error is thrown as `UnexpectedResultException`.";
        if (func.is_raw)
            extra_doc += " Some types are raw C types (pointers as numbers), see the C bindings for the details.";
        for (const auto &param : func.params)
        {
            if (!param.default_arg.empty())
                extra_doc += " `" + param.name + "` defaults to `" + param.default_arg + "`.";
        }
        if (f.is_deprecated)
            extra_doc += " @deprecated" + (f.is_deprecated->empty() ? "" : " " + *f.is_deprecated);
        CInterop::Comment comment;
        comment.c_style = f.comment.c_style + f.comment_extra_lifetimes.c_style;
        out.doc = MakeDocComment(comment, 0, extra_doc);

        // The parameter list.
        bool needs_stack = false;
        std::string decl, pre, post;
        std::string object_param; // For `__owner`.
        int num_object_params = 0;
        for (std::size_t i = 0; i < func.params.size(); i++)
        {
            const ParamStrings &param = func.params[i];
            if (!out.params_decl.empty())
            {
                out.params_decl += ", ";
                out.dts_params += ", ";
            }
            out.params_decl += param.name;
            // Only the trailing optional parameters can be omitted, the others take `null`.
            if (i >= func.num_required)
                out.dts_params += param.name + "?: " + param.ts_type + " | null";
            else
                out.dts_params += param.name + ": " + param.ts_type + (param.optional ? " | null | undefined" : "");
            needs_stack |= param.needs_stack;
            decl += param.decl;
            pre += param.pre;
            post += param.post;
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
            owner = "[" + JoinNameParts(owners, ", ") + "]";

        // The call. If an argument releases an object (`PASS_BY_MOVE_AND_DESTROY`), every argument goes into a local first, the releasing ones last:
        //   a `TypeError` for a later argument must not leak the moved-from object.
        const bool any_release = std::any_of(func.params.begin(), func.params.end(), [](const ParamStrings &p){return p.releases;});
        std::vector<std::pair<std::string, bool>> all_args; // The expression and whether it releases.
        if (func.ret.sret)
            all_args.emplace_back(PtrToWasm("__sret"), false);
        if (!func.is_static)
            all_args.emplace_back(PtrToWasm("this.rawPointer()"), false);
        for (const auto &param : func.params)
        {
            for (const auto &arg : param.args)
                all_args.emplace_back(arg, param.releases);
        }
        std::string args;
        for (std::size_t i = 0; i < all_args.size(); i++)
            args += (i > 0 ? ", " : "") + (any_release ? "__a" + std::to_string(i) : all_args[i].first);
        if (any_release)
        {
            for (bool releasing : {false, true})
            {
                for (std::size_t i = 0; i < all_args.size(); i++)
                {
                    if (all_args[i].second == releasing)
                        pre += "const __a" + std::to_string(i) + " = " + all_args[i].first + ";\n";
                }
            }
        }
        std::string call = "ffi.C." + f.c_name + "(" + args + ")";
        std::string body = pre;
        if (func.ret.wasm_scalar == Scalar::void_)
            body += call + ";\n";
        else
            body += "const __ret = " + call + ";\n";
        body += "ffi.check();\n";
        if (func.is_ctor)
        {
            // The constructor wraps the pointer.
            if (!func.ret.sret_store.empty())
                body += func.ret.sret_store + ";\n";
            body += std::string("return ") + (func.ret.returns_struct ? "__sret" : PtrFromWasm("__ret")) + ";\n";
        }
        else if (func.ret.ts_type != "void" || func.ret.is_statement)
        {
            if (func.ret.convert.find("__owner") != std::string::npos)
                body += "const __owner = " + owner + ";\n";
            body += (func.ret.is_statement ? "" : "return ") + func.ret.convert + ";\n";
        }

        std::string wrapped;
        const bool catch_cpp = !c_desc.exception_handling_enabled;
        // `__sret` is allocated before the `try`, and freed if anything throws before it's wrapped into the result.
        const bool has_sret = func.ret.returns_struct;
        // A C++ exception escaping a wasm function leaves `__stack_pointer` where the throwing frame had it, so it's saved around every such call.
        const bool save_stack = needs_stack || catch_cpp;
        if (save_stack || !post.empty() || has_sret)
        {
            wrapped += decl + func.ret.pre;
            wrapped += save_stack ? "const __sp = ffi.stackSave();\ntry\n{\n" : "try\n{\n";
            wrapped += Indent(body, 1);
            wrapped += "}\n";
            if (catch_cpp || has_sret)
            {
                wrapped += "catch (__e)\n{\n";
                if (has_sret)
                    wrapped += "    ffi.free(__sret);\n";
                wrapped += catch_cpp ? "    throw ffi.cppError(__e);\n" : "    throw __e;\n";
                wrapped += "}\n";
            }
            if (save_stack || !post.empty())
            {
                wrapped += "finally\n{\n";
                if (save_stack)
                    wrapped += "    ffi.stackRestore(__sp);\n";
                wrapped += Indent(post, 1);
                wrapped += "}\n";
            }
        }
        else
            wrapped = body;

        out.js = "{\n" + Indent(wrapped, 1) + "}\n";
        out.dts_ret = func.ret.ts_type;
        return out;
    }

    std::string Generator::EmitDispatcher(const std::vector<PreparedFunc> &funcs, const OverloadGroup &group, const std::function<std::string(std::size_t index, const std::string &args)> &impl_call) const
    {
        // First the overloads whose parameter count matches exactly, then those with optional parameters omitted, the ones with the fewest
        //   parameters first (an overload that only adds optional parameters must not capture the calls meant for the shorter one).
        //   The declaration order breaks the ties.
        std::string out = "{\n    const __n = args.length;\n";
        auto Checks = [&](const PreparedFunc &func)
        {
            std::string ret;
            for (std::size_t i = 0; i < func.params.size(); i++)
            {
                const ParamStrings &p = func.params[i];
                std::string check = Strings::Replace(p.check, "__v", "args[" + std::to_string(i) + "]");
                if (p.optional)
                    check = "(__n <= " + std::to_string(i) + " || " + check + ")";
                ret += " && " + check;
            }
            return ret;
        };
        auto Args = [&](const PreparedFunc &func)
        {
            std::string ret;
            for (std::size_t i = 0; i < func.params.size(); i++)
                ret += (i > 0 ? ", " : "") + std::string("args[") + std::to_string(i) + "]";
            return ret;
        };
        for (std::size_t i : group.funcs)
        {
            const PreparedFunc &func = funcs[i];
            out += "    if (__n === " + std::to_string(func.params.size()) + Checks(func) + ")\n        return " + impl_call(i, Args(func)) + ";\n";
        }
        std::vector<std::size_t> with_optional;
        for (std::size_t i : group.funcs)
        {
            if (funcs[i].num_required < funcs[i].params.size())
                with_optional.push_back(i);
        }
        std::stable_sort(with_optional.begin(), with_optional.end(), [&](std::size_t a, std::size_t b){return funcs[a].params.size() < funcs[b].params.size();});
        for (std::size_t i : with_optional)
        {
            const PreparedFunc &func = funcs[i];
            out += "    if (__n >= " + std::to_string(func.num_required) + " && __n < " + std::to_string(func.params.size()) + Checks(func) + ")\n        return " + impl_call(i, Args(func)) + ";\n";
        }
        out += "    throw new TypeError(\"No overload of `" + EscapeJsString(group.name) + "` accepts these arguments.\");\n}\n";
        return out;
    }

    std::string Generator::EmitDispatcherDts(const std::vector<PreparedFunc> &funcs, const std::vector<EmittedFunc> &emitted, const OverloadGroup &group, const std::string &head_prefix, const std::string &name, bool is_ctor) const
    {
        // TypeScript picks the first declared signature that accepts the call, so the declarations go in the order of the runtime
        //   dispatch: by the parameter count (an exact count is the smallest one that accepts the call), then the declaration order.
        std::vector<std::size_t> order(group.funcs.begin(), group.funcs.end());
        std::stable_sort(order.begin(), order.end(), [&](std::size_t a, std::size_t b){return funcs[a].params.size() < funcs[b].params.size();});
        std::string out;
        for (std::size_t i : order)
        {
            out += emitted[i].doc;
            if (is_ctor)
                out += head_prefix + "constructor(" + emitted[i].dts_params + ");\n";
            else
                out += head_prefix + name + "(" + emitted[i].dts_params + "): " + emitted[i].dts_ret + ";\n";
        }
        if (group.funcs.size() > 1)
            out += "/** The overloads of `" + EscapeJsString(is_ctor ? "constructor" : name) + "` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */\n";
        return out;
    }

    void Generator::EmitCasts(const TypeInfo &info, std::string &members, std::string &dts, std::set<std::string> &used_inst, std::set<std::string> &used_static)
    {
        auto WrapRef = [&](const TypeInfo &t, const std::string &owner)
        {
            return "new " + t.js_ref + "(ffi.RAW, __ret, false, " + owner + ")";
        };
        auto Method = [&](const std::string &doc, bool is_static, const std::string &name, const std::string &params, const std::string &dts_params, const std::string &dts_ret, const std::string &c_name, const std::string &arg, const std::string &result)
        {
            dts += "/** " + doc + "\n *\n * Calls `" + c_name + "()`. */\n" + (is_static ? "static " : "") + name + "(" + dts_params + "): " + dts_ret + ";\n";
            members += (is_static ? "static " : "") + name + "(" + params + ")\n{\n";
            members += "    const __ret = " + PtrFromWasm("ffi.cppCall(() => ffi.C." + c_name + "(" + PtrToWasm(arg) + "))") + ";\n";
            members += "    return " + result + ";\n}\n\n";
        };

        ForEachCastBase(info, [&](const TypeInfo &base, CInterop::InheritanceInfo::Kind kind)
        {
            const std::string suffix = Capitalize(base.public_name);
            std::string name = UniqueName(used_inst, "upcastTo" + suffix);
            Method("Upcasts to the base class `" + base.cpp_name + "`. The result refers to this object.",
                false, name, "", "", base.js_ref, info.c_name + "_MutableUpcastTo_" + base.c_name, "this.rawPointer()", WrapRef(base, "this"));
            if (kind == CInterop::InheritanceInfo::Kind::non_virt)
            {
                name = UniqueName(used_static, "staticDowncastFrom" + suffix);
                Method("Static downcast from the base class `" + base.cpp_name + "`. Undefined behavior if the object isn't actually a `" + info.public_name + "`. The result refers to `object`.",
                    true, name, "object", "object: " + base.js_ref, info.js_ref, info.c_name + "_MutableStaticDowncastFrom_" + base.c_name, "ffi.ptrNonNull(object, \"object\")", WrapRef(info, "object"));
            }
            if (base.class_desc->is_polymorphic)
            {
                name = UniqueName(used_static, "dynamicDowncastFrom" + suffix);
                Method("Dynamic downcast from the base class `" + base.cpp_name + "`. Returns null if the object isn't actually a `" + info.public_name + "`. The result refers to `object`.",
                    true, name, "object", "object: " + base.js_ref, info.js_ref + " | null", info.c_name + "_MutableDynamicDowncastFrom_" + base.c_name, "ffi.ptrNonNull(object, \"object\")", "__ret === 0 ? null : " + WrapRef(info, "object"));
            }
        });
    }

    void Generator::EmitStdFunction(const TypeInfo &info, std::string &members, std::string &dts, std::string &dts_after, std::set<std::string> &used_inst, std::set<std::string> &used_static)
    {
        const auto &sf = *info.class_desc->callable_info;
        const std::string ctor_c_name = info.c_name + "_ConstructEx";
        const std::string assign_c_name = info.c_name + "_AssignEx";

        // The C callback: `R (*)(args..., [out params], void *_userdata, void **_cleanup_value)`.
        const cppdecl::Type &type = ParseTypeOrThrow(sf.stateful_func_c_type);
        const cppdecl::Function *fn = type.As<cppdecl::Function>(1);
        if (!fn || fn->params.size() < 2)
            return;
        cppdecl::Type ret_c = type;
        ret_c.modifiers.erase(ret_c.modifiers.begin(), ret_c.modifiers.begin() + 2);
        auto ret_type = CTypeToJs(ret_c);
        if (!ret_type)
            return;

        struct Arg
        {
            std::string name;
            JsType c_type;
            std::string fn_type; // The TS parameter type of the JS callable, empty for the parameters it doesn't see.
            std::string convert; // An expression in terms of `name`.
        };
        std::vector<Arg> args;
        std::string sig; // For `addFunction()`.
        std::string ret_fn_type = TsScalar(ret_type->scalar, false);
        std::string ret_convert; // Statements, `__ret` holds the result of the JS callable.
        std::string default_ret; // What the trampoline returns if the callable throws.
        bool returns_class = false;
        const std::string pass_by = c_desc.helpers_prefix + "PassBy";

        auto DefaultOf = [&](Scalar s) -> std::string
        {
            if (s == Scalar::void_) return "";
            if (IsBigInt(s) || (wasm64 && IsPointerSized(s))) return "0n";
            return "0";
        };

        // A struct returned by value from the callback: the `sret` pointer comes first.
        std::string sret_param;
        if (ret_type->scalar == Scalar::struct_)
        {
            const auto &l = ret_type->type_info->layout;
            if (l.singleton)
            {
                ret_fn_type = ret_type->type_info->js_ref;
                sig += ScalarSigChar(*l.singleton);
                ret_convert = "return " + HeapReadRaw(*l.singleton, "ffi.ptrNonNull(__ret, \"the callback result\") + " + std::to_string(l.singleton_offset)) + ";\n";
                default_ret = DefaultOf(*l.singleton);
            }
            else
            {
                ret_fn_type = ret_type->type_info->js_ref;
                sig += 'v';
                sret_param = "__sret";
                ret_convert = "ffi.HEAPU8().copyWithin(" + PtrFromWasm("__sret") + ", ffi.ptrNonNull(__ret, \"the callback result\"), ffi.ptrNonNull(__ret, \"the callback result\") + " + std::to_string(l.size) + ");\n";
            }
        }
        else
        {
            sig += ScalarSigChar(ret_type->scalar);
            if (sret_param.empty() && ret_type->scalar != Scalar::void_)
                default_ret = DefaultOf(ret_type->scalar);
        }
        if (!sret_param.empty())
            sig += 'p';

        for (std::size_t i = 0; i + 2 < fn->params.size(); i++)
        {
            const auto &param = fn->params[i];
            const std::string name = param.name.AsSingleWord().empty() ? "_" + std::to_string(i + 1) : JsIdent(std::string(param.name.AsSingleWord()));
            auto c_type = CTypeToJs(param.type);
            if (!c_type || c_type->IsVoid())
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
                ret_fn_type = iter->second->js_ref;
                ret_convert = HeapWrite(Scalar::i32, PtrFromWasm(name), "ffi.PASS_BY_MOVE_AND_DESTROY") + ";\nreturn " + PtrToWasm("ffi.nonNull(__ret, \"the callback result\").release()") + ";\n";
                // On failure the C bindings default-construct the result.
                default_ret = wasm64 ? "0n" : "0";
                sig += 'p';
                args.push_back({name, *c_type, "", ""});
                continue;
            }

            Arg arg{name, *c_type, TsScalar(c_type->scalar, false), FromWasm(c_type->scalar, name)};
            if (param.type.modifiers.empty())
            {
                if (c_type->type_info && c_type->type_info->IsEnum())
                {
                    arg.fn_type = c_type->type_info->js_ref;
                    arg.convert = FromWasm(c_type->type_info->enum_scalar, name);
                    sig += ScalarSigChar(c_type->type_info->enum_scalar);
                }
                else if (c_type->type_info && c_type->type_info->IsExposedStruct())
                {
                    // The struct only lives for the duration of the call (or is a scalar), so copy it.
                    const auto &l = c_type->type_info->layout;
                    arg.fn_type = c_type->type_info->js_ref;
                    if (l.singleton)
                    {
                        arg.convert = "ffi.structFromScalar(" + c_type->type_info->js_ref + ", " + std::to_string(l.size) + ", (p) => {" + HeapWrite(*l.singleton, "p + " + std::to_string(l.singleton_offset), name) + ";})";
                        sig += ScalarSigChar(*l.singleton);
                    }
                    else
                    {
                        arg.convert = "ffi.structCopy(" + c_type->type_info->js_ref + ", " + PtrFromWasm(name) + ", " + std::to_string(l.size) + ")";
                        sig += 'p';
                    }
                }
                else
                    sig += ScalarSigChar(c_type->scalar);
            }
            else if (param.type.modifiers.size() == 1 && param.type.Is<cppdecl::Pointer>())
            {
                sig += 'p';
                arg.convert = PtrFromWasm(name);
                auto iter = types_by_c_name.find(cppdecl::ToCode(param.type.simple_type.name, {}));
                if (iter != types_by_c_name.end() && iter->second->class_desc)
                {
                    const TypeInfo &t = *iter->second;
                    arg.fn_type = t.js_ref + " | null";
                    arg.convert = PtrFromWasm(name) + " === 0 ? null : new " + t.js_ref + "(ffi.RAW, " + PtrFromWasm(name) + ", false, null)";
                }
            }
            else
                sig += ScalarSigChar(c_type->scalar);
            args.push_back(std::move(arg));
        }
        sig += "pp"; // `_userdata`, `_cleanup_value`.

        if (!returns_class && sret_param.empty() && ret_type->scalar != Scalar::struct_)
        {
            if (ret_type->scalar == Scalar::void_)
                ret_convert = "";
            else if (ret_c.modifiers.empty() && ret_type->type_info && ret_type->type_info->IsEnum())
            {
                ret_fn_type = ret_type->type_info->js_ref;
                ret_convert = "return " + ToWasm(ret_type->type_info->enum_scalar, "__ret") + ";\n";
            }
            else
                ret_convert = "return " + ToWasm(ret_type->scalar, "__ret") + ";\n";
        }

        // The callable type, the trampoline, and the construction.
        std::string fn_params, call_args, c_params;
        if (!sret_param.empty())
            c_params = sret_param + ", ";
        for (const Arg &arg : args)
        {
            c_params += arg.name + ", ";
            if (arg.fn_type.empty())
                continue;
            fn_params += (fn_params.empty() ? "" : ", ") + arg.name + ": " + arg.fn_type;
            call_args += (call_args.empty() ? "" : ", ") + arg.convert;
        }

        dts += "/** Constructs an instance holding a JS function. The copies of the instance share it. An exception thrown by the function is rethrown by the wrapper that called into C.\n *\n * Calls `" + ctor_c_name + "()`. */\n";
        std::string of_name = UniqueName(used_static, "of");
        dts += "static " + of_name + "(func: " + info.js_ref + ".Fn): " + info.js_ref + ";\n";
        std::string assign_name = UniqueName(used_inst, "assignFn");
        dts += "/** Replaces the stored callable with a JS function.\n *\n * Calls `" + assign_c_name + "()`. */\n";
        dts += assign_name + "(func: " + info.js_ref + ".Fn): void;\n";
        dts_after += "export declare namespace " + info.js_name + "\n{\n    /** The JS function an instance can hold. */\n    type Fn = (" + fn_params + ") => " + ret_fn_type + ";\n}\n\n";

        members += "static __stub = 0;\n";
        members += "static __trampoline(" + c_params + "_userdata, _cleanup_value)\n{\n";
        members += "    const func = ffi.callbackState(" + PtrFromWasm("_userdata") + ");\n";
        members += "    try\n    {\n";
        if (ret_fn_type == "void")
            members += "        func(" + call_args + ");\n";
        else
            members += "        const __ret = func(" + call_args + ");\n";
        members += Indent(ret_convert, 2);
        members += "    }\n    catch (__e)\n    {\n        ffi.callbackFailed(__e);\n";
        if (!default_ret.empty())
            members += "        return " + default_ret + ";\n";
        members += "    }\n}\n\n";

        const std::string callbacks = PtrToWasm("__stub") + ", " + PtrToWasm("ffi.newCallbackState(ffi.nonNullFunction(func, \"func\"))") + ", " + PtrToWasm("0") + ", " + PtrToWasm("ffi.callbackStateStub()");
        members += "static " + of_name + "(func)\n{\n";
        members += "    const __stub = " + info.js_ref + ".__stub || (" + info.js_ref + ".__stub = ffi.addFunction(" + info.js_ref + ".__trampoline, \"" + sig + "\"));\n";
        members += "    const __ret = " + PtrFromWasm("ffi.cppCall(() => ffi.C." + ctor_c_name + "(" + callbacks + "))") + ";\n";
        members += "    ffi.check();\n    return new " + info.js_ref + "(ffi.RAW, __ret, true, null);\n}\n\n";
        members += assign_name + "(func)\n{\n";
        members += "    const __stub = " + info.js_ref + ".__stub || (" + info.js_ref + ".__stub = ffi.addFunction(" + info.js_ref + ".__trampoline, \"" + sig + "\"));\n";
        members += "    ffi.cppCall(() => ffi.C." + assign_c_name + "(" + PtrToWasm("this.rawPointer()") + ", " + callbacks + "));\n";
        members += "    ffi.check();\n}\n\n";
    }

    std::optional<Generator::ElemInfo> Generator::ContiguousElem(const cppdecl::Type &type)
    {
        if (!type.modifiers.empty())
            return {};
        auto js = CTypeToJs(type);
        if (js && !js->is_pointer && js->array_dims.empty() && js->scalar != Scalar::void_)
        {
            if (js->scalar != Scalar::struct_)
            {
                const Scalar s = js->type_info ? js->type_info->enum_scalar : js->scalar;
                if (s == Scalar::ptr)
                    return {};
                return ElemInfo{s, 1, ScalarSize(s)};
            }
            // An exposed struct: all the leaves must be the same scalar, filling the struct without padding.
            ElemInfo ret;
            ret.size = js->type_info->layout.size;
            auto Walk = [&](auto &self, const JsType &t) -> bool
            {
                std::uint64_t n = 1;
                for (auto d : t.array_dims)
                    n *= d;
                if (t.scalar == Scalar::struct_)
                {
                    for (const auto &field : t.type_info->class_desc->fields)
                    {
                        if (field.is_static)
                            continue;
                        auto ft = CTypeToJs(field.type);
                        if (!ft)
                            return false;
                        for (std::uint64_t i = 0; i < n; i++)
                        {
                            if (!self(self, *ft))
                                return false;
                        }
                    }
                    return true;
                }
                const Scalar s = t.type_info ? t.type_info->enum_scalar : t.scalar;
                if (s == Scalar::ptr || s == Scalar::void_)
                    return false;
                if (ret.count == 0)
                    ret.scalar = s;
                else if (ret.scalar != s)
                    return false;
                ret.count += n;
                return true;
            };
            if (!Walk(Walk, *js) || ret.count == 0 || ret.count * ScalarSize(ret.scalar) != ret.size)
                return {};
            return ret;
        }

        // `std::array<T, N>`.
        auto iter = types_by_cpp_name.find(cppdecl::ToCode(type, {}));
        if (iter == types_by_cpp_name.end() || !iter->second.class_desc || !iter->second.cpp_name.starts_with("std::array<"))
            return {};
        const auto &parts = ParseTypeOrThrow(iter->second.cpp_name).simple_type.name.parts;
        if (parts.empty() || !parts.back().template_args || parts.back().template_args->args.size() != 2)
            return {};
        const auto &args = parts.back().template_args->args;
        auto elem_type = args[0].AsType();
        auto num = std::get_if<cppdecl::PseudoExpr>(&args[1].var);
        if (!elem_type || !num || num->tokens.size() != 1)
            return {};
        auto lit = std::get_if<cppdecl::NumericLiteral>(&num->tokens.front());
        if (!lit)
            return {};
        auto n = lit->ToInteger<std::uint64_t>();
        if (!n || *n == 0)
            return {};
        auto elem = ContiguousElem(*elem_type);
        if (!elem)
            return {};
        return ElemInfo{elem->scalar, elem->count * *n, elem->size * *n};
    }

    std::string Generator::TypedArrayClass(Scalar s) const
    {
        switch (s)
        {
            case Scalar::bool_: case Scalar::u8: return "Uint8Array";
            case Scalar::i8: return "Int8Array";
            case Scalar::i16: return "Int16Array";
            case Scalar::u16: return "Uint16Array";
            case Scalar::i32: return "Int32Array";
            case Scalar::u32: return "Uint32Array";
            case Scalar::i64: return "BigInt64Array";
            case Scalar::u64: return "BigUint64Array";
            case Scalar::isize: return wasm64 ? "BigInt64Array" : "Int32Array";
            case Scalar::usize: return wasm64 ? "BigUint64Array" : "Uint32Array";
            case Scalar::f32: return "Float32Array";
            case Scalar::f64: return "Float64Array";
            default: return "";
        }
    }

    void Generator::EmitTypedArrayHelpers(const TypeInfo &info, bool has_default_ctor, std::string &members, std::string &dts, std::set<std::string> &used_inst, std::set<std::string> &used_static)
    {
        // The pattern of the contiguous containers in the C bindings: `data()` returning `T *` (the const and the mutable overloads), `size()`, and optionally `resize(n)`.
        const CInterop::ClassMethod *data = nullptr, *data_mut = nullptr, *size = nullptr, *resize = nullptr;
        for (const auto &method : info.class_desc->methods)
        {
            auto reg = std::get_if<CInterop::MethodKinds::Regular>(&method.var);
            if (!reg || method.is_static || method.params.empty() || !method.params.front().is_this_param || method.params.front().c_params.size() != 1 || !exported_c_functions.contains(method.c_name))
                continue;
            const bool const_this = ParseTypeOrThrow(method.params.front().c_params.front().c_type).IsConst(1);
            const cppdecl::Type &ret_c = ParseTypeOrThrow(method.ret.c_type);
            if (reg->name == "data" && method.params.size() == 1 && ret_c.modifiers.size() == 1 && ret_c.Is<cppdecl::Pointer>())
                (const_this ? data : data_mut) = &method;
            else if (reg->name == "size" && method.params.size() == 1 && ret_c.modifiers.empty())
                size = &method;
            else if (reg->name == "resize" && method.params.size() == 2 && method.params[1].c_params.size() == 1 && ParseTypeOrThrow(method.params[1].c_params[0].c_type).modifiers.empty() && !resize)
                resize = &method;
        }
        if (!data || !size)
            return;
        cppdecl::Type elem_c = ParseTypeOrThrow(data->ret.c_type);
        elem_c.RemoveModifier();
        elem_c.RemoveQualifiers(cppdecl::CvQualifiers::const_);
        auto elem = ContiguousElem(elem_c);
        if (!elem)
            return;
        const std::string cls = TypedArrayClass(elem->scalar);
        if (cls.empty())
            return;
        auto size_type = CTypeToJs(size->ret.c_type);
        if (!size_type || !IsInteger(size_type->scalar))
            return;
        std::optional<JsType> resize_type;
        if (resize)
        {
            resize_type = CTypeToJs(resize->params[1].c_params[0].c_type);
            if (!resize_type || !IsInteger(resize_type->scalar) || !data_mut || !exported_c_functions.contains(data_mut->c_name))
                resize_type.reset();
        }

        const std::string self = PtrToWasm("this.rawPointer()");
        const std::string count = std::to_string(elem->count);
        const std::string n_expr = FromWasm(size_type->scalar, "ffi.cppCall(() => ffi.C." + size->c_name + "(" + self + "))");
        const std::string p_expr = PtrFromWasm("ffi.cppCall(() => ffi.C." + data->c_name + "(" + self + "))");
        // `size_t` elements are numbers in the API like everywhere else, while the memory (and `view()`) holds `bigint`s.
        const bool ptr_sized_elem = wasm64 && IsPointerSized(elem->scalar);
        const std::string ts_elem = IsBigInt(elem->scalar) ? "bigint" : ptr_sized_elem ? "number | bigint" : "number";
        const std::string layout = elem->count == 1 ? "one scalar per element" : count + " scalars per element";

        std::string to_array = UniqueName(used_inst, "toArray");
        if (ptr_sized_elem)
        {
            dts += "/** The elements as a new array of numbers, " + layout + ". */\n" + to_array + "(): number[];\n";
            members += to_array + "()\n{\n    const __n = " + n_expr + ";\n    const __p = " + p_expr + ";\n    return Array.from(ffi.typedArrayAt(" + cls + ", __p, __n * " + count + "), Number);\n}\n\n";
        }
        else
        {
            dts += "/** The elements as a new `" + cls + "`, " + layout + ". */\n" + to_array + "(): " + cls + ";\n";
            members += to_array + "()\n{\n    const __n = " + n_expr + ";\n    const __p = " + p_expr + ";\n    return ffi.typedArrayCopy(" + cls + ", __p, __n * " + count + ");\n}\n\n";
        }
        std::string view = UniqueName(used_inst, "view");
        dts += "/** A `" + cls + "` over the wasm memory of the elements, " + layout + ", without a copy. It becomes invalid when the wasm memory grows (any allocation can do that) or the container changes, so use it right away. */\n" + view + "(): " + cls + ";\n";
        members += view + "()\n{\n    const __n = " + n_expr + ";\n    const __p = " + p_expr + ";\n    return ffi.typedArrayAt(" + cls + ", __p, __n * " + count + ");\n}\n\n";
        if (resize_type)
        {
            std::string set_from = UniqueName(used_inst, "setFromArray");
            dts += "/** Resizes to `array.length / " + count + "` elements and copies the scalars in. */\n" + set_from + "(array: ArrayLike<" + ts_elem + ">): void;\n";
            members += set_from + "(array)\n{\n    const __n = Math.floor(array.length / " + count + ");\n";
            members += "    ffi.cppCall(() => ffi.C." + resize->c_name + "(" + self + ", " + ToWasm(resize_type->scalar, "__n") + "));\n";
            members += "    const __p = " + PtrFromWasm("ffi.cppCall(() => ffi.C." + data_mut->c_name + "(" + self + "))") + ";\n";
            if (ptr_sized_elem)
                members += "    const __src = Array.from(array, ffi.toI64);\n    ffi.typedArrayAt(" + cls + ", __p, __n * " + count + ").set(__src.length === __n * " + count + " ? __src : __src.slice(0, __n * " + count + "));\n}\n\n";
            else
                members += "    ffi.typedArrayAt(" + cls + ", __p, __n * " + count + ").set(array.length === __n * " + count + " ? array : Array.prototype.slice.call(array, 0, __n * " + count + "));\n}\n\n";
            if (has_default_ctor)
            {
                std::string from = UniqueName(used_static, "fromArray");
                dts += "/** A new container with `array.length / " + count + "` elements, the scalars copied from `array`. */\nstatic " + from + "(array: ArrayLike<" + ts_elem + ">): " + info.js_ref + ";\n";
                members += "static " + from + "(array)\n{\n    const __ret = new " + info.js_ref + "();\n    __ret." + set_from + "(array);\n    return __ret;\n}\n\n";
            }
        }
    }

    void Generator::EmitExpected(const TypeInfo &info, std::string &members, std::string &dts)
    {
        const auto &e = *info.expected;
        std::string doc = e.value ? "The value, or throws `UnexpectedResultException` with the error. The returned reference keeps this object alive." : "Throws `UnexpectedResultException` with the error, if any.";
        dts += "/** " + doc + " The wrappers of the functions returning this type do this automatically. */\n";
        dts += "valueOrThrow(): " + e.value_ts_type + ";\n";
        members += "valueOrThrow()\n{\n";
        members += "    const __owner = this;\n";
        members += "    if (!" + FromWasm(Scalar::bool_, "ffi.cppCall(() => ffi.C." + e.success->c_name + "(" + PtrToWasm("this.rawPointer()") + "))") + ")\n    {\n";
        members += Indent(e.error_pre, 2);
        members += "        const __ret = ffi.cppCall(() => ffi.C." + e.error->c_name + "(" + PtrToWasm("this.rawPointer()") + "));\n";
        members += "        ffi.check();\n";
        members += "        throw new ffi.UnexpectedResultException(String(" + e.error_convert + "));\n    }\n";
        if (e.value)
        {
            members += Indent(e.value_pre, 1);
            members += "    const __ret = ffi.cppCall(() => ffi.C." + e.value->c_name + "(" + PtrToWasm("this.rawPointer()") + "));\n";
            members += "    ffi.check();\n";
            members += "    return " + e.value_convert + ";\n";
        }
        members += "}\n\n";
    }

    void Generator::EmitRuntime()
    {
        const std::string &hp = c_desc.helpers_prefix;
        const TypeInfo *std_string = nullptr;
        if (auto iter = types_by_cpp_name.find("std::string"); iter != types_by_cpp_name.end() && exported_c_functions.contains(iter->second.c_name + "_data") && exported_c_functions.contains(iter->second.c_name + "_size") && iter->second.has_destroy)
            std_string = &iter->second;

        std::string js = R"(// The runtime support of the bindings.

/** The Emscripten module, after `init()`. */
export let M = null;
/** The raw wasm exports of the module: the C functions of the bindings. In wasm64 modules the pointers are `bigint`s here. */
export let C = null;

// The heap views. In a `-pthread` module another thread can grow the memory at any time, which makes the views of this thread stale
// (reads past the old length give `undefined`, writes are dropped), so every access goes through these functions, which compare
// the buffer first, like Emscripten's own `GROWABLE_HEAP_*`.
let heapBuffer = null;
let heap8, heapU8, heap16, heapU16, heap32, heapU32, heap64, heapU64, heapF32, heapF64;
function updateHeapViews()
{
    heapBuffer = M.wasmMemory.buffer;
    heap8 = new Int8Array(heapBuffer);
    heapU8 = new Uint8Array(heapBuffer);
    heap16 = new Int16Array(heapBuffer);
    heapU16 = new Uint16Array(heapBuffer);
    heap32 = new Int32Array(heapBuffer);
    heapU32 = new Uint32Array(heapBuffer);
    heap64 = new BigInt64Array(heapBuffer);
    heapU64 = new BigUint64Array(heapBuffer);
    heapF32 = new Float32Array(heapBuffer);
    heapF64 = new Float64Array(heapBuffer);
}
/** The current view over the wasm memory. Don't keep it: it becomes stale when the memory grows. */
export function HEAP8() {if (M.wasmMemory.buffer !== heapBuffer) updateHeapViews(); return heap8;}
export function HEAPU8() {if (M.wasmMemory.buffer !== heapBuffer) updateHeapViews(); return heapU8;}
export function HEAP16() {if (M.wasmMemory.buffer !== heapBuffer) updateHeapViews(); return heap16;}
export function HEAPU16() {if (M.wasmMemory.buffer !== heapBuffer) updateHeapViews(); return heapU16;}
export function HEAP32() {if (M.wasmMemory.buffer !== heapBuffer) updateHeapViews(); return heap32;}
export function HEAPU32() {if (M.wasmMemory.buffer !== heapBuffer) updateHeapViews(); return heapU32;}
export function HEAP64() {if (M.wasmMemory.buffer !== heapBuffer) updateHeapViews(); return heap64;}
export function HEAPU64() {if (M.wasmMemory.buffer !== heapBuffer) updateHeapViews(); return heapU64;}
export function HEAPF32() {if (M.wasmMemory.buffer !== heapBuffer) updateHeapViews(); return heapF32;}
export function HEAPF64() {if (M.wasmMemory.buffer !== heapBuffer) updateHeapViews(); return heapF64;}

/** The marker first argument of the constructors that wrap an existing pointer: `new X(RAW, pointer, owned, owner)`. */
export const RAW = Symbol("mrbind.raw");

/** How an object is passed to a C function. Matches the C enum `)" + hp + R"(PassBy`. */
export const PASS_BY_DEFAULT_CONSTRUCT = 0;
export const PASS_BY_COPY = 1;
export const PASS_BY_MOVE = 2;
export const PASS_BY_MOVE_AND_DESTROY = 3;
export const PASS_BY_DEFAULT_ARGUMENT = 4;
export const PASS_BY_NO_OBJECT = 5;

/** A C++ exception thrown by the C bindings. */
export class CppException extends Error
{
    constructor(message)
    {
        super(message);
        this.name = "CppException";
    }
}

/** Thrown by the wrappers of C++ functions returning `expected<T, E>` when the result holds an error. The message is the error converted to a string. */
export class UnexpectedResultException extends Error
{
    constructor(message)
    {
        super(message);
        this.name = "UnexpectedResultException";
    }
}

// What the wrapper must throw once the C call returns: a C++ exception message reported by the C bindings (a string),
// or whatever a JS callback threw (wrapped in an object).
let pending = null;

/** Throws if the last call into the C bindings threw a C++ exception, or a JS callback threw. The wrappers call this after every C call. */
export function check()
{
    if (pending !== null)
    {
        const p = pending;
        pending = null;
        if (typeof p === "string")
            throw new CppException(p);
        throw p.thrown;
    }
}

/** Called by the callback trampolines when the JS function throws. The exception is rethrown by the wrapper that made the C call. */
export function callbackFailed(thrown)
{
    if (pending === null)
        pending = {thrown};
}

/**
 * Converts what a wasm function threw to the error to rethrow: a C++ exception that escaped the C bindings becomes a `CppException`
 * (with the message when the module was linked with `-sEXPORT_EXCEPTION_HANDLING_HELPERS`), a pending JS callback exception is rethrown as is.
 */
export function cppError(thrown)
{
    if (pending !== null)
    {
        const p = pending;
        pending = null;
        if (typeof p !== "string")
            return p.thrown;
    }
    // A C++ exception is the exception pointer (JS EH), a `WebAssembly.Exception` (wasm EH), or Emscripten's own `CppException`
    // holding the pointer in `excPtr` (JS EH with `-sEXCEPTION_STACK_TRACES`, which `-sASSERTIONS` implies).
    let exc = thrown;
    if (exc !== null && typeof exc === "object" && "excPtr" in exc)
        exc = exc.excPtr;
    if (typeof exc === "bigint")
        exc = Number(exc); // In a wasm64 module.
    if (typeof exc === "number" || (typeof WebAssembly.Exception === "function" && exc instanceof WebAssembly.Exception))
    {
        let message = "C++ exception";
        if (typeof M.getExceptionMessage === "function")
        {
            try
            {
                const [type, text] = M.getExceptionMessage(exc);
                message = text ? type + ": " + text : type;
            }
            catch (e)
            {
                return thrown; // Not a C++ exception after all.
            }
        }
        if (typeof M.decrementExceptionRefcount === "function")
            M.decrementExceptionRefcount(exc); // Takes the same forms as `getExceptionMessage()`.
        return new CppException(message);
    }
    return thrown;
}

/**
 * Calls `func` (which calls into C), converting what it throws with `cppError()` and checking for a pending exception.
 * An escaping C++ exception leaves the wasm stack pointer where the throwing frame had it, so it's restored here.
 */
export function cppCall(func)
{
    const sp = M.stackSave();
    let ret;
    try
    {
        ret = func();
    }
    catch (e)
    {
        M.stackRestore(sp);
        throw cppError(e);
    }
    check();
    return ret;
}

function exceptionHandler(messages, typeNames, userdata)
{
    const base = PTR_FROM_WASM(messages);
    let text = "";
    for (let i = 0;; i++)
    {
        const message = MESSAGE_AT(base, i);
        if (message === 0)
            break;
        if (i > 0)
            text += "\n";
        text += M.UTF8ToString(message);
    }
    pending = text;
}

/**
 * Binds the wrappers to an instantiated Emscripten module. The module must be linked with the flags from `emcc_link_flags.rsp`.
 * Called by `init()` and `initWithModule()` of the root module.
 */
export function init(module)
{
    if (M !== null)
        throw new Error("The bindings are already initialized.");
    if (!module || !module.wasmExports)
        throw new Error("Not an Emscripten module with exported `wasmExports`, see `emcc_link_flags.rsp`.");
    M = module;
    C = module.wasmExports;
    // An optimized link minifies the names of the wasm exports (an internal Emscripten setting), then the real names are only on
    // the `_name` wrappers of the module, which take and return the same raw values as the exports.
    if (typeof C[PROBE_FUNCTION] !== "function")
    {
        C = {};
        for (const key in module)
        {
            if (key.length > 1 && key[0] === "_" && typeof module[key] === "function")
                C[key.slice(1)] = module[key];
        }
        if (typeof C[PROBE_FUNCTION] !== "function")
            throw new Error("The module doesn't export the C bindings, see `emcc_link_flags.rsp` and `exported_functions.txt`.");
    }
)";
        if (c_desc.exception_handling_enabled)
        {
            js += "    // C++ exceptions are reported by the C bindings through this callback, which stores the message until the wrapper checks it.\n";
            js += "    if (typeof C." + hp + "SetExceptionHandler === \"function\")\n";
            js += "        C." + hp + "SetExceptionHandler(" + PtrToWasm("addFunction(exceptionHandler, \"vppp\")") + ", " + PtrToWasm("0") + ");\n";
        }
        js += R"(}

/** Allocates on the wasm heap. */
export function malloc(size)
{
    const p = MALLOC(size);
    if (p === 0)
        throw new Error("The wasm heap is out of memory.");
    return p;
}

/** Frees memory allocated by `malloc()`. */
export function free(p)
{
    FREE(p);
}

// The wasm stack is small (64 KB by default) and `stackAlloc()` doesn't check for overflow, so the temporaries above this size go to the heap.
// They're freed by the `stackRestore()` of the wrapper that allocated them: `stackSave()` opens a frame, the wrappers always pair the two.
const STACK_TEMP_LIMIT = 4096;
const heapTemps = [];
const heapTempFrames = [];

/** Saves the wasm stack pointer and opens a frame for the temporaries. Restore with `stackRestore()` in a `finally`. */
export function stackSave()
{
    heapTempFrames.push(heapTemps.length);
    return M.stackSave();
}

/** Restores the wasm stack pointer and frees the heap temporaries of the frame. */
export function stackRestore(p)
{
    M.stackRestore(p);
    const n = heapTempFrames.pop();
    while (heapTemps.length > n)
        free(heapTemps.pop());
}

/** Allocates `size` bytes of temporary memory: on the wasm stack, or on the heap for the large ones. */
export function stackAlloc(size)
{
    if (size <= STACK_TEMP_LIMIT)
        return STACK_ALLOC(size);
    const p = malloc(size);
    heapTemps.push(p);
    return p;
}

/** Copies `size` bytes from `src` to temporary memory, see `stackAlloc()`. */
export function stackCopy(src, size)
{
    const p = stackAlloc(size);
    HEAPU8().copyWithin(p, src, src + size);
    return p;
}

/** Allocates `size` bytes of temporary memory and calls `write` with the address, see `stackAlloc()`. */
export function stackScalar(size, write)
{
    const p = stackAlloc(size);
    write(p);
    return p;
}

let utf8End_ = 0;

/** Copies the UTF-8 encoding of a string to temporary memory (see `stackAlloc()`), with a null terminator. `utf8End()` then returns the end pointer. */
export function utf8(str)
{
    const len = M.lengthBytesUTF8(str);
    const p = stackAlloc(len + 1);
    M.stringToUTF8(str, p, len + 1);
    utf8End_ = p + len;
    return p;
}

/** The end pointer of the string last copied by `utf8()`. */
export function utf8End() {return utf8End_;}

/** Decodes a UTF-8 string of `size` bytes at `ptr`. */
export function string(ptr, size)
{
    return size === 0 ? "" : M.UTF8ToString(ptr, size);
}
)";
        if (std_string)
        {
            js += "\n/** The contents of a `std::string` owned by the C bindings, which is then destroyed. */\n";
            js += "export function takeString(ptr)\n{\n";
            js += "    const ret = string(" + PtrFromWasm("cppCall(() => C." + std_string->c_name + "_data(" + PtrToWasm("ptr") + "))") + ", " + FromWasm(Scalar::usize, "cppCall(() => C." + std_string->c_name + "_size(" + PtrToWasm("ptr") + "))") + ");\n";
            js += "    C." + std_string->c_name + "_Destroy(" + PtrToWasm("ptr") + ");\n    return ret;\n}\n";
        }
        js += R"(
/** The pointer of a wrapper, or 0 for a null wrapper. */
export function ptr(object)
{
    return object == null ? 0 : object.rawPointer();
}

/** The pointer of a wrapper. Throws if the wrapper is null. */
export function ptrNonNull(object, name)
{
    if (object == null)
        throw new TypeError("The parameter `" + name + "` must not be null.");
    return object.rawPointer();
}

export function nonNull(value, name)
{
    if (value == null)
        throw new TypeError("The parameter `" + name + "` must not be null.");
    return value;
}

export function nonNullString(value, name)
{
    if (typeof value !== "string")
        throw new TypeError("The parameter `" + name + "` must be a string.");
    return value;
}

export function nonNullFunction(value, name)
{
    if (typeof value !== "function")
        throw new TypeError("The parameter `" + name + "` must be a function.");
    return value;
}

/** A 64-bit integer parameter: a `bigint` as is, a `number` truncated. */
export function toI64(value)
{
    return typeof value === "bigint" ? value : BigInt(Math.trunc(value));
}

/** Registers a JS function in the wasm function table. Needs `-sALLOW_TABLE_GROWTH`. */
export function addFunction(func, signature)
{
    return M.addFunction(func, signature);
}

// The JS functions held by the `std::function` instances, keyed by the ids that are passed to C as the user data pointers.
// Each entry is the function and its reference count: the copies of a `std::function` share the user data.
const CALLBACKS = new Map();
let nextCallbackId = 1;

/** Registers a function and returns its user data pointer, with one reference. */
export function newCallbackState(func)
{
    const id = nextCallbackId++;
    CALLBACKS.set(id, {func, refs: 1});
    return id;
}

/** The function registered under a user data pointer. */
export function callbackState(userdata)
{
    const entry = CALLBACKS.get(userdata);
    if (entry === undefined)
        throw new Error("Unknown callback state: " + userdata + ".");
    return entry.func;
}

// The `userdata_callback` of the C bindings: releases the user data of `this` object, then copies the other one into it, if any.
function callbackStateChanged(thisUserdata, otherUserdata)
{
    const slot = PTR_FROM_WASM(thisUserdata);
    const other = PTR_FROM_WASM(otherUserdata);
    const current = PTR_READ(slot);
    if (current !== 0)
    {
        const entry = CALLBACKS.get(current);
        if (entry !== undefined && --entry.refs === 0)
            CALLBACKS.delete(current);
        PTR_WRITE(slot, 0);
    }
    if (other !== 0)
    {
        const entry = CALLBACKS.get(other);
        if (entry !== undefined)
            entry.refs++;
        PTR_WRITE(slot, other);
    }
}

let callbackStateStub_ = 0;
export function callbackStateStub()
{
    return callbackStateStub_ || (callbackStateStub_ = addFunction(callbackStateChanged, "vpp"));
}

/** A copy of `size` bytes at `src` as an owned struct wrapper, for the callbacks receiving structs by value. */
export function structCopy(cls, src, size)
{
    const p = malloc(size);
    HEAPU8().copyWithin(p, src, src + size);
    return new cls(RAW, p, true, null);
}

/** An owned struct wrapper filled by `write`, for the callbacks receiving singleton structs as scalars. */
export function structFromScalar(cls, size, write)
{
    const p = malloc(size);
    HEAPU8().fill(0, p, p + size);
    write(p);
    return new cls(RAW, p, true, null);
}

/** A copy of `count` scalars of the typed array class `cls` at `ptr`. */
export function typedArrayCopy(cls, ptr, count)
{
    return new cls(HEAPU8().buffer, ptr, count).slice();
}

/** A typed array of class `cls` over `count` scalars at `ptr` in the wasm memory, without a copy. Invalid once the memory grows. */
export function typedArrayAt(cls, ptr, count)
{
    return new cls(HEAPU8().buffer, ptr, count);
}

/** Zeroed memory for a struct. */
export function zeroStruct(size)
{
    const p = malloc(size);
    HEAPU8().fill(0, p, p + size);
    return p;
}

// Destroys the C++ objects of the wrappers that were garbage-collected without `delete()`.
const registry = new FinalizationRegistry((state) =>
{
    if (state.owned)
    {
        state.owned = false;
        state.destroy(state.ptr);
    }
});

/**
 * The base class of the wrappers of the opaque C++ classes.
 *
 * An instance either owns its C++ object (then the object is destroyed when `delete()` is called, or when the wrapper is garbage-collected),
 * or is a reference to an object owned by something else. References returned by methods keep their owner alive.
 * Since the garbage collector is not prompt, call `delete()` (or use `using`) on the large objects.
 */
export class CppObject
{
    /** Wraps a pointer from the C bindings. If `destroy` is not null, the object is owned and `destroy` is called on it when the wrapper dies. `owner` is kept alive as long as this wrapper is. */
    constructor(ptr, destroy, owner)
    {
        if (ptr === 0)
            throw new Error("The C bindings returned a null pointer.");
        this.__ptr = ptr;
        this.__owner = owner;
        this.__state = null;
        if (destroy)
        {
            this.__state = {ptr, destroy, owned: true};
            registry.register(this, this.__state, this);
        }
    }

    /** The address of the C++ object. Throws if the wrapper was deleted or moved from. */
    rawPointer()
    {
        if (this.__ptr === 0)
            throw new Error("This object was deleted or moved from.");
        return this.__ptr;
    }

    /** Does this wrapper own its C++ object? */
    isOwned() {return this.__state !== null && this.__state.owned;}

    /** Destroys the C++ object now, if owned. The wrapper can't be used after this. Calling it again does nothing. */
    delete()
    {
        if (this.__state !== null)
        {
            registry.unregister(this);
            if (this.__state.owned)
            {
                this.__state.owned = false;
                this.__state.destroy(this.__state.ptr);
            }
        }
        this.__ptr = 0;
        this.__owner = null;
    }

    /** Gives up the ownership of the C++ object and returns its pointer. The caller is responsible for destroying it. The wrapper can't be used after this. */
    release()
    {
        if (!this.isOwned())
            throw new Error("This object is not owned by the wrapper, it can't be moved from.");
        registry.unregister(this);
        this.__state.owned = false;
        const p = this.__ptr;
        this.__ptr = 0;
        this.__owner = null;
        return p;
    }
}
if (typeof Symbol.dispose === "symbol")
    CppObject.prototype[Symbol.dispose] = CppObject.prototype.delete;

/**
 * The base class of the wrappers of the C++ structs exposed with `--expose-as-struct`.
 *
 * An instance is a view over wasm memory holding the struct, the fields are accessors reading and writing it in place.
 * Instances created in JS own their memory (freed by `delete()` or by the garbage collector),
 * those returned by reference from the bindings point into memory owned by something else, which they keep alive.
 */
export class CppStruct extends CppObject
{
    constructor(ptr, owned, owner)
    {
        super(ptr, owned ? free : null, owner);
    }

    /** A copy of the struct, in its own memory. */
    copy()
    {
        const cls = this.constructor;
        const p = malloc(cls.SIZE);
        HEAPU8().copyWithin(p, this.rawPointer(), this.rawPointer() + cls.SIZE);
        return new cls(RAW, p, true, null);
    }

    /** Overwrites the contents with those of another struct. */
    set(other)
    {
        const src = ptrNonNull(other, "other");
        HEAPU8().copyWithin(this.rawPointer(), src, src + this.constructor.SIZE);
    }
}

/**
 * The base class of `int_output`, `float_output`, ... (named after the C type, like in the Python bindings), which the wrappers take for
 * the mutable scalar parameters: `int &` needs exactly one element, `int *` accepts null, one element, or an array.
 * An instance owns `length` scalars in wasm memory (freed by `delete()` or by the garbage collector), which the C++ functions read and write.
 */
export class ScalarOutput extends CppObject
{
    /** `size` elements equal to `value`, zero by default. */
    constructor(size = 1, value = undefined)
    {
        if (!Number.isSafeInteger(size) || size < 0)
            throw new RangeError("The size must be a non-negative integer.");
        super(malloc(Math.max(size, 1) * new.target.SIZE), free, null);
        this.length = size;
        for (let i = 0; i < size; i++)
            this.set(i, value === undefined ? new.target.ZERO : value);
    }

    /** The element `i`. */
    at(i)
    {
        return this.constructor.read(this.rawPointer() + scalarOutputIndex(this, i) * this.constructor.SIZE);
    }

    /** Sets the element `i`. */
    set(i, value)
    {
        if (!this.constructor.check(value))
            throw new TypeError("Expected " + this.constructor.TYPE + ", got " + typeof value + ".");
        this.constructor.write(this.rawPointer() + scalarOutputIndex(this, i) * this.constructor.SIZE, value);
    }

    /** The only element. Throws unless there is exactly one. */
    get value()
    {
        scalarOutputSingle(this);
        return this.at(0);
    }
    set value(value)
    {
        scalarOutputSingle(this);
        this.set(0, value);
    }

    /** A copy of the elements. */
    get values()
    {
        const ret = [];
        for (let i = 0; i < this.length; i++)
            ret.push(this.at(i));
        return ret;
    }

    toString()
    {
        return this.constructor.name + "[" + this.values.join(", ") + "]";
    }

    /** The pointer for a reference parameter: checks that there is exactly one element. */
    static ref(object, name)
    {
        const p = ptrNonNull(object, name);
        scalarOutputSingle(object);
        return p;
    }
}

function scalarOutputIndex(object, i)
{
    if (!Number.isSafeInteger(i) || i < 0 || i >= object.length)
        throw new RangeError("Index " + i + " is out of range, the size is " + object.length + ".");
    return i;
}

function scalarOutputSingle(object)
{
    if (object.length !== 1)
        throw new RangeError("Expected exactly one value, the size is " + object.length + ".");
}
)";
        // The pointer-size dependent spots of the runtime.
        js = Strings::Replace(js, "PROBE_FUNCTION", "\"" + EscapeJsString(exported_c_functions.empty() ? "malloc" : *exported_c_functions.begin()) + "\"");
        js = Strings::Replace(js, "PTR_FROM_WASM(messages)", PtrFromWasm("messages"));
        js = Strings::Replace(js, "MESSAGE_AT(base, i)", Strings::Replace(HeapRead(Scalar::ptr, "base + i * " + std::to_string(PointerSize())), "ffi.", ""));
        // `_malloc()`, `_free()` and `stackAlloc()` are the wrappers Emscripten emits for its own exports, which take and return numbers
        //   in wasm64 too, unlike the raw exports. `>>> 0` makes the wasm32 addresses unsigned, and would truncate the wasm64 ones.
        js = Strings::Replace(js, "MALLOC(size)", wasm64 ? "M._malloc(size)" : "M._malloc(size) >>> 0");
        js = Strings::Replace(js, "STACK_ALLOC(size)", wasm64 ? "M.stackAlloc(size)" : "M.stackAlloc(size) >>> 0");
        js = Strings::Replace(js, "FREE(p)", "M._free(p)");
        js = Strings::Replace(js, "PTR_FROM_WASM(thisUserdata)", PtrFromWasm("thisUserdata"));
        js = Strings::Replace(js, "PTR_FROM_WASM(otherUserdata)", PtrFromWasm("otherUserdata"));
        js = Strings::Replace(js, "PTR_READ(slot)", Strings::Replace(HeapRead(Scalar::ptr, "slot"), "ffi.", ""));
        js = Strings::Replace(js, "PTR_WRITE(slot, 0)", Strings::Replace(HeapWrite(Scalar::ptr, "slot", "0"), "ffi.", ""));
        js = Strings::Replace(js, "PTR_WRITE(slot, other)", Strings::Replace(HeapWrite(Scalar::ptr, "slot", "other"), "ffi.", ""));
        output_files["ffi.mjs"] = js;

        std::string dts = R"(// The runtime support of the bindings.

// `Symbol.dispose` is only declared by the `esnext.disposable` lib of TypeScript, so declare it here too (the declarations merge).
declare global
{
    interface SymbolConstructor
    {
        readonly dispose: unique symbol;
    }
}

/** The Emscripten module, after `init()`. */
export let M: any;
/** The raw wasm exports of the module: the C functions of the bindings. In wasm64 modules the pointers are `bigint`s here. */
export let C: any;
/** The current view over the wasm memory. Don't keep it: it becomes stale when the memory grows. */
export function HEAP8(): Int8Array;
export function HEAPU8(): Uint8Array;
export function HEAP16(): Int16Array;
export function HEAPU16(): Uint16Array;
export function HEAP32(): Int32Array;
export function HEAPU32(): Uint32Array;
export function HEAP64(): BigInt64Array;
export function HEAPU64(): BigUint64Array;
export function HEAPF32(): Float32Array;
export function HEAPF64(): Float64Array;
/** The marker first argument of the constructors that wrap an existing pointer: `new X(RAW, pointer, owned, owner)`. */
export const RAW: unique symbol;
export const PASS_BY_DEFAULT_CONSTRUCT: 0;
export const PASS_BY_COPY: 1;
export const PASS_BY_MOVE: 2;
export const PASS_BY_MOVE_AND_DESTROY: 3;
export const PASS_BY_DEFAULT_ARGUMENT: 4;
export const PASS_BY_NO_OBJECT: 5;
/** A C++ exception thrown by the C bindings. */
export class CppException extends Error {}
/** Thrown by the wrappers of C++ functions returning `expected<T, E>` when the result holds an error. The message is the error converted to a string. */
export class UnexpectedResultException extends Error {}
export function check(): void;
export function callbackFailed(thrown: unknown): void;
export function cppError(thrown: unknown): unknown;
export function cppCall<T>(func: () => T): T;
export function init(module: any): void;
export function malloc(size: number): number;
export function free(p: number): void;
export function stackSave(): number;
export function stackRestore(p: number): void;
export function stackAlloc(size: number): number;
export function stackCopy(src: number, size: number): number;
export function stackScalar(size: number, write: (p: number) => void): number;
export function utf8(str: string): number;
export function utf8End(): number;
export function string(ptr: number, size: number): string;
)";
        if (std_string)
            dts += "export function takeString(ptr: number): string;\n";
        dts += R"(export function ptr(object: CppObject | null | undefined): number;
export function ptrNonNull(object: CppObject | null | undefined, name: string): number;
export function nonNull<T>(value: T | null | undefined, name: string): T;
export function nonNullString(value: unknown, name: string): string;
export function nonNullFunction<T>(value: T, name: string): T;
export function toI64(value: number | bigint): bigint;
export function addFunction(func: Function, signature: string): number;
export function newCallbackState(func: Function): number;
export function callbackState(userdata: number): Function;
export function callbackStateStub(): number;
export function structCopy<T>(cls: new (...args: any[]) => T, src: number, size: number): T;
export function structFromScalar<T>(cls: new (...args: any[]) => T, size: number, write: (p: number) => void): T;
export function zeroStruct(size: number): number;
export function typedArrayCopy<T>(cls: new (buffer: ArrayBufferLike, byteOffset: number, length: number) => T, ptr: number, count: number): T;
export function typedArrayAt<T>(cls: new (buffer: ArrayBufferLike, byteOffset: number, length: number) => T, ptr: number, count: number): T;
/**
 * The base class of the wrappers of the opaque C++ classes.
 *
 * An instance either owns its C++ object (then the object is destroyed when `delete()` is called, or when the wrapper is garbage-collected),
 * or is a reference to an object owned by something else. References returned by methods keep their owner alive.
 */
export class CppObject
{
    constructor(ptr: number, destroy: ((ptr: number) => void) | null, owner: unknown);
    /** The address of the C++ object. Throws if the wrapper was deleted or moved from. */
    rawPointer(): number;
    /** Does this wrapper own its C++ object? */
    isOwned(): boolean;
    /** Destroys the C++ object now, if owned. The wrapper can't be used after this. Calling it again does nothing. */
    delete(): void;
    [Symbol.dispose](): void;
    /** Gives up the ownership of the C++ object and returns its pointer. The caller is responsible for destroying it. The wrapper can't be used after this. */
    release(): number;
}
/**
 * The base class of the wrappers of the C++ structs exposed with `--expose-as-struct`.
 *
 * An instance is a view over wasm memory holding the struct, the fields are accessors reading and writing it in place.
 */
export class CppStruct extends CppObject
{
    constructor(ptr: number, owned: boolean, owner: unknown);
    /** A copy of the struct, in its own memory. */
    copy(): this;
    /** Overwrites the contents with those of another struct. */
    set(other: this): void;
}
/**
 * The base class of `int_output`, `float_output`, ... (named after the C type, like in the Python bindings), which the wrappers take for
 * the mutable scalar parameters: `int &` needs exactly one element, `int *` accepts null, one element, or an array.
 * An instance owns `length` scalars in wasm memory (freed by `delete()` or by the garbage collector), which the C++ functions read and write.
 */
export class ScalarOutput<T> extends CppObject
{
    /** `size` elements equal to `value`, zero by default. */
    constructor(size?: number, value?: T);
    readonly length: number;
    /** The element `i`. */
    at(i: number): T;
    /** Sets the element `i`. */
    set(i: number, value: T): void;
    /** The only element. Throws unless there is exactly one. */
    value: T;
    /** A copy of the elements. */
    readonly values: T[];
    /** The pointer for a reference parameter: checks that there is exactly one element. */
    static ref(object: ScalarOutput<unknown> | null | undefined, name: string): number;
}
)";
        output_files["ffi.d.mts"] = dts;
    }

    void Generator::EmitEnums()
    {
        for (const auto &[cpp_name, info] : types_by_cpp_name)
        {
            if (!info.IsEnum())
                continue;
            const auto &en = *info.enum_desc;
            const bool big = IsBigInt(info.enum_scalar);

            std::string js, dts;
            dts += MakeDocComment(en.comment, 0, "A C++ enum: the constants are numbers, so this also holds values that aren't named constants.");
            std::set<std::string> used;
            std::vector<std::pair<std::string, std::string>> consts; // JS name, value.
            for (const auto &elem : en.elems)
            {
                std::string value;
                std::int64_t v = std::int64_t(elem.unsigned_value);
                switch (info.enum_scalar)
                {
                    case Scalar::i8: v = std::int8_t(std::uint8_t(v)); break;
                    case Scalar::u8: v = std::uint8_t(v); break;
                    case Scalar::i16: v = std::int16_t(std::uint16_t(v)); break;
                    case Scalar::u16: v = std::uint16_t(v); break;
                    case Scalar::i32: v = std::int32_t(std::uint32_t(v)); break;
                    case Scalar::u32: v = std::uint32_t(v); break;
                    case Scalar::bool_: v = v != 0; break;
                    default: break;
                }
                if (info.enum_scalar == Scalar::u64)
                    value = std::to_string(elem.unsigned_value) + "n";
                else if (info.enum_scalar == Scalar::i64)
                    value = std::to_string(v) + "n";
                else
                    value = std::to_string(v);
                consts.emplace_back(UniqueName(used, JsPropertyName(elem.name)), value);
            }

            if (big)
            {
                js += "export const " + info.js_name + " = Object.freeze({\n";
                dts += "export declare const " + info.js_name + ": {\n";
                for (std::size_t i = 0; i < consts.size(); i++)
                {
                    js += "    " + consts[i].first + ": " + consts[i].second + ",\n";
                    dts += MakeDocComment(en.elems[i].comment, 1);
                    dts += "    readonly " + consts[i].first + ": " + consts[i].second + ";\n";
                }
                js += "});\n\n";
                dts += "};\nexport type " + info.js_name + " = bigint;\n\n";
            }
            else
            {
                // Like a TS numeric enum, with the reverse mapping.
                js += "export const " + info.js_name + " = Object.freeze({\n";
                dts += "export declare enum " + info.js_name + "\n{\n";
                for (std::size_t i = 0; i < consts.size(); i++)
                {
                    js += "    " + consts[i].first + ": " + consts[i].second + ",\n";
                    js += "    [" + consts[i].second + "]: \"" + EscapeJsString(consts[i].first) + "\",\n";
                    dts += MakeDocComment(en.elems[i].comment, 1);
                    dts += "    " + consts[i].first + " = " + consts[i].second + ",\n";
                }
                js += "});\n\n";
                dts += "}\n\n";
            }
            info.file->body += js;
            info.file->dts += dts;

            std::string line = "export { " + info.js_name + " as " + info.public_name + " } from \"" + info.module->to_root + "lib/_all.mjs\";\n";
            info.module->exports += line;
            info.module->exports_dts += line;
        }
    }

    void Generator::EmitClasses()
    {
        for (auto &[cpp_name, info] : types_by_cpp_name)
        {
            if (!info.class_desc)
                continue;
            const auto &cl = *info.class_desc;
            const std::string &def_name = info.js_name;

            std::string members, dts, dts_after;
            std::set<std::string> used_inst, used_static; // The member names.
            for (std::string_view key : kReservedInstance)
                used_inst.insert(std::string(key));
            for (std::string_view key : kReservedStatic)
                used_static.insert(std::string(key));
            if (info.IsExposedStruct())
            {
                // `CppStruct` has these. The opaque classes keep their own `set()` (e.g. of the bitsets).
                used_inst.insert("copy");
                used_inst.insert("set");
            }
            std::string head_doc, head;
            if (info.IsExposedStruct())
            {
                head_doc = MakeDocComment(cl.comment, 0, "Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.");
                head = "export class " + def_name + " extends ffi.CppStruct\n{\n";
                members += "static SIZE = " + std::to_string(info.layout.size) + ";\n";
                members += "static ALIGNMENT = " + std::to_string(info.layout.alignment) + ";\n\n";
                dts += "/** The size of the struct in bytes. */\nstatic readonly SIZE: number;\nstatic readonly ALIGNMENT: number;\n";
            }
            else
            {
                std::string note = info.has_destroy
                    ? "Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object."
                    : "Can't be created from JS, only references to it are used (`new X(ffi.RAW, pointer, false, owner)`).";
                head_doc = MakeDocComment(cl.comment, 0, note);
                head = "export class " + def_name + " extends ffi.CppObject\n{\n";
                if (info.has_destroy)
                    members += "static __destroy(ptr) {ffi.C." + info.c_name + "_Destroy(" + PtrToWasm("ptr") + ");}\n\n";
            }

            // Methods.
            std::vector<PreparedFunc> funcs;
            const std::string class_prefix = info.c_name + "_";

            // The fallback name derived from the C name, which is unique.
            auto FallbackName = [&](const std::string &c_name, bool is_operator) -> std::string
            {
                std::string suffix;
                if (c_name.starts_with(class_prefix))
                    return JsMethodName(c_name.substr(class_prefix.size()));
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
                return JsPropertyName((is_operator ? "op" : "") + Capitalize(collapsed));
            };

            // The fields first, as accessors. Those claim their names before the methods.
            struct FieldAccessor
            {
                std::string name;
                bool is_static = false;
                std::optional<PreparedFunc> getter, setter;
            };
            std::vector<FieldAccessor> accessors;
            std::vector<PreparedFunc> accessor_funcs; // The ones that don't fit the accessor shape, emitted as methods.

            if (info.IsExposedStruct())
            {
                // The fields in place.
                std::size_t field_index = 0;
                for (const auto &field : cl.fields)
                {
                    if (field.is_static)
                        continue;
                    const std::size_t offset = info.layout.field_offsets[field_index++];
                    auto type = CTypeToJs(field.type);
                    if (!type || type->IsVoid())
                        throw std::runtime_error("Can't express the type `" + field.type + "` of field `" + field.name + "` of exposed struct `" + cpp_name + "` in JS.");
                    const JsType &t = *type;
                    const std::string name = UniqueName(used_inst, JsPropertyName(field.name));
                    std::string doc = MakeDocComment(field.comment, 0);

                    // The element type and the offset expression for arrays.
                    const JsType &elem = t.array_dims.empty() ? t : *t.array_elem;
                    const std::size_t elem_size = t.array_dims.empty() ? t.size : elem.size;
                    std::string index_params, index_dts, offset_expr = "this.rawPointer() + " + std::to_string(offset);
                    if (!t.array_dims.empty())
                    {
                        std::string flat;
                        for (std::size_t i = 0; i < t.array_dims.size(); i++)
                        {
                            std::string idx = "i" + std::to_string(i);
                            index_params += (i > 0 ? ", " : "") + idx;
                            index_dts += (i > 0 ? ", " : "") + idx + ": number";
                            flat = i == 0 ? idx : "(" + flat + ") * " + std::to_string(t.array_dims[i]) + " + " + idx;
                        }
                        offset_expr += " + (" + flat + ") * " + std::to_string(elem_size);
                    }

                    std::string read, write, ts_type;
                    if (elem.scalar == Scalar::struct_)
                    {
                        const TypeInfo &st = *elem.type_info;
                        ts_type = st.js_ref;
                        read = "new " + st.js_ref + "(ffi.RAW, " + offset_expr + ", false, this)";
                        write = "ffi.HEAPU8().copyWithin(" + offset_expr + ", ffi.ptrNonNull(value, \"value\"), ffi.ptrNonNull(value, \"value\") + " + std::to_string(st.layout.size) + ")";
                    }
                    else
                    {
                        const Scalar s = elem.type_info ? elem.type_info->enum_scalar : elem.scalar;
                        ts_type = elem.type_info ? elem.type_info->js_ref : TsScalar(s, false);
                        read = HeapRead(s, offset_expr);
                        write = HeapWrite(s, offset_expr, "value");
                        if (IsBigInt(s))
                            ts_type = elem.type_info ? elem.type_info->js_ref : "bigint";
                    }
                    if (t.array_dims.empty())
                    {
                        dts += doc + name + ": " + ts_type + ";\n";
                        members += "get " + name + "() {return " + read + ";}\n";
                        members += "set " + name + "(value) {" + write + ";}\n\n";
                    }
                    else
                    {
                        std::string dims;
                        for (auto d : t.array_dims)
                            dims += "[" + std::to_string(d) + "]";
                        std::string getter = UniqueName(used_inst, "get" + Capitalize(name)), setter = UniqueName(used_inst, "set" + Capitalize(name));
                        dts += doc + "/** The element of the array field `" + EscapeJsString(field.name) + dims + "`. */\n" + getter + "(" + index_dts + "): " + ts_type + ";\n";
                        dts += setter + "(" + index_dts + ", value: " + ts_type + "): void;\n";
                        members += getter + "(" + index_params + ") {return " + read + ";}\n";
                        members += setter + "(" + index_params + ", value) {" + write + ";}\n\n";
                    }
                }
            }

            for (const auto &field : cl.fields)
            {
                if (info.IsExposedStruct() && !field.is_static)
                    continue;
                std::string field_name = JsPropertyName(field.name);
                const CInterop::ClassField::Accessor *getter = field.getter_const ? &*field.getter_const : field.getter_mutable ? &*field.getter_mutable : nullptr;
                FieldAccessor acc;
                acc.name = field_name;
                acc.is_static = field.is_static;
                if (getter)
                {
                    if (auto prepared = PrepareFunc(*getter, &info, false, field_name, FallbackName(getter->c_name, false)))
                    {
                        if (prepared->params.empty() && prepared->is_static == field.is_static && prepared->ret.ts_type != "void")
                            acc.getter = std::move(*prepared);
                        else
                            accessor_funcs.push_back(std::move(*prepared));
                    }
                }
                if (field.setter)
                {
                    if (auto prepared = PrepareFunc(*field.setter, &info, false, JsPropertyName("set" + Capitalize(field.name)), FallbackName(field.setter->c_name, false)))
                    {
                        if (prepared->params.size() == 1 && prepared->is_static == field.is_static && prepared->ret.ts_type == "void" && acc.getter)
                            acc.setter = std::move(*prepared);
                        else
                            accessor_funcs.push_back(std::move(*prepared));
                    }
                }
                if (field.getter_array_size)
                {
                    if (auto prepared = PrepareFunc(*field.getter_array_size, &info, false, JsPropertyName(field.name + "Size"), FallbackName(field.getter_array_size->c_name, false)))
                        accessor_funcs.push_back(std::move(*prepared));
                }
                if (acc.getter)
                {
                    acc.name = UniqueName(acc.is_static ? used_static : used_inst, acc.name);
                    accessors.push_back(std::move(acc));
                }
            }
            for (const auto &acc : accessors)
            {
                EmittedFunc g = EmitFuncBody(*acc.getter);
                std::string st = acc.is_static ? "static " : "";
                members += st + "get " + acc.name + "()\n" + g.js + "\n";
                if (acc.setter)
                {
                    EmittedFunc s = EmitFuncBody(*acc.setter);
                    members += st + "set " + acc.name + "(" + s.params_decl + ")\n" + s.js + "\n";
                    // E.g. a `std::string` field is read as the wrapper and written as a JS string.
                    const ParamStrings &p = acc.setter->params[0];
                    const std::string set_type = p.ts_type + (p.optional ? " | null | undefined" : "");
                    if (set_type == g.dts_ret)
                        dts += g.doc + st + acc.name + ": " + g.dts_ret + ";\n";
                    else
                        dts += g.doc + st + "get " + acc.name + "(): " + g.dts_ret + ";\n" + st + "set " + acc.name + "(" + p.name + ": " + set_type + ");\n";
                }
                else
                    dts += g.doc + st + "readonly " + acc.name + ": " + g.dts_ret + ";\n";
            }

            for (const auto &method : cl.methods)
            {
                std::string preferred, fallback;
                bool is_ctor = false;
                if (auto reg = std::get_if<CInterop::MethodKinds::Regular>(&method.var))
                {
                    preferred = JsPropertyName(reg->name);
                    fallback = FallbackName(method.c_name, false);
                }
                else if (std::holds_alternative<CInterop::MethodKinds::Constructor>(method.var))
                {
                    is_ctor = info.has_destroy || info.IsExposedStruct();
                    preferred = is_ctor ? "constructor" : "";
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
                    const bool ctor_shape = prepared->is_static && (info.IsExposedStruct() ? prepared->ret.returns_struct && prepared->ret.ts_type == info.js_ref : prepared->ret.owned_type == &info);
                    if (prepared->is_ctor && !ctor_shape)
                    {
                        prepared->is_ctor = false;
                        prepared->preferred_name.clear();
                    }
                    funcs.push_back(std::move(*prepared));
                }
            }
            for (auto &f : accessor_funcs)
                funcs.push_back(std::move(f));

            // The names: constructors, static and instance members are three scopes.
            std::vector<PreparedFunc> ctors, statics, insts;
            for (auto &f : funcs)
                (f.is_ctor ? ctors : f.is_static ? statics : insts).push_back(std::move(f));
            funcs.clear();

            auto EmitGroup = [&](std::vector<PreparedFunc> &fs, std::set<std::string> &used, bool is_static)
            {
                std::vector<std::string> names;
                std::vector<OverloadGroup> groups;
                ResolveNames(fs, used, names, groups);
                std::vector<EmittedFunc> emitted;
                for (const auto &f : fs)
                    emitted.push_back(EmitFuncBody(f));
                const std::string st = is_static ? "static " : "";
                for (const auto &group : groups)
                {
                    if (group.funcs.size() == 1)
                        continue;
                    dts += EmitDispatcherDts(fs, emitted, group, st, group.name, false);
                    members += st + group.name + "(...args)\n" + EmitDispatcher(fs, group, [&](std::size_t i, const std::string &args)
                    {
                        return (is_static ? info.js_ref + "." : "this.") + names[i] + "(" + args + ")";
                    }) + "\n";
                }
                for (std::size_t i = 0; i < fs.size(); i++)
                {
                    dts += emitted[i].doc + st + names[i] + "(" + emitted[i].dts_params + "): " + emitted[i].dts_ret + ";\n";
                    members += st + names[i] + "(" + emitted[i].params_decl + ")\n" + emitted[i].js + "\n";
                }
            };

            // Constructors: `__ctor(args)` dispatches to the `__ctor_...` helpers returning pointers.
            bool has_default_ctor = false;
            {
                std::vector<std::string> names;
                std::vector<OverloadGroup> groups;
                std::set<std::string> used_ctor;
                ResolveNames(ctors, used_ctor, names, groups);
                std::vector<EmittedFunc> emitted;
                for (const auto &f : ctors)
                    emitted.push_back(EmitFuncBody(f));
                OverloadGroup all{"constructor", {}};
                for (std::size_t i = 0; i < ctors.size(); i++)
                {
                    if (!ctors[i].is_ctor)
                        continue; // Became a static factory.
                    all.funcs.push_back(i);
                }
                const bool zero_init = info.IsExposedStruct() && std::none_of(all.funcs.begin(), all.funcs.end(), [&](std::size_t i){return ctors[i].params.empty();});
                has_default_ctor = zero_init || std::any_of(all.funcs.begin(), all.funcs.end(), [&](std::size_t i){return ctors[i].params.empty();});
                for (std::size_t i : all.funcs)
                {
                    std::string helper = "__ctor_" + std::to_string(i);
                    members += "static " + helper + "(" + emitted[i].params_decl + ")\n" + emitted[i].js + "\n";
                }
                dts += EmitDispatcherDts(ctors, emitted, all, "", "", true);
                if (zero_init)
                    dts += "/** Zero-initialized. */\nconstructor();\n";
                if (!all.funcs.empty() || zero_init)
                {
                    std::string dispatcher = EmitDispatcher(ctors, all, [&](std::size_t i, const std::string &args)
                    {
                        return info.js_ref + ".__ctor_" + std::to_string(i) + "(" + args + ")";
                    });
                    if (zero_init)
                        dispatcher = Strings::Replace(dispatcher, "    throw new TypeError(", "    if (__n === 0)\n        return ffi.zeroStruct(" + std::to_string(info.layout.size) + ");\n    throw new TypeError(");
                    members += "static __ctor(args)\n" + dispatcher + "\n";
                }
                else
                {
                    members += "static __ctor(args)\n{\n    throw new TypeError(\"`" + EscapeJsString(info.public_name) + "` can't be constructed from JS.\");\n}\n\n";
                }
                // The static factories that lost the constructor name.
                for (std::size_t i = 0; i < ctors.size(); i++)
                {
                    if (ctors[i].is_ctor)
                        continue;
                    std::string name = UniqueName(used_static, names[i]);
                    dts += emitted[i].doc + "static " + name + "(" + emitted[i].dts_params + "): " + info.js_ref + ";\n";
                    members += "static " + name + "(" + emitted[i].params_decl + ")\n" + emitted[i].js + "\n";
                }
            }

            // The constructor itself.
            std::string ctor;
            ctor += "constructor(...args)\n{\n";
            if (info.IsExposedStruct())
            {
                ctor += "    if (args[0] === ffi.RAW)\n    {\n        super(args[1], args[2], args[3]);\n        return;\n    }\n";
                ctor += "    super(" + info.js_ref + ".__ctor(args), true, null);\n";
            }
            else if (info.has_destroy)
            {
                ctor += "    if (args[0] === ffi.RAW)\n    {\n        super(args[1], args[2] ? " + info.js_ref + ".__destroy : null, args[3]);\n        return;\n    }\n";
                ctor += "    super(" + info.js_ref + ".__ctor(args), " + info.js_ref + ".__destroy, null);\n";
            }
            else
            {
                ctor += "    if (args[0] === ffi.RAW)\n    {\n        super(args[1], null, args[3]);\n        return;\n    }\n";
                ctor += "    super(" + info.js_ref + ".__ctor(args), null, null);\n";
            }
            ctor += "}\n\n";
            dts += "/** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */\nconstructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);\n";
            members += ctor;

            EmitGroup(statics, used_static, true);
            EmitGroup(insts, used_inst, false);

            EmitCasts(info, members, dts, used_inst, used_static);
            if (cl.callable_info && info.has_destroy)
                EmitStdFunction(info, members, dts, dts_after, used_inst, used_static);
            if (info.expected)
                EmitExpected(info, members, dts);
            if (!info.IsExposedStruct())
                EmitTypedArrayHelpers(info, has_default_ctor, members, dts, used_inst, used_static);

            // Conveniences for `std::string`.
            if (cpp_name == "std::string" && exported_c_functions.contains(info.c_name + "_data") && exported_c_functions.contains(info.c_name + "_size"))
            {
                dts += "/** The contents, decoded as UTF-8. */\ntoString(): string;\n";
                members += "toString()\n{\n    return ffi.string(" + PtrFromWasm("ffi.cppCall(() => ffi.C." + info.c_name + "_data(" + PtrToWasm("this.rawPointer()") + "))") + ", " + FromWasm(Scalar::usize, "ffi.cppCall(() => ffi.C." + info.c_name + "_size(" + PtrToWasm("this.rawPointer()") + "))") + ");\n}\n\n";
            }

            while (members.ends_with("\n\n"))
                members.pop_back();
            info.file->body += head_doc + head + Indent(members, 1) + "}\n\n";
            info.file->dts += head_doc + "export declare " + head.substr(7) + Indent(dts, 1) + "}\n\n" + dts_after;

            std::string line = "export { " + info.js_name + " as " + info.public_name + " } from \"" + info.module->to_root + "lib/_all.mjs\";\n";
            info.module->exports += line;
            info.module->exports_dts += line;
        }
    }

    void Generator::EmitFreeFunctions()
    {
        struct FuncInfo
        {
            Module *module = nullptr;
            FileModule *file = nullptr;
            std::string simple_name; // The C++ name, empty for operators.
            std::string c_derived_name; // Unique, derived from the C name.
            std::string lib_name; // The export name in the `lib` module.
        };
        std::vector<FuncInfo> infos;

        for (const auto &func : c_desc.functions)
        {
            FuncInfo &info = infos.emplace_back();
            info.file = &GetFileModule(func.output_file);
            info.lib_name = UniqueName(used_js_names, JsIdent(func.c_name));

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
                        info.simple_name = JsIdent(PartToString(name->parts.back()));
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
            info.c_derived_name = is_operator ? JsIdent("op" + Capitalize(suffix)) : JsIdent(JsMethodName(suffix));
            if (auto op = std::get_if<CInterop::FuncKinds::Operator>(&func.var))
                info.simple_name = OperatorName(op->token, op->is_post_incr_or_decr);
        }

        // Prepare per module, then resolve the names within each.
        struct Prepared
        {
            PreparedFunc func;
            std::size_t index = 0; // Into `infos`.
        };
        std::map<Module *, std::vector<Prepared>> per_module;
        for (std::size_t i = 0; i < c_desc.functions.size(); i++)
        {
            if (auto prepared = PrepareFunc(c_desc.functions[i], nullptr, false, infos[i].simple_name, infos[i].c_derived_name))
                per_module[infos[i].module].push_back({std::move(*prepared), i});
        }
        for (auto &[module, prepared] : per_module)
        {
            std::vector<PreparedFunc> funcs;
            for (auto &p : prepared)
                funcs.push_back(std::move(p.func));
            std::vector<std::string> names;
            std::vector<OverloadGroup> groups;
            ResolveNames(funcs, module->used_names, names, groups);
            std::vector<EmittedFunc> emitted;
            for (std::size_t i = 0; i < funcs.size(); i++)
            {
                emitted.push_back(EmitFuncBody(funcs[i]));
                const FuncInfo &fi = infos[prepared[i].index];
                // The implementation in the `lib` module, by the C name.
                fi.file->body += "export function " + fi.lib_name + "(" + emitted[i].params_decl + ")\n" + emitted[i].js + "\n";
                fi.file->dts += emitted[i].doc + "export declare function " + fi.lib_name + "(" + emitted[i].dts_params + "): " + emitted[i].dts_ret + ";\n\n";
            }
            std::set<std::size_t> in_dispatchers;
            for (const auto &group : groups)
            {
                if (group.funcs.size() == 1)
                    continue;
                for (std::size_t i : group.funcs)
                    in_dispatchers.insert(i);
                module->funcs += "export function " + group.name + "(...args)\n" + EmitDispatcher(funcs, group, [&](std::size_t i, const std::string &args)
                {
                    return "L." + infos[prepared[i].index].lib_name + "(" + args + ")";
                }) + "\n";
                module->funcs_dts += EmitDispatcherDts(funcs, emitted, group, "export declare function ", group.name, false);
            }
            for (std::size_t i = 0; i < funcs.size(); i++)
            {
                const FuncInfo &fi = infos[prepared[i].index];
                // The members of the dispatched groups are also exported by their fallback names.
                std::string line = "export { " + fi.lib_name + " as " + names[i] + " } from \"" + module->to_root + "lib/_all.mjs\";\n";
                module->exports += line;
                module->exports_dts += line;
            }
        }
    }

    void Generator::EmitFiles()
    {
        // The `lib` modules and their hub.
        std::string hub, hub_dts;
        for (const auto &[relative_name, file] : file_modules)
        {
            std::string imports = "import * as ffi from \"" + file.to_root + "ffi.mjs\";\nimport * as L from \"" + file.to_root + "lib/_all.mjs\";\n\n";
            output_files[file.path + ".mjs"] = "// The wrappers of the C bindings file `" + relative_name + "`.\n" + imports + file.body;
            output_files[file.path + ".d.mts"] = "// The wrappers of the C bindings file `" + relative_name + "`.\n" + imports + file.dts;
            std::string line = "export * from \"./" + file.path.substr(4) + ".mjs\";\n";
            hub += line;
            hub_dts += line;
        }

        // The `<type>_output` classes, exported from the root namespace.
        if (!scalar_outputs.empty())
        {
            std::string js = "// The classes of the mutable scalar parameters, see `ffi.ScalarOutput`.\nimport * as ffi from \"../ffi.mjs\";\n\n";
            std::string dts = js;
            for (const auto &[cls, s] : scalar_outputs)
            {
                if (used_js_names.contains(cls) || root.used_names.contains(cls))
                    throw std::runtime_error("The name `" + cls + "` of the class for the mutable `" + cls.substr(0, cls.size() - 7) + "` parameters is already used.");
                const std::string zero = s == Scalar::bool_ ? "false" : IsBigInt(s) ? "0n" : "0";
                const std::string doc = "/** An array of `" + cls.substr(0, cls.size() - 7) + "`, for the mutable parameters of this type. See `ffi.ScalarOutput`. */\n";
                js += doc + "export class " + cls + " extends ffi.ScalarOutput\n{\n";
                js += "    static SIZE = " + std::to_string(ScalarSize(s)) + ";\n";
                js += "    static ZERO = " + zero + ";\n";
                js += "    static TYPE = \"" + TsScalar(s, true) + "\";\n";
                js += "    static check(v) {return " + ScalarCheck(s, "v") + ";}\n";
                js += "    static read(p) {return " + HeapRead(s, "p") + ";}\n";
                js += "    static write(p, v) {" + HeapWrite(s, "p", "v") + ";}\n";
                js += "}\n\n";
                dts += doc + "export declare class " + cls + " extends ffi.ScalarOutput<" + TsScalar(s, false) + "> {}\n\n";
                root.exports += "export { " + cls + " } from \"./lib/_all.mjs\";\n";
                root.exports_dts += "export { " + cls + " } from \"./lib/_all.mjs\";\n";
                root.used_names.insert(cls);
            }
            output_files["lib/_scalar_outputs.mjs"] = js;
            output_files["lib/_scalar_outputs.d.mts"] = dts;
            hub += "export * from \"./_scalar_outputs.mjs\";\n";
            hub_dts += "export * from \"./_scalar_outputs.mjs\";\n";
        }

        output_files["lib/_all.mjs"] = "// Re-exports every `lib` module, so the wrappers can refer to each other without import cycles between the files.\n" + hub;
        output_files["lib/_all.d.mts"] = output_files["lib/_all.mjs"];

        // The namespace modules.
        auto WriteModule = [&](auto &self, Module &module) -> void
        {
            std::string js, dts;
            if (&module == &root)
            {
                js += "// The root module of the bindings.\n\n";
                if (!wasm_module_import.empty() && wasm_module_import_node.empty())
                    js += "import createModule from \"" + EscapeJsString(wasm_module_import) + "\";\n";
                js += "import * as ffi from \"./ffi.mjs\";\nimport * as L from \"./lib/_all.mjs\";\n\n";
                js += "export * as ffi from \"./ffi.mjs\";\nexport { CppObject, CppStruct, ScalarOutput, CppException, UnexpectedResultException } from \"./ffi.mjs\";\n\n";
                if (!wasm_module_import.empty())
                {
                    js += "/** Instantiates the wasm module with `createModule(options)` (the Emscripten factory) and binds the wrappers to it. Returns the module. Does nothing if already initialized. */\n";
                    if (wasm_module_import_node.empty())
                        js += "export async function init(options)\n{\n    if (ffi.M !== null)\n        return ffi.M;\n    const module = await createModule(options);\n    if (ffi.M === null)\n        ffi.init(module);\n    return ffi.M;\n}\n\n";
                    else
                    {
                        // In Node the variant with the real file system, in the browser the other one. Dynamic imports with literal specifiers, so the bundlers see both.
                        js += "export async function init(options)\n{\n    if (ffi.M !== null)\n        return ffi.M;\n";
                        js += "    const isNode = typeof process !== \"undefined\" && process.versions != null && process.versions.node != null && typeof window === \"undefined\";\n";
                        js += "    const { default: createModule } = isNode ? await import(\"" + EscapeJsString(wasm_module_import_node) + "\") : await import(\"" + EscapeJsString(wasm_module_import) + "\");\n";
                        js += "    const module = await createModule(options);\n    if (ffi.M === null)\n        ffi.init(module);\n    return ffi.M;\n}\n\n";
                    }
                }
                js += "/** Binds the wrappers to an already instantiated Emscripten module. */\nexport function initWithModule(module)\n{\n    ffi.init(module);\n}\n\n";

                dts += "// The root module of the bindings.\n\nimport * as ffi from \"./ffi.mjs\";\nimport * as L from \"./lib/_all.mjs\";\n\n";
                dts += "export * as ffi from \"./ffi.mjs\";\nexport { CppObject, CppStruct, ScalarOutput, CppException, UnexpectedResultException } from \"./ffi.mjs\";\n\n";
                if (!wasm_module_import.empty())
                    dts += "/** Instantiates the wasm module with `createModule(options)` (the Emscripten factory) and binds the wrappers to it. Returns the module. Does nothing if already initialized. */\nexport declare function init(options?: object): Promise<any>;\n";
                dts += "/** Binds the wrappers to an already instantiated Emscripten module. */\nexport declare function initWithModule(module: any): void;\n\n";
            }
            else
            {
                std::string header = "// The C++ namespace `" + JoinNameParts(module.ns_parts, "::") + "`.\n\nimport * as ffi from \"" + module.to_root + "ffi.mjs\";\nimport * as L from \"" + module.to_root + "lib/_all.mjs\";\n\n";
                js += header;
                dts += header;
            }
            for (auto &[name, child] : module.children)
            {
                if (module.used_names.contains(name))
                    throw std::runtime_error("The nested namespace `" + JoinNameParts(child.ns_parts, "::") + "` clashes with an entity of the same name in its parent namespace. Rename one of them in C++ or adjust `--replace-namespace`.");
                self(self, child);
                // The module `ns/MR.mjs` lives in `ns/`, so its children are `./MR/<name>.mjs`.
                std::string rel = &module == &root ? "./" + child.path + ".mjs" : "./" + child.path.substr(module.path.rfind('/') + 1) + ".mjs";
                std::string line = "export * as " + name + " from \"" + rel + "\";\n";
                js += line;
                dts += line;
            }
            js += module.exports + "\n" + module.funcs;
            dts += module.exports_dts + "\n" + module.funcs_dts;
            output_files[module.path + ".mjs"] = js;
            output_files[module.path + ".d.mts"] = dts;
        };
        WriteModule(WriteModule, root);

        // The list of the C functions the JS calls, for `-sEXPORTED_FUNCTIONS=@...`, and the other link flags.
        std::string list = "[\n    \"_malloc\",\n    \"_free\"";
        for (const auto &name : exported_c_functions)
            list += ",\n    \"_" + name + "\"";
        list += "\n]\n";
        output_files["exported_functions.txt"] = list;
        // The exported functions aren't in the response file, since `@file` in `-sEXPORTED_FUNCTIONS=@file` is resolved relative to the current directory,
        //   and the output directory can be moved. The consumers pass `-sEXPORTED_FUNCTIONS=@<dir>/exported_functions.txt` themselves.
        output_files["emcc_link_flags.rsp"] =
            "-sEXPORTED_RUNTIME_METHODS=wasmExports,wasmMemory,HEAP8,HEAPU8,HEAP16,HEAPU16,HEAP32,HEAPU32,HEAP64,HEAPU64,HEAPF32,HEAPF64,stackAlloc,stackSave,stackRestore,addFunction,removeFunction,UTF8ToString,stringToUTF8,lengthBytesUTF8,FS\n"
            "-sALLOW_TABLE_GROWTH=1\n"
            "-sWASM_BIGINT=1\n"
            + std::string(c_desc.exception_handling_enabled ? "" : "-sEXPORT_EXCEPTION_HANDLING_HELPERS=1\n");
    }

    void Generator::Generate()
    {
        CollectTypes();
        ComputeStructLayouts();
        CollectExportedFunctions();
        CollectExpected();
        EmitRuntime();
        EmitEnums();
        EmitClasses();
        EmitFreeFunctions();
        EmitFiles();
    }
}
