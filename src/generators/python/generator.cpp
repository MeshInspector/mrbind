#include "generators/python/generator.h"

#include "generators/python/runtime.h"

#include <algorithm>
#include <charconv>
#include <cmath>
#include <cstdlib>
#include <functional>
#include <regex>
#include <stdexcept>

namespace mrbind::Python
{
    namespace
    {
        // Splits `A::B<C::D>::E` into `A`, `B<C::D>`, `E`.
        std::vector<std::string> SplitQualified(std::string_view name)
        {
            std::vector<std::string> ret;
            int depth = 0;
            std::size_t start = 0;
            for (std::size_t i = 0; i < name.size(); i++)
            {
                char ch = name[i];
                if (ch == '<' || ch == '(' || ch == '[')
                    depth++;
                else if (ch == '>' || ch == ')' || ch == ']')
                    depth--;
                else if (depth == 0 && ch == ':' && i + 1 < name.size() && name[i + 1] == ':')
                {
                    ret.emplace_back(name.substr(start, i - start));
                    i++;
                    start = i + 1;
                }
            }
            ret.emplace_back(name.substr(start));
            return ret;
        }

        std::string Join(const std::vector<std::string> &parts, std::string_view sep)
        {
            std::string ret;
            for (std::size_t i = 0; i < parts.size(); i++)
            {
                if (i > 0)
                    ret += sep;
                ret += parts[i];
            }
            return ret;
        }

        bool StartsWith(std::string_view a, std::string_view b) {return a.substr(0, b.size()) == b;}
        bool EndsWith(std::string_view a, std::string_view b) {return a.size() >= b.size() && a.substr(a.size() - b.size()) == b;}

        std::string Trim(std::string_view s)
        {
            while (!s.empty() && s.front() == ' ')
                s.remove_prefix(1);
            while (!s.empty() && s.back() == ' ')
                s.remove_suffix(1);
            return std::string(s);
        }

        // Removes the top-level `const`, and one level of `&`, `&&` or `*` if `strip_indirection`.
        struct StrippedType
        {
            std::string base;
            bool is_ref = false; // `&` or `&&`.
            bool is_rvalue_ref = false;
            bool is_ptr = false;
            bool is_const = false; // Of the base.
        };

        StrippedType StripType(std::string t)
        {
            StrippedType ret;
            t = Trim(t);
            if (EndsWith(t, "&&"))
            {
                ret.is_ref = ret.is_rvalue_ref = true;
                t = Trim(t.substr(0, t.size() - 2));
            }
            else if (EndsWith(t, "&"))
            {
                ret.is_ref = true;
                t = Trim(t.substr(0, t.size() - 1));
            }
            if (EndsWith(t, " const"))
                t = Trim(t.substr(0, t.size() - 6));
            if (!ret.is_ref && EndsWith(t, "*"))
            {
                ret.is_ptr = true;
                t = Trim(t.substr(0, t.size() - 1));
                if (EndsWith(t, " const"))
                {
                    ret.is_const = true;
                    t = Trim(t.substr(0, t.size() - 6));
                }
            }
            if (StartsWith(t, "const "))
            {
                ret.is_const = true;
                t = Trim(t.substr(6));
            }
            ret.base = t;
            return ret;
        }

        enum class ScalarKind {none, boolean, integer, floating};

        ScalarKind GetScalarKind(std::string_view t)
        {
            static const std::set<std::string, std::less<>> ints = {
                "char", "signed char", "unsigned char", "short", "unsigned short", "int", "unsigned int", "unsigned",
                "long", "unsigned long", "long long", "unsigned long long", "size_t", "ptrdiff_t", "std::size_t", "std::ptrdiff_t",
                "int8_t", "uint8_t", "int16_t", "uint16_t", "int32_t", "uint32_t", "int64_t", "uint64_t",
                "std::int8_t", "std::uint8_t", "std::int16_t", "std::uint16_t", "std::int32_t", "std::uint32_t", "std::int64_t", "std::uint64_t",
                "char8_t", "char16_t", "char32_t", "wchar_t",
            };
            if (t == "bool")
                return ScalarKind::boolean;
            if (t == "float" || t == "double" || t == "long double")
                return ScalarKind::floating;
            if (ints.contains(t))
                return ScalarKind::integer;
            return ScalarKind::none;
        }

        // Python's `repr()` of a float.
        std::string PyFloatRepr(double value)
        {
            if (std::isnan(value))
                return "nan";
            if (std::isinf(value))
                return value < 0 ? "-inf" : "inf";
            char buf[64];
            auto res = std::to_chars(buf, buf + sizeof buf, value, std::chars_format::scientific);
            std::string sci(buf, res.ptr);
            // `-1.2345e+05` -> sign, digits, exponent.
            bool neg = false;
            std::size_t i = 0;
            if (sci[0] == '-')
            {
                neg = true;
                i = 1;
            }
            std::size_t e = sci.find('e');
            std::string digits;
            for (std::size_t j = i; j < e; j++)
            {
                if (sci[j] != '.')
                    digits += sci[j];
            }
            int exp10 = std::atoi(sci.c_str() + e + 1);
            while (digits.size() > 1 && digits.back() == '0')
                digits.pop_back();
            int decpt = exp10 + 1; // Value = 0.<digits> * 10^decpt.
            std::string ret = neg ? "-" : "";
            if (value == 0)
                return ret + "0.0";
            if (decpt > -4 && decpt <= 16)
            {
                if (decpt <= 0)
                {
                    ret += "0.";
                    ret += std::string(std::size_t(-decpt), '0');
                    ret += digits;
                }
                else if (std::size_t(decpt) >= digits.size())
                {
                    ret += digits;
                    ret += std::string(std::size_t(decpt) - digits.size(), '0');
                    ret += ".0";
                }
                else
                {
                    ret += digits.substr(0, std::size_t(decpt));
                    ret += '.';
                    ret += digits.substr(std::size_t(decpt));
                }
            }
            else
            {
                ret += digits[0];
                if (digits.size() > 1)
                {
                    ret += '.';
                    ret += digits.substr(1);
                }
                int x = decpt - 1;
                ret += 'e';
                ret += x < 0 ? '-' : '+';
                std::string xs = std::to_string(x < 0 ? -x : x);
                if (xs.size() < 2)
                    xs = "0" + xs;
                ret += xs;
            }
            return ret;
        }

        // Python's `repr()` of a `str`.
        std::string PyStrRepr(std::string_view s)
        {
            bool has_single = s.find('\'') != std::string_view::npos;
            bool has_double = s.find('"') != std::string_view::npos;
            char q = has_single && !has_double ? '"' : '\'';
            std::string ret(1, q);
            for (char ch : s)
            {
                if (ch == q || ch == '\\')
                {
                    ret += '\\';
                    ret += ch;
                }
                else if (ch == '\n')
                    ret += "\\n";
                else if (ch == '\t')
                    ret += "\\t";
                else
                    ret += ch;
            }
            ret += q;
            return ret;
        }

        std::string OperatorPyName(std::string_view token, bool unary)
        {
            if (token == "+") return unary ? "__pos__" : "__add__";
            if (token == "-") return unary ? "__neg__" : "__sub__";
            if (token == "*") return "__mul__";
            if (token == "/") return "__truediv__";
            if (token == "%") return "__mod__";
            if (token == "^") return "__xor__";
            if (token == "&") return "__and__";
            if (token == "|") return "__or__";
            if (token == "~") return "__invert__";
            if (token == "+=") return "__iadd__";
            if (token == "-=") return "__isub__";
            if (token == "*=") return "__imatmul__"; // Sic, this is what the pybind11 target does.
            if (token == "/=") return "__itruediv__";
            if (token == "%=") return "__imod__";
            if (token == "^=") return "__ixor__";
            if (token == "&=") return "__iand__";
            if (token == "|=") return "__ior__";
            if (token == "<<") return "__lshift__";
            if (token == ">>") return "__rshift__";
            if (token == "<<=") return "__ilshift__";
            if (token == ">>=") return "__irshift__";
            if (token == "==") return "__eq__";
            if (token == "!=") return "__ne__";
            if (token == "()") return "__call__";
            if (token == "[]") return "__getitem__";
            return "";
        }

        std::string ReflectedName(const std::string &name)
        {
            // `__mul__` -> `__rmul__`.
            return "__r" + name.substr(2);
        }
    }

    std::string AdjustPythonKeywords(std::string name)
    {
        static const std::set<std::string, std::less<>> keywords = {
            "and", "as", "assert", "async", "await", "break", "class", "continue", "def", "del", "elif", "else", "except", "False", "finally",
            "for", "from", "global", "if", "import", "in", "is", "lambda", "None", "nonlocal", "not", "or", "pass", "raise", "return", "True",
            "try", "while", "with", "yield",
        };
        if (keywords.contains(name))
        {
            if (std::isupper((unsigned char)name[0]))
                name[0] = char(std::tolower((unsigned char)name[0]));
            else
                name += '_';
        }
        return name;
    }

    std::string ToPythonName(std::string_view name)
    {
        std::string ret;
        bool prev_special = false;
        std::size_t last_good = 0;
        auto AddSpecial = [&](std::string_view str)
        {
            if (!prev_special)
            {
                ret += '_';
                prev_special = true;
            }
            ret += str;
            last_good = ret.size();
            ret += '_';
        };
        for (char ch : name)
        {
            if (std::isalnum((unsigned char)ch) || ch == '_')
            {
                ret += ch;
                prev_special = false;
                last_good = ret.size();
            }
            else if (ch == '-')
                AddSpecial("minus");
            else if (ch == '*')
                AddSpecial("ptr");
            else if (!prev_special)
            {
                ret += '_';
                prev_special = true;
            }
        }
        ret.resize(last_good);
        return AdjustPythonKeywords(std::move(ret));
    }

    std::string CppStringLiteral(std::string_view str)
    {
        std::string ret = "\"";
        for (char ch : str)
        {
            switch (ch)
            {
                case '"': ret += "\\\""; break;
                case '\\': ret += "\\\\"; break;
                case '\n': ret += "\\n"; break;
                case '\t': ret += "\\t"; break;
                case '?': ret += "\\?"; break; // Avoid trigraphs.
                default: ret += ch; break;
            }
        }
        ret += '"';
        return ret;
    }

    std::string Generator::ProcessComment(const std::string &c_style, bool require_generated_from)
    {
        // The comments added by the C generator: after the parsed comment, or alone.
        static constexpr std::string_view default_ctor_comment = "Constructs an empty (default-constructed) instance.";
        if (require_generated_from && !c_style.starts_with("/// Generated from ") && c_style.find("\n/// Generated from ") == std::string::npos &&
            c_style.find(std::string("\n/// ") + std::string(default_ctor_comment)) == std::string::npos)
            return "";
        // Like `clang::RawComment::getFormattedText()` that the pybind11 target uses: no comment markers,
        //   and the indentation of the first line removed from all lines.
        std::vector<std::string_view> lines;
        // A block comment with nothing on the line of `/**`: then the lines keep the space after their `*`, and the line of `*/` gives a space.
        bool block = false;
        std::size_t pos = 0;
        while (pos < c_style.size())
        {
            std::size_t end = c_style.find('\n', pos);
            if (end == std::string::npos)
                end = c_style.size();
            std::string_view line(c_style.data() + pos, end - pos);
            const bool first = pos == 0;
            pos = end + 1;
            while (!line.empty() && (line.front() == ' ' || line.front() == '\t'))
                line.remove_prefix(1);
            bool had_marker = false;
            for (std::string_view marker : {"///<", "//!<", "//<", "///", "//!", "//", "/**<", "/*!<", "/**", "/*!", "/*"})
            {
                if (StartsWith(line, marker))
                {
                    line.remove_prefix(marker.size());
                    had_marker = true;
                    if (first && StartsWith(marker, "/*") && line.find_first_not_of(' ') == std::string_view::npos)
                        block = true;
                    break;
                }
            }
            if (!had_marker && StartsWith(line, "*/"))
            {
                if (block)
                    lines.push_back(" ");
                continue;
            }
            if (!had_marker && StartsWith(line, "*"))
                line.remove_prefix(1);
            if (EndsWith(line, "*/"))
                line.remove_suffix(2);
            // Everything from here on is added by the C generator.
            if (StartsWith(Trim(std::string(line)), "Generated from ") || Trim(std::string(line)) == default_ctor_comment)
                break;
            lines.push_back(line);
        }
        if (block)
        {
            std::string ret;
            for (std::size_t i = 0; i < lines.size(); i++)
                ret += (i ? "\n" : "") + std::string(lines[i]);
            return ret;
        }
        std::size_t indent = std::string_view::npos;
        for (std::string_view line : lines)
        {
            if (std::size_t i = line.find_first_not_of(' '); i != std::string_view::npos)
            {
                indent = i;
                break;
            }
        }
        std::string ret;
        for (std::string_view line : lines)
        {
            std::size_t n = 0;
            while (n < indent && n < line.size() && line[n] == ' ')
                n++;
            line.remove_prefix(n);
            if (!ret.empty() || !line.empty())
                ret += std::string(line) + '\n';
        }
        while (!ret.empty() && ret.back() == '\n')
            ret.pop_back();
        return ret;
    }

    std::vector<std::string> Generator::ApplyNamespaceReplacements(std::vector<std::string> parts) const
    {
        for (const auto &[from, to] : replaced_namespaces)
        {
            if (parts.size() >= from.size() && std::equal(from.begin(), from.end(), parts.begin()))
            {
                std::vector<std::string> new_parts = to;
                new_parts.insert(new_parts.end(), parts.begin() + std::ptrdiff_t(from.size()), parts.end());
                parts = std::move(new_parts);
            }
        }
        return parts;
    }

    Generator::Scope &Generator::GetNamespaceScope(const std::vector<std::string> &cpp_parts)
    {
        std::string key = Join(cpp_parts, "::");
        auto it = namespaces.find(key);
        if (it != namespaces.end())
            return it->second;
        if (!cpp_parts.empty())
            (void)GetNamespaceScope(std::vector<std::string>(cpp_parts.begin(), cpp_parts.end() - 1)); // Parents first.
        Scope scope;
        scope.ns_parts = cpp_parts;
        std::vector<std::string> py_parts = ApplyNamespaceReplacements(cpp_parts);
        scope.qualname = Join(py_parts, ".");
        scope.var = py_parts.empty() ? "module" : NewId("S_");
        // A namespace whose Python path equals its parent's (fully stripped) shares the parent scope.
        if (!cpp_parts.empty())
        {
            const Scope &parent = namespaces.at(Join(std::vector<std::string>(cpp_parts.begin(), cpp_parts.end() - 1), "::"));
            if (parent.qualname == scope.qualname)
                scope.var = parent.var;
        }
        namespace_order.push_back(key);
        return namespaces.emplace(key, std::move(scope)).first->second;
    }

    std::string Generator::DocTypeName(std::string cpp_type, bool is_return)
    {
        (void)is_return;
        StrippedType st = StripType(cpp_type);
        std::string t = st.base;
        if (t == "void")
            return "None";
        if (t == "char")
            return "str";
        switch (GetScalarKind(t))
        {
            case ScalarKind::boolean: return "bool";
            case ScalarKind::integer: return "int";
            case ScalarKind::floating: return "float";
            case ScalarKind::none: break;
        }
        if (t == "std::string" || t == "std::string_view")
            return "str";
        if (t == "std::ostream" || t == "std::istream")
            return "object";
        if (t == "std::filesystem::path")
            return is_return ? "pathlib.Path" : "Union[os.PathLike, str, bytes]";
        if (StartsWith(t, "std::shared_ptr<") && EndsWith(t, ">"))
        {
            std::string inner = Trim(t.substr(16, t.size() - 17));
            return DocTypeName(StartsWith(inner, "const ") ? inner.substr(6) : inner, is_return);
        }
        if (auto it = types.find(t); it != types.end() && it->second.is_expected)
            return DocTypeName(it->second.expected_value, is_return);
        if (auto it = types.find(t); it != types.end() && !it->second.pair_first.empty())
            return "tuple[" + DocTypeName(it->second.pair_first, is_return) + ", " + DocTypeName(it->second.pair_second, is_return) + "]";
        if (StartsWith(t, "std::optional<") && EndsWith(t, ">") && is_return && !st.is_ptr && !st.is_ref)
            return DocTypeName(Trim(t.substr(14, t.size() - 15)), is_return);
        if (StartsWith(t, "std::unique_ptr<") && EndsWith(t, ">"))
            return DocTypeName(t.substr(16, t.size() - 17), is_return);
        auto it = types.find(t);
        if (it != types.end() && (it->second.IsClass() || it->second.IsEnum()))
            return module_qualname + "." + it->second.py_qualname;
        return ToPythonName(AdjustName(t));
    }

    std::string Generator::TypeidSpelling(std::string name)
    {
        if (typedef_targets.empty())
        {
            for (const auto &td : c_desc.typedefs)
            {
                if (td.full_name.find('<') == std::string::npos && td.pretty != td.full_name)
                    typedef_targets.emplace(td.full_name, td.pretty);
            }
            for (const auto &a : c_desc.type_aliases)
            {
                if (a.spelling != a.target && a.spelling.find('<') != std::string::npos && !StartsWith(a.spelling, "const ") && !types.contains(a.spelling) && !StartsWith(a.spelling, "std::"))
                    alias_template_targets.emplace_back(a.spelling, a.target);
            }
            // Longest first, so that the nested ones don't match first.
            std::stable_sort(alias_template_targets.begin(), alias_template_targets.end(), [](const auto &a, const auto &b){return a.first.size() > b.first.size();});
        }
        for (const auto &[spelling, target] : alias_template_targets)
        {
            for (std::size_t pos = 0; (pos = name.find(spelling, pos)) != std::string::npos;)
            {
                bool word_start = pos == 0 || !(std::isalnum((unsigned char)name[pos - 1]) || name[pos - 1] == '_' || name[pos - 1] == ':');
                if (word_start)
                {
                    name.replace(pos, spelling.size(), target);
                    pos += target.size();
                }
                else
                {
                    pos += spelling.size();
                }
            }
        }
        // Expand the typedefs, repeatedly.
        static const std::regex word(R"((?:\b[A-Za-z_]\w*::)*[A-Za-z_]\w*)");
        for (int iter = 0; iter < 16; iter++)
        {
            std::string out;
            bool changed = false;
            auto begin = std::sregex_iterator(name.begin(), name.end(), word);
            std::size_t last = 0;
            for (auto it = begin; it != std::sregex_iterator(); ++it)
            {
                const auto &m = *it;
                out.append(name, last, std::size_t(m.position()) - last);
                auto t = typedef_targets.find(m.str());
                // Don't touch the names followed by `::`, those are scopes.
                bool is_scope = std::size_t(m.position() + m.length()) + 1 < name.size() && name.compare(std::size_t(m.position() + m.length()), 2, "::") == 0;
                if (t != typedef_targets.end() && !is_scope)
                {
                    out += t->second;
                    changed = true;
                }
                else
                {
                    out += m.str();
                }
                last = std::size_t(m.position() + m.length());
            }
            out.append(name, last);
            name = std::move(out);
            if (!changed)
                break;
        }
        // After the expansions, so that they see the expanded names.
        for (const auto &[regex, replacement] : typeid_name_adjustments)
            name = std::regex_replace(name, std::regex(regex), replacement);
        // MSVC demangles `const T` as `T const`.
        std::string out;
        std::size_t i = 0;
        while (i < name.size())
        {
            if ((i == 0 || name[i - 1] == '<' || name[i - 1] == ',' || name[i - 1] == ' ') && name.compare(i, 6, "const ") == 0 && i > 0)
            {
                // Find the end of this template argument.
                std::size_t j = i + 6;
                int depth = 0;
                for (; j < name.size(); j++)
                {
                    if (name[j] == '<' || name[j] == '(') depth++;
                    else if ((name[j] == '>' || name[j] == ')') && depth == 0) break;
                    else if (name[j] == '>' || name[j] == ')') depth--;
                    else if (name[j] == ',' && depth == 0) break;
                }
                std::string arg = TypeidSpelling(name.substr(i + 6, j - i - 6));
                std::size_t k = arg.size();
                while (k > 0 && (arg[k - 1] == '*' || arg[k - 1] == '&' || arg[k - 1] == ' '))
                    k--;
                out += arg.substr(0, k) + " const" + (k < arg.size() ? " " + Trim(arg.substr(k)) : "");
                i = j;
                continue;
            }
            out += name[i++];
        }
        return out;
    }

    std::string Generator::TypeidArg(std::string type)
    {
        type = Trim(type);
        while (!type.empty() && type.back() == '&')
            type = Trim(type.substr(0, type.size() - 1));
        if (EndsWith(type, " const"))
            type = Trim(type.substr(0, type.size() - 6));
        bool is_ptr = EndsWith(type, "*");
        if (StartsWith(type, "const ") && !is_ptr)
            type = type.substr(6);
        // A leading `const` of a pointee goes after it, as `TypeidSpelling()` does for the template arguments.
        return TypeidSpelling("<" + type + ">").substr(1, std::string::npos).substr(0, TypeidSpelling("<" + type + ">").size() - 2);
    }

    std::string Generator::AdjustName(std::string name) const
    {
        for (const auto &[regex, replacement] : name_adjustments)
            name = std::regex_replace(name, std::regex(regex), replacement);
        return name;
    }

    // Python's `repr()` of a `double`, from its shortest round-trip scientific form `d.ddde+XX`.
    static std::string PyFloatRepr(std::string s)
    {
        std::string sign;
        if (!s.empty() && s.front() == '-')
        {
            sign = "-";
            s.erase(0, 1);
        }
        std::size_t e = s.find('e');
        if (e == std::string::npos)
            return sign + s; // `inf`, `nan`.
        std::string digits = s.substr(0, e);
        digits.erase(std::remove(digits.begin(), digits.end(), '.'), digits.end());
        int exp = std::stoi(s.substr(e + 1));
        if (exp >= -4 && exp <= 15)
        {
            // Fixed notation, always with a fractional part.
            if (exp >= 0)
            {
                while (digits.size() < std::size_t(exp) + 1)
                    digits += '0';
                std::string frac = digits.substr(std::size_t(exp) + 1);
                return sign + digits.substr(0, std::size_t(exp) + 1) + "." + (frac.empty() ? "0" : frac);
            }
            return sign + "0." + std::string(std::size_t(-exp - 1), '0') + digits;
        }
        std::string exp_str = std::to_string(exp < 0 ? -exp : exp);
        if (exp_str.size() < 2)
            exp_str = "0" + exp_str;
        return sign + digits.substr(0, 1) + (digits.size() > 1 ? "." + digits.substr(1) : "") + "e" + (exp < 0 ? "-" : "+") + exp_str;
    }

    std::string Generator::DefaultArgRepr(const CInterop::FuncParam &param)
    {
        if (!param.default_arg_spelling)
            return "";
        const std::string &spelling = *param.default_arg_spelling;
        StrippedType st = StripType(param.cpp_type);
        if (st.is_ptr)
            return spelling == "0" || spelling == "nullptr" ? "None" : "'" + spelling + "'";
        // An arithmetic constant evaluated by the parser: printed like pybind11 prints the value of the default argument expression.
        if (const auto &value = param.default_arg_value)
        {
            if (*value == "true" || *value == "false")
                return *value == "true" ? "True" : "False";
            if (value->find('e') != std::string::npos || value->find("inf") != std::string::npos || value->find("nan") != std::string::npos)
                return PyFloatRepr(*value);
            return *value;
        }
        ScalarKind kind = GetScalarKind(st.base);
        if (kind != ScalarKind::none)
        {
            // pybind11 prints the value. We can only evaluate the simple literals.
            std::string s = spelling;
            if (s == "{}")
                return kind == ScalarKind::boolean ? "False" : kind == ScalarKind::integer ? "0" : "0.0";
            {
                // pybind11 prints the value of the default argument expression, so an integer literal stays an integer.
                std::string t = s;
                bool neg = !t.empty() && t[0] == '-';
                if (neg)
                    t = t.substr(1);
                while (!t.empty() && (t.back() == 'u' || t.back() == 'U' || t.back() == 'l' || t.back() == 'L'))
                    t.pop_back();
                if (!t.empty() && std::all_of(t.begin(), t.end(), [](char ch){return std::isdigit((unsigned char)ch);}) && kind != ScalarKind::boolean)
                    return (neg ? "-" : "") + std::to_string(std::stoull(t));
            }
            if (kind == ScalarKind::boolean)
            {
                if (s == "true") return "True";
                if (s == "false") return "False";
            }
            else if (kind == ScalarKind::integer)
            {
                std::string t = s;
                while (!t.empty() && (t.back() == 'u' || t.back() == 'U' || t.back() == 'l' || t.back() == 'L'))
                    t.pop_back();
                char *end = nullptr;
                long long v = std::strtoll(t.c_str(), &end, 0);
                if (!t.empty() && end == t.c_str() + t.size())
                    return std::to_string(v);
            }
            else
            {
                std::string t = s;
                bool is_f = !t.empty() && (t.back() == 'f' || t.back() == 'F');
                if (is_f)
                    t.pop_back();
                char *end = nullptr;
                double v = std::strtod(t.c_str(), &end);
                if (!t.empty() && end == t.c_str() + t.size())
                {
                    if (st.base == "float")
                        v = double(float(v));
                    return PyFloatRepr(v);
                }
                // Integer literals for float params.
                long long iv = std::strtoll(t.c_str(), &end, 0);
                if (!t.empty() && end == t.c_str() + t.size())
                    return PyFloatRepr(double(iv));
            }
            return "'" + spelling + "'"; // Not evaluated, see the PR notes.
        }
        if (st.base == "std::string" || st.base == "std::string_view")
            return PyStrRepr(spelling); // pybind11 passes the spelling itself.
        auto it = types.find(st.base);
        if (it != types.end() && (it->second.IsClass() || it->second.IsEnum()) && !it->second.is_std_function && spelling == "{}")
            return module_qualname + "." + it->second.py_qualname + "()";
        return "'" + spelling + "'";
    }

    void Generator::CollectTypes()
    {
        for (const auto &[cpp_name, type] : c_desc.cpp_types.Map())
        {
            if (auto c = std::get_if<CInterop::TypeKinds::Class>(&type.var); c && IsIgnoredCFile(c->output_file.relative_name))
                continue;
            if (auto e = std::get_if<CInterop::TypeKinds::Enum>(&type.var); e && IsIgnoredCFile(e->output_file.relative_name))
                continue;
            TypeInfo info;
            info.cpp_name = cpp_name;
            info.traits = type.traits ? &*type.traits : nullptr;
            if (auto c = std::get_if<CInterop::TypeKinds::Class>(&type.var))
            {
                info.class_desc = c;
                info.c_name = c->c_name;
                info.is_std_function = c->callable_info.has_value();
                info.is_vector = StartsWith(cpp_name, "std::vector<");
                info.no_class = cpp_name == "std::string" || cpp_name == "std::string_view" || cpp_name == "std::ostream" || cpp_name == "std::istream";
                info.is_array = StartsWith(cpp_name, "std::array<");
                info.is_map = !EndsWith(cpp_name, "::iterator") && !EndsWith(cpp_name, "::const_iterator") && (StartsWith(cpp_name, "phmap::flat_hash_map<") || StartsWith(cpp_name, "phmap::node_hash_map<") || StartsWith(cpp_name, "phmap::parallel_flat_hash_map<") ||
                    StartsWith(cpp_name, "std::map<") || StartsWith(cpp_name, "std::unordered_map<"));
            }
            else if (auto e = std::get_if<CInterop::TypeKinds::Enum>(&type.var))
            {
                info.enum_desc = e;
                info.c_name = e->c_name;
                info.enum_c_underlying = e->underlying_type;
                info.is_signed_enum = !StartsWith(e->underlying_type, "unsigned") && e->underlying_type != "bool" && e->underlying_type.find("uint") == std::string::npos && e->underlying_type != "size_t";
            }
            else
            {
                continue;
            }
            types.emplace(cpp_name, std::move(info));
        }

        for (auto &[cpp_name, info] : types)
        {
            if (!info.IsClass())
                continue;
            if (StartsWith(cpp_name, "std::shared_ptr<") && EndsWith(cpp_name, ">"))
            {
                std::string inner = Trim(cpp_name.substr(16, cpp_name.size() - 17));
                bool is_const = StartsWith(inner, "const ");
                if (is_const)
                    inner = inner.substr(6);
                info.no_class = true;
                auto it = types.find(inner);
                if (it != types.end() && it->second.IsClass())
                {
                    info.pointee = &it->second;
                    info.pointee_const = is_const;
                }
            }
            else if (StartsWith(cpp_name, "std::optional<") && EndsWith(cpp_name, ">"))
            {
                info.optional_value = Trim(cpp_name.substr(14, cpp_name.size() - 15));
            }
            else if (cpp_name == "std::filesystem::path" || ((StartsWith(cpp_name, "phmap::") || StartsWith(cpp_name, "std::")) && (EndsWith(cpp_name, "::iterator") || EndsWith(cpp_name, "::const_iterator"))))
            {
                info.no_class = true;
            }
            else if (StartsWith(cpp_name, "std::pair<") && EndsWith(cpp_name, ">"))
            {
                std::string inner = cpp_name.substr(10, cpp_name.size() - 11);
                int depth = 0;
                for (std::size_t i = 0; i < inner.size(); i++)
                {
                    if (inner[i] == '<' || inner[i] == '(') depth++;
                    else if (inner[i] == '>' || inner[i] == ')') depth--;
                    else if (inner[i] == ',' && depth == 0)
                    {
                        info.pair_first = Trim(inner.substr(0, i));
                        info.pair_second = Trim(inner.substr(i + 1));
                        break;
                    }
                }
                info.no_class = !info.pair_first.empty();
            }
            else if (StartsWith(cpp_name, "expected<") || StartsWith(cpp_name, "std::expected<") || StartsWith(cpp_name, "tl::expected<"))
            {
                std::string inner = cpp_name.substr(cpp_name.find('<') + 1);
                inner.pop_back();
                int depth = 0;
                for (std::size_t i = 0; i < inner.size(); i++)
                {
                    if (inner[i] == '<' || inner[i] == '(') depth++;
                    else if (inner[i] == '>' || inner[i] == ')') depth--;
                    else if (inner[i] == ',' && depth == 0)
                    {
                        info.expected_value = Trim(inner.substr(0, i));
                        info.expected_error = Trim(inner.substr(i + 1));
                        break;
                    }
                }
                info.is_expected = !info.expected_value.empty();
                info.no_class = info.is_expected;
            }
        }

        for (const auto &td : c_desc.typedefs)
        {
            (void)td;
        }

        for (auto &[cpp_name, info] : types)
        {
            if (IsIgnoredForPython(cpp_name))
                info.no_class = true;
        }

        { // The optionals only returned by value (and unwrapped) have no class, the pybind11 target uses its type caster for those.
            std::set<std::string> needs_class;
            auto Note = [&](const std::string &type, bool by_value_return, const std::string &owner)
            {
                StrippedType st = StripType(type);
                if (StartsWith(st.base, "std::optional<") && st.base != owner && !(by_value_return && !st.is_ptr && !st.is_ref))
                    needs_class.insert(st.base);
            };
            for (const auto &[cpp_name, info] : types)
            {
                if (!info.IsClass())
                    continue;
                for (const auto &f : info.class_desc->fields)
                    Note(f.type, false, cpp_name);
                for (const auto &m : info.class_desc->methods)
                {
                    for (const auto &p : m.params)
                        if (!p.is_this_param)
                            Note(p.cpp_type, false, cpp_name);
                    Note(m.ret.cpp_type, true, cpp_name);
                }
            }
            for (const auto &f : c_desc.functions)
            {
                for (const auto &p : f.params)
                    Note(p.cpp_type, false, "");
                Note(f.ret.cpp_type, true, "");
            }
            for (auto &[cpp_name, info] : types)
            {
                if (!info.optional_value.empty() && !needs_class.contains(cpp_name))
                    info.no_class = true;
            }
        }

        // Names and scopes.
        (void)GetNamespaceScope({});
        for (auto &[cpp_name, info] : types)
        {
            std::vector<std::string> parts = SplitQualified(cpp_name);
            static const std::set<std::string, std::less<>> global_like = {"std", "phmap", "tl"};
            if (global_like.contains(parts.front()))
            {
                // pybind11 binds these as custom types at the module root, named after the demangled `typeid`.
                std::string name = TypeidSpelling(cpp_name);
                if (info.is_std_function)
                {
                    // `std::function<R(P...)>` -> `func<R,from,P...>`.
                    std::string inner = cpp_name.substr(14, cpp_name.size() - 15);
                    std::size_t paren = std::string::npos;
                    int depth = 0;
                    for (std::size_t i = 0; i < inner.size(); i++)
                    {
                        if (inner[i] == '<') depth++;
                        else if (inner[i] == '>') depth--;
                        else if (inner[i] == '(' && depth == 0) {paren = i; break;}
                    }
                    std::string r = Trim(inner.substr(0, paren));
                    std::string p = inner.substr(paren + 1, inner.size() - paren - 2);
                    name = "func<" + TypeidArg(r);
                    if (Trim(p) != "void" && !Trim(p).empty())
                    {
                        name += ",from";
                        depth = 0;
                        std::size_t start = 0;
                        for (std::size_t i = 0; i <= p.size(); i++)
                        {
                            if (i < p.size() && (p[i] == '<' || p[i] == '(')) depth++;
                            else if (i < p.size() && (p[i] == '>' || p[i] == ')')) depth--;
                            else if (i == p.size() || (p[i] == ',' && depth == 0))
                            {
                                name += ',';
                                name += TypeidArg(p.substr(start, i - start));
                                start = i + 1;
                            }
                        }
                    }
                    name += '>';
                }
                info.py_name = ToPythonName(AdjustName(name));
                info.py_qualname = info.py_name;
                info.scope_var = "module";
                continue;
            }
            // The leading parts that aren't types are namespaces.
            std::size_t ns_len = 0;
            bool flatten = false;
            for (std::size_t i = 1; i < parts.size(); i++)
            {
                std::vector<std::string> prefix(parts.begin(), parts.begin() + std::ptrdiff_t(i));
                if (types.contains(Join(prefix, "::")))
                    break;
                if (parts[i - 1].find('<') != std::string::npos)
                {
                    flatten = true;
                    break;
                }
                ns_len = i;
            }
            std::vector<std::string> ns_parts(parts.begin(), parts.begin() + std::ptrdiff_t(ns_len));
            Scope &scope = GetNamespaceScope(ns_parts);
            if (flatten)
            {
                info.py_name = ToPythonName(AdjustName(TypeidSpelling(Join(std::vector<std::string>(parts.begin() + std::ptrdiff_t(ns_len), parts.end()), "::"))));
                info.py_qualname = scope.qualname.empty() ? info.py_name : scope.qualname + "." + info.py_name;
                info.scope_var = scope.var;
                continue;
            }
            std::string qual = scope.qualname;
            for (std::size_t i = ns_len; i < parts.size(); i++)
            {
                if (!qual.empty())
                    qual += '.';
                qual += ToPythonName(AdjustName(parts[i]));
            }
            info.py_name = ToPythonName(AdjustName(parts.back()));
            info.py_qualname = qual;
            if (ns_len + 1 == parts.size())
                info.scope_var = scope.var;
            else
                info.scope_var = "@" + Join(std::vector<std::string>(parts.begin(), parts.end() - 1), "::"); // An enclosing class, resolved below.
        }

        for (const auto &f : c_desc.functions)
        {
            if (auto reg = std::get_if<CInterop::FuncKinds::Regular>(&f.var))
            {
                std::vector<std::string> parts = SplitQualified(reg->name);
                (void)GetNamespaceScope(std::vector<std::string>(parts.begin(), parts.end() - 1));
            }
        }

        for (auto &[cpp_name, info] : types)
        {
            info.var = NewId(info.IsClass() ? "T_" : "E_");
            types_by_c_name[info.c_name] = &info;
            if (info.IsClass())
            {
                for (const auto &base : info.class_desc->inheritance_info.bases_direct_combined.Vec())
                {
                    // The C bindings have no upcasts to the ambiguous bases.
                    const auto &indirect = info.class_desc->inheritance_info.bases_indirect.Map();
                    if (auto k = indirect.find(base); k != indirect.end() && k->second == CInterop::InheritanceInfo::Kind::ambiguous)
                        continue;
                    auto it = types.find(base);
                    if (it != types.end())
                        info.bases.push_back(&it->second);
                }
                // Python can't order the bases if one of them is a base of another one (e.g. `struct C : virtual A, B` with `struct B : virtual A`).
                const std::vector<const TypeInfo *> all_bases = info.bases;
                std::erase_if(info.bases, [&](const TypeInfo *b)
                {
                    return std::any_of(all_bases.begin(), all_bases.end(), [&](const TypeInfo *other)
                    {
                        return other != b && other->class_desc->inheritance_info.bases_indirect.Map().contains(b->cpp_name);
                    });
                });
            }
        }

        // Order: enclosing classes and bases first.
        std::set<const TypeInfo *> done;
        std::function<void(TypeInfo &)> Visit = [&](TypeInfo &info)
        {
            if (done.contains(&info))
                return;
            done.insert(&info);
            if (StartsWith(info.scope_var, "@"))
            {
                TypeInfo &outer = types.at(info.scope_var.substr(1));
                Visit(outer);
                info.scope_var = outer.var + ".type";
            }
            for (const TypeInfo *b : info.bases)
                Visit(const_cast<TypeInfo &>(*b));
            class_order.push_back(&info);
        };
        for (auto &[cpp_name, info] : types)
            Visit(info);
    }

    std::optional<Generator::PreparedOverload> Generator::PrepareOverload(const CInterop::BasicFuncLike &func, const TypeInfo *this_type, int self_kind, bool swap_first_two)
    {
        num_funcs_total++;
        PreparedOverload ret;
        std::string checks, late, call_args, after, post;
        bool release_gil = false;
        std::string fail;

        // The C++ params in the Python order, with their slot indices.
        struct ParamRef
        {
            const CInterop::FuncParam *param;
            std::size_t slot;
        };
        std::vector<ParamRef> param_order;
        std::size_t slot = 0;
        if (self_kind == 3)
        {
            ret.params.push_back({"", "object", ""}); // Ignored.
            slot = 1;
        }
        std::vector<const CInterop::FuncParam *> py_params;
        const CInterop::FuncParam *this_param = nullptr;
        for (const auto &p : func.params)
        {
            if (p.is_this_param && self_kind != 4)
            {
                if (!p.c_params.empty() || self_kind == 2)
                    this_param = &p;
                continue;
            }
            // The tags selecting the alternative of `std::variant`, nothing to pass.
            if (p.c_params.empty() && StartsWith(StripType(p.cpp_type).base, "std::variant_index<"))
                continue;
            py_params.push_back(&p);
        }
        if (swap_first_two && py_params.size() >= 2)
            std::swap(py_params[0], py_params[1]);

        // C arguments by C++ parameter, in the C order.
        std::map<const CInterop::FuncParam *, std::string> c_args;
        // The Python slot of each C++ parameter, for the lifetimes.
        std::map<const CInterop::FuncParam *, std::size_t> param_slots;

        if (self_kind == 1 || self_kind == 2 || self_kind == 4)
        {
            ret.params.push_back({"self", this_type ? module_qualname + "." + this_type->py_qualname : "object", ""});
            slot = 1;
            if (self_kind == 1 && this_param && !this_param->c_params.empty())
            {
                std::string ctype = this_param->c_params.front().c_type;
                checks += "    void *self_ = nullptr;\n";
                checks += "    if (!rt::ArgObject(a[0], " + this_type->var + ", false, self_)) return nullptr;\n";
                c_args[this_param] = "(" + ctype + ")self_";
            }
        }

        std::string owner_expr = self_kind == 1 ? "a[0]" : "nullptr";

        for (std::size_t pi = 0; pi < py_params.size(); pi++)
        {
            const CInterop::FuncParam &p = *py_params[pi];
            std::string a = "a[" + std::to_string(slot) + "]";
            std::string v = "p" + std::to_string(slot) + "_";
            param_slots[py_params[pi]] = slot;
            PyParam pp;
            pp.name = p.name ? AdjustPythonKeywords(*p.name) : "";
            if (swap_first_two && pi == 0)
                pp.name = "self";
            else if (swap_first_two && pi == 1)
                pp.name = py_params[0]->name ? AdjustPythonKeywords(*py_params[0]->name) : ""; // Sic, the pybind11 target does this.
            if (p.is_this_param)
                pp.name = "arg0"; // The converted object, `self_kind == 4`.
            pp.type = DocTypeName(p.cpp_type, false);
            pp.default_repr = DefaultArgRepr(p);
            bool has_default = p.default_arg_spelling.has_value();
            StrippedType st = StripType(p.cpp_type);
            const auto &cp = p.c_params;
            ScalarKind sk = GetScalarKind(st.base);
            auto type_it = types.find(st.base);
            const TypeInfo *ti = type_it != types.end() ? &type_it->second : nullptr;

            const bool ptr_to_ptr = cp.size() == 1 && std::count(cp[0].c_type.begin(), cp[0].c_type.end(), '*') == 2;
            if (StartsWith(st.base, "std::optional<") && cp.size() == 1 && EndsWith(cp[0].c_type, "*") && !ptr_to_ptr && !(ti && StripType(cp[0].c_type).base == ti->c_name))
            {
                // `std::optional<T>` as a pointer to the value, null for `nullopt` (also from `None`).
                std::string vt = Trim(st.base.substr(14, st.base.size() - 15));
                std::string vct = StripType(cp[0].c_type).base;
                ScalarKind vk = GetScalarKind(vt);
                const TypeInfo *vti = FindType(vt);
                checks += "    const " + vct + " *" + v + "ptr = nullptr;\n";
                if (const TypeInfo *opt = FindType(st.base); opt && !opt->no_class && FindMethod(*opt, "_has_value") && FindMethod(*opt, "_value"))
                {
                    checks += "    void *" + v + "opt = nullptr;\n    bool " + v + "is_opt = " + a + " && rt::ArgObject(" + a + ", " + opt->var + ", false, " + v + "opt);\n";
                    checks += "    if (" + v + "is_opt && " + FindMethod(*opt, "_has_value")->c_name + "((const " + opt->c_name + " *)" + v + "opt)) " + v + "ptr = (const " + vct + " *)" + FindMethod(*opt, "_value")->c_name + "((const " + opt->c_name + " *)" + v + "opt);\n";
                    a = "(" + v + "is_opt ? nullptr : " + a + ")";
                }
                std::string conv;
                if (vti && vti->IsEnum()) conv = "rt::ArgEnum(" + a + ", " + vti->var + ", " + v + ")";
                else if (vk == ScalarKind::boolean) conv = "rt::ArgBool(" + a + ", convert, " + v + ")";
                else if (vk == ScalarKind::integer) conv = "rt::ArgInt(" + a + ", convert, " + v + ")";
                else if (vk == ScalarKind::floating) conv = "rt::ArgFloat(" + a + ", convert, " + v + ")";
                if (!conv.empty())
                {
                    checks += "    " + vct + " " + v + "{};\n";
                    checks += "    if (" + a + " && " + a + " != Py_None) {if (!" + conv + ") return nullptr; " + v + "ptr = &" + v + ";}\n";
                    c_args[&p] = v + "ptr";
                }
                else if (types_by_c_name.contains(vct) && types_by_c_name.at(vct)->IsClass() && !types_by_c_name.at(vct)->no_class)
                {
                    // A class value, also via its implicit conversions.
                    const TypeInfo *e = types_by_c_name.at(vct);
                    std::string obj_check = "rt::ArgObject(" + a + ", " + e->var + ", false, " + v + "obj)";
                    if (e->has_implicit)
                    {
                        checks += "    rt::Ref " + v + "tmp;\n";
                        obj_check = "(" + obj_check + " || (convert && implicit_" + e->var + "(" + a + ", " + v + "tmp.p) && rt::ArgObject(" + v + "tmp.p, " + e->var + ", false, " + v + "obj)))";
                    }
                    checks += "    void *" + v + "obj = nullptr;\n    if (" + a + " && " + a + " != Py_None) {if (!" + obj_check + ") return nullptr; " + v + "ptr = (const " + vct + " *)" + v + "obj;}\n";
                    c_args[&p] = v + "ptr";
                }
                else
                {
                    fail = "unsupported parameter type " + p.cpp_type;
                    break;
                }
            }
            else if (st.base == "std::filesystem::path" && ((cp.size() == 2 && EndsWith(cp[0].c_type, "PassBy")) || (cp.size() == 1 && StartsWith(cp[0].c_type, "const ") && !ptr_to_ptr)))
            {
                const TypeInfo *path = FindType("std::filesystem::path");
                checks += "    rt::StringArg " + v + "s;\n";
                checks += "    if (" + std::string(has_default ? a + " && " : "") + "!rt::ArgPath(" + a + ", " + v + "s)) return nullptr;\n";
                late += "    " + path->c_name + " *" + v + " = " + v + "s.data ? " + path->c_name + "_ConstructFrom(" + v + "s.data, " + v + "s.end()) : nullptr;\n";
                if (cp.size() == 2)
                {
                    c_args[&p] = "(" + v + " ? " + cp[0].c_type + "_MoveAndDestroy : " + cp[0].c_type + "_DefaultArgument), " + v;
                }
                else
                {
                    c_args[&p] = v;
                    post += "    if (" + v + ") " + path->c_name + "_Destroy(" + v + ");\n";
                }
            }
            else if (cp.size() == 1 && sk != ScalarKind::none && !st.is_const && (st.is_ptr || (st.is_ref && !st.is_rvalue_ref)) && EndsWith(cp[0].c_type, "*") && std::count(cp[0].c_type.begin(), cp[0].c_type.end(), '*') == 1)
            {
                // `<T>_output`.
                std::string rec = RequireOutputType(st.base);
                pp.type = OutputTypeName(st.base);
                checks += "    void *" + v + " = nullptr;\n";
                checks += "    if (" + a + " && " + a + " != Py_None && !rt::ArgObject(" + a + ", " + rec + ", false, " + v + ")) return nullptr;\n";
                if (st.is_ref && !has_default)
                    checks += "    if (!" + v + ") return nullptr;\n";
                std::string vt = StripType(cp[0].c_type).base;
                late += "    " + vt + " *" + v + "ptr = " + v + " ? rt::OutputPtr<" + vt + ">(" + v + ", " + (st.is_ref ? "true" : "false") + ") : nullptr;\n";
                c_args[&p] = v + "ptr";
            }
            else if (cp.size() == 1 && sk != ScalarKind::none && st.is_rvalue_ref && EndsWith(cp[0].c_type, "*"))
            {
                // A scalar rvalue reference: by value.
                std::string vt = StripType(cp[0].c_type).base;
                std::string f = sk == ScalarKind::boolean ? "ArgBool" : sk == ScalarKind::integer ? "ArgInt" : "ArgFloat";
                checks += "    " + vt + " " + v + "{};\n    if (!rt::" + f + "(" + a + ", convert, " + v + ")) return nullptr;\n";
                c_args[&p] = "&" + v;
            }
            else if (cp.size() == 1 && ti && ti->IsExposedStruct() && !st.is_ptr && !(st.is_ref && !st.is_const))
            {
                std::string ctype = cp[0].c_type;
                bool via_ptr = EndsWith(ctype, "*");
                checks += ArgObjectWithImplicit(*ti, a, v, false, has_default);
                c_args[&p] = via_ptr ? "(" + ctype + ")" + v : "*(" + ti->c_name + " *)" + v;
            }
            else if (cp.size() == 1 && (sk != ScalarKind::none || (ti && ti->IsEnum())) && !st.is_ptr && !(st.is_ref && !st.is_const))
            {
                std::string ctype = cp[0].c_type;
                bool via_ptr = EndsWith(ctype, "*");
                std::string vtype = via_ptr ? StripType(ctype).base : ctype;
                std::string conv;
                if (ti && ti->IsEnum())
                    conv = "rt::ArgEnum(" + a + ", " + ti->var + ", " + v + ")";
                else if (sk == ScalarKind::boolean)
                    conv = "rt::ArgBool(" + a + ", convert, " + v + ")";
                else if (sk == ScalarKind::integer)
                    conv = "rt::ArgInt(" + a + ", convert, " + v + ")";
                else
                    conv = "rt::ArgFloat(" + a + ", convert, " + v + ")";
                checks += "    " + vtype + " " + v + "{};\n";
                if (via_ptr)
                {
                    checks += "    const " + vtype + " *" + v + "ptr = nullptr;\n";
                    checks += "    if (" + a + ") {if (!" + conv + ") return nullptr; " + v + "ptr = &" + v + ";}\n";
                    c_args[&p] = v + "ptr";
                }
                else
                {
                    checks += "    if (!" + conv + ") return nullptr;\n";
                    c_args[&p] = v;
                }
            }
            else if ((st.base == "std::ostream" || st.base == "std::istream") && cp.size() == 1)
            {
                bool out = st.base == "std::ostream";
                checks += std::string("    rt::") + (out ? "OStreamArg " : "IStreamArg ") + v + ";\n";
                checks += "    if (!" + v + ".Init(" + a + ")) return nullptr;\n";
                c_args[&p] = "(" + cp[0].c_type + ")static_cast<std::" + (out ? "ostream" : "istream") + " *>(&" + v + ".ss)";
                if (out)
                    post += "    if (!" + v + ".Flush(" + a + ")) return nullptr;\n";
            }
            else if (cp.size() == 1 && cp[0].c_type == "const char *const *" && st.base == "char" && st.is_ptr)
            {
                // A null-terminated string with a default argument: a pointer to it, null for the default. `None` is a null pointer.
                checks += "    rt::StringArg " + v + ";\n";
                checks += "    if (" + a + " && " + a + " != Py_None && !rt::ArgString(" + a + ", " + v + ")) return nullptr;\n";
                checks += "    const char *" + v + "p = " + v + ".data;\n";
                c_args[&p] = "(" + a + " ? &" + v + "p : nullptr)";
            }
            else if (cp.size() == 1 && cp[0].c_type == "const char *" && st.base == "char" && st.is_ptr)
            {
                // A null-terminated string. `None` is a null pointer.
                checks += "    rt::StringArg " + v + ";\n";
                checks += "    if (" + a + " && " + a + " != Py_None && !rt::ArgString(" + a + ", " + v + ")) return nullptr;\n";
                c_args[&p] = v + ".data";
            }
            else if (cp.size() == 2 && cp[0].c_type == "const char *" && cp[1].c_type == "const char *")
            {
                std::string f = st.base == "std::filesystem::path" ? "rt::ArgPath" : "rt::ArgString";
                checks += "    rt::StringArg " + v + ";\n";
                if (has_default)
                    checks += "    if (" + a + " && !" + f + "(" + a + ", " + v + ")) return nullptr;\n";
                else
                    checks += "    if (!" + f + "(" + a + ", " + v + ")) return nullptr;\n";
                c_args[&p] = v + ".data, " + v + ".data ? " + v + ".end() : nullptr";
            }
            else if (const TypeInfo *sp = (cp.size() == 2 || cp.size() == 1) && types_by_c_name.contains(StripType(cp.back().c_type).base) ? types_by_c_name.at(StripType(cp.back().c_type).base) : nullptr;
                sp && sp->pointee && (cp.size() == 2 ? EndsWith(cp[0].c_type, "PassBy") : StartsWith(cp[0].c_type, "const ")))
            {
                const TypeInfo &x = *sp->pointee;
                const TypeInfo *cv = FindType("std::shared_ptr<const void>");
                if (!cv)
                {
                    fail = "no std::shared_ptr<const void>";
                    break;
                }
                std::string xc = (sp->pointee_const ? "const " : "") + x.c_name + " *";
                checks += "    void *" + v + " = nullptr;\n";
                if (has_default)
                    checks += "    if (" + a + " && !rt::ArgObject(" + a + ", " + x.var + ", true, " + v + ")) return nullptr;\n";
                else
                    checks += "    if (!rt::ArgObject(" + a + ", " + x.var + ", true, " + v + ")) return nullptr;\n";
                late += "    " + sp->c_name + " *" + v + "sp = nullptr;\n";
                late += "    if (" + a + ") " + v + "sp = !" + v + " ? " + sp->c_name + "_DefaultConstruct() : rt::GetHolder(" + a + ") ? " + sp->c_name + "_ConstructAliasing(" + c_desc.helpers_prefix + "PassBy_Copy, (" + cv->c_name + " *)rt::GetHolder(" + a + "), (" + xc + ")" + v + ") : " + sp->c_name + "_ConstructNonOwning((" + xc + ")" + v + ");\n";
                if (cp.size() == 2)
                {
                    c_args[&p] = "(" + v + "sp ? " + cp[0].c_type + "_MoveAndDestroy : " + cp[0].c_type + "_DefaultArgument), " + v + "sp";
                }
                else
                {
                    c_args[&p] = v + "sp";
                    post += "    if (" + v + "sp) " + sp->c_name + "_Destroy(" + v + "sp);\n";
                }
            }
            else if (cp.size() == 2 && EndsWith(cp[0].c_type, "PassBy"))
            {
                // A class by value.
                std::string ctype = cp[1].c_type;
                const TypeInfo *cls = types_by_c_name.contains(StripType(ctype).base) ? types_by_c_name.at(StripType(ctype).base) : nullptr;
                if (!cls)
                {
                    fail = "unknown class " + ctype;
                    break;
                }
                std::string pass_by = cp[0].c_type; // `MR_PassBy`.
                checks += "    void *" + v + " = nullptr;\n";
                checks += "    bool " + v + "callable = false;\n";
                std::string check_obj = "rt::ArgObject(" + a + ", " + cls->var + ", false, " + v + ")";
                if (cls->has_implicit)
                {
                    checks += "    rt::Ref " + v + "tmp;\n";
                    check_obj = "(" + check_obj + " || (convert && implicit_" + cls->var + "(" + a + ", " + v + "tmp.p) && rt::ArgObject(" + v + "tmp.p, " + cls->var + ", false, " + v + ")))";
                }
                if (cls->is_std_function && !cls->callable_unsupported)
                {
                    release_gil = true;
                    check_obj = "(" + check_obj + " || (" + v + "callable = PyCallable_Check(" + a + ") != 0))";
                }
                if (has_default)
                    checks += "    if (" + a + " && !" + check_obj + ") return nullptr;\n";
                else
                    checks += "    if (!" + check_obj + ") return nullptr;\n";
                if (cls->is_std_function && !cls->callable_unsupported)
                    late += "    if (" + v + "callable) {Py_INCREF(" + a + "); " + v + " = " + cls->c_name + "_ConstructEx(tramp_" + cls->var + ", " + a + ", rt::CallbackPostcall, rt::CallableUserdataCallback);}\n";
                std::string pb = "(" + v + "callable ? " + pass_by + "_MoveAndDestroy : " + (has_default ? "(" + v + " ? " + pass_by + "_Copy : " + pass_by + "_DefaultArgument)" : pass_by + "_Copy") + ")";
                c_args[&p] = pb + ", (" + ctype + ")" + v;
            }
            else if (cp.size() == 1 && ptr_to_ptr && st.is_ptr && EndsWith(cp[0].c_type, "*const *"))
            {
                // A pointer with a default argument: a pointer to it, null for the default.
                std::string inner = Trim(cp[0].c_type.substr(0, cp[0].c_type.size() - 7));
                auto cls_it = types_by_c_name.find(StripType(inner).base);
                if (cls_it == types_by_c_name.end() || !cls_it->second->IsClass() || cls_it->second->no_class || cls_it->second->is_std_function)
                {
                    fail = "unsupported parameter type " + p.cpp_type;
                    break;
                }
                checks += ArgObjectWithImplicit(*cls_it->second, a, v, true, true);
                checks += "    " + inner + " " + v + "pp = (" + inner + ")" + v + ";\n";
                c_args[&p] = "(" + a + " ? &" + v + "pp : nullptr)";
            }
            else if (cp.size() == 1 && (EndsWith(cp[0].c_type, "*")))
            {
                std::string ctype = cp[0].c_type;
                std::string base = StripType(ctype).base;
                auto cls_it = types_by_c_name.find(base);
                if (cls_it == types_by_c_name.end() || !cls_it->second->IsClass())
                {
                    fail = "unsupported parameter type " + p.cpp_type;
                    break;
                }
                const TypeInfo *cls = cls_it->second;
                bool allow_none = st.is_ptr;
                if (cls->is_std_function && !cls->callable_unsupported)
                {
                    // A temporary `std::function` from a Python callable (or an empty one from `None`), destroyed after the call.
                    release_gil = true;
                    checks += "    void *" + v + " = nullptr;\n    int " + v + "tmp = 0;\n";
                    std::string check = "(rt::ArgObject(" + a + ", " + cls->var + ", false, " + v + ") || (" + v + "tmp = " + a + " == Py_None ? 1 : PyCallable_Check(" + a + ") ? 2 : 0) != 0)";
                    checks += "    if (" + std::string(has_default ? a + " && " : "") + "!" + check + ") return nullptr;\n";
                    late += "    if (" + v + "tmp == 1) " + v + " = " + cls->c_name + "_DefaultConstruct();\n";
                    late += "    if (" + v + "tmp == 2) {Py_INCREF(" + a + "); " + v + " = " + cls->c_name + "_ConstructEx(tramp_" + cls->var + ", " + a + ", rt::CallbackPostcall, rt::CallableUserdataCallback);}\n";
                    post += "    if (" + v + "tmp) " + cls->c_name + "_Destroy((" + cls->c_name + " *)" + v + ");\n";
                    c_args[&p] = "(" + ctype + ")" + v;
                }
                else
                {
                    checks += ArgObjectWithImplicit(*cls, a, v, allow_none, has_default);
                    c_args[&p] = "(" + ctype + ")" + v;
                }
            }
            else
            {
                fail = "unsupported parameter type " + p.cpp_type;
                break;
            }

            if (has_default)
                ; // Optional.
            else
                ret.num_required = slot + 1;
            ret.params.push_back(std::move(pp));
            slot++;
        }

        if (fail.empty())
        {
            // The return value.
            StrippedType rt_ = StripType(func.ret.cpp_type);
            std::string ctype = func.ret.c_type;
            ret.ret_type = DocTypeName(func.ret.cpp_type, true);
            // The lifetimes from the parser, like `MB_PB11_USE_PARSED_LIFETIMES` in the pybind11 target.
            std::string keep_alive;
            for (const auto &rel : func.lifetimes.relations)
            {
                auto Expr = [&](const auto &var) -> std::string
                {
                    std::string ret;
                    std::visit(Overload{
                        [&](const LifetimeRelation::ThisObject &) {if (self_kind == 1 || self_kind == 2) ret = "a[0]"; else if (self_kind == 4) ret = "a[1]";},
                        [&](const LifetimeRelation::ReturnValue &) {if (self_kind == 4) ret = "a[0]"; else if (self_kind != 2) ret = "r_";},
                        [&](const LifetimeRelation::Param &p)
                        {
                            if (p.index >= 0 && std::size_t(p.index) < func.params.size())
                            {
                                auto it = param_slots.find(&func.params[std::size_t(p.index)]);
                                if (it != param_slots.end())
                                    ret = "a[" + std::to_string(it->second) + "]";
                            }
                        },
                        [&](const auto &) {},
                    }, var);
                    return ret;
                };
                std::string h = Expr(rel.holder), t = Expr(rel.target);
                if (!h.empty() && !t.empty())
                    keep_alive += "    rt::KeepAlive(" + h + ", " + t + ");\n";
            }
            if (self_kind == 2 || self_kind == 4)
            {
                ret.ret_type = "None";
                if (this_type->IsExposedStruct() && ctype == this_type->c_name)
                    after = "    PyObject *r_ = rt::InitInstance(a[0], " + this_type->var + ", new " + ctype + "(ret_));\n" + keep_alive + "    return r_;\n";
                else
                    after = "    PyObject *r_ = rt::InitInstance(a[0], " + this_type->var + ", ret_);\n" + keep_alive + "    return r_;\n";
            }
            else if (rt_.base == "std::ostream" || rt_.base == "std::istream")
            {
                // `operator<<`/`>>` return the stream: return the Python object of the stream parameter.
                for (const auto &[p, s] : param_slots)
                {
                    if (StripType(p->cpp_type).base == rt_.base)
                        after = "    Py_INCREF(a[" + std::to_string(s) + "]);\n    return a[" + std::to_string(s) + "];\n";
                }
                if (after.empty())
                    fail = "unsupported return type " + func.ret.cpp_type;
            }
            else if (auto conv = CToPy(func.ret.cpp_type, ctype, "ret_", owner_expr, "r_"))
            {
                after = *conv + keep_alive + "    return r_;\n";
                if (StartsWith(rt_.base, "std::unique_ptr<"))
                    ret.ret_type = DocTypeName(rt_.base, true);
            }
            else
            {
                fail = "unsupported return type " + func.ret.cpp_type;
            }
        }

        if (!fail.empty())
        {
            num_funcs_skipped++;
            skipped_funcs.push_back(func.c_name + ": " + fail);
            return {};
        }

        // The C call.
        std::string call = func.c_name + "(";
        bool first = true;
        for (const auto &p : func.params)
        {
            auto it = c_args.find(&p);
            if (it == c_args.end())
                continue;
            if (!first)
                call += ", ";
            first = false;
            call += it->second;
        }
        call += ")";

        ret.impl = NewId("impl_");
        std::string &o = out_impls;
        o += "// " + func.c_name + "\n";
        o += "static PyObject *" + ret.impl + "(PyObject *const *a, bool convert, bool &matched)\n{\n    (void)convert;\n";
        o += checks;
        o += "    matched = true;\n";
        if (func.is_deprecated)
        {
            // The entity name, from `Generated from function/method `A::B`.` that the C generator puts in the comment.
            std::string name;
            const std::string &c = func.comment.c_style;
            for (std::string_view prefix : {"Generated from function `", "Generated from method `"})
            {
                if (std::size_t pos = c.find(prefix); pos != std::string::npos)
                {
                    std::size_t start = pos + prefix.size();
                    std::size_t end = c.find('`', start);
                    if (end != std::string::npos)
                        name = SplitQualified(c.substr(start, end - start)).back();
                }
            }
            if (!name.empty())
                o += "    {static int counter_ = 3; rt::WarnDeprecated(counter_, " + CppStringLiteral(module_name) + ", " + CppStringLiteral(name) + ", " + CppStringLiteral(*func.is_deprecated) + ");}\n";
        }
        o += "    try\n    {\n";
        o += late;
        std::string ctype = self_kind == 2 ? func.ret.c_type : func.ret.c_type;
        bool is_void = ctype == "void" && self_kind != 2;
        if (!is_void)
            o += "        " + ctype + " ret_{};\n";
        o += "        {\n";
        if (release_gil)
            o += "            rt::GilRelease gil_;\n";
        o += "            " + std::string(is_void ? "" : "ret_ = ") + call + ";\n";
        o += "        }\n";
        if (!post.empty())
            o += "    " + post;
        // Indent `after` into the try.
        std::string a2;
        std::size_t pos = 0;
        while (pos < after.size())
        {
            std::size_t end = after.find('\n', pos);
            a2 += "    " + after.substr(pos, end - pos + 1);
            pos = end + 1;
        }
        o += a2;
        o += "    }\n    catch (...)\n    {\n        return rt::TranslateException();\n    }\n}\n\n";

        ret.comment = ProcessComment(func.comment.c_style);
        std::string sig;
        for (const auto &p : func.params)
        {
            if (!p.is_this_param)
                sig += p.cpp_type + ",";
        }
        ret.cpp_signature = sig;
        return ret;
    }

    std::optional<std::string> Generator::CToPy(const std::string &cpp_type, const std::string &ctype, const std::string &expr, const std::string &owner, const std::string &out, bool borrowed)
    {
        StrippedType st = StripType(cpp_type);
        ScalarKind sk = GetScalarKind(st.base);
        auto type_it = types.find(st.base);
        const TypeInfo *ti = type_it != types.end() ? &type_it->second : nullptr;
        auto Ret = [](ScalarKind k) {return std::string(k == ScalarKind::boolean ? "RetBool" : k == ScalarKind::integer ? "RetInt" : "RetFloat");};
        std::string decl = "    PyObject *" + out + " = ";
        std::size_t num_stars = std::size_t(std::count(ctype.begin(), ctype.end(), '*'));
        if (ctype == "void")
            return decl + "(Py_INCREF(Py_None), Py_None);\n";
        if (const TypeInfo *sp = num_stars == 1 && types_by_c_name.contains(StripType(ctype).base) ? types_by_c_name.at(StripType(ctype).base) : nullptr; sp && sp->pointee)
        {
            bool owned = !st.is_ptr && !st.is_ref && !borrowed;
            std::string p = "p_" + out, h = "h_" + out;
            std::string ret = decl + "nullptr;\n    {\n        void *" + p + " = (void *)" + sp->c_name + "_get(" + expr + ");\n";
            ret += "        void *" + h + " = " + p + " ? " + HolderFromSharedPtr(*sp, expr) + " : nullptr;\n";
            if (owned)
                ret += "        " + sp->c_name + "_Destroy(" + expr + ");\n";
            ret += "        " + out + " = rt::Wrap(" + sp->pointee->var + ", " + p + ", false, nullptr, " + h + ");\n    }\n";
            return ret;
        }
        if (const TypeInfo *ex = num_stars == 1 && types_by_c_name.contains(StripType(ctype).base) ? types_by_c_name.at(StripType(ctype).base) : nullptr; ex && ex->is_expected && !st.is_ptr && !st.is_ref)
        {
            const CInterop::ClassMethod *success = FindMethod(*ex, "_success");
            const CInterop::ClassMethod *value = FindMethod(*ex, "_value");
            const CInterop::ClassMethod *value_mut = FindMethod(*ex, "_value_mut");
            const CInterop::ClassMethod *error = FindMethod(*ex, "_error");
            if (!success || !error)
                return {};
            std::string ret = decl + "nullptr;\n    if (!" + success->c_name + "(" + expr + "))\n    {\n";
            const TypeInfo *str = FindType("std::string");
            if (StripType(ex->expected_error).base == "std::string" && str)
                ret += "        const " + str->c_name + " *e_ = " + error->c_name + "(" + expr + ");\n        std::string m_(" + str->c_name + "_data(e_), " + str->c_name + "_data_end(e_));\n        PyErr_SetString(PyExc_RuntimeError, m_.c_str());\n";
            else
                ret += "        PyErr_SetString(PyExc_RuntimeError, \"Unexpected error.\");\n";
            ret += "    }\n    else\n    {\n";
            std::string vt = StripType(ex->expected_value).base;
            if (vt == "void")
            {
                ret += "        " + out + " = (Py_INCREF(Py_None), Py_None);\n";
            }
            else
            {
                if (!value || !value_mut)
                    return {};
                const TypeInfo *vti = FindType(vt);
                std::optional<std::string> conv;
                if (vti && vti->IsClass() && !vti->IsExposedStruct() && !vti->pointee && !vti->no_class)
                {
                    // Move the value out.
                    const CInterop::ClassMethod *move = FindMethod(*vti, "_ConstructFromAnother");
                    if (!move || move->params.size() < 2 || move->params[1].c_params.size() != 2)
                        return {};
                    std::string pass_by = move->params[1].c_params[0].c_type;
                    conv = CToPy(vt, vti->c_name + " *", move->c_name + "(" + pass_by + "_Move, " + value_mut->c_name + "(" + expr + "))", "nullptr", "v_" + out);
                }
                else
                {
                    bool as_ref = vt == "std::string" || (vti && vti->pointee);
                    conv = CToPy(as_ref ? "const " + vt + " &" : vt, value->ret.c_type, value->c_name + "(" + expr + ")", "nullptr", "v_" + out, true);
                }
                if (!conv)
                    return {};
                ret += *conv + "        " + out + " = v_" + out + ";\n";
            }
            ret += "    }\n    " + ex->c_name + "_Destroy(" + expr + ");\n";
            return ret;
        }
        if (ti && ti->IsExposedStruct() && ctype == ti->c_name)
            return decl + "rt::Wrap(" + ti->var + ", new " + ctype + "(" + expr + "), true);\n";
        if (borrowed && ti && ti->IsExposedStruct() && num_stars == 1 && !st.is_ptr && !st.is_ref)
            return decl + "rt::Wrap(" + ti->var + ", new " + ti->c_name + "(*" + expr + "), true);\n";
        if (ti && ti->IsEnum() && num_stars == 0)
            return decl + "rt::RetEnumBits(" + ti->var + ", (unsigned long long)(" + (ti->is_signed_enum ? "long long" : "unsigned long long") + ")" + expr + ");\n";
        if (ti && ti->IsEnum() && num_stars == 1)
            return decl + "!" + expr + " ? (Py_INCREF(Py_None), Py_None) : rt::RetEnumBits(" + ti->var + ", (unsigned long long)(" + (ti->is_signed_enum ? "long long" : "unsigned long long") + ")*" + expr + ");\n";
        if (sk != ScalarKind::none && num_stars == 0)
            return decl + "rt::" + Ret(sk) + "(" + expr + ");\n";
        if (st.base == "std::filesystem::path" && num_stars == 1)
        {
            const TypeInfo *path = FindType("std::filesystem::path");
            const TypeInfo *str = FindType("std::string");
            if (!path || !str)
                return {};
            std::string s = "s_" + out;
            std::string ret = "    " + str->c_name + " *" + s + " = " + path->c_name + "_string(" + expr + ");\n";
            ret += decl + "rt::RetPath(" + str->c_name + "_data(" + s + "), " + str->c_name + "_data_end(" + s + "));\n    " + str->c_name + "_Destroy(" + s + ");\n";
            if (!st.is_ptr && !st.is_ref && !borrowed)
                ret += "    " + path->c_name + "_Destroy(" + expr + ");\n";
            return ret;
        }
        if (const TypeInfo *pair = num_stars == 1 && types_by_c_name.contains(StripType(ctype).base) ? types_by_c_name.at(StripType(ctype).base) : nullptr; pair && !pair->pair_first.empty())
        {
            const CInterop::ClassMethod *first = FindMethod(*pair, "_first");
            const CInterop::ClassMethod *second = FindMethod(*pair, "_second");
            if (!first || !second)
                return {};
            auto c1 = CToPy(first->ret.cpp_type, first->ret.c_type, first->c_name + "(" + expr + ")", "nullptr", "f_" + out);
            auto c2 = CToPy(second->ret.cpp_type, second->ret.c_type, second->c_name + "(" + expr + ")", "nullptr", "s_" + out);
            if (!c1 || !c2)
                return {};
            std::string ret = *c1 + *c2 + decl + "f_" + out + " && s_" + out + " ? PyTuple_Pack(2, f_" + out + ", s_" + out + ") : nullptr;\n    Py_XDECREF(f_" + out + ");\n    Py_XDECREF(s_" + out + ");\n";
            if (!st.is_ptr && !st.is_ref && !borrowed)
                ret += "    " + pair->c_name + "_Destroy(" + expr + ");\n";
            return ret;
        }
        if (const TypeInfo *opt = num_stars == 1 && types_by_c_name.contains(StripType(ctype).base) ? types_by_c_name.at(StripType(ctype).base) : nullptr; opt && !opt->optional_value.empty())
        {
            const CInterop::ClassMethod *has_value = FindMethod(*opt, "_has_value");
            const CInterop::ClassMethod *value = FindMethod(*opt, "_value");
            const CInterop::ClassMethod *value_mut = FindMethod(*opt, "_value_mut");
            if (!has_value || !value)
                return {};
            bool owned = !st.is_ptr && !st.is_ref && !borrowed;
            if (!owned)
                goto not_optional;
            std::string vt = StripType(opt->optional_value).base;
            const TypeInfo *vti = FindType(vt);
            std::optional<std::string> conv;
            if (owned && vti && vti->IsClass() && !vti->IsExposedStruct() && !vti->pointee && !vti->no_class && value_mut)
            {
                const CInterop::ClassMethod *move = FindMethod(*vti, "_ConstructFromAnother");
                if (!move || move->params.size() < 2 || move->params[1].c_params.empty())
                    return {};
                std::string args = move->params[1].c_params.size() == 2 ? move->params[1].c_params[0].c_type + "_Move, " + value_mut->c_name + "(" + expr + ")" : value->c_name + "(" + expr + ")";
                conv = CToPy(vt, vti->c_name + " *", move->c_name + "(" + args + ")", "nullptr", "v_" + out);
            }
            else
            {
                bool as_ref = vt == "std::string" || (vti && (vti->pointee || (vti->IsClass() && !vti->IsExposedStruct())));
                conv = CToPy(as_ref ? "const " + vt + " &" : vt, value->ret.c_type, value->c_name + "(" + expr + ")", owned ? "nullptr" : owner, "v_" + out, !as_ref);
            }
            if (!conv)
                return {};
            std::string ret = decl + "nullptr;\n    if (!" + has_value->c_name + "(" + expr + "))\n        " + out + " = (Py_INCREF(Py_None), Py_None);\n    else\n    {\n" + *conv + "        " + out + " = v_" + out + ";\n    }\n";
            if (owned)
                ret += "    " + opt->c_name + "_Destroy(" + expr + ");\n";
            return ret;
        }
        not_optional:
        if (num_stars == 2 && types_by_c_name.contains(StripType(StripType(ctype).base).base))
        {
            // A reference to a pointer field.
            const TypeInfo *cls = types_by_c_name.at(StripType(StripType(ctype).base).base);
            if (!cls->IsClass() || cls->no_class)
                return {};
            return decl + "!" + expr + " || !*" + expr + " ? (Py_INCREF(Py_None), Py_None) : rt::Wrap(" + cls->var + ", (void *)*" + expr + ", false);\n";
        }
        if (st.base == "char" && st.is_ptr && num_stars == 1)
            return decl + "!" + expr + " ? (Py_INCREF(Py_None), Py_None) : rt::RetString(" + expr + ", " + expr + " + std::strlen(" + expr + "));\n";
        if (sk != ScalarKind::none && num_stars == 1)
            return decl + "!" + expr + " ? (Py_INCREF(Py_None), Py_None) : rt::" + Ret(sk) + "(*" + expr + ");\n";
        if (StartsWith(st.base, "std::unique_ptr<") && num_stars == 1 && !st.is_ptr && !st.is_ref)
        {
            std::string inner = st.base.substr(16, st.base.size() - 17);
            ScalarKind isk = GetScalarKind(inner);
            if (isk != ScalarKind::none)
                return decl + "nullptr;\n    if (!" + expr + ") " + out + " = (Py_INCREF(Py_None), Py_None);\n    else {" + out + " = rt::" + Ret(isk) + "(*" + expr + "); " + c_desc.helpers_prefix + "Free((void *)" + expr + ");}\n";
        }
        if (st.base == "std::string_view" && num_stars == 1 && types.contains("std::string_view"))
        {
            const TypeInfo &sv = types.at("std::string_view");
            std::string ret = decl + "rt::RetString(" + sv.c_name + "_data(" + expr + "), " + sv.c_name + "_data_end(" + expr + "));\n";
            if (!st.is_ptr && !st.is_ref)
                ret += "    " + sv.c_name + "_Destroy(" + expr + ");\n";
            return ret;
        }
        if (st.base == "std::string" && num_stars == 1)
        {
            const TypeInfo &str = types.at("std::string");
            std::string ret = decl + "rt::RetString(" + str.c_name + "_data(" + expr + "), " + str.c_name + "_data_end(" + expr + "));\n";
            if (!st.is_ptr && !st.is_ref)
                ret += "    " + str.c_name + "_Destroy(" + expr + ");\n";
            return ret;
        }
        if (num_stars == 1 && types_by_c_name.contains(StripType(ctype).base))
        {
            const TypeInfo *cls = types_by_c_name.at(StripType(ctype).base);
            if (!cls->IsClass() || cls->no_class)
                return {};
            if (!st.is_ptr && !st.is_ref && !borrowed)
                return decl + "rt::Wrap(" + cls->var + ", (void *)" + expr + ", true);\n";
            if (!borrowed && StartsWith(ctype, "const ") && cls->traits && cls->traits->copy_constructible != CInterop::SpecialMemberKind::disabled)
            {
                // pybind11 would cast away the constness otherwise.
                if (cls->IsExposedStruct())
                    return decl + "!" + expr + " ? (Py_INCREF(Py_None), Py_None) : rt::Wrap(" + cls->var + ", new " + cls->c_name + "(*" + expr + "), true);\n";
                if (const CInterop::ClassMethod *copy = FindMethod(*cls, "_ConstructFromAnother"); copy && copy->params.size() == 2)
                {
                    std::string args = copy->params[1].c_params.size() == 2 ? copy->params[1].c_params[0].c_type + "_Copy, (" + cls->c_name + " *)" + expr : expr;
                    return decl + "!" + expr + " ? (Py_INCREF(Py_None), Py_None) : rt::Wrap(" + cls->var + ", (void *)" + copy->c_name + "(" + args + "), true);\n";
                }
            }
            return decl + "rt::Wrap(" + cls->var + ", (void *)" + expr + ", false, " + owner + ");\n";
        }
        return {};
    }

    std::optional<std::string> Generator::PyToCReturn(const std::string &cpp_type, const std::string &ctype, const std::string &py, const std::string &out)
    {
        StrippedType st = StripType(cpp_type);
        ScalarKind sk = GetScalarKind(st.base);
        auto type_it = types.find(st.base);
        const TypeInfo *ti = type_it != types.end() ? &type_it->second : nullptr;
        std::string fail = "{PyErr_Format(PyExc_RuntimeError, \"Unable to cast Python instance of type %R to C++ type '" + st.base + "'\", (PyObject *)Py_TYPE(" + py + ")); Py_DECREF(" + py + "); rt::ThrowPythonError(gil_);}";
        if (ti && ti->IsEnum() && ctype == ti->c_name)
            return "    " + ctype + " " + out + "{};\n    if (!rt::ArgEnum(" + py + ", " + ti->var + ", " + out + ")) " + fail + "\n";
        if (sk != ScalarKind::none && ctype.find('*') == std::string::npos)
        {
            std::string f = sk == ScalarKind::boolean ? "ArgBool" : sk == ScalarKind::integer ? "ArgInt" : "ArgFloat";
            return "    " + ctype + " " + out + "{};\n    if (!rt::" + f + "(" + py + ", true, " + out + ")) " + fail + "\n";
        }
        if (ti && ti->IsExposedStruct() && ctype == ti->c_name)
            return "    void *" + out + "p_ = nullptr;\n    if (!rt::ArgObject(" + py + ", " + ti->var + ", false, " + out + "p_)) " + fail + "\n    " + ctype + " " + out + " = *(" + ctype + " *)" + out + "p_;\n";
        // A class by pointer: the object is kept alive until the C++ side copies it, by `postcall`.
        if (std::count(ctype.begin(), ctype.end(), '*') == 1 && types_by_c_name.contains(StripType(ctype).base))
        {
            const TypeInfo *cls = types_by_c_name.at(StripType(ctype).base);
            if (!cls->IsClass() || cls->no_class)
                return {};
            return "    void *" + out + "p_ = nullptr;\n    if (!rt::ArgObject(" + py + ", " + cls->var + ", " + (st.is_ptr ? "true" : "false") + ", " + out + "p_)) " + fail + "\n    " + ctype + " " + out + " = (" + ctype + ")" + out + "p_;\n";
        }
        return {};
    }

    std::string Generator::OutputTypeName(const std::string &scalar)
    {
        return ToPythonName(AdjustName(TypeidSpelling(scalar) + "::output"));
    }

    std::string Generator::RequireOutputType(const std::string &scalar)
    {
        auto it = output_types.find(scalar);
        if (it != output_types.end())
            return it->second;
        std::string var = NewId("TO_");
        output_types.emplace(scalar, var);
        std::string name = OutputTypeName(scalar);
        std::string t = scalar;
        out_decls += "static rt::TypeRecord " + var + "{" + CppStringLiteral(name) + ", [](void *p) {delete (rt::OutputBuf<" + t + "> *)p;}, {}};\n";
        std::string f = var + "_";
        out_decls += "static PyObject *" + f + "init(PyObject *, PyObject *args) {return rt::OutputInit<" + t + ">(" + var + ", args);}\n";
        out_decls += "static PyObject *" + f + "get_values(PyObject *, PyObject *o) {return rt::OutputGetValues<" + t + ">(o);}\n";
        out_decls += "static PyObject *" + f + "set_values(PyObject *, PyObject *args) {PyObject *o, *v; if (!PyArg_ParseTuple(args, \"OO\", &o, &v)) return nullptr; return rt::OutputSetValues<" + t + ">(o, v);}\n";
        out_decls += "static PyObject *" + f + "get_value(PyObject *, PyObject *o) {return rt::OutputGetValue<" + t + ">(o);}\n";
        out_decls += "static PyObject *" + f + "set_value(PyObject *, PyObject *args) {PyObject *o, *v; if (!PyArg_ParseTuple(args, \"OO\", &o, &v)) return nullptr; return rt::OutputSetValue<" + t + ">(o, v);}\n";
        out_decls += "static PyObject *" + f + "repr(PyObject *, PyObject *o) {return rt::OutputRepr<" + t + ">(o, " + CppStringLiteral(name) + ");}\n";
        out_decls += "static PyMethodDef " + f + "defs[] = {{\"init\", " + f + "init, METH_VARARGS, nullptr}, {\"get_values\", " + f + "get_values, METH_O, nullptr}, {\"set_values\", " + f + "set_values, METH_VARARGS, nullptr}, {\"get_value\", " + f + "get_value, METH_O, nullptr}, {\"set_value\", " + f + "set_value, METH_VARARGS, nullptr}, {\"repr\", " + f + "repr, METH_O, nullptr}};\n";
        out_init_classes += "    " + var + ".type = rt::MakeClass(" + CppStringLiteral(module_qualname) + ", " + CppStringLiteral(name) + ", " + CppStringLiteral(name) + ", bases_default, nullptr);\n    if (!" + var + ".type) return nullptr;\n";
        out_init_classes += "    Py_INCREF(" + var + ".type); if (PyModule_AddObject(module, " + CppStringLiteral(name) + ", " + var + ".type) < 0) return nullptr;\n";
        out_init_classes += "    {\n        PyObject *prims_ = PyDict_New();\n        for (auto &d_ : " + f + "defs) rt::AddPrim(prims_, d_.ml_name, &d_, module_name);\n";
        out_init_classes += "        {PyObject *e_ = PyUnicode_FromString(" + CppStringLiteral(DocTypeName(scalar, false)) + "); PyDict_SetItemString(prims_, \"elem\", e_); Py_XDECREF(e_);}\n";
        out_init_classes += "        if (!rt::CallRt(\"add_output_api\", Py_BuildValue(\"(OsNO)\", " + var + ".type, " + CppStringLiteral(module_qualname + "." + name) + ", prims_, " + (scalar == "bool" ? "Py_True" : "Py_False") + "))) return nullptr;\n    }\n";
        return var;
    }

    std::string Generator::TemplatePyName(const std::string &full_name)
    {
        std::string last = SplitQualified(full_name).back();
        if (last.find('<') == std::string::npos)
            return "";
        return ToPythonName(AdjustName(TypeidSpelling(last)));
    }

    void Generator::DisambiguateTemplates(std::vector<GroupEntry> &groups)
    {
        std::vector<GroupEntry> moved;
        for (auto &g : groups)
        {
            std::set<std::string> sigs;
            for (const auto &ov : g.overloads)
            {
                std::string sig;
                for (const auto &p : ov.params)
                    sig += p.type + ",";
                sigs.insert(sig);
            }
            if (sigs.size() == g.overloads.size())
                continue;
            std::vector<PreparedOverload> keep;
            for (auto &ov : g.overloads)
            {
                if (ov.template_py_name.empty() || ov.template_py_name == g.py_name)
                {
                    keep.push_back(std::move(ov));
                    continue;
                }
                auto it = std::find_if(moved.begin(), moved.end(), [&](const GroupEntry &e){return e.py_name == ov.template_py_name;});
                if (it == moved.end())
                    moved.push_back({ov.template_py_name, {std::move(ov)}});
                else
                    it->overloads.push_back(std::move(ov));
            }
            g.overloads = std::move(keep);
        }
        std::erase_if(groups, [](const GroupEntry &g){return g.overloads.empty();});
        for (auto &m : moved)
        {
            auto it = std::find_if(groups.begin(), groups.end(), [&](const GroupEntry &e){return e.py_name == m.py_name;});
            if (it == groups.end())
                groups.push_back(std::move(m));
            else
                for (auto &ov : m.overloads)
                    it->overloads.push_back(std::move(ov));
        }
    }

    std::string Generator::MakeDocString(const GroupEntry &group, bool is_method_self_visible)
    {
        (void)is_method_self_visible;
        auto Sig = [&](const PreparedOverload &ov)
        {
            std::string s = group.py_name + "(";
            for (std::size_t i = 0; i < ov.params.size(); i++)
            {
                if (i > 0)
                    s += ", ";
                s += ov.params[i].name + ": " + ov.params[i].type;
                if (!ov.params[i].default_repr.empty())
                    s += " = " + ov.params[i].default_repr;
            }
            s += ") -> " + ov.ret_type;
            return s;
        };
        std::string ret;
        if (group.overloads.size() == 1)
        {
            ret = Sig(group.overloads[0]) + "\n";
            if (!group.overloads[0].comment.empty())
                ret += "\n" + group.overloads[0].comment + "\n";
        }
        else
        {
            ret = group.py_name + "(*args, **kwargs)\nOverloaded function.\n\n";
            for (std::size_t i = 0; i < group.overloads.size(); i++)
            {
                if (i > 0)
                    ret += "\n";
                ret += std::to_string(i + 1) + ". " + Sig(group.overloads[i]) + "\n";
                if (!group.overloads[i].comment.empty())
                    ret += "\n" + group.overloads[i].comment + "\n";
            }
        }
        return ret;
    }

    std::string Generator::EmitGroup(const GroupEntry &group, const TypeInfo *cls, bool is_method, bool is_init, int py_flags_extra)
    {
        (void)py_flags_extra;
        std::string id = NewId("G_");
        std::string &o = out_impls;
        std::string ovs;
        for (std::size_t i = 0; i < group.overloads.size(); i++)
        {
            const PreparedOverload &ov = group.overloads[i];
            std::string names_var = id + "_n" + std::to_string(i);
            o += "static const char *const " + names_var + "[] = {";
            for (const auto &p : ov.params)
                o += CppStringLiteral(p.name) + ", ";
            o += "nullptr};\n";
            std::string sig = "(";
            for (std::size_t j = 0; j < ov.params.size(); j++)
            {
                if (j > 0)
                    sig += ", ";
                sig += ov.params[j].name + ": " + ov.params[j].type;
                if (!ov.params[j].default_repr.empty())
                    sig += " = " + ov.params[j].default_repr;
            }
            sig += ") -> " + ov.ret_type;
            if (is_init && cls)
            {
                // pybind11 prints constructors as `module.Class(params)`.
                sig = module_qualname + "." + cls->py_qualname + "(";
                for (std::size_t j = 1; j < ov.params.size(); j++)
                {
                    if (j > 1)
                        sig += ", ";
                    sig += ov.params[j].name + ": " + ov.params[j].type;
                    if (!ov.params[j].default_repr.empty())
                        sig += " = " + ov.params[j].default_repr;
                }
                sig += ")";
            }
            ovs += "    {" + CppStringLiteral(sig) + ", " + names_var + ", " + std::to_string(ov.params.size()) + ", " + std::to_string(ov.num_required) + ", " + ov.impl + "},\n";
        }
        o += "static const rt::Overload " + id + "_ovs[] = {\n" + ovs + "};\n";
        o += "static const rt::Group " + id + " = {" + CppStringLiteral(group.py_name) + ", " + id + "_ovs, " + std::to_string(group.overloads.size()) + ", " + (is_method ? "true" : "false") + ", " + (is_init ? "true" : "false") + ", " + CppStringLiteral(cls ? cls->py_qualname : "") + "};\n";
        o += "static PyObject *" + id + "_f(PyObject *self, PyObject *args, PyObject *kwargs) {return rt::Dispatch(" + id + ", self, args, kwargs);}\n";
        o += "static PyMethodDef " + id + "_def = {" + CppStringLiteral(group.py_name) + ", (PyCFunction)(void (*)(void))" + id + "_f, METH_VARARGS | METH_KEYWORDS, " + CppStringLiteral(MakeDocString(group, is_method)) + "};\n\n";
        return id + "_def";
    }

    void Generator::EmitStdFunction(TypeInfo &info)
    {
        // The trampoline calling a Python callable from C.
        const CInterop::ClassMethod *call = nullptr;
        for (const auto &m : info.class_desc->methods)
        {
            if (EndsWith(m.c_name, "_call"))
                call = &m;
        }
        std::string &o = out_decls;
        if (!call)
        {
            info.callable_unsupported = true;
            o += "// No `call` for " + info.cpp_name + "\n";
            return;
        }
        // `R (*)(P1 _1, ..., void *_userdata, void **_cleanup_value)`.
        const std::string &sig = info.class_desc->callable_info->stateful_func_c_type;
        std::size_t star = sig.find("(*)(");
        std::string c_ret = Trim(sig.substr(0, star));
        std::vector<std::string> c_param_types;
        {
            std::string inner = sig.substr(star + 4, sig.size() - star - 5);
            int depth = 0;
            std::size_t start = 0;
            for (std::size_t j = 0; j <= inner.size(); j++)
            {
                if (j < inner.size() && inner[j] == '(') depth++;
                else if (j < inner.size() && inner[j] == ')') depth--;
                else if (j == inner.size() || (inner[j] == ',' && depth == 0))
                {
                    std::string decl = Trim(inner.substr(start, j - start));
                    // Drop the parameter name.
                    std::size_t k = decl.size();
                    while (k > 0 && (std::isalnum((unsigned char)decl[k - 1]) || decl[k - 1] == '_'))
                        k--;
                    c_param_types.push_back(Trim(decl.substr(0, k)));
                    start = j + 1;
                }
            }
            c_param_types.resize(c_param_types.size() - 2); // `_userdata` and `_cleanup_value`.
        }
        std::string params, py_args;
        std::size_t i = 0;
        bool ok = true;
        for (const auto &p : call->params)
        {
            if (p.is_this_param)
                continue;
            if (i >= c_param_types.size())
            {
                ok = false;
                break;
            }
            std::string x = "x" + std::to_string(i);
            params += c_param_types[i] + " " + x + ", ";
            auto conv = CToPy(p.cpp_type, c_param_types[i], x, "nullptr", "y" + std::to_string(i), true);
            if (!conv)
            {
                ok = false;
                break;
            }
            py_args += *conv + "    PyTuple_SetItem(args_, " + std::to_string(i) + ", y" + std::to_string(i) + ");\n";
            i++;
        }
        if (i != c_param_types.size())
            ok = false;
        std::string rtype = c_ret;
        std::optional<std::string> ret_conv;
        if (ok && rtype != "void")
        {
            ret_conv = PyToCReturn(call->ret.cpp_type, rtype, "r_", "ret_");
            ok = ret_conv.has_value();
        }
        if (!ok)
        {
            // Can't be created from Python. The constructor from a callable throws.
            info.callable_unsupported = true;
            o += "// The callable " + info.cpp_name + " can't be created from Python.\n";
            return;
        }
        o += "static " + rtype + " tramp_" + info.var + "(" + params + "void *ud_, void **cleanup_)\n{\n";
        o += "    PyGILState_STATE gil_ = PyGILState_Ensure();\n";
        o += "    PyObject *args_ = PyTuple_New(" + std::to_string(i) + ");\n";
        o += py_args;
        o += "    PyObject *r_ = PyObject_CallObject((PyObject *)ud_, args_);\n";
        o += "    Py_DECREF(args_);\n";
        o += "    if (!r_) rt::ThrowPythonError(gil_);\n";
        if (rtype == "void")
        {
            o += "    Py_DECREF(r_);\n    PyGILState_Release(gil_);\n";
        }
        else
        {
            o += *ret_conv;
            // The result stays alive until `postcall`, for the returned pointers.
            o += "    if (cleanup_) *cleanup_ = r_; else Py_DECREF(r_);\n    PyGILState_Release(gil_);\n    return ret_;\n";
        }
        o += "}\n";
    }

    void Generator::EmitClassMembers(TypeInfo &info)
    {
        const auto &cls = *info.class_desc;
        std::string cls_obj = info.var + ".type";

        // Members of the bases, to skip their copies (`--copy-inherited-members`).
        std::set<std::string> base_members;
        std::function<void(const TypeInfo &)> CollectBase = [&](const TypeInfo &b)
        {
            for (const auto &m : b.class_desc->methods)
            {
                std::string sig;
                for (const auto &p : m.params)
                    if (!p.is_this_param)
                        sig += p.cpp_type + ",";
                if (auto r = std::get_if<CInterop::MethodKinds::Regular>(&m.var))
                    base_members.insert(r->name + "(" + sig);
                else if (auto op = std::get_if<CInterop::MethodKinds::Operator>(&m.var))
                    base_members.insert("operator" + op->token + "(" + sig);
                else if (std::holds_alternative<CInterop::MethodKinds::ConversionOperator>(m.var))
                    base_members.insert("conv:" + m.ret.cpp_type);
            }
            for (const auto &f : b.class_desc->fields)
                base_members.insert("field:" + f.name);
            for (const TypeInfo *bb : b.bases)
                CollectBase(*bb);
        };
        for (const TypeInfo *b : info.bases)
            CollectBase(*b);

        std::vector<GroupEntry> methods; // In order of first appearance.
        std::vector<GroupEntry> statics;
        auto AddTo = [&](std::vector<GroupEntry> &list, const std::string &name, PreparedOverload ov)
        {
            for (auto &g : list)
            {
                if (g.py_name == name)
                {
                    g.overloads.push_back(std::move(ov));
                    return;
                }
            }
            list.push_back({name, {std::move(ov)}});
        };

        // Constructors, ordered like pybind11 does.
        GroupEntry init{"__init__", {}};
        std::optional<PreparedOverload> copy_ctor, aggregate_ctor;
        bool std_function = info.is_std_function;
        for (const auto &m : cls.methods)
        {
            auto ctor = std::get_if<CInterop::MethodKinds::Constructor>(&m.var);
            if (!ctor)
                continue;
            if (std_function && ctor->is_copying_ctor)
                continue;
            // A move-only class: the by-value constructor of the C bindings only moves, pybind11 has no such constructor.
            if (ctor->is_copying_ctor && info.traits && info.traits->copy_constructible == CInterop::SpecialMemberKind::disabled)
                continue;
            auto ov = PrepareOverload(m, &info, 2);
            if (!ov)
                continue;
            if (ctor->is_copying_ctor)
                copy_ctor = std::move(ov);
            else if (EndsWith(m.c_name, "_ConstructFrom"))
                aggregate_ctor = std::move(ov);
            else
            {
                init.overloads.push_back(std::move(*ov));
            }
        }
        if (IsListConstructible(info))
        {
            const CInterop::ClassMethod *def = FindMethod(info, "_DefaultConstruct");
            PreparedOverload ov;
            ov.impl = NewId("impl_");
            out_impls += "static PyObject *" + ov.impl + "(PyObject *const *a, bool, bool &matched)\n{\n    if (!PyList_Check(a[1])) return nullptr;\n    matched = true;\n";
            out_impls += "    PyObject *r_ = nullptr;\n    try\n    {\n        r_ = rt::InitInstance(a[0], " + info.var + ", " + def->c_name + "());\n    }\n    catch (...)\n    {\n        return rt::TranslateException();\n    }\n";
            out_impls += "    Py_DECREF(r_);\n    for (Py_ssize_t i_ = 0, n_ = PyList_Size(a[1]); i_ < n_; i_++)\n    {\n        PyObject *e_ = PyObject_CallMethod(a[0], \"push_back\", \"O\", PyList_GetItem(a[1], i_));\n        if (!e_) return nullptr;\n        Py_DECREF(e_);\n    }\n";
            out_impls += "    rt::KeepAlive(a[0], a[1]);\n    Py_RETURN_NONE;\n}\n\n";
            ov.params = {{"self", module_qualname + "." + info.py_qualname, ""}, {"arg0", "list", ""}};
            ov.ret_type = "None";
            ov.num_required = 2;
            init.overloads.push_back(ov);
        }
        if (!copy_ctor && info.IsExposedStruct() && !std_function)
        {
            // The exposed structs are copied by value, the C bindings have no copy constructor for them.
            PreparedOverload ov;
            ov.impl = NewId("impl_");
            out_impls += "static PyObject *" + ov.impl + "(PyObject *const *a, bool, bool &matched)\n{\n    void *o_ = nullptr;\n    if (!rt::ArgObject(a[1], " + info.var + ", false, o_)) return nullptr;\n    matched = true;\n";
            out_impls += "    return rt::InitInstance(a[0], " + info.var + ", new " + info.c_name + "(*(" + info.c_name + " *)o_));\n}\n\n";
            ov.params = {{"self", module_qualname + "." + info.py_qualname, ""}, {"_other", module_qualname + "." + info.py_qualname, ""}};
            ov.ret_type = "None";
            ov.num_required = 2;
            copy_ctor = ov;
        }
        if (copy_ctor)
        {
            PreparedOverload c = *copy_ctor;
            c.params[1].name = "arg0";
            c.comment = "Implicit copy constructor.";
            init.overloads.push_back(c);
        }
        // Like `DETAIL_MB_PB11_ADD_AGGREGATE_CTOR`: aggregates without bases, elementwise (so without arguments if no fields).
        bool has_fields = std::any_of(cls.fields.begin(), cls.fields.end(), [](const CInterop::ClassField &f){return !f.is_static;});
        if (!cls.inheritance_info.bases_direct_combined.Vec().empty())
            aggregate_ctor.reset();
        if (aggregate_ctor || (cls.is_aggregate && cls.inheritance_info.bases_direct_combined.Vec().empty() && !has_fields && !std_function && !init.overloads.empty()))
        {
            PreparedOverload a = aggregate_ctor ? *aggregate_ctor : init.overloads.front();
            a.comment = "Implicit aggregate constructor.";
            init.overloads.push_back(a);
        }
        if (copy_ctor)
        {
            PreparedOverload c = *copy_ctor;
            // The parameter is unnamed in the implicit copy constructors (`_other` in the C bindings).
            if (c.params[1].name == "_other")
                c.params[1].name = "";
            c.comment.clear();
            init.overloads.push_back(c);
        }
        // The conversion operators of other classes.
        if (auto it = conversion_ctors.find(&info); it != conversion_ctors.end())
        {
            for (const auto &[src, m] : it->second)
            {
                if (auto ov = PrepareOverload(*m, &info, 4))
                    init.overloads.push_back(std::move(*ov));
            }
        }
        if (std_function)
        {
            // Construct from a Python callable.
            PreparedOverload ov;
            ov.impl = NewId("impl_");
            out_impls += "static PyObject *" + ov.impl + "(PyObject *const *a, bool, bool &matched)\n{\n    if (!PyCallable_Check(a[1]) || PyObject_TypeCheck(a[1], (PyTypeObject *)" + info.var + ".type)) return nullptr;\n    matched = true;\n";
            out_impls += "    Py_INCREF(a[1]);\n    return rt::InitInstance(a[0], " + info.var + ", " + info.c_name + "_ConstructEx(tramp_" + info.var + ", a[1], nullptr, rt::CallableUserdataCallback));\n}\n\n";
            ov.params = {{"self", module_qualname + "." + info.py_qualname, ""}, {"arg0", "Callable", ""}};
            ov.ret_type = "None";
            ov.num_required = 2;
            init.overloads.push_back(ov);
        }

        bool has_eq = false;
        for (const auto &m : cls.methods)
        {
            if (std::holds_alternative<CInterop::MethodKinds::Constructor>(m.var))
                continue;
            std::string sig;
            for (const auto &p : m.params)
                if (!p.is_this_param)
                    sig += p.cpp_type + ",";
            if (m.inherited_from)
                continue;
            if (auto r = std::get_if<CInterop::MethodKinds::Regular>(&m.var))
            {
                if (std_function || IsIgnoredForPython(info.cpp_name + "::" + r->name))
                    continue;
                auto ov = PrepareOverload(m, &info, m.is_static ? 0 : 1);
                if (!ov)
                    continue;
                ov->template_py_name = TemplatePyName(r->full_name);
                AddTo(m.is_static ? statics : methods, AdjustPythonKeywords(r->name), std::move(*ov));
            }
            else if (auto op = std::get_if<CInterop::MethodKinds::Operator>(&m.var))
            {
                if (op->token == "=")
                    continue;
                std::size_t arity = 0;
                for (const auto &p : m.params)
                    if (!p.is_this_param)
                        arity++;
                std::string name = OperatorPyName(op->token, arity == 0);
                if (name.empty() || op->is_post_incr_or_decr)
                    continue;
                auto ov = PrepareOverload(m, &info, 1);
                if (!ov)
                    continue;
                if (name == "__eq__")
                    has_eq = true;
                AddTo(methods, name, std::move(*ov));
                // A mutable `[]` returning a reference to a scalar also gets `__setitem__`. Not implemented yet.
            }
            else if (std::holds_alternative<CInterop::MethodKinds::ConversionOperator>(m.var))
            {
                if (const TypeInfo *t = ConversionCtorTarget(m); t && t != &info)
                    continue; // A constructor of the target instead.
                ScalarKind sk = GetScalarKind(StripType(m.ret.cpp_type).base);
                std::string name = sk == ScalarKind::boolean ? "__bool__" : sk == ScalarKind::integer ? "__int__" : sk == ScalarKind::floating ? "__float__" : "convert_to_" + ToPythonName(m.ret.cpp_type);
                auto ov = PrepareOverload(m, &info, 1);
                if (!ov)
                    continue;
                AddTo(methods, name, std::move(*ov));
            }
        }

        // The non-member operators taking this class first (or second, for the reflected ones).
        for (const auto &f : c_desc.functions)
        {
            auto op = std::get_if<CInterop::FuncKinds::Operator>(&f.var);
            if (!op || f.params.empty() || f.params.size() > 2)
                continue;
            std::string name = OperatorPyName(op->token, f.params.size() == 1);
            if (name.empty())
                continue;
            if (StripType(f.params[0].cpp_type).base == info.cpp_name)
            {
                auto ov = PrepareOverload(f, &info, 0);
                if (!ov)
                    continue;
                ov->params[0].name = "self";
                // Unlike a member `__eq__`, this one doesn't reset `__hash__` in pybind11.
                AddTo(methods, name, std::move(*ov));
            }
            else if (f.params.size() == 2 && StripType(f.params[1].cpp_type).base == info.cpp_name && (!types.contains(StripType(f.params[0].cpp_type).base) || types.at(StripType(f.params[0].cpp_type).base).no_class))
            {
                auto ov = PrepareOverload(f, &info, 0, true);
                if (!ov)
                    continue;
                AddTo(methods, ReflectedName(name), std::move(*ov));
            }
        }

        for (auto &[name, ov] : MakeGenericExtras(info))
            AddTo(methods, name, std::move(ov));

        // The exposed structs have no assignment functions in C, they are copied directly.
        if (info.IsExposedStruct())
        {
            PreparedOverload ov;
            ov.impl = NewId("impl_");
            out_impls += "static PyObject *" + ov.impl + "(PyObject *const *a, bool, bool &matched)\n{\n    void *self_ = nullptr, *other_ = nullptr;\n";
            out_impls += "    if (!rt::ArgObject(a[0], " + info.var + ", false, self_) || !rt::ArgObject(a[1], " + info.var + ", false, other_)) return nullptr;\n";
            out_impls += "    matched = true;\n    *(" + info.c_name + " *)self_ = *(" + info.c_name + " *)other_;\n    return rt::Wrap(" + info.var + ", self_, false, a[0]);\n}\n\n";
            std::string self_doc = module_qualname + "." + info.py_qualname;
            ov.params = {{"self", self_doc, ""}, {"", self_doc, ""}};
            ov.ret_type = self_doc;
            ov.num_required = 2;
            AddTo(methods, "operator", ov);
            AddTo(methods, "operator", ov);
        }

        // The assignment operators show up as `operator` in pybind11: the copy one,
        //   and the move one if the argument can be copied into a temporary.
        for (const auto &m : cls.methods)
        {
            auto op = std::get_if<CInterop::MethodKinds::Operator>(&m.var);
            if (!op || op->token != "=" || !op->is_copying_assignment || !info.traits || info.traits->copy_assignable == CInterop::SpecialMemberKind::disabled || StartsWith(info.cpp_name, "std::array<"))
                continue;
            auto ov = PrepareOverload(m, &info, 1);
            if (!ov || ov->params.size() != 2)
                continue;
            if (ov->params[1].name == "_other")
                ov->params[1].name = "";
            ov->comment.clear();
            AddTo(methods, "operator", *ov);
            if (info.traits->move_assignable != CInterop::SpecialMemberKind::disabled && info.traits->copy_constructible != CInterop::SpecialMemberKind::disabled)
                AddTo(methods, "operator", *ov);
        }
        // The other operators without Python names: the other assignments and `++` are `operator` too, `--` is `operator_minus_minus`.
        for (const auto &m : cls.methods)
        {
            auto op = std::get_if<CInterop::MethodKinds::Operator>(&m.var);
            if (!op || m.inherited_from || !((op->token == "=" && !op->is_copying_assignment) || op->token == "++" || op->token == "--" || op->token == "<" || op->token == ">" || op->token == "<=" || op->token == ">="))
                continue;
            auto ov = PrepareOverload(m, &info, 1);
            if (!ov)
                continue;
            for (auto &p : ov->params)
                if (p.name == "_other")
                    p.name = "";
            if (op->is_post_incr_or_decr)
            {
                ov->params.push_back({"", "int", ""}); // The dummy argument, ignored.
                ov->num_required = ov->params.size();
            }
            ov->comment.clear();
            AddTo(methods, op->token == "--" ? "operator_minus_minus" : "operator", std::move(*ov));
        }

        // A `[]` returning a mutable reference to a scalar also gets `__setitem__`.
        for (const auto &m : cls.methods)
        {
            auto op = std::get_if<CInterop::MethodKinds::Operator>(&m.var);
            if (!op || op->token != "[]" || m.params.size() != 2)
                continue;
            StrippedType rst = StripType(m.ret.cpp_type);
            StrippedType ist = StripType(m.params[1].cpp_type);
            ScalarKind isk = GetScalarKind(ist.base);
            const TypeInfo *iti = FindType(ist.base);
            if (!rst.is_ref || rst.is_const || m.params[1].c_params.size() != 1 || m.params[0].c_params.size() != 1)
                continue;
            std::string itype = m.params[1].c_params[0].c_type;
            std::string index;
            if (isk == ScalarKind::integer)
                index = "    " + itype + " i_{};\n    if (!rt::ArgInt(a[1], convert, i_)) return nullptr;\n";
            else if (iti && iti->IsExposedStruct() && itype == iti->c_name)
                index = "    void *io_ = nullptr;\n    if (!rt::ArgObject(a[1], " + iti->var + ", false, io_)) return nullptr;\n    " + itype + " i_ = *(" + itype + " *)io_;\n";
            else
                continue;
            auto assign = AssignFromPy(rst.base, "dst_", "a[2]");
            if (!assign)
                continue;
            PreparedOverload ov;
            ov.impl = NewId("impl_");
            out_impls += "// __setitem__ via " + m.c_name + "\n";
            out_impls += "static PyObject *" + ov.impl + "(PyObject *const *a, bool convert, bool &matched)\n{\n";
            out_impls += "    void *self_ = nullptr;\n    if (!rt::ArgObject(a[0], " + info.var + ", false, self_)) return nullptr;\n" + index;
            out_impls += "    matched = true;\n    try\n    {\n        auto dst_ = " + m.c_name + "((" + m.params[0].c_params[0].c_type + ")self_, i_);\n" + *assign + "        Py_RETURN_NONE;\n    }\n";
            out_impls += "    catch (...)\n    {\n        return rt::TranslateException();\n    }\n}\n\n";
            ov.params = {{"self", module_qualname + "." + info.py_qualname, ""}, {"arg0", DocTypeName(m.params[1].cpp_type, false), ""}, {"arg1", DocTypeName(rst.base, false), ""}};
            ov.ret_type = "None";
            ov.num_required = 3;
            AddTo(methods, "__setitem__", std::move(ov));
            break;
        }

        if (!init.overloads.empty())
            out_init += "    if (!rt::AddMethod(" + cls_obj + ", &" + EmitGroup(init, &info, true, true) + ")) return nullptr;\n";
        else
            out_init += "    if (!rt::SetNoConstructorInit(" + cls_obj + ")) return nullptr;\n";
        DisambiguateTemplates(methods);
        DisambiguateTemplates(statics);
        for (const auto &g : methods)
            out_init += "    if (!rt::AddMethod(" + cls_obj + ", &" + EmitGroup(g, &info, true, false) + ")) return nullptr;\n";
        for (const auto &g : statics)
            out_init += "    if (!rt::AddFunction(" + cls_obj + ", &" + EmitGroup(g, &info, false, false) + ", module_name)) return nullptr;\n";
        if (has_eq)
            out_init += "    if (!rt::TypeSetAttr(" + cls_obj + ", \"__hash__\", Py_None)) return nullptr;\n";

        // Fields.
        for (const auto &f : cls.fields)
        {
            if (f.inherited_from || hidden_fields.contains(f.name))
                continue;
            if (!f.is_static && f.layout)
            {
                // The layout in the description is the parser's target platform, compute the offset on this one.
                std::string offset;
                if (info.IsExposedStruct())
                    offset = "offsetof(" + info.c_name + ", " + f.name + ")";
                else if (!StripType(f.type).is_ref) // The getters of the references return the referenced objects.
                {
                    for (const auto *acc : {&f.getter_mutable, &f.getter_const})
                    {
                        if (*acc && (*acc)->params.size() == 1 && (*acc)->params[0].c_params.size() == 1 && StripType((*acc)->ret.c_type).is_ptr)
                        {
                            offset = "[]{alignas(64) static char buf_[1]; return (Py_ssize_t)((const char *)" + (*acc)->c_name + "((" + (*acc)->params[0].c_params[0].c_type + ")buf_) - buf_);}()";
                            break;
                        }
                    }
                }
                if (offset.empty())
                    offset = std::to_string(f.layout->byte_offset);
                out_init += "    if (!rt::CallRt(\"add_offsetof\", Py_BuildValue(\"(Osn)\", " + cls_obj + ", " + CppStringLiteral(AdjustPythonKeywords(f.name)) + ", (Py_ssize_t)" + offset + "))) return nullptr;\n";
            }
            const CInterop::ClassField::Accessor *getter = nullptr;
            StrippedType st = StripType(f.type);
            bool scalar = GetScalarKind(st.base) != ScalarKind::none || (types.contains(st.base) && types.at(st.base).IsEnum()) || st.base == "std::string";
            if (scalar || !f.getter_mutable)
                getter = f.getter_const ? &*f.getter_const : nullptr;
            else
                getter = &*f.getter_mutable;
            if (!getter && info.IsExposedStruct() && !f.is_static)
            {
                EmitExposedField(info, f);
                continue;
            }
            if (!getter)
                continue;
            auto gov = PrepareOverload(*getter, &info, f.is_static ? 3 : 1);
            if (!gov)
                continue;
            if (!f.is_static)
                gov->params[0] = {"arg0", module_qualname + "." + info.py_qualname, ""};
            gov->comment.clear();
            std::string get_def = EmitGroup({"", {*gov}}, &info, false, false);
            std::string set_def = "nullptr";
            // Like `PropertyTypeIsConst` of the pybind11 target: also read-only if not copy-assignable.
            const TypeInfo *field_ti = st.is_ptr ? nullptr : FindType(st.base);
            bool not_assignable = field_ti && field_ti->traits && field_ti->traits->copy_assignable == CInterop::SpecialMemberKind::disabled;
            if (f.setter && !not_assignable && !(st.is_ptr ? EndsWith(Trim(f.type), "const") : st.is_const))
            {
                auto sov = PrepareOverload(*f.setter, &info, f.is_static ? 3 : 1);
                if (sov)
                {
                    if (!f.is_static)
                        sov->params[0] = {"arg0", module_qualname + "." + info.py_qualname, ""};
                    if (sov->params.size() > 1)
                        sov->params[1].name = "arg1";
                    sov->comment.clear();
                    set_def = "&" + EmitGroup({"", {*sov}}, &info, false, false);
                }
            }
            if (!st.is_ptr && StartsWith(Trim(f.type), "const "))
                set_def = "nullptr";
            std::string doc = ProcessComment(f.comment.c_style, false);
            out_init += "    if (!rt::AddProperty(" + cls_obj + ", " + CppStringLiteral(AdjustPythonKeywords(f.name)) + ", &" + get_def + ", " + set_def + ", " + (doc.empty() ? "nullptr" : CppStringLiteral(doc)) + ", " + (f.is_static ? "true" : "false") + ", module_name)) return nullptr;\n";
        }
    }

    void Generator::EmitExposedField(TypeInfo &info, const CInterop::ClassField &f)
    {
        std::string cls_obj = info.var + ".type";
        StrippedType st = StripType(f.type);
        ScalarKind sk = GetScalarKind(st.base);
        auto it = types.find(st.base);
        const TypeInfo *ft = it != types.end() ? &it->second : nullptr;
        std::string member = "((" + info.c_name + " *)self_)->" + f.name;
        std::string get_body, set_body;
        if (st.is_ptr || st.is_ref || f.type.find('[') != std::string::npos)
            return; // Not needed for MeshLib.
        if (sk != ScalarKind::none)
        {
            std::string r = sk == ScalarKind::boolean ? "RetBool" : sk == ScalarKind::integer ? "RetInt" : "RetFloat";
            std::string g = sk == ScalarKind::boolean ? "ArgBool" : sk == ScalarKind::integer ? "ArgInt" : "ArgFloat";
            get_body = "    return rt::" + r + "(" + member + ");\n";
            set_body = "    {\n        decltype(" + member + ") v_{};\n        if (!rt::" + g + "(a[1], convert, v_)) return nullptr;\n        matched = true;\n        " + member + " = v_;\n        Py_RETURN_NONE;\n    }\n";
        }
        else if (ft && ft->IsExposedStruct())
        {
            get_body = "    return rt::Wrap(" + ft->var + ", &" + member + ", false, a[0]);\n";
            set_body = "    {\n        void *v_ = nullptr;\n        if (!rt::ArgObject(a[1], " + ft->var + ", false, v_)) return nullptr;\n        matched = true;\n        " + member + " = *(" + ft->c_name + " *)v_;\n        Py_RETURN_NONE;\n    }\n";
        }
        else if (ft && ft->IsEnum())
        {
            get_body = std::string("    return rt::RetEnumBits(") + ft->var + ", (unsigned long long)(" + (ft->is_signed_enum ? "long long" : "unsigned long long") + ")" + member + ");\n";
            set_body = "    {\n        decltype(" + member + ") v_{};\n        if (!rt::ArgEnum(a[1], " + ft->var + ", v_)) return nullptr;\n        matched = true;\n        " + member + " = v_;\n        Py_RETURN_NONE;\n    }\n";
        }
        else
        {
            skipped_funcs.push_back(info.cpp_name + "::" + f.name + ": unsupported exposed field type " + f.type);
            return;
        }
        std::string head = "(PyObject *const *a, bool convert, bool &matched)\n{\n    (void)convert;\n    void *self_ = nullptr;\n    if (!rt::ArgObject(a[0], " + info.var + ", false, self_)) return nullptr;\n";
        PreparedOverload gov, sov;
        gov.impl = NewId("impl_");
        out_impls += "static PyObject *" + gov.impl + head + "    matched = true;\n" + get_body + "}\n\n";
        gov.params = {{"arg0", module_qualname + "." + info.py_qualname, ""}};
        gov.ret_type = DocTypeName(f.type, true);
        gov.num_required = 1;
        sov.impl = NewId("impl_");
        out_impls += "static PyObject *" + sov.impl + head + set_body + "}\n\n";
        sov.params = {{"arg0", module_qualname + "." + info.py_qualname, ""}, {"arg1", DocTypeName(f.type, false), ""}};
        sov.ret_type = "None";
        sov.num_required = 2;
        std::string get_def = EmitGroup({"", {gov}}, &info, false, false);
        std::string set_def = EmitGroup({"", {sov}}, &info, false, false);
        std::string doc = ProcessComment(f.comment.c_style, false);
        out_init += "    if (!rt::AddProperty(" + cls_obj + ", " + CppStringLiteral(AdjustPythonKeywords(f.name)) + ", &" + get_def + ", &" + set_def + ", " + (doc.empty() ? "nullptr" : CppStringLiteral(doc)) + ", false, module_name)) return nullptr;\n";
    }

    std::optional<std::string> Generator::PointerStep(const std::string &ptr_c_type, const std::string &expr)
    {
        StrippedType st = StripType(ptr_c_type);
        if (!st.is_ptr)
            return {};
        auto it = types_by_c_name.find(st.base);
        if (it != types_by_c_name.end() && it->second->IsClass() && !it->second->IsExposedStruct())
        {
            // Every opaque class has those, but the description omits them.
            return it->second->c_name + (st.is_const ? "_OffsetPtr(" : "_OffsetMutablePtr(") + expr + ", 1)";
        }
        return expr + " + 1";
    }

    std::vector<std::pair<std::string, Generator::PreparedOverload>> Generator::MakeGenericExtras(const TypeInfo &info)
    {
        std::vector<std::pair<std::string, PreparedOverload>> ret;
        std::string self_doc = module_qualname + "." + info.py_qualname;
        const std::string head = "(PyObject *const *a, bool, bool &matched)\n{\n    void *self_ = nullptr;\n    if (!rt::ArgObject(a[0], " + info.var + ", false, self_)) return nullptr;\n    matched = true;\n";
        const std::string tail = "    }\n    catch (...)\n    {\n        return rt::TranslateException();\n    }\n}\n\n";

        // `begin()`/`end()`: members, or free functions taking the class.
        struct BeginEnd {const CInterop::BasicFuncLike *f = nullptr; bool is_const = true;};
        BeginEnd begin, end;
        auto Consider = [&](const CInterop::BasicFuncLike &f, std::string_view name, const CInterop::FuncParam &this_param)
        {
            if (this_param.c_params.size() != 1)
                return;
            bool is_const = StartsWith(this_param.c_params[0].c_type, "const ");
            BeginEnd &slot = name == "begin" ? begin : end;
            // Prefer the non-const ones, like pybind11 (it calls them on a non-const object).
            if (!slot.f || (slot.is_const && !is_const))
                slot = {&f, is_const};
        };
        for (const auto &m : info.class_desc->methods)
        {
            auto r = std::get_if<CInterop::MethodKinds::Regular>(&m.var);
            if (r && (r->name == "begin" || r->name == "end") && !m.is_static && m.params.size() == 1)
                Consider(m, r->name, m.params[0]);
        }
        for (const auto &f : c_desc.functions)
        {
            auto r = std::get_if<CInterop::FuncKinds::Regular>(&f.var);
            if (!r || f.params.size() != 1 || f.params[0].c_params.size() != 1 || StripType(f.params[0].c_params[0].c_type).base != info.c_name)
                continue;
            std::string name = SplitQualified(r->name).back();
            if (name == "begin" || name == "end")
                Consider(f, name, f.params[0]);
        }
        if (begin.f && end.f && begin.f->ret.c_type == end.f->ret.c_type && begin.is_const == end.is_const)
        {
            std::string it_c = begin.f->ret.c_type;
            StrippedType it_st = StripType(begin.f->ret.cpp_type);
            std::string self_arg = "(" + begin.f->params[0].c_params[0].c_type + ")self_";
            std::string body, elem_doc;
            if (it_st.is_ptr)
            {
                // A pointer range.
                std::string elem_cpp = it_st.base;
                auto conv = CToPy(elem_cpp + " &", it_c, "p_", "a[0]", "e_");
                auto step = PointerStep(it_c, "p_");
                if (conv && step)
                {
                    body = "        " + it_c + " p_ = " + begin.f->c_name + "(" + self_arg + ");\n        " + it_c + " e0_ = " + end.f->c_name + "(" + self_arg + ");\n        for (; p_ != e0_; p_ = " + *step + ")\n        {\n" + *conv + "            if (!e_) {Py_DECREF(list_); return nullptr;}\n            PyList_Append(list_, e_);\n            Py_DECREF(e_);\n        }\n";
                    elem_doc = DocTypeName(elem_cpp, true);
                }
            }
            else if (auto itp = types_by_c_name.find(StripType(it_c).base); itp != types_by_c_name.end() && itp->second->IsClass())
            {
                // An iterator class: `++`, `*` and `==`.
                const TypeInfo &it = *itp->second;
                const CInterop::BasicFuncLike *incr = nullptr, *deref = nullptr, *equal = nullptr;
                for (const auto &m : it.class_desc->methods)
                {
                    if (auto op = std::get_if<CInterop::MethodKinds::Operator>(&m.var))
                    {
                        if (op->token == "++" && !op->is_post_incr_or_decr) incr = &m;
                        if (op->token == "*" && m.params.size() == 1) deref = &m;
                        if (op->token == "==" && m.params.size() == 2) equal = &m;
                    }
                }
                for (const auto &f : c_desc.functions)
                {
                    auto op = std::get_if<CInterop::FuncKinds::Operator>(&f.var);
                    if (op && op->token == "==" && f.params.size() == 2 && !f.params[0].c_params.empty() && !f.params[1].c_params.empty() &&
                        StripType(f.params[0].c_params.back().c_type).base == it.c_name && StripType(f.params[1].c_params.back().c_type).base == it.c_name)
                        equal = &f;
                }
                auto PassIt = [&](const CInterop::FuncParam &p, const std::string &var)
                {
                    // The iterators are owned pointers, passed by pointer or by value with `PassBy`.
                    if (p.c_params.size() == 2)
                        return p.c_params[0].c_type + "_Copy, " + var;
                    return var;
                };
                if (incr && deref && equal)
                {
                    auto conv = CToPy(deref->ret.cpp_type, deref->ret.c_type, "v_", "a[0]", "e_");
                    if (conv)
                    {
                        std::string itc = it.c_name;
                        body = "        " + itc + " *i_ = " + begin.f->c_name + "(" + self_arg + ");\n        " + itc + " *e0_ = " + end.f->c_name + "(" + self_arg + ");\n";
                        body += "        while (!" + equal->c_name + "(" + PassIt(equal->params[0], "i_") + ", " + PassIt(equal->params[1], "e0_") + "))\n        {\n";
                        body += "            " + deref->ret.c_type + " v_ = " + deref->c_name + "(i_);\n" + *conv;
                        body += "            if (!e_) {Py_DECREF(list_); " + itc + "_Destroy(i_); " + itc + "_Destroy(e0_); return nullptr;}\n            PyList_Append(list_, e_);\n            Py_DECREF(e_);\n";
                        body += "            " + incr->c_name + "(i_);\n        }\n        " + itc + "_Destroy(i_);\n        " + itc + "_Destroy(e0_);\n";
                        elem_doc = DocTypeName(deref->ret.cpp_type, true);
                    }
                }
            }
            if (!body.empty())
            {
                // Pybind11 iterates lazily. A list is built eagerly here, which is observably the same except for the iterator type.
                PreparedOverload ov;
                ov.impl = NewId("impl_");
                out_impls += "static PyObject *" + ov.impl + head + "    try\n    {\n        PyObject *list_ = PyList_New(0);\n" + body + "        PyObject *r_ = PyObject_GetIter(list_);\n        Py_DECREF(list_);\n        return r_;\n" + tail;
                ov.params = {{"self", self_doc, ""}};
                ov.ret_type = "Iterator[" + elem_doc + "]";
                ov.num_required = 1;
                ret.emplace_back("__iter__", std::move(ov));
            }
        }

        // `__len__` for the contiguous sequences: `value_type`, `size()`, `data()`.
        {
            const CInterop::ClassMethod *size = nullptr, *data = nullptr;
            for (const auto &m : info.class_desc->methods)
            {
                auto r = std::get_if<CInterop::MethodKinds::Regular>(&m.var);
                if (!r || m.is_static || m.params.size() != 1)
                    continue;
                if (r->name == "size" && GetScalarKind(StripType(m.ret.cpp_type).base) == ScalarKind::integer)
                    size = &m;
                if (r->name == "data" && StripType(m.ret.cpp_type).is_ptr)
                    data = &m;
            }
            bool has_value_type = false;
            std::string self_spelling = TypeidSpelling(info.cpp_name);
            for (const auto &td : c_desc.typedefs)
            {
                if (EndsWith(td.full_name, "::value_type") && TypeidSpelling(td.full_name.substr(0, td.full_name.size() - 12)) == self_spelling)
                    has_value_type = true;
            }
            // The C bindings skip `begin()`/`end()` returning the iterators of `std::vector`, iterate over `data()` then.
            bool has_iter = false;
            for (const auto &r : ret)
                if (r.first == "__iter__")
                    has_iter = true;
            if (size && data && has_value_type && !has_iter && size->params[0].c_params.size() == 1)
            {
                const CInterop::ClassMethod *data_mut = data;
                for (const auto &m : info.class_desc->methods)
                {
                    auto r = std::get_if<CInterop::MethodKinds::Regular>(&m.var);
                    if (r && r->name == "data" && m.params.size() == 1 && !m.params[0].c_params.empty() && !StartsWith(m.params[0].c_params[0].c_type, "const "))
                        data_mut = &m;
                }
                StrippedType dst = StripType(data_mut->ret.cpp_type);
                auto conv = CToPy(dst.base + " &", data_mut->ret.c_type, "p_", "a[0]", "e_");
                auto step = PointerStep(data_mut->ret.c_type, "p_");
                if (conv && step)
                {
                    PreparedOverload ov;
                    ov.impl = NewId("impl_");
                    out_impls += "static PyObject *" + ov.impl + head + "    try\n    {\n        PyObject *list_ = PyList_New(0);\n";
                    out_impls += "        " + data_mut->ret.c_type + " p_ = " + data_mut->c_name + "((" + data_mut->params[0].c_params[0].c_type + ")self_);\n";
                    out_impls += "        for (size_t i_ = 0, n_ = " + size->c_name + "((" + size->params[0].c_params[0].c_type + ")self_); i_ < n_; i_++, p_ = " + *step + ")\n        {\n" + *conv;
                    out_impls += "            if (!e_) {Py_DECREF(list_); return nullptr;}\n            PyList_Append(list_, e_);\n            Py_DECREF(e_);\n        }\n        PyObject *r_ = PyObject_GetIter(list_);\n        Py_DECREF(list_);\n        return r_;\n" + tail;
                    ov.params = {{"self", self_doc, ""}};
                    ov.ret_type = "Iterator[" + DocTypeName(dst.base, true) + "]";
                    ov.num_required = 1;
                    ret.emplace_back("__iter__", std::move(ov));
                }
            }
            if (size && data && has_value_type && size->params[0].c_params.size() == 1)
            {
                PreparedOverload ov;
                ov.impl = NewId("impl_");
                out_impls += "static PyObject *" + ov.impl + head + "    try\n    {\n        return rt::RetInt(" + size->c_name + "((" + size->params[0].c_params[0].c_type + ")self_));\n" + tail;
                ov.params = {{"self", self_doc, ""}};
                ov.ret_type = "int";
                ov.num_required = 1;
                ret.emplace_back("__len__", std::move(ov));
            }
        }

        // `__repr__` from `operator<<`: `Name(...)`.
        // The class itself, then its bases (`ss << t` also finds the `operator<<` of a base).
        std::vector<std::pair<const TypeInfo *, std::string>> printable_as = {{&info, "self_"}};
        for (const auto &b : info.class_desc->inheritance_info.bases_indirect.Vec())
        {
            if (const TypeInfo *bt = FindType(b); bt && bt->IsClass() && info.class_desc->inheritance_info.bases_indirect.Map().at(b) == CInterop::InheritanceInfo::Kind::non_virt)
                printable_as.emplace_back(bt, "(void *)" + info.c_name + "_MutableUpcastTo_" + bt->c_name + "((" + info.c_name + " *)self_)");
        }
        bool found_print = false;
        for (const auto &[pt, self_expr] : printable_as)
        {
            for (const auto &f : c_desc.functions)
            {
                auto op = std::get_if<CInterop::FuncKinds::Operator>(&f.var);
                if (!op || op->token != "<<" || f.params.size() != 2 || StripType(f.params[0].cpp_type).base != "std::ostream" || StripType(f.params[1].cpp_type).base != pt->cpp_name)
                    continue;
                if (f.params[0].c_params.size() != 1 || f.params[1].c_params.size() != 1)
                    continue;
                std::string arg = pt->IsExposedStruct() && f.params[1].c_params[0].c_type == pt->c_name ? "*(" + pt->c_name + " *)" + self_expr : "(" + f.params[1].c_params[0].c_type + ")" + self_expr;
                PreparedOverload ov;
                ov.impl = NewId("impl_");
                // The stream is created on this side, which relies on the module and the C bindings using the same standard library.
                out_impls += "static PyObject *" + ov.impl + head + "    try\n    {\n        std::ostringstream ss_;\n        " + f.c_name + "((" + f.params[0].c_params[0].c_type + ")static_cast<std::ostream *>(&ss_), " + arg + ");\n";
                out_impls += "        std::string s_ = " + CppStringLiteral(info.py_qualname) + " \"(\" + std::move(ss_).str() + \")\";\n        return rt::RetString(s_.data(), s_.data() + s_.size());\n" + tail;
                ov.params = {{"self", self_doc, ""}};
                ov.ret_type = "str";
                ov.num_required = 1;
                ret.emplace_back("__repr__", std::move(ov));
                found_print = true;
                break;
            }
            if (found_print)
                break;
        }
        // The fixed-size vectors (`Vector3` etc.) have `begin()`/`end()` as C++ function templates that the C bindings don't instantiate,
        //   iterate over `[0, elements)` with `operator[]` instead.
        // The classes for this are given by `--iterate-by-index`, the C bindings can't tell if those templates exist.
        bool has_iter_now = false;
        for (const auto &r : ret)
            if (r.first == "__iter__")
                has_iter_now = true;
        bool iterate_by_index = std::any_of(iterate_by_index_regexes.begin(), iterate_by_index_regexes.end(), [&](const std::string &r){return std::regex_search(info.cpp_name, std::regex(r));});
        if (!has_iter_now && iterate_by_index)
        {
            const CInterop::ClassField *elements = nullptr;
            for (const auto &f : info.class_desc->fields)
                if (f.is_static && f.name == "elements" && f.getter_const)
                    elements = &f;
            const CInterop::ClassMethod *index = nullptr;
            for (const auto &m : info.class_desc->methods)
            {
                auto op = std::get_if<CInterop::MethodKinds::Operator>(&m.var);
                if (op && op->token == "[]" && m.params.size() == 2 && m.params[0].c_params.size() == 1 && m.params[1].c_params.size() == 1 && GetScalarKind(StripType(m.params[1].cpp_type).base) == ScalarKind::integer)
                {
                    if (!index || !StartsWith(m.params[0].c_params[0].c_type, "const "))
                        index = &m;
                }
            }
            if (elements && index)
            {
                StrippedType rst = StripType(index->ret.cpp_type);
                auto conv = CToPy(index->ret.cpp_type, index->ret.c_type, "v_", "a[0]", "e_");
                if (conv)
                {
                    std::string self_arg = info.IsExposedStruct() && index->params[0].c_params[0].c_type == info.c_name ? "*(" + info.c_name + " *)self_" : "(" + index->params[0].c_params[0].c_type + ")self_";
                    PreparedOverload ov;
                    ov.impl = NewId("impl_");
                    out_impls += "static PyObject *" + ov.impl + head + "    try\n    {\n        PyObject *list_ = PyList_New(0);\n";
                    out_impls += "        for (int i_ = 0, n_ = *" + elements->getter_const->c_name + "(); i_ < n_; i_++)\n        {\n";
                    out_impls += "            " + index->ret.c_type + " v_ = " + index->c_name + "(" + self_arg + ", i_);\n" + *conv;
                    out_impls += "            if (!e_) {Py_DECREF(list_); return nullptr;}\n            PyList_Append(list_, e_);\n            Py_DECREF(e_);\n        }\n        PyObject *r_ = PyObject_GetIter(list_);\n        Py_DECREF(list_);\n        return r_;\n" + tail;
                    ov.params = {{"self", self_doc, ""}};
                    ov.ret_type = "Iterator[" + DocTypeName(rst.base, true) + "]";
                    ov.num_required = 1;
                    ret.emplace_back("__iter__", std::move(ov));
                }
            }
        }

        bool has_repr = false;
        for (const auto &r : ret)
            if (r.first == "__repr__")
                has_repr = true;
        if (!has_repr)
        {
            // `ss << t` also compiles through a non-explicit conversion to an integer, e.g. for `Id<T>`.
            for (const auto &m : info.class_desc->methods)
            {
                auto conv = std::get_if<CInterop::MethodKinds::ConversionOperator>(&m.var);
                if (!conv || conv->is_explicit || m.params.size() != 1 || m.params[0].c_params.size() != 1 || GetScalarKind(StripType(m.ret.cpp_type).base) != ScalarKind::integer || m.ret.c_type.find('*') != std::string::npos)
                    continue;
                PreparedOverload ov;
                ov.impl = NewId("impl_");
                out_impls += "static PyObject *" + ov.impl + head + "    try\n    {\n        std::string s_ = " + CppStringLiteral(info.py_qualname) + " \"(\" + std::to_string(" + m.c_name + "((" + m.params[0].c_params[0].c_type + ")self_)) + \")\";\n";
                out_impls += "        return rt::RetString(s_.data(), s_.data() + s_.size());\n" + tail;
                ov.params = {{"self", self_doc, ""}};
                ov.ret_type = "str";
                ov.num_required = 1;
                ret.emplace_back("__repr__", std::move(ov));
                break;
            }
        }
        return ret;
    }

    std::string Generator::ArgObjectWithImplicit(const TypeInfo &cls, const std::string &a, const std::string &v, bool allow_none, bool optional_arg)
    {
        std::string ret = "    void *" + v + " = nullptr;\n";
        std::string check = "rt::ArgObject(" + a + ", " + cls.var + ", " + (allow_none ? "true" : "false") + ", " + v + ")";
        if (cls.has_implicit)
        {
            ret += "    rt::Ref " + v + "tmp;\n";
            check = "(" + check + " || (convert && implicit_" + cls.var + "(" + a + ", " + v + "tmp.p) && rt::ArgObject(" + v + "tmp.p, " + cls.var + ", false, " + v + ")))";
        }
        ret += "    if (" + std::string(optional_arg ? a + " && " : "") + "!" + check + ") return nullptr;\n";
        return ret;
    }

    const Generator::TypeInfo *Generator::ConversionCtorTarget(const CInterop::ClassMethod &m) const
    {
        if (!std::holds_alternative<CInterop::MethodKinds::ConversionOperator>(m.var) || m.inherited_from)
            return nullptr;
        StrippedType st = StripType(m.ret.cpp_type);
        if (st.is_ptr || st.is_ref)
            return nullptr;
        // Only the parsed classes, like in the pybind11 target.
        const TypeInfo *t = FindType(st.base);
        if (!t || !t->IsClass() || t->no_class || t->is_std_function || t->pointee || StartsWith(t->cpp_name, "std::") || StartsWith(t->cpp_name, "phmap::"))
            return nullptr;
        return t;
    }

    void Generator::CollectConversionCtors()
    {
        for (const TypeInfo *info : class_order)
        {
            if (!info->IsClass() || info->no_class)
                continue;
            for (const auto &m : info->class_desc->methods)
            {
                if (const TypeInfo *t = ConversionCtorTarget(m); t && t != info)
                    conversion_ctors[t].emplace_back(info, &m);
            }
        }
        // In the order of the source classes' names.
        for (auto &[t, list] : conversion_ctors)
            std::stable_sort(list.begin(), list.end(), [](const auto &a, const auto &b){return a.first->py_qualname < b.first->py_qualname;});
    }

    void Generator::EmitImplicitConversions()
    {
        // pybind11 registers the non-explicit constructors with one argument (not counting the defaulted ones) as implicit conversions.
        for (TypeInfo *info : class_order)
        {
            if (!info->IsClass() || info->no_class || info->is_std_function)
                continue;
            std::vector<std::string> checks;
            if (info->is_vector || IsListConstructible(*info))
                checks.push_back("PyList_Check(src)");
            if (!info->optional_value.empty())
            {
                // From `None` or a value, like the pybind11 target does.
                info->has_implicit = true;
                out_implicit += "static bool implicit_" + info->var + "(PyObject *src, PyObject *&tmp)\n{\n    if (PyObject_TypeCheck(src, (PyTypeObject *)" + info->var + ".type))\n        return false;\n    return rt::ImplicitConstruct(" + info->var + ".type, src, tmp);\n}\n";
                continue;
            }
            if (info->is_vector)
            {
                info->has_implicit = true;
                out_implicit += "static bool implicit_" + info->var + "(PyObject *src, PyObject *&tmp)\n{\n    if (PyList_Check(src))\n        return rt::ImplicitConstruct(" + info->var + ".type, src, tmp);\n    return false;\n}\n";
                continue;
            }
            for (const auto &m : info->class_desc->methods)
            {
                auto ctor = std::get_if<CInterop::MethodKinds::Constructor>(&m.var);
                if (!ctor || ctor->is_copying_ctor || ctor->is_explicit || m.inherited_from)
                    continue;
                std::vector<const CInterop::FuncParam *> params;
                for (const auto &p : m.params)
                    if (!p.is_this_param && !(p.c_params.empty() && StartsWith(StripType(p.cpp_type).base, "std::variant_index<")))
                        params.push_back(&p);
                std::size_t num_required = 0;
                for (auto p : params)
                    if (!p->default_arg_spelling)
                        num_required++;
                if (params.empty() || num_required > 1)
                    continue;
                StrippedType st = StripType(params[0]->cpp_type);
                ScalarKind sk = GetScalarKind(st.base);
                const TypeInfo *src = FindType(st.base);
                if (src && src->pointee)
                    src = src->pointee;
                if (src == info)
                    continue;
                std::string c;
                if (sk == ScalarKind::boolean) c = "PyBool_Check(src)";
                else if (sk == ScalarKind::integer) c = "(PyLong_Check(src) && !PyBool_Check(src))";
                else if (sk == ScalarKind::floating) c = "PyFloat_Check(src)";
                else if (st.base == "std::string" || st.base == "std::string_view") c = "PyUnicode_Check(src)";
                else if (src && src->IsEnum()) c = "PyObject_TypeCheck(src, (PyTypeObject *)" + src->var + ")";
                else if (src && src->IsClass() && src->is_std_function) c = "PyCallable_Check(src)";
                else if (src && src->IsClass() && !src->no_class) c = "PyObject_TypeCheck(src, (PyTypeObject *)" + src->var + ".type)";
                if (!c.empty())
                    checks.push_back(c);
            }
            if (auto it = conversion_ctors.find(info); it != conversion_ctors.end())
            {
                for (const auto &[src, m] : it->second)
                {
                    if (!std::get<CInterop::MethodKinds::ConversionOperator>(m->var).is_explicit)
                        checks.push_back("PyObject_TypeCheck(src, (PyTypeObject *)" + src->var + ".type)");
                }
            }
            if (checks.empty())
                continue;
            info->has_implicit = true;
            out_implicit += "static bool implicit_" + info->var + "(PyObject *src, PyObject *&tmp)\n{\n    if (";
            for (std::size_t i = 0; i < checks.size(); i++)
                out_implicit += (i ? " || " : "") + checks[i];
            out_implicit += ")\n        return rt::ImplicitConstruct(" + info->var + ".type, src, tmp);\n    return false;\n}\n";
        }
    }

    const Generator::TypeInfo *Generator::FindType(const std::string &cpp_name) const
    {
        auto it = types.find(cpp_name);
        return it == types.end() ? nullptr : &it->second;
    }

    std::string Generator::HolderFromSharedPtr(const TypeInfo &sp, const std::string &expr)
    {
        const TypeInfo *cv = FindType("std::shared_ptr<const void>");
        const TypeInfo *mv = FindType("std::shared_ptr<void>");
        for (const auto &m : sp.class_desc->methods)
        {
            if (!std::holds_alternative<CInterop::MethodKinds::ConversionOperator>(m.var))
                continue;
            std::string r = StripType(m.ret.cpp_type).base;
            if (r == "std::shared_ptr<const void>" && cv)
                return "(void *)" + m.c_name + "(" + expr + ")";
            if (r == "std::shared_ptr<void>" && cv && mv)
                return "(void *)" + cv->c_name + "_ConstructFromMutable(" + c_desc.helpers_prefix + "PassBy_MoveAndDestroy, " + m.c_name + "(" + expr + "))";
        }
        return "nullptr";
    }

    void Generator::CollectAliases()
    {
        if (c_desc.type_aliases.empty())
            return;
        // By spelling, sorted like the `std::map` in the pybind11 target. A spelling of several types is ambiguous and skipped.
        std::map<std::string, std::set<const TypeInfo *>> by_spelling;
        for (const auto &a : c_desc.type_aliases)
        {
            std::string target = Trim(a.target);
            if (StartsWith(target, "const "))
                target = target.substr(6);
            const TypeInfo *t = FindType(target);
            if (!t)
                continue;
            if (t->pointee)
                t = t->pointee;
            if (!t->IsClass() && !t->IsEnum())
                continue;
            std::string s = Trim(a.spelling);
            if (StartsWith(s, "const "))
                s = s.substr(6);
            by_spelling[s].insert(t);
        }
        std::set<std::pair<std::string, std::string>> occupied; // (scope var, name) of the real types.
        for (const auto &[n, info] : types)
            if (!info.no_class)
                occupied.emplace(info.scope_var, info.py_name);
        std::set<std::pair<std::string, std::string>> done;
        for (const auto &[spelling, targets] : by_spelling)
        {
            if (targets.size() != 1)
                continue;
            const TypeInfo *target = *targets.begin();
            // The pybind11 target registers no aliases for the `std::function`s, and none spelled with expressions in the template arguments.
            if (target->no_class || target->is_std_function || spelling.find('?') != std::string::npos || spelling.find("==") != std::string::npos)
                continue;
            // The scope: the namespaces, then the parsed classes.
            std::vector<std::string> parts = SplitQualified(spelling);
            // The spellings through the entities hidden from Python don't exist there.
            bool ignored = false;
            for (std::size_t i = 1; i <= parts.size() && !ignored; i++)
                ignored = IsIgnoredForPython(Join(std::vector<std::string>(parts.begin(), parts.begin() + std::ptrdiff_t(i)), "::"));
            if (ignored)
                continue;
            std::string scope_var = "module", scope_qual;
            std::size_t i = 0;
            for (; i + 1 < parts.size(); i++)
            {
                std::string prefix = Join(std::vector<std::string>(parts.begin(), parts.begin() + std::ptrdiff_t(i + 1)), "::");
                if (auto ns = namespaces.find(prefix); ns != namespaces.end())
                {
                    scope_var = ns->second.var;
                    scope_qual = ns->second.qualname;
                    continue;
                }
                const TypeInfo *cls = FindType(prefix);
                if (cls && cls->IsClass() && !cls->no_class && !StartsWith(prefix, "std::") && !StartsWith(prefix, "phmap::"))
                {
                    scope_var = cls->var + ".type";
                    scope_qual = cls->py_qualname;
                    continue;
                }
                break;
            }
            std::string name = ToPythonName(AdjustName(Join(std::vector<std::string>(parts.begin() + std::ptrdiff_t(i), parts.end()), "::")));
            if (name.empty() || occupied.contains({scope_var, name}))
                continue;
            std::string qualname = scope_qual.empty() ? name : scope_qual + "." + name;
            if (!done.emplace(scope_var, name).second)
            {
                // Another spelling of the same type with the same Python name: listed in the docs again, like the pybind11 target does.
                auto &list = aliases_by_type[target];
                if (std::any_of(list.begin(), list.end(), [&](const AliasEntry &e){return e.scope_var == scope_var && e.name == name;}))
                    list.push_back({scope_var, name, qualname, true});
                continue;
            }
            aliases_by_type[target].push_back({scope_var, name, qualname});
        }
    }

    void Generator::EmitAliases()
    {
        if (!c_desc.type_aliases.empty())
        {
            for (const auto &[target, list] : aliases_by_type)
            {
                std::string value = target->IsClass() ? target->var + ".type" : target->var;
                for (const auto &a : list)
                {
                    if (a.doc_only)
                        continue;
                    if (a.scope_var == "module")
                        out_init_classes += "    Py_INCREF(" + value + "); if (PyModule_AddObject(module, " + CppStringLiteral(a.name) + ", " + value + ") < 0) return nullptr;\n";
                    else
                        out_init_classes += "    if (!rt::TypeSetAttr(" + a.scope_var + ", " + CppStringLiteral(a.name) + ", " + value + ")) return nullptr;\n";
                }
            }
            return;
        }
        // `std::shared_ptr<T>` -> `T`.
        for (const TypeInfo *info : class_order)
        {
            if (info->pointee && !info->pointee->no_class)
            {
                std::string name = ToPythonName(AdjustName(TypeidSpelling(info->cpp_name)));
                std::string value = info->pointee->var + ".type";
                out_init_classes += "    Py_INCREF(" + value + "); if (PyModule_AddObject(module, " + CppStringLiteral(name) + ", " + value + ") < 0) return nullptr;\n";
            }
        }

        std::set<std::pair<std::string, std::string>> done; // (scope var, name)
        for (const TypeInfo *info : class_order)
        {
            if (!info->no_class)
                done.emplace(info->scope_var, info->py_name);
        }
        auto Emit = [&](const std::string &scope_var, const std::string &name, const TypeInfo &target)
        {
            if (name.empty() || target.no_class || !done.emplace(scope_var, name).second)
                return;
            std::string value = target.IsClass() ? target.var + ".type" : target.var;
            if (scope_var == "module")
                out_init_classes += "    Py_INCREF(" + value + "); if (PyModule_AddObject(module, " + CppStringLiteral(name) + ", " + value + ") < 0) return nullptr;\n";
            else
                out_init_classes += "    if (!rt::TypeSetAttr(" + scope_var + ", " + CppStringLiteral(name) + ", " + value + ")) return nullptr;\n";
        };

        // The `std::` types are also reachable under the names spelled with the typedefs.
        for (const TypeInfo *info : class_order)
        {
            if (info->scope_var == "module" && info->py_qualname == info->py_name && (StartsWith(info->cpp_name, "std::") || StartsWith(info->cpp_name, "phmap::")))
                Emit("module", ToPythonName(AdjustName(info->cpp_name)), *info);
        }

        for (const auto &td : c_desc.typedefs)
        {
            std::string target_name = StripType(td.canonical).base;
            auto it = types.find(target_name);
            if (it == types.end())
                continue;
            const TypeInfo &target = it->second;
            std::vector<std::string> parts = SplitQualified(td.full_name);
            std::string enclosing = Join(std::vector<std::string>(parts.begin(), parts.end() - 1), "::");
            if (auto cls = types.find(enclosing); cls != types.end() && cls->second.IsClass() && !cls->second.no_class)
                Emit(cls->second.var + ".type", ToPythonName(AdjustName(parts.back())), target);
            else if (auto ns = namespaces.find(enclosing); ns != namespaces.end())
                Emit(ns->second.var, ToPythonName(AdjustName(parts.back())), target);
            // The member typedefs of class templates are also reachable by the flattened name.
            if (enclosing.find('<') != std::string::npos)
                Emit("module", ToPythonName(AdjustName(td.full_name)), target);
        }
    }

    const CInterop::ClassMethod *Generator::FindMethod(const TypeInfo &info, std::string_view c_name_suffix)
    {
        for (const auto &m : info.class_desc->methods)
        {
            if (EndsWith(m.c_name, std::string(info.c_name) + std::string(c_name_suffix)))
                return &m;
        }
        return nullptr;
    }

    void Generator::EmitVectorMembers(TypeInfo &info)
    {
        std::string cls_obj = info.var + ".type";
        const CInterop::ClassMethod *init = FindMethod(info, "_DefaultConstruct");
        const CInterop::ClassMethod *size = FindMethod(info, "_size");
        const CInterop::ClassMethod *get = FindMethod(info, "_at_mut");
        const CInterop::ClassMethod *insert = FindMethod(info, "_insert");
        const CInterop::ClassMethod *erase = FindMethod(info, "_erase");
        const CInterop::ClassMethod *clear = FindMethod(info, "_clear");
        const CInterop::ClassMethod *data = FindMethod(info, "_data_mut");
        if (!init || !size || !get || !insert || !erase || !clear)
        {
            skipped_funcs.push_back(info.cpp_name + ": not enough C functions for the vector API");
            return;
        }
        // The element type, the first template argument.
        std::string inner = info.cpp_name.substr(12, info.cpp_name.size() - 13);
        int depth = 0;
        std::size_t end = inner.size();
        for (std::size_t i = 0; i < inner.size(); i++)
        {
            if (inner[i] == '<' || inner[i] == '(') depth++;
            else if (inner[i] == '>' || inner[i] == ')') depth--;
            else if (inner[i] == ',' && depth == 0) {end = i; break;}
        }
        std::string elem = Trim(inner.substr(0, end));

        out_init += "    {\n        PyObject *prims_ = PyDict_New();\n";
        auto Prim = [&](const char *name, const CInterop::ClassMethod &m, int self_kind)
        {
            auto ov = PrepareOverload(m, &info, self_kind);
            if (!ov)
                return false;
            std::string def = EmitGroup({name, {*ov}}, &info, false, false);
            out_init += "        if (!rt::AddPrim(prims_, " + CppStringLiteral(name) + ", &" + def + ", module_name)) return nullptr;\n";
            return true;
        };
        bool ok = Prim("init", *init, 2) && Prim("size", *size, 1) && Prim("get", *get, 1) && Prim("insert", *insert, 1) && Prim("erase", *erase, 1) && Prim("clear", *clear, 1);
        if (const CInterop::ClassMethod *m = FindMethod(info, "_resize"))
            (void)Prim("resize", *m, 1);
        if (const CInterop::ClassMethod *at = FindMethod(info, "_at"); at && at->params.size() == 2 && at->params[0].c_params.size() == 1)
        {
            if (auto pr = PrintElem(elem, "e_"))
            {
                std::string body = "    void *self_ = nullptr;\n    if (!rt::ArgObject(a[0], " + info.var + ", false, self_)) return nullptr;\n";
                body += "    std::ostringstream ss_;\n    ss_ << " + CppStringLiteral(info.py_name + "[") + ";\n";
                body += "    for (size_t i_ = 0, n_ = " + size->c_name + "((" + size->params[0].c_params[0].c_type + ")self_); i_ < n_; i_++)\n    {\n        if (i_) ss_ << \", \";\n        auto e_ = " + at->c_name + "((" + at->params[0].c_params[0].c_type + ")self_, i_);\n    " + *pr + "    }\n";
                body += "    ss_ << ']';\n    std::string s_ = std::move(ss_).str();\n    return rt::RetString(s_.data(), s_.data() + s_.size());\n";
                out_init += "        if (!rt::AddPrim(prims_, \"repr\", &" + CustomPrim(body, 1) + ", module_name)) return nullptr;\n";
            }
        }
        if (const CInterop::ClassMethod *m = FindMethod(info, "_resize_with_default_value"))
            (void)Prim("resize_value", *m, 1);
        std::string elem_c_type = StripType(get->ret.c_type).base;
        // The element size: `sizeof` for the complete C types, else the stride of the `OffsetPtr()` of the element class.
        std::string elem_size = "(Py_ssize_t)sizeof(" + elem_c_type + ")";
        if (auto it = types_by_c_name.find(elem_c_type); it != types_by_c_name.end() && it->second->IsClass() && !it->second->IsExposedStruct())
        {
            if (FindMethod(*it->second, "_OffsetPtr"))
                elem_size = "[]{alignas(64) static char buf_[1]; const " + elem_c_type + " *p_ = (const " + elem_c_type + " *)buf_; return (Py_ssize_t)((const char *)" + elem_c_type + "_OffsetPtr(p_, 1) - (const char *)p_);}()";
            else
                elem_size = "(Py_ssize_t)0";
        }
        if (!data)
            data = FindMethod(info, "_data");
        if (!data)
            data = FindMethod(info, "_begin_mut");
        bool comparable = GetScalarKind(StripType(elem).base) != ScalarKind::none || StripType(elem).is_ptr || StripType(elem).base == "std::string";
        if (const TypeInfo *eti = FindType(StripType(elem).base); eti && (eti->IsEnum() || eti->is_vector))
            comparable = true;
        if (std::find(c_desc.equality_comparable_types.begin(), c_desc.equality_comparable_types.end(), StripType(elem).base) != c_desc.equality_comparable_types.end())
            comparable = true;
        for (const auto &f : c_desc.functions)
        {
            auto op = std::get_if<CInterop::FuncKinds::Operator>(&f.var);
            if (op && op->token == "==" && f.params.size() == 2 && StripType(f.params[0].cpp_type).base == StripType(elem).base)
                comparable = true;
        }
        if (const TypeInfo *eti = FindType(StripType(elem).base); eti && eti->IsClass())
        {
            for (const auto &mm : eti->class_desc->methods)
                if (auto op = std::get_if<CInterop::MethodKinds::Operator>(&mm.var); op && op->token == "==")
                    comparable = true;
        }
        if (comparable)
            out_init += "        PyDict_SetItemString(prims_, \"comparable\", Py_True);\n";
        if (data)
        {
            // The pointer as an integer.
            std::string impl = NewId("impl_");
            out_impls += "static PyObject *" + impl + "(PyObject *const *a, bool, bool &matched)\n{\n    void *self_ = nullptr;\n    if (!rt::ArgObject(a[0], " + info.var + ", false, self_)) return nullptr;\n";
            out_impls += "    matched = true;\n    return PyLong_FromVoidPtr((void *)" + data->c_name + "((" + data->params[0].c_params[0].c_type + ")self_));\n}\n\n";
            PreparedOverload ov;
            ov.impl = impl;
            ov.params = {{"", "object", ""}};
            ov.ret_type = "int";
            ov.num_required = 1;
            std::string def = EmitGroup({"data", {ov}}, &info, false, false);
            out_init += "        if (!rt::AddPrim(prims_, \"data\", &" + def + ", module_name)) return nullptr;\n";
        }
        else if (StripType(get->ret.c_type).is_ptr && get->params.size() == 2 && get->params[0].c_params.size() == 1 && size->params[0].c_params.size() == 1)
        {
            // No `data()` with `--minimal-containers`: the address of the first element, null if empty.
            std::string impl = NewId("impl_");
            out_impls += "static PyObject *" + impl + "(PyObject *const *a, bool, bool &matched)\n{\n    void *self_ = nullptr;\n    if (!rt::ArgObject(a[0], " + info.var + ", false, self_)) return nullptr;\n";
            out_impls += "    matched = true;\n    if (" + size->c_name + "((" + size->params[0].c_params[0].c_type + ")self_) == 0) return PyLong_FromVoidPtr(nullptr);\n";
            out_impls += "    return PyLong_FromVoidPtr((void *)" + get->c_name + "((" + get->params[0].c_params[0].c_type + ")self_, 0));\n}\n\n";
            PreparedOverload ov;
            ov.impl = impl;
            ov.params = {{"", "object", ""}};
            ov.ret_type = "int";
            ov.num_required = 1;
            std::string def = EmitGroup({"data", {ov}}, &info, false, false);
            out_init += "        if (!rt::AddPrim(prims_, \"data\", &" + def + ", module_name)) return nullptr;\n";
        }
        if (!ok)
        {
            skipped_funcs.push_back(info.cpp_name + ": unsupported element type for the vector API");
            out_init += "        Py_DECREF(prims_);\n    }\n";
            return;
        }
        if (std::string elem_ret = DocTypeName(elem, true); elem_ret != DocTypeName(elem, false))
            out_init += "        {PyObject *s_ = PyUnicode_FromString(" + CppStringLiteral(elem_ret) + "); PyDict_SetItemString(prims_, \"elem_ret\", s_); Py_XDECREF(s_);}\n";
        out_init += "        if (!rt::CallRt(\"add_vector_api\", Py_BuildValue(\"(OsssNn)\", " + cls_obj + ", " + CppStringLiteral(module_qualname + "." + info.py_qualname) + ", " + CppStringLiteral(info.py_name) + ", " + CppStringLiteral(DocTypeName(elem, false)) + ", prims_, " + elem_size + "))) return nullptr;\n";
        out_init += "    }\n";
    }

    std::string Generator::CustomPrim(const std::string &body, std::size_t num_params)
    {
        PreparedOverload ov;
        ov.impl = NewId("impl_");
        out_impls += "static PyObject *" + ov.impl + "(PyObject *const *a, bool convert, bool &matched)\n{\n    (void)convert;\n    matched = true;\n    try\n    {\n";
        std::size_t pos = 0;
        while (pos < body.size())
        {
            std::size_t end = body.find('\n', pos);
            out_impls += "    " + body.substr(pos, end - pos + 1);
            pos = end + 1;
        }
        out_impls += "    }\n    catch (...)\n    {\n        return rt::TranslateException();\n    }\n}\n\n";
        for (std::size_t i = 0; i < num_params; i++)
            ov.params.push_back({"", "object", ""});
        ov.ret_type = "object";
        ov.num_required = num_params;
        return EmitGroup({"", {ov}}, nullptr, false, false);
    }

    std::optional<std::string> Generator::PrintElem(const std::string &cpp_type, const std::string &ptr)
    {
        StrippedType st = StripType(cpp_type);
        ScalarKind sk = GetScalarKind(st.base);
        if (st.is_ptr)
            return "    ss_ << (const void *)*" + ptr + ";\n";
        if (st.base == "char" || st.base == "signed char" || st.base == "unsigned char")
            return "    ss_ << int(*" + ptr + ");\n";
        if (sk != ScalarKind::none)
            return "    ss_ << *" + ptr + ";\n";
        if (st.base == "std::string")
        {
            const TypeInfo *str = FindType("std::string");
            return "    ss_ << std::string(" + str->c_name + "_data(" + ptr + "), " + str->c_name + "_data_end(" + ptr + "));\n";
        }
        const TypeInfo *ti = FindType(st.base);
        if (!ti || !ti->IsClass())
            return {};
        if (st.base == "std::filesystem::path")
        {
            const TypeInfo &str = types.at("std::string");
            return "    {\n        " + str.c_name + " *s_ = " + ti->c_name + "_string(" + ptr + ");\n        ss_ << std::quoted(std::string(" + str.c_name + "_data(s_), " + str.c_name + "_data_end(s_)));\n        " + str.c_name + "_Destroy(s_);\n    }\n";
        }
        if (ti->pointee)
        {
            // `std::shared_ptr` prints the pointer.
            if (const CInterop::ClassMethod *get = FindMethod(*ti, "_get"); get && get->params.size() == 1 && get->params[0].c_params.size() == 1)
                return "    ss_ << (const void *)" + get->c_name + "((" + get->params[0].c_params[0].c_type + ")" + ptr + ");\n";
            return {};
        }
        // The class itself, then its non-virtual bases (`ss << t` also finds the `operator<<` of a base).
        std::vector<std::pair<const TypeInfo *, std::string>> printable_as = {{ti, ptr}};
        for (const auto &b : ti->class_desc->inheritance_info.bases_indirect.Vec())
        {
            if (const TypeInfo *bt = FindType(b); bt && bt->IsClass() && ti->class_desc->inheritance_info.bases_indirect.Map().at(b) == CInterop::InheritanceInfo::Kind::non_virt)
                printable_as.emplace_back(bt, ti->c_name + "_UpcastTo_" + bt->c_name + "((const " + ti->c_name + " *)" + ptr + ")");
        }
        for (const auto &[pt, expr] : printable_as)
        {
            for (const auto &f : c_desc.functions)
            {
                auto op = std::get_if<CInterop::FuncKinds::Operator>(&f.var);
                if (!op || op->token != "<<" || f.params.size() != 2 || StripType(f.params[0].cpp_type).base != "std::ostream" || StripType(f.params[1].cpp_type).base != pt->cpp_name)
                    continue;
                if (f.params[0].c_params.size() != 1 || f.params[1].c_params.size() != 1)
                    continue;
                std::string arg = pt->IsExposedStruct() && f.params[1].c_params[0].c_type == pt->c_name ? "*(" + pt->c_name + " *)" + expr : "(" + f.params[1].c_params[0].c_type + ")" + expr;
                return "    " + f.c_name + "((" + f.params[0].c_params[0].c_type + ")static_cast<std::ostream *>(&ss_), " + arg + ");\n";
            }
        }
        for (const auto &m : ti->class_desc->methods)
        {
            auto conv = std::get_if<CInterop::MethodKinds::ConversionOperator>(&m.var);
            if (conv && !conv->is_explicit && m.params.size() == 1 && m.params[0].c_params.size() == 1 && GetScalarKind(StripType(m.ret.cpp_type).base) == ScalarKind::integer && m.ret.c_type.find('*') == std::string::npos)
                return "    ss_ << " + m.c_name + "((" + m.params[0].c_params[0].c_type + ")" + ptr + ");\n";
        }
        return {};
    }

    std::optional<std::string> Generator::AssignFromPy(const std::string &cpp_type, const std::string &dst, const std::string &py)
    {
        StrippedType st = StripType(cpp_type);
        ScalarKind sk = GetScalarKind(st.base);
        const TypeInfo *ti = FindType(st.base);
        std::string fail = "{PyErr_SetString(PyExc_TypeError, \"Incompatible value type.\"); return nullptr;}";
        if (st.is_ptr)
            return {};
        if (sk != ScalarKind::none)
        {
            std::string f = sk == ScalarKind::boolean ? "ArgBool" : sk == ScalarKind::integer ? "ArgInt" : "ArgFloat";
            return "    {\n        std::remove_reference_t<decltype(*" + dst + ")> v_{};\n        if (!rt::" + f + "(" + py + ", true, v_)) " + fail + "\n        *" + dst + " = v_;\n    }\n";
        }
        if (ti && ti->IsEnum())
            return "    {\n        std::remove_reference_t<decltype(*" + dst + ")> v_{};\n        if (!rt::ArgEnum(" + py + ", " + ti->var + ", v_)) " + fail + "\n        *" + dst + " = v_;\n    }\n";
        if (st.base == "std::string")
        {
            const TypeInfo *str = FindType("std::string");
            return "    {\n        rt::StringArg v_;\n        if (!rt::ArgString(" + py + ", v_)) " + fail + "\n        " + str->c_name + "_AssignFrom(" + dst + ", v_.data, v_.end());\n    }\n";
        }
        if (ti && ti->IsExposedStruct())
            return "    {\n        void *v_ = nullptr;\n        if (!rt::ArgObject(" + py + ", " + ti->var + ", false, v_)) " + fail + "\n        *" + dst + " = *(" + ti->c_name + " *)v_;\n    }\n";
        if (ti && ti->IsClass() && !ti->no_class)
        {
            for (const auto &m : ti->class_desc->methods)
            {
                auto op = std::get_if<CInterop::MethodKinds::Operator>(&m.var);
                if (!op || op->token != "=" || !op->is_copying_assignment || m.params.size() != 2)
                    continue;
                std::string src = m.params[1].c_params.size() == 2 ? m.params[1].c_params[0].c_type + "_Copy, (" + ti->c_name + " *)v_" : "(" + m.params[1].c_params[0].c_type + ")v_";
                return "    {\n        void *v_ = nullptr;\n        if (!rt::ArgObject(" + py + ", " + ti->var + ", false, v_)) " + fail + "\n        " + m.c_name + "(" + dst + ", " + src + ");\n    }\n";
            }
        }
        return {};
    }

    std::optional<std::string> Generator::ArgToPtr(const std::string &cpp_type, const std::string &py, const std::string &var)
    {
        StrippedType st = StripType(cpp_type);
        ScalarKind sk = GetScalarKind(st.base);
        const TypeInfo *ti = FindType(st.base);
        std::string fail = "{PyErr_SetString(PyExc_TypeError, \"Incompatible key type.\"); return nullptr;}";
        if (sk != ScalarKind::none)
        {
            std::string f = sk == ScalarKind::boolean ? "ArgBool" : sk == ScalarKind::integer ? "ArgInt" : "ArgFloat";
            return "    " + st.base + " " + var + "v_{};\n    if (!rt::" + f + "(" + py + ", true, " + var + "v_)) " + fail + "\n    const " + st.base + " *" + var + " = &" + var + "v_;\n";
        }
        if (ti && ti->IsEnum())
            return "    " + ti->c_name + " " + var + "v_{};\n    if (!rt::ArgEnum(" + py + ", " + ti->var + ", " + var + "v_)) " + fail + "\n    const " + ti->c_name + " *" + var + " = &" + var + "v_;\n";
        if (ti && ti->IsClass() && !ti->no_class)
            return "    void *" + var + "o_ = nullptr;\n    if (!rt::ArgObject(" + py + ", " + ti->var + ", false, " + var + "o_)) " + fail + "\n    const " + ti->c_name + " *" + var + " = (const " + ti->c_name + " *)" + var + "o_;\n";
        return {};
    }

    bool Generator::IsIgnoredCFile(const std::string &relative_name) const
    {
        return std::any_of(ignored_c_files.begin(), ignored_c_files.end(), [&](const std::string &r){return std::regex_search(relative_name, std::regex(r));});
    }

    bool Generator::IsIgnoredForPython(const std::string &cpp_name)
    {
        if (ignored_for_python.empty())
            return false;
        std::string spelled = TypeidSpelling(cpp_name);
        for (const auto &r : ignored_for_python)
        {
            std::regex re(r);
            if (std::regex_search(cpp_name, re) || std::regex_search(spelled, re))
                return true;
        }
        return false;
    }

    void Generator::EmitOptionalMembers(TypeInfo &info)
    {
        const CInterop::ClassMethod *init = FindMethod(info, "_DefaultConstruct");
        const CInterop::ClassMethod *copy = FindMethod(info, "_ConstructFromAnother");
        const CInterop::ClassMethod *from = FindMethod(info, "_ConstructFrom");
        const CInterop::ClassMethod *has_value = FindMethod(info, "_has_value");
        const CInterop::ClassMethod *value = FindMethod(info, "_value");
        if (!init || !has_value || !value)
            return;
        out_init += "    {\n        PyObject *prims_ = PyDict_New();\n";
        auto Prim = [&](const char *name, const CInterop::ClassMethod &m, int self_kind)
        {
            auto ov = PrepareOverload(m, &info, self_kind);
            if (!ov)
                return;
            std::string def = EmitGroup({name, {*ov}}, &info, false, false);
            out_init += "        if (!rt::AddPrim(prims_, " + CppStringLiteral(name) + ", &" + def + ", module_name)) return nullptr;\n";
        };
        Prim("init", *init, 2);
        if (copy)
            Prim("copy", *copy, 2);
        if (from)
            Prim("from", *from, 2);
        Prim("has_value", *has_value, 1);
        Prim("value", *value, 1);
        out_init += "        if (!rt::CallRt(\"add_optional_api\", Py_BuildValue(\"(OssN)\", " + info.var + ".type, " + CppStringLiteral(module_qualname + "." + info.py_qualname) + ", " + CppStringLiteral(DocTypeName(info.optional_value, false)) + ", prims_))) return nullptr;\n    }\n";
    }

    void Generator::EmitVariantMembers(TypeInfo &info)
    {
        const std::string self_doc = module_qualname + "." + info.py_qualname;
        const CInterop::ClassMethod *index = FindMethod(info, "_index");
        if (!index || index->params.size() != 1 || index->params[0].c_params.size() != 1)
            return;
        const std::string self_c = index->params[0].c_params[0].c_type;
        const std::string head = "(PyObject *const *a, bool, bool &matched)\n{\n    void *self_ = nullptr;\n    if (!rt::ArgObject(a[0], " + info.var + ", false, self_)) return nullptr;\n    matched = true;\n";

        // The alternatives, from the `ConstructAs_...` functions.
        struct Alt {std::string cpp, name; const CInterop::ClassMethod *ctor = nullptr, *get = nullptr;};
        std::vector<Alt> alts;
        bool all_default_constructible = true;
        for (const auto &m : info.class_desc->methods)
        {
            std::size_t pos = m.c_name.find("_ConstructAs_");
            if (pos == std::string::npos)
                continue;
            for (const auto &p : m.params)
            {
                if (p.is_this_param || p.c_params.empty())
                    continue;
                Alt alt{.cpp = StripType(p.cpp_type).base, .ctor = &m};
                alt.name = ToPythonName(AdjustName(TypeidSpelling(alt.cpp)));
                alt.get = FindMethod(info, "_get_" + m.c_name.substr(pos + 13));
                if (const TypeInfo *t = FindType(alt.cpp); t && t->traits && t->traits->default_constructible == CInterop::SpecialMemberKind::disabled)
                    all_default_constructible = false;
                alts.push_back(std::move(alt));
                break;
            }
        }

        GroupEntry init{"__init__", {}};
        if (const CInterop::ClassMethod *def = FindMethod(info, "_DefaultConstruct"); def && all_default_constructible)
        {
            if (auto ov = PrepareOverload(*def, &info, 2))
                init.overloads.push_back(std::move(*ov));
        }
        std::vector<const CInterop::ClassMethod *> ctors;
        if (const CInterop::ClassMethod *copy = FindMethod(info, "_ConstructFromAnother"))
            ctors.push_back(copy);
        for (const Alt &alt : alts)
            ctors.push_back(alt.ctor);
        for (const CInterop::ClassMethod *m : ctors)
        {
            if (auto ov = PrepareOverload(*m, &info, 2); ov && ov->params.size() == 2)
            {
                ov->params[1].name = "arg0";
                ov->params[1].default_repr.clear();
                ov->num_required = 2;
                ov->comment.clear();
                init.overloads.push_back(std::move(*ov));
            }
        }
        std::string cls_obj = info.var + ".type";
        if (!init.overloads.empty())
            out_init += "    if (!rt::AddMethod(" + cls_obj + ", &" + EmitGroup(init, &info, true, true) + ")) return nullptr;\n";

        { // `current_type()`.
            PreparedOverload ov;
            ov.impl = NewId("impl_");
            out_impls += "static PyObject *" + ov.impl + head + "    static const char *const names_[] = {";
            for (const Alt &alt : alts)
                out_impls += CppStringLiteral(alt.name) + ", ";
            out_impls += "nullptr};\n    std::size_t i_ = (std::size_t)" + index->c_name + "((" + self_c + ")self_);\n";
            out_impls += "    const char *n_ = i_ < " + std::to_string(alts.size()) + " ? names_[i_] : \"\";\n    return rt::RetString(n_, n_ + std::strlen(n_));\n}\n\n";
            ov.params = {{"self", self_doc, ""}};
            ov.ret_type = "str";
            ov.num_required = 1;
            ov.comment = "Returns the current type name as a string. Call `get_<TypeName>()` to get the value.";
            out_init += "    if (!rt::AddMethod(" + cls_obj + ", &" + EmitGroup({"current_type", {ov}}, &info, true, false) + ")) return nullptr;\n";
        }

        // `get_<TypeName>()`, a copy of the alternative.
        for (const Alt &alt : alts)
        {
            if (!alt.get || alt.get->params.size() != 1 || alt.get->params[0].c_params.size() != 1)
                continue;
            auto conv = CToPy("const " + alt.cpp + " &", alt.get->ret.c_type, "p_", "a[0]", "r_");
            if (!conv)
                continue;
            PreparedOverload ov;
            ov.impl = NewId("impl_");
            out_impls += "static PyObject *" + ov.impl + head + "    try\n    {\n        auto p_ = " + alt.get->c_name + "((" + alt.get->params[0].c_params[0].c_type + ")self_);\n";
            // The C function returns null for an inactive alternative, `std::get()` would throw `std::bad_variant_access`.
            out_impls += "        if (!p_) {PyErr_SetString(PyExc_RuntimeError, \"bad variant access\"); return nullptr;}\n";
            out_impls += *conv + "        return r_;\n    }\n    catch (...)\n    {\n        return rt::TranslateException();\n    }\n}\n\n";
            ov.params = {{"self", self_doc, ""}};
            ov.ret_type = DocTypeName(alt.cpp, true);
            ov.num_required = 1;
            ov.comment = "Return this alternative, or throw if it's not active.";
            out_init += "    if (!rt::AddMethod(" + cls_obj + ", &" + EmitGroup({"get_" + alt.name, {ov}}, &info, true, false) + ")) return nullptr;\n";
        }
    }

    bool Generator::IsListConstructible(const TypeInfo &info)
    {
        if (!info.IsClass() || info.no_class || info.is_vector || info.IsExposedStruct() || !FindMethod(info, "_DefaultConstruct"))
            return false;
        bool size = false, data = false, push_back = false;
        for (const auto &m : info.class_desc->methods)
        {
            auto r = std::get_if<CInterop::MethodKinds::Regular>(&m.var);
            if (!r || m.is_static || m.inherited_from)
                continue;
            if (r->name == "size" && m.params.size() == 1) size = true;
            if (r->name == "data" && StripType(m.ret.cpp_type).is_ptr) data = true;
            if (r->name == "push_back" && m.params.size() == 2) push_back = true;
        }
        if (!size || !data || !push_back)
            return false;
        std::string self_spelling = TypeidSpelling(info.cpp_name);
        for (const auto &td : c_desc.typedefs)
        {
            if (EndsWith(td.full_name, "::value_type") && TypeidSpelling(td.full_name.substr(0, td.full_name.size() - 12)) == self_spelling)
                return true;
        }
        return false;
    }

    void Generator::EmitArrayMembers(TypeInfo &info)
    {
        // The exposed arrays have the `elems` field, the others are accessed with `at()`.
        const CInterop::ClassField *elems = nullptr;
        for (const auto &f : info.class_desc->fields)
            if (f.name == "elems")
                elems = &f;
        const CInterop::ClassMethod *at_mut = FindMethod(info, "_at_mut");
        std::string elem;
        std::size_t n = 0;
        if (elems)
        {
            std::size_t br = elems->type.rfind('[');
            elem = Trim(elems->type.substr(0, br));
            n = std::stoul(elems->type.substr(br + 1));
        }
        else if (at_mut && at_mut->params.size() == 2 && at_mut->params[0].c_params.size() == 1 && StripType(at_mut->ret.cpp_type).is_ref)
        {
            elem = StripType(at_mut->ret.cpp_type).base;
            std::size_t comma = info.cpp_name.rfind(',');
            n = std::stoul(info.cpp_name.substr(comma + 1));
        }
        else
        {
            return;
        }
        const TypeInfo *eti = FindType(StripType(elem).base);
        std::string elem_c = eti && (eti->IsClass() || eti->IsEnum()) ? eti->c_name : StripType(elem).base;
        std::string s = info.c_name;
        std::string self = "    void *self_ = nullptr;\n    if (!rt::ArgObject(a[0], " + info.var + ", false, self_)) return nullptr;\n";
        std::string index = "    size_t i_ = 0;\n    if (!rt::ArgInt(a[1], true, i_) || i_ >= " + std::to_string(n) + ") {PyErr_SetNone(PyExc_IndexError); return nullptr;}\n";
        std::string at = elems ? "&((" + s + " *)self_)->elems[i_]" : "(" + elem_c + " *)" + at_mut->c_name + "((" + at_mut->params[0].c_params[0].c_type + ")self_, i_)";
        auto get = CToPy(elem + " &", elem_c + " *", "e_", "a[0]", "r_");
        auto set = AssignFromPy(elem, "e_", "a[2]");
        if (!get || !set)
        {
            skipped_funcs.push_back(info.cpp_name + ": unsupported element type for the array API");
            return;
        }
        out_init += "    {\n        PyObject *prims_ = PyDict_New();\n";
        auto Add = [&](const char *name, const std::string &body, std::size_t np)
        {
            out_init += "        if (!rt::AddPrim(prims_, " + CppStringLiteral(name) + ", &" + CustomPrim(body, np) + ", module_name)) return nullptr;\n";
        };
        std::string make_default = "new " + s + "{}", make_copy = "new " + s + "(*(" + s + " *)o_)";
        if (!elems)
        {
            const CInterop::ClassMethod *def = FindMethod(info, "_DefaultConstruct");
            const CInterop::ClassMethod *copy = FindMethod(info, "_ConstructFromAnother");
            if (!def || !copy || copy->params.size() != 2)
                return;
            make_default = def->c_name + "()";
            const auto &cp = copy->params[1].c_params;
            make_copy = copy->c_name + "(" + (cp.size() == 2 ? cp[0].c_type + "_Copy, (" + s + " *)o_" : "(" + cp[0].c_type + ")o_") + ")";
        }
        Add("init", "    return rt::InitInstance(a[0], " + info.var + ", " + make_default + ");\n", 1);
        Add("copy", "    void *o_ = nullptr;\n    if (!rt::ArgObject(a[1], " + info.var + ", false, o_)) {PyErr_SetString(PyExc_TypeError, \"Expected an array.\"); return nullptr;}\n    return rt::InitInstance(a[0], " + info.var + ", " + make_copy + ");\n", 2);
        Add("get", self + index + "    " + elem_c + " *e_ = " + at + ";\n" + *get + "    return r_;\n", 2);
        Add("set", self + index + "    " + elem_c + " *e_ = " + at + ";\n" + *set + "    Py_RETURN_NONE;\n", 3);
        if (auto pr = PrintElem(elem, "e_"))
        {
            std::string body = self + "    std::ostringstream ss_;\n    ss_ << " + CppStringLiteral(info.py_name + "[") + ";\n";
            body += "    for (size_t i_ = 0; i_ < " + std::to_string(n) + "; i_++)\n    {\n        if (i_) ss_ << \", \";\n        " + elem_c + " *e_ = " + at + ";\n    " + *pr + "    }\n";
            body += "    ss_ << ']';\n    std::string s_ = std::move(ss_).str();\n    return rt::RetString(s_.data(), s_.data() + s_.size());\n";
            Add("repr", body, 1);
        }
        out_init += "        if (!rt::CallRt(\"add_array_api\", Py_BuildValue(\"(OsssnN)\", " + info.var + ".type, " + CppStringLiteral(module_qualname + "." + info.py_qualname) + ", " + CppStringLiteral(info.py_name) + ", " + CppStringLiteral(DocTypeName(elem, true)) + ", (Py_ssize_t)" + std::to_string(n) + ", prims_))) return nullptr;\n    }\n";
    }

    void Generator::EmitMapMembers(TypeInfo &info)
    {
        const CInterop::ClassMethod *init = FindMethod(info, "_DefaultConstruct");
        const CInterop::ClassMethod *copy = FindMethod(info, "_ConstructFromAnother");
        const CInterop::ClassMethod *size = FindMethod(info, "_size");
        const CInterop::ClassMethod *contains = FindMethod(info, "_contains");
        const CInterop::ClassMethod *ref = FindMethod(info, "_find_or_construct_elem");
        const CInterop::ClassMethod *assign = FindMethod(info, "_AssignFromAnother");
        // The mutable iterators, or the const ones with `--minimal-containers` (the values are still mutable through the map).
        const CInterop::ClassMethod *begin = FindMethod(info, "_begin_mut");
        const CInterop::ClassMethod *end = FindMethod(info, "_end_mut");
        if (!begin || !end)
        {
            begin = FindMethod(info, "_begin");
            end = FindMethod(info, "_end");
        }
        if (!init || !size || !contains || !ref || !begin || !end || ref->params.size() != 2)
        {
            skipped_funcs.push_back(info.cpp_name + ": not enough C functions for the map API");
            return;
        }
        std::string key = StripType(ref->params[1].cpp_type).base;
        std::string value = StripType(ref->ret.cpp_type).base;
        std::string it = StripType(begin->ret.c_type).base;
        const TypeInfo *key_ti = FindType(key), *value_ti = FindType(value);
        std::string key_c = key_ti && (key_ti->IsClass() || key_ti->IsEnum()) ? key_ti->c_name : key;
        std::string value_c = value_ti && (value_ti->IsClass() || value_ti->IsEnum()) ? value_ti->c_name : value;
        std::string m = info.c_name;
        std::string self = "    void *self_ = nullptr;\n    if (!rt::ArgObject(a[0], " + info.var + ", false, self_)) return nullptr;\n";

        out_init += "    {\n        PyObject *prims_ = PyDict_New();\n";
        auto Prim = [&](const char *name, const CInterop::ClassMethod &method, int self_kind)
        {
            auto ov = PrepareOverload(method, &info, self_kind);
            if (!ov)
                return false;
            std::string def = EmitGroup({name, {*ov}}, &info, false, false);
            out_init += "        if (!rt::AddPrim(prims_, " + CppStringLiteral(name) + ", &" + def + ", module_name)) return nullptr;\n";
            return true;
        };
        auto Add = [&](const char *name, const std::string &body, std::size_t np)
        {
            out_init += "        if (!rt::AddPrim(prims_, " + CppStringLiteral(name) + ", &" + CustomPrim(body, np) + ", module_name)) return nullptr;\n";
        };
        bool ok = Prim("init", *init, 2) && Prim("size", *size, 1) && Prim("contains", *contains, 1) && Prim("ref", *ref, 1);
        if (copy)
            (void)Prim("copy", *copy, 2);
        if (assign)
            (void)Prim("assign", *assign, 1);
        // `__setitem__`.
        auto key_arg = ArgToPtr(key, "a[1]", "k_");
        auto set = AssignFromPy(value, "dst_", "a[2]");
        if (key_arg && set)
            Add("set", self + *key_arg + "    auto dst_ = " + ref->c_name + "((" + m + " *)self_, k_);\n" + *set + "    Py_RETURN_NONE;\n", 3);
        // Iteration.
        auto key_conv = CToPy("const " + key + " &", "const " + key_c + " *", "k_", "nullptr", "kp_");
        auto value_conv = CToPy(value + " &", value_c + " *", "v_", "a[0]", "vp_");
        if (key_conv && value_conv)
        {
            auto Loop = [&](const std::string &item)
            {
                std::string body = self + "    PyObject *list_ = PyList_New(0);\n";
                body += "    " + it + " *i_ = " + begin->c_name + "((" + m + " *)self_);\n    " + it + " *e0_ = " + end->c_name + "((" + m + " *)self_);\n";
                body += "    while (!" + c_desc.helpers_prefix + "equal_" + it + "(i_, e0_))\n    {\n";
                body += "        const " + key_c + " *k_ = " + it + "_deref_key(i_);\n        " + value_c + " *v_ = (" + value_c + " *)" + it + "_deref_value(i_);\n";
                body += item;
                body += "        " + it + "_incr(i_);\n    }\n    " + it + "_Destroy(i_);\n    " + it + "_Destroy(e0_);\n    return list_;\n";
                return body;
            };
            auto Indent = [](const std::string &code)
            {
                std::string r;
                std::size_t pos = 0;
                while (pos < code.size())
                {
                    std::size_t e = code.find('\n', pos);
                    r += "    " + code.substr(pos, e - pos + 1);
                    pos = e + 1;
                }
                return r;
            };
            Add("keys", Loop(Indent(*key_conv) + "        PyList_Append(list_, kp_);\n        Py_XDECREF(kp_);\n"), 1);
            Add("values", Loop(Indent(*value_conv) + "        PyList_Append(list_, vp_);\n        Py_XDECREF(vp_);\n"), 1);
            Add("items", Loop(Indent(*key_conv) + Indent(*value_conv) + "        PyObject *t_ = PyTuple_Pack(2, kp_, vp_);\n        Py_XDECREF(kp_);\n        Py_XDECREF(vp_);\n        PyList_Append(list_, t_);\n        Py_XDECREF(t_);\n"), 1);
            auto pk = PrintElem(key, "k_");
            auto pv = PrintElem(value, "v_");
            if (pk && pv)
            {
                std::string item = "        if (!first_) ss_ << \", \";\n        first_ = false;\n" + Indent(*pk) + "        ss_ << \": \";\n" + Indent(*pv);
                std::string body = Loop(item);
                body.replace(body.find("    PyObject *list_ = PyList_New(0);\n"), std::string_view("    PyObject *list_ = PyList_New(0);\n").size(),"    std::ostringstream ss_;\n    ss_ << " + CppStringLiteral(info.py_name + "{") + ";\n    bool first_ = true;\n");
                body.replace(body.find("    return list_;\n"), 18, "    ss_ << '}';\n    std::string s_ = std::move(ss_).str();\n    return rt::RetString(s_.data(), s_.data() + s_.size());\n");
                Add("repr", body, 1);
            }
        }
        else
        {
            ok = false;
        }
        if (!ok)
        {
            skipped_funcs.push_back(info.cpp_name + ": unsupported key or value type for the map API");
            out_init += "        Py_DECREF(prims_);\n    }\n";
            return;
        }
        if (!views_created)
        {
            views_created = true;
            out_init += "        {\n            PyObject *f_ = PyDict_GetItemString(PyModule_GetDict(rt::rt), \"make_views\");\n            PyObject *v_ = f_ ? PyObject_CallFunction(f_, \"sO\", " + CppStringLiteral(module_qualname) + ", rt::object_type) : nullptr;\n            if (!v_) return nullptr;\n";
            out_init += "            const char *names_[] = {\"KeysView\", \"ValuesView\", \"ItemsView\"};\n            for (int j_ = 0; j_ < 3; j_++)\n            {\n                PyObject *c_ = PyTuple_GetItem(v_, j_);\n                Py_INCREF(c_);\n                if (PyModule_AddObject(module, names_[j_], c_) < 0) return nullptr;\n            }\n            Py_DECREF(v_);\n        }\n";
        }
        out_init += "        if (!rt::CallRt(\"add_map_api\", Py_BuildValue(\"(OssssN)\", " + info.var + ".type, " + CppStringLiteral(module_qualname + "." + info.py_qualname) + ", " + CppStringLiteral(info.py_name) + ", " + CppStringLiteral(DocTypeName(key, false)) + ", " + CppStringLiteral(DocTypeName(value, true)) + ", prims_))) return nullptr;\n    }\n";
    }

    void Generator::EmitStdFunctionMembers(TypeInfo &info)
    {
        std::string cls_obj = info.var + ".type";
        const CInterop::ClassMethod *init = FindMethod(info, "_DefaultConstruct");
        const CInterop::ClassMethod *copy = FindMethod(info, "_ConstructFromAnother");
        const CInterop::ClassMethod *call = FindMethod(info, "_call");
        const CInterop::ClassMethod *has_value = FindMethod(info, "_has_value");
        if (!init || !copy || !call)
            return;

        out_init += "    {\n        PyObject *prims_ = PyDict_New();\n";
        auto Prim = [&](const char *name, const CInterop::ClassMethod &m, int self_kind)
        {
            auto ov = PrepareOverload(m, &info, self_kind);
            if (!ov)
                return;
            std::string def = EmitGroup({name, {*ov}}, &info, false, false);
            out_init += "        if (!rt::AddPrim(prims_, " + CppStringLiteral(name) + ", &" + def + ", module_name)) return nullptr;\n";
        };
        Prim("init", *init, 2);
        Prim("copy", *copy, 2);
        if (!info.callable_unsupported)
        {
            // From a Python callable. The callable is also stored as the owner, for `holds_cpp_function()`.
            PreparedOverload ov;
            ov.impl = NewId("impl_");
            out_impls += "static PyObject *" + ov.impl + "(PyObject *const *a, bool, bool &matched)\n{\n    if (!PyCallable_Check(a[1])) return nullptr;\n    matched = true;\n";
            out_impls += "    Py_INCREF(a[1]);\n    PyObject *r_ = rt::InitInstance(a[0], " + info.var + ", " + info.c_name + "_ConstructEx(tramp_" + info.var + ", a[1], rt::CallbackPostcall, rt::CallableUserdataCallback));\n    rt::SetOwner(a[0], a[1]);\n    return r_;\n}\n\n";
            ov.params = {{"", "object", ""}, {"", "object", ""}};
            ov.ret_type = "None";
            ov.num_required = 2;
            std::string def = EmitGroup({"callable", {ov}}, &info, false, false);
            out_init += "        if (!rt::AddPrim(prims_, \"callable\", &" + def + ", module_name)) return nullptr;\n";
        }
        std::string callable_doc = "Callable[[";
        bool first = true;
        for (const auto &p : call->params)
        {
            if (p.is_this_param)
                continue;
            if (!first)
                callable_doc += ", ";
            first = false;
            callable_doc += DocTypeName(p.cpp_type, false);
        }
        callable_doc += "], " + DocTypeName(call->ret.cpp_type, true) + "]";
        out_init += "        if (!rt::CallRt(\"add_function_api\", Py_BuildValue(\"(OssN)\", " + cls_obj + ", " + CppStringLiteral(module_qualname + "." + info.py_qualname) + ", " + CppStringLiteral(callable_doc) + ", prims_))) return nullptr;\n";
        out_init += "    }\n";

        if (has_value)
        {
            if (auto ov = PrepareOverload(*has_value, &info, 1))
            {
                ov->comment.clear();
                out_init += "    if (!rt::AddMethod(" + cls_obj + ", &" + EmitGroup({"__bool__", {*ov}}, &info, true, false) + ")) return nullptr;\n";
            }
        }
        if (auto ov = PrepareOverload(*call, &info, 1))
        {
            ov->comment.clear();
            for (std::size_t i = 1; i < ov->params.size(); i++)
                ov->params[i].name = "arg" + std::to_string(i - 1);
            out_init += "    if (!rt::AddMethod(" + cls_obj + ", &" + EmitGroup({"__call__", {*ov}}, &info, true, false) + ")) return nullptr;\n";
        }
    }

    void Generator::EmitFreeFunctions()
    {
        // By scope variable, then by name.
        std::map<std::string, std::vector<GroupEntry>> scopes;
        std::vector<std::string> scope_order;
        for (const auto &f : c_desc.functions)
        {
            auto reg = std::get_if<CInterop::FuncKinds::Regular>(&f.var);
            if (!reg)
                continue; // Operators are injected into the classes.
            if (IsIgnoredForPython(reg->name + "(" + (f.params.empty() ? std::string() : f.params[0].cpp_type) + ")"))
                continue;
            std::vector<std::string> parts = SplitQualified(reg->name);
            std::vector<std::string> ns(parts.begin(), parts.end() - 1);
            Scope &scope = GetNamespaceScope(ns);
            auto ov = PrepareOverload(f, nullptr, 0);
            if (!ov)
                continue;
            auto &list = scopes[scope.var];
            if (list.empty())
                scope_order.push_back(scope.var);
            std::string name = AdjustPythonKeywords(parts.back());
            ov->template_py_name = TemplatePyName(reg->full_name);
            bool added = false;
            for (auto &g : list)
            {
                if (g.py_name == name)
                {
                    g.overloads.push_back(std::move(*ov));
                    added = true;
                    break;
                }
            }
            if (!added)
                list.push_back({name, {std::move(*ov)}});
        }
        for (auto &[var, list] : scopes)
            DisambiguateTemplates(list);
        for (const auto &var : scope_order)
        {
            for (const auto &g : scopes[var])
            {
                std::string def = EmitGroup(g, nullptr, false, false);
                if (var == "module")
                    out_init += "    if (!rt::AddModuleFunction(module, &" + def + ", module_name)) return nullptr;\n";
                else
                    out_init += "    if (!rt::AddFunction(" + var + ", &" + def + ", module_name)) return nullptr;\n";
            }
        }
    }

    void Generator::Generate()
    {
        if (module_qualname.empty())
            module_qualname = module_name;

        CollectTypes();

        // The headers.
        for (const auto &[cpp_name, info] : types)
        {
            if (info.class_desc)
                c_includes.insert(info.class_desc->output_file.relative_name);
            if (info.enum_desc)
                c_includes.insert(info.enum_desc->output_file.relative_name);
        }
        for (const auto &f : c_desc.functions)
            c_includes.insert(f.output_file.relative_name);

        CollectAliases();
        CollectConversionCtors();

        // Type records.
        for (TypeInfo *info : class_order)
        {
            if (info->IsClass())
            {
                bool destructible = info->traits && info->traits->destructible != CInterop::SpecialMemberKind::disabled;
                std::string destroy = info->IsExposedStruct() ? "[](void *p) {delete (" + info->c_name + " *)p;}" : destructible ? "[](void *p) {" + info->c_name + "_Destroy((" + info->c_name + " *)p);}" : std::string("nullptr");
                out_decls += "static rt::TypeRecord " + info->var + "{" + CppStringLiteral(info->py_qualname) + ", " + destroy + ", {}};\n";
            }
            else
            {
                out_decls += "static PyObject *" + info->var + " = nullptr; // " + info->cpp_name + "\n";
            }
        }
        out_decls += "\n";

        // Namespace scopes and classes.
        for (const auto &key : namespace_order)
        {
            const Scope &s = namespaces.at(key);
            if (s.var == "module")
                continue;
            if (key.empty())
                continue;
            std::vector<std::string> parent_parts(s.ns_parts.begin(), s.ns_parts.end() - 1);
            const Scope &parent = namespaces.at(Join(parent_parts, "::"));
            if (parent.var == s.var)
                continue;
            std::string name = s.qualname.substr(s.qualname.rfind('.') == std::string::npos ? 0 : s.qualname.rfind('.') + 1);
            out_decls += "static PyObject *" + s.var + " = nullptr; // namespace " + key + "\n";
            out_init_classes += "    " + s.var + " = rt::MakeClass(" + CppStringLiteral(module_qualname) + ", " + CppStringLiteral(s.qualname) + ", " + CppStringLiteral(name) + ", bases_default, \"This is a namespace.\");\n";
            out_init_classes += "    if (!" + s.var + ") return nullptr;\n";
            out_init_classes += "    {PyObject *init_ = PyObject_GetAttrString((PyObject *)&PyBaseObject_Type, \"__init__\"); rt::TypeSetAttr(" + s.var + ", \"__init__\", init_); Py_XDECREF(init_);}\n";
            if (parent.var == "module")
                out_init_classes += "    Py_INCREF(" + s.var + "); if (PyModule_AddObject(module, " + CppStringLiteral(name) + ", " + s.var + ") < 0) return nullptr;\n";
            else
                out_init_classes += "    if (!rt::TypeSetAttr(" + parent.var + ", " + CppStringLiteral(name) + ", " + s.var + ")) return nullptr;\n";
        }

        for (TypeInfo *info : class_order)
        {
            if (info->no_class)
                continue;
            std::string scope = info->scope_var;
            std::string value;
            if (info->IsClass())
            {
                bool parsed = !(info->is_std_function || StartsWith(info->cpp_name, "std::") || StartsWith(info->cpp_name, "phmap::") || StartsWith(info->cpp_name, "expected<"));
                std::string doc_cpp_name = info->cpp_name;
                for (const auto &[regex, replacement] : doc_name_adjustments)
                    doc_cpp_name = std::regex_replace(doc_cpp_name, std::regex(regex), replacement);
                std::string doc = parsed ? "Generated from:  " + doc_cpp_name + "\n" : "";
                if (auto al = aliases_by_type.find(info); al != aliases_by_type.end() && !al->second.empty())
                {
                    doc += "Aliases:  ";
                    for (std::size_t i = 0; i < al->second.size(); i++)
                        doc += (i ? ", " : "") + al->second[i].qualname;
                    doc += "\n";
                }
                std::string comment = ProcessComment(info->class_desc->comment.c_style);
                if (!comment.empty())
                    doc += (doc.empty() ? "" : "\n") + comment;
                std::string bases = "bases_default";
                if (!info->bases.empty())
                {
                    bases = "bases_" + info->var;
                    out_init_classes += "    PyObject *" + bases + " = PyTuple_New(" + std::to_string(info->bases.size()) + ");\n";
                    for (std::size_t i = 0; i < info->bases.size(); i++)
                        out_init_classes += "    Py_INCREF(" + info->bases[i]->var + ".type); PyTuple_SetItem(" + bases + ", " + std::to_string(i) + ", " + info->bases[i]->var + ".type);\n";
                    for (const TypeInfo *b : info->bases)
                        out_init_classes += "    " + info->var + ".bases.push_back({&" + b->var + ", [](void *p) -> void * {return (void *)" + info->c_name + "_MutableUpcastTo_" + b->c_name + "((" + info->c_name + " *)p);}});\n";
                }
                out_init_classes += "    " + info->var + ".type = rt::MakeClass(" + CppStringLiteral(module_qualname) + ", " + CppStringLiteral(info->py_qualname) + ", " + CppStringLiteral(info->py_name) + ", " + bases + ", " + (doc.empty() ? "nullptr" : CppStringLiteral(doc)) + ");\n";
                out_init_classes += "    if (!" + info->var + ".type) return nullptr;\n";
                value = info->var + ".type";
            }
            else
            {
                out_init_classes += "    {\n        PyObject *entries_ = PyList_New(0);\n";
                for (const auto &e : info->enum_desc->elems)
                {
                    std::string v = info->is_signed_enum ? std::to_string((long long)e.unsigned_value) : std::to_string(e.unsigned_value);
                    std::string doc = ProcessComment(e.comment.c_style, false);
                    out_init_classes += "        {PyObject *e_ = Py_BuildValue(\"(sNO)\", " + CppStringLiteral(e.name) + ", PyLong_FromString(" + CppStringLiteral(v) + ", nullptr, 10), " + (doc.empty() ? "Py_None" : "PyUnicode_FromString(" + CppStringLiteral(doc) + ")") + "); PyList_Append(entries_, e_); Py_XDECREF(e_);}\n";
                }
                out_init_classes += "        " + info->var + " = rt::MakeEnum(" + CppStringLiteral(module_qualname) + ", " + CppStringLiteral(info->py_qualname) + ", " + CppStringLiteral(info->py_name) + ", entries_, " + (info->is_signed_enum ? "true" : "false") + ");\n";
                out_init_classes += "        Py_DECREF(entries_);\n        if (!" + info->var + ") return nullptr;\n    }\n";
                value = info->var;
            }
            if (scope == "module")
                out_init_classes += "    Py_INCREF(" + value + "); if (PyModule_AddObject(module, " + CppStringLiteral(info->py_name) + ", " + value + ") < 0) return nullptr;\n";
            else
                out_init_classes += "    if (!rt::TypeSetAttr(" + scope + ", " + CppStringLiteral(info->py_name) + ", " + value + ")) return nullptr;\n";
        }

        EmitAliases();
        EmitImplicitConversions();

        if (const TypeInfo *cv = FindType("std::shared_ptr<const void>"))
            out_init_classes += "    rt::holder_destroy = [](void *p) {" + cv->c_name + "_Destroy((" + cv->c_name + " *)p);};\n";
        for (TypeInfo *info : class_order)
        {
            if (info->pointee && !info->pointee_const && !info->pointee->IsExposedStruct() && FindMethod(*info, "_Construct"))
                out_init_classes += "    " + info->pointee->var + ".holder_from_raw = [](void *p) -> void * {" + info->c_name + " *sp_ = " + info->c_name + "_Construct((" + info->pointee->c_name + " *)p); void *h_ = " + HolderFromSharedPtr(*info, "sp_") + "; " + info->c_name + "_Destroy(sp_); return h_;};\n";
            if (info->IsClass() && !info->no_class)
            {
                for (const TypeInfo *b : info->bases)
                {
                    if (b->class_desc->is_polymorphic && !b->no_class)
                        out_init_classes += "    " + b->var + ".derived.push_back({&" + info->var + ", [](void *p) -> void * {return (void *)" + info->c_name + "_MutableDynamicDowncastFrom_" + b->c_name + "((" + b->c_name + " *)p);}});\n";
                }
            }
        }

        for (TypeInfo *info : class_order)
        {
            if (info->IsClass() && info->is_std_function)
                EmitStdFunction(*info);
        }
        for (TypeInfo *info : class_order)
        {
            if (!info->IsClass() || info->no_class)
                continue;
            if (info->is_vector)
                EmitVectorMembers(*info);
            else if (info->is_array)
                EmitArrayMembers(*info);
            else if (!info->optional_value.empty())
                EmitOptionalMembers(*info);
            else if (info->is_map)
                EmitMapMembers(*info);
            else if (info->is_std_function)
                EmitStdFunctionMembers(*info);
            else if (StartsWith(info->cpp_name, "std::variant<"))
                EmitVariantMembers(*info);
            else
                EmitClassMembers(*info);
        }
        EmitFreeFunctions();

        std::string file;
        file += "// Generated by mrbind_gen_python.\n";
        file += "#include \"mrbind_py_runtime.h\"\n\n#include <cstring>\n#include <iomanip>\n#include <ostream>\n#include <sstream>\n\n";
        for (const auto &inc : c_includes)
            file += "#include <" + inc + ".h>\n";
        file += "\nnamespace\n{\nnamespace rt = mrbind_py;\n\n";
        file += out_decls;
        file += "\n";
        file += out_implicit;
        file += out_impls;
        file += "PyModuleDef module_def = {PyModuleDef_HEAD_INIT, " + CppStringLiteral(module_name) + ", nullptr, -1, nullptr, nullptr, nullptr, nullptr, nullptr};\n";
        file += "}\n\n";
        file += "PyMODINIT_FUNC PyInit_" + module_name + "(void)\n{\n";
        file += "    if (!rt::Init()) return nullptr;\n";
        file += "    PyObject *module = PyModule_Create(&module_def);\n    if (!module) return nullptr;\n";
        file += "    PyObject *module_name = PyUnicode_FromString(" + CppStringLiteral(module_qualname) + ");\n";
        file += "    PyObject *bases_default = PyTuple_Pack(1, rt::object_type);\n";
        file += out_init_classes;
        file += out_init;
        for (const auto &[alias, target] : aliases)
            file += "    if (!rt::CallRt(\"add_alias\", Py_BuildValue(\"(Oss)\", module, " + CppStringLiteral(alias) + ", " + CppStringLiteral(target) + "))) PyErr_Clear();\n";
        // The C++ interop API.
        for (TypeInfo *info : class_order)
        {
            if (info->IsClass() && !info->no_class)
                file += "    rt::records_by_cpp_name[" + CppStringLiteral(info->cpp_name) + "] = &" + info->var + ";\n";
        }
        file += "    if (!rt::AddCppApi(module, " + CppStringLiteral(module_qualname + ".__mrbind_cpp_api__") + ")) return nullptr;\n";
        for (const auto &[filename, source] : extra_python)
        {
            // A literal per line, for the length limit of a single literal in MSVC.
            file += "    if (!rt::RunExtraPython(module,\n";
            for (std::string_view rest = source; !rest.empty();)
            {
                std::size_t len = std::min(rest.find('\n'), rest.size() - 1) + 1;
                file += "        " + CppStringLiteral(rest.substr(0, len)) + "\n";
                rest.remove_prefix(len);
            }
            file += "        , " + CppStringLiteral(filename) + ")) { Py_DECREF(module); return nullptr; }\n";
        }
        file += "    return module;\n}\n";

        output_files[module_name + ".cpp"] = std::move(file);
        output_files["mrbind_py_runtime.h"] = std::string(runtime_header);
    }
}
