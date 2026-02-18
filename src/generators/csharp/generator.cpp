#include "generator.h"
#include "common/parse_cpp_comment.h"
#include "common/string_escape.h"

#include <cppdecl/declarations/parse.h>

#include <exception>
#include <numeric>
#include <ostream>

namespace mrbind::CSharp
{
    std::string CppIdentifierToCSharpIdentifier(std::string_view cpp_ident)
    {
        // Assert that `cpp_ident` is a valid identifier, except that we allow `char(1)` too, which is a placeholder used by `CppToCSharpIdentifier()`.
        // We also don't paricularly care if this starts with a digit, I guess.
        assert(std::all_of(cpp_ident.begin(), cpp_ident.end(), [](char ch){return cppdecl::IsIdentifierChar(ch) || ch == char(1);}));

        std::string ret;
        ret.reserve(cpp_ident.size());

        bool uppercase_next = true;
        bool prev_was_digit = false;
        for (char ch : cpp_ident)
        {
            bool is_digit = false;

            // `CppToCSharpIdentifier()` uses `char(1)` as a placeholder which is later replaced with a `_`,
            //   specifically to prevent this function from removing a `_` which we want to keep.
            if (cppdecl::IsAlpha(ch) || (is_digit = cppdecl::IsDigit(ch)) || ch == char(1))
            {
                // Preserve underscores that have digits on both sides.
                if (is_digit && prev_was_digit && uppercase_next)
                    ret += '_';
                prev_was_digit = is_digit;

                if (ch == char(1))
                    ret += '_';
                else if (std::exchange(uppercase_next, false))
                    ret += cppdecl::ToUpper(ch);
                else
                    ret += ch;
                continue;
            }

            // Reject all other characters.
            uppercase_next = true;
        }

        // Trim trailing `_`. Leading ones should be impossible on sane inputs
        while (ret.ends_with('_'))
            ret.pop_back();

        return ret;
    }

    bool AdjustIfMatchesCSharpKeyword(std::string &str)
    {
        static const std::unordered_set<std::string> csharp_keywords = {
            // Those are from here: https://learn.microsoft.com/en-us/dotnet/csharp/language-reference/keywords/
            // For now I copied only non-contextual keywords. I don't know if any of the contextual ones can be problematic.
            "abstract",
            "as",
            "base",
            "bool",
            "break",
            "byte",
            "case",
            "catch",
            "char",
            "checked",
            "class",
            "const",
            "continue",
            "decimal",
            "default",
            "delegate",
            "do",
            "double",
            "else",
            "enum",
            "event",
            "explicit",
            "extern",
            "false",
            "finally",
            "fixed",
            "float",
            "for",
            "foreach",
            "goto",
            "if",
            "implicit",
            "in",
            "int",
            "interface",
            "internal",
            "is",
            "lock",
            "long",
            "namespace",
            "new",
            "null",
            "object",
            "operator",
            "out",
            "override",
            "params",
            "private",
            "protected",
            "public",
            "readonly",
            "ref",
            "return",
            "sbyte",
            "sealed",
            "short",
            "sizeof",
            "stackalloc",
            "static",
            "string",
            "struct",
            "switch",
            "this",
            "throw",
            "true",
            "try",
            "typeof",
            "uint",
            "ulong",
            "unchecked",
            "unsafe",
            "ushort",
            "using",
            "virtual",
            "void",
            "volatile",
            "while",
        };

        if (csharp_keywords.contains(str))
        {
            str += '_';
            return true;
        }

        return false;
    }

    void MakeFirstLetterLowercase(std::string &str)
    {
        const bool all_uppercase = std::all_of(str.begin(), str.end(), [](char ch){return cppdecl::IsAlpha(ch) <=/*implies*/ cppdecl::IsAlphaUppercase(ch);});

        bool modified = false;

        for (char &ch : str)
        {
            if (cppdecl::IsAlpha(ch))
            {
                ch = cppdecl::ToLower(ch);
                modified = true;

                // If the entire input is uppercase, change all of it, not just the first letter.
                if (!all_uppercase)
                    break;
            }
        }

        if (modified)
            AdjustIfMatchesCSharpKeyword(str);
    }

    std::string_view TryStripTemplateArgsSimple(std::string_view str)
    {
        auto pos = str.find('<');
        if (pos == std::string_view::npos || !str.ends_with('>'))
            return str;
        return str.substr(0, pos);
    }

    void OutputFile::DumpToOstream(std::ostream &out) const
    {
        out << contents;
    }

    void OutputFile::WriteString(std::string_view input, int extra_indent_levels)
    {
        bool first = true;
        Strings::Split(input, "\n", [&](std::string_view part)
        {
            if (first)
                first = false;
            else
                contents += '\n';

            // Only indent non-empty strings, and only when starting a new line in the file.
            if (!part.empty() && (contents.empty() || contents.ends_with('\n')))
            {
                for (int i = 0; i < int(current_scope.size()) + extra_indent_levels; i++)
                    contents += "    ";
            }

            contents += part;

            return false;
        });
    }

    // Writes a separating newline, but only if the previous line doesn't end with `{`.
    void OutputFile::WriteSeparatingNewline()
    {
        if (!contents.empty() && !contents.ends_with("{\n"))
            WriteString("\n");
    }

    void OutputFile::PopScope()
    {
        assert(!current_scope.empty());
        WriteString(current_scope.back().close_string, -1);
        current_scope.pop_back();
    }

    void OutputFile::PushScope(cppdecl::UnqualifiedName cpp_name, std::string_view open_scope, std::string close_scope)
    {
        WriteString(open_scope);
        current_scope.push_back(ScopeFrame{std::move(cpp_name), std::move(close_scope)});
    }

    void OutputFile::EnsureNamespace(const Generator &generator, cppdecl::QualifiedName new_namespace)
    {
        new_namespace = generator.AdjustCppNamespaces(std::move(new_namespace));

        bool inserted_new_namespaces = false;

        for (std::size_t i = 0; i < new_namespace.parts.size(); i++)
        {
            if (i < current_scope.size() && current_scope[i].name == new_namespace.parts[i])
                continue; // This namespace is already open, nothing to do.

            inserted_new_namespaces = true;

            // Pop any existing namespaces.
            while (i < current_scope.size())
                PopScope();

            WriteSeparatingNewline();

            // Push new ones, assuming those are plain namespaces.
            // Since C# namespaces can only contain classes, and not e.g. free functions, we instead use partial classes.
            // "Partial" you can reopen them later to add more members.
            PushScope(new_namespace.parts[i], "public static partial class " + CppToCSharpIdentifier(new_namespace.parts[i]) + "\n{\n", "}\n");
        }

        // If the new namespace is a prefix of the old one, we need this special-casing.
        if (!inserted_new_namespaces)
        {
            while (current_scope.size() > new_namespace.parts.size())
                PopScope();
        }
    }

    void OutputFile::ExitAllScopes()
    {
        while (!current_scope.empty())
            PopScope();
    }

    OutputFile &Generator::GetOutputFile(const CInterop::OutputFile &interop_file)
    {
        // Nothing fancy for now.
        return output_files.try_emplace(interop_file.relative_name).first->second;
    }

    void Generator::WriteComment(OutputFile &file, std::string comment, int extra_indent_levels)
    {
        if (comment.empty())
            return;
        assert(comment.ends_with('\n'));

        // If we don't need to process the comment, just write it as is.
        // Our parsing can eat some whitespace and possibly mess up the comment in other ways too, so don't do it if we can avoid it.
        if (!wrap_doc_comments_in_summary_tag)
        {
            file.WriteString(comment);
            return;
        }

        // Here we split the individual pieces of the comment into two separate part, first the non-documentation part, and then the documentation part.
        // We deinterleave them into this order.

        std::string non_doc;
        std::string doc;

        bool first = true;
        ParseCppComment(comment, [&](bool is_doc, std::string_view part)
        {
            if (!is_doc)
            {
                non_doc += "// ";
                non_doc += part;
                non_doc += '\n';
                return false;
            }

            if (std::exchange(first, false))
                doc += "/// <summary>\n";

            doc += "/// ";
            doc += part;
            doc += '\n';

            return false;
        });

        if (!first)
            doc += "/// </summary>\n";

        file.WriteString(non_doc, extra_indent_levels);
        file.WriteString(doc, extra_indent_levels);
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
        auto &ret_type = std::get<cppdecl::Type>(ret);
        iter->second = std::move(ret_type);
        return iter->second;
    }

    const cppdecl::QualifiedName &Generator::ParseNameOrThrow(const std::string &str)
    {
        auto [iter, is_new] = cached_parsed_names.try_emplace(str);
        if (!is_new)
            return iter->second;

        std::string_view view = str;
        auto ret = cppdecl::ParseQualifiedName(view);
        if (auto error = std::get_if<cppdecl::ParseError>(&ret))
            throw std::runtime_error("Unable to parse qualified name `" + str + "`, error at offset " + std::to_string(view.data() - str.data()) + ": " + error->message);
        if (!view.empty())
            throw std::runtime_error("Unable to parse qualified name `" + str + "`, junk starting at offset " + std::to_string(view.data() - str.data()) + ".");
        auto &ret_type = std::get<cppdecl::QualifiedName>(ret);
        iter->second = std::move(ret_type);
        return iter->second;
    }

    std::string Generator::AdjustCalledFuncName(std::string str)
    {
        str = CppIdentifierToCSharpIdentifier(str);
        if (begin_func_names_with_lowercase)
            MakeFirstLetterLowercase(str);
        return str;
    }

    std::optional<std::string_view> Generator::CToCSharpPrimitiveTypeOpt(std::string_view c_type, bool is_indirect, std::size_t *out_sizeof)
    {
        if (out_sizeof)
            *out_sizeof = 0; // Zero just in case.

        if (c_type == "void")
        {
            // The size can stay zero, I guess.
            return "void";
        }

        if (auto opt = c_desc.platform_info.FindPrimitiveType(c_type))
        {
            if (out_sizeof)
                *out_sizeof = opt->type_size;

            switch (opt->kind)
            {
              case PrimitiveTypeInfo::Kind::boolean:
                if (out_sizeof && !is_indirect)
                    *out_sizeof = 4; // The size of an int. I'm not sure if we ever need this value, but it saner to report it like this.
                return is_indirect ? "bool" : "byte"; // When passing `bool` by value, they get passed as an `int32_t`, so we must use a `byte` instead.
              case PrimitiveTypeInfo::Kind::floating_point:
                if (opt->type_size == 4) return "float";
                if (opt->type_size == 8) return "double";
                break;
              case PrimitiveTypeInfo::Kind::signed_integral:
                if (opt->type_size == 1) return "sbyte";
                if (opt->type_size == 2) return "short";
                if (opt->type_size == 4) return "int";
                if (opt->type_size == 8) return "long"; // `long` is always 8 bytes in C#.
                break;
              case PrimitiveTypeInfo::Kind::unsigned_integral:
                if (opt->type_size == 1) return "byte";
                if (opt->type_size == 2) return "ushort";
                if (opt->type_size == 4) return "uint";
                if (opt->type_size == 8) return "ulong"; // `ulong` is always 8 bytes in C#.
                break;
            }
        }

        return {};
    }

    cppdecl::QualifiedName Generator::CppToCSharpArrayHelperName(const cppdecl::Type &cpp_array_type)
    {
        // Make sure all modifiers are arrays, with a size we can parse, or of unknown bound.
        if (!std::all_of(cpp_array_type.modifiers.begin(), cpp_array_type.modifiers.end(), [](const cppdecl::TypeModifier &mod)
        {
            return mod.Is<cppdecl::Array>() && (mod.As<cppdecl::Array>()->IsUnbounded() || mod.As<cppdecl::Array>()->GetSize());
        }))
        {
            throw std::logic_error("Internal error: `CppToCSharpArrayHelperName()` called either on a non-array type or on an array type with a bad size: `" + CppdeclToCode(cpp_array_type) + "`.");
        }

        // Add as many parts as we can without entering classes, since I really don't want to bother with reentering class scopes.
        // Also we never copy the last part.
        cppdecl::QualifiedName ret;
        for (const cppdecl::UnqualifiedName &part : cpp_array_type.simple_type.name.parts)
        {
            // Refuse to copy the last part.
            if (&part == &cpp_array_type.simple_type.name.parts.back())
                break;

            ret.parts.push_back(part);
            if (c_desc.FindTypeOpt(CppdeclToCode(ret)))
            {
                // Back out from the last part.
                ret.parts.pop_back();
                break;
            }
        }

        // Now copy the remaining unqualified parts from the input name.
        cppdecl::QualifiedName remaining_parts;
        remaining_parts.parts.assign(cpp_array_type.simple_type.name.parts.begin() + std::ptrdiff_t(ret.parts.size()), cpp_array_type.simple_type.name.parts.end());

        // Don't forget the signed-ness.
        if (bool(cpp_array_type.simple_type.flags & cppdecl::SimpleTypeFlags::unsigned_))
            remaining_parts.parts.back().var = "unsigned " + std::get<std::string>(remaining_parts.parts.back().var);
        else if (cpp_array_type.simple_type.IsNonRedundantlySigned())
            remaining_parts.parts.back().var = "signed " + std::get<std::string>(remaining_parts.parts.back().var);

        std::string csharp_array_name;
        if (cpp_array_type.IsEffectivelyConst())
            csharp_array_name += "Const_";

        csharp_array_name += (cpp_array_type.As<cppdecl::Array>()->IsUnbounded() ? "Ptr_" : "Array_");
        csharp_array_name += CppToCSharpIdentifier(remaining_parts);
        for (const auto &extent : cpp_array_type.modifiers)
        {
            if (extent.As<cppdecl::Array>()->IsUnbounded())
                continue;
            csharp_array_name += '_';
            csharp_array_name += std::to_string(extent.As<cppdecl::Array>()->GetSize().value());
        }

        // Insert the final name part.
        ret.parts.push_back(cppdecl::UnqualifiedName{.var = std::move(csharp_array_name), .template_args = {}});
        return ret;
    }

    std::optional<std::string> Generator::CppToCSharpKnownSizeType(const cppdecl::Type &cpp_type, std::size_t *out_sizeof)
    {
        if (out_sizeof)
            *out_sizeof = 0; // Zero initially, just in case.

        // Custom behavior for pointers.
        if (cpp_type.Is<cppdecl::Pointer>())
        {
            if (out_sizeof)
                *out_sizeof = c_desc.platform_info.pointer_size;

            cppdecl::Type pointee_type = cpp_type;
            pointee_type.RemoveModifier();

            auto opt = CppToCSharpKnownSizeType(pointee_type); // Don't care what `sizeof` this reports, so not passing the second argument.
            if (opt)
            {
                if (!opt->ends_with('*'))
                    *opt += ' ';
                *opt += '*';
                return *opt;
            }
            else
            {
                return "void *";
            }
        }

        // Make sure all modifiers are arrays, and have known bounds.
        if (!std::all_of(cpp_type.modifiers.begin(), cpp_type.modifiers.end(), [](const cppdecl::TypeModifier &mod)
        {
            return mod.Is<cppdecl::Array>() && mod.As<cppdecl::Array>()->GetSize();
        }))
        {
            return {};
        }

        const CInterop::TypeDesc *type_desc = c_desc.FindTypeOpt(CppdeclToCode(cpp_type.simple_type.name));
        const CInterop::TypeKinds::Class *class_desc = std::get_if<CInterop::TypeKinds::Class>(type_desc ? &type_desc->var : nullptr);
        const CInterop::TypeKinds::Enum *enum_desc = std::get_if<CInterop::TypeKinds::Enum>(type_desc ? &type_desc->var : nullptr);

        if (cpp_type.modifiers.empty())
        {
            // Not an array at all.

            // Is this an exposed struct?
            if (class_desc && class_desc->kind == CInterop::ClassKind::exposed_struct)
            {
                if (out_sizeof)
                    *out_sizeof = class_desc->size_and_alignment.value().size;

                return CppToCSharpExposedStructName(cpp_type.simple_type.name);
            }

            // A enum?
            if (enum_desc)
            {
                if (out_sizeof)
                    *out_sizeof = c_desc.platform_info.FindPrimitiveType(enum_desc->underlying_type)->type_size;

                return CppToCSharpEnumName(cpp_type.simple_type.name);
            }

            // Is this a scalar?
            cppdecl::Type cpp_type_without_const = cpp_type;
            cpp_type_without_const.RemoveQualifiers(cppdecl::CvQualifiers::const_);
            auto ret = CToCSharpPrimitiveTypeOpt(CppdeclToCode(cpp_type_without_const), false, out_sizeof);
            return ret ? std::optional(std::string(*ret)) : std::nullopt;
        }

        cppdecl::Type cpp_type_copy = cpp_type;
        // No need to strip constness here, since `CppToCSharpKnownSizeType()` that we recurse into already ignores it.
        cpp_type_copy.RemoveModifier();

        std::size_t elem_size = 0;
        auto elem = CppToCSharpKnownSizeType(cpp_type_copy, out_sizeof ? &elem_size : nullptr);
        if (!elem)
            return {};

        // Compute the total array size.
        const std::size_t array_size = cpp_type.As<cppdecl::Array>()->GetSize().value();
        if (out_sizeof)
            *out_sizeof = elem_size * array_size;

        cppdecl::QualifiedName qual_array_name = CppToCSharpArrayHelperName(cpp_type);
        std::string csharp_array_name = CppToCSharpHelperName(qual_array_name);

        auto [iter, is_new] = requested_plain_arrays.try_emplace(csharp_array_name);
        if (is_new)
        {
            iter->second.qual_array_name = qual_array_name;
            iter->second.csharp_elem_type = *elem;
            iter->second.num_elems = array_size;
        }

        return csharp_array_name;
    }

    Generator::ArrayStrings Generator::RequestCSharpArrayType(const cppdecl::Type &cpp_array_type, const RequestedMaybeOpaqueArray **desc)
    {
        if (desc)
            *desc = nullptr;

        if (!cpp_array_type.Is<cppdecl::Array>())
            throw std::logic_error("Internal error: `RequestCSharpArrayType()` expects an array type, but got `" + CppdeclToCode(cpp_array_type) + "`.");

        cppdecl::QualifiedName qual_array_name = CppToCSharpArrayHelperName(cpp_array_type);
        std::string csharp_array_name = CppToCSharpHelperName(qual_array_name);

        // Not inserting yet, in case this function fails.
        // And also because arrays of simple enough types are not inserted into this map at all,
        //   and are instead handled through `CppToCSharpKnownSizeType()`, see below.
        auto iter = requested_maybe_opaque_arrays.find(csharp_array_name);

        if (iter == requested_maybe_opaque_arrays.end())
        {
            const bool is_const = cpp_array_type.IsEffectivelyConst();

            // Simple enough type.
            if (auto opt = CppToCSharpKnownSizeType(cpp_array_type))
            {
                // Here we don't write to `requested_maybe_opaque_arrays`, and just reuse a simple array.

                ArrayStrings ret;

                ret.csharp_type = std::string(is_const ? "ref readonly " : "ref ") + *opt;
                ret.csharp_underlying_ptr_target_type = *opt;
                ret.construct = [](const std::string &expr){return "ref *(" + expr + ")";};

                return ret;
            }

            RequestedMaybeOpaqueArray ret;

            auto Return = [&]() -> ArrayStrings
            {
                auto result = requested_maybe_opaque_arrays.try_emplace(std::move(csharp_array_name), std::move(ret));
                if (desc)
                    *desc = &result.first->second;
                return result.first->second.strings;
            };

            if (!cpp_array_type.As<cppdecl::Array>()->IsUnbounded())
                ret.num_elems = cpp_array_type.As<cppdecl::Array>()->GetSize().value();
            ret.strings.csharp_type = csharp_array_name;
            ret.qual_array_name = qual_array_name;

            cppdecl::Type cpp_elem_type = cpp_array_type;
            cpp_elem_type.RemoveModifier();

            cpp_elem_type.RemoveQualifiers(cppdecl::CvQualifiers::const_);

            // Fixed-size type. This should only happen for unbounded arrays, since bounded ones are handled above.
            if (std::size_t elem_byte_size = 0; auto csharp_elem_type = CppToCSharpKnownSizeType(cpp_elem_type, &elem_byte_size))
            {
                assert(cpp_array_type.As<cppdecl::Array>()->IsUnbounded());

                ret.csharp_elem_type = (is_const ? "ref readonly " : "ref ") + *csharp_elem_type;
                ret.kind = RequestedMaybeOpaqueArray::ElemKind::ref;

                ret.size_for_ptr_offsets = elem_byte_size;

                ret.strings.csharp_underlying_ptr_target_type = *csharp_elem_type;
                ret.strings.construct = [](const std::string &expr){return "new(" + expr + ")";};

                return Return();
            }

            // Opaque class.
            if (auto opt = c_desc.FindTypeOpt(CppdeclToCode(cpp_elem_type)))
            {
                if (auto *class_desc = std::get_if<CInterop::TypeKinds::Class>(&opt->var))
                {
                    // Make sure this isn't an exposed struct. Those should've been handled by the previous branch.
                    if (class_desc->kind == CInterop::ClassKind::exposed_struct)
                        throw std::logic_error("Internal error: In `RequestCSharpArrayType`: An exposed struct `" + CppdeclToCode(cpp_array_type) + "` should've been handled earlier.");

                    ret.csharp_elem_type = CppToCSharpClassName(cpp_array_type.simple_type.name, is_const);
                    ret.kind = RequestedMaybeOpaqueArray::ElemKind::ptr_maybeowning;
                    ret.ptr_offset_func = class_desc->c_name + "_OffsetPtr";

                    ret.strings.csharp_underlying_ptr_target_type = ret.csharp_elem_type + "._Underlying";
                    ret.strings.construct = [](const std::string &expr){return "new(" + expr + ")";};

                    return Return();
                }
            }

            // Another array of opaque classes.
            if (cpp_elem_type.Is<cppdecl::Array>())
            {
                const RequestedMaybeOpaqueArray *desc = nullptr;
                ArrayStrings strings = RequestCSharpArrayType(cpp_elem_type, &desc);

                // Those cases should be already handled as "simple arrays" above.
                assert(desc->kind != RequestedMaybeOpaqueArray::ElemKind::ref && !strings.csharp_type.starts_with("ref "));

                // Multiply remaining extents.

                ret.csharp_elem_type = strings.csharp_type;
                ret.kind = RequestedMaybeOpaqueArray::ElemKind::ptr;
                ret.ptr_offset_func = desc->ptr_offset_func;

                assert(bool(desc->num_elems)); // How did we get an array of unknown bound as the element type of another array? This shouldn't compile.
                ret.size_for_ptr_offsets = desc->size_for_ptr_offsets * desc->num_elems.value();

                ret.strings.csharp_underlying_ptr_target_type = desc->strings.csharp_underlying_ptr_target_type;
                ret.strings.construct = [](const std::string &expr){return "new(" + expr + ")";};

                return Return();
            }

            throw std::runtime_error("Don't know how to handle the element type of array: `" + CppdeclToCode(cpp_array_type) + "`. This normally shouldn't happen, probably a bug.");
        }

        if (desc)
            *desc = &iter->second;
        return iter->second.strings;
    }

    std::string Generator::RequestCSharpEmptyTagType(const cppdecl::QualifiedName &cpp_name)
    {
        std::string ret = CppToCSharpHelperName(cpp_name);
        requested_empty_tag_types.try_emplace(ret, cpp_name);
        return ret;
    }

    std::string_view Generator::GetCtorFinalizationStatements(const cppdecl::QualifiedName &cpp_class, bool is_const)
    {
        if (!fat_objects)
            return "";

        std::pair<std::string, bool> key(CppdeclToCode(cpp_class), is_const);
        auto iter = class_name_to_fat_object_init_code.find(key);
        if (iter == class_name_to_fat_object_init_code.end())
            throw std::logic_error("Internal error: `GetCtorFinalizationStatements()` was either called on an unknown class, or called too early, before the fields of this class were emitted. The class name was `" + key.first + "` (" + (is_const ? "const" : "non-const") + ").");

        return iter->second;
    }

    cppdecl::QualifiedName Generator::AdjustCppNamespaces(cppdecl::QualifiedName name) const
    {
        // Apply any replacements.
        for (const auto &[from, to] : replaced_namespaces)
        {
            if (name.Equals(from, cppdecl::QualifiedName::EqualsFlags::allow_less_parts_in_target))
            {
                name.parts.erase(name.parts.begin(), name.parts.begin() + std::ptrdiff_t(from.parts.size()));
                name.parts.insert(name.parts.begin(), to.parts.begin(), to.parts.end());
            }
        }

        // Now the forced namespace, if any.

        // No forced namespace.
        if (!forced_namespace || forced_namespace->parts.empty())
            return name;

        if (name.parts.empty() || name.parts.front() != forced_namespace->parts.front())
            name.parts.insert(name.parts.begin(), forced_namespace->parts.begin(), forced_namespace->parts.end());

        return name;
    }

    std::string Generator::CppToCSharpHelperName(cppdecl::QualifiedName name)
    {
        name = AdjustCppNamespaces(std::move(name));

        std::string ret;
        for (std::size_t i = 0; i < name.parts.size(); i++)
        {
            if (i > 0)
                ret += '.'; // We don't use actual namespaces in C# (which would require `::`). Since we only use static classes, we can use `.` everywhere.

            ret += CppToCSharpIdentifier(name.parts[i]);
        }
        return ret;
    }

    std::string Generator::CppToCSharpEnumName(cppdecl::QualifiedName name)
    {
        // This works fine for enums.
        return CppToCSharpHelperName(std::move(name));
    }

    std::string Generator::CppToCSharpUnqualEnumName(const cppdecl::QualifiedName &name)
    {
        // This works fine for enums.
        return CppToCSharpIdentifier(name.parts.back());
    }

    std::string Generator::CppToCSharpClassName(cppdecl::QualifiedName name, bool is_const)
    {
        // Must make this before adjusting the name.
        std::string unqual_part = CppToCSharpUnqualClassName(name, is_const);

        name = AdjustCppNamespaces(std::move(name));

        std::string ret;
        for (std::size_t i = 0; i < name.parts.size(); i++)
        {
            if (i > 0)
                ret += '.'; // We don't use actual namespaces in C# (which would require `::`). Since we only use static classes, we can use `.` everywhere.

            std::string part;
            if (i + 1 == name.parts.size())
                part = std::move(unqual_part);
            else
                part = CppToCSharpIdentifier(name.parts[i]);

            ret += part;
        }
        return ret;
    }

    std::string Generator::CppToCSharpUnqualClassName(const cppdecl::QualifiedName &name, bool is_const)
    {
        // Custom names for exposed structs.
        // Eventually we might want to remove those wrappers entirely.
        const auto &class_info = std::get<CInterop::TypeKinds::Class>(c_desc.FindTypeOpt(CppdeclToCode(name))->var);
        if (class_info.kind == CInterop::ClassKind::exposed_struct)
            return (is_const ? "ConstBox_" : "Box_") + CppToCSharpIdentifier(name.parts.back());

        // You can't trivially remove `_` from `Const_`, since we need `ConstIterator` (from `const_iterator`) to be different from the result
        //   of this function applied to `iterator` (resulting in `Const_Iterator`).
        return (is_const ? "Const_" : "") + CppToCSharpIdentifier(name.parts.back());
    }

    std::string Generator::CppToCSharpExposedStructName(cppdecl::QualifiedName name)
    {
        name = AdjustCppNamespaces(std::move(name));

        std::string ret;
        for (std::size_t i = 0; i < name.parts.size(); i++)
        {
            if (i > 0)
                ret += '.'; // We don't use actual namespaces in C# (which would require `::`). Since we only use static classes, we can use `.` everywhere.

            std::string part;
            if (i + 1 == name.parts.size())
                part = CppToCSharpUnqualExposedStructName(name);
            else
                part = CppToCSharpIdentifier(name.parts[i]);

            ret += part;
        }
        return ret;
    }

    std::string Generator::CppToCSharpUnqualExposedStructName(const cppdecl::QualifiedName &name)
    {
        // Return unchanged.
        return CppToCSharpIdentifier(name.parts.back());
    }

    std::string Generator::CppToCSharpByValueHelperName(cppdecl::QualifiedName name, bool is_shared)
    {
        name = AdjustCppNamespaces(std::move(name));

        std::string ret;
        for (std::size_t i = 0; i < name.parts.size(); i++)
        {
            if (i > 0)
                ret += '.'; // We don't use actual namespaces in C# (which would require `::`). Since we only use static classes, we can use `.` everywhere.

            std::string part;
            if (i + 1 == name.parts.size())
                part = CppToCSharpUnqualByValueHelperName(name.parts[i], is_shared);
            else
                part = CppToCSharpIdentifier(name.parts[i]);

            ret += part;
        }
        return ret;
    }

    std::string Generator::CppToCSharpUnqualByValueHelperName(const cppdecl::UnqualifiedName &name, bool is_shared)
    {
        return (is_shared ? "_ByValueShared_" : "_ByValue_") + CppToCSharpIdentifier(name);
    }

    std::string Generator::CppToCSharpByValueOptOptHelperName(cppdecl::QualifiedName name, bool is_shared)
    {
        name = AdjustCppNamespaces(std::move(name));

        std::string ret;
        for (std::size_t i = 0; i < name.parts.size(); i++)
        {
            if (i > 0)
                ret += '.'; // We don't use actual namespaces in C# (which would require `::`). Since we only use static classes, we can use `.` everywhere.

            std::string part;
            if (i + 1 == name.parts.size())
                part = CppToCSharpUnqualByValueOptOptHelperName(name.parts[i], is_shared);
            else
                part = CppToCSharpIdentifier(name.parts[i]);

            ret += part;
        }
        return ret;
    }

    std::string Generator::CppToCSharpUnqualByValueOptOptHelperName(const cppdecl::UnqualifiedName &name, bool is_shared)
    {
        // Sic, repeating `Opt` two times (once because those always have default arguments, then again because of `std::optional`).
        return (is_shared ? "_ByValueSharedOptOpt_" : "_ByValueOptOpt_") + CppToCSharpIdentifier(name);
    }

    std::string Generator::CppToCSharpInOptStructHelperName(cppdecl::QualifiedName name)
    {
        name = AdjustCppNamespaces(std::move(name));

        std::string ret;
        for (std::size_t i = 0; i < name.parts.size(); i++)
        {
            if (i > 0)
                ret += '.'; // We don't use actual namespaces in C# (which would require `::`). Since we only use static classes, we can use `.` everywhere.

            std::string part;
            if (i + 1 == name.parts.size())
                part = CppToCSharpUnqualInOptStructHelperName(name.parts[i]);
            else
                part = CppToCSharpIdentifier(name.parts[i]);

            ret += part;
        }
        return ret;
    }

    std::string Generator::CppToCSharpUnqualInOptStructHelperName(const cppdecl::UnqualifiedName &name)
    {
        return "_InOpt_" + CppToCSharpIdentifier(name);
    }

    std::string Generator::CppToCSharpInOptMutNontrivialHelperName(cppdecl::QualifiedName name)
    {
        name = AdjustCppNamespaces(std::move(name));

        std::string ret;
        for (std::size_t i = 0; i < name.parts.size(); i++)
        {
            if (i > 0)
                ret += '.'; // We don't use actual namespaces in C# (which would require `::`). Since we only use static classes, we can use `.` everywhere.

            std::string part;
            if (i + 1 == name.parts.size())
                part = CppToCSharpUnqualInOptMutNontrivialHelperName(name.parts[i]);
            else
                part = CppToCSharpIdentifier(name.parts[i]);

            ret += part;
        }
        return ret;
    }

    std::string Generator::CppToCSharpUnqualInOptMutNontrivialHelperName(const cppdecl::UnqualifiedName &name)
    {
        return "_InOptMut_" + CppToCSharpIdentifier(name);
    }

    std::string Generator::CppToCSharpInOptConstNontrivialHelperName(cppdecl::QualifiedName name)
    {
        name = AdjustCppNamespaces(std::move(name));

        std::string ret;
        for (std::size_t i = 0; i < name.parts.size(); i++)
        {
            if (i > 0)
                ret += '.'; // We don't use actual namespaces in C# (which would require `::`). Since we only use static classes, we can use `.` everywhere.

            std::string part;
            if (i + 1 == name.parts.size())
                part = CppToCSharpUnqualInOptConstNontrivialHelperName(name.parts[i]);
            else
                part = CppToCSharpIdentifier(name.parts[i]);

            ret += part;
        }
        return ret;
    }

    std::string Generator::CppToCSharpUnqualInOptConstNontrivialHelperName(const cppdecl::UnqualifiedName &name)
    {
        return "_InOptConst_" + CppToCSharpIdentifier(name);
    }

    bool Generator::ForEachClassPartName(const cppdecl::QualifiedName &cpp_class, std::function<bool(const std::string &part)> func)
    {
        if (func(CppToCSharpUnqualClassName(cpp_class, false)))
            return true;
        if (func(CppToCSharpUnqualClassName(cpp_class, true)))
            return true;

        // If this is an exposed struct, pass that name too.
        const auto &class_info = std::get<CInterop::TypeKinds::Class>(c_desc.FindTypeOpt(CppdeclToCode(cpp_class))->var);
        if (class_info.kind == CInterop::ClassKind::exposed_struct && func(CppToCSharpUnqualExposedStructName(cpp_class)))
            return true;

        // We could pass all the other class helpers here too. For now it wasn't necessary, but if you ever get a conflict with one of those,
        //   adding them here should be simple.

        return false;
    }

    bool Generator::ForEachTypePartName(const cppdecl::QualifiedName &cpp_type, std::function<bool(const std::string &part)> func)
    {
        const std::string cpp_type_str = CppdeclToCode(cpp_type);

        // A enum.
        if (std::holds_alternative<CInterop::TypeKinds::Enum>(c_desc.FindTypeOpt(cpp_type_str)->var))
        {
            if (func(CppToCSharpUnqualEnumName(ParseNameOrThrow(cpp_type_str))))
                return true;
        }

        // A class.
        if (std::holds_alternative<CInterop::TypeKinds::Class>(c_desc.FindTypeOpt(cpp_type_str)->var))
            return ForEachClassPartName(cpp_type, func);

        return false;
    }

    const Generator::UsedNamesInNamespace &Generator::GetUsedNamesInNamespace(const cppdecl::QualifiedName &cpp_namespace)
    {
        const std::string cpp_namespace_str = cpp_namespace.parts.empty() ? "" : CppdeclToCode(cpp_namespace);
        auto iter = cached_used_names_in_namespace.find(cpp_namespace_str);
        if (iter != cached_used_names_in_namespace.end())
            return iter->second;

        UsedNamesInNamespace ret;

        // Type names.
        ForEachNestedType(cpp_namespace, [&](const cppdecl::QualifiedName &name)
        {
            ForEachTypePartName(name, [&](const std::string &part)
            {
                [[maybe_unused]] bool ok = ret.class_names.insert(part).second;
                assert(ok); // D:
                return false;
            });
        });

        return cached_used_names_in_namespace.try_emplace(cpp_namespace_str, std::move(ret)).first->second;
    }

    const Generator::UsedMemberNamesInClass &Generator::GetUsedMemberNamesInClass(const cppdecl::QualifiedName &cpp_class)
    {
        const std::string cpp_class_str = CppdeclToCode(cpp_class);
        auto iter = cached_used_member_names_in_class.find(cpp_class_str);
        if (iter != cached_used_member_names_in_class.end())
            return iter->second;

        UsedMemberNamesInClass ret;

        ForEachClassPartName(cpp_class, [&](const std::string &part)
        {
            ret.self_names.insert(part);
            return false;
        });

        // Insert nested types.
        // We don't handle conflicts with `ret.self_names` here, since renaming types sounds too difficult for now.
        ForEachNestedType(cpp_class, [&](const cppdecl::QualifiedName &name)
        {
            ForEachTypePartName(name, [&](const std::string &part)
            {
                [[maybe_unused]] bool ok = ret.nested_types.insert(part).second;
                assert(ok); // D:
                return false;
            });
        });

        const auto &type_desc = *c_desc.FindTypeOpt(cpp_class_str);
        const auto &class_desc = std::get<CInterop::TypeKinds::Class>(type_desc.var);

        // Insert fields.
        for (const auto &field : class_desc.fields)
        {
            std::string name = CppToCSharpFieldName(cpp_class, field.is_static, field.full_name, false);
            std::string fixed_name = name;

            while (ret.self_names.contains(fixed_name) || ret.nested_types.contains(fixed_name) || ret.fields.contains(fixed_name))
                fixed_name += '_';
            ret.fields.insert(fixed_name);

            if (name != fixed_name)
            {
                [[maybe_unused]] bool ok = ret.field_adjustments.try_emplace(std::move(name), std::move(fixed_name)).second;
                assert(ok); // Hmm.
            }
        }

        // Insert methods.
        for (const auto &method : class_desc.methods)
        {
            if (std::holds_alternative<CInterop::MethodKinds::Constructor>(method.var))
                continue; // Constructors definitely don't need this. This could skip some weird rewrites though (if you fix this, sync the condition with that in `MakeUnqualCSharpMethodName()`.

            for (EmitVariant emit_variant : GetMethodVariants(method))
            {
                if (!ShouldEmitMethod(cpp_class, type_desc, method, emit_variant))
                    continue;

                // The class part kind mostly doesn't matter here, until proven otherwise.
                std::string name = MakeUnqualCSharpMethodName(method, true/*the class part kind, see above*/, emit_variant, false);

                if (!cppdecl::IsValidIdentifier(name))
                    continue; // If it's something weird, don't bother.
                if (ret.method_adjustments.contains(name))
                    continue; // We already handled this name, don't bother.

                std::string fixed_name = name;

                // Not checking `methods` since we allow overloading.
                while (ret.self_names.contains(fixed_name) || ret.nested_types.contains(fixed_name) || ret.fields.contains(fixed_name))
                    fixed_name += '_';

                if (name != fixed_name)
                {
                    [[maybe_unused]] bool ok = ret.method_adjustments.try_emplace(std::move(name), std::move(fixed_name)).second;
                    assert(ok); // Hmm.
                }
            }
        }

        return cached_used_member_names_in_class.try_emplace(cpp_class_str, std::move(ret)).first->second;
    }

    void Generator::ForEachNestedType(const cppdecl::QualifiedName &cpp_class_or_ns, std::function<void(const cppdecl::QualifiedName &nested_type)> func)
    {
        std::string nested_type_prefix = CppdeclToCode(cpp_class_or_ns) + "::";

        auto iter = c_desc.cpp_types.Map().lower_bound(nested_type_prefix);
        while (iter != c_desc.cpp_types.Map().end() && iter->first.starts_with(nested_type_prefix))
        {
            const cppdecl::QualifiedName &name = ParseNameOrThrow(iter->first);

            // Note the `name.parts.size()` check to visit only the direct sub types, and not recurse into them.
            if (name.parts.size() == cpp_class_or_ns.parts.size() + 1 && ShouldEmitCppType(cppdecl::Type::FromQualifiedName(name)))
                func(name);

            ++iter;
        }
    }

    std::string Generator::CppToCSharpFieldName(const cppdecl::QualifiedName &cpp_class, bool is_static, const std::string &cpp_field, bool adjust_to_disambiguate)
    {
        std::string ret = CppToCSharpIdentifier(ParseNameOrThrow(cpp_field));
        if (!is_static)
            MakeFirstLetterLowercase(ret);

        if (adjust_to_disambiguate)
        {
            const auto &info = GetUsedMemberNamesInClass(cpp_class);
            if (auto iter = info.field_adjustments.find(ret); iter != info.field_adjustments.end())
                ret = iter->second;
        }

        return ret;
    }

    std::string Generator::TypeBindingFlagsToString(TypeBindingFlags flags)
    {
        std::string ret;
        ret += bool(flags & TypeBindingFlags::enable_sugar) ? " (with sugar enabled)" : "";
        ret += bool(flags & TypeBindingFlags::pointer_to_array) ? " (pointer to array)" : "";
        ret += bool(flags & TypeBindingFlags::replace_ref_with_ptr) ? " (replacing `ref` with pointers)" : "";
        ret += bool(flags & TypeBindingFlags::return_ref_instead_of_copying_small_types) ? " (using `in`/`ref readonly` instead of copying small types)" : "";
        ret += bool(flags & TypeBindingFlags::no_move_in_by_value_return) ? " (no move in by-value return)" : "";
        ret += bool(flags & TypeBindingFlags::return_ref_wrapper) ? " (returning a ref wrapper)" : "";
        ret += bool(flags & TypeBindingFlags::use_heap_wrappers_for_exposed_structs) ? " (using heap wrappers for exposed structs)" : "";
        return ret;
    }

    Generator::TypeBindingFlags Generator::TypeBindingFlagsForReturn(const CInterop::FuncReturn &ret)
    {
        return ret.uses_sugar * TypeBindingFlags::enable_sugar | ret.is_array_pointer * TypeBindingFlags::pointer_to_array;
    }

    Generator::TypeBindingFlags Generator::TypeBindingFlagsForParam(const CInterop::FuncParam &param)
    {
        return param.uses_sugar * TypeBindingFlags::enable_sugar | param.is_array_pointer * TypeBindingFlags::pointer_to_array;
    }

    const TypeBinding &Generator::GetTypeBinding(const cppdecl::Type &cpp_type, TypeBindingFlags flags)
    {
        if (auto opt = GetTypeBindingOpt(cpp_type, flags))
        {
            return *opt;
        }
        else
        {
            throw std::runtime_error(
                "Don't know how to bind C++ type `" + CppdeclToCode(cpp_type) + "`" + TypeBindingFlagsToString(flags) + ".");
        }
    }

    const TypeBinding *Generator::GetTypeBindingOpt(const cppdecl::Type &cpp_type, TypeBindingFlags flags)
    {
        // Adjust the flags first.
        if (!move_in_by_value_return && !bool(flags & TypeBindingFlags::force_move_in_by_value_return))
            flags |= TypeBindingFlags::no_move_in_by_value_return;


        const std::string cpp_type_str = CppdeclToCode(cpp_type);
        auto cached_iter = cached_type_bindings.find(std::pair(cpp_type_str, flags));
        if (cached_iter != cached_type_bindings.end())
            return &cached_iter->second;

        // The name `std::shared_ptr` without template arguments.
        static const cppdecl::QualifiedName cpp_name_shared_ptr = cppdecl::QualifiedName{}.AddPart("std").AddPart("shared_ptr");

        try
        {
            auto CreateBinding = [&](TypeBinding new_binding) -> TypeBinding *
            {
                auto [iter, is_new] = cached_type_bindings.try_emplace(std::pair(cpp_type_str, flags), std::move(new_binding));
                assert(is_new);
                return &iter->second;
            };

            // If this is an rvalue reference, prepends a special tag struct to `params`. Otherwise leaves it unchanged.
            // Returns the resulting params vector.
            // We only use this for cases where we can't use the `_Moved<...>` wrapper for the parameter type for some reason.
            auto MaybePrependRvalueTag = [
                this,
                is_rvalue_ref = cpp_type.Is<cppdecl::Reference>() && cpp_type.As<cppdecl::Reference>()->kind == cppdecl::RefQualifier::rvalue
            ](const std::string &name, std::vector<TypeBinding::ParamUsage::Strings::CSharpParam> params)
            {
                if (is_rvalue_ref)
                {
                    params.insert(params.begin(), TypeBinding::ParamUsage::Strings::CSharpParam{
                        .type = RequestHelper("_MoveRef"),
                        .name = "_move_" + name,
                    });

                    // If the original parameter had a default argument, add a default argument for this one too.
                    // This is strictly required, we have checks for this.
                    if (params.at(1).default_arg)
                        params.at(0).default_arg = "default";
                }
                return params;
            };

            if (!bool(flags & TypeBindingFlags::enable_sugar))
            {
                // Without sugar.

                if (const CInterop::TypeDesc *c_type_desc = c_desc.FindTypeOpt(cpp_type_str))
                {
                    // Makes a by-value binding for an arithmetic type or a enum.
                    // If `fix_input` is specified, it should return an extra statement for parameters' `extra_statements`.
                    // The result should be terminated with a newline, and you can read/write `name` in your statement.
                    // NOTE: The `fix_input` lambda is preserved, make sure it doesn't dangle.
                    auto MakeScalarByValueBinding = [&](const std::string &csharp_type, std::function<std::string(const std::string &name)> fix_input = nullptr) -> TypeBinding
                    {
                        return {
                            .param_usage = TypeBinding::ParamUsage{
                                .make_strings = [csharp_type, fix_input](const std::string &name, bool /*have_useless_defarg*/)
                                {
                                    return TypeBinding::ParamUsage::Strings{
                                        .dllimport_decl_params = {{.type = csharp_type, .name = name}},
                                        .csharp_decl_params = {{.type = csharp_type, .name = name}},
                                        .extra_statements = fix_input ? fix_input(name) : "",
                                        .dllimport_args = name,
                                    };
                                },
                            },
                            .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                .make_strings = [csharp_type, fix_input](const std::string &name, bool /*have_useless_defarg*/)
                                {
                                    return TypeBinding::ParamUsage::Strings{
                                        .dllimport_decl_params = {{.type = csharp_type + " *", .name = name}}, // No const pointers in C#.
                                        .csharp_decl_params = {{.type = csharp_type + "?", .name = name, .default_arg = "null"}},
                                        .extra_statements =
                                            csharp_type + " __deref_" + name + " = " + name + ".GetValueOrDefault();\n" +
                                            (fix_input ? fix_input("__deref_" + name) : ""),
                                        .dllimport_args = name + ".HasValue ? &__deref_" + name + " : null",
                                    };
                                },
                            },
                            .return_usage = TypeBinding::ReturnUsage{
                                .dllimport_return_type = csharp_type,
                                .csharp_return_type = csharp_type,
                            },
                        };
                    };

                    return std::visit(Overload{
                        [&](const CInterop::TypeKinds::Invalid &) -> const TypeBinding *
                        {
                            throw std::runtime_error("The type is marked `TypeKinds::Invalid`, but is passed without sugar.");
                        },
                        [&](const CInterop::TypeKinds::Void &) -> const TypeBinding *
                        {
                            // Void.
                            if (cpp_type_str == "void")
                            {
                                return CreateBinding({
                                    .return_usage = TypeBinding::ReturnUsage{
                                        .dllimport_return_type = "void",
                                        .csharp_return_type = "void",
                                        .make_return_statements = [](const std::string &target, const std::string &expr){(void)target; return std::string(expr) + ";";},
                                    },
                                });
                            }
                            else
                            {
                                throw std::runtime_error("The type is marked `TypeKinds::Void` but isn't spelled `void`.");
                            }
                        },
                        [&](const CInterop::TypeKinds::EmptyTag &) -> const TypeBinding *
                        {
                            // This can optionally be a const and/or rvalue reference.
                            // So we don't check the modifiers/qualifiers at all.

                            return CreateBinding({
                                .param_usage = TypeBinding::ParamUsage{
                                    .make_strings = [this, qual_name = cpp_type.simple_type.name](const std::string &name, bool have_useless_defarg)
                                    {
                                        return TypeBinding::ParamUsage::Strings{
                                            .dllimport_decl_params = {}, // Nothing.
                                            .csharp_decl_params = {{.type = RequestCSharpEmptyTagType(qual_name), .name = name, .default_arg = have_useless_defarg ? std::optional<std::string>("default") : std::nullopt}}, // Note `default` over `null`, since this is a struct.
                                            .dllimport_args = "", // Nothing.
                                        };
                                    },
                                },
                                // No `param_usage_with_default_arg`, since all default arguments are considered useless for tags.
                                .return_usage = TypeBinding::ReturnUsage{
                                    .dllimport_return_type = "void",
                                    .csharp_return_type = RequestCSharpEmptyTagType(cpp_type.simple_type.name),
                                    .make_return_statements = [](const std::string &target, const std::string &expr){return expr + ";\n" + target + " new();";}, // Note that we must still paste `expr` to call the function.
                                },
                            });
                        },
                        [&](const CInterop::TypeKinds::EmptyTagPtr &) -> const TypeBinding *
                        {
                            if (!(cpp_type.modifiers.size() == 1 && cpp_type.Is<cppdecl::Pointer>()))
                                throw std::runtime_error("Expected an empty tag type pointer to be a pointer to a qualified name, but got `" + cpp_type_str + "`.");

                            return CreateBinding({
                                // Only usable as a return type.
                                .return_usage = TypeBinding::ReturnUsage{
                                    .dllimport_return_type = "bool",
                                    .csharp_return_type = RequestCSharpEmptyTagType(cpp_type.simple_type.name) + "?",
                                    .make_return_statements = [this, qual_name = cpp_type.simple_type.name](const std::string &target, const std::string &expr){return target +" " + expr + " ? new " + RequestCSharpEmptyTagType(qual_name) + "() : null;";},
                                },
                            });
                        },
                        [&](const CInterop::TypeKinds::Arithmetic &) -> const TypeBinding *
                        {
                            // Bool.
                            // I heard the C# `bool` gets passed as an `int32_t`, so it needs special-casing with `byte` as the underlying type.
                            if (cpp_type_str == "bool")
                            {
                                return CreateBinding({
                                    .param_usage = TypeBinding::ParamUsage{
                                        .make_strings = [](const std::string &name, bool /*have_useless_defarg*/)
                                        {
                                            return TypeBinding::ParamUsage::Strings{
                                                .dllimport_decl_params = {{.type = "byte", .name = name}},
                                                .csharp_decl_params = {{.type = "bool", .name = name}},
                                                .dllimport_args = name + " ? (byte)1 : (byte)0",
                                            };
                                        },
                                    },
                                    .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                        .make_strings = [](const std::string &name, bool /*have_useless_defarg*/)
                                        {
                                            return TypeBinding::ParamUsage::Strings{
                                                .dllimport_decl_params = {{.type = "byte *", .name = name}}, // No const pointers in C#.
                                                .csharp_decl_params = {{.type = "bool?", .name = name, .default_arg = "null"}},
                                                .extra_statements = "byte __deref_" + name + " = " + name + ".GetValueOrDefault() ? (byte)1 : (byte)0;\n",
                                                .dllimport_args = name + ".HasValue ? &__deref_" + name + " : null",
                                            };
                                        },
                                    },
                                    .return_usage = TypeBinding::ReturnUsage{
                                        .dllimport_return_type = "byte",
                                        .csharp_return_type = "bool",
                                        .make_return_statements = [](const std::string &target, const std::string &expr){return target + " " + expr + " != 0;";},
                                    },
                                });
                            }

                            // Arithmetic types.
                            if (auto csharp_type_str = CToCSharpPrimitiveTypeOpt(cpp_type_str, false))
                                return CreateBinding(MakeScalarByValueBinding(std::string(*csharp_type_str)));

                            throw std::runtime_error("The type is marked `TypeKinds::Arithmetic`, but it isn't a known arithmetic type.");
                        },
                        [&](const CInterop::TypeKinds::Enum &elem) -> const TypeBinding *
                        {
                            if (!cpp_type.IsOnlyQualifiedName())
                                throw std::runtime_error("This is marked as `TypeKinds::Enum`, but the type name isn't just a qualified name.");

                            std::string csharp_type = CppToCSharpEnumName(cpp_type.simple_type.name);

                            const bool underlying_is_bool = c_desc.platform_info.FindPrimitiveType(elem.underlying_type)->kind == PrimitiveTypeInfo::Kind::boolean;

                            TypeBinding ret = MakeScalarByValueBinding(csharp_type,
                                // If the underlying type was bool in C/C++, insert code to clamp out-of-range inputs.
                                underlying_is_bool
                                ? std::function([csharp_type](const std::string &name){return "if ((byte)" + name + " > 1) " + name + " = (" + csharp_type + ")1;\n";})
                                : nullptr
                            );

                            return CreateBinding(std::move(ret));
                        },
                        [&](const CInterop::TypeKinds::Class &elem) -> const TypeBinding *
                        {
                            if (!cpp_type.IsOnlyQualifiedName())
                                throw std::runtime_error("This type is marked `TypeKinds::Class`, but its name isn't just a qualified name.");


                            const bool is_shared_ptr = cpp_type.simple_type.name.Equals(cpp_name_shared_ptr, cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target);
                            const cppdecl::Type *shared_ptr_targ = is_shared_ptr ? cpp_type.simple_type.name.parts.at(1).template_args.value().args.at(0).AsType() : nullptr;
                            const bool is_transparent_shared_ptr = shared_ptr_targ && TypeIsCppClass(*shared_ptr_targ);

                            // If this is a transparent `shared_ptr` (i.e. pointing to a class storing one), this its target type.
                            // Otherwise this is the original referenced type.
                            const cppdecl::Type &cpp_effective_type = is_transparent_shared_ptr ? *shared_ptr_targ : cpp_type;

                            const std::string csharp_type_mut = CppToCSharpClassName(cpp_effective_type.simple_type.name, false);
                            const std::string csharp_type_const = CppToCSharpClassName(cpp_effective_type.simple_type.name, true);
                            const std::string csharp_underlying_ptr = is_transparent_shared_ptr ? "_UnderlyingSharedPtr" : "_UnderlyingPtr";
                            const std::string csharp_underlying_ptr_type = csharp_type_mut + (is_transparent_shared_ptr ? "._UnderlyingShared" : "._Underlying") + " *";
                            const std::string by_value_helper = CppToCSharpByValueHelperName(cpp_effective_type.simple_type.name, is_transparent_shared_ptr);

                            TypeBinding *ret = [&]
                            {
                                switch (elem.kind)
                                {
                                  case CInterop::ClassKind::ref_only:
                                    throw std::runtime_error("The class marked as `ClassKind::ref_only`, but it's being passed by value.");
                                    break;
                                  case CInterop::ClassKind::uses_pass_by_enum:
                                    // `is_shared_ptr == true` also goes here!
                                    return CreateBinding({
                                        .param_usage = TypeBinding::ParamUsage{
                                            .make_strings = [this, by_value_helper, csharp_underlying_ptr_type, csharp_underlying_ptr](const std::string &name, bool /*have_useless_defarg*/)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .dllimport_decl_params = {{.type = RequestHelper("_PassBy"), .name = name + "_pass_by"}, {.type = csharp_underlying_ptr_type, .name = name}},
                                                    .csharp_decl_params = {{.type = by_value_helper, .name = name}},
                                                    .can_be_kept_alive = true,
                                                    .keep_other_alive = TypeBinding::KeepAliveUsage{
                                                        .cond = name + ".Value is not null",
                                                        .object = name + ".Value",
                                                    },
                                                    .dllimport_args = name + ".PassByMode, " + name + ".Value is not null ? " + name + ".Value." + csharp_underlying_ptr + " : null",
                                                };
                                            },
                                        },
                                        .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                            .make_strings = [this, by_value_helper, csharp_underlying_ptr_type, csharp_underlying_ptr](const std::string &name, bool /*have_useless_defarg*/)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .dllimport_decl_params = {{.type = RequestHelper("_PassBy"), .name = name + "_pass_by"}, {.type = csharp_underlying_ptr_type, .name = name}},
                                                    .csharp_decl_params = {{.type = by_value_helper + "?", .name = name, .default_arg = "null"}},
                                                    .can_be_kept_alive = true,
                                                    .keep_other_alive = TypeBinding::KeepAliveUsage{
                                                        .cond = name + " is not null && " + name + ".Value is not null",
                                                        .object = name + ".Value",
                                                    },
                                                    .dllimport_args = name + " is not null ? " + name + ".PassByMode : " + RequestHelper("_PassBy") + ".default_arg, " + name + " is not null && " + name + ".Value is not null ? " + name + ".Value." + csharp_underlying_ptr + " : null",
                                                };
                                            },
                                        },
                                        .return_usage = TypeBinding::ReturnUsage{
                                            .dllimport_return_type = csharp_underlying_ptr_type,
                                            .csharp_return_type =
                                                bool(flags & TypeBindingFlags::no_move_in_by_value_return)
                                                ? csharp_type_mut
                                                : RequestHelper("_Moved") + "<" + csharp_type_mut + ">",
                                            .can_be_kept_alive = true,
                                            .keep_other_alive =
                                                [no_move = bool(flags & TypeBindingFlags::no_move_in_by_value_return)](const std::string &name) -> TypeBinding::KeepAliveUsage
                                                {
                                                    return {.object = no_move ? name : name + ".Value"};
                                                },
                                            .make_return_statements = [
                                                this,
                                                csharp_type_mut,
                                                disable_move = bool(flags & TypeBindingFlags::no_move_in_by_value_return)
                                            ](const std::string &target, const std::string &expr)
                                            {
                                                if (disable_move)
                                                    return target + " new(" + expr + ", is_owning: true);";
                                                else
                                                    return target + " " + RequestHelper("Move") + "(new " + csharp_type_mut + "(" + expr + ", is_owning: true));";
                                            },
                                        },
                                    });
                                    break;
                                  case CInterop::ClassKind::trivial_via_ptr:
                                    return CreateBinding({
                                        .param_usage = TypeBinding::ParamUsage{
                                            .make_strings = [csharp_type_const, csharp_underlying_ptr_type, csharp_underlying_ptr](const std::string &name, bool /*have_useless_defarg*/)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .dllimport_decl_params = {{.type = csharp_underlying_ptr_type, .name = name}},
                                                    .csharp_decl_params = {{.type = csharp_type_const, .name = name}},
                                                    .can_be_kept_alive = true,
                                                    .keep_other_alive = TypeBinding::KeepAliveUsage{.object = name},
                                                    .dllimport_args = name + "." + csharp_underlying_ptr,
                                                };
                                            },
                                        },
                                        .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                            .make_strings = [csharp_type_const, csharp_underlying_ptr_type, csharp_underlying_ptr](const std::string &name, bool /*have_useless_defarg*/)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .dllimport_decl_params = {{.type = csharp_underlying_ptr_type, .name = name}},
                                                    .csharp_decl_params = {{.type = csharp_type_const + "?", .name = name, .default_arg = "null"}},
                                                    .can_be_kept_alive = true,
                                                    .keep_other_alive = TypeBinding::KeepAliveUsage{
                                                        .cond = name + " is not null",
                                                        .object = name,
                                                    },
                                                    .dllimport_args = name + " is not null ? " + name + "." + csharp_underlying_ptr + " : null",
                                                };
                                            },
                                        },
                                        .return_usage = TypeBinding::ReturnUsage{
                                            .dllimport_return_type = csharp_underlying_ptr_type,
                                            .csharp_return_type = csharp_type_mut,
                                            .can_be_kept_alive = true,
                                            .keep_other_alive = [](const std::string &name) -> TypeBinding::KeepAliveUsage {return {.object = name};},
                                            .make_return_statements = [](const std::string &target, const std::string &expr)
                                            {
                                                return target + " new(" + expr + ", is_owning: true);";
                                            },
                                        },
                                    });
                                    break;
                                  case CInterop::ClassKind::only_returnable:
                                    return CreateBinding({
                                        // Not passable as a parameter.
                                        .return_usage = TypeBinding::ReturnUsage{
                                            .dllimport_return_type = csharp_underlying_ptr_type,
                                            .csharp_return_type = csharp_type_mut,
                                            .can_be_kept_alive = true,
                                            .keep_other_alive = [](const std::string &name) -> TypeBinding::KeepAliveUsage {return {.object = name};},
                                            .make_return_statements = [](const std::string &target, const std::string &expr)
                                            {
                                                return target + " new(" + expr + ", is_owning: true);";
                                            },
                                        },
                                    });
                                    break;
                                  case CInterop::ClassKind::exposed_struct:
                                    {
                                        // Notice that `std::shared_ptr<T>` never arrives here, since we're switching on its kind directly,
                                        //   not on the kind of the underlying type, so those always go to `ClassKind::uses_pass_by_enum`.

                                        const std::string csharp_value_type = CppToCSharpExposedStructName(cpp_effective_type.simple_type.name);
                                        const std::string csharp_in_opt_type = CppToCSharpInOptStructHelperName(cpp_effective_type.simple_type.name);

                                        return CreateBinding({
                                            .param_usage = TypeBinding::ParamUsage{
                                                .make_strings = [csharp_value_type](const std::string &name, bool /*have_useless_defarg*/)
                                                {
                                                    return TypeBinding::ParamUsage::Strings{
                                                        .dllimport_decl_params = {{.type = csharp_value_type, .name = name}},
                                                        .csharp_decl_params = {{.type = csharp_value_type, .name = name}},
                                                        .dllimport_args = name,
                                                    };
                                                },
                                            },
                                            .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                                .make_strings = [csharp_value_type, csharp_in_opt_type](const std::string &name, bool /*have_useless_defarg*/)
                                                {
                                                    return TypeBinding::ParamUsage::Strings{
                                                        .dllimport_decl_params = {{.type = csharp_value_type + " *", .name = name}},
                                                        .csharp_decl_params = {{.type = csharp_in_opt_type, .name = name, .default_arg = "default"}}, // Note `default` instead of `new()` or `null`. This isn't nullable, which is expected, but being unable to use `new()` as the default argument is weird.
                                                        .dllimport_args = name + ".HasValue ? &" + name + ".Object" + " : null",
                                                    };
                                                },
                                            },
                                            .return_usage = TypeBinding::ReturnUsage{
                                                .dllimport_return_type = csharp_value_type,
                                                .csharp_return_type = csharp_value_type,
                                                // Default `make_return_expr` is good enough!
                                            },
                                        });
                                    }
                                    break;
                                }
                            }();

                            // Adjust bindings for certain hardcoded classes.
                            // Note that this block can do `return ret;` early for known types.
                            if (ret)
                            {
                                // `expected`
                                // This intentionally doesn't handle `std::shared_ptr`,
                                //   by ignoring `cpp_effective_type` and acting directly on `cpp_type`.
                                if (
                                    // The user has not opted out of this behavior.
                                    deref_expected &&
                                    // 1 or 2 parts in the name.
                                    !cpp_type.simple_type.name.parts.empty() &&
                                    cpp_type.simple_type.name.parts.size() <= 2 &&
                                    // The last part is `expected`, maybe with template arguments.
                                    cpp_type.simple_type.name.parts.back().AsSingleWord(cppdecl::SingleWordFlags::ignore_template_args) == "expected" &&
                                    // The first part is either `std`, `tl`, or doesn't exist.
                                    (
                                        cpp_type.simple_type.name.parts.size() == 1 ||
                                        cpp_type.simple_type.name.parts.front().AsSingleWord() == "std" ||
                                        cpp_type.simple_type.name.parts.front().AsSingleWord() == "tl"
                                    )
                                )
                                {
                                    const cppdecl::Type &success_type = *cpp_type.simple_type.name.parts.back().template_args.value().args.at(0).AsType();
                                    const std::string success_type_str = CppdeclToCode(success_type);

                                    // Note that `std::expected` doesn't support reference and array types.
                                    // I have no idea why, but it makes things easier for us.
                                    assert(!success_type.Is<cppdecl::Reference>());
                                    assert(!success_type.Is<cppdecl::Array>());

                                    const std::string csharp_success_type = GetTypeBinding(success_type, flags).return_usage.value().csharp_return_type;
                                    const std::string csharp_success_type_nomove = GetTypeBinding(success_type, flags | TypeBindingFlags::no_move_in_by_value_return).return_usage.value().csharp_return_type;


                                    // Patch the return usage in the `expected` binding!

                                    ret->return_usage.value().make_return_statements = [
                                        this,
                                        next = ret->return_usage.value().MakeReturnStatementsFunctor(),
                                        // Can't use `ret->return_usage.value().csharp_return_type` for this, since that might include `_Moved<...>`, which we don't want.
                                        // Can't call `GetTypeBindingOpt(..., no_move_in_by_value_return)` recursively either, since that will return the success type,
                                        //   since this same code will apply there too.
                                        // So instead get the class name manually.
                                        csharp_expected_type = CppToCSharpClassName(cpp_type.simple_type.name, false),
                                        csharp_success_type,
                                        csharp_success_type_nomove
                                    ](const std::string &target, const std::string &expr)
                                    {
                                        // Collect the C# `expected` object into a variable instead of returning it.
                                        std::string ret = csharp_expected_type + " __expected_ret;\n";
                                        ret += next("__expected_ret =", expr) + '\n';

                                        // Throw if null.
                                        // Note no trailing newline here yet.
                                        ret += "if (__expected_ret." + AdjustCalledFuncName("Error") + "() is var __expected_error and not null) throw new " + RequestHelper("UnexpectedResultException") + "($\"{__expected_error}\");"; // This should call `.ToString()` (built-in method of the C# `object`, the common base of all objects, possibly overridden). But unlike `ToString()`, which returns `string?`, this should automatically fall back to the type name or whatever.

                                        // Return the underlying instance.
                                        // The `{,_nomove}` part shouldn't affect this condition.
                                        if (csharp_success_type == "void")
                                        {
                                            // Nothing to return.
                                        }
                                        else
                                        {
                                            // Just this.
                                            // Don't need to keep-alive anything here, since `GetValue()` should do that automatically.
                                            ret += "\n" + target + " __expected_ret." + AdjustCalledFuncName("Value") + "()!;";
                                        }

                                        return ret;
                                    };
                                    // Adjust the C# return type to match the success type.
                                    // Must do this AFTER adjusting `make_return_expr`, since that uses the original type.
                                    ret->return_usage.value().csharp_return_type = csharp_success_type;
                                }
                            }

                            return ret;
                        },
                    }, c_type_desc->var);
                }
                else
                {
                    // Simple non-owning pointers and references.
                    // Note that something like `std::monostate *` does have a type description, and so isn't handled here.

                    // References to...
                    // This intentionally handles rvalue references too.
                    if (cpp_type.Is<cppdecl::Reference>())
                    {
                        const bool is_rvalue_ref = cpp_type.As<cppdecl::Reference>()->kind == cppdecl::RefQualifier::rvalue;

                        // A generic reference.
                        const TypeBinding *ret = [&]() -> const TypeBinding *
                        {
                            if (cpp_type.modifiers.size() != 1)
                                return nullptr;

                            cppdecl::Type cpp_underlying_type = cpp_type;
                            cpp_underlying_type.RemoveModifier();
                            const bool is_const = cpp_underlying_type.IsConst();
                            cpp_underlying_type.RemoveQualifiers(cppdecl::CvQualifiers::const_);

                            const std::string cpp_underlying_type_str = CppdeclToCode(cpp_underlying_type);

                            const CInterop::TypeDesc *underlying_type_desc = c_desc.FindTypeOpt(cpp_underlying_type_str);
                            if (!underlying_type_desc)
                                return nullptr;

                            // This is for arithmetic types and enums, and for exposed structs.
                            // If `fix_input` is specified, it should return an extra statement for parameters' `extra_statements`.
                            // The result should be terminated with a newline, and you can read/write `name` in your statement.
                            // NOTE: The `fix_input` lambda is preserved, make sure it doesn't dangle.
                            auto MakeScalarRefBinding = [&](const std::string &csharp_type, std::function<std::string(const std::string &name)> fix_input = nullptr, bool is_exposed_struct = false) -> TypeBinding
                            {
                                // If we want a pointer binding, adjust the type to be a pointer instead of a reference, and recurse.
                                if (bool(flags & TypeBindingFlags::replace_ref_with_ptr))
                                {
                                    cppdecl::Type ptr_type = cpp_type;
                                    ptr_type.RemoveModifier(); // Remove the reference-ness.
                                    ptr_type.AddModifier(cppdecl::Pointer{});
                                    return *GetTypeBindingOpt(ptr_type, flags);
                                }

                                const bool add_in = is_exposed_struct;
                                const bool return_ref_instead_of_by_value = is_exposed_struct || bool(flags & TypeBindingFlags::return_ref_instead_of_copying_small_types); // Otherwise return by value.
                                const bool return_ref_wrapper = bool(flags & TypeBindingFlags::return_ref_wrapper);

                                if (!is_const && !is_rvalue_ref)
                                {
                                    return {
                                        .param_usage = TypeBinding::ParamUsage{
                                            .make_strings = [csharp_type, fix_input, MaybePrependRvalueTag](const std::string &name, bool /*have_useless_defarg*/)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .dllimport_decl_params = {{.type = csharp_type + " *", .name = name}},
                                                    .csharp_decl_params = MaybePrependRvalueTag(name, {{.type = "ref " + csharp_type, .name = name}}),
                                                    .scope_open = "fixed (" + csharp_type + " *__ptr_" + name + " = &" + name + ")\n{\n",
                                                    .extra_statements = fix_input ? fix_input(name) : "",
                                                    .dllimport_args = "__ptr_" + name,
                                                    .scope_close = "}\n",
                                                };
                                            },
                                        },
                                        // This one could be rewritten to use our `Mut_T` wrapper (if we decide to not remove those).
                                        // That could be faster than this suspicious copying of the value into a local variable.
                                        .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                            .make_strings = [this, csharp_type, fix_input, MaybePrependRvalueTag](const std::string &name, bool /*have_useless_defarg*/)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .dllimport_decl_params = {{.type = csharp_type + " *", .name = name}},
                                                    // Must pass a class because C# `ref` parameters can't have default arguments, and and we can't just tell the user
                                                    //   to pass a placeholder, because we might have proper default arguments before this one, so omitting the default argument here
                                                    //   would cause a compilation error.
                                                    .csharp_decl_params = MaybePrependRvalueTag(name, {{.type = RequestHelper("InOut") + "<" + csharp_type + ">?", .name = name, .default_arg = "null"}}),
                                                    .extra_statements =
                                                        csharp_type + " __value_" + name + " = " + name + " is not null ? " + name + ".Value : default(" + csharp_type + ");\n" +
                                                        (fix_input ? fix_input("__value_" + name) : ""),
                                                    .dllimport_args = name + " is not null ? &__value_" + name + " : null",
                                                    .extra_statements_after = "if (" + name + " is not null) " + name + ".Value = __value_" + name + ";\n",
                                                };
                                            },
                                        },
                                        .return_usage = TypeBinding::ReturnUsage{
                                            .dllimport_return_type = csharp_type + " *",
                                            .csharp_return_type =
                                                return_ref_wrapper
                                                ? RequestHelper("Ref") + "<" + csharp_type + ">"
                                                : "ref " + csharp_type,
                                            .make_return_statements = [this, csharp_type, return_ref_wrapper](const std::string &target, const std::string &expr)
                                            {
                                                if (return_ref_wrapper)
                                                    return target + " new " + RequestHelper("Ref") + "<" + csharp_type + ">(" + expr + ");";
                                                else
                                                    return target + " ref *" + expr + ";";
                                            },
                                        },
                                    };
                                }
                                else
                                {
                                    return {
                                        .param_usage = TypeBinding::ParamUsage{
                                            .make_strings = [csharp_type, fix_input, add_in, MaybePrependRvalueTag](const std::string &name, bool /*have_useless_defarg*/)
                                            {
                                                TypeBinding::ParamUsage::Strings ret{
                                                    .dllimport_decl_params = {{.type = csharp_type + " *", .name = name}}, // No const pointers in C#.
                                                    .csharp_decl_params = MaybePrependRvalueTag(name, {{.type = (add_in ? "in " : "") + csharp_type, .name = name}}),
                                                    .extra_statements = fix_input ? fix_input(name) : "",
                                                    .dllimport_args = "&" + name,
                                                };

                                                if (add_in)
                                                {
                                                    // For some reason I'm unable to directly take addresses of `in` struct parameters, so I have to use the `fixed` block.
                                                    ret.scope_open = "fixed (" + csharp_type + " *__ptr_" + name + " = &" + name + ")\n{\n";
                                                    ret.dllimport_args = "__ptr_" + name;
                                                    ret.scope_close = "}\n";
                                                }

                                                return ret;
                                            },
                                        },
                                        .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                            .make_strings = [csharp_type, fix_input, MaybePrependRvalueTag](const std::string &name, bool /*have_useless_defarg*/)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .dllimport_decl_params = {{.type = csharp_type + " *", .name = name}}, // No const pointers in C#.
                                                    .csharp_decl_params = MaybePrependRvalueTag(name, {{.type = csharp_type + "?", .name = name, .default_arg = "null"}}),
                                                    .extra_statements =
                                                        csharp_type + " __deref_" + name + " = " + name + ".GetValueOrDefault();\n" +
                                                        (fix_input ? fix_input("__deref_" + name) : ""),
                                                    .dllimport_args = name + ".HasValue ? &__deref_" + name + " : null",
                                                };
                                            },
                                        },
                                        .return_usage = TypeBinding::ReturnUsage{
                                            // Since here we return a non-reference, we don't insert a comment about it being an rvalue reference.
                                            .dllimport_return_type = csharp_type + " *",
                                            .csharp_return_type = (return_ref_instead_of_by_value ? (return_ref_wrapper ? RequestHelper("ConstRef") + "<" + csharp_type + ">" : "ref readonly " + csharp_type) : csharp_type),
                                            .make_return_statements = [return_ref_instead_of_by_value, return_ref_wrapper](const std::string &target, const std::string &expr)
                                            {
                                                if (return_ref_instead_of_by_value && return_ref_wrapper)
                                                    return target + " new(" + expr + ");";
                                                else
                                                    return target + (return_ref_instead_of_by_value ? " ref" : "") + " *" + expr + ";";
                                            },
                                        },
                                    };
                                }
                            };

                            return std::visit(Overload{
                                [&](const CInterop::TypeKinds::Invalid &) -> const TypeBinding *
                                {
                                    return nullptr;
                                },
                                [&](const CInterop::TypeKinds::Void &) -> const TypeBinding *
                                {
                                    return nullptr;
                                },
                                [&](const CInterop::TypeKinds::EmptyTag &) -> const TypeBinding *
                                {
                                    return nullptr;
                                },
                                [&](const CInterop::TypeKinds::EmptyTagPtr &) -> const TypeBinding *
                                {
                                    return nullptr;
                                },
                                [&](const CInterop::TypeKinds::Arithmetic &) -> const TypeBinding *
                                {
                                    // Arithmetic types.
                                    // This includes `bool`. From what I understand, only by-value bool is special-cased to be passed as `int32_t`, and pointers to `bool` work fine.
                                    auto csharp_type = CToCSharpPrimitiveTypeOpt(cpp_underlying_type_str, true);
                                    if (!csharp_type)
                                        throw std::runtime_error("Type `" + cpp_type_str + "` is marked as a reference to an arithmetic type, but we don't know this arithmetic type.");
                                    return CreateBinding(MakeScalarRefBinding(std::string(*csharp_type)));
                                },
                                [&](const CInterop::TypeKinds::Enum &underlying_enum) -> const TypeBinding *
                                {
                                    if (!cpp_underlying_type.IsOnlyQualifiedName())
                                        throw std::runtime_error("The underlying type of the reference is marked as `TypeKinds::Enum`, but the type name isn't just a qualified name.");

                                    const std::string csharp_underlying_enum_type = CppToCSharpEnumName(cpp_underlying_type.simple_type.name);
                                    const bool underlying_is_bool = c_desc.platform_info.FindPrimitiveType(underlying_enum.underlying_type)->kind == PrimitiveTypeInfo::Kind::boolean;

                                    return CreateBinding(MakeScalarRefBinding(csharp_underlying_enum_type,
                                        // If the underlying type was bool in C/C++, insert code to clamp out-of-range inputs.
                                        underlying_is_bool
                                        ? std::function([csharp_underlying_enum_type](const std::string &name){return "if ((byte)" + name + " > 1) " + name + " = (" + csharp_underlying_enum_type + ")1;\n";})
                                        : nullptr
                                    ));
                                },
                                [&](const CInterop::TypeKinds::Class &elem) -> const TypeBinding *
                                {
                                    if (!cpp_underlying_type.IsOnlyQualifiedName())
                                        throw std::runtime_error("The referenced type is marked `TypeKinds::Class`, but its name isn't just a qualified name.");

                                    const bool is_shared_ptr = cpp_underlying_type.simple_type.name.Equals(cpp_name_shared_ptr, cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target);
                                    const cppdecl::Type *shared_ptr_targ = is_shared_ptr ? cpp_underlying_type.simple_type.name.parts.at(1).template_args.value().args.at(0).AsType() : nullptr;
                                    const bool is_transparent_shared_ptr = shared_ptr_targ && TypeIsCppClass(*shared_ptr_targ);

                                    if (elem.kind == CInterop::ClassKind::exposed_struct && !is_transparent_shared_ptr && !bool(flags & TypeBindingFlags::use_heap_wrappers_for_exposed_structs))
                                    {
                                        // An exposed struct, and not a shared pointer.

                                        // Note, this must match what `ClassifyParamManagedKind()` is returning for references.
                                        return CreateBinding(MakeScalarRefBinding(CppToCSharpExposedStructName(cpp_type.simple_type.name), nullptr, true));
                                    }
                                    else
                                    {
                                        // If this is a transparent `shared_ptr` (i.e. pointing to a class storing one), this its target type.
                                        // Otherwise this is the original referenced type.
                                        const cppdecl::Type &cpp_effective_type = is_transparent_shared_ptr ? *shared_ptr_targ : cpp_type;

                                        const std::string csharp_type = CppToCSharpClassName(cpp_effective_type.simple_type.name, is_const);
                                        const std::string csharp_underlying_ptr = is_transparent_shared_ptr ? "_UnderlyingSharedPtr" : "_UnderlyingPtr";
                                        const std::string csharp_underlying_ptr_type = csharp_type + (is_transparent_shared_ptr ? "._UnderlyingShared" : "._Underlying") + " *";

                                        if (!is_rvalue_ref)
                                        {
                                            return CreateBinding({
                                                .param_usage = TypeBinding::ParamUsage{
                                                    .make_strings = [csharp_type, csharp_underlying_ptr_type, csharp_underlying_ptr](const std::string &name, bool /*have_useless_defarg*/)
                                                    {
                                                        return TypeBinding::ParamUsage::Strings{
                                                            .dllimport_decl_params = {{.type = csharp_underlying_ptr_type, .name = name}},
                                                            .csharp_decl_params = {{.type = csharp_type, .name = name}},
                                                            .can_be_kept_alive = true,
                                                            .keep_other_alive = TypeBinding::KeepAliveUsage{.object = name},
                                                            .dllimport_args = name + "." + csharp_underlying_ptr,
                                                        };
                                                    },
                                                },
                                                .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                                    .make_strings = [csharp_type, csharp_underlying_ptr_type, csharp_underlying_ptr](const std::string &name, bool /*have_useless_defarg*/)
                                                    {
                                                        return TypeBinding::ParamUsage::Strings{
                                                            .dllimport_decl_params = {{.type = csharp_underlying_ptr_type, .name = name}},
                                                            .csharp_decl_params = {{.type = csharp_type + "?", .name = name, .default_arg = "null"}},
                                                            .can_be_kept_alive = true,
                                                            .keep_other_alive = TypeBinding::KeepAliveUsage{
                                                                .cond = name + " is not null",
                                                                .object = name,
                                                            },
                                                            .dllimport_args = name + " is not null ? " + name + "." + csharp_underlying_ptr + " : null",
                                                        };
                                                    },
                                                },
                                                .return_usage = TypeBinding::ReturnUsage{
                                                    .dllimport_return_type = csharp_underlying_ptr_type,
                                                    .csharp_return_type = csharp_type,
                                                    .can_be_kept_alive = true,
                                                    .keep_other_alive = [](const std::string &name) -> TypeBinding::KeepAliveUsage {return {.object = name};},
                                                    .make_return_statements = [](const std::string &target, const std::string &expr)
                                                    {
                                                        return target + " new(" + expr + ", is_owning: false);";
                                                    },
                                                },
                                            });
                                        }
                                        else
                                        {
                                            const auto CSharpMovedType = [this, csharp_type]
                                            {
                                                return RequestHelper("_Moved") + "<" + csharp_type + ">";
                                            };

                                            return CreateBinding({
                                                .param_usage = TypeBinding::ParamUsage{
                                                    .make_strings = [CSharpMovedType, csharp_underlying_ptr_type, csharp_underlying_ptr](const std::string &name, bool /*have_useless_defarg*/)
                                                    {
                                                        return TypeBinding::ParamUsage::Strings{
                                                            .dllimport_decl_params = {{.type = csharp_underlying_ptr_type, .name = name}},
                                                            .csharp_decl_params = {{.type = CSharpMovedType(), .name = name}},
                                                            .can_be_kept_alive = true,
                                                            .keep_other_alive = TypeBinding::KeepAliveUsage{
                                                                .object = name + ".Value",
                                                            },
                                                            .dllimport_args = name + ".Value." + csharp_underlying_ptr,
                                                        };
                                                    },
                                                },
                                                .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                                    .make_strings = [CSharpMovedType, csharp_underlying_ptr_type, csharp_underlying_ptr](const std::string &name, bool /*have_useless_defarg*/)
                                                    {
                                                        return TypeBinding::ParamUsage::Strings{
                                                            .dllimport_decl_params = {{.type = csharp_underlying_ptr_type, .name = name}},
                                                            .csharp_decl_params = {{.type = CSharpMovedType() + "?", .name = name, .default_arg = "null"}},
                                                            .can_be_kept_alive = true,
                                                            .keep_other_alive = TypeBinding::KeepAliveUsage{
                                                                .cond = name + ".HasValue",
                                                                .object = name + ".Value",
                                                            },
                                                            .dllimport_args = name + ".HasValue ? " + name + ".Value.Value." + csharp_underlying_ptr + " : null",
                                                        };
                                                    },
                                                },
                                                .return_usage = TypeBinding::ReturnUsage{
                                                    .dllimport_return_type = csharp_underlying_ptr_type,
                                                    .csharp_return_type = CSharpMovedType(),
                                                    .can_be_kept_alive = true,
                                                    .keep_other_alive = [](const std::string &name) -> TypeBinding::KeepAliveUsage {return {.object = name + ".Value"};},
                                                    .make_return_statements = [
                                                        this,
                                                        csharp_type
                                                    ](const std::string &target, const std::string &expr)
                                                    {
                                                        // Since this is an rvalue reference (rather than a by-value return),
                                                        //   the move here happens regardless of `no_move_in_by_value_return`.
                                                        return target + " " + RequestHelper("Move") + "(new " + csharp_type + "(" + expr + ", is_owning: false));";
                                                    },
                                                },
                                            });
                                        }
                                    }

                                    return nullptr;
                                },
                            }, underlying_type_desc->var);
                        }();
                        if (ret)
                            return ret;

                        // Perhaps a reference to a fixed-size type?
                        // You might be wondering, how is it the case that scalars don't fall down here too? (If they happen to miss their binding due to not being used directly?)
                        // This is because in the C generator we always emit the bindings for the pointer and reference target types to avoid this.
                        cppdecl::Type ref_target_type = cpp_type;
                        ref_target_type.RemoveModifier();
                        if (auto csharp_type = CppToCSharpKnownSizeType(ref_target_type))
                        {
                            const std::string ref_param = cpp_type.IsConst(1) ? "in " : "ref ";
                            const std::string ref_ret = cpp_type.IsConst(1) ? "ref readonly " : "ref ";

                            std::string csharp_type_ptr = *csharp_type;
                            if (!csharp_type_ptr.ends_with('*'))
                                csharp_type_ptr += ' ';
                            csharp_type_ptr += '*';

                            return CreateBinding({
                                .param_usage = TypeBinding::ParamUsage{
                                    .make_strings = [csharp_type, csharp_type_ptr, ref_param, MaybePrependRvalueTag](const std::string &name, bool /*have_useless_defarg*/)
                                    {
                                        return TypeBinding::ParamUsage::Strings{
                                            .dllimport_decl_params = {{.type = csharp_type_ptr, .name = name}},
                                            .csharp_decl_params = MaybePrependRvalueTag(name, {{.type = ref_param + *csharp_type, .name = name}}),
                                            .scope_open = "fixed (" + csharp_type_ptr + "__ptr_" + name + " = &" + name + ")\n{\n",
                                            .dllimport_args = "__ptr_" + name,
                                            .scope_close = "}\n",
                                        };
                                    },
                                },
                                // I don't know a non-stupid way of implementing all this (as in without copying the array, and without a raw pointer).
                                // I'm passing a raw pointer here, better this than copying.
                                .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                    .make_strings = [csharp_type_ptr, MaybePrependRvalueTag](const std::string &name, bool /*have_useless_defarg*/)
                                    {
                                        return TypeBinding::ParamUsage::Strings{
                                            .dllimport_decl_params = {{.type = csharp_type_ptr, .name = name}},
                                            .csharp_decl_params = MaybePrependRvalueTag(name, {{.type = csharp_type_ptr, .name = name, .default_arg = "null"}}),
                                            .dllimport_args = name,
                                        };
                                    },
                                },
                                .return_usage = TypeBinding::ReturnUsage{
                                    .extra_comment = "/// In C++ this function returns an rvalue reference.\n",
                                    .dllimport_return_type = csharp_type_ptr,
                                    .csharp_return_type = ref_ret + *csharp_type,
                                    .make_return_statements = [](const std::string &target, const std::string &expr){return target + " ref *" + expr + ";";},
                                },
                            });
                        }

                        return nullptr;
                    }

                    // Pointers to...
                    if (cpp_type.Is<cppdecl::Pointer>())
                    {
                        // A generic pointer.

                        const TypeBinding *ret = [&]() -> const TypeBinding *
                        {
                            if (cpp_type.modifiers.size() != 1)
                                return nullptr;

                            cppdecl::Type cpp_underlying_type = cpp_type;
                            cpp_underlying_type.RemoveModifier();
                            const bool is_const = cpp_underlying_type.IsConst();
                            cpp_underlying_type.RemoveQualifiers(cppdecl::CvQualifiers::const_);

                            const std::string cpp_underlying_type_str = CppdeclToCode(cpp_underlying_type);

                            const CInterop::TypeDesc *underlying_type_desc = c_desc.FindTypeOpt(cpp_underlying_type_str);
                            if (!underlying_type_desc)
                                return nullptr;

                            // This is for arithmetic types and enums.
                            // If `fix_input` is specified, it should return an extra statement for parameters' `extra_statements`.
                            // The result should be terminated with a newline, and you can read/write `name` in your statement.
                            // NOTE: The `fix_input` lambda is preserved, make sure it doesn't dangle.
                            auto MakeScalarPtrBinding = [&](const cppdecl::Type &cpp_pointer_type, const std::string &csharp_type, std::function<std::string(const std::string &name)> fix_input = nullptr, bool is_exposed_struct = false) -> TypeBinding
                            {
                                if (bool(flags & (TypeBindingFlags::pointer_to_array)))
                                {
                                    std::string csharp_ptr_type = csharp_type;
                                    if (!csharp_ptr_type.ends_with('*'))
                                        csharp_ptr_type += ' ';
                                    csharp_ptr_type += '*';

                                    cppdecl::Type cpp_unbounded_array_type = cpp_pointer_type;
                                    assert(cpp_unbounded_array_type.Is<cppdecl::Pointer>());
                                    cpp_unbounded_array_type.RemoveModifier();
                                    cpp_unbounded_array_type.AddModifier(cppdecl::Array{});

                                    auto strings = RequestCSharpArrayType(cpp_unbounded_array_type);

                                    return {
                                        // For now, parameters are still plain pointers. We could eventually replace then with the unbounded array wrappers.
                                        .param_usage = TypeBinding::ParamUsage{
                                            .make_strings = [is_const, csharp_ptr_type](const std::string &name, bool have_useless_defarg)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .extra_comment = "/// Parameter `" + name + "` is " + (is_const ? "a read-only pointer" : "a mutable pointer") + ".\n",
                                                    .dllimport_decl_params = {{.type = csharp_ptr_type, .name = name}},
                                                    .csharp_decl_params = {{.type = csharp_ptr_type, .name = name, .default_arg = (have_useless_defarg ? std::optional<std::string>("null") : std::nullopt)}},
                                                    .dllimport_args = name,
                                                };
                                            },
                                        },
                                        .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                            .make_strings = [is_const, csharp_ptr_type](const std::string &name, bool /*have_useless_defarg*/)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .extra_comment = "/// Parameter `" + name + "` is " + (is_const ? "a read-only pointer" : "a mutable pointer") + ".\n",
                                                    .dllimport_decl_params = {{.type = csharp_ptr_type + "*", .name = name}},
                                                    .csharp_decl_params = {{.type = csharp_ptr_type + "*", .name = name, .default_arg = "null"}},
                                                    .dllimport_args = name,
                                                };
                                            },
                                        },
                                        .return_usage = TypeBinding::ReturnUsage{
                                            .dllimport_return_type = csharp_ptr_type,
                                            .csharp_return_type = strings.csharp_type,
                                            .make_return_statements = [strings](const std::string &target, const std::string &expr)
                                            {
                                                return target + " " + strings.construct(expr) + ";";
                                            },
                                        },
                                    };
                                }
                                else if (bool(flags & (TypeBindingFlags::replace_ref_with_ptr)))
                                {
                                    std::string csharp_ptr_type = csharp_type;
                                    if (!csharp_ptr_type.ends_with('*'))
                                        csharp_ptr_type += ' ';
                                    csharp_ptr_type += '*';

                                    return {
                                        .param_usage = TypeBinding::ParamUsage{
                                            .make_strings = [is_const, csharp_ptr_type](const std::string &name, bool have_useless_defarg)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .extra_comment = "/// Parameter `" + name + "` is " + (is_const ? "a read-only pointer" : "a mutable pointer") + ".\n",
                                                    .dllimport_decl_params = {{.type = csharp_ptr_type, .name = name}},
                                                    .csharp_decl_params = {{.type = csharp_ptr_type, .name = name, .default_arg = (have_useless_defarg ? std::optional<std::string>("null") : std::nullopt)}},
                                                    .dllimport_args = name,
                                                };
                                            },
                                        },
                                        .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                            .make_strings = [is_const, csharp_ptr_type](const std::string &name, bool /*have_useless_defarg*/)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .extra_comment = "/// Parameter `" + name + "` is " + (is_const ? "a read-only pointer" : "a mutable pointer") + ".\n",
                                                    .dllimport_decl_params = {{.type = csharp_ptr_type + "*", .name = name}},
                                                    .csharp_decl_params = {{.type = csharp_ptr_type + "*", .name = name, .default_arg = "null"}},
                                                    .dllimport_args = name,
                                                };
                                            },
                                        },
                                        .return_usage = TypeBinding::ReturnUsage{
                                            .extra_comment = std::string("/// Returns ") + (is_const ? "a read-only pointer" : "a mutable pointer") + ".\n",
                                            .dllimport_return_type = csharp_ptr_type,
                                            .csharp_return_type = csharp_ptr_type,
                                        },
                                    };
                                }
                                else if (!is_const)
                                {
                                    return {
                                        .param_usage = TypeBinding::ParamUsage{
                                            .make_strings = [this, csharp_type, fix_input](const std::string &name, bool have_useless_defarg)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .dllimport_decl_params = {{.type = csharp_type + " *", .name = name}},
                                                    .csharp_decl_params = {{.type = RequestHelper("InOut") + "<" + csharp_type + ">?", .name = name, .default_arg = (have_useless_defarg ? std::optional<std::string>("null") : std::nullopt)}},
                                                    .extra_statements =
                                                        csharp_type + " __value_" + name + " = " + name + " is not null ? " + name + ".Value : default(" + csharp_type + ");\n" +
                                                        (fix_input ? fix_input("__value_" + name) : ""),
                                                    .dllimport_args = name + " is not null ? &__value_" + name + " : null",
                                                    .extra_statements_after = "if (" + name + " is not null) " + name + ".Value = __value_" + name + ";\n",
                                                };
                                            },
                                        },
                                        .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                            .make_strings = [this, csharp_type, fix_input](const std::string &name, bool /*have_useless_defarg*/)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .dllimport_decl_params = {{.type = csharp_type + " **", .name = name}},
                                                    .csharp_decl_params = {{.type = RequestHelper("_InOutOpt") + "<" + csharp_type + ">?", .name = name, .default_arg = "null"}},
                                                    .extra_statements =
                                                        csharp_type + " __value_" + name + " = " + name + " is not null && " + name + ".Opt is not null ? " + name + ".Opt.Value : default(" + csharp_type + ");\n" +
                                                        csharp_type + " *__valueptr_" + name + " = " + name + " is not null && " + name + ".Opt is not null ? &__value_" + name + " : null;\n" +
                                                        (fix_input ? fix_input("__value_" + name) : ""),
                                                    .dllimport_args = name + " is not null ? &__valueptr_" + name + " : null",
                                                    .extra_statements_after = "if (" + name + " is not null && " + name + ".Opt is not null) " + name + ".Opt.Value = __value_" + name + ";\n",
                                                };
                                            },
                                        },
                                        .return_usage = TypeBinding::ReturnUsage{
                                            .needs_temporary_variable = true,
                                            .dllimport_return_type = csharp_type + " *",
                                            .csharp_return_type = RequestHelper("Ref") + "<" + csharp_type + ">?",
                                            .make_return_statements = [this, csharp_type](const std::string &target, const std::string &expr)
                                            {
                                                return target + " " + expr + " is not null ? new " + RequestHelper("Ref") + "<" + csharp_type + ">(" + expr + ") : null;";
                                            },
                                        },
                                    };
                                }
                                else
                                {
                                    return {
                                        .param_usage = TypeBinding::ParamUsage{
                                            .make_strings = [csharp_type, fix_input](const std::string &name, bool have_useless_defarg)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .dllimport_decl_params = {{.type = csharp_type + " *", .name = name}}, // No const pointers in C#.
                                                    .csharp_decl_params = {{.type = csharp_type + "?", .name = name, .default_arg = (have_useless_defarg ? std::optional<std::string>("null") : std::nullopt)}},
                                                    .extra_statements =
                                                        csharp_type + " __deref_" + name + " = " + name + ".GetValueOrDefault();\n" +
                                                        (fix_input ? fix_input("__deref_" + name) : ""),
                                                    .dllimport_args = name + ".HasValue ? &__deref_" + name + " : null",
                                                };
                                            },
                                        },
                                        .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                            .make_strings = [this, csharp_type, fix_input](const std::string &name, bool /*have_useless_defarg*/)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .dllimport_decl_params = {{.type = csharp_type + " **", .name = name}}, // No const pointers in C#.
                                                    .csharp_decl_params = {{.type = RequestHelper("_InOpt") + "<" + csharp_type + ">?", .name = name, .default_arg = "null"}},
                                                    .extra_statements =
                                                        csharp_type + " __value_" + name + " = " + name + " is not null && " + name + ".Opt is not null ? " + name + ".Opt.Value : default(" + csharp_type + ");\n" +
                                                        csharp_type + " *__valueptr_" + name + " = " + name + " is not null && " + name + ".Opt is not null ? &__value_" + name + " : null;\n" +
                                                        (fix_input ? fix_input("__value_" + name) : ""),
                                                    .dllimport_args = name + " is not null ? &__valueptr_" + name + " : null",
                                                };
                                            },
                                        },
                                        .return_usage = TypeBinding::ReturnUsage{
                                            .needs_temporary_variable = true,
                                            .dllimport_return_type = csharp_type + " *",
                                            .csharp_return_type = csharp_type + "?",
                                            .make_return_statements = [is_exposed_struct](const std::string &target, const std::string &expr)
                                            {
                                                if (is_exposed_struct)
                                                    return "if (" + expr + " is not null) " + target + " *" + expr + "; else " + target + " null;"; // The ternary below doesn't work with structs, since apparently dereferencing the struct pointer produces a non-nullable ref, and `? :` doesn't that mixing that with `null` in the other operand. Weird.
                                                else
                                                    return target + " " + expr + " is not null ? *" + expr + " : null;";
                                            },
                                        },
                                    };
                                }
                            };

                            return std::visit(Overload{
                                [&](const CInterop::TypeKinds::Invalid &) -> const TypeBinding *
                                {
                                    return nullptr;
                                },
                                [&](const CInterop::TypeKinds::Void &) -> const TypeBinding *
                                {
                                    return CreateBinding({
                                        .param_usage = TypeBinding::ParamUsage{
                                            .make_strings = [is_const](const std::string &name, bool have_useless_defarg)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .extra_comment = "/// Parameter `" + name + "` is " + (is_const ? "a read-only pointer" : "a mutable pointer") + ".\n",
                                                    .dllimport_decl_params = {{.type = "void *", .name = name}},
                                                    .csharp_decl_params = {{.type = "void *", .name = name, .default_arg = (have_useless_defarg ? std::optional<std::string>("null") : std::nullopt)}},
                                                    .dllimport_args = name,
                                                };
                                            },
                                        },
                                        .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                            .make_strings = [is_const](const std::string &name, bool /*have_useless_defarg*/)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .extra_comment = "/// Parameter `" + name + "` is " + (is_const ? "a read-only pointer" : "a mutable pointer") + ".\n",
                                                    .dllimport_decl_params = {{.type = "void **", .name = name}},
                                                    .csharp_decl_params = {{.type = "void **", .name = name, .default_arg = "null"}},
                                                    .dllimport_args = name,
                                                };
                                            },
                                        },
                                        .return_usage = TypeBinding::ReturnUsage{
                                            .extra_comment = std::string("/// Returns ") + (is_const ? "a read-only pointer" : "a mutable pointer") + ".\n",
                                            .dllimport_return_type = "void *",
                                            .csharp_return_type = "void *",
                                        },
                                    });
                                },
                                [&](const CInterop::TypeKinds::EmptyTag &) -> const TypeBinding *
                                {
                                    return nullptr;
                                },
                                [&](const CInterop::TypeKinds::EmptyTagPtr &) -> const TypeBinding *
                                {
                                    return nullptr;
                                },
                                [&](const CInterop::TypeKinds::Arithmetic &) -> const TypeBinding *
                                {
                                    // Arithmetic types.
                                    // This includes `bool`. From what I understand, only by-value bool is special-cased to be passed as `int32_t`, and pointers to `bool` work fine.
                                    auto csharp_type = CToCSharpPrimitiveTypeOpt(cpp_underlying_type_str, true);
                                    if (!csharp_type)
                                        throw std::runtime_error("Type `" + cpp_type_str + "` is marked as a pointer to an arithmetic type, but we don't know this arithmetic type.");
                                    return CreateBinding(MakeScalarPtrBinding(cpp_type, std::string(*csharp_type)));
                                },
                                [&](const CInterop::TypeKinds::Enum &underlying_enum) -> const TypeBinding *
                                {
                                    if (!cpp_underlying_type.IsOnlyQualifiedName())
                                        throw std::runtime_error("The underlying type of the reference is marked as `TypeKinds::Enum`, but the type name isn't just a qualified name.");

                                    const std::string csharp_underlying_enum_type = CppToCSharpEnumName(cpp_underlying_type.simple_type.name);
                                    const bool underlying_is_bool = c_desc.platform_info.FindPrimitiveType(underlying_enum.underlying_type)->kind == PrimitiveTypeInfo::Kind::boolean;

                                    return CreateBinding(MakeScalarPtrBinding(cpp_type, csharp_underlying_enum_type,
                                        // If the underlying type was bool in C/C++, insert code to clamp out-of-range inputs.
                                        underlying_is_bool
                                        ? std::function([csharp_underlying_enum_type](const std::string &name){return "if ((byte)" + name + " > 1) " + name + " = (" + csharp_underlying_enum_type + ")1;\n";})
                                        : nullptr
                                    ));
                                },
                                [&](const CInterop::TypeKinds::Class &elem) -> const TypeBinding *
                                {
                                    if (!cpp_underlying_type.IsOnlyQualifiedName())
                                        throw std::runtime_error("The referenced type is marked `TypeKinds::Class`, but its name isn't just a qualified name.");

                                    // Special handling for pointers marked as pointers to arrays.
                                    // Note that we don't include `replace_ref_with_ptr` here, since this uses our unbounded array wrappers instead of raw pointers.
                                    // Instead for exposed structs we let this fall through to `MakeScalarPtrBinding()`, which handles this properly.
                                    if (bool(flags & TypeBindingFlags::pointer_to_array))
                                    {
                                        // We bind those pointers as unbounded arrays.
                                        cppdecl::Type cpp_unbounded_array_type = cpp_type;
                                        cpp_unbounded_array_type.RemoveModifier(); // Remove pointer.
                                        cpp_unbounded_array_type.AddModifier(cppdecl::Array{});
                                        const Generator::ArrayStrings csharp_unbounded_array = RequestCSharpArrayType(cpp_unbounded_array_type);
                                        const std::string csharp_ptr_type =
                                            csharp_unbounded_array.csharp_underlying_ptr_target_type +
                                            (csharp_unbounded_array.csharp_underlying_ptr_target_type.ends_with('*') ? "" : " ") + '*';

                                        return CreateBinding({
                                            .param_usage = TypeBinding::ParamUsage{
                                                .make_strings = [csharp_unbounded_array, csharp_ptr_type](const std::string &name, bool have_useless_defarg)
                                                {
                                                    return TypeBinding::ParamUsage::Strings{
                                                        .dllimport_decl_params = {{.type = csharp_ptr_type, .name = name}},
                                                        .csharp_decl_params = {{.type = csharp_unbounded_array.csharp_type, .name = name, .default_arg = (have_useless_defarg ? std::optional<std::string>("null") : std::nullopt)}},
                                                        .dllimport_args = name + ".Ptr",
                                                    };
                                                },
                                            },
                                            .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                                .make_strings = [csharp_unbounded_array, csharp_ptr_type](const std::string &name, bool /*have_useless_defarg*/)
                                                {
                                                    return TypeBinding::ParamUsage::Strings{
                                                        .dllimport_decl_params = {{.type = csharp_ptr_type + "*", .name = name}},
                                                        .csharp_decl_params = {{.type = csharp_unbounded_array.csharp_type + "?", .name = name, .default_arg = "null"}},
                                                        .extra_statements = csharp_ptr_type + "__ptr_" + name + " = " + name + " is not null ? " + name + ".Ptr : null;\n",
                                                        .dllimport_args = name + " is not null ? &__ptr_" + name + " : null",
                                                    };
                                                },
                                            },
                                            .return_usage = TypeBinding::ReturnUsage{
                                                .needs_temporary_variable = true,
                                                .dllimport_return_type = csharp_ptr_type,
                                                .csharp_return_type = csharp_unbounded_array.csharp_type, // Do we want to make this optional (`?`) here and for parameters without default arguments?
                                                .make_return_statements = [](const std::string &target, const std::string &expr)
                                                {
                                                    return target + " new(" + expr + ");";
                                                },
                                            },
                                        });
                                    }

                                    const bool is_shared_ptr = cpp_underlying_type.simple_type.name.Equals(cpp_name_shared_ptr, cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target);
                                    const cppdecl::Type *shared_ptr_targ = is_shared_ptr ? cpp_underlying_type.simple_type.name.parts.at(1).template_args.value().args.at(0).AsType() : nullptr;
                                    const bool is_transparent_shared_ptr = shared_ptr_targ && TypeIsCppClass(*shared_ptr_targ);

                                    if (elem.kind == CInterop::ClassKind::exposed_struct && !is_transparent_shared_ptr)
                                    {
                                        // An exposed struct, and not a shared pointer.

                                        return CreateBinding(MakeScalarPtrBinding(cpp_type, CppToCSharpExposedStructName(cpp_type.simple_type.name), {}, true));
                                    }
                                    else
                                    {
                                        // If this is a transparent `shared_ptr` (i.e. pointing to a class storing one), this its target type.
                                        // Otherwise this is the original referenced type.
                                        const cppdecl::Type &cpp_effective_type = is_transparent_shared_ptr ? *shared_ptr_targ : cpp_type;

                                        const std::string csharp_type = CppToCSharpClassName(cpp_effective_type.simple_type.name, is_const);
                                        const std::string csharp_underlying_ptr = is_transparent_shared_ptr ? "_UnderlyingSharedPtr" : "_UnderlyingPtr";
                                        const std::string csharp_underlying_ptr_type = csharp_type + (is_transparent_shared_ptr ? "._UnderlyingShared" : "._Underlying") + " *";
                                        const std::string csharp_in_opt_mut = CppToCSharpInOptMutNontrivialHelperName(cpp_effective_type.simple_type.name);
                                        const std::string csharp_in_opt_const = CppToCSharpInOptConstNontrivialHelperName(cpp_effective_type.simple_type.name);

                                        return CreateBinding({
                                            .param_usage = TypeBinding::ParamUsage{
                                                .make_strings = [csharp_type, csharp_underlying_ptr_type, csharp_underlying_ptr](const std::string &name, bool have_useless_defarg)
                                                {
                                                    return TypeBinding::ParamUsage::Strings{
                                                        .dllimport_decl_params = {{.type = csharp_underlying_ptr_type, .name = name}},
                                                        .csharp_decl_params = {{.type = csharp_type + "?", .name = name, .default_arg = (have_useless_defarg ? std::optional<std::string>("null") : std::nullopt)}},
                                                        .can_be_kept_alive = true,
                                                        .keep_other_alive = TypeBinding::KeepAliveUsage{
                                                            .cond = name + " is not null",
                                                            .object = name,
                                                        },
                                                        .dllimport_args = name + " is not null ? " + name + "." + csharp_underlying_ptr + " : null",
                                                    };
                                                },
                                            },
                                            .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                                .make_strings = [is_const, csharp_in_opt_const, csharp_in_opt_mut, csharp_underlying_ptr_type, csharp_underlying_ptr](const std::string &name, bool /*have_useless_defarg*/)
                                                {
                                                    return TypeBinding::ParamUsage::Strings{
                                                        .dllimport_decl_params = {{.type = csharp_underlying_ptr_type + "*", .name = name}},
                                                        .csharp_decl_params = {{.type = (is_const ? csharp_in_opt_const : csharp_in_opt_mut) + "?", .name = name, .default_arg = "null"}},
                                                        .can_be_kept_alive = true,
                                                        .keep_other_alive = TypeBinding::KeepAliveUsage{
                                                            .cond = name + " is not null && " + name + ".Opt is not null",
                                                            .object = name + ".Opt",
                                                        },
                                                        .extra_statements = csharp_underlying_ptr_type + "__ptr_" + name + " = " + name + " is not null && " + name + ".Opt is not null ? " + name + ".Opt." + csharp_underlying_ptr + " : null;\n",
                                                        .dllimport_args = name + " is not null ? &__ptr_" + name + " : null",
                                                    };
                                                },
                                            },
                                            .return_usage = TypeBinding::ReturnUsage{
                                                .needs_temporary_variable = true,
                                                .dllimport_return_type = csharp_underlying_ptr_type,
                                                .csharp_return_type = csharp_type + "?",
                                                .can_be_kept_alive = true,
                                                .keep_other_alive = [](const std::string &name) -> TypeBinding::KeepAliveUsage {return {.cond = name + " is not null", .object = name};},
                                                .make_return_statements = [csharp_type](const std::string &target, const std::string &expr)
                                                {
                                                    return target + " " + expr + " is not null ? new " + csharp_type + "(" + expr + ", is_owning: false) : null;";
                                                },
                                            },
                                        });
                                    }
                                },
                            }, underlying_type_desc->var);
                        }();
                        if (ret)
                            return ret;

                        // Perhaps a pointer to a fixed-size type?
                        if (auto csharp_type = CppToCSharpKnownSizeType(cpp_type))
                        {
                            // I don't know a non-stupid way of implementing all this (as in without copying the array, and without a raw pointer).
                            // I'm passing a raw pointer here, better this than copying.
                            // And since this is always just a pointer, I don't need to handle `TypeBindingFlags::pointer_to_array`.
                            return CreateBinding({
                                .param_usage = TypeBinding::ParamUsage{
                                    .make_strings = [csharp_type](const std::string &name, bool have_useless_defarg)
                                    {
                                        return TypeBinding::ParamUsage::Strings{
                                            .dllimport_decl_params = {{.type = *csharp_type, .name = name}},
                                            .csharp_decl_params = {{.type = *csharp_type, .name = name, .default_arg = (have_useless_defarg ? std::optional<std::string>("null") : std::nullopt)}},
                                            .dllimport_args = name,
                                        };
                                    },
                                },
                                .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                    .make_strings = [csharp_type](const std::string &name, bool /*have_useless_defarg*/)
                                    {
                                        return TypeBinding::ParamUsage::Strings{
                                            .dllimport_decl_params = {{.type = *csharp_type + "*", .name = name}},
                                            .csharp_decl_params = {{.type = *csharp_type + "*", .name = name, .default_arg = "null"}},
                                            .dllimport_args = name,
                                        };
                                    },
                                },
                                .return_usage = TypeBinding::ReturnUsage{
                                    .dllimport_return_type = *csharp_type,
                                    .csharp_return_type = *csharp_type,
                                },
                            });
                        }

                        return nullptr;
                    }
                }
            }
            else
            {
                // With sugar.

                // Returns true if `cpp_type` matches `target_name` exactly, or is a const or rvalue ref to `target_name`.
                auto TypeMatchesExactlyOrConstOrRvalueRef = [&](const cppdecl::QualifiedName &target_name, cppdecl::QualifiedName::EqualsFlags eq_flags = {}) -> bool
                {
                    if (!cpp_type.simple_type.name.Equals(target_name, eq_flags))
                        return false; // The name itself doesn't match.

                    if (cpp_type.modifiers.empty())
                        return true; // Matches exactly.

                    if (cpp_type.modifiers.size() != 1)
                        return false;

                    if (!cpp_type.IsConst(1) && cpp_type.Is<cppdecl::Reference>() && cpp_type.As<cppdecl::Reference>()->kind == cppdecl::RefQualifier::lvalue)
                        return false; // A non-const lvalue reference.

                    return true;
                };


                // `std::optional.

                static const cppdecl::QualifiedName cpp_name_std_optional = cppdecl::QualifiedName{}.AddPart("std").AddPart("optional");

                if (TypeMatchesExactlyOrConstOrRvalueRef(cpp_name_std_optional, cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target))
                {
                    const cppdecl::Type &elem_type = *cpp_type.simple_type.name.parts.at(1).template_args.value().args.at(0).AsType();

                    const CInterop::TypeDesc *type_desc = c_desc.FindTypeOpt(CppdeclToCode(elem_type));
                    if (!type_desc)
                    {
                        assert(false); // This is some weird `std::optional` with an unknown element type.
                        return nullptr;
                    }

                    const bool is_class_with_pass_by_enum =
                        std::holds_alternative<CInterop::TypeKinds::Class>(type_desc->var) &&
                        std::get<CInterop::TypeKinds::Class>(type_desc->var).kind == CInterop::ClassKind::uses_pass_by_enum;

                    // Note, must try propagate sugar here.
                    // Because e.g. `std::optional<std::string> a` uses sugared parameters of the form `const char *a, const char *a_end`,
                    //   as opposed to passing the entire string in an unsugared manner.
                    const TypeBinding *elem_binding = GetTypeBindingOpt(elem_type, flags);
                    // If we didn't find a sugared binding (as is usually the case), fall back to a unsugared one.
                    if (!elem_binding && bool(flags & TypeBindingFlags::enable_sugar))
                        elem_binding = GetTypeBindingOpt(elem_type, flags & ~TypeBindingFlags::enable_sugar);

                    if (!elem_binding)
                        return nullptr; // No binding for the element type, abort.

                    TypeBinding ret;

                    // Param usage without the default argument.
                    // This is based on the usage of the underlying type WITH the default argument.
                    if (elem_binding->param_usage)
                    {
                        ret.param_usage = elem_binding->param_usage_with_default_arg;

                        ret.param_usage->make_strings = [
                            this,
                            next = std::move(ret.param_usage->make_strings),
                            is_class_with_pass_by_enum
                        ](const std::string &name, bool have_useless_defarg)
                        {
                            // Not propagating `have_useless_defarg` because usages with defarg never expect this parameter, it's only for usages without defarg.
                            auto strings = next(name, false);

                            // Remove C# default arguments.
                            if (!have_useless_defarg)
                            {
                                for (auto &param : strings.csharp_decl_params)
                                    param.default_arg.reset();
                            }

                            // Patch the pass-by enum to use `no_object` instead of `default_arg`.
                            if (is_class_with_pass_by_enum)
                            {
                                const std::string pass_by_old = RequestHelper("_PassBy") + ".default_arg";
                                const std::string pass_by_new = RequestHelper("_PassBy") + ".no_object";

                                strings.dllimport_args = Strings::Replace(strings.dllimport_args, pass_by_old, pass_by_new);
                            }

                            return strings;
                        };
                    }

                    // Param usage WITH default argument is entirely custom for classes with pass-by enums.
                    // For all other types, it should never be sugared (for those, only parameters WITHOUT default arguments can be sugared).
                    if (is_class_with_pass_by_enum)
                    {
                        const std::string by_value_opt_opt_helper = CppToCSharpByValueOptOptHelperName(elem_type.simple_type.name, false); // TODO: handle `shared_ptr` here!
                        const std::string csharp_type_mut = CppToCSharpClassName(elem_type.simple_type.name, false);
                        const std::string csharp_underlying_ptr_type = csharp_type_mut + "._Underlying *";

                        ret.param_usage_with_default_arg = TypeBinding::ParamUsage{
                            .make_strings = [this, by_value_opt_opt_helper, csharp_underlying_ptr_type](const std::string &name, bool /*have_useless_defarg*/)
                            {
                                return TypeBinding::ParamUsage::Strings{
                                    .dllimport_decl_params = {{.type = RequestHelper("_PassBy"), .name = name + "_pass_by"}, {.type = csharp_underlying_ptr_type, .name = name}},
                                    .csharp_decl_params = {{.type = by_value_opt_opt_helper + "?", .name = name, .default_arg = "null"}},
                                    .dllimport_args = name + " is not null ? " + name + ".PassByMode : " + RequestHelper("_PassBy") + ".default_arg, " + name + " is not null && " + name + ".Value is not null ? " + name + ".Value._UnderlyingPtr : null",
                                };
                            }
                        };
                    }

                    // The return usage is never sugared.

                    return CreateBinding(std::move(ret));
                }


                // `std::unique_ptr`.

                static const cppdecl::QualifiedName cpp_name_std_uniqueptr = cppdecl::QualifiedName{}.AddPart("std").AddPart("unique_ptr");

                if (TypeMatchesExactlyOrConstOrRvalueRef(cpp_name_std_uniqueptr, cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target))
                {
                    // `std::unique_ptr` takes pointer ownership when used as a parameter, or releases it when returned.

                    return CreateBinding({
                        .param_usage = TypeBinding::ParamUsage{
                            .make_strings = [](const std::string &name, bool have_useless_defarg)
                            {
                                return TypeBinding::ParamUsage::Strings{
                                    .dllimport_decl_params = {{.type = "void *", .name = name}},
                                    .csharp_decl_params = {{.type = "void *", .name = name, .default_arg = (have_useless_defarg ? std::optional<std::string>("null") : std::nullopt)}},
                                    .dllimport_args = name,
                                };
                            },
                        },
                        .param_usage_with_default_arg = TypeBinding::ParamUsage{
                            .make_strings = [](const std::string &name, bool /*have_useless_defarg*/)
                            {
                                return TypeBinding::ParamUsage::Strings{
                                    .dllimport_decl_params = {{.type = "void *", .name = name}},
                                    // `void *?` doesn't work, sadly. And neither does `Nullable<void *>`. We could provide a nicer syntax,
                                    //   but this situation is so rare that it's easier to just use `void **`.
                                    .csharp_decl_params = {{.type = "void **", .name = name, .default_arg = "null"}},
                                    .dllimport_args = name,
                                };
                            },
                        },
                        .return_usage = TypeBinding::ReturnUsage{
                            .dllimport_return_type = "void *",
                            .csharp_return_type = "void *",
                        },
                    });
                }


                // String-like:

                auto MakeStringLikeReadOnlyBinding = [&] -> TypeBinding
                {
                    return {
                        .param_usage = TypeBinding::ParamUsage{
                            .make_strings = [this, MaybePrependRvalueTag](const std::string &name, bool /*have_useless_defarg*/)
                            {
                                return TypeBinding::ParamUsage::Strings{
                                    .dllimport_decl_params = {{.type = "byte *", .name = name}, {.type = "byte *", .name = name + "_end"}},
                                    .csharp_decl_params = MaybePrependRvalueTag(name, {{.type = HaveCSharpFeatureSpans() ? "ReadOnlySpan<char>" : "string", .name = name}}),
                                    .scope_open =
                                        (
                                            HaveCSharpFeatureSpans()
                                            ?
                                                "byte[] __bytes_" + name + " = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(" + name + ".Length)];\n" +
                                                "int __len_" + name + " = System.Text.Encoding.UTF8.GetBytes(" + name + ", __bytes_" + name + ");\n"
                                                "fixed (byte *__ptr_" + name + " = __bytes_" + name + ")\n{\n"
                                            :
                                                "byte[] __bytes_" + name + " = System.Text.Encoding.UTF8.GetBytes(" + name + ");\n" +
                                                "fixed (byte *__ptr_" + name + " = __bytes_" + name + ")\n{\n"
                                        ),
                                    .dllimport_args = "__ptr_" + name + ", __ptr_" + name + " + " + (HaveCSharpFeatureSpans() ? "__len_" + name : "__bytes_" + name + ".Length"),
                                    .scope_close = "}\n",
                                };
                            },
                        },
                        .param_usage_with_default_arg = TypeBinding::ParamUsage{
                            .make_strings = [this, MaybePrependRvalueTag](const std::string &name, bool /*have_useless_defarg*/)
                            {
                                return TypeBinding::ParamUsage::Strings{
                                    .dllimport_decl_params = {{.type = "byte *", .name = name}, {.type = "byte *", .name = name + "_end"}},
                                    .csharp_decl_params = MaybePrependRvalueTag(name, {{.type = HaveCSharpFeatureSpans() ? RequestHelper("ReadOnlyCharSpanOpt") : "string?", .name = name, .default_arg = HaveCSharpFeatureSpans() ? "new()" : "null"}}), // For some reason `= null` doesn't compile in the default argument here, though passing it manually to those parameters works.
                                    .scope_open =
                                        "byte[] __bytes_" + name + ";\n"
                                        "int __len_" + name + " = 0;\n" +
                                        (
                                            HaveCSharpFeatureSpans()
                                            ?
                                                "if (" + name + ".HasValue)\n"
                                                "{\n"
                                                "    __bytes_" + name + " = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(" + name + ".Value.Length)];\n"
                                                "    __len_" + name + " = System.Text.Encoding.UTF8.GetBytes(" + name + ".Value, __bytes_" + name + ");\n"
                                                "}\n"
                                            :
                                                "if (" + name + " is not null)\n"
                                                "{\n"
                                                "    __bytes_" + name + " = System.Text.Encoding.UTF8.GetBytes(" + name + ");\n"
                                                "}\n"
                                        ) +
                                        "fixed (byte *__ptr_" + name + " = __bytes_" + name + ")\n{\n",
                                    .dllimport_args =
                                        (
                                            HaveCSharpFeatureSpans()
                                            ?
                                                name + ".HasValue ? __ptr_" + name + " : null, " + name + ".HasValue ? __ptr_" + name + " + __len_" + name + " : null"
                                            :
                                                name + " is not null ? __ptr_" + name + " : null, " + name + " is not null ? __ptr_" + name + " + __len_" + name + " : null"
                                        ),
                                    .scope_close = "}\n",
                                };
                            },
                        },
                        // No sugared return usage.
                    };
                };

                static const cppdecl::QualifiedName cpp_name_std_string = cppdecl::QualifiedName{}.AddPart("std").AddPart("string");
                static const cppdecl::QualifiedName cpp_name_std_stringview = cppdecl::QualifiedName{}.AddPart("std").AddPart("string_view");
                static const cppdecl::QualifiedName cpp_name_std_fs_path = cppdecl::QualifiedName{}.AddPart("std").AddPart("filesystem").AddPart("path");

                if (
                    TypeMatchesExactlyOrConstOrRvalueRef(cpp_name_std_string) ||
                    TypeMatchesExactlyOrConstOrRvalueRef(cpp_name_std_stringview) ||
                    TypeMatchesExactlyOrConstOrRvalueRef(cpp_name_std_fs_path)
                )
                {
                    return CreateBinding(MakeStringLikeReadOnlyBinding());
                }
            }

            return {};
        }
        catch (...)
        {
            std::throw_with_nested(std::runtime_error("While obtaining the binding for type `" + cpp_type_str + "`" + TypeBindingFlagsToString(flags) + ":"));
        }
    }

    Generator::ExtraClassContents Generator::GetExtraContentsForParsedClass(const cppdecl::QualifiedName &cpp_name, std::optional<bool> class_part_kind)
    {
        const std::string csharp_name = class_part_kind ? CppToCSharpClassName(cpp_name, *class_part_kind) : CppToCSharpExposedStructName(cpp_name);

        ExtraClassContents ret;

        auto WriteSeparator = [&]
        {
            if (!ret.text.empty())
                ret.text += '\n';
        };

        auto WriteConversionsToString = [&](bool is_mutable)
        {
            assert(class_part_kind);

            // Const.
            if (class_part_kind.value())
            {
                if (HaveCSharpFeatureSpans())
                {
                    WriteSeparator();
                    ret.text +=
                        "public static unsafe implicit operator ReadOnlySpan<byte>(" + csharp_name + " self)\n"
                        "{\n"
                        "    return new(self." + AdjustCalledFuncName("Data") + "().GetPointer(), checked((int)self." + AdjustCalledFuncName("Size") + "()));\n"
                        "}\n";
                }

                WriteSeparator();
                ret.text +=
                    "public static unsafe implicit operator string(" + csharp_name + " self)\n"
                    "{\n"
                    "    return System.Text.Encoding.UTF8.GetString(self." + AdjustCalledFuncName("Data") + "().GetPointer(), checked((int)self." + AdjustCalledFuncName("Size") + "()));\n"
                    "}\n"
                    "public override string ToString() {return (string)this;}\n";
            }

            // Non-const.
            if (!class_part_kind.value() && is_mutable)
            {
                if (HaveCSharpFeatureSpans())
                {
                    WriteSeparator();
                    ret.text +=
                        "public static unsafe implicit operator Span<byte>(" + csharp_name + " s)\n"
                        "{\n"
                        "    return new(s." + AdjustCalledFuncName("Data") + "().GetPointer(), checked((int)s." + AdjustCalledFuncName("Size") + "()));\n"
                        "}\n";
                }
            }
        };

        static const cppdecl::QualifiedName cpp_name_std_string = cppdecl::QualifiedName{}.AddPart("std").AddPart("string");
        static const cppdecl::QualifiedName cpp_name_std_stringview = cppdecl::QualifiedName{}.AddPart("std").AddPart("string_view");

        if (cpp_name == cpp_name_std_string)
            WriteConversionsToString(true);
        if (cpp_name == cpp_name_std_stringview)
            WriteConversionsToString(false);

        static const cppdecl::QualifiedName cpp_name_std_fs_path = cppdecl::QualifiedName{}.AddPart("std").AddPart("filesystem").AddPart("path");

        if (cpp_name == cpp_name_std_fs_path)
        {
            // `std::filesystem::path` must be handled separately, because it doesn't store `char`s on Windows, so we can't expose spans to them.

            WriteSeparator();
            ret.text +=
                "public static unsafe implicit operator string(" + csharp_name + " self)\n"
                "{\n"
                // When `--move-classes-returned-by-value` is used, we need `.Value` because `GetString` returns `_Moved<Std.String>` in that case.
                // This is a bit sad, ideally we'd copy `_Moved` for each class, and duplicate that conversion into it?
                // But that sounds like a lot of work. And `--move-classes-returned-by-value` is opt-in anyway.
                "    return self." + AdjustCalledFuncName("String") + "()" + (move_in_by_value_return ? ".Value" : "") + ";\n"
                "}\n"
                "public override string ToString() {return (string)this;}\n";
        }


        // `std::pair` and `std::tuple` deconstruction.

        static const cppdecl::QualifiedName cpp_name_std_pair = cppdecl::QualifiedName{}.AddPart("std").AddPart("pair");
        static const cppdecl::QualifiedName cpp_name_std_tuple = cppdecl::QualifiedName{}.AddPart("std").AddPart("tuple");

        if (
            (
                cpp_name.Equals(cpp_name_std_pair, cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target) ||
                cpp_name.Equals(cpp_name_std_tuple, cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target)
            ) &&
            // C# requires at least two elements to deconstruct.
            cpp_name.parts.back().template_args.value().args.size() >= 2
        )
        {
            try
            {
                std::vector<cppdecl::Type> cpp_elem_types;
                cpp_elem_types.reserve(cpp_name.parts.back().template_args.value().args.size());
                for (const auto &elem : cpp_name.parts.back().template_args.value().args)
                {
                    auto cpp_elem_type = elem.AsType();
                    if (!cpp_elem_type)
                        throw std::runtime_error("The template argument `" + CppdeclToCode(*elem.AsPseudoExpr()) + "` couldn't be parsed as a type.");
                    cpp_elem_types.push_back(*cpp_elem_type);
                }

                auto GetCSharpElemType = [&](const cppdecl::Type &cpp_elem_type, bool is_const, bool adjust = true)
                {
                    cppdecl::Type cpp_elem_type_ref = cpp_elem_type;
                    // Add constness if we're in the const half, and this is not a reference.
                    if (is_const && !cpp_elem_type.Is<cppdecl::Reference>())
                        cpp_elem_type_ref.AddQualifiers(cppdecl::CvQualifiers::const_);
                    // Add reference-ness, if this isn't already a reference.
                    if (!cpp_elem_type_ref.Is<cppdecl::Reference>())
                        cpp_elem_type_ref.AddModifier(cppdecl::Reference{});

                    std::string ret = GetTypeBinding(cpp_elem_type_ref,
                        TypeBindingFlags::no_move_in_by_value_return | // For general sanity. Should this be checking `adjust` too? Not sure, and not sure if it matters.
                        adjust * (
                            TypeBindingFlags::return_ref_wrapper // This will be nice for exposed structs.
                            // Could also add `TypeBindingFlags::return_ref_instead_of_copying_small_types`, probably behind a command line flag, because it makes things too ugly.
                        )
                    ).return_usage.value().csharp_return_type;

                    // Trim `ref [readonly]` from the C# type. It's not allowed in the `out` parameters.
                    // This has to be done in this lambda for the correct results.
                    if (adjust && ret.starts_with("ref "))
                    {
                        ret.erase(0, 4);
                        if (ret.starts_with("readonly "))
                            ret.erase(0, 9);
                    }

                    return ret;
                };

                // If the non-const half would have the same parameter types as the const half, it probably means we can omit it entirely (instead of emitting it and adding `new`).
                if (class_part_kind.value() || !std::all_of(cpp_elem_types.begin(), cpp_elem_types.end(), [&](const cppdecl::Type &type){return GetCSharpElemType(type, false) == GetCSharpElemType(type, true);}))
                {
                    WriteSeparator();
                    // No `new`. If we're here in the non-const half, it means the parameter types are different, so there's no shadowing.
                    ret.text += "public void Deconstruct(";

                    std::string body;

                    const CInterop::TypeDesc &type_desc = *c_desc.FindTypeOpt(CppdeclToCode(cpp_name));
                    const CInterop::TypeKinds::Class &class_desc = std::get<CInterop::TypeKinds::Class>(type_desc.var);

                    int i = 0;
                    for (const cppdecl::Type &cpp_elem_type : cpp_elem_types)
                    {
                        try
                        {
                            std::string csharp_elem_type = GetCSharpElemType(cpp_elem_type, class_part_kind.value());
                            std::string csharp_getter_return_type = GetCSharpElemType(cpp_elem_type, class_part_kind.value(), false);

                            if (i != 0)
                                ret.text += ", ";

                            ret.text += "out ";

                            ret.text += csharp_elem_type;
                            if (!ret.text.ends_with('*')) // Can we ever get `*` there?
                                ret.text += ' ';

                            ret.text += '_';
                            ret.text += std::to_string(i + 1);

                            // Append to the body:
                            body += "    _";
                            body += std::to_string(i + 1);
                            body += " = ";

                            // Find a getter method.
                            const CInterop::ClassMethod *elem_method = nullptr;
                            for (const auto &method : class_desc.methods)
                            {
                                if (method.is_static)
                                    continue;

                                auto regular = std::get_if<CInterop::MethodKinds::Regular>(&method.var);
                                if (!regular)
                                    continue;

                                if (!regular->elem_index || regular->elem_index != i)
                                    continue; // Wrong index.

                                const cppdecl::Type &type = ParseTypeOrThrow(method.params.at(0).cpp_type);
                                if (!type.Is<cppdecl::Reference>())
                                    throw std::runtime_error("For now we require the tuple-like element getters to take `this` by reference.");

                                bool param_is_const = type.IsConst(1);
                                if (class_part_kind.value() && !param_is_const)
                                    continue; // Const half but mutable getter, no good.

                                elem_method = &method;

                                if (class_part_kind.value() == param_is_const)
                                    continue; // We found the perfect constness match, no point in looking further.

                                // If we're here, it means we found a const method in a mutable half of the class. Look further, in case we have a mutable method.
                            }
                            if (!elem_method)
                                throw std::runtime_error("Unable to find a suitable getter for this element.\n");

                            bool creating_const_ref_wrapper = false;
                            bool creating_ref_wrapper =
                                (
                                    csharp_elem_type.starts_with(MakeHelperNameWithoutRegistration("Ref") + "<") ||
                                    (creating_const_ref_wrapper = csharp_elem_type.starts_with(MakeHelperNameWithoutRegistration("ConstRef") + "<"))
                                ) &&
                                csharp_getter_return_type.starts_with("ref ");

                            if (creating_ref_wrapper)
                            {
                                body += "new(";
                                body += creating_const_ref_wrapper ? "in " : "ref ";
                            }
                            body += MakeUnqualCSharpMethodName(*elem_method, class_part_kind, EmitVariant::regular) + "()";
                            if (creating_ref_wrapper)
                                body += ")";
                            body += ";\n";

                            i++;
                        }
                        catch (...)
                        {
                            std::throw_with_nested(std::runtime_error("While handling element " + std::to_string(i + 1) + "/" + std::to_string(cpp_elem_types.size()) + " of type `" + CppdeclToCode(cpp_elem_type) + "`:"));
                        }
                    }


                    ret.text += ")\n{\n";
                    ret.text += body;
                    ret.text += "}\n";
                }
            }
            catch (...)
            {
                std::throw_with_nested(std::runtime_error("While implementing tuple-like decomposition:"));
            }
        }

        return ret;
    }

    bool Generator::HaveCSharpFeatureNonStaticIncrementAndDecrement() const
    {
        return csharp_version >= 14;
    }

    bool Generator::HaveCSharpFeatureSpans() const
    {
        return allow_csharp_spans && NetFrameworkAtLeast(21, 21);
    }

    bool Generator::HaveCSharpFeatureInlineArrays() const
    {
        return NetFrameworkAtLeast(80, 0);
    }

    bool Generator::HaveCSharpFeatureNativeMemoryCopyAndFill() const
    {
        return NetFrameworkAtLeast(70, 0);
    }

    std::string Generator::MakeHelperNameWithoutRegistration(const std::string &name) const
    {
        return helpers_prefix + name;
    }

    std::string Generator::RequestHelper(const std::string &name)
    {
        requested_helpers.insert(name);
        return helpers_prefix + name;
    }

    bool Generator::IsConvOpForCtor(EmitVariant emit_variant)
    {
        return
            emit_variant == EmitVariant::conv_op_for_ctor ||
            IsConvOpForCtorForByValueWrapper(emit_variant) ||
            emit_variant == EmitVariant::conv_op_for_ctor_for_in_opt_const_helper ||
            emit_variant == EmitVariant::conv_op_for_ctor_for_in_opt_struct_helper;
    }

    bool Generator::IsConvOpForCtorForByValueWrapper(EmitVariant emit_variant)
    {
        return
            emit_variant == EmitVariant::conv_op_for_ctor_for_by_value_helper ||
            emit_variant == EmitVariant::conv_op_for_ctor_for_by_value_shared_helper ||
            emit_variant == EmitVariant::conv_op_for_ctor_for_by_value_opt_opt_helper ||
            emit_variant == EmitVariant::conv_op_for_ctor_for_by_value_shared_opt_opt_helper;
    }

    std::vector<Generator::EmitVariant> Generator::GetMethodVariants(const CInterop::ClassMethod &method)
    {
        std::vector<EmitVariant> ret = {Generator::EmitVariant::regular};

        if (auto *ctor = std::get_if<CInterop::MethodKinds::Constructor>(&method.var))
        {
            // Copy constructor rewrites.
            if (ctor->is_copying_ctor)
            {
                const CInterop::TypeDesc &desc = *c_desc.FindTypeOpt(method.ret.cpp_type);

                // From copy constructor taking the `_ByValue` wrapper, creatre one that takes a const ref, assuming the class is copyable.
                if (std::get<CInterop::TypeKinds::Class>(desc.var).kind == CInterop::ClassKind::uses_pass_by_enum && desc.traits->is_copy_constructible)
                    ret.push_back(Generator::EmitVariant::by_value_copy_ctor_to_const_ref_copy_ctor);

                // Copy constructor `T(const T &)` to the mutable reference version `T(T &)`.
                if (desc.traits->is_copy_constructible && !desc.traits.value().copy_constructor_takes_nonconst_ref)
                    ret.push_back(Generator::EmitVariant::const_ref_copy_ctor_to_mutable_ref_copy_ctor);
            }

            // Implicit conversion operators for implicit constructors.
            // Do we also need explicit ones for explicit ctors? I don't think they're that necessary.
            {
                // Check that we have the `this` param, as we should.
                assert(method.params.size() >= 1 && method.params.front().is_this_param);

                if (
                    // Must not be explicit. For now we only allow implicit conversions, see above.
                    !ctor->is_explicit &&
                    // Don't allow conversions for the copy ctor, out of general sanity.
                    // A conversion from a type to itself is illegal. The copy ctor doesn't always take the exact same C# type,
                    //   but even when it doesn't, I doubt allowing such conversions would do any good.
                    !ctor->is_copying_ctor &&
                    // One static `this` parameter, one actual parameter, and 0+ parameters with default arguments.
                    (method.params.size() >= 2) &&
                    // Check that all parameters after the static `this` and the first one have default arguments.
                    std::all_of(method.params.begin() + 2, method.params.end(), [](const CInterop::FuncParam &param){return bool(param.default_arg_spelling);}) &&
                    // Just in case, exactly one C# parameter also.
                    GetParameterBinding(method.params.at(1), false).csharp_decl_params.size() == 1
                )
                {
                    ret.push_back(Generator::EmitVariant::conv_op_for_ctor);
                }
            }
        }

        // Overloaded operator rewrites.
        if (auto *op = std::get_if<CInterop::MethodKinds::Operator>(&method.var))
        {
            // This check is needed e.g. to reject `==` that returns non-bool.
            if (IsOverloadableOpOrConvOp(&method))
            {
                if (op->token == "++" || op->token == "--")
                    ret.push_back(Generator::EmitVariant::static_incr_or_decr);

                // We could try to be clever and emit `==` and `<` rewrites even if `IsOverloadableOpOrConvOp()` above returns false,
                //   but I can't think of any conditions where this could actually happen without interefering with the rewriting, so I don't even bother.
                if (op->token == "==")
                    ret.push_back(Generator::EmitVariant::negated_comparison_operator);

                if (op->token == "<")
                {
                    ret.push_back(Generator::EmitVariant::less_to_greater);
                    ret.push_back(Generator::EmitVariant::less_to_less_eq);
                    ret.push_back(Generator::EmitVariant::less_to_greater_eq);
                }
            }
        }

        // Conversion operator rewrites.
        if (std::holds_alternative<CInterop::MethodKinds::ConversionOperator>(method.var))
        {
            // Not checking `IsOverloadableOpOrConvOp()`, it shouldn't matter I assume?

            // We don't have an existing way to classify those, so just hardcode the type list here.
            if (method.ret.cpp_type == "std::string" || method.ret.cpp_type == "std::string_view" || method.ret.cpp_type == "std::filesystem::path")
            {
                ret.push_back(Generator::EmitVariant::stringlike_conv_to_csharp_string_conv);
                ret.push_back(Generator::EmitVariant::stringlike_conv_to_tostring);
            }
        }

        return ret;
    }

    Generator::FuncLikeEmitter::FuncLikeEmitter(Generator &generator, AnyFuncLikePtr any_func_like, std::string new_csharp_name, std::optional<bool> class_part_kind, EmitVariant emit_variant)
    try
        : generator(generator),
        any_func_like(any_func_like),
        csharp_name(std::move(new_csharp_name)),
        emit_variant(emit_variant),
        func_like(*std::visit([](auto ptr) -> const CInterop::BasicFuncLike * {return ptr;}, any_func_like)),
        method_like(std::visit(Overload{
            [](const CInterop::BasicClassMethodLike *ptr) -> const CInterop::BasicClassMethodLike * {return ptr;},
            [](const CInterop::Function *) -> const CInterop::BasicClassMethodLike * {return nullptr;},
        }, any_func_like)),
        method(std::visit(Overload{
            [](const CInterop::Function *) -> const CInterop::ClassMethod * {return nullptr;},
            [](const CInterop::ClassMethod *ptr) -> const CInterop::ClassMethod * {return ptr;},
            [](const CInterop::ClassField::Accessor *) -> const CInterop::ClassMethod * {return nullptr;},
        }, any_func_like)),
        free_func(std::visit(Overload{
            [](const CInterop::BasicClassMethodLike *) -> const CInterop::Function * {return nullptr;},
            [](const CInterop::Function *ptr) -> const CInterop::Function * {return ptr;},
        }, any_func_like)),
        is_ctor(method && std::holds_alternative<CInterop::MethodKinds::Constructor>(method->var)),
        is_conv_op_rewritten_from_ctor(IsConvOpForCtor(emit_variant)),
        // This is a subset of `is_conv_op_rewritten_from_ctor` that's only true for by-value wrappers.
        // In those, we can't just `return new T(...)` because that tries to copy it, so instead we move the result.
        is_conv_op_rewritten_from_ctor_for_by_value_wrapper(IsConvOpForCtorForByValueWrapper(emit_variant)),
        is_property_get(csharp_name == "get{}"),
        is_property_set(csharp_name == "set{}"),
        is_property(is_property_get || is_property_set),
        // If this is a constructor, is the target class backed by a `shared_ptr`?
        ctor_class_backed_by_shared_ptr([&]{
            assert(!is_ctor || generator.ParseTypeOrThrow(func_like.ret.cpp_type).IsOnlyQualifiedName());
            return is_ctor && generator.GetSharedPtrTypeDescForCppTypeOpt(func_like.ret.cpp_type);
        }()),
        in_exposed_struct(!class_part_kind),
        class_part_kind(class_part_kind),
        is_overloaded_subscript_op(csharp_name == "operator[]"), // This should imply `IsOverloadableOpOrConvOp(...) == true`. This is false if the operator is not overloadable.
        // Here we only allow methods and not free functions, since all valid operators would've been moved to methods by this point,
        //   and all invalid ones (that C# doesn't support, that we must emit as functions) shouldn't be covered by this.
        // This excludes `EmitVariant::conv_op_for_ctor`, since that's a conversion to this type, not from it.
        is_overloaded_op_or_conv_op_from_this(
            method &&
            generator.IsOverloadableOpOrConvOp(method) &&
            !(in_exposed_struct && generator.IsMutatingOverloadedOperatorThatMustBeFuncInExposedStruct(*method)) &&
            // We don't consider `this[int i]` indexers to be proper operators, specifically in this class, since they don't need to be made `static` and so on.
            !is_overloaded_subscript_op
        ),
        // Is this an operator that wants all arguments to match the enclosing class type, as opposed to just one of them?
        is_op_with_symmetric_self_args(is_overloaded_op_or_conv_op_from_this && [&]
        {
            if (!method)
                return false;
            const auto *op = std::get_if<CInterop::MethodKinds::Operator>(&method->var);
            if (!op)
                return false;
            if (!generator.IsOverloadableOpOrConvOp(method))
                return false;
            return
                // For equality operators, this is a weak requirement that just makes the code look better.
                // We only do this if the operands already have the same type, since we'll have to adjust one of them,
                //   so might as well do the other too.
                (
                    (op->token == "==" || op->token == "!=") &&
                    method->params.at(method->is_static).SameTypeAndModifiers(method->params.at(method->is_static + 1))
                ) ||
                // For relational ones, this is a more important requirements, since we need symmetricity for rewrites.
                // Though our rewrites can probably handle non-symmetric cases too (by value vs by ref parameters),
                //   it sounds safer to just always rewrite.
                // Here we don't need to check that the parameter types are the same, since `IsOverloadableOpOrConvOp()` should already
                //   ensure that for those operators.
                (op->token == "<" || op->token == ">" || op->token == "<=" || op->token == ">=");
        }()),
        is_incr_or_decr([&]{
            if (method)
            {
                if (auto *opt = std::get_if<CInterop::MethodKinds::Operator>(&method->var))
                {
                    if (opt->token == "++" || opt->token == "--")
                        return true;
                }
            }
            return false;
        }()),
        acts_on_copy_of_this(is_incr_or_decr && emit_variant == EmitVariant::static_incr_or_decr)
    {
        { // Find the return type binding.
            ret_binding = &generator.GetReturnBinding(
                func_like.ret,
                // Custom behavior for ctors.
                is_ctor
                ? (
                    // Here we always pass either `no_move_in_by_value_return` or `force_move_in_by_value_return`.
                    // We don't want `--move-classes-returned-by-value` to affect this behavior, as that causes C# compilation errors.
                    (
                        !is_conv_op_rewritten_from_ctor_for_by_value_wrapper ||
                        // If this is a weird class that's copyable but not movable, then don't try to move it.
                        [&]{
                            const auto &traits = generator.c_desc.FindTypeOpt(func_like.ret.cpp_type)->traits.value();
                            return traits.is_copy_constructible && !traits.is_move_constructible;
                        }()
                    )
                    ? Generator::TypeBindingFlags::no_move_in_by_value_return
                    : Generator::TypeBindingFlags::force_move_in_by_value_return
                ) :
                // Custom behavior for conversion operators.
                method && std::holds_alternative<CInterop::MethodKinds::ConversionOperator>(method->var) &&
                is_overloaded_op_or_conv_op_from_this // Not sure if checking this ever does anything useful, but it makes sense I think.
                ? (
                    // Just because it looks ugly and weird. Who would ever call `operator _Moved<Std.String>` or whatever?
                    // Also specifically for string conversions this helps our automatic rewrites of them into `operator string` and `ToString()`.
                    // NOTE: This behavior must match what's done in `MakeUnqualCSharpMethodName()` to avoid spelling `_Moved<...>` in the name.
                    Generator::TypeBindingFlags::no_move_in_by_value_return
                ) :
                // Custom behavior for all other overloaded operators.
                is_overloaded_op_or_conv_op_from_this
                ? (
                    // Overloaded operators can't return true `ref`s, so we must return a wrapper class instead.
                    Generator::TypeBindingFlags::return_ref_wrapper
                ) :
                // Custom behavior for `begin` and `end` functions, both member and free ones.
                (
                    // TODO: it would be better to make "returns a pointer to array" an attribute in the parser, and additionally make it set it automatically based on the function names.

                    // Is a matching method?
                    [&]{
                        if (!method)
                            return false;
                        auto regular = std::get_if<CInterop::MethodKinds::Regular>(&method->var);
                        if (!regular)
                            return false;
                        // Even though `.name` shouldn't normally have template arguments, the C# generator appends them to resolve ambiguities, so we must remove them here.
                        std::string_view name = TryStripTemplateArgsSimple(regular->name);
                        return name == "begin" || name == "end";
                    }() ||
                    // Is a matching free function?
                    [&]{
                        if (!free_func)
                            return false;
                        auto regular = std::get_if<CInterop::FuncKinds::Regular>(&free_func->var);
                        if (!regular)
                            return false;
                        // Even though `.name` shouldn't normally have template arguments, the C# generator appends them to resolve ambiguities, so we must remove them here.
                        std::string name = CppdeclToCode(generator.ParseNameOrThrow(regular->name).parts.back().var);
                        return name == "begin" || name == "end";
                    }()
                )
                ? (
                    // Make sure we return a pointer to array, instead of treating it as an optional reference to a single object.
                    Generator::TypeBindingFlags::pointer_to_array
                ) :
                // Otherwise use default flags.
                TypeBindingFlags{}
            );
            if (!ret_binding)
                throw std::runtime_error("The C++ return type `" + func_like.ret.cpp_type + "`" + (func_like.ret.uses_sugar ? " (with sugar enabled)" : "") + " is known, but isn't usable as a return type.");

            // Accumulate unsafety.
            if (ret_binding->force_unsafe)
                forced_unsafe = true;
        }

        // Generate the parameter strings.
        param_strings.reserve(func_like.params.size());
        for (const auto &param : func_like.params)
        {
            std::size_t visual_index = param_strings.size() + 1;
            try
            {
                TypeBinding::ParamUsage::Strings this_param_strings;

                if (acts_on_copy_of_this && &param == &func_like.params.at(0))
                {
                    // This is artifically a `static` function that copies `this`.
                    // Replace the static `this` parameter with a fake parameter that matches the class type (but without the by-value helper,
                    //   per C# requirements), that we'll copy `this` from.

                    CInterop::FuncParam fake_param = param;
                    // Pretend this isn't a `this` parameter.
                    fake_param.is_this_param = false;

                    cppdecl::Type new_type = generator.ParseTypeOrThrow(fake_param.cpp_type);

                    // Find the class information based on the parameter type.
                    cppdecl::Type class_type = new_type;
                    if (class_type.Is<cppdecl::Reference>())
                        class_type.RemoveModifier();
                    class_type.RemoveQualifiers(cppdecl::CvQualifiers::const_);
                    const CInterop::TypeDesc &type_desc = *generator.c_desc.FindTypeOpt(CppdeclToCode(class_type));

                    if (in_exposed_struct)
                    {
                        if (new_type.Is<cppdecl::Reference>())
                            new_type.RemoveModifier();
                    }
                    else
                    {
                        if (!new_type.Is<cppdecl::Reference>())
                            new_type.AddModifier(cppdecl::Reference{}); // Force reference-ness to support by-value `this` params.

                        // Add fake constness, but only if the copy ctor of the class takes a const reference.
                        // This replaces existing constness, so we remove it first.
                        new_type.RemoveQualifiers(cppdecl::CvQualifiers::const_, 1);
                        if (!type_desc.traits->copy_constructor_takes_nonconst_ref)
                            new_type.AddQualifiers(cppdecl::CvQualifiers::const_, 1);
                    }

                    fake_param.cpp_type = CppdeclToCode(new_type);

                    this_param_strings = generator.GetParameterBinding(fake_param, false, {}, false, !in_exposed_struct * Generator::TypeBindingFlags::use_heap_wrappers_for_exposed_structs);

                    if (in_exposed_struct)
                    {
                        // This better work.
                        if (generator.ParseTypeOrThrow(param.cpp_type).Is<cppdecl::Reference>())
                        {
                            this_param_strings.dllimport_decl_params = {{.type = generator.CppToCSharpUnqualExposedStructName(class_type.simple_type.name) + " *", .name = "_this"}};
                            this_param_strings.dllimport_args = "&__this_copy";
                        }
                        else
                        {
                            this_param_strings.dllimport_args = "__this_copy";
                        }
                    }
                    else
                    {
                        this_param_strings.dllimport_args = "__this_copy._UnderlyingPtr"; // This better work.
                    }
                }
                else if (
                    is_overloaded_op_or_conv_op_from_this &&
                    (
                        // The effective `this` param. Either the actual `this` param of a non-static function,
                        //   or the second param of a static one (which is the one with the same type as the enclosing class type).
                        &param == &func_like.params.at(method->is_static ? 2 : 0) ||
                        // Or any param of an operator that wants symmetric params, excluding the fake `this` parameter of static methods.
                        (is_op_with_symmetric_self_args && !(method->is_static && param.is_this_param))
                    )
                    &&
                    !(is_incr_or_decr && emit_variant != EmitVariant::static_incr_or_decr)
                )
                {
                    // For overloaded operators, patch the `this` parameter a bit.
                    // For non-static operators, this is the actual `this` parameter with `.is_this_param == true`.
                    // For static operators, this is the second parameter, the one that matches the enclosing class in type.
                    // (When injecting operators, we ensure that the ones where the first parameter matches are non-static.)

                    CInterop::FuncParam fake_param = param;
                    // Pretend this isn't a `this` parameter. (Only matters if this is a non-static operator, see above.)
                    fake_param.is_this_param = false;

                    // Here we can't adjust the reference-ness of `fake_param`, since that will affect the dllimport params,
                    //   and we don't want that.

                    this_param_strings = generator.GetParameterBinding(fake_param, false, {}, in_exposed_struct, !in_exposed_struct * Generator::TypeBindingFlags::use_heap_wrappers_for_exposed_structs);

                    cppdecl::Type param_type = generator.ParseTypeOrThrow(param.cpp_type);

                    cppdecl::Type unqual_param_type = param_type;
                    if (unqual_param_type.Is<cppdecl::Reference>())
                        unqual_param_type.RemoveModifier();
                    unqual_param_type.RemoveQualifiers(cppdecl::CvQualifiers::const_);

                    // If the `this` type is a reference, and we're in an exposed struct, patch the parameter to be by value.
                    // Note that we've already rejected non-const reference `this` parameters by this point using `IsMutatingOverloadedOperatorThatMustBeFuncInExposedStruct()`
                    //   in the initializer of `is_overloaded_op_or_conv_op_from_this`.
                    if (in_exposed_struct)
                    {
                        if (param_type.Is<cppdecl::Reference>())
                        {
                            this_param_strings.csharp_decl_params.front().type = generator.CppToCSharpExposedStructName(param_type.simple_type.name);
                            this_param_strings.dllimport_args = "&" + param.name_or_placeholder;

                            // Remove the now useless `fixed` block too.
                            this_param_strings.scope_open = {};
                            this_param_strings.scope_close = {};
                        }
                    }
                    else
                    {
                        const CInterop::TypeDesc &type_desc = *generator.c_desc.FindTypeOpt(CppdeclToCode(unqual_param_type));
                        const CInterop::TypeKinds::Class &class_desc = std::get<CInterop::TypeKinds::Class>(type_desc.var);

                        // If the `this` type is a non-reference, further patch the usage. But only outside of structs.
                        if (!param_type.Is<cppdecl::Reference>())
                        {
                            // Make sure the type is copyable, or at least trivially movable.
                            // This doesn't really matter for exposed structs.
                            assert(class_desc.kind != CInterop::ClassKind::exposed_struct || type_desc.traits.value().IsCopyableOrTriviallyMovable());

                            // Replace the C# parameter type to use the class name as is.
                            // This removes the by-value helper from classes that use it, and also can replace `ConstFoo` with `Foo` for classes
                            //   that don't use the pass-by enum,
                            //   to be passed as `ConstFoo` when passed by value.
                            this_param_strings.csharp_decl_params.front().type = generator.CppToCSharpUnqualClassName(param_type.simple_type.name, !type_desc.traits.value().copy_constructor_takes_nonconst_ref);

                            if (class_desc.kind == CInterop::ClassKind::uses_pass_by_enum)
                            {
                                assert(this_param_strings.csharp_decl_params.size() == 1);
                                assert(type_desc.traits.value().is_copy_constructible); // This is strictly copyable at this point.

                                // Hardcode `PassBy::copy` mode.
                                this_param_strings.dllimport_args = generator.RequestHelper("_PassBy") + ".copy, " + param.name_or_placeholder + "._UnderlyingPtr";
                            }
                            else if (class_desc.kind == CInterop::ClassKind::exposed_struct)
                            {
                                assert(this_param_strings.csharp_decl_params.size() == 1);

                                this_param_strings.dllimport_args = this_param_strings.csharp_decl_params.front().name + "._Ref";
                                forced_unsafe = true;
                            }
                        }
                    }
                }
                else
                {
                    // For setters, here we force the parameter name to be `value` (which is the implicit parameter name for C# property setters).
                    this_param_strings = generator.GetParameterBinding(param, method_like && method_like->is_static, is_property_set && param_strings.size() == 1 ? std::optional<std::string>("value") : std::nullopt, in_exposed_struct);
                }

                // Remove default arguments from operator parameters, since they apparently have no effect, and C# warns on them.
                // Note that right now we must be explicit with `is_conv_op_rewritten_from_ctor`,
                //   since in that case `is_overloaded_op_or_conv_op_from_this` is not set.
                if (is_overloaded_op_or_conv_op_from_this || is_conv_op_rewritten_from_ctor)
                {
                    for (auto &csharp_param : this_param_strings.csharp_decl_params)
                        csharp_param.default_arg = {};
                }


                if (!this_param_strings.dllimport_decl_params.empty())
                {
                    if (!dllimport_param_string.empty())
                        dllimport_param_string += ", ";

                    dllimport_param_string += this_param_strings.DllImportDeclParamsString();
                }

                // Accumulate forced unsafety.
                if (this_param_strings.force_unsafe)
                    forced_unsafe = true;

                param_strings.push_back(std::move(this_param_strings));
            }
            catch (...)
            {
                std::throw_with_nested(std::runtime_error("While handling parameter " + std::to_string(visual_index) + " out of " + std::to_string(func_like.params.size()) + ", of type `" + param.cpp_type + "`" + (param.uses_sugar ? " (with sugar enabled)" : "") + ":"));
            }
        }

        // Generate the dllimport declaration.
        dllimport_strings = generator.MakeDllImportDecl(func_like.c_name, ret_binding->dllimport_return_type, dllimport_param_string);
    }
    catch (...)
    {
        // Can't access member variables in constructor try blocks, so have to re-obtain the `BasicFuncLike` pointer.
        const auto &c_name = std::visit([](auto ptr) -> const CInterop::BasicFuncLike * {return ptr;}, any_func_like)->c_name;
        std::throw_with_nested(std::runtime_error("While emitting a wrapper for C function `" + c_name + "`: (during preparation)"));
    }

    void Generator::FuncLikeEmitter::Emit(OutputFile &file, std::optional<ShadowingDesc> shadowing_desc)
    {
        try
        {
            const bool force_void_return_type = is_incr_or_decr && emit_variant != EmitVariant::static_incr_or_decr;

            const bool is_comparison_rewrite =
                emit_variant == EmitVariant::negated_comparison_operator ||
                emit_variant == EmitVariant::less_to_greater ||
                emit_variant == EmitVariant::less_to_less_eq ||
                emit_variant == EmitVariant::less_to_greater_eq;

            std::optional<std::string> csharp_type_for_copy_of_this = [&]() -> std::optional<std::string>
            {
                if (acts_on_copy_of_this)
                {
                    cppdecl::Type type = generator.ParseTypeOrThrow(func_like.params.at(0).cpp_type);
                    return in_exposed_struct
                        ? generator.CppToCSharpUnqualExposedStructName(type.simple_type.name)
                        : generator.CppToCSharpUnqualClassName(type.simple_type.name, false);
                }
                else
                {
                    return std::nullopt;
                }
            }();

            // Write a separating empty line if needed.
            file.WriteSeparatingNewline();

            if (!is_property)
            {
                // Write the comment.
                if (!is_comparison_rewrite)
                    generator.WriteComment(file, generator.MakeFuncComment(any_func_like));

                // Deprecation attribute?
                if (func_like.is_deprecated)
                {
                    file.WriteString("[Obsolete");
                    if (!func_like.is_deprecated->empty())
                    {
                        file.WriteString("(");
                        file.WriteString(EscapeQuoteString(*func_like.is_deprecated));
                        file.WriteString(")");
                    }
                    file.WriteString("]\n");
                }

                // Public!
                file.WriteString("public ");

                { // Handle some entirely custom rewrites.
                    // A version of copy constructor with a const ref parameter, when the default for this class is the by-value one.
                    if (emit_variant == EmitVariant::by_value_copy_ctor_to_const_ref_copy_ctor)
                    {
                        assert(method->params.at(0).is_this_param);

                        cppdecl::QualifiedName enclosing_class = generator.ParseNameOrThrow(method->ret.cpp_type);
                        const std::string &param_name = param_strings.at(1).csharp_decl_params.at(0).name;

                        file.WriteString(
                            csharp_name + "(" + generator.CppToCSharpUnqualClassName(enclosing_class, true) + " " + param_name + ") : this(new " + generator.CppToCSharpUnqualByValueHelperName(enclosing_class.parts.back(), false) + "(" + param_name + ")) {}\n"
                        );
                        return;
                    }

                    // A version of copy constructor with a non-const ref parameter.
                    if (emit_variant == EmitVariant::const_ref_copy_ctor_to_mutable_ref_copy_ctor)
                    {
                        assert(method->params.at(0).is_this_param);

                        cppdecl::QualifiedName enclosing_class = generator.ParseNameOrThrow(method->ret.cpp_type);
                        const std::string &param_name = param_strings.at(1).csharp_decl_params.at(0).name;

                        file.WriteString(
                            csharp_name + "(" + generator.CppToCSharpUnqualClassName(enclosing_class, false) + " " + param_name + ") : this((" + generator.CppToCSharpUnqualClassName(enclosing_class, true) + ")" + param_name + ") {}\n"
                        );
                        return;
                    }

                    // Conversions to string:
                    if (emit_variant == EmitVariant::stringlike_conv_to_csharp_string_conv)
                    {
                        const auto &self_param = param_strings.at(0).csharp_decl_params.at(0);
                        file.WriteString("static " + std::string(std::get<CInterop::MethodKinds::ConversionOperator>(method->var).is_explicit ? "explicit" : "implicit") + " operator string(" + self_param.ToString() + ") {return (" + ret_binding->csharp_return_type + ")" + self_param.name + ";}\n");
                        return;
                    }
                    if (emit_variant == EmitVariant::stringlike_conv_to_tostring)
                    {
                        // The return type in the base class (C# `object`) seems to be `string?`, but it seems we're allowed to drop the `?` if we want.
                        file.WriteString("override string ToString() {return (string)this;}\n");
                        return;
                    }
                }

                // Add `static` on static member functions, and on ALL non-member functions (since we put them into namespace-like classes anyway).
                if (
                    (
                        // Not a constructor, and...
                        !is_ctor &&
                        (
                            // Either a free function.
                            !method_like ||
                            // Or a static member function.
                            method_like->is_static ||
                            // Or an overloaded operator, other than the non-static variant of `++` or `--`.
                            (is_overloaded_op_or_conv_op_from_this && !(is_incr_or_decr && emit_variant != EmitVariant::static_incr_or_decr))
                        )
                    ) ||
                    // A conversion operator generated from a constructor.
                    // Currently those happen to have `is_ctor == true`, so it has to be here.
                    is_conv_op_rewritten_from_ctor
                )
                {
                    file.WriteString("static ");
                }

                // Add `readonly` if we're in an exposed struct and this is a const method.
                if (in_exposed_struct && method && !method->is_static && !is_overloaded_op_or_conv_op_from_this)
                {
                    const cppdecl::Type &type = generator.ParseTypeOrThrow(method->params.at(0).cpp_type);
                    if (type.Is<cppdecl::Reference>() && type.IsConst(1))
                        file.WriteString("readonly ");
                }

                // Note, not emitting `virtual` here, because it's useless in the interfaces.
                // We do emit it when explicitly inheriting each method in the derived classes.

                // Unsafe?
                if (IsUnsafe())
                    file.WriteString("unsafe ");

                // Silence shadowing?
                if (shadowing_desc)
                {
                    if (shadowing_desc->write)
                        shadowing_desc->shadowing_data->functions.insert(GetDescForShadowing());
                    else if (shadowing_desc->shadowing_data->functions.contains(GetDescForShadowing()))
                        file.WriteString("new ");
                }

                // Write the return type.
                if (
                    // If not a constructor.
                    !is_ctor &&
                    // And not a conversion operator.
                    // Note that we must check `is_overloaded_op_or_conv_op_from_this` to ensure that it's a valid conversion operator, and not one
                    //   that got rewritten as a function, due to `IsOverloadableOpOrConvOp()` returning false.
                    !(method && is_overloaded_op_or_conv_op_from_this && std::holds_alternative<CInterop::MethodKinds::ConversionOperator>(method->var)))
                {
                    if (csharp_type_for_copy_of_this)
                    {
                        file.WriteString(*csharp_type_for_copy_of_this);
                        file.WriteString(" ");
                    }
                    else if (force_void_return_type)
                    {
                        file.WriteString("void ");
                    }
                    else
                    {
                        file.WriteString(ret_binding->csharp_return_type);
                        if (!ret_binding->csharp_return_type.ends_with('*'))
                            file.WriteString(" ");
                    }
                }
            }

            // Write the C# name.
            file.WriteString(is_property_get ? "get" : is_property_set ? "set" : is_overloaded_subscript_op ? "this" : csharp_name);

            // Write the parameter list.
            if (!is_property)
            {
                file.WriteString(is_overloaded_subscript_op ? "[" : "(");

                bool first = true;
                for (const auto &param : param_strings)
                {
                    bool should_break = false;

                    for (const auto &csharp_param : param.csharp_decl_params)
                    {
                        if (!std::exchange(first, false))
                            file.WriteString(", ");

                        file.WriteString(csharp_param.ToString());


                        if (is_conv_op_rewritten_from_ctor)
                        {
                            should_break = true;
                            break; // At most one parameter for conversion operators generated from constructors.
                        }
                    }

                    if (should_break)
                        break;
                }

                file.WriteString(is_overloaded_subscript_op ? "]" : ")");
            }

            { // If this is an automatic rewrite, write the body and stop early.
                auto ArgA = [&]
                {
                    // This condition is here just in case we need to rewrite operators that got emitted as functions (instead of actual C# operators)
                    //   due to failing some of our checks.
                    // But right now this can never happen.
                    return param_strings.at(0).csharp_decl_params.empty() ? "this" : param_strings.at(0).csharp_decl_params.at(0).name;
                };

                auto ArgB = [&]
                {
                    return param_strings.at(1).csharp_decl_params.at(0).name;
                };

                // `!=` to `==`.
                if (emit_variant == EmitVariant::negated_comparison_operator)
                {
                    if (in_exposed_struct && generator.IsMutatingOverloadedOperatorThatMustBeFuncInExposedStruct(*method))
                        file.WriteString("\n{\n    return !" + ArgA() + "." + generator.AdjustCalledFuncName("Equal") + "(" + ArgB() + ");\n}\n");
                    else
                        file.WriteString("\n{\n    return !(" + ArgA() + " == " + ArgB() + ");\n}\n");
                    return;
                }
                // `<` to `>`.
                if (emit_variant == EmitVariant::less_to_greater)
                {
                    if (in_exposed_struct && generator.IsMutatingOverloadedOperatorThatMustBeFuncInExposedStruct(*method))
                        file.WriteString("\n{\n    return " + ArgB() + "." + generator.AdjustCalledFuncName("Less") + "(" + ArgA() + ");\n}\n");
                    else
                        file.WriteString("\n{\n    return " + ArgB() + " < " + ArgA() + ";\n}\n");
                    return;
                }
                // `<` to `<=`.
                if (emit_variant == EmitVariant::less_to_less_eq)
                {
                    if (in_exposed_struct && generator.IsMutatingOverloadedOperatorThatMustBeFuncInExposedStruct(*method))
                        file.WriteString("\n{\n    return !" + ArgB() + "." + generator.AdjustCalledFuncName("Equal") + "(" + ArgA() + ");\n}\n");
                    else
                        file.WriteString("\n{\n    return !(" + ArgB() + " < " + ArgA() + ");\n}\n");
                    return;
                }
                // `<` to `>=`.
                if (emit_variant == EmitVariant::less_to_greater_eq)
                {
                    if (in_exposed_struct && generator.IsMutatingOverloadedOperatorThatMustBeFuncInExposedStruct(*method))
                        file.WriteString("\n{\n    return !" + ArgA() + "." + generator.AdjustCalledFuncName("Less") + "(" + ArgB() + ");\n}\n");
                    else
                        file.WriteString("\n{\n    return !(" + ArgA() + " < " + ArgB() + ");\n}\n");
                    return;
                }

                if (is_conv_op_rewritten_from_ctor)
                {
                    file.WriteString(" {return ");

                    file.WriteString("new");

                    if (emit_variant != EmitVariant::conv_op_for_ctor)
                    {
                        // Need the explicit type.
                        file.WriteString(" ");

                        if (!is_conv_op_rewritten_from_ctor_for_by_value_wrapper)
                        {
                            // Must use the `Const_...` class type.
                            // Firstly, this is needed if this is an exposed struct, since otherwise this would be the C# struct type,
                            //   and those are not convertible to our wrapper types, at least without saving it to a temporary variable and using `new(ref ...)`.
                            // Secondly, even in non-structs, using the non-const class name sometimes causes ambiguities.
                            file.WriteString(generator.CppToCSharpUnqualClassName(generator.ParseNameOrThrow(func_like.ret.cpp_type), true));
                        }
                        else
                        {
                            file.WriteString(ret_binding->csharp_return_type);
                        }
                    }

                    // Propagate the argument.
                    // `.at(1)` to skip the static `this` parameter.
                    file.WriteString("(" + param_strings.at(1).csharp_decl_params.front().name + ")");

                    // Close the function.
                    file.WriteString(";}\n");

                    // As a special case, when we're converting from `ReadOnlySpan<char>`, also insert a conversion from `string` for convenience.
                    // If `HaveCSharpFeatureSpans() == false`, that constructor will be constructing from `string` directly, so this condition will be false,
                    //   which is exactly what we need, since in that case we'll get this stuff directly.
                    if (param_strings.at(1).csharp_decl_params.size() == 1 && param_strings.at(1).csharp_decl_params.front().type == "ReadOnlySpan<char>")
                    {
                        file.WriteString(
                            "public static unsafe " + csharp_name + "(string other) {return new(other);}\n"
                        );
                    }
                    return;
                }
            }

            // Write a member init list for the constructor.
            if (is_ctor)
            {
                if (in_exposed_struct)
                {
                    // Nothing.
                }
                else if (ctor_class_backed_by_shared_ptr)
                {
                    // Here we're trying to call the constructor from a shared pointer, not from a raw pointer,
                    //   so we're using the parameter name `shared_ptr:` to disambiguate.
                    // Later in this constructor we'll call `_LateMakeShared()` to actually construct the object.
                    file.WriteString(" : this(shared_ptr: null, is_owning: true)");
                }
                else
                {
                    file.WriteString(" : this(null, is_owning: true)");
                }
            }

            // Begin function body.
            file.PushScope({}, "\n{\n", "}\n");

            // If this is a property, begin the getter body.
            const bool is_property = is_overloaded_subscript_op;
            if (is_property)
                file.PushScope({}, "get\n{\n", "}\n");

            // The `DllImport` declaration.
            file.WriteString(dllimport_strings.dllimport_decl);

            // Copy `this` if needed.
            std::string this_name_for_lifetime = "this";
            if (acts_on_copy_of_this)
            {
                file.WriteString(*csharp_type_for_copy_of_this);
                file.WriteString(" __this_copy = new(" + param_strings.at(0).csharp_decl_params.at(0).name + ");\n");
                this_name_for_lifetime = "__this_copy";
            }


            // Prepare the lifetime things:

            // The code that needs to run to update the kept-alive objects.
            // This will have a trailing newline.
            std::string lifetime_statements;

            // Do we need to create a variable for the C# return value, to perform additional lifetime-related operations on it?
            bool need_result_in_variable_for_lifetimes = false;

            // Drop the old references, if needed.
            for (const auto &[holder, removed_keys] : func_like.lifetimes.removed_keys)
            {
                assert(!removed_keys.empty()); // If it's empty, why is it in the map in the first place?

                std::function<void(const std::string &quoted_key)> perform_call;

                std::visit(Overload{
                    [&](const LifetimeRelation::ThisObject &)
                    {
                        perform_call = [&](const std::string &quoted_key)
                        {
                            lifetime_statements += std::string(method_like->is_static ? "_StaticDiscardKeepAlive" : "_DiscardKeepAlive") + "(" + quoted_key + ");\n";
                        };
                    },
                    [&](const LifetimeRelation::ReturnValue &)
                    {
                        const auto &func = ret_binding->keep_other_alive;
                        if (!func)
                            return; // This return type can't keep other things alive, do nothing.

                        auto usage = func("__ret");

                        need_result_in_variable_for_lifetimes = true;
                        perform_call = [&lifetime_statements, usage](const std::string &quoted_key)
                        {
                            if (usage.cond)
                                lifetime_statements += "if (" + *usage.cond + ") ";
                            lifetime_statements += usage.object + "._DiscardKeepAlive(" + quoted_key + ");\n";
                        };
                    },
                    [&](const LifetimeRelation::Param &param)
                    {
                        const auto &usage = param_strings.at(std::size_t(param.index)).keep_other_alive;
                        if (!usage)
                            return; // This parameter type can't keep other things alive, do nothing.

                        perform_call = [&lifetime_statements, usage](const std::string &quoted_key)
                        {
                            if (usage->cond)
                                lifetime_statements += "if (" + *usage->cond + ") ";
                            lifetime_statements += usage->object + "._DiscardKeepAlive(" + quoted_key + ");\n";
                        };
                    },
                }, holder);

                if (perform_call)
                {
                    if (removed_keys.contains(""))
                    {
                        perform_call(""); // Only this, since it will clear all keys.
                    }
                    else
                    {
                        for (const auto &key : removed_keys)
                            perform_call(EscapeQuoteString(key));
                    }
                }
            }

            // Handle the lifetime relations.
            for (const LifetimeRelation &lifetime : func_like.lifetimes.relations)
            {
                // An exposed struct can't be a holder for obvious reasons (no space in the struct for a keep-alive list, we must maintain a specific layout).
                // An exposed struct can't be a target right now, because it might not be on the heap, and copying it onto the heap doesn't look like it would work.
                if (in_exposed_struct && lifetime.ContainsVariant(LifetimeRelation::ThisObject{}))
                    continue;

                auto VariantUsage = [&](const LifetimeRelation::Variant &var, bool is_holder) -> std::optional<TypeBinding::KeepAliveUsage>
                {
                    return std::visit(Overload{
                        [&](const LifetimeRelation::ThisObject &) -> std::optional<TypeBinding::KeepAliveUsage>
                        {
                            if (func_like.params.empty() || !func_like.params.at(0).is_this_param)
                                throw std::runtime_error("The lifetime annotations on this function refer to `this`, but it's not a class member function.");

                            // Check that we're not trying to keep-alive a static `this`.
                            // Instead of checking this here, I instead fixed the code that emitted such annotations, since they really shouldn't exist.
                            // if (!is_holder && !is_ctor && method->is_static)
                            //     return nullptr;

                            if (is_holder)
                                return TypeBinding::KeepAliveUsage{.object = ""};
                            else
                                return TypeBinding::KeepAliveUsage{.object = "this"};
                        },
                        [&](const LifetimeRelation::Param &param) -> std::optional<TypeBinding::KeepAliveUsage>
                        {
                            if (func_like.params.at(std::size_t(param.index)).is_this_param)
                                throw std::runtime_error("The lifetime annotations on this function refer to the `this` parameter by its index, instead of using `ThisObject` as they should.");
                            return param_strings.at(std::size_t(param.index)).keep_other_alive;
                        },
                        [&](const LifetimeRelation::ReturnValue &) -> std::optional<TypeBinding::KeepAliveUsage>
                        {
                            std::optional<TypeBinding::KeepAliveUsage> ret;
                            if (ret_binding->keep_other_alive)
                            {
                                ret = ret_binding->keep_other_alive("__ret");
                                need_result_in_variable_for_lifetimes = true;
                            }
                            return ret;
                        },
                    }, var);
                };

                auto holder_usage = VariantUsage(lifetime.holder, true);
                auto target_usage = VariantUsage(lifetime.target, false);

                if (holder_usage && target_usage)
                {
                    if (holder_usage->cond || target_usage->cond)
                    {
                        lifetime_statements += "if (";
                        if (holder_usage->cond)
                            lifetime_statements += *holder_usage->cond;
                        if (target_usage->cond)
                        {
                            if (holder_usage->cond)
                                lifetime_statements += " && ";
                            lifetime_statements += *target_usage->cond;
                        }
                        lifetime_statements += ") ";
                    }

                    lifetime_statements += holder_usage->object;
                    if (!holder_usage->object.empty()) // The empty string here indicates `this`.
                        lifetime_statements += '.';

                    const bool is_subobject = std::holds_alternative<LifetimeRelation::ClassSubobject>(lifetime.key);

                    if (holder_usage->object.empty() && !is_ctor && method_like->is_static) // ^
                    {
                        if (is_subobject)
                            throw std::runtime_error("The lifetime annotation on this static method claims to refer to a subobject of this, which makes no sense for static methods.");
                        lifetime_statements += "_StaticKeepAlive";
                    }
                    else
                    {
                        if (is_subobject)
                            lifetime_statements += "_KeepAliveEnclosingObject = ";
                        else
                            lifetime_statements += "_KeepAlive(";
                    }

                    lifetime_statements += target_usage->object;
                    if (!is_subobject)
                    {
                        const auto &key = std::get<std::string>(lifetime.key);
                        if (!key.empty())
                        {
                            lifetime_statements += ", ";
                            lifetime_statements += EscapeQuoteString(key);
                        }

                        lifetime_statements += ")";
                    }
                    lifetime_statements += ";\n";
                }
            }


            std::string extra_statements;
            std::string extra_statements_after;
            int num_scopes_to_pop = 0;

            { // Any extra statements from the parameters?
                // Collect the extra statements, and open scopes.
                for (std::size_t i = 0; i < func_like.params.size(); i++)
                {
                    const auto &param = param_strings[i];

                    if (!param.scope_open.empty() || !param.scope_close.empty())
                    {
                        file.PushScope({}, param.scope_open, param.scope_close);
                        num_scopes_to_pop++;
                    }

                    if (!param.extra_statements.empty())
                    {
                        assert(!param.extra_statements.starts_with('\n'));
                        assert(param.extra_statements.ends_with('\n'));
                        extra_statements += param.extra_statements;
                    }
                }

                // Collect the cleanup extra statements, in reverse.
                for (std::size_t i = func_like.params.size(); i-- > 0;)
                {
                    const auto &param = param_strings[i];

                    assert(!param.extra_statements_after.starts_with('\n'));
                    assert(param.extra_statements_after.empty() || param.extra_statements_after.ends_with('\n'));
                    extra_statements_after += param.extra_statements_after;
                }
            }

            { // Call the imported function.
                // Begin assembling the call expression.
                std::string expr = dllimport_strings.csharp_name;

                { // Add the argument list.
                    expr += "(";

                    bool first = true;
                    for (const auto &param : param_strings)
                    {
                        if (param.dllimport_args.empty())
                            continue;

                        if (first)
                            first = false;
                        else
                            expr += ", ";

                        expr += param.dllimport_args;
                    }

                    expr += ")";
                }

                auto MakeReturnStatements = [&](const std::string &expr, bool *returns_void = nullptr) -> std::string
                {
                    if (returns_void)
                        *returns_void = false;

                    if (force_void_return_type || acts_on_copy_of_this || need_result_in_variable_for_lifetimes)
                    {
                        // Note, this `__ret` variable doesn't duplicate `__c_ret`.
                        // `__c_ret` is the result of directly calling the dllimport-ed function, and `__ret` is the C# result.

                        std::string ret;

                        std::string ret_target;

                        bool ret_var_is_ref = false;
                        if (ret_binding->csharp_return_type != "void")
                        {
                            if (ret_binding->needs_temporary_variable || need_result_in_variable_for_lifetimes)
                            {
                                ret_target = "__ret =";

                                // Declare the variable.
                                ret = ret_binding->csharp_return_type + " __ret";

                                // If it's a reference, we need to give it a dummy initializer.
                                if (ret_binding->csharp_return_type.starts_with("ref "))
                                {
                                    ret_var_is_ref = true;

                                    // If we must create a ref variable, but don't have an initialized for it yet, give it a dummy value.
                                    // This is non-null because in C++ at one point I had to do this to prevent UBSAN from complaining about null references.
                                    // I don't know if this matters in C# at all or not, but this looks like a decent way of doing this.

                                    std::string type_without_ref = ret_binding->csharp_return_type.substr(4);
                                    ret += " = ref *(" + type_without_ref + " *)sizeof(" + type_without_ref + "); // Uninitialized ref.\n";
                                }
                                else
                                {
                                    ret += ";\n";
                                }
                            }
                            else
                            {
                                // Avoid creating the variable on a separate line if possible, and initialize it directly.
                                // This is only possible if the return binding doesn't use this string multiple times, as would be indicated by `ret_binding->needs_temporary_variable`.
                                // This is purely to improve how the code looks, it shouldn't affect the result.
                                ret_target = ret_binding->csharp_return_type + " __ret =";
                            }
                        }

                        // If `ret_binding->csharp_return_type == "void"`, then `MakeReturnStatements()` should ignore the first argument anyway.
                        std::string ret_statements = ret_binding->MakeReturnStatements(ret_target, expr);
                        if (returns_void && ret_statements == expr + ";")
                            *returns_void = true;
                        ret += ret_statements;
                        ret += '\n';

                        // Run the lifetime stuff.
                        ret += lifetime_statements;

                        ret += extra_statements_after;

                        if (acts_on_copy_of_this)
                        {
                            ret += "return " + std::string(ret_var_is_ref ? "ref " : "") + "__this_copy;";
                        }
                        else if (need_result_in_variable_for_lifetimes)
                        {
                            ret += "return " + std::string(ret_var_is_ref ? "ref " : "") + "__ret;";
                        }
                        else
                        {
                            assert(ret.ends_with('\n'));
                            ret.pop_back(); // Eh.
                        }

                        return ret;
                    }

                    std::string ret_statements = ret_binding->MakeReturnStatements("return", expr);
                    if (returns_void && ret_statements == expr + ";")
                        *returns_void = true;

                    // This is a bit jank. Make sure we aren't returning before running the additional statements.
                    assert(extra_statements_after.empty() || !ret_statements.starts_with("return ") || ret_statements.contains("__c_ret"));

                    return
                        lifetime_statements +
                        extra_statements_after + // Note that this goes before `ret_statements`. This is a bit jank. Notice the assert above that ensures that this makes sense.
                        ret_statements;
                };

                // Call the function.
                if (is_ctor)
                {
                    file.WriteString(extra_statements);

                    if (in_exposed_struct)
                    {
                        // You can assign to `this`, and it assigns elementwise! Nice.
                        // See: https://stackoverflow.com/q/10038598/2752075
                        file.WriteString("this = " + expr + ";\n");
                    }
                    else
                    {
                        const auto &class_desc = std::get<CInterop::TypeKinds::Class>(generator.c_desc.FindTypeOpt(func_like.ret.cpp_type)->var);

                        std::string ctor_expr;
                        std::string post_ctor_statements;
                        if (class_desc.kind == CInterop::ClassKind::exposed_struct)
                        {
                            const std::string class_size_str = std::to_string(class_desc.size_and_alignment.value().size);

                            ctor_expr = "(_Underlying *)" + generator.RequestHelper("_Alloc") + "(" + class_size_str + ")";

                            post_ctor_statements = "*(" + generator.CppToCSharpExposedStructName(generator.ParseNameOrThrow(func_like.ret.cpp_type)) + " *)_UnderlyingPtr = " + expr + ";\n";
                        }
                        else
                        {
                            ctor_expr = expr;
                        }

                        if (ctor_class_backed_by_shared_ptr)
                            file.WriteString("_LateMakeShared(" + ctor_expr + ");\n");
                        else
                            file.WriteString("_UnderlyingPtr = " + ctor_expr + ";\n");
                        file.WriteString(post_ctor_statements);
                    }

                    file.WriteString(lifetime_statements);
                    file.WriteString(extra_statements_after);

                    // `--fat-objects` initialization.
                    if (!in_exposed_struct)
                        file.WriteString(generator.GetCtorFinalizationStatements(generator.ParseNameOrThrow(func_like.ret.cpp_type), InConstHalf()));
                }
                else if (extra_statements_after.empty() && !ret_binding->needs_temporary_variable)
                {
                    // If we don't need to run any extra statements after calling the C function, `return` result immediately.

                    file.WriteString(extra_statements);
                    file.WriteString(MakeReturnStatements(expr) + '\n');
                }
                else
                {
                    // Maybe we need to store the C result in a temporary variable to run extra statements after the C call.
                    // But check the C function returns `void` first, because if it does, we don't actually need a variable.

                    bool c_returns_void = false;
                    std::string ret_expr = MakeReturnStatements("__c_ret", &c_returns_void);

                    if (c_returns_void)
                    {
                        // Likely returning void, don't need to actually store the result in a variable.
                        file.WriteString(extra_statements);
                        file.WriteString(MakeReturnStatements(expr) + '\n'); // Ignore `ret_expr` and call `MakeReturnStatements()` again without giving it a temporary variable.
                    }
                    else
                    {
                        // Store the result in a variable, run some custom code, and then return.

                        file.WriteString(extra_statements);

                        // Note the untyped `var`. `expr` here doesn't contains the result of `make_return_expr()` (which itself could be
                        //   an untyped `new()`, which wouldn't work with `var`), but instead contains the result of calling
                        //   a dllimported function, which always return a fixed type.
                        file.WriteString("var __c_ret = " + expr + ";\n");
                        file.WriteString(ret_expr + '\n');
                    }
                }
            }

            // End custom parameter scopes.
            for (int i = 0; i < num_scopes_to_pop; i++)
                file.PopScope();

            // End property getter body.
            if (is_property)
                file.PopScope();

            // End function body.
            file.PopScope();
        }
        catch (...)
        {
            // Can't access member variables in constructor try blocks, so have to re-obtain the `BasicFuncLike` pointer.
            const auto &c_name = std::visit([](auto ptr) -> const CInterop::BasicFuncLike * {return ptr;}, any_func_like)->c_name;
            std::throw_with_nested(std::runtime_error("While emitting a wrapper for C function `" + c_name + "`: (during preparation)"));
        }
    }

    std::string Generator::FuncLikeEmitter::GetDescForShadowing() const
    {
        std::string ret;
        if (method_like && method_like->is_static)
            ret += "static ";

        ret += csharp_name;
        ret += '(';
        bool first = true;
        for (const auto &param_strings : param_strings)
        {
            for (const auto &param_type : param_strings.csharp_decl_params)
            {
                if (!std::exchange(first, false))
                    ret += ", ";

                ret += param_type.type;
            }
        }
        ret += ')';
        return ret;
    }

    bool Generator::IsMutatingOverloadedOperatorThatMustBeFuncInExposedStruct(const CInterop::ClassMethod &method)
    {
        assert(IsOverloadableOpOrConvOp(&method));

        const CInterop::FuncParam &param = method.params.at(method.is_static ? 2 : 0); // `2` instead of `1` to skip the fake static `this`.

        const cppdecl::Type &type = ParseTypeOrThrow(param.cpp_type);
        return type.Is<cppdecl::Reference>() && !type.IsConst(1);
    }

    std::string Generator::MakeUnqualCSharpMethodName(const CInterop::ClassMethod &method, std::optional<bool> class_part_kind, EmitVariant emit_variant, bool adjust_to_disambiguate)
    {
        bool ret_is_identifier = false;
        std::string ret = std::visit(Overload{
            [&](const CInterop::MethodKinds::Regular &elem) -> std::string
            {
                ret_is_identifier = true;
                // Can't use `CppIdentifierToCSharpIdentifier(elem.name)`, since at the beginning of `Generate()`
                //   we might replace `name` with `full_name` to disambiguate the names of templates, if necessary.
                return CppToCSharpIdentifier(ParseNameOrThrow(elem.name));
            },
            [&](const CInterop::MethodKinds::Constructor &elem) -> std::string
            {
                // Rewriting the constructor to a conversion operator.
                if (IsConvOpForCtor(emit_variant))
                {
                    // I guess we can just assemble the entire thing here?
                    std::string ret;
                    ret += elem.is_explicit ? "explicit" : "implicit";
                    ret += " operator ";
                    if      (emit_variant == EmitVariant::conv_op_for_ctor_for_by_value_helper)
                        ret += CppToCSharpUnqualByValueHelperName(ParseNameOrThrow(method.ret.cpp_type).parts.back(), false);
                    else if (emit_variant == EmitVariant::conv_op_for_ctor_for_by_value_shared_helper)
                        ret += CppToCSharpUnqualByValueHelperName(ParseNameOrThrow(method.ret.cpp_type).parts.back(), true);
                    else if (emit_variant == EmitVariant::conv_op_for_ctor_for_by_value_opt_opt_helper)
                        ret += CppToCSharpUnqualByValueOptOptHelperName(ParseNameOrThrow(method.ret.cpp_type).parts.back(), false);
                    else if (emit_variant == EmitVariant::conv_op_for_ctor_for_by_value_shared_opt_opt_helper)
                        ret += CppToCSharpUnqualByValueOptOptHelperName(ParseNameOrThrow(method.ret.cpp_type).parts.back(), true);
                    else if (emit_variant == EmitVariant::conv_op_for_ctor_for_in_opt_const_helper)
                        ret += CppToCSharpUnqualInOptConstNontrivialHelperName(ParseNameOrThrow(method.ret.cpp_type).parts.back());
                    else if (emit_variant == EmitVariant::conv_op_for_ctor_for_in_opt_struct_helper)
                        ret += CppToCSharpUnqualInOptStructHelperName(ParseNameOrThrow(method.ret.cpp_type).parts.back());
                    else if (!class_part_kind)
                        ret += CppToCSharpUnqualExposedStructName(ParseNameOrThrow(method.ret.cpp_type));
                    else
                        ret += CppToCSharpUnqualClassName(ParseNameOrThrow(method.ret.cpp_type), *class_part_kind);
                    return ret;
                }

                // Just the normal constructor.
                if (!class_part_kind)
                    return CppToCSharpUnqualExposedStructName(ParseNameOrThrow(method.ret.cpp_type));
                else
                    return CppToCSharpUnqualClassName(ParseNameOrThrow(method.ret.cpp_type), *class_part_kind);
            },
            [&](const CInterop::MethodKinds::Operator &elem) -> std::string
            {
                (void)elem;

                std::string fixed_token = elem.token;

                if (emit_variant == EmitVariant::negated_comparison_operator)
                    fixed_token = "!=";
                else if (emit_variant == EmitVariant::less_to_greater)
                    fixed_token = ">";
                else if (emit_variant == EmitVariant::less_to_less_eq)
                    fixed_token = "<=";
                else if (emit_variant == EmitVariant::less_to_greater_eq)
                    fixed_token = ">=";

                if (
                    IsOverloadableOpOrConvOp(&method) &&
                    // If this is a non-static version of `++`/`--` and we're in older C#, must fall back to the normal function name.
                    !(
                        (elem.token == "++" || elem.token == "--") &&
                        emit_variant != EmitVariant::static_incr_or_decr &&
                        !HaveCSharpFeatureNonStaticIncrementAndDecrement()
                    ) &&
                    // If this is an overloaded operator that can't be implemented as such in an exposed struct, and we're in one, fall back to the normal function name.
                    !(
                        !class_part_kind &&
                        IsMutatingOverloadedOperatorThatMustBeFuncInExposedStruct(method)
                    )
                )
                {
                    // This can return `operator[]`, which isn't a valid operator in C#, but our `FuncLikeEmitter` has custom behavior for this string.
                    return "operator" + fixed_token;
                }

                // Fall back to an identifier.
                ret_is_identifier = true;

                // Those doesn't give good names for unary `*` and `&`, so we have to handle that first.
                if (method.params.size() == 1)
                {
                    if (fixed_token == "*")
                        return "Deref";
                    if (fixed_token == "&")
                        return "AddressOf";
                }

                return CppIdentifierToCSharpIdentifier(cppdecl::TokenToIdentifier(fixed_token, true));
            },
            [&](const CInterop::MethodKinds::ConversionOperator &elem) -> std::string
            {
                if (!IsOverloadableOpOrConvOp(&method))
                {
                    // If this some weird conversion operator that we can't emit, make it a function instead.

                    ret_is_identifier = true;
                    return "ConvertTo_" + CppToCSharpIdentifier(ParseTypeOrThrow(method.ret.cpp_type));
                }

                // I guess we can just assemble the entire thing here?
                // Note, the `IsOverloadableOpOrConvOp(&method)` check should match the return type binding selection logic in the `FuncLikeEmitter(...)` constructor.
                return std::string(elem.is_explicit ? "explicit" : "implicit") + " operator " + GetReturnBinding(method.ret, TypeBindingFlags::no_move_in_by_value_return * IsOverloadableOpOrConvOp(&method)).csharp_return_type;
            },
        }, method.var);

        if (ret_is_identifier && begin_func_names_with_lowercase)
            MakeFirstLetterLowercase(ret);

        // Adjust the result if it conflicts with other member names.
        if (
            adjust_to_disambiguate &&
            // Constructors definitely don't need this.
            // This could skip some weird rewrites though (if you fix this, sync the condition with that in `GetUsedMemberNamesInClass()`.
            !std::holds_alternative<CInterop::MethodKinds::Constructor>(method.var) &&
            cppdecl::IsValidIdentifier(ret) &&
            !method.params.empty() &&
            method.params.front().is_this_param)
        {
            cppdecl::Type type = ParseTypeOrThrow(method.params.front().cpp_type);
            const auto &names = GetUsedMemberNamesInClass(type.simple_type.name);

            auto iter = names.method_adjustments.find(ret);
            if (iter != names.method_adjustments.end())
                ret = iter->second;
        }

        return ret;
    }

    std::string Generator::MakeQualCSharpFreeFuncName(const CInterop::Function &func)
    {
        cppdecl::QualifiedName name;
        std::visit(
            [&]<typename T>(const T &elem)
            {
                name = ParseNameOrThrow(elem.name);
            },
            func.var
        );

        name = AdjustCppNamespaces(std::move(name));

        std::string ret;
        for (std::size_t i = 0; i < name.parts.size(); i++)
        {
            if (i > 0)
                ret += '.'; // We don't use actual namespaces in C# (which would require `::`). Since we only use static classes, we can use `.` everywhere.

            std::string part;
            if (i + 1 == name.parts.size())
                part = MakeUnqualCSharpFreeFuncName(func);
            else
                part = CppToCSharpIdentifier(name.parts[i]);

            ret += part;
        }
        return ret;
    }

    std::string Generator::MakeUnqualCSharpFreeFuncName(const CInterop::Function &func)
    {
        // At this point, if `free_func` is an overloaded operator (a free function operator that wasn't adjusted to a member one in `Generate()`,
        //   before emitting free functions), then we can't bind it as an operator

        return std::visit(
            [&]<typename T>(const T &elem)
            {
                cppdecl::QualifiedName name = ParseNameOrThrow(elem.name);

                // Sync this logic for operators with `MakeUnqualCSharpMethodName()`.
                std::string ret;
                if constexpr (std::is_same_v<T, CInterop::FuncKinds::Operator>)
                    ret = CppIdentifierToCSharpIdentifier(cppdecl::TokenToIdentifier(std::get<cppdecl::OverloadedOperator>(name.parts.back().var).token, true));
                else
                    ret = CppToCSharpIdentifier(name.parts.back());

                if (begin_func_names_with_lowercase)
                    MakeFirstLetterLowercase(ret);

                { // Adjust the name to avoid conflicts with types.
                    auto name_copy = name;
                    name_copy.parts.pop_back();
                    const auto &used_names = GetUsedNamesInNamespace(name_copy);

                    while (used_names.class_names.contains(ret))
                        ret += '_';
                }

                return ret;
            },
            func.var
        );
    }

    std::string Generator::MakeFuncComment(AnyFuncLikePtr any_func_like)
    {
        const CInterop::BasicFuncLike &func_like = *std::visit([](auto ptr) -> const CInterop::BasicFuncLike * {return ptr;}, any_func_like);
        const CInterop::BasicClassMethodLike *method_like = std::visit(Overload{
            [](const CInterop::BasicClassMethodLike *ptr) -> const CInterop::BasicClassMethodLike * {return ptr;},
            [](const CInterop::Function *) -> const CInterop::BasicClassMethodLike * {return nullptr;},
        }, any_func_like);

        std::string ret = func_like.comment.c_style;
        assert(!ret.starts_with('\n'));
        assert(ret.empty() || ret.ends_with('\n'));

        // Extra comments from the parameter types.
        for (const auto &param : func_like.params)
        {
            // The default arguments.
            // This message is only truly needed for non-trivial default arguments.
            if (param.default_arg_affects_parameter_passing)
                ret += "/// Parameter `" + param.name_or_placeholder + "` defaults to `" + *param.default_arg_spelling + "`.\n";

            // The custom comments.
            TypeBinding::ParamUsage::Strings strings = GetParameterBinding(param, method_like && method_like->is_static);
            if (!strings.extra_comment.empty())
            {
                assert(!strings.extra_comment.starts_with('\n'));
                assert(strings.extra_comment.ends_with('\n'));
                ret += strings.extra_comment;
            }
        }

        // The comment from the return type.
        const auto &ret_comment = GetReturnBinding(func_like.ret).extra_comment;
        if (!ret_comment.empty())
        {
            assert(!ret_comment.starts_with('\n'));
            assert(ret_comment.ends_with('\n'));
            ret += ret_comment;
        }

        // The lifetime comment from the input.
        // Currently disabled, because what if the annotations are ignored for some of the parameters, due to them having weird types?
        // I'd rather not have the comment at all.
        #if 0
        if (!func_like.comment_extra_lifetimes.c_style.empty())
        {
            assert(!func_like.comment_extra_lifetimes.c_style.starts_with('\n'));
            assert(func_like.comment_extra_lifetimes.c_style.ends_with('\n'));
            ret += func_like.comment_extra_lifetimes.c_style;
        }
        #endif

        return ret;
    }

    TypeBinding::ParamUsage::Strings Generator::GetParameterBinding(const CInterop::FuncParam &param, bool is_static_method, std::optional<std::string> override_name, bool in_exposed_struct, TypeBindingFlags extra_flags)
    {
        TypeBinding::ParamUsage::Strings ret;

        const std::string &param_name = override_name ? *override_name : param.name_or_placeholder;

        try
        {
            // Handle the `this` parameter.
            if (param.is_this_param)
            {
                cppdecl::Type this_type = ParseTypeOrThrow(param.cpp_type);


                if (is_static_method)
                {
                    // A static method, do nothing.

                    // Perform some minimal validation of the parameter.
                    assert(!this_type.Is<cppdecl::Reference>());
                    assert(this_type.IsOnlyQualifiedName());
                }
                else
                {
                    bool done = false;

                    if (!this_type.Is<cppdecl::Reference>())
                    {
                        // A non-static method with a by-value this parameter (quite unusual).
                        // Our parser doesn't currently support those, but we can still generate them when rewriting non-member operators.

                        // This only needs special-casing if the class needs a pass-by enum, or is an exposed struct.
                        // Otherwise our parameter passing style in C is the same as it would be for a reference `this`.

                        assert(this_type.IsOnlyQualifiedName());

                        const CInterop::ClassKind class_kind = std::get<CInterop::TypeKinds::Class>(c_desc.FindTypeOpt(CppdeclToCode(this_type))->var).kind;

                        if (class_kind == CInterop::ClassKind::uses_pass_by_enum)
                        {
                            done = true;

                            // Make sure the type is copyable.
                            assert(c_desc.FindTypeOpt(CppdeclToCode(this_type))->traits->is_copy_constructible);

                            ret.dllimport_decl_params = {{.type = RequestHelper("_PassBy"), .name = param_name + "_pass_by"}, {.type = "_Underlying *", .name = param_name}};

                            // Unconditionally copy for now. This is sad, but I'm not sure how else to solve this.
                            ret.dllimport_args = RequestHelper("_PassBy") + ".copy, _UnderlyingPtr";
                        }
                        else if (in_exposed_struct)
                        {
                            // We can't check this directly in this `if (...)`, since we want to reject `ConstFoo` and `MutFoo`, the reference-like classes
                            //   that we generate alongside the struct.
                            assert(class_kind == CInterop::ClassKind::exposed_struct);

                            done = true;

                            ret.dllimport_decl_params = {{.type = CppToCSharpExposedStructName(this_type.simple_type.name), .name = param_name}};
                            ret.dllimport_args = "this";
                        }
                    }


                    // A non-static method with a by-reference this parameter.
                    // Or one with a by-value parameter of a simple enough type, so we can use the same parameter passing style.
                    if (!done)
                    {
                        if (this_type.Is<cppdecl::Reference>())
                            this_type.RemoveModifier(); // Remove reference.
                        this_type.RemoveQualifiers(cppdecl::CvQualifiers::const_);
                        assert(this_type.IsOnlyQualifiedName());

                        if (in_exposed_struct)
                        {
                            const std::string csharp_class_name = CppToCSharpExposedStructName(this_type.simple_type.name);
                            ret.dllimport_decl_params = {{.type = csharp_class_name + " *", .name = param_name}};
                            // This doesn't work for some reason. Appears to be a defect: https://old.reddit.com/r/csharp/comments/137s9hv/taking_the_address_of_a_ref_struct_without_fixed/
                            //     ret.dllimport_args = "&this";
                            // So instead we have to use a `fixed` block:
                            ret.scope_open = "fixed (" + csharp_class_name + " *__ptr_" + param_name + " = &this)\n{\n";
                            ret.dllimport_args = "__ptr_" + param_name;
                            ret.scope_close = "}\n";
                        }
                        else
                        {
                            ret.dllimport_decl_params = {{.type = "_Underlying *", .name = param_name}};
                            ret.dllimport_args = "_UnderlyingPtr";
                        }
                    }
                }
            }
            else
            {
                const TypeBinding &param_binding = GetTypeBinding(ParseTypeOrThrow(param.cpp_type), TypeBindingFlagsForParam(param) | extra_flags);

                // Note that we don't have fallback between usages with and without default args, unlike in the C generator.
                const auto &param_usage = param.default_arg_affects_parameter_passing ? param_binding.param_usage_with_default_arg : param_binding.param_usage;
                if (!param_usage)
                    throw std::runtime_error("This C++ parameter type is known, it's not usable as a parameter type" + std::string(param.default_arg_affects_parameter_passing ? " (with a default argument)" : "") + ".");

                const bool useless_default_arg = param.default_arg_spelling && !param.default_arg_affects_parameter_passing;

                ret = param_usage->make_strings(param_name, useless_default_arg);

                // Validate the default arguments.
                if (!ret.csharp_decl_params.empty())
                {
                    std::size_t num_defargs = std::size_t(std::count_if(ret.csharp_decl_params.begin(), ret.csharp_decl_params.end(), [](const TypeBinding::ParamUsage::Strings::CSharpParam &p){return bool(p.default_arg);}));

                    // Check that either all of none parameters have default arguments.
                    if (num_defargs != 0 && num_defargs != ret.csharp_decl_params.size())
                        throw std::runtime_error("Our bindings map this C++ parameter maps to multiple C# parameters, but produce an inconsistent number of default arguments for those. Either all of them or none should have default arguments.");

                    if (num_defargs == 0 && param.default_arg_spelling)
                        throw std::runtime_error("Our bindings fail to generate the default argument for this parameter, even though one is required." + std::string(param.default_arg_affects_parameter_passing ? "" : " (Note that this default argument in C++ doesn't affect the parameter passing style in C because it's trivial enough.)"));
                    if (num_defargs > 0 && !param.default_arg_spelling)
                        throw std::runtime_error("Our bindings generate the default argument for this parameter, even though it's not needed.");
                }
            }
        }
        catch (...)
        {
            std::throw_with_nested(std::runtime_error("While handling parameter `" + param_name + "`, of type `" + param.cpp_type + "`" + (param.uses_sugar ? " (with sugar enabled)" : "") + ":"));
        }

        return ret;
    }

    const TypeBinding::ReturnUsage &Generator::GetReturnBinding(const CInterop::FuncReturn &ret, TypeBindingFlags extra_flags)
    {
        return GetTypeBinding(ParseTypeOrThrow(ret.cpp_type), TypeBindingFlagsForReturn(ret) | extra_flags).return_usage.value();
    }

    Generator::DllImportDeclStrings Generator::MakeDllImportDecl(std::string_view c_name, std::string_view return_type, std::string_view params)
    {
        DllImportDeclStrings ret;

        ret.csharp_name = "__";
        ret.csharp_name += c_name;

        // Note! If it turns out that we need to specify the calling convention here, don't forget to also add it
        //   to our `std::function` implementation and its numerous delegates.
        ret.dllimport_decl = "[System.Runtime.InteropServices.DllImport(";
        ret.dllimport_decl += EscapeQuoteString(imported_lib_name);
        ret.dllimport_decl += ", EntryPoint = \"";
        ret.dllimport_decl += c_name;
        ret.dllimport_decl += "\", ExactSpelling = true)]\nextern static ";
        ret.dllimport_decl += return_type;
        if (!ret.dllimport_decl.ends_with('*'))
            ret.dllimport_decl += ' ';
        ret.dllimport_decl += ret.csharp_name;
        ret.dllimport_decl += '(';
        ret.dllimport_decl += params;
        ret.dllimport_decl += ");\n";

        ret.is_unsafe = return_type.find('*') != std::string_view::npos || params.find('*') != std::string_view::npos;

        return ret;
    }

    void Generator::EmitCppEnum(OutputFile &file, const std::string &cpp_name_str)
    {
        try
        {
            const cppdecl::QualifiedName cpp_name = ParseNameOrThrow(cpp_name_str);
            const std::string unqual_csharp_name = CppToCSharpIdentifier(cpp_name.parts.back());

            const CInterop::TypeKinds::Enum &enum_desc = std::get<CInterop::TypeKinds::Enum>(c_desc.FindTypeOpt(cpp_name_str)->var);

            // A separator?
            file.WriteSeparatingNewline();

            const PrimitiveTypeInfo::Kind underlying_kind = c_desc.platform_info.FindPrimitiveType(enum_desc.underlying_type)->kind;

            { // A comment?
                std::string comment = enum_desc.comment.c_style;

                // If the underlying type is `bool`, mention this in a comment, because in C# we'll use `byte` (C# doesn't allow `bool`).
                if (underlying_kind == PrimitiveTypeInfo::Kind::boolean)
                    comment += "/// This enum is intended to be boolean.\n";

                WriteComment(file, comment);
            }

            // Access.
            file.WriteString("public ");

            // The declaration header. We always force the underlying type, just in case.
            file.WriteString("enum ");
            file.WriteString(unqual_csharp_name);
            file.WriteString(" : ");

            // The underlying type. We don't even validate that iit's integral for now, it should never be non-integral here.
            auto underlying_type = CToCSharpPrimitiveTypeOpt(enum_desc.underlying_type, false);
            if (!underlying_type)
                throw std::runtime_error("Unknown underlying C type: `" + enum_desc.underlying_type + "`.");
            // Write the underlying type.
            file.WriteString(*underlying_type);
            file.WriteString("\n");

            const bool is_signed = c_desc.platform_info.FindPrimitiveType(enum_desc.underlying_type)->kind == PrimitiveTypeInfo::Kind::signed_integral;

            // Open the enum scope.
            file.PushScope();

            // Write the constants...
            for (const CInterop::EnumElem &elem : enum_desc.elems)
            {
                // The comment, if any.
                file.WriteString(elem.comment.c_style);

                file.WriteString(CppIdentifierToCSharpIdentifier(elem.name));
                file.WriteString(" = ");

                if (is_signed)
                    file.WriteString(std::to_string(std::int64_t(elem.unsigned_value)));
                else
                    file.WriteString(std::to_string(elem.unsigned_value));

                file.WriteString(",\n");
            }

            // Close the enum scope.
            file.PopScope();
        }
        catch (...)
        {
            std::throw_with_nested(std::runtime_error("While emitting a wrapper for C++ enum `" + cpp_name_str + "`:"));
        }
    }

    bool Generator::IsConstOrStaticMethodLike(const cppdecl::QualifiedName &cpp_class_name, const CInterop::TypeDesc &class_type_desc, AnyMethodLikePtr any_method_like, EmitVariant emit_variant)
    {
        // The static operators `++` and `--` and only be in the const half if the copy ctor of the class has a const ref parameter.
        if (emit_variant == EmitVariant::static_incr_or_decr)
            return !class_type_desc.traits->copy_constructor_takes_nonconst_ref;

        // For operators, we don't directly use their `static` status (C# forces us to mark all of them static,
        //   but internally we consider them static only when they're placed in the class matching their second operand, rather than the first).
        // Instead, we use their parameter types to determine if they should be placed in the const half of the class or the non-const one.
        if (const auto **method_ptr = std::get_if<const CInterop::ClassMethod *>(&any_method_like))
        {
            const CInterop::ClassMethod &method = **method_ptr;

            // Hmm, do we need this check? I think we do, since otherwise we don't do our jank parameter rewrites,
            //   especially not for the by-value parameters.
            if (IsOverloadableOpOrConvOp(&method))
            {
                // Get the parameter that matches the enclosing class in type. We use `2` instead of `1` to skip the dummy `this` parameter
                //   of static methods.
                const CInterop::FuncParam &param = method.params.at(method.is_static ? 2 : 0);

                cppdecl::Type param_type = ParseTypeOrThrow(param.cpp_type);

                (void)cpp_class_name; // In case the assert i
                assert(param_type.simple_type.name == cpp_class_name);

                // For a reference parameter, use the constness of the reference target.
                if (param_type.modifiers.size() == 1 && param_type.Is<cppdecl::Reference>())
                    return param_type.IsConst(1);

                assert(param_type.modifiers.size() == 0);

                // Otherwise check if the copy ctor of the enclosing class takes a const reference or not.
                return !class_type_desc.traits.value().copy_constructor_takes_nonconst_ref;
            }
        }

        const CInterop::BasicClassMethodLike &method_like = std::visit([](const CInterop::BasicClassMethodLike *method_like) -> const auto & {return *method_like;}, any_method_like);

        bool ret = method_like.is_static;
        if (!ret)
        {
            // Check if the `this` parameter is const.
            assert(!method_like.params.empty() && method_like.params.front().is_this_param);
            if (!method_like.params.empty() && method_like.params.front().is_this_param)
            {
                cppdecl::Type type = ParseTypeOrThrow(method_like.params.front().cpp_type);
                if (type.Is<cppdecl::Reference>())
                {
                    ret = type.IsConst(1);
                }
                else
                {
                    // A by-value parameter.
                    // This branch will be useful when we eventually (hopefully) add support for explicit object parameters.
                    // For now it should be unreachable.
                    assert(type.modifiers.empty());

                    // This is considered `const` only if the copy constructor takes a const reference, as it should.
                    ret = !class_type_desc.traits.value().copy_constructor_takes_nonconst_ref;
                }
            }
        }

        return ret;
    }

    bool Generator::IsCompoundAssignmentToken(std::string_view token)
    {
        return
            token == "+=" ||
            token == "-=" ||
            token == "*=" ||
            token == "/=" ||
            token == "%=" ||
            token == "&=" ||
            token == "|=" ||
            token == "^=" ||
            token == "<<=" ||
            token == ">>=";
    }

    bool Generator::IsOverloadableOpOrConvOp(std::variant<const CInterop::Function *, const CInterop::ClassMethod *> func_or_method)
    {
        std::string token;

        // For argument indexing purposes, do we need to skip the static `this` argument?
        const bool is_static_member =
            std::holds_alternative<const CInterop::ClassMethod *>(func_or_method) &&
            std::get<const CInterop::ClassMethod *>(func_or_method)->is_static;

        auto ShouldSkipOperator = [&](const CInterop::BasicFuncLike &func, const std::string &op_token)
        {
            auto ParamCount = [&]
            {
                return func.params.size() - is_static_member;
            };
            auto ParamAt = [&](std::size_t i) -> const CInterop::FuncParam &
            {
                return func.params.at(is_static_member + i);
            };

            // Iostream operators are emitted as functions instead, because it looks better.
            if (op_token == "<<")
            {
                assert(ParamCount() == 2);
                if (ParamAt(0).cpp_type == "std::ostream &")
                    return true;
            }
            else if (op_token == ">>")
            {
                assert(ParamCount() == 2);
                if (ParamAt(0).cpp_type == "std::istream &")
                    return true;
            }

            // C# doesn't support overloading unary `*` and `&`.
            if (ParamCount() == 1 && (op_token == "*" || op_token == "&"))
                return true;

            // Skip equality comparison that doesn't return `bool`. It's not strictly necessary,
            //   but C# has custom warnings when a class implements `==` and doesn't implement some interfaces/whatever, and the warnings trigger
            //   even when the comparison returns non-bool, and if it does, there's no way for us to implement them properly.
            if ((op_token == "==" || op_token == "!=") && func.ret.cpp_type != "bool")
                return true;

            // The relational operators.
            if (op_token == "<" || op_token == ">" || op_token == "<=" || op_token == ">=")
            {
                if (func.ret.cpp_type != "bool")
                    return true;

                // We need operands to have the same type, since we rewrite `<` into the other three operators,
                //   and that requires the operands to have the same type.
                if (!ParamAt(0).SameTypeAndModifiers(ParamAt(1)))
                    return true;
            }

            // The subscription operator.
            // C# requires this to have at least one argument, in addition to `this`.
            if (op_token == "[]" && ParamCount() <= 1)
                return true;

            // Reject if the operator returns void, and isn't one of the several blessed operators that can do that.
            if (func.ret.cpp_type == "void" && op_token != "++" && op_token != "--" && !IsCompoundAssignmentToken(op_token))
                return true;

            return false;
        };

        std::optional<bool> ret = std::visit(Overload{
            [&](const CInterop::Function *func) -> std::optional<bool>
            {
                if (const auto *op = std::get_if<CInterop::FuncKinds::Operator>(&func->var))
                {
                    if (ShouldSkipOperator(*func, op->token))
                        return false; // Don't bind this as an operator.

                    token = op->token;
                    return {}; // Must further examine the token, see below.
                }

                return false;
            },
            [&](const CInterop::ClassMethod *method) -> std::optional<bool>
            {
                if (const auto *op = std::get_if<CInterop::MethodKinds::Operator>(&method->var))
                {
                    if (op->is_copying_assignment)
                        return false; // Don't bind this as an operator.

                    if (ShouldSkipOperator(*method, op->token))
                        return false; // Don't bind this as an operator.

                    token = op->token;
                    return {}; // Must further examine the token, see below.
                }

                if (std::holds_alternative<CInterop::MethodKinds::ConversionOperator>(method->var))
                {
                    // Make sure the C# return type isn't spelled with `ref`. C# doesn't allow conversions to `ref`s.
                    if (GetReturnBinding(method->ret).csharp_return_type.starts_with("ref "))
                        return false; // Don't bind this as a conversion operator.

                    // Make sure that we don't have a by-value this parameter and a non-copyable (and not trivially movable) class at the same time.
                    // Right now this is impossible, since the parser doesn't emit by-value `this` parameters, and we don't rewrite conversion
                    //   operators (which could create them) either, but this can be helpful in the future.
                    const CInterop::FuncParam &param = method->params.at(0);
                    cppdecl::Type param_type = ParseTypeOrThrow(param.cpp_type);
                    if (param_type.Is<cppdecl::Reference>())
                        return true; // Reference `this` is always ok.

                    // Only ok if the class is trivial enough.
                    return c_desc.FindTypeOpt(param.cpp_type)->traits.value().IsCopyableOrTriviallyMovable();
                }

                return false;
            },
        }, func_or_method);

        // If we know the final answer, stop now.
        if (ret)
            return *ret;

        assert(!token.empty()); // If you wanted to have an empty token, `ret` should've been non-null.
        if (token.empty())
            return false;

        return
            token == "+" ||
            token == "-" ||
            token == "!" ||
            token == "~" ||
            token == "++" ||
            token == "--" ||
            token == "*" ||
            token == "/" ||
            token == "%" ||
            token == "&" ||
            token == "|" ||
            token == "^" ||
            token == "<<" ||
            token == ">>" ||
            token == "==" ||
            token == "!=" ||
            token == "<" ||
            token == ">" ||
            token == "<=" ||
            token == ">=" ||
            token == "[]";

        // Could allow compound assignments here via `IsCompoundAssignmentToken()` in C# 14 or newer, but not bothering with it for now.
    }

    std::optional<Generator::ShouldEmitResult> Generator::ShouldEmitMethod(const cppdecl::QualifiedName &class_name, const CInterop::TypeDesc &type_desc, const CInterop::ClassMethod &method, EmitVariant emit_variant)
    {
        if (emit_variant == EmitVariant::static_incr_or_decr && !type_desc.traits.value().IsCopyableOrTriviallyMovable())
            return {}; // The static increment/decrement requires copying `this`.

        const bool is_const_or_static = IsConstOrStaticMethodLike(class_name, type_desc, &method, emit_variant);

        bool should_emit = std::visit(Overload{
            [&](const CInterop::MethodKinds::Regular &elem)
            {
                (void)elem;
                return true;
            },
            [&](const CInterop::MethodKinds::Constructor &elem)
            {
                // Note, we even allow `elem.is_copying_ctor` here. C# also has `IClonable`, but apparently copy ctors are acceptable too,
                //   and some people even discourage the use of `IClonable`, including the official MS page: https://learn.microsoft.com/en-us/dotnet/api/system.icloneable.clone?view=net-8.0#remarks
                (void)elem;
                return type_desc.traits.value().is_destructible;
            },
            [&](const CInterop::MethodKinds::Operator &elem)
            {
                (void)elem;
                // We don't need the post-increment/decrement operators, only the pre- ones.
                // If you only provide the post- ones and not pre-, that's your problem. :/
                if (elem.is_post_incr_or_decr)
                    return false;

                // We don't emit `!=` directly. Instead it gets emitted as the negated version of `==`.
                // C# requires the two to always be defined together.
                // We only do this if it returns `bool`, since it's the only case where C++20 allows `!=` to be omitted,
                //   and the point of all this is consistency between omitting and not omitting `!=`.
                // We can skip this logic if those don't get emitted as operators, to let the user have all their original functions.
                //   This isn't as important here as it is for the relational operators below.
                if (elem.token == "!=" && IsOverloadableOpOrConvOp(&method))
                    return false;

                // Similarly for all relational operators other than `<`, since we implement all of them in terms of `<`.
                // C# requires defining them in pairs like this: `<` and `>`, `<=` and `>=`.
                // We can skip this logic if those don't get emitted as operators, to let the user have all their original functions.
                if ((elem.token == ">" || elem.token == "<=" || elem.token == ">=") && IsOverloadableOpOrConvOp(&method))
                    return false;

                return true;
            },
            [&](const CInterop::MethodKinds::ConversionOperator &elem)
            {
                (void)elem;
                return true;
            },
        }, method.var);

        if (!should_emit)
            return {};

        ShouldEmitResult ret;

        if (std::holds_alternative<CInterop::MethodKinds::Constructor>(method.var))
        {
            ret.emit_in_const = true;
            ret.emit_in_mut = true;
        }
        else
        {
            ret.emit_in_const = is_const_or_static;
            ret.emit_in_mut = !is_const_or_static;
        }

        return ret;
    }

    void Generator::EmitCppTypeUnconditionally(OutputFile &file, const std::string &cpp_type)
    {
        // Most of the variant elements are useless to us, so we aren't using `std::visit` here.

        const auto &type_desc = c_desc.cpp_types.Map().at(cpp_type);

        // Enums.
        if (std::holds_alternative<CInterop::TypeKinds::Enum>(type_desc.var))
        {
            EmitCppEnum(file, cpp_type);
        }
        // Classes.
        else if (auto *cl = std::get_if<CInterop::TypeKinds::Class>(&type_desc.var))
        {
            const cppdecl::QualifiedName cpp_qual_name = ParseNameOrThrow(cpp_type);
            const std::string cpp_unqual_name = CppdeclToCode(cpp_qual_name.parts.back());

            const CInterop::TypeDesc &type_desc = *c_desc.FindTypeOpt(cpp_type);
            const CInterop::TypeKinds::Class &class_desc = std::get<CInterop::TypeKinds::Class>(type_desc.var);

            const CInterop::TypeDesc *shared_ptr_desc = GetSharedPtrTypeDescForCppTypeOpt(cpp_type);

            // This is only used in exposed structs, to avoid emitting both const and non-const versions of the same method
            //   under the same name, which would cause ambiguities. Instead we rename the const versions if the mutable versions also exist.
            std::unordered_set<std::string> nonconst_methods_in_exposed_struct;

            // Returns a string method desc for `nonconst_methods_in_exposed_struct`, or null if this method shouldn't be tested in this manner.
            // Here we return the C++ method name and all its C++ parameter types.
            auto GetMethodDescForConstnessOverlapCheck = [&](const CInterop::ClassMethod &method) -> std::optional<std::string>
            {
                if (std::holds_alternative<CInterop::MethodKinds::Constructor>(method.var))
                    return {}; // Skip constructors.

                std::string ret;
                std::visit(Overload{
                    [&](const CInterop::MethodKinds::Regular &elem)
                    {
                        ret += elem.name;
                    },
                    [&](const CInterop::MethodKinds::Constructor &elem)
                    {
                        (void)elem;
                        assert(false); // We skipped constructors above.
                    },
                    [&](const CInterop::MethodKinds::Operator &elem)
                    {
                        ret += "operator" + elem.token;
                    },
                    [&](const CInterop::MethodKinds::ConversionOperator &elem)
                    {
                        (void)elem;
                        ret += "operator " + method.ret.cpp_type;
                    },
                }, method.var);

                ret += "(";
                for (bool first = true; const auto &param : method.params)
                {
                    // This isn't just to get a nicer-looking string. This would make const and non-const overloads have different strings, which we dont' want.
                    if (param.is_this_param)
                        continue;

                    if (!std::exchange(first, false))
                        ret += ", ";

                    ret += param.cpp_type;
                }

                return ret;
            };

            // Fill `nonconst_methods_in_exposed_struct`.
            if (class_desc.kind == CInterop::ClassKind::exposed_struct)
            {
                for (const auto &method : class_desc.methods)
                {
                    if (method.is_static)
                        continue; // Don't care about those.

                    // Make sure we have a `this` param.
                    assert(!method.params.empty() && method.params.front().is_this_param);

                    // If this is a mutating overloaded operator that will get rewritten into a function because of this fact,
                    //   skip it, because its const version won't be rewritten in this way, so there will be no conflict.
                    // We could also check `IsMutatingOverloadedOperatorThatMustBeFuncInExposedStruct(method)` here, but that looks like
                    //   it doesn't change anything.
                    // And it also makes things consistent with static operators (where the second parameter is the one matching enclosing class),
                    //   which are skipped entirely due to the `is_static` check above.
                    if (IsOverloadableOpOrConvOp(&method) && IsMutatingOverloadedOperatorThatMustBeFuncInExposedStruct(method))
                        continue;

                    const auto &type = ParseTypeOrThrow(method.params.front().cpp_type);
                    if (!type.Is<cppdecl::Reference>())
                        continue; // We don't care about methods with non-ref this parameters.

                    if (type.IsConst(1))
                        continue; // We only want non-const methods.

                    if (auto desc = GetMethodDescForConstnessOverlapCheck(method))
                        nonconst_methods_in_exposed_struct.insert(std::move(*desc));
                }
            }

            // If `class_part_kind` isn't null, then it means `is_const`.
            // If it is null, we're in the `struct` corresponding to an exposed C++ struct.
            auto ShouldEmitMethodHere = [&](const CInterop::ClassMethod &method, std::optional<bool> class_part_kind, EmitVariant emit_variant)
            {
                auto result = ShouldEmitMethod(cpp_qual_name, type_desc, method, emit_variant);
                if (!result)
                    return false;
                if (!class_part_kind)
                    return true;
                return *class_part_kind ? result->emit_in_const : result->emit_in_mut;
            };

            // This lambda emits all types nested in this one, if any.
            auto EmitNestedClasses = [&]
            {
                ForEachNestedType(cpp_qual_name, [&](const cppdecl::QualifiedName &cpp_nested_type)
                {
                    EmitCppTypeUnconditionally(file, CppdeclToCode(cpp_nested_type));
                });
            };

            // Returns true if this half of the class has `begin` and `end` methods or free functions.
            // Doesn't automatically propagate const methods to the non-const half, that has to be done manually.
            auto BeginEndExistForClassPart = [&](bool is_const) -> bool
            {
                auto iter = begin_end_class_funcs.find(std::make_pair(cpp_type, is_const));
                if (iter == begin_end_class_funcs.end())
                    return false;
                return iter->second.BothExist();
            };

            // If `class_part_kind` isn't null, then it means `is_const`.
            // If it is null, we're in the `struct` corresponding to an exposed C++ struct.
            auto EmitClassPart = [&](std::optional<bool> class_part_kind, ClassShadowingData *shadowing_data)
            {
                // Is this a const half of the class, as opposed to non-const?
                // Throws if this is actually a `struct`, which is neither.
                auto IsConst = [&]{return class_part_kind.value();};
                const bool is_exposed_struct_by_value = !class_part_kind;

                try
                {
                    const std::string unqual_csharp_name = is_exposed_struct_by_value
                        ? CppToCSharpUnqualExposedStructName(cpp_qual_name)
                        : CppToCSharpUnqualClassName(cpp_qual_name, IsConst());

                    // Do we have bindings for `std::shared_ptr<T>`?
                    // The C name for `std::shared_ptr<T>`, if we have that.
                    // We're intentionally not using `std::shared_ptr<const T>`, it makes things easier.
                    std::optional<std::string> c_sharedptr_name;
                    if (shared_ptr_desc)
                    {
                        c_sharedptr_name = std::get<CInterop::TypeKinds::Class>(shared_ptr_desc->var).c_name;
                    }

                    // This is just `std::shared_ptr<const void>`, since this is what all our aliasing `shared_ptr` constructors take.
                    // Ultimately it doesn't matter, since we're going to be `reinterpret_cast`ing
                    //   other shared pointers to this type anyway, but still using the proper type makes things more clear.
                    // And it'll also help if we decide to get rid of the uncool cast one day.
                    static const cppdecl::QualifiedName cpp_sharedptr_constvoid_name = cppdecl::QualifiedName{}.AddPart("std").AddPart("shared_ptr").AddTemplateArgument(cppdecl::Type::FromSingleWord("void").AddQualifiers(cppdecl::CvQualifiers::const_));
                    // This is the C# name of the underlying raw pointer used in the C# wrapper of `std::shared_ptr<const void>`.
                    static const std::optional<std::string> sharedptr_constvoid_underlying_ptr_type = c_desc.FindTypeOpt(CppdeclToCode(cpp_sharedptr_constvoid_name)) ? std::optional(CppToCSharpClassName(cpp_sharedptr_constvoid_name, true) + "._Underlying *") : std::nullopt;

                    // Is this an equality comparison that gets implemented as an overloaded operator in C#.
                    auto IsEqualityComparisonForIEquatable = [&](const CInterop::ClassMethod &method)
                    {
                        // Skip backwards comparisons.
                        // This may not be correct in some cases, but this is way easier than doing the right thing.
                        // If we don't check this, then we would also need to make sure there's no symmetric comparison, to avoid duplicating
                        //   the IEquatable implementation.
                        // Note that C# doesn't automatically mirror `==`.
                        if (method.is_static)
                            return false;

                        if (!std::holds_alternative<CInterop::MethodKinds::Operator>(method.var) || !IsOverloadableOpOrConvOp(&method))
                            return false;
                        if (std::get<CInterop::MethodKinds::Operator>(method.var).token != "==")
                            return false;
                        return true;
                    };


                    // Begin writing the class.
                    file.WriteSeparatingNewline();

                    { // The comment, if any.
                        std::string comment = class_desc.comment.c_style;

                        if (is_exposed_struct_by_value)
                            comment += "/// This is the by-value version of the struct.\n";
                        else
                            comment += "/// This is the " + std::string(IsConst() ? "const" : "non-const") + " " + (class_desc.kind == CInterop::ClassKind::exposed_struct ? "reference to the struct" : "half of the class") + ".\n";

                        WriteComment(file, comment);
                    }

                    // The struct attributes.
                    if (is_exposed_struct_by_value)
                    {
                        // There's also `Pack = ...` parameter. It looks related to alignment, but the docs say that it only affects
                        //   the automatic field layout if that's enabled, and not the alignment of the entire struct.
                        // Instead I'm going to assume that it aligns by the largest field size, and check that below.
                        file.WriteString("[System.Runtime.InteropServices.StructLayout(System.Runtime.InteropServices.LayoutKind.Explicit, Size = " + std::to_string(class_desc.size_and_alignment.value().size) + ")]\n");
                    }

                    // The class header.
                    file.WriteString(is_exposed_struct_by_value ? "public struct " : "public class ");
                    file.WriteString(unqual_csharp_name);

                    bool base_implements_any_iequatable = false;
                    std::string iequatable_impls;
                    std::string iequatable_generic_impl;

                    bool is_ienumerable = false;
                    bool base_is_ienumerable = false;
                    std::string ienumerable_csharp_iter_type;
                    std::string ienumerable_csharp_elem_type;
                    std::string ienumerable_csharp_call_begin;
                    std::string ienumerable_csharp_call_end;
                    std::string ienumerable_csharp_call_incr;
                    std::string ienumerable_csharp_return_deref;

                    { // Write the bases.
                        auto BaseSeparator = [&, first = true]() mutable
                        {
                            if (first)
                            {
                                first = false;
                                file.WriteString(" : ");
                            }
                            else
                            {
                                file.WriteString(", ");
                            }
                        };

                        if (is_exposed_struct_by_value)
                        {
                            // Nothing.
                        }
                        else if (!IsConst())
                        {
                            BaseSeparator();

                            // Inherit from the const half.
                            file.WriteString(CppToCSharpUnqualClassName(cpp_qual_name, true));
                        }
                        else
                        {
                            // The default base and some default interfaces.

                            BaseSeparator();
                            file.WriteString(RequestHelper(shared_ptr_desc ? "SharedObject" : "Object") + "<" + unqual_csharp_name + ">");

                            if (type_desc.traits.value().is_destructible)
                            {
                                BaseSeparator();
                                file.WriteString("System.IDisposable");
                            }
                        }

                        // `IEquatable<T>` for our equality comparisons.
                        for (const CInterop::ClassMethod &method : class_desc.methods)
                        {
                            if (ShouldEmitMethodHere(method, class_part_kind, EmitVariant::regular) && IsEqualityComparisonForIEquatable(method))
                            {
                                FuncLikeEmitter dummy_emitter(*this, &method, MakeUnqualCSharpMethodName(method, class_part_kind, EmitVariant::regular), class_part_kind, EmitVariant::regular);

                                const ManagedKind param_managed_kind =
                                    is_exposed_struct_by_value && dummy_emitter.is_op_with_symmetric_self_args
                                    ? ManagedKind::never_managed // Gotta adjust the condition a little.
                                    : ClassifyParamManagedKind(ParseTypeOrThrow(method.params.at(1).cpp_type), !is_exposed_struct_by_value && dummy_emitter.is_op_with_symmetric_self_args/*ugh*/);
                                const bool param_is_managed = param_managed_kind == ManagedKind::managed;

                                // There's an extra dummy `this` parameter in static methods.
                                // Note that `IsEqualityComparisonForIEquatable()` currently rejects static (i.e. backwards) comparisons,
                                //   so this all is purely for the future.
                                assert(dummy_emitter.param_strings.size() == (method.is_static ? 3 : 2));

                                // This describes the other parameter, the one that may have a type not matching `this`.
                                auto &param_strings = dummy_emitter.param_strings.at(1);

                                // Remove `in` from the parameter, to match what the interface expects.
                                bool removed_in = false;
                                if (param_strings.csharp_decl_params.front().type.starts_with("in "))
                                {
                                    removed_in = true;
                                    param_strings.csharp_decl_params.front().type.erase(0, 3);
                                }

                                assert(param_strings.csharp_decl_params.size() == 1);

                                std::string interface_targ = param_strings.csharp_decl_params.front().type;
                                if (interface_targ.ends_with('?') && param_is_managed)
                                    interface_targ.pop_back(); // `IEquatable<T>` requires implementing `Equals(T? t)`, so just in case.

                                // Inherit from the interface.
                                BaseSeparator();
                                file.WriteString("System.IEquatable<" + interface_targ + ">");

                                auto param = param_strings.csharp_decl_params.front();
                                param.default_arg = {};
                                bool added_nullability = false;
                                if (param_is_managed && !param.type.ends_with('?'))
                                {
                                    added_nullability = true;
                                    param.type += '?'; // The interface requires this.
                                }

                                std::string param_type_without_in_and_nullable = param.type;
                                if (param_type_without_in_and_nullable.ends_with('?'))
                                    param_type_without_in_and_nullable.pop_back();
                                if (param_type_without_in_and_nullable.starts_with("in "))
                                    param_type_without_in_and_nullable.erase(0, 3);

                                if (iequatable_impls.empty())
                                    iequatable_impls += "\n// IEquatable:\n\n";
                                else
                                    iequatable_impls += '\n';

                                // This should never be true normally, but let's be extra safe.
                                const bool equal_is_method = is_exposed_struct_by_value && IsMutatingOverloadedOperatorThatMustBeFuncInExposedStruct(method);

                                iequatable_impls +=
                                    "public bool Equals(" + param.ToString() + ")\n"
                                    "{\n"
                                    + (added_nullability ? "    if (" + param.name + " is null)\n        return false;\n" : "") +
                                    (
                                        equal_is_method
                                        ? "    return this." + AdjustCalledFuncName("Equal") + "(" + param.name + ");\n" // This should never be necessary...
                                        // If the original `==` has an `in` parameter, we need a cast here, otherwise it can't find a function to call. No idea why.
                                        : "    return this == " + (removed_in ? "(" + param_type_without_in_and_nullable + ")" : "") + param.name + ";\n"
                                    ) +
                                    "}\n";

                                iequatable_generic_impl +=
                                    "    if (other is " + param_type_without_in_and_nullable + ")\n" +
                                    (
                                        equal_is_method
                                        ? "        return this.Equals((" + param_type_without_in_and_nullable + ")other);\n" // This should never be necessary...
                                        : "        return this == (" + param_type_without_in_and_nullable + ")other;\n"
                                    );
                            }

                            // Check the base too.
                            if (!is_exposed_struct_by_value && !IsConst() && ShouldEmitMethodHere(method, true, EmitVariant::regular) && IsEqualityComparisonForIEquatable(method))
                                base_implements_any_iequatable = true;
                        }

                        // `IEnumerable<T>` for containers.
                        if (!is_exposed_struct_by_value && BeginEndExistForClassPart(IsConst()))
                        {
                            try
                            {
                                is_ienumerable = true;

                                if (!IsConst() && BeginEndExistForClassPart(true))
                                    base_is_ienumerable = true;

                                const ClassBeginEndFuncs &info = begin_end_class_funcs.at(std::make_pair(cpp_type, IsConst()));

                                ienumerable_csharp_call_begin = info.begin.MemberExists() ? "_container." + AdjustCalledFuncName("Begin") + "()" : info.begin.nonmember_csharp_name.value() + "(_container)";
                                ienumerable_csharp_call_end   = info.end  .MemberExists() ? "_container." + AdjustCalledFuncName("End"  ) + "()" : info.end  .nonmember_csharp_name.value() + "(_container)";

                                // First, figure out the iterator type. We're getting it from `begin()`, in case `end()` returns a sentinel of a different type.
                                const cppdecl::Type &cpp_iter_type = info.begin.MemberExists() ? info.begin.member_return_type.value() : info.begin.nonmember_return_type.value();
                                // And also the sentinel type.
                                const cppdecl::Type &cpp_sentinel_type = info.end.MemberExists() ? info.end.member_return_type.value() : info.end.nonmember_return_type.value();

                                // Not using `CppToCSharpKnownSizeType` to get `ienumerable_csharp_iter_type` for pointers, since it doesn't handle pointers to classes correctly, and just gives `void *` for those.
                                // So instead we unconditionally use `GetTypeBinding()`.
                                ienumerable_csharp_iter_type = GetTypeBinding(cpp_iter_type, TypeBindingFlags::pointer_to_array).return_usage.value().csharp_return_type;

                                if (HaveCSharpFeatureNonStaticIncrementAndDecrement())
                                    ienumerable_csharp_call_incr = "_cur++";
                                else
                                    ienumerable_csharp_call_incr = "_cur." + AdjustCalledFuncName("Incr") + "()";

                                cppdecl::Type cpp_elem_type;
                                if (cpp_iter_type.Is<cppdecl::Pointer>())
                                {
                                    // The element type is same as the pointer type, but with the pointer replaced with a reference.
                                    cpp_elem_type = cpp_iter_type;
                                    cpp_elem_type.RemoveModifier();
                                    cpp_elem_type.AddModifier(cppdecl::Reference());
                                }
                                else
                                {
                                    const CInterop::TypeDesc *iter_desc = c_desc.FindTypeOpt(CppdeclToCode(cpp_iter_type));
                                    if (!iter_desc)
                                        throw std::runtime_error("No information about the iterator type `" + CppdeclToCode(cpp_iter_type) + "`.");
                                    auto cl = std::get_if<CInterop::TypeKinds::Class>(&iter_desc->var);
                                    if (!cl)
                                        throw std::runtime_error("The iterator type `" + CppdeclToCode(cpp_iter_type) + "` is neither a pointer nor a class, not sure what to do with it.");

                                    // Find the dereference method.
                                    bool found_deref = false;
                                    for (const auto &method : cl->methods)
                                    {
                                        auto op = std::get_if<CInterop::MethodKinds::Operator>(&method.var);

                                        // Must be unary operator `*`.
                                        if (!op || op->token != "*" || method.params.size() != 1)
                                            continue;

                                        // Complain if we have multiple such operators.
                                        if (!cpp_elem_type.IsEmpty())
                                            throw std::runtime_error("The iterator type `" + CppdeclToCode(cpp_iter_type) + "` has multiple unary `*` operators, expected exactly one.");

                                        found_deref = true;
                                        cpp_elem_type = ParseTypeOrThrow(method.ret.cpp_type);

                                        // Don't break yet, we want to check for other unary `*` operators, and complain if there's more than one.
                                    }
                                    if (!found_deref)
                                        throw std::runtime_error("The iterator type `" + CppdeclToCode(cpp_iter_type) + "` doesn't have an unary `*` operator.");


                                    // Check for the equality comparison with the sentinel.
                                    // This a best-effort sanity check. If the comparison doesn't exist, `==` in our enumerator implementation will compare addresses and never stop.

                                    // Check the iterator class for the equality operator.
                                    // NOTE: The C# comparisons are not automatically symmetric, so we're not checking the sentinel class for a symmetric equality, if this one isn't found.
                                    //   Maybe we should make them symmetric ourselves eventually.
                                    bool found_eq = false;
                                    for (const auto &method : cl->methods)
                                    {
                                        auto op = std::get_if<CInterop::MethodKinds::Operator>(&method.var);

                                        // Must be non-static binary operator `==`.
                                        if (!op || op->token != "==" || method.params.size() != 2 || method.is_static)
                                            continue;

                                        // Check that the parameter type matches.
                                        cppdecl::Type second_param_type = ParseTypeOrThrow(method.params.at(1).cpp_type);
                                        if (second_param_type.IsLvalueReference())
                                            second_param_type.RemoveModifier();
                                        second_param_type.RemoveQualifiers(cppdecl::CvQualifiers::const_);

                                        if (second_param_type != cpp_sentinel_type)
                                            continue; // The parameter type doesn't match.

                                        // Don't bother checking for duplicates.
                                        found_eq = true;
                                        break;
                                    }
                                    if (!found_eq)
                                        throw std::runtime_error("The iterator type `" + CppdeclToCode(cpp_iter_type) + "` isn't equality-comparable with itself.");
                                }

                                // If the iterator dereferences to a pointer, abort. We can't handle that yet. TODO fix this.
                                if (cpp_elem_type.Is<cppdecl::Reference>() && cpp_elem_type.Is<cppdecl::Pointer>(1))
                                {
                                    // Nope out of here.
                                    is_ienumerable = false;
                                }

                                if (is_ienumerable)
                                {
                                    // Need `return_ref_wrapper` because `ref T` can't serve as a generic argument.
                                    ienumerable_csharp_elem_type = GetTypeBinding(cpp_elem_type, TypeBindingFlags::return_ref_wrapper).return_usage.value().csharp_return_type;

                                    // For iterator classes this comes from a C++ overloaded operator `*`. C# doesn't let you overload the unary `*`, so it becomes a function.
                                    // And for unbounded array wrappers, we implement this ourselves.
                                    if (ienumerable_csharp_elem_type.starts_with(MakeHelperNameWithoutRegistration("Ref") + "<"))
                                        ienumerable_csharp_return_deref = "return new(ref _cur." + AdjustCalledFuncName("Deref") + "());"; // Must construct our `Ref` class explicitly.
                                    else if (ienumerable_csharp_elem_type.starts_with(MakeHelperNameWithoutRegistration("ConstRef") + "<"))
                                        ienumerable_csharp_return_deref = "return new(in _cur." + AdjustCalledFuncName("Deref") + "());"; // Interestingly, this doesn't compile with `ref`, compiles without `ref` but warns, and the warnings suggests adding `in`. Hmm.
                                    else
                                        ienumerable_csharp_return_deref = "return _cur." + AdjustCalledFuncName("Deref") + "();";


                                    // We add the interface to the non-const half if it has its own customized begin/end, even if the const half has them too.
                                    // It's easier this way, and could improve clarity too.
                                    // And also in C#, methods overridden from interfaces don't automaticaly become overridable (unless you make them virtual), so this helps with correctness too.

                                    BaseSeparator();
                                    file.WriteString("IEnumerable<" + ienumerable_csharp_elem_type + ">");
                                }
                            }
                            catch (...)
                            {
                                std::throw_with_nested(std::runtime_error("While implementing `IEnumerable`:"));
                            }
                        }
                    }
                    file.PushScope({}, "\n{\n", "}\n");

                    // The underlying pointer.
                    // This is done only for the const halves, because the non-const ones can always reuse the pointer from the const half.
                    if (!is_exposed_struct_by_value && IsConst())
                    {
                        file.WriteSeparatingNewline();

                        // The opaque struct type for the raw pointer.
                        // For exposed structs, this is wrongly typed, as it should match the struct itself.
                        // But it's easier to keep this a separate type, since C# seemingly doesn't have type aliases, and it's easier to not touch
                        //   all the other code that assumes this name.
                        // Fun fact: `struct X;` also works in C# 12 and newer, but it has the same effect (you can still make an object of this struct, unlike in C++).
                        //   This isn't just a cool replacement for `{}`, since apparently it's a special case of the `struct X(params...)` syntax,
                        //   which both defines the struct and gives it a list of members and a constructor at the same time.
                        file.WriteString("internal struct _Underlying {} // Represents the underlying C++ type.\n");

                        // The opaque struct type for the shared pointer.
                        if (shared_ptr_desc)
                            file.WriteString("internal struct _UnderlyingShared {} // Represents the underlying shared pointer C++ type.\n");


                        if (!shared_ptr_desc)
                        {
                            // Declare our own raw pointer.
                            file.WriteSeparatingNewline();
                            file.WriteString("internal unsafe _Underlying *_UnderlyingPtr;\n");
                        }
                        else
                        {
                            // Declare our own shared pointer.

                            file.WriteSeparatingNewline();

                            file.WriteString("internal unsafe _UnderlyingShared *_UnderlyingSharedPtr;\n");

                            { // Get underlying raw pointer from the shared pointer.
                                file.WriteString("internal unsafe _Underlying *_UnderlyingPtr\n");
                                file.PushScope();
                                file.WriteString("get\n");
                                file.PushScope();

                                file.WriteString("System.Diagnostics.Trace.Assert(_SharedPtrIsNotNull, \"Internal error: This object holds a null shared pointer.\");\n");

                                auto dllimport_get_ptr_from_shared = MakeDllImportDecl(c_sharedptr_name.value() + "_get", "_Underlying *", "_UnderlyingShared *_this");
                                file.WriteString(dllimport_get_ptr_from_shared.dllimport_decl);
                                file.WriteString("return " + dllimport_get_ptr_from_shared.csharp_name + "(_UnderlyingSharedPtr);\n");

                                file.PopScope();
                                file.PopScope();
                            }

                            { // Check if the underlying shared pointer owns the target object.
                                file.WriteSeparatingNewline();
                                WriteComment(file, "/// Check if the underlying shared pointer is owning or not.\n");
                                file.WriteString("public override unsafe bool _IsOwning\n");
                                file.PushScope();
                                file.PushScope({}, "get\n{\n", "}\n");

                                auto dllimport_use_count = MakeDllImportDecl(c_sharedptr_name.value() + "_use_count", "int", "_UnderlyingShared *_this");
                                file.WriteString(dllimport_use_count.dllimport_decl);
                                file.WriteString("return " + dllimport_use_count.csharp_name + "(_UnderlyingSharedPtr) > 0;\n");

                                file.PopScope();
                                file.PopScope();
                            }

                            { // Check if the underlying shared isn't null.
                                file.WriteSeparatingNewline();
                                WriteComment(file,
                                    "/// Check if the underlying shared pointer is non-null.\n"
                                    "/// If this returns null, calling any member other than `.Assign()` on this object will assert.\n"
                                );
                                file.WriteString("private unsafe bool _SharedPtrIsNotNull\n");
                                file.PushScope();
                                file.PushScope({}, "get\n{\n", "}\n");

                                auto dllimport_use_count = MakeDllImportDecl(c_sharedptr_name.value() + "_get", "void *", "_UnderlyingShared *_this");
                                file.WriteString(dllimport_use_count.dllimport_decl);
                                file.WriteString("return " + dllimport_use_count.csharp_name + "(_UnderlyingSharedPtr) is not null;\n");

                                file.PopScope();
                                file.PopScope();
                            }
                        }
                    }

                    // Get reference to the underlying exposed struct.
                    // We can't rely on a conversion operator for this, since conversion operators apparently can't return references.
                    if (class_desc.kind == CInterop::ClassKind::exposed_struct && !is_exposed_struct_by_value)
                    {
                        const std::string struct_name = CppToCSharpUnqualExposedStructName(cpp_qual_name);

                        file.WriteSeparatingNewline();
                        WriteComment(file,
                            "/// Get the underlying struct.\n"
                        );
                        file.WriteString(
                            "public unsafe " +
                            std::string(IsConst() ? "" : "new ") +
                            (IsConst() ? "ref readonly " : "ref ") +
                            struct_name + " " +
                            "_Ref => ref *(" + struct_name + " *)_UnderlyingPtr;\n"
                        );
                    }

                    // The `IDisposable` implementation and the destructor.
                    // We don't need this and can't emit this if the underlying type isn't destructible. In that case we don't emit the constructors as well.
                    // Except if we're also using a shared pointer; then we DO need this, as we must destroy the shared pointer even if it's non-owning.
                    if (!is_exposed_struct_by_value && IsConst() && (type_desc.traits.value().is_destructible || shared_ptr_desc))
                    {
                        bool using_generic_free = class_desc.kind == CInterop::ClassKind::exposed_struct && !shared_ptr_desc;

                        std::optional<DllImportDeclStrings> dllimport_free;
                        if (!using_generic_free)
                        {
                            dllimport_free =
                                shared_ptr_desc
                                ? MakeDllImportDecl(c_sharedptr_name.value() + "_Destroy", "void", "_UnderlyingShared *_this")
                                : MakeDllImportDecl(class_desc.c_name + "_Destroy", "void", "_Underlying *_this");
                        }

                        file.WriteSeparatingNewline();

                        file.WriteString("protected virtual unsafe void Dispose(bool disposing)\n");
                        file.PushScope();
                        file.WriteString(
                            // Notice the use of `_IsOwningVal` instead of `_IsOwning`. They mean the same thing if shared pointers are not involved,
                            //   but if they ARE involved, then `_IsOwning` will check if the shared pointer owns the target or not,
                            //   while `_IsOwningVal` will check if we own the shared pointer itself or not.
                            // Here `_UnderlyingPtr` should never normally be null, unless something goes really wrong during construction,
                            //   but `_IsOwningVal` being false is common.
                            "if (" + std::string(shared_ptr_desc ? "_UnderlyingSharedPtr" : "_UnderlyingPtr") + " is null || !_IsOwningVal)\n"
                            "    return;\n" +
                            // Here we'd have `if (disposing)` where we would explicitly `.Dispose()` managed data members, if we had any.
                            (dllimport_free ? dllimport_free->dllimport_decl : "") +
                            (using_generic_free ? RequestHelper("_Free") : dllimport_free.value().csharp_name) + "(" + (using_generic_free ? "(void *)" : "") + (shared_ptr_desc ? "_UnderlyingSharedPtr" : "_UnderlyingPtr") + ");\n" +
                            (shared_ptr_desc ? "_UnderlyingSharedPtr" : "_UnderlyingPtr") + " = null;\n"
                        );

                        // Here we'd call `base.Dispose(disposing);` if we had a base class.

                        file.PopScope(); // Close `void Dispose(bool disposing)`.
                        file.WriteString(
                            "public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}\n"
                            "~" + std::string(unqual_csharp_name) + "() {Dispose(false);}\n"
                        );
                    }

                    // The `IEnumerable` implementation, if needed.
                    if (is_ienumerable)
                    {
                        file.WriteSeparatingNewline();

                        std::string maybe_new = base_is_ienumerable ? "new " : "";

                        file.WriteString("public " + maybe_new + "class _Enumerator : IEnumerator<" + ienumerable_csharp_elem_type + ">\n");
                        file.PushScope();

                        const bool is_raw_ptr = ienumerable_csharp_iter_type.ends_with('*');

                        file.WriteString(
                            // Store the container. We need this to call `end()`. Also enumerators optionally support rewinding, and this lets us do this too.
                            unqual_csharp_name + " _container;\n" +
                            // Store the current iterator.
                            (is_raw_ptr ? "unsafe " : "") + ienumerable_csharp_iter_type + (ienumerable_csharp_iter_type.ends_with('*') ? "" : " ") + "_cur;\n"
                            // C# enumerators initially point before the first element, so we need a flag to indicate that.
                            "bool _first = true;\n"
                            "bool _done;\n"
                            "\n"
                            // Constructor.
                            // The interface doesn't require it (and can't require it), but we need a way to construct it, and might as well make it public.
                            // It can't be `private` (to be callable from the enclosing class), but can be `internal`.
                            "public " + (is_raw_ptr ? "unsafe " : "") + "_Enumerator(" + unqual_csharp_name + " container)\n"
                            "{\n"
                            "    _container = container;\n"
                            "    _cur = " + ienumerable_csharp_call_begin + ";\n"
                            "    _done = _cur == " + ienumerable_csharp_call_end + ";\n"
                            "}\n"
                            "\n"
                            // Implement dereferencing.
                            "public " + (is_raw_ptr ? "unsafe " : "") + ienumerable_csharp_elem_type + " Current\n"
                            "{\n"
                            "    get\n"
                            "    {\n"
                            "        if (_first || _done)\n"
                            "            throw new " + RequestHelper("InvalidEnumeratorExpression") + "(\"Attempting to dereference an invalid enumerator.\");\n" +
                            Strings::Indent(ienumerable_csharp_return_deref, 2) + "\n"
                            "    }\n"
                            "}\n"
                            "\n"
                            // Implement generic dereferencing needed for `IEnumerator`, which `IEnumerator<T>` inherits from.
                            "object System.Collections.IEnumerator.Current => Current;\n"
                            "\n"
                            // Implement incrementing.
                            "public " + (is_raw_ptr ? "unsafe " : "") + "bool MoveNext()\n"
                            "{\n"
                            "    if (_done)\n"
                            "        return false;\n"
                            "    if (_first)\n"
                            "    {\n"
                            "        _first = false;\n"
                            "        return true;\n"
                            "    }\n"
                            "    " + ienumerable_csharp_call_incr + ";\n"
                            "    if (_cur == " + ienumerable_csharp_call_end + ")\n"
                            "    {\n"
                            "        _done = true;\n"
                            "        return false;\n"
                            "    }\n"
                            "    return true;\n"
                            "}\n"
                            "\n"
                            // Implement resetting. This feature is optional, you're allowed to throw instead of implementing it, but we do it anyway.
                            "public " + (is_raw_ptr ? "unsafe " : "") + "void Reset()\n"
                            "{\n"
                            "    _cur = " + ienumerable_csharp_call_begin + ";\n"
                            "    _first = true;\n"
                            "    _done = false;\n"
                            "}\n"
                        );

                        // `IEnumerator<T>` inherits from `IDisposable`, so we need a dummy implementation.
                        file.WriteSeparatingNewline();
                        file.WriteString("void IDisposable.Dispose() {}\n");

                        file.PopScope(); // Close `class _Enumerator`.

                        // Implement `GetEnumerator()` in this class.
                        file.WriteSeparatingNewline();
                        file.WriteString(
                            "public " + maybe_new + "IEnumerator<" + ienumerable_csharp_elem_type + "> GetEnumerator()\n"
                            "{\n"
                            "    return new _Enumerator(this);\n"
                            "}\n"
                            "\n"
                            // Must also implement the generic version for `IEnumerable`, which `IEnumerable<T>` inherits from.
                            "System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()\n"
                            "{\n"
                            "    return GetEnumerator();\n"
                            "}\n"
                        );
                    }

                    // Emit the custom upcasts/downcasts.
                    // `struct`s can't inherit from classes (only from in
                    if (!is_exposed_struct_by_value)
                    {
                        { // Upcasts.
                            bool first = true;
                            for (const auto &base_name : class_desc.inheritance_info.bases_indirect.Vec())
                            {
                                if (class_desc.inheritance_info.bases_indirect.Map().at(base_name) == CInterop::InheritanceInfo::Kind::ambiguous)
                                    continue; // Skip ambiguous bases.

                                if (first)
                                {
                                    file.WriteSeparatingNewline();
                                    file.WriteString("// Upcasts:\n");
                                    first = false;
                                }

                                const auto &base_desc = std::get<CInterop::TypeKinds::Class>(c_desc.cpp_types.Map().at(base_name).var);

                                const std::string csharp_base_name = CppToCSharpClassName(ParseNameOrThrow(base_name), IsConst());

                                file.WriteString("public static unsafe implicit operator " + csharp_base_name + "(" + unqual_csharp_name + " self)\n");
                                file.PushScope();


                                auto dllimport_decl = MakeDllImportDecl(class_desc.c_name + "_UpcastTo_" + base_desc.c_name, CppToCSharpClassName(ParseNameOrThrow(base_name), IsConst()) + "._Underlying *", "_Underlying *_this");
                                file.WriteString(dllimport_decl.dllimport_decl);

                                if (!shared_ptr_desc)
                                {
                                    file.WriteString(
                                        csharp_base_name + " ret = new(" + dllimport_decl.csharp_name + "(self._UnderlyingPtr), is_owning: false);\n"
                                        "ret._KeepAliveEnclosingObject = self;\n"
                                        "return ret;\n"
                                    );
                                }
                                else
                                {
                                    // Here we must produce a proper copy of the shared pointer, instead of relying on our C# `_KeepAlive`, since the user
                                    //   can pass that shared pointer to C++, and it better be owning in case the C# code destroys its last wrapper for it.
                                    // Also here we reinterpret all shared pointers as `std::shared_ptr<const void>`, which is slightly uncool,
                                    //   but makes things easier for us. Our C API is good enough that we could express this legally, but that would
                                    //   introduce an extra heap-allocated instance of `std::shared_ptr<const void>`, which is something I don't want.
                                    file.WriteString("return " + csharp_base_name + "._MakeAliasing((" + sharedptr_constvoid_underlying_ptr_type.value() + ")self._UnderlyingSharedPtr, " + dllimport_decl.csharp_name + "(self._UnderlyingPtr));\n");
                                }

                                file.PopScope();
                            }
                        }

                        { // Downcasts.
                            bool first = true;
                            for (const auto &base_name : class_desc.inheritance_info.bases_indirect.Vec())
                            {
                                if (class_desc.inheritance_info.bases_indirect.Map().at(base_name) == CInterop::InheritanceInfo::Kind::ambiguous)
                                    continue; // Skip ambiguous bases.

                                const auto &base_desc = std::get<CInterop::TypeKinds::Class>(c_desc.cpp_types.Map().at(base_name).var);

                                if (!base_desc.is_polymorphic)
                                    continue; // For now we don't do static downcasts, as they are unsafe.

                                if (first)
                                {
                                    file.WriteSeparatingNewline();
                                    file.WriteString("// Downcasts:\n");
                                    first = false;
                                }

                                const std::string csharp_base_name = CppToCSharpClassName(ParseNameOrThrow(base_name), IsConst());
                                file.WriteString("public static unsafe explicit operator " + unqual_csharp_name + "?(" + csharp_base_name + " parent)\n");
                                file.PushScope();

                                auto dllimport_decl = MakeDllImportDecl(base_desc.c_name + "_DynamicDowncastTo_" + class_desc.c_name, "_Underlying *", CppToCSharpClassName(ParseNameOrThrow(base_name), IsConst()) + "._Underlying *_this");
                                file.WriteString(dllimport_decl.dllimport_decl);

                                file.WriteString(
                                    "var ptr = " + dllimport_decl.csharp_name + "(parent._UnderlyingPtr);\n"
                                    "if (ptr is null) return null;\n"
                                );

                                if (!shared_ptr_desc)
                                {
                                    file.WriteString(
                                        unqual_csharp_name + " ret = new(ptr, is_owning: false);\n"
                                        "ret._KeepAliveEnclosingObject = parent;\n"
                                        "return ret;\n"
                                    );
                                }
                                else
                                {
                                    // See the upcast code above for an explanation of what we're doing here and why.
                                    file.WriteString(
                                        "return " + unqual_csharp_name + "._MakeAliasing((" + sharedptr_constvoid_underlying_ptr_type.value() + ")parent._UnderlyingSharedPtr, ptr);\n"
                                    );
                                }

                                file.PopScope();
                            }
                        }
                    }

                    { // Handle the fields.
                        // Those strings are only used with `--fat-objects`.
                        std::string field_init_nonstatic;
                        std::string field_init_static;

                        { // Emit the fields themselves.
                            for (const auto &field : class_desc.fields)
                            {
                                // Custom for non-static fields in exposed fields.
                                if (!field.is_static && class_desc.kind == CInterop::ClassKind::exposed_struct)
                                {
                                    const cppdecl::Type cpp_type = ParseTypeOrThrow(field.type);

                                    auto csharp_type = CppToCSharpKnownSizeType(cpp_type);
                                    if (!csharp_type)
                                        throw std::runtime_error("Don't know how to bind field `" + field.full_name + "` of type `" + field.type + "` in an exposed struct.");

                                    const bool is_bool = cpp_type.AsSingleWord() == "bool";

                                    const std::string csharp_field_name = CppToCSharpFieldName(cpp_qual_name, field.is_static, field.full_name);

                                    file.WriteSeparatingNewline();

                                    // Write comment.
                                    file.WriteString(field.comment.c_style);

                                    // Write the field by value, if we're in the by-value part.
                                    if (is_exposed_struct_by_value)
                                    {
                                        const std::string offset_attr = "[System.Runtime.InteropServices.FieldOffset(" + std::to_string(field.layout.value().byte_offset) + ")]\n";

                                        // Write the field itself.
                                        if (is_bool)
                                        {
                                            // We hide bools behind properties, since they're stores as `byte`s.
                                            // We could try `bool` + `MarshalAs()`, but I heard that even then `bool`s in C# are "not blittable",
                                            //   which roughly means "not trivially copyable" (apparently in the sense that they can be corrupted by writing bad bytes to them),
                                            //   and as such don't work as return values: https://stackoverflow.com/a/32115697/2752075
                                            file.WriteString(
                                                // Put the field first, so that the emitted comment above gets attached to it.
                                                "public bool " + csharp_field_name + " {get => __storage_" + csharp_field_name + " != 0; set => __storage_" + csharp_field_name + " = value ? (byte)1 : (byte)0;}\n"
                                                + offset_attr +
                                                "byte __storage_" + csharp_field_name + ";\n"
                                            );
                                        }
                                        else
                                        {
                                            file.WriteString(
                                                offset_attr +
                                                "public " +
                                                *csharp_type + " " + csharp_field_name + ";\n"
                                            );
                                        }
                                    }
                                    // Or emit a property returning a reference to it, if we're in a wrapper class.
                                    else
                                    {
                                        if (is_bool)
                                        {
                                            file.WriteString(
                                                "public " +
                                                std::string(IsConst() ? "" : "new ") +
                                                "bool " +
                                                csharp_field_name + " " +
                                                (IsConst() ? "" : "{get ") +
                                                "=> _Ref." + csharp_field_name + ";" +
                                                (IsConst() ? "" : " set => _Ref." + csharp_field_name + " = value;}") +
                                                "\n"
                                            );
                                        }
                                        else
                                        {
                                            file.WriteString(
                                                "public " +
                                                std::string(IsConst() ? "" : "new ") +
                                                (IsConst() ? "ref readonly " : "ref ") +
                                                *csharp_type + " " +
                                                csharp_field_name +
                                                " => ref _Ref." + csharp_field_name + ";\n"
                                            );
                                        }
                                    }
                                }
                                else
                                {
                                    // Just the normal field.
                                    EmitCppField(file, cpp_qual_name, field, is_exposed_struct_by_value ? false : IsConst(), fat_objects ? (field.is_static ? &field_init_static : &field_init_nonstatic) : nullptr);
                                }
                            }
                        }

                        // A static constructor?
                        if (!field_init_static.empty())
                        {
                            assert(fat_objects);

                            file.WriteSeparatingNewline();
                            file.WriteString("unsafe static " + unqual_csharp_name + "()\n");
                            file.PushScope();
                            std::string_view view = field_init_static;
                            cppdecl::TrimLeadingWhitespace(view);
                            file.WriteString(view);
                            file.PopScope();
                        }

                        // Register the non-static init code.
                        if (!is_exposed_struct_by_value)
                        {
                            // We used to paste this code directly into the constructors, but it was moved to a function.
                            // The function isn't very convenient because it prevents `readonly` fields (those must be assigned in constructors),
                            //   but we happen to not use readonly fields anymore either, because we couldn't set them from the constructors of derived classes.
                            // Note the condition for non-const half checking the const half. If we don't do this, non-const halves that don't add new fields fail to initialize the fields in the const half.
                            class_name_to_fat_object_init_code.try_emplace(std::pair(cpp_type, IsConst()), field_init_nonstatic.empty() && (IsConst() || GetCtorFinalizationStatements(cpp_qual_name, true).empty()) ? "" : "_FinalizeFields();\n");

                            if (!field_init_nonstatic.empty())
                            {
                                file.WriteSeparatingNewline();
                                WriteComment(file, "/// Constructors call this at the end to initialize class fields.\n");
                                file.WriteString("protected " + std::string(!IsConst() ? "new " : "") + "unsafe void _FinalizeFields()\n");
                                file.PushScope();

                                std::string_view view = field_init_nonstatic;

                                if (!IsConst())
                                    file.WriteString("base._FinalizeFields();\n");
                                else
                                    cppdecl::TrimLeadingWhitespace(view);

                                file.WriteString(view);

                                file.PopScope();
                            }
                        }
                    }

                    // Conversion operator from the class wrapper to the exposed struct.
                    if (is_exposed_struct_by_value)
                    {
                        const std::string mut_name = CppToCSharpUnqualClassName(cpp_qual_name, false);
                        const std::string const_name = CppToCSharpUnqualClassName(cpp_qual_name, true);

                        file.WriteSeparatingNewline();
                        WriteComment(file,
                            "/// Copy contents from a wrapper class to this struct.\n"
                        );
                        file.WriteString(
                            "public static implicit operator " + unqual_csharp_name + "(" + const_name + " other) => other._Ref;\n"
                        );
                    }
                    // Constructor of the class wrapper from the exposed struct.
                    else if (class_desc.kind == CInterop::ClassKind::exposed_struct)
                    {
                        file.WriteSeparatingNewline();
                        WriteComment(file,
                            "/// Make a copy of a struct. (Even though we initially pass `is_owning: false`, we then use the copy constructor to produce an owning instance.)\n"
                        );
                        file.WriteString(
                            // Note, we must respect `copy_constructor_takes_nonconst_ref` here. Attempting to always use `is_const = false` sometimes causes ambiguities.
                            "public unsafe " + unqual_csharp_name + "(" + CppToCSharpUnqualExposedStructName(cpp_qual_name) + " other) : this(new " + CppToCSharpUnqualClassName(cpp_qual_name, !type_desc.traits.value().copy_constructor_takes_nonconst_ref) + "((_Underlying *)&other, is_owning: false))"
                        );
                        std::string_view extra_code = GetCtorFinalizationStatements(cpp_qual_name, IsConst());
                        if (!extra_code.empty())
                            file.WriteString(extra_code);
                        else
                            file.WriteString(" {}\n");

                        // In the const half, also add an implicit conversion.
                        // Note that this behavior should be synced with how `Box<T>` and `Const_Box<T>` implicitly convert from `T`.
                        if (IsConst())
                        {
                            WriteComment(file,
                                "/// Convert from a struct by copying it. Note that only `" + unqual_csharp_name + "` has this conversion, `" + CppToCSharpUnqualClassName(cpp_qual_name, false) + "` intentionally doesn't.\n"
                            );
                            file.WriteString(
                                "public static implicit operator " + unqual_csharp_name + "(" + CppToCSharpUnqualExposedStructName(cpp_qual_name) + " other) {return new(other);}\n"
                            );
                        }
                    }

                    // The constructor from a pointer.
                    if (!is_exposed_struct_by_value)
                    {
                        file.WriteSeparatingNewline();

                        std::string_view extra_code = GetCtorFinalizationStatements(cpp_qual_name, IsConst());

                        // Push silencing warnings about non-nullable fields not being initialized. Need this for `--fat-objects`.
                        if (!extra_code.empty())
                        {
                            // Putting this on the same line as the pragma (after it) trips the VSCode C# syntax highlighter.
                            file.WriteString("// Don't warn about some fields remaining conditionally uninitialized. We initialize them later.\n");
                            file.WriteString("#pragma warning disable CS8618\n");
                        }

                        file.WriteString("internal unsafe " + std::string(unqual_csharp_name) + "(_Underlying *ptr, bool is_owning)");

                        if (!IsConst())
                        {
                            file.WriteString(" : base(ptr, is_owning)");

                            if (!extra_code.empty())
                            {
                                file.PushScope({}, "\n{\n", "}\n");
                                file.WriteString("if (ptr is not null)\n"); // This is called with null pointers for delayed construction, so we must check this.
                                file.WriteString(Strings::Indent(extra_code));
                                file.PopScope();
                            }
                            else
                            {
                                file.WriteString(" {}\n");
                            }
                        }
                        else if (!shared_ptr_desc)
                        {
                            file.WriteString(" : base(is_owning)");

                            if (!extra_code.empty())
                            {
                                file.PushScope({}, "\n{\n", "}\n");
                                file.WriteString("_UnderlyingPtr = ptr;\n");
                                file.WriteString("if (ptr is not null)\n"); // This is called with null pointers for delayed construction, so we must check this.
                                file.WriteString(Strings::Indent(extra_code));
                                file.PopScope();
                            }
                            else
                            {
                                file.WriteString(" {_UnderlyingPtr = ptr;}\n");
                            }
                        }
                        else
                        {
                            // Here we must create either an owning or a non-owning shared pointer.

                            // We own our shared pointer regardless, so this is unconditionally true.
                            file.WriteString(" : base(true)\n");

                            file.PushScope();

                            auto dllimport_construct_owning = MakeDllImportDecl(c_sharedptr_name.value() + "_Construct", "_UnderlyingShared *", "_Underlying *other");
                            file.WriteString(dllimport_construct_owning.dllimport_decl);

                            auto dllimport_construct_nonowning = MakeDllImportDecl(c_sharedptr_name.value() + "_ConstructNonOwning", "_UnderlyingShared *", "_Underlying *other");
                            file.WriteString(dllimport_construct_nonowning.dllimport_decl);

                            file.WriteString(
                                "if (is_owning)\n"
                                "    _UnderlyingSharedPtr = " + dllimport_construct_owning.csharp_name + "(ptr);\n"
                                "else\n"
                                "    _UnderlyingSharedPtr = " + dllimport_construct_nonowning.csharp_name + "(ptr);\n"
                            );

                            if (!extra_code.empty())
                            {
                                file.WriteString("if (ptr is not null)\n"); // This is called with null pointers for delayed construction, so we must check this.
                                file.WriteString(Strings::Indent(extra_code));
                            }

                            file.PopScope();
                        }

                        if (!extra_code.empty())
                            file.WriteString("#pragma warning restore CS8618\n");
                    }

                    // Some shared-pointer-specific constructors and factory functions.
                    if (!is_exposed_struct_by_value && shared_ptr_desc)
                    {
                        // A simple constructor from an existing shared pointer, either owning or not.
                        // Note, the parameter name here is `shared_ptr` instead of `ptr` for overload disambiguation when passing null.
                        {
                            file.WriteSeparatingNewline();

                            std::string_view extra_code = GetCtorFinalizationStatements(cpp_qual_name, IsConst());

                            // Push silencing warnings about non-nullable fields not being initialized. Need this for `--fat-objects`.
                            if (!extra_code.empty())
                            {
                                // Putting this on the same line as the pragma (after it) trips the VSCode C# syntax highlighter.
                                file.WriteString("// Don't warn about some fields remaining conditionally uninitialized. We initialize them later.\n");
                                file.WriteString("#pragma warning disable CS8618\n");
                            }

                            file.WriteString("internal unsafe " + std::string(unqual_csharp_name) + "(_UnderlyingShared *shared_ptr, bool is_owning)");
                            if (IsConst())
                            {
                                if (extra_code.empty())
                                {
                                    file.WriteString(" : base(is_owning) {_UnderlyingSharedPtr = shared_ptr;}\n");
                                }
                                else
                                {
                                    file.WriteString(" : base(is_owning)\n");
                                    file.PushScope();
                                    file.WriteString("_UnderlyingSharedPtr = shared_ptr;\n");
                                    file.WriteString("if (shared_ptr is not null)\n"); // This is called with null pointers for delayed construction, so we must check this.
                                    file.WriteString(Strings::Indent(extra_code));
                                    file.PopScope();
                                }
                            }
                            else
                            {
                                if (extra_code.empty())
                                {
                                    file.WriteString(" : base(shared_ptr, is_owning) {}\n");
                                }
                                else
                                {
                                    file.WriteString(" : base(shared_ptr, is_owning)\n");
                                    file.PushScope();
                                    file.WriteString("if (shared_ptr is not null)\n"); // This is called with null pointers for delayed construction, so we must check this.
                                    file.WriteString(Strings::Indent(extra_code));
                                    file.PopScope();
                                }
                            }

                            if (!extra_code.empty())
                                file.WriteString("#pragma warning restore CS8618\n");
                        }

                        // An aliasing factory function.
                        if (IsConst())
                        {
                            file.WriteSeparatingNewline();

                            // Notice that this returns a non-const type. This allows us to avoid overriding it in the non-const half, and otherwise shouldn't change anything.
                            file.WriteString("internal static unsafe " + CppToCSharpUnqualClassName(cpp_qual_name, false) + " _MakeAliasing(" + sharedptr_constvoid_underlying_ptr_type.value() + "ownership, _Underlying *ptr)\n");
                            file.PushScope();

                            auto dllimport_construct_aliasing = MakeDllImportDecl(c_sharedptr_name.value() + "_ConstructAliasing", "_UnderlyingShared *", RequestHelper("_PassBy") + " ownership_pass_by, " + sharedptr_constvoid_underlying_ptr_type.value() + "ownership, _Underlying *ptr");
                            file.WriteString(dllimport_construct_aliasing.dllimport_decl);
                            file.WriteString("return new(" + dllimport_construct_aliasing.csharp_name + "(" + RequestHelper("_PassBy") + ".copy, ownership, ptr), is_owning: true);\n");

                            file.PopScope();
                        }

                        // `_LateMakeShared()`, a helper for parsed constructors.
                        if (IsConst())
                        {
                            // This function is used in generated parsed constructors.
                            // First you put `: this(shared_ptr: null, is_owning: true)` in the member init list (calling the ctor from a `shared_ptr` pointer, rather than a raw pointer),
                            //   and then call `_LateMakeShared()` to lazily construct a new shared pointer.

                            file.WriteSeparatingNewline();
                            // `private protected` = must satisfy both `internal` and `protected`.
                            file.WriteString("private protected unsafe void _LateMakeShared(_Underlying *ptr)\n");
                            file.PushScope();

                            // Make sure the usage is correct, i.e. that the owning bool was set to true, and the pointer is still false.
                            file.WriteString("System.Diagnostics.Trace.Assert(_IsOwningVal == true);\n");
                            file.WriteString("System.Diagnostics.Trace.Assert(_UnderlyingSharedPtr is null);\n");

                            auto dllimport_construct_owning = MakeDllImportDecl(c_sharedptr_name.value() + "_Construct", "_UnderlyingShared *", "_Underlying *other");
                            file.WriteString(dllimport_construct_owning.dllimport_decl);

                            file.WriteString("_UnderlyingSharedPtr = " + dllimport_construct_owning.csharp_name + "(ptr);\n");

                            // Not calling the finalization code here, the constructors will do it themselves.

                            file.PopScope();
                        }
                    }

                    // For exposed structs (and their heap-allocating wrappers!), we must manually emit the constructors that are trivial in C++,
                    //   since we don't emit them in C.
                    if (class_desc.kind == CInterop::ClassKind::exposed_struct) // Sic, not `in_exposed_struct`, see above.
                    {
                        // The default constructor, only if not emitted automatically (not emitted because it is trivial).
                        // This isn't needed for the struct, since those are always default-constructible in C#.
                        if (!is_exposed_struct_by_value && type_desc.traits.value().is_default_constructible && type_desc.traits.value().is_trivially_default_constructible)
                        {
                            file.WriteSeparatingNewline();
                            WriteComment(file, "/// Generated default constructor.\n");
                            file.WriteString("public unsafe " + unqual_csharp_name + "()");

                            if (shared_ptr_desc)
                                file.WriteString(" : this(shared_ptr: null, is_owning: true)\n");
                            else
                                file.WriteString(" : this(null, is_owning: true)\n");

                            file.PushScope();

                            std::string expr = "(_Underlying *)" + RequestHelper("_Alloc") + "(" + std::to_string(class_desc.size_and_alignment.value().size) + ")";

                            if (shared_ptr_desc)
                                file.WriteString("_LateMakeShared(" + expr + ");\n");
                            else
                                file.WriteString("_UnderlyingPtr = " + expr + ";\n");

                            // Memset to zero.
                            if (HaveCSharpFeatureNativeMemoryCopyAndFill())
                            {
                                file.WriteString("System.Runtime.InteropServices.NativeMemory.Fill(_UnderlyingPtr, " + std::to_string(class_desc.size_and_alignment.value().size) + ", 0);\n");
                            }
                            else
                            {
                                file.WriteString(
                                    "for (nuint _i = 0; _i < " + std::to_string(class_desc.size_and_alignment.value().size) + "; _i++) ((byte *)_UnderlyingPtr)[_i] = 0;\n"
                                );
                            }

                            file.PopScope();
                        }

                        { // The copy constructor.
                            // No need to check the traits, since all this stuff is required to be trivial (or not exist at all). Just emit the copy ctor directly.

                            const std::string unqual_param_type =
                                is_exposed_struct_by_value
                                ? unqual_csharp_name
                                : CppToCSharpUnqualClassName(cpp_qual_name, !type_desc.traits.value().copy_constructor_takes_nonconst_ref);

                            file.WriteSeparatingNewline();
                            WriteComment(file, "/// Generated copy constructor.\n");
                            if (is_exposed_struct_by_value)
                            {
                                // C# doesn't seem to generate this automatically.
                                // They probably have some other built-in way of copying structs, but having this is convenient.
                                file.WriteString("public " + unqual_csharp_name + "(" + unqual_param_type + " _other) {this = _other;}\n");
                            }
                            else
                            {
                                // Argh.

                                file.WriteString("public unsafe " + unqual_csharp_name + "(" + unqual_param_type + " _other)");

                                if (shared_ptr_desc)
                                    file.WriteString(" : this(shared_ptr: null, is_owning: true)\n");
                                else
                                    file.WriteString(" : this(null, is_owning: true)\n");

                                file.PushScope();

                                std::string expr = "(_Underlying *)" + RequestHelper("_Alloc") + "(" + std::to_string(class_desc.size_and_alignment.value().size) + ")";

                                if (shared_ptr_desc)
                                    file.WriteString("_LateMakeShared(" + expr + ");\n");
                                else
                                    file.WriteString("_UnderlyingPtr = " + expr + ";\n");

                                // Bytewise copy.
                                const std::string csharp_exposed_struct_name = CppToCSharpExposedStructName(cpp_qual_name);
                                file.WriteString("*(" + csharp_exposed_struct_name + " *)_UnderlyingPtr = *(" + csharp_exposed_struct_name + " *)_other._UnderlyingPtr;\n");

                                file.PopScope();
                            }
                        }

                        // The copy assignment.
                        if (!is_exposed_struct_by_value && !IsConst())
                        {
                            // No need to check the traits, since all this stuff is required to be trivial (or not exist at all). Just emit the copy assignment directly.

                            // TODO: It's possible for the assignment to allow const `this`, and independently to have a non-const reference parameter.
                            // We don't yet support any of this here.

                            // Not sure if it makes sense to respect `copy_constructor_takes_nonconst_ref` here, but we do so for the copy constructor above,
                            //   so it probably makes sense to do it here too.
                            const std::string unqual_param_type = CppToCSharpUnqualClassName(cpp_qual_name, !type_desc.traits.value().copy_constructor_takes_nonconst_ref);

                            file.WriteSeparatingNewline();
                            WriteComment(file, "/// Generated copy assignment.\n");
                            file.WriteString("public void Assign(" + unqual_param_type + " _other) {_Ref = _other._Ref;}\n");
                        }
                    }

                    // Emit the methods.
                    for (const auto &method : class_desc.methods)
                    {
                        for (EmitVariant emit_variant : GetMethodVariants(method))
                        {
                            if (ShouldEmitMethodHere(method, class_part_kind, emit_variant))
                            {
                                std::string unqual_method_name = MakeUnqualCSharpMethodName(method, class_part_kind, emit_variant);

                                // In exposed structs by value, adjust the names of const methods to avoid overlap with non-const methods,
                                //   if a non-const method with the same name and parameter types also exists.
                                // And if we can't adjust the name because it's an operator or whatever, skip it entirely.
                                if (is_exposed_struct_by_value && !method.is_static)
                                {
                                    assert(!method.params.empty() && method.params.front().is_this_param);

                                    auto param_type = ParseTypeOrThrow(method.params.at(0).cpp_type);
                                    if (param_type.Is<cppdecl::Reference>() && param_type.IsConst(1))
                                    {
                                        if (auto desc = GetMethodDescForConstnessOverlapCheck(method))
                                        {
                                            if (nonconst_methods_in_exposed_struct.contains(*desc))
                                            {
                                                if (cppdecl::IsValidIdentifier(unqual_method_name))
                                                    unqual_method_name += "_Const"; // And pray for no collisions.
                                                else
                                                    continue; // Just skip this method. It's probably an operator or something.
                                            }
                                        }
                                    }
                                }

                                FuncLikeEmitter emit(*this, &method, unqual_method_name, class_part_kind, emit_variant);

                                emit.Emit(file, is_exposed_struct_by_value ? std::nullopt : std::optional(FuncLikeEmitter::ShadowingDesc{.shadowing_data = shadowing_data, .write = IsConst()}));
                            }
                        }
                    }

                    // Emit the nested types, if any.
                    if (is_exposed_struct_by_value || (class_desc.kind != CInterop::ClassKind::exposed_struct && IsConst()))
                        EmitNestedClasses();

                    // Implement `IEquatable<T>` if needed.
                    if (!iequatable_impls.empty())
                    {
                        file.WriteString(iequatable_impls);

                        // A generic `Equals()` method
                        file.WriteSeparatingNewline();
                        file.WriteString(
                            "public override bool Equals(object? other)\n"
                            "{\n"
                            "    if (other is null)\n"
                            "        return false;\n"
                            + iequatable_generic_impl +
                            "    return " + (base_implements_any_iequatable ? "base.Equals(other)" : "false") + ";\n"
                            "}\n"
                        );
                    }

                    // Emit the custom hardcoded extras.
                    if (auto extras = GetExtraContentsForParsedClass(ParseNameOrThrow(cpp_type), class_part_kind); !extras.IsEmpty())
                    {
                        assert(!extras.text.starts_with('\n'));
                        assert(extras.text.ends_with('\n'));

                        file.WriteSeparatingNewline();
                        file.WriteString("// Custom extras:\n");
                        file.WriteSeparatingNewline();

                        file.WriteString(extras.text);

                        // Implicit conversions.
                        if (is_exposed_struct_by_value || IsConst())
                        {
                            for (const auto &conv : extras.implicit_conversions)
                            {
                                file.WriteSeparatingNewline();
                                file.WriteString(
                                    "public static unsafe implicit operator " + unqual_csharp_name + "(" + conv.csharp_param_type + " " + conv.csharp_param_name + ") {return new(" + conv.csharp_param_name + ");}"
                                );
                            }
                        }
                    }

                    file.PopScope(); // Pop the class scope.
                }
                catch (...)
                {
                    std::throw_with_nested(std::runtime_error("While emitting a wrapper for C++ class `" + cpp_type + "` (" + (is_exposed_struct_by_value ? "exposed struct" : IsConst() ? "const" : "non-const") + " part):"));
                }
            };

            ClassShadowingData shadowing_data;
            EmitClassPart(true, &shadowing_data);
            EmitClassPart(false, &shadowing_data);

            // For exposed structs, emit the exposed struct itself.
            if (class_desc.kind == CInterop::ClassKind::exposed_struct)
                EmitClassPart({}, nullptr);


            { // Emit the parameter passing helper classes. Those can't be generic because we need to copy our conversion operators to them.
                const cppdecl::QualifiedName cpp_name = ParseNameOrThrow(cpp_type);
                const std::string const_half_name = CppToCSharpUnqualClassName(cpp_name, true);
                const std::string mut_half_name = CppToCSharpUnqualClassName(cpp_name, false);
                const std::string pass_by = RequestHelper("_PassBy");
                const std::string moved = RequestHelper("_Moved");

                const std::optional<std::string> struct_name =
                    class_desc.kind == CInterop::ClassKind::exposed_struct
                    ? std::optional(CppToCSharpUnqualExposedStructName(cpp_name))
                    : std::nullopt;

                // Obtain the conversion operators. We pass `true` to get them from the const half, since it makes the most sense, this is ultimately arbitrary.
                const auto extras = GetExtraContentsForParsedClass(ParseNameOrThrow(cpp_type), true);


                std::string related_classes_list = "`" + mut_half_name + "`/`" + const_half_name + "`";

                std::string related_classes_list_with_struct;
                if (class_desc.kind == CInterop::ClassKind::exposed_struct)
                    related_classes_list_with_struct = "`" + *struct_name + "`/" + related_classes_list;
                else
                    related_classes_list_with_struct = related_classes_list;

                auto EmitConvertingCtors = [&](std::string this_wrapper, EmitVariant this_variant)
                {
                    // Conversions based on the parsed converting constructors.
                    for (const auto &method : class_desc.methods)
                    {
                        for (EmitVariant emit_variant : GetMethodVariants(method))
                        {
                            if (emit_variant != EmitVariant::conv_op_for_ctor)
                                continue;

                            // Replace the variant!
                            emit_variant = this_variant;

                            if (ShouldEmitMethodHere(method, false/*doesn't matter*/, emit_variant))
                                FuncLikeEmitter(*this, &method, MakeUnqualCSharpMethodName(method, false/*doesn't matter*/, emit_variant), false/*doesn't matter*/, emit_variant).Emit(file);
                        }
                    }

                    // Hardcoded extra conversions.
                    for (const auto &conv : extras.implicit_conversions)
                    {
                        file.WriteSeparatingNewline();
                        file.WriteString(
                            "public static unsafe implicit operator " + this_wrapper + "(" + conv.csharp_param_type + " " + conv.csharp_param_name + ") {return new " + mut_half_name + "(" + conv.csharp_param_name + ");}"
                        );
                    }
                };

                { // `_ByValue_...`.
                    auto EmitByValueHelper = [&](bool is_opt_opt, bool is_shared)
                    {
                        const std::string by_val_name = is_opt_opt ? CppToCSharpUnqualByValueOptOptHelperName(cpp_name.parts.back(), is_shared) : CppToCSharpUnqualByValueHelperName(cpp_name.parts.back(), is_shared);
                        const std::string copy_ctor_param_half_name = type_desc.traits.value().copy_constructor_takes_nonconst_ref ? mut_half_name : const_half_name;

                        // Shared pointers get all the operators.
                        const bool allow_def_ctor = is_shared || type_desc.traits.value().is_default_constructible;
                        const bool allow_copy_ctor = is_shared || type_desc.traits.value().is_copy_constructible;
                        const bool allow_move_ctor = is_shared || type_desc.traits.value().is_move_constructible;

                        file.WriteSeparatingNewline();
                        WriteComment(file,
                            std::string(
                                is_opt_opt
                                ?
                                    "/// This is used as a function parameter when the underlying function receives an optional `" + mut_half_name + "` by value,\n"
                                    "///   and also has a default argument, meaning it has two different null states.\n"
                                :
                                    "/// This is used as a function parameter when the underlying function receives `" + mut_half_name + "` by value.\n"
                            ) +
                            "/// Usage:\n" +
                            (allow_def_ctor ? "/// * Pass `new()` to default-construct the instance.\n" : "") +
                            (allow_copy_ctor ? "/// * Pass an instance of " + related_classes_list + " to copy it into the function.\n" : "") +
                            (allow_move_ctor
                                ?
                                    "/// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.\n"
                                    "///   Be careful if your input isn't a unique reference to this object.\n"
                                : ""
                            ) +
                            (
                                is_opt_opt
                                ?
                                    "/// * Pass `null` to use the default argument.\n"
                                    "/// * Pass `" + RequestHelper("NullOptType") + "` to pass no object.\n"
                                :
                                    "/// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).\n"
                            )
                        );
                        file.WriteString(
                            // Can't be a `ref struct` because we use it with `?`.
                            // Can't be a plain `struct` because we might want it to not be default-constructible, if the underlying class isn't.
                            "public class " + by_val_name + "\n"
                        );
                        file.PushScope();
                        file.WriteString(
                            "internal readonly " + const_half_name + "? Value;\n" // We always store the const half for simplicity, and then effectively `const_cast` it.
                            "internal readonly " + pass_by + " PassByMode;\n" +
                            (
                                allow_def_ctor
                                ?
                                    "public " + by_val_name + "() {PassByMode = " + pass_by + ".default_construct;}\n"
                                : ""
                            ) +
                            (
                                allow_copy_ctor
                                ?
                                    "public " + by_val_name + "(" + copy_ctor_param_half_name + " new_value) {Value = new_value; PassByMode = " + pass_by + ".copy;}\n"
                                    "public static implicit operator " + by_val_name + "(" + copy_ctor_param_half_name + " arg) {return new(arg);}\n"
                                : ""
                            ) +
                            (
                                allow_move_ctor
                                ?
                                    "public " + by_val_name + "(" + moved + "<" + mut_half_name + "> moved) {Value = moved.Value; PassByMode = " + pass_by + ".move;}\n"
                                    "public static implicit operator " + by_val_name + "(" + moved + "<" + mut_half_name + "> arg) {return new(arg);}\n"
                                : ""
                            ) +
                            (
                                is_opt_opt
                                ?
                                    "public " + by_val_name + "(" + RequestHelper("NullOptType") + " nullopt) {PassByMode = " + pass_by + ".no_object;}\n"
                                    "public static implicit operator " + by_val_name + "(" + RequestHelper("NullOptType") + " nullopt) {return new(nullopt);}\n"
                                : ""
                            )
                        );

                        // Specifically in the by-value wrappers, adding the conversion constructors only makes sense
                        //   if the class is movable (or at least copyable, though not being movable at the same time would be weird).
                        // That's because the function receiving this wrapper is going to try to copy/move from it,
                        //   depending on what pass-by enum value it stores.
                        if (allow_copy_ctor || allow_move_ctor)
                        {
                            EmitConvertingCtors(
                                by_val_name,
                                is_opt_opt
                                ? (
                                    is_shared
                                    ? Generator::EmitVariant::conv_op_for_ctor_for_by_value_shared_opt_opt_helper
                                    : Generator::EmitVariant::conv_op_for_ctor_for_by_value_opt_opt_helper
                                )
                                : (
                                    is_shared
                                    ? EmitVariant::conv_op_for_ctor_for_by_value_shared_helper
                                    : EmitVariant::conv_op_for_ctor_for_by_value_helper
                                )
                            );
                        }

                        file.PopScope();
                    };

                    if (cl->kind == CInterop::ClassKind::uses_pass_by_enum)
                        EmitByValueHelper(false, false);
                    if (shared_ptr_desc)
                        EmitByValueHelper(false, true);

                    // The version for `std::optional` parameters with default arguments, `_ByValueOptOpt_...`.
                    // This is enabled if the class uses the pass-by enum and at the same time `std::optional<cpp_type>` exists.

                    // If `std::optional<T>` exists, and the class uses the pass-by enum...
                    if (cl->kind == CInterop::ClassKind::uses_pass_by_enum && c_desc.FindTypeOpt(CppdeclToCode(cppdecl::Type::FromQualifiedName(cppdecl::QualifiedName{}.AddPart("std").AddPart("optional").AddTemplateArgument(cppdecl::Type::FromQualifiedName(cpp_qual_name))))))
                        EmitByValueHelper(true, false);
                    // If `std::optional<std::shared_ptr<T>>` exists...
                    if (c_desc.FindTypeOpt(CppdeclToCode(cppdecl::Type::FromQualifiedName(cppdecl::QualifiedName{}.AddPart("std").AddPart("optional").AddTemplateArgument(cppdecl::Type::FromQualifiedName(cppdecl::QualifiedName{}.AddPart("std").AddPart("shared_ptr").AddTemplateArgument(cppdecl::Type::FromQualifiedName(cpp_qual_name))))))))
                        EmitByValueHelper(true, true);
                }

                // `_InOpt_...`.
                // Note that those `_InOpt_...` wrappers for structs are used for a slightly different purpose than the generic `_InOpt<T>` for classes.
                if (cl->kind == CInterop::ClassKind::exposed_struct)
                {
                    const std::string in_opt_name = CppToCSharpUnqualInOptStructHelperName(cpp_name.parts.back());

                    file.WriteSeparatingNewline();
                    WriteComment(file,
                        "/// This is used as a function parameter when passing `" + mut_half_name + "` by value with a default argument, since trying to use `?` instead seems to prevent us from taking its address.\n"
                        "/// Usage:\n"
                        "/// * Pass an instance of " + related_classes_list + " to copy it into the function.\n"
                        "/// * Pass `null` to use the default argument\n"
                    );
                    file.WriteString(
                        "public readonly ref struct " + in_opt_name + "\n"
                    );
                    file.PushScope();
                    file.WriteString(
                        "public readonly bool HasValue;\n"
                        // This looks like it requires the type to be default-constructible.
                        // But this isn't a big deal, since apparently C# structs are always default-constructible. This isn't a problem for us,
                        //   since our structs are trivial enough, so we don't mind.
                        "internal readonly " + *struct_name + " Object;\n"
                        "public " + *struct_name + " Value"
                        "{\n"
                        "    get\n"
                        "    {\n"
                        "        System.Diagnostics.Trace.Assert(HasValue);\n"
                        "        return Object;\n"
                        "    }\n"
                        "}\n"
                        "\n"
                        "public " + in_opt_name + "() {HasValue = false;}\n"
                        "public " + in_opt_name + "(" + *struct_name + " new_value) {HasValue = true; Object = new_value;}\n"
                        "public static implicit operator " + in_opt_name + "(" + *struct_name + " new_value) {return new(new_value);}\n"
                        "public " + in_opt_name + "(" + const_half_name + " new_value) {HasValue = true; Object = new_value._Ref;}\n"
                        "public static implicit operator " + in_opt_name + "(" + const_half_name + " new_value) {return new(new_value);}\n"
                    );

                    EmitConvertingCtors(in_opt_name, EmitVariant::conv_op_for_ctor_for_in_opt_struct_helper);

                    file.PopScope();
                }

                { // `_InOptMut_...`.
                    const std::string in_opt_mut_name = CppToCSharpUnqualInOptMutNontrivialHelperName(cpp_name.parts.back());

                    file.WriteSeparatingNewline();
                    WriteComment(file,
                        "/// This is used for optional parameters of class `" + mut_half_name + "` with default arguments.\n"
                        "/// This is only used mutable parameters. For const ones we have `" + CppToCSharpUnqualInOptConstNontrivialHelperName(cpp_name.parts.back()) + "`.\n"
                        "/// Usage:\n"
                        "/// * Pass `null` to use the default argument.\n"
                        "/// * Pass `new()` to pass no object.\n"
                        "/// * Pass an instance of " + related_classes_list + " directly.\n"
                        + (class_desc.kind == CInterop::ClassKind::exposed_struct ? "/// * Pass `new(ref ...)` to pass a reference to `" + *struct_name + "`.\n" : "")
                    );
                    file.WriteString(
                        "public class " + in_opt_mut_name + "\n"
                    );
                    file.PushScope();
                    file.WriteString(
                        "public " + mut_half_name + "? Opt;\n"
                        "\n"
                        "public " + in_opt_mut_name + "() {}\n"
                        "public " + in_opt_mut_name + "(" + mut_half_name + " value) {Opt = value;}\n"
                        "public static implicit operator " + in_opt_mut_name + "(" + mut_half_name + " value) {return new(value);}\n"
                        // No converting ctors here, just like `T &` parameters don't accept temporaries.
                    );

                    if (class_desc.kind == CInterop::ClassKind::exposed_struct)
                    {
                        // Construct from a struct reference.
                        // Sadly conversion operators can't take references, so there's no conversion.
                        file.WriteString(
                            "public unsafe " + in_opt_mut_name + "(ref " + *struct_name + " value)\n"
                            "{\n"
                            "    fixed (" + *struct_name + " *value_ptr = &value)\n"
                            "    {\n"
                            "        Opt = new((" + const_half_name + "._Underlying *)value_ptr, is_owning: false);\n"
                            "    }\n"
                            "}\n"
                        );
                    }

                    file.PopScope();
                }

                { // `_InOptConst_...`.
                    const std::string in_opt_const_name = CppToCSharpUnqualInOptConstNontrivialHelperName(cpp_name.parts.back());

                    file.WriteSeparatingNewline();
                    WriteComment(file,
                        "/// This is used for optional parameters of class `" + mut_half_name + "` with default arguments.\n"
                        "/// This is only used const parameters. For non-const ones we have `" + CppToCSharpUnqualInOptMutNontrivialHelperName(cpp_name.parts.back()) + "`.\n"
                        "/// Usage:\n"
                        "/// * Pass `null` to use the default argument.\n"
                        "/// * Pass `new()` to pass no object.\n"
                        "/// * Pass an instance of " + related_classes_list + " to pass it to the function.\n"
                        + (class_desc.kind == CInterop::ClassKind::exposed_struct ? "/// * Pass `new(ref ...)` to pass a reference to `" + *struct_name + "`.\n" : "")
                    );
                    file.WriteString(
                        "public class " + in_opt_const_name + "\n"
                    );
                    file.PushScope();
                    file.WriteString(
                        "public " + const_half_name + "? Opt;\n"
                        "\n"
                        "public " + in_opt_const_name + "() {}\n"
                        "public " + in_opt_const_name + "(" + const_half_name + " value) {Opt = value;}\n"
                        "public static implicit operator " + in_opt_const_name + "(" + const_half_name + " value) {return new(value);}\n"
                    );

                    if (class_desc.kind == CInterop::ClassKind::exposed_struct)
                    {
                        // Construct from a const struct reference.
                        // Sadly conversion operators can't take references, so there's no conversion.
                        file.WriteString(
                            "public unsafe " + in_opt_const_name + "(ref readonly " + *struct_name + " value)\n"
                            "{\n"
                            "    fixed (" + *struct_name + " *value_ptr = &value)\n"
                            "    {\n"
                            "        Opt = new((" + const_half_name + "._Underlying *)value_ptr, is_owning: false);\n"
                            "    }\n"
                            "}\n"
                        );
                    }

                    EmitConvertingCtors(in_opt_const_name, EmitVariant::conv_op_for_ctor_for_in_opt_const_helper);

                    file.PopScope();
                }
            }
        }
    }

    bool Generator::TypeIsCppClass(cppdecl::Type cpp_type)
    {
        cpp_type.RemoveQualifiers(cppdecl::CvQualifiers::const_);

        const CInterop::TypeDesc *type_desc = c_desc.FindTypeOpt(CppdeclToCode(cpp_type));
        if (!type_desc)
        {
            // If this is a pointer or reference that's not in `cpp_types`, then it has nothing special
            //   about it (compare e.g. to `std::monostate *` that binds to bool), so we just return false.
            if (cpp_type.Is<cppdecl::Pointer>() || cpp_type.Is<cppdecl::Reference>())
                return false;

            // Otherwise return false on an unknown type.
            return false;
        }

        if (std::holds_alternative<CInterop::TypeKinds::Class>(type_desc->var))
            return true;

        return false;
    }

    Generator::ManagedKind Generator::ClassifyParamManagedKind(const cppdecl::Type &cpp_type, bool in_heap_allocated_struct_wrapper)
    {
        // If this is a reference, return true if it's a class reference (not to an exposed struct).
        if (cpp_type.modifiers.size() == 1 && cpp_type.Is<cppdecl::Reference>())
        {
            if (auto type_desc = c_desc.FindTypeOpt(CppdeclToCode(cpp_type.simple_type.name)))
            {
                if (auto class_desc = std::get_if<CInterop::TypeKinds::Class>(&type_desc->var))
                {
                    // Returning `never_managed` for references to exposed structs, which should be `ref`s.
                    // Const refs can also be `in`, and it doesn't make much sense to classify those, but I'm just ignoring them and returning `never_managed` regardless.
                    return class_desc->kind == CInterop::ClassKind::exposed_struct && !in_heap_allocated_struct_wrapper ? Generator::ManagedKind::never_managed : Generator::ManagedKind::managed;
                }
            }
        }

        // If this has no modifiers, return true if it's a class, unless it's an exposed struct.
        if (cpp_type.modifiers.empty())
        {
            const CInterop::TypeDesc *type_desc = c_desc.FindTypeOpt(CppdeclToCode(cpp_type));
            if (!type_desc)
                return ManagedKind::unsure;
            auto class_desc = std::get_if<CInterop::TypeKinds::Class>(&type_desc->var);
            if (!class_desc)
                return ManagedKind::unmanaged; // Hopefully this is always correct.
            return class_desc->kind == CInterop::ClassKind::exposed_struct ? ManagedKind::unmanaged : ManagedKind::managed;
        }

        return ManagedKind::unsure; // Whatever.
    }

    const CInterop::TypeDesc *Generator::GetSharedPtrTypeDescForCppTypeOpt(const std::string &cpp_type)
    {
        return c_desc.FindTypeOpt("std::shared_ptr<" + cpp_type + ">");
    }

    bool Generator::ShouldEmitCppType(const cppdecl::Type &cpp_type)
    {
        if (cpp_type.IsOnlyQualifiedName())
        {
            // Skip `std::shared_ptr<T>` to managed types.
            static const cppdecl::QualifiedName shared_ptr_name = cppdecl::QualifiedName{}.AddPart("std").AddPart("shared_ptr");
            if (cpp_type.simple_type.name.Equals(shared_ptr_name, cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target))
            {
                if (TypeIsCppClass(*cpp_type.simple_type.name.parts.at(1).template_args.value().args.at(0).AsType()))
                    return false;
            }
        }

        return true;
    }

    void Generator::EmitCppField(OutputFile &file, const cppdecl::QualifiedName &cpp_class, const CInterop::ClassField &field, bool is_const, std::string *init_code)
    {
        try
        {
            // Fields without const getters should be impossible.
            // If this fails, did you perhaps to try call this method on a field of an exposed struct?
            assert(field.getter_const);

            const std::string csharp_enclosing_class_name = CppToCSharpUnqualClassName(cpp_class, is_const);
            const std::string csharp_field_name = CppToCSharpFieldName(cpp_class, field.is_static, field.full_name);

            // Need this in a few places to avoid conflicts with function parameters with the same name.
            const std::string this_or_enclosing_class_prefix = field.is_static ? csharp_enclosing_class_name + "." : "this.";

            // Special-case array fields.
            if (field.getter_array_size)
            {
                // Determine array constness.
                bool array_is_const = true;
                if (field.getter_mutable)
                {
                    const cppdecl::Type &mut_getter_return_type = ParseTypeOrThrow(field.getter_mutable->ret.cpp_type);

                    // Our getters are considered to return references right now, because this indicates that the C pointer isn't null.
                    assert(mut_getter_return_type.Is<cppdecl::Reference>());

                    array_is_const = mut_getter_return_type.Is<cppdecl::Reference>() && mut_getter_return_type.IsEffectivelyConst(1);
                }

                // Maybe stop if we don't like the constness.
                if (array_is_const && !is_const)
                    return; // We'll inherit the const property from the parent.

                const auto &getter = !is_const && field.getter_mutable ? field.getter_mutable : field.getter_const;
                assert(getter);
                assert(getter->params.size() == 1);

                // Our getters are considered to return references right now, rather than pointers.
                // In C it ends up as a pointer either way, but this indicates that it's non-null.
                assert(ParseTypeOrThrow(getter->ret.cpp_type).Is<cppdecl::Reference>());

                ArrayStrings arr_strings = RequestCSharpArrayType(ParseTypeOrThrow(field.type));

                // Special-case refs to arrays for `--fat-objects`.
                if (init_code && arr_strings.csharp_type.starts_with("ref "))
                {
                    const std::string csharp_storage_field_name = "__array_storage_" + csharp_field_name;

                    file.WriteSeparatingNewline();
                    file.WriteString(field.comment.c_style);
                    if (!is_const)
                        file.WriteString("new ");

                    file.WriteString(
                        "public " + std::string(field.is_static ? "static " : "") + "unsafe " + arr_strings.csharp_type + " " + csharp_field_name +
                        " => " + arr_strings.construct(csharp_storage_field_name) + ";\n"
                    );

                    // The backing pointer.
                    if (is_const)
                    {
                        file.WriteString(
                            "private protected " + std::string(field.is_static ? "static " : "") + "unsafe " + arr_strings.csharp_underlying_ptr_target_type + " *" + csharp_storage_field_name + ";\n"
                        );

                        auto dllimport_decl = MakeDllImportDecl(getter->c_name, arr_strings.csharp_underlying_ptr_target_type + " *", getter->is_static ? "" : GetParameterBinding(getter->params.at(0), getter->is_static).DllImportDeclParamsString());
                        *init_code +=
                            "\n{ // " + csharp_field_name + " (ref array)\n" +
                            Strings::Indent(
                                dllimport_decl.dllimport_decl +
                                this_or_enclosing_class_prefix + csharp_storage_field_name + " = " + dllimport_decl.csharp_name + "(_UnderlyingPtr);\n"
                            ) +
                            "}\n";
                    }

                    return;
                }

                file.WriteSeparatingNewline();
                file.WriteString(field.comment.c_style);
                if (!is_const)
                    file.WriteString("new ");
                // Using `get; private protected set;` to allow the derived class to modify this.
                file.WriteString("public " + std::string(field.is_static ? "static " : "") + "unsafe " + arr_strings.csharp_type + " " + csharp_field_name + (init_code ? " {get; private protected set;}" : "") + "\n");

                auto dllimport_decl = MakeDllImportDecl(getter->c_name, arr_strings.csharp_underlying_ptr_target_type + " *", getter->is_static ? "" : GetParameterBinding(getter->params.at(0), getter->is_static).DllImportDeclParamsString());
                std::string body =
                    dllimport_decl.dllimport_decl +
                    (init_code ? this_or_enclosing_class_prefix + csharp_field_name + " = " : "return ") + arr_strings.construct(dllimport_decl.csharp_name + "(_UnderlyingPtr)") + ";\n";

                if (init_code)
                {
                    *init_code +=
                        "\n{" + (init_code ? " // " + csharp_field_name + " (array)" : "") + "\n" +
                        Strings::Indent(body) +
                        "}\n";
                }
                else
                {
                    file.PushScope();
                    file.PushScope({}, "get\n{\n", "}\n");
                    file.WriteString(body);
                    file.PopScope();
                    file.PopScope();
                }

                return;
            }

            // If there's no mutable setter, then do nothing in the mutable half.
            // Static fields are entirely in the const half as well.
            if ((field.is_static || !field.getter_mutable) && !is_const)
                return;

            const cppdecl::Type &cpp_field_type = ParseTypeOrThrow(field.type);

            // Special-case pointer fields to some types.
            // Since the getters return references to pointers for those, and we don't bind those properly (we emit them as raw pointers),
            //   we have to do a bunch of special-casing here.
            // Also this handles `init_code` differently from other fields, since we can't really cache the C# object here, because our C# classes hold stable pointers.
            // So instead we cache the raw pointer to the field (pointer-to-pointer in this case), so at least we don't need to call getters/setters every time.
            if (cpp_field_type.Is<cppdecl::Pointer>())
            {
                cppdecl::Type cpp_underlying_type = cpp_field_type;
                cpp_underlying_type.RemoveModifier();

                const bool field_is_const = cpp_underlying_type.IsConst();
                cpp_underlying_type.RemoveQualifiers(cppdecl::CvQualifiers::const_);

                const std::string cpp_underlying_type_str = CppdeclToCode(cpp_underlying_type);

                if (auto type_desc = c_desc.FindTypeOpt(cpp_underlying_type_str))
                {
                    // Note that exposed structs are handled as classes, not as known-size types.
                    // This is because they already have their own dedicated heap-allocating wrappers, so we don't need to resort to the generic one.
                    const bool is_class = std::holds_alternative<CInterop::TypeKinds::Class>(type_desc->var);

                    const std::optional<std::string> csharp_nonclass_type = !is_class ? CppToCSharpKnownSizeType(cpp_underlying_type) : std::nullopt;

                    if (is_class || csharp_nonclass_type)
                    {
                        file.WriteSeparatingNewline();
                        file.WriteString(field.comment.c_style);
                        file.WriteString("public ");
                        if (field.is_static)
                            file.WriteString("static ");
                        if (!is_const)
                            file.WriteString("new ");
                        file.WriteString("unsafe ");

                        const std::string csharp_field_wrapper_type =
                            is_class
                            ? CppToCSharpClassName(cpp_underlying_type.simple_type.name, field_is_const)
                            : RequestHelper(field_is_const ? "Const_Box" : "Box") + "<" + *csharp_nonclass_type + ">";

                        const std::string csharp_underlying_double_pointer_type = (is_class ? csharp_field_wrapper_type + "._Underlying" : *csharp_nonclass_type) + " **";

                        // The property type.
                        file.WriteString(csharp_field_wrapper_type);

                        file.WriteString("? ");
                        file.WriteString(csharp_field_name);
                        file.WriteString("\n");

                        // Begin property.
                        file.PushScope();

                        const std::string maybe_static_str = field.is_static ? "Static" : "";
                        const std::string csharp_storage_field_name = "__ptr_storage_" + csharp_field_name;

                        auto dllimport_getter = MakeDllImportDecl(field.getter_const->c_name, (is_class ? csharp_field_wrapper_type + "._Underlying" : *csharp_nonclass_type) + " **", field.is_static ? "" : csharp_enclosing_class_name + "._Underlying *_this");

                        // Only in the const half because the backing pointer is only emitted in the const half.
                        if (init_code && is_const)
                        {
                            *init_code +=
                                "\n{" + (init_code ? " // " + csharp_field_name + " (raw pointer)" : "") + "\n" +
                                Strings::Indent(
                                    dllimport_getter.dllimport_decl +
                                    this_or_enclosing_class_prefix + csharp_storage_field_name + " = " + dllimport_getter.csharp_name + "(" + (field.is_static ? "" : "_UnderlyingPtr") + ");\n"
                                ) +
                                "}\n";
                        }

                        { // Getter.
                            if (!is_const)
                            {
                                // Call into the base getter, purely to improve how the code looks.
                                file.WriteString("get => base." + csharp_field_name + ";\n");
                            }
                            else
                            {
                                file.PushScope({}, "get\n{\n", "}\n");

                                if (init_code)
                                {
                                    // This is the same code as in the `else` branch, but with `ptr` replaced by the cached `csharp_storage_field_name`, with the function call removed.
                                    file.WriteString(
                                        csharp_field_wrapper_type + "? value = null;\n"
                                        "if (*" + csharp_storage_field_name + " is not null)\n" +
                                        (field.is_static ? "" : "{\n") +
                                        "    value = new" + (is_class ? "(*" + csharp_storage_field_name + ", is_owning: false)" : "(*" + csharp_storage_field_name + ")") + ";\n" +
                                        (field.is_static ? "" : "    value._KeepAliveEnclosingObject = this;\n}\n") +
                                        "return value;\n"
                                    );
                                }
                                else
                                {
                                    file.WriteString(
                                        dllimport_getter.dllimport_decl +
                                        "var ptr = " + dllimport_getter.csharp_name + "(" + (field.is_static ? "" : "_UnderlyingPtr") + ");\n" +
                                        csharp_field_wrapper_type + "? value = null;\n"
                                        // Note `*ptr` in the `is not null` condition! `ptr` itself should never be null, as it represents a reference.
                                        // Note that non-class wrapper is constructed from `*ptr` here, but since `ptr` is a pointer-to-pointer, it resolves to `T *`,
                                        //   which is the non-owning constructor, which is what we want.
                                        "if (*ptr is not null)\n" +
                                        (field.is_static ? "" : "{\n") +
                                        "    value = new" + (is_class ? "(*ptr, is_owning: false)" : "(*ptr)") + ";\n" +
                                        (field.is_static ? "" : "    value._KeepAliveEnclosingObject = this;\n}\n") +
                                        "return value;\n"
                                    );
                                }
                                file.PopScope();
                            }
                        }

                        // Setter.
                        if (!is_const && field.getter_mutable)
                        {
                            // Begin getter.
                            file.PushScope({}, "set\n{\n", "}\n");

                            auto dllimport_setter = MakeDllImportDecl(field.getter_mutable->c_name, csharp_underlying_double_pointer_type, field.is_static ? "" : csharp_enclosing_class_name + "._Underlying *_this");

                            file.WriteString(
                                (init_code ? "" :
                                    dllimport_setter.dllimport_decl +
                                    "var ptr = " + dllimport_setter.csharp_name + "(" + (field.is_static ? "" : "_UnderlyingPtr") + ");\n"
                                ) +
                                "_" + maybe_static_str + "DiscardKeepAlive(" + EscapeQuoteString(field.full_name) + ");\n" // Using the C++ field name, for consistency with the keys used by the C bindings, even though we don't even use those keys, so it shouldn't really matter.
                                "if (value is not null)\n"
                                "    _" + maybe_static_str + "KeepAlive(value, " + EscapeQuoteString(field.full_name) + ");\n" // ^
                                "*" + (init_code ? csharp_storage_field_name : "ptr") + " = (value is not null ? value._UnderlyingPtr : null);\n"
                            );

                            // End getter.
                            file.PopScope();
                        }

                        // End property.
                        file.PopScope();

                        // The private backing field. This is a raw pointer-to-pointer.
                        if (init_code && is_const)
                        {
                            file.WriteString("private protected " + std::string(field.is_static ? "static " : "") + "unsafe " + csharp_underlying_double_pointer_type + csharp_storage_field_name + ";\n");
                        }

                        return;
                    }
                }
            }

            const auto &maybe_const_getter = !is_const || (field.is_static && field.getter_mutable) ? field.getter_mutable : field.getter_const;
            assert(maybe_const_getter);

            // Determine the C# property type.
            // This can be different for const and mutable halves, but this is fine.
            // Note that this must match how `FuncLikeEmitter` determines the return type binding for properties.
            const auto &ret_binding = GetReturnBinding(maybe_const_getter->ret);
            const std::string csharp_property_type = ret_binding.csharp_return_type;

            // Special-case caching types that map to C# refs. We can't have `ref` fields in classes (only in `ref struct`s), so we have to store a private pointer instead.
            // Note that instead of `ret_binding`, we check a separate binding that emits `ref` in more cases. We then don't need that binding anymore.
            if (init_code && (GetReturnBinding(maybe_const_getter->ret, TypeBindingFlags::return_ref_instead_of_copying_small_types).csharp_return_type.starts_with("ref ")))
            {
                // This is best-effort.

                // To get a nicely looking C# pointers, we use `replace_ref_with_ptr`.
                const auto &ret_binding_ptr = GetReturnBinding(maybe_const_getter->ret, TypeBindingFlags::replace_ref_with_ptr);
                if (!ret_binding_ptr.csharp_return_type.ends_with('*'))
                    throw std::logic_error("Internal error: Requested a `replace_ref_with_ptr` binding for type `" + maybe_const_getter->ret.cpp_type + "`, but got something other than a raw pointer.");

                const std::string csharp_storage_field_name = "__ref_storage_" + csharp_field_name;


                file.WriteSeparatingNewline();
                file.WriteString(field.comment.c_style);
                file.WriteString("public ");

                if (field.is_static)
                    file.WriteString("static ");

                // Be explicit about the shadowing.
                if (!is_const)
                    file.WriteString("new ");

                file.WriteString("unsafe ");

                // The type.
                file.WriteString(csharp_property_type);
                if (!csharp_property_type.ends_with('*'))
                    file.WriteString(" ");

                // The name.
                file.WriteString(csharp_field_name);

                file.WriteString(" => " + std::string(csharp_property_type.starts_with("ref ") ? "ref " : "") + "*" + csharp_storage_field_name + ";\n");

                // The backing pointer.
                if (is_const)
                {
                    // Not `readonly` because the derived mutable half will assign to this.
                    // Don't need `{get; private protected set;}` because this is already not public.
                    file.WriteString("private protected " + std::string(field.is_static ? "static " : "") + "unsafe " + ret_binding_ptr.csharp_return_type + csharp_storage_field_name + ";\n");\

                    // It's easier to assemble the dllimport declaration by hand here.
                    auto dllimport_getter = MakeDllImportDecl(maybe_const_getter->c_name, ret_binding.dllimport_return_type, field.is_static ? "" : CppToCSharpClassName(cpp_class, is_const) + "._Underlying *_this");

                    *init_code +=
                        "\n{ // " + csharp_field_name + " (ref)\n" +
                        Strings::Indent(
                            dllimport_getter.dllimport_decl +
                            ret_binding_ptr.MakeReturnStatements(this_or_enclosing_class_prefix + csharp_storage_field_name + " =", dllimport_getter.csharp_name + "(" + (field.is_static ? "" : "_UnderlyingPtr") + ")") + "\n"
                            // Impossible to keep-alive this.
                        ) +
                        "}\n";
                }

                return;
            }

            // Emit the property.
            // We only emit the `get` half, never the `set` half.
            // If the property returns a `ref` type, then the getter is enough, and adding a setter is a compilation error.
            // If the property returns something else (aka a class wrapper), then we wouldn't be able to provide a setter anyway,
            //   since its parameter type (the by-value wrapper) needs to be different from what the getter returns, and C# requires those types to match.
            // But this isn't an issue, since we have `.Assign()` in our class wrappers.

            file.WriteSeparatingNewline();

            file.WriteString(field.comment.c_style);

            file.WriteString("public ");

            if (field.is_static)
                file.WriteString("static ");

            // Be explicit about the shadowing.
            if (!is_const)
                file.WriteString("new ");

            FuncLikeEmitter emit_getter(*this, &maybe_const_getter.value(), "get{}", false/*doesn't matter since we're not in a ctor*/);
            if (emit_getter.IsUnsafe())
                file.WriteString("unsafe ");

            // The type.
            file.WriteString(csharp_property_type);
            if (!csharp_property_type.ends_with('*'))
                file.WriteString(" ");

            // The name.
            file.WriteString(csharp_field_name);

            if (init_code)
            {
                // This instead of `readonly` to allow derived classes to set this.
                file.WriteString(" {get; private protected set;}\n");

                // We have to assemble the dllimport declaration by hand here. While we could `.Emit()` to a fake file, that would produce the function header too, and we only need the body, so it's easier to just do this.
                auto dllimport_getter = MakeDllImportDecl(maybe_const_getter->c_name, ret_binding.dllimport_return_type, field.is_static ? "" : CppToCSharpClassName(cpp_class, is_const) + "._Underlying *_this");

                *init_code +=
                    "\n{ // " + csharp_field_name + "\n" +
                    Strings::Indent(
                        dllimport_getter.dllimport_decl +
                        ret_binding.MakeReturnStatements(this_or_enclosing_class_prefix + csharp_field_name + " =", dllimport_getter.csharp_name + "(" + (field.is_static ? "" : "_UnderlyingPtr") + ")") + "\n" +
                        (field.is_static ? "" : "this." + csharp_field_name + "._KeepAliveEnclosingObject = this;\n")
                    ) +
                    "}\n";
            }
            else
            {
                file.WriteString("\n");

                file.PushScope();

                // The getter.
                emit_getter.Emit(file);

                file.PopScope();
            }
        }
        catch (...)
        {
            std::throw_with_nested(std::runtime_error("While emitting C++ field `" + field.full_name + "`:"));
        }
    }

    void Generator::Generate()
    {
        { // Perform some simple initialization.
            // Set `helpers_prefix`.
            for (const auto &elem : AdjustCppNamespaces(helpers_namespace).parts)
            {
                helpers_prefix += CppToCSharpIdentifier(elem);
                helpers_prefix += '.';
            }

            // Force `char` to be unsigned, since C# tends to use `byte` for narrow chars.
            c_desc.platform_info.primitive_types.at("char").kind = PrimitiveTypeInfo::Kind::unsigned_integral;
        }

        { // Rewrite operators in `c_desc` into a suitable shape.
            // Rewrite operators that are free functions into non-static class members if possible (moving them into the type of the first argument),
            //   or make them static class members of the type of the second operand.

            std::unordered_set<const CInterop::Function *> funcs_to_erase;
            for (CInterop::Function &func : c_desc.functions)
            {
                if (!std::holds_alternative<CInterop::FuncKinds::Operator>(func.var))
                    continue;

                assert(!func.params.empty());
                if (func.params.empty())
                    continue; // This shouldn't happen.

                { // Try the first parameter.
                    cppdecl::Type param_type = ParseTypeOrThrow(func.params.front().cpp_type);
                    cppdecl::Type param_type_unqual = param_type;
                    if (param_type_unqual.Is<cppdecl::Reference>())
                        param_type_unqual.RemoveModifier();
                    param_type_unqual.RemoveQualifiers(cppdecl::CvQualifiers::const_);

                    auto iter = c_desc.cpp_types.FindMutable(CppdeclToCode(param_type_unqual));
                    if (iter != c_desc.cpp_types.Map().end())
                    {
                        if (auto *cl = std::get_if<CInterop::TypeKinds::Class>(&iter->second.var))
                        {
                            if (param_type.Is<cppdecl::Reference>() || iter->second.traits.value().IsCopyableOrTriviallyMovable())
                            {
                                CInterop::ClassMethod new_method;
                                new_method.BasicFuncLike::operator=(std::move(func));
                                new_method.params.front().is_this_param = true;

                                // Adjust the lifetime annotations for the `this` parameter.
                                new_method.lifetimes = new_method.lifetimes.TranslateVariants([&](LifetimeRelation::Variant var)
                                {
                                    if (auto param = std::get_if<LifetimeRelation::Param>(&var); param && param->index == 0)
                                        var = LifetimeRelation::ThisObject{};
                                    return var;
                                });

                                auto &new_op = new_method.var.emplace<CInterop::MethodKinds::Operator>();
                                new_op.token = std::move(std::get<CInterop::FuncKinds::Operator>(func.var).token);
                                new_op.is_post_incr_or_decr = std::get<CInterop::FuncKinds::Operator>(func.var).is_post_incr_or_decr;

                                cl->methods.push_back(std::move(new_method));

                                funcs_to_erase.insert(&func);
                                continue;
                            }
                        }
                    }
                }

                // Try the second parameter.
                if (func.params.size() >= 2)
                {
                    cppdecl::Type param_type = ParseTypeOrThrow(func.params.at(1).cpp_type);
                    cppdecl::Type param_type_unqual = param_type;
                    if (param_type_unqual.Is<cppdecl::Reference>())
                        param_type_unqual.RemoveModifier();
                    param_type_unqual.RemoveQualifiers(cppdecl::CvQualifiers::const_);

                    auto iter = c_desc.cpp_types.FindMutable(CppdeclToCode(param_type_unqual));
                    if (iter != c_desc.cpp_types.Map().end())
                    {
                        if (auto *cl = std::get_if<CInterop::TypeKinds::Class>(&iter->second.var))
                        {
                            if (param_type.Is<cppdecl::Reference>() || iter->second.traits.value().IsCopyableOrTriviallyMovable())
                            {
                                CInterop::ClassMethod new_method;
                                new_method.BasicFuncLike::operator=(std::move(func));

                                // This one must be explicitly `static` (as opposed to the first parameter rewrite, which is being made
                                //   static implicitly by `FuncLikeEmitter`), since the parameter of our class type isn't the first one.
                                new_method.is_static = true;

                                // Add a static `this` parameter.
                                CInterop::FuncParam &new_this_param = *new_method.params.emplace(new_method.params.begin());
                                new_this_param.is_this_param = true;
                                new_this_param.cpp_type = CppdeclToCode(param_type_unqual);

                                // Adjust the lifetime annotations.
                                new_method.lifetimes = new_method.lifetimes.TranslateVariants([&](LifetimeRelation::Variant var)
                                {
                                    if (auto param = std::get_if<LifetimeRelation::Param>(&var))
                                        param->index++;
                                    return var;
                                });

                                auto &new_op = new_method.var.emplace<CInterop::MethodKinds::Operator>();
                                new_op.token = std::move(std::get<CInterop::FuncKinds::Operator>(func.var).token);

                                cl->methods.push_back(std::move(new_method));

                                funcs_to_erase.insert(&func);
                                continue;
                            }
                        }
                    }
                }
            }

            std::erase_if(c_desc.functions, [&](const CInterop::Function &func){return funcs_to_erase.contains(&func);});
        }

        { // Collect `begin()` and `end()` functions.
            // Free functions.
            for (const auto &func : c_desc.functions)
            {
                auto regular = std::get_if<CInterop::FuncKinds::Regular>(&func.var);
                if (!regular)
                    continue; // Not a normal function (so an overloaded operator).

                cppdecl::QualifiedName qual_name = ParseNameOrThrow(regular->name);

                std::string_view name_word = qual_name.parts.back().AsSingleWord();
                assert(!name_word.empty()); // We've already rejected overloaded operators above, so this name should always be a word.

                // Is this `begin()` or `end()` or neither?
                bool is_end = false;
                if (name_word == "begin")
                    is_end = false;
                else if (name_word == "end")
                    is_end = true;
                else
                    continue; // Not a function we're interested in.

                // Check parameters.
                // We need at least one parameter, and all parameters after the first one must have default arguments.
                if (func.params.empty() || !std::all_of(func.params.begin() + 1, func.params.end(), [](const CInterop::FuncParam &p){return bool(p.default_arg_spelling);}))
                    continue;

                // Analyze the parameter type.
                const auto &param_type_name = func.params.front().cpp_type;
                cppdecl::Type param_type = ParseTypeOrThrow(param_type_name);

                // Must either have no modifiers, or only a reference.
                if (param_type.modifiers.size() > 1 || (param_type.modifiers.size() == 1 && !param_type.IsLvalueReference()))
                    continue;

                // Does this parameter refer to a class type?
                std::string param_unqual_type_name = CppdeclToCode(param_type.simple_type.name);
                const CInterop::TypeDesc *param_type_desc = c_desc.FindTypeOpt(param_unqual_type_name);
                if (!param_type_desc || !std::holds_alternative<CInterop::TypeKinds::Class>(param_type_desc->var))
                    continue;

                // The logic below is similar for member functions below, keep them in sync.

                // If the parameter is by value, the class must be copyable.
                if (!param_type.Is<cppdecl::Reference>() && !param_type_desc->traits->is_copy_constructible)
                    continue;

                const bool is_const = param_type.Is<cppdecl::Reference>() ? param_type.IsConst(1) : !param_type_desc->traits->copy_constructor_takes_nonconst_ref;

                ClassBeginEndFuncs &state = begin_end_class_funcs[std::make_pair(param_unqual_type_name, is_const)];
                state.GetBeginOrEnd(is_end).nonmember_csharp_name = MakeQualCSharpFreeFuncName(func);
                state.GetBeginOrEnd(is_end).nonmember_return_type = ParseTypeOrThrow(func.ret.cpp_type);
            }

            // Class members.
            for (const auto &[type_name, type] : c_desc.cpp_types.Map())
            {
                auto cl = std::get_if<CInterop::TypeKinds::Class>(&type.var);
                if (!cl)
                    continue; // Not a class.

                for (const CInterop::ClassMethod &method : cl->methods)
                {
                    if (method.is_static)
                        continue; // Must be non-static.

                    auto regular = std::get_if<CInterop::MethodKinds::Regular>(&method.var);
                    if (!regular)
                        continue; // Not a regular method.

                    // Make sure we don't have template arguments in the name.
                    // Even though the comment of that field says they shouldn't be there, we add them later in `Generate()` to fix ambiguities.
                    // But at this point, there should be none.
                    assert(regular->name.find('<') == std::string::npos);

                    // Is this `begin()` or `end()` or neither?
                    bool is_end = false;
                    if (regular->name == "begin")
                        is_end = false;
                    else if (regular->name == "end")
                        is_end = true;
                    else
                        continue; // Not a function we're interested in.

                    // Make sure have the `this` parameter.
                    assert(method.params.size() >= 1 && method.params.front().is_this_param);

                    // All parameters (not counting `this`) must have default arguments, or there must be no extra parameters.
                    if (!std::all_of(method.params.begin() + 1, method.params.end(), [](const CInterop::FuncParam &p){return bool(p.default_arg_spelling);}))
                        continue;

                    // This logic is same as for free functions above, keep them in sync.

                    const auto &param_type_name = method.params.front().cpp_type;
                    cppdecl::Type param_type = ParseTypeOrThrow(param_type_name);

                    if (param_type.IsRvalueReference())
                        continue; // Don't accept rvalue refs.

                    // If the parameter is by value, the class must be copyable.
                    if (!param_type.Is<cppdecl::Reference>() && !type.traits->is_copy_constructible)
                        continue;

                    const bool is_const = param_type.Is<cppdecl::Reference>() ? param_type.IsConst(1) : !type.traits->copy_constructor_takes_nonconst_ref;

                    ClassBeginEndFuncs &state = begin_end_class_funcs[std::make_pair(type_name, is_const)];
                    state.GetBeginOrEnd(is_end).member_return_type = ParseTypeOrThrow(method.ret.cpp_type);
                }
            }
        }

        // Add template arguments to function and method names if necessary to remove ambiguities.
        // Note, this must be AFTER extracting `begin`/`end`, since this messes with the function names.
        {
            // For now we do this based on C++ types, not based on C# types, primarily because this is easier.

            // Returns a string describing C++ parameter types of a function.
            auto ParamsToString = [&](const CInterop::BasicFuncLike &func_like) -> std::string
            {
                std::string ret;
                for (const CInterop::FuncParam &param : func_like.params)
                {
                    if (!ret.empty())
                        ret += ", ";

                    if (param.is_this_param)
                        ret += "`this` ";

                    ret += CppdeclToCode(param.cpp_type);
                }
                return ret;
            };

            { // Handle free functions.
                // Maps method names to parameter lists to the number of times they are used.
                std::unordered_map<std::string, std::unordered_map<std::string, int>> func_param_lists;

                // Collect parameter list strings.
                for (const auto &func : c_desc.functions)
                {
                    auto regular = std::get_if<CInterop::FuncKinds::Regular>(&func.var);
                    if (!regular)
                        continue;
                    func_param_lists[regular->name][ParamsToString(func)]++;
                }

                // Adjust the names if needed.
                for (auto &func : c_desc.functions)
                {
                    auto regular = std::get_if<CInterop::FuncKinds::Regular>(&func.var);
                    if (!regular)
                        continue;
                    if (func_param_lists.at(regular->name).at(ParamsToString(func)) > 1)
                        regular->name = regular->full_name;
                }
            }

            // Now the same for all class methods.
            for (auto it = c_desc.cpp_types.MutableMapBegin(); it != c_desc.cpp_types.MutableMapEnd(); ++it)
            {
                auto class_desc = std::get_if<CInterop::TypeKinds::Class>(&it->second.var);
                if (!class_desc)
                    continue; // Not a class.

                std::unordered_map<std::string, std::unordered_map<std::string, int>> method_param_lists;

                // Collect parameter list strings.
                for (const auto &func : class_desc->methods)
                {
                    auto regular = std::get_if<CInterop::MethodKinds::Regular>(&func.var);
                    if (!regular)
                        continue;
                    method_param_lists[regular->name][ParamsToString(func)]++;
                }

                // Adjust the names if needed.
                for (auto &func : class_desc->methods)
                {
                    auto regular = std::get_if<CInterop::MethodKinds::Regular>(&func.var);
                    if (!regular)
                        continue;
                    if (method_param_lists.at(regular->name).at(ParamsToString(func)) > 1)
                        regular->name = regular->full_name;
                }
            }
        }

        { // Adjust parameter names to not be C# keywords.


            static constexpr auto AdjustParam = [](CInterop::FuncParam &param)
            {
                if (param.name)
                {
                    if (AdjustIfMatchesCSharpKeyword(*param.name))
                        param.name_or_placeholder = *param.name;
                }
                else
                {
                    AdjustIfMatchesCSharpKeyword(param.name_or_placeholder); // Just in case?
                }
            };

            static constexpr auto AdjustFuncLike = [](CInterop::BasicFuncLike &func)
            {
                for (auto &param : func.params)
                    AdjustParam(param);
            };

            // Free functions.
            for (auto &func : c_desc.functions)
                AdjustFuncLike(func);

            // Member functions.
            for (auto it = c_desc.cpp_types.MutableMapBegin(); it != c_desc.cpp_types.MutableMapEnd(); it++)
            {
                if (auto cl = std::get_if<CInterop::TypeKinds::Class>(&it->second.var))
                {
                    for (auto &method : cl->methods)
                        AdjustFuncLike(method);

                    for (auto &field : cl->fields)
                        field.ForEachAccessor(AdjustFuncLike);
                }
            }
        }

        // Emit types.
        for (const auto &key : c_desc.cpp_types.Vec())
        {
            // Skip certain types.
            if (!ShouldEmitCppType(ParseTypeOrThrow(key)))
                continue;

            const CInterop::OutputFile *file_desc = std::visit(Overload{
                [](const CInterop::TypeKinds::Class &elem) -> const CInterop::OutputFile * {return &elem.output_file;},
                [](const CInterop::TypeKinds::Enum &elem) -> const CInterop::OutputFile * {return &elem.output_file;},
                [](const auto &) -> const CInterop::OutputFile * {return nullptr;},
            }, c_desc.cpp_types.Map().at(key).var);

            if (file_desc)
            {
                const cppdecl::QualifiedName qual_name = ParseNameOrThrow(key);

                { // Reject nested types. They will get emitted with the enclosing classes instead.
                    if (qual_name.parts.size() > 1)
                    {
                        cppdecl::QualifiedName enclosing_class_name = qual_name;
                        enclosing_class_name.parts.pop_back();

                        if (auto enclosing_class = c_desc.FindTypeOpt(CppdeclToCode(enclosing_class_name)))
                        {
                            if (std::holds_alternative<CInterop::TypeKinds::Class>(enclosing_class->var))
                                continue;
                        }
                    }
                }

                OutputFile &file = GetOutputFile(*file_desc);
                file.EnsureNamespace(*this, cppdecl::QualifiedName{.parts = {qual_name.parts.begin(), qual_name.parts.end() - 1}});
                EmitCppTypeUnconditionally(file, key);
            }
        }

        // Emit free functions.
        for (const CInterop::Function &free_func : c_desc.functions)
        {
            OutputFile &file = GetOutputFile(free_func.output_file);

            // Go into the correct namespace.
            std::visit(
                [&]<typename T>(const T &elem)
                {
                    cppdecl::QualifiedName qual_name = ParseNameOrThrow(elem.name);
                    assert(!qual_name.parts.empty());

                    file.EnsureNamespace(*this, cppdecl::QualifiedName{.parts = {qual_name.parts.begin(), qual_name.parts.end() - 1}});
                },
                free_func.var
            );

            const std::string unqual_csharp_name = MakeUnqualCSharpFreeFuncName(free_func);

            FuncLikeEmitter(*this, &free_func, unqual_csharp_name, false/*Doesn't really matter, we're not in a class.*/).Emit(file);
        }

        // Generate the requested helpers. This must be after all user code generation, but before closing the namespaces.
        GenerateHelpers();

        { // Lastly, close the namespaces in all files.
            for (auto &file : output_files)
                file.second.ExitAllScopes();
        }
    }

    void Generator::GenerateHelpers()
    {
        // Don't generate the file if no helpers are needed.
        if (!requested_helpers.empty() || !requested_empty_tag_types.empty() || !requested_plain_arrays.empty() || !requested_maybe_opaque_arrays.empty())
        {
            OutputFile &file = output_files.try_emplace("__common").first->second;

            file.EnsureNamespace(*this, helpers_namespace);

            // Generate the helpers.
            if (!requested_helpers.empty())
            {
                // `Object` and `SharedObject`. Intentionally using the non-short-circuiting `|`.
                bool need_shared_object = false;
                if (requested_helpers.erase("Object") | (need_shared_object = requested_helpers.erase("SharedObject")))
                {
                    file.WriteSeparatingNewline();
                    WriteComment(file, "/// This is the base class for all our classes.\n");
                    file.WriteString(
                        // This is semantically abstract, and we also must mark it as one due to the reasons explained in `SharedObject` below.
                        // This is generic solely because `KeepAliveHolder` needs to be generic, see that for an explanation.
                        "public abstract class Object<T> : " + RequestHelper("KeepAliveHolder") + "<T>\n"
                        "{\n"
                        "    protected bool _IsOwningVal;\n"
                    );
                    WriteComment(file,
                        "    /// Returns true if this is an owning instance, and when disposed, will destroy the underlying C++ instance.\n"
                        "    /// If false, we assume that the underlying C++ instance will live long enough.\n"
                    , 1);
                    file.WriteString(
                        "    public virtual bool _IsOwning => _IsOwningVal;\n"
                        "\n"
                        "    internal Object(bool is_owning) {_IsOwningVal = is_owning;}\n"
                        "}\n"
                    );

                    // Add `SharedObject`.
                    if (need_shared_object)
                    {
                        file.WriteSeparatingNewline();
                        WriteComment(file,
                            "/// This is the base class for those of our classes that are backed by `std::shared_ptr`.\n"
                        );
                        file.WriteString(
                            // This is semantically abstract, and we also must mark it as one because we want to make the `IsOwning` property abstract.
                            "public abstract class SharedObject<T> : Object<T>\n"
                            "{\n"
                        );
                        WriteComment(file,
                            "    /// This checks if the `shared_ptr` itself is owning or not, rather than whether we own our `shared_ptr`, which isn't a given.\n"
                            "    /// The derived classes have to implement this, since it depends on the specific `shared_ptr` type.\n"
                        , 1);
                        file.WriteString(
                            "    public abstract override bool _IsOwning {get;}\n"
                        );
                        WriteComment(file,
                            "    /// This checks if we own the underlying `shared_ptr` instance, regardless of whether it owns the underlying object, which is orthogonal.\n"
                            "    /// We repurpose `_IsOwningVal` for this.\n"
                        , 1);
                        file.WriteString(
                            "    public bool _IsOwningSharedPtr => _IsOwningVal;\n"
                            "\n"
                            "    internal SharedObject(bool is_owning) : base(is_owning) {}\n"
                            "}\n"
                        );
                    }
                }


                { // `InOut`, `_InOutOpt`.
                    bool need_inout = requested_helpers.erase("InOut"); // See below for why there's no `_` prefix.
                    bool need_inout_opt = requested_helpers.erase("_InOutOpt");
                    if (need_inout || need_inout_opt)
                    {
                        file.WriteSeparatingNewline();
                        WriteComment(file,
                            "/// This is used for optional in/out parameters, since `ref` can't be nullable.\n"
                        );
                        file.WriteString(
                            // This class isn't prefixed with `_`, since you need to manually construct instances of it ot pass to `_InOutOpt`.
                            "public class InOut<T> where T: unmanaged\n"
                            "{\n"
                            "    public T Value;\n"
                            "\n"
                            "    public InOut() {}\n"
                            "    public InOut(T NewValue) {Value = NewValue;}\n"
                            "}\n"
                        );

                        if (need_inout_opt)
                        {
                            file.WriteSeparatingNewline();
                            WriteComment(file,
                                "/// This is used for optional in/out parameters with default arguments.\n"
                                "/// Usage:\n"
                                "/// * Pass `null` to use the default argument.\n"
                                "/// * Pass `new()` to pass no object.\n"
                                "/// * Pass an instance of `InOut<T>` to pass it to the function.\n"
                            );
                            file.WriteString(
                                "public class _InOutOpt<T> where T: unmanaged\n"
                                "{\n"
                                "    public InOut<T>? Opt;\n"
                                "\n"
                            );
                            WriteComment(file,
                                "    /// Use this constructor (by passing `new()`) if you don't want to receive output from this function parameter.\n"
                            , 1);
                            file.WriteString(
                                "    public _InOutOpt() {}\n"
                            );
                            WriteComment(file,
                                "    /// Use this constructor (by passing an existing `InOut` instance) if you do want to receive output, into that object.\n"
                            , 1);
                            file.WriteString(
                                "    public _InOutOpt(InOut<T>? NewOpt) {Opt = NewOpt;}\n"
                            );
                            WriteComment(file,
                                "    /// An implicit conversion for passing function parameters.\n"
                            , 1);
                            file.WriteString(
                                "    public static implicit operator _InOutOpt<T>(InOut<T>? NewOpt) {return new _InOutOpt<T>(NewOpt);}\n"
                                "}\n"
                            );
                        }
                    }
                }

                // `_InOpt`.
                if (requested_helpers.erase("_InOpt"))
                {
                    file.WriteSeparatingNewline();
                    WriteComment(file,
                        "/// This is used for optional parameters with default arguments.\n"
                        "/// Usage:\n"
                        "/// * Pass `null` to use the default argument.\n"
                        "/// * Pass `new()` to pass no object.\n"
                        "/// * Pass an instance of `T` to pass it to the function.\n"
                        "/// Passing a null `_InOpt` means \"use default argument\", and passing a one with a null `.Opt` means \"pass nothing to the function\".\n"
                    );
                    file.WriteString(
                        "public class _InOpt<T> where T: unmanaged\n"
                        "{\n"
                        "    public T? Opt;\n"
                        "\n"
                        "    public _InOpt() {}\n"
                        "    public _InOpt(T NewOpt) {Opt = NewOpt;}\n"
                        "    public static implicit operator _InOpt<T>(T NewOpt) {return new _InOpt<T>(NewOpt);}\n"
                        "}\n"
                    );
                }

                { // `Ref` and `ConstRef`.
                    auto MakeMaybeConstRef = [&](bool is_const)
                    {
                        std::string name = is_const ? "ConstRef" : "Ref"; // See below for why there's no `_` prefix.
                        if (!requested_helpers.erase(name))
                            return;

                        std::string maybe_readonly = is_const ? "readonly " : "";

                        file.WriteSeparatingNewline();
                        WriteComment(file,
                            "/// A reference to a C object. This is sometimes used to return optional references, since `ref` can't be nullable. Or to return references from operators, since those can't return `ref`s.\n"
                            "/// This object itself isn't nullable, we return `" + name + "<T>?` when nullability is needed.\n"
                        );
                        file.WriteString(
                            // This isn't prefixed with `_`, since the user might need to deal with those directly,
                            //   when handling results of functions returning this.
                            "public unsafe class " + name + "<T> where T: unmanaged\n"
                            "{\n"
                            "    // Should never be null.\n"
                            "    private T *Ptr;\n"
                            "    // Should never be given a null pointer.\n"
                            "    internal " + name + "(T *new_ptr)\n"
                            "    {\n"
                            "        System.Diagnostics.Trace.Assert(new_ptr is not null);\n"
                            "        Ptr = new_ptr;\n"
                            "    }\n"
                            "    // \n"
                            "    internal unsafe " + name + "(ref " + maybe_readonly + "T new_ref)\n"
                            "    {\n"
                            "        fixed (T *new_ptr = &new_ref)\n"
                            "        {\n"
                            "            // Smuggling fixed pointers like this seems sketchy at first, but we deal with `ref`s created from pointers all the time, and assume they don't break.\n"
                            "            Ptr = new_ptr;\n"
                            "        }\n"
                            "    }\n"
                            "\n"
                            "    public ref " + maybe_readonly + "T Value => ref *Ptr;\n"
                            "\n"
                            // Add implicit conversion to `T`.
                            // This is needed not just for user convenience, but also for our automatic dereferencing of `expected`.
                            "    public static implicit operator T(" + name + "<T> wrapper) {return wrapper.Value;}\n"
                            "}\n"
                        );
                    };

                    MakeMaybeConstRef(false);
                    MakeMaybeConstRef(true);
                }

                // Stuff for `_ByValue_...`.

                if (requested_helpers.erase("_Moved") | requested_helpers.erase("Move"))
                {
                    file.WriteSeparatingNewline();
                    WriteComment(file,
                        "/// Wraps the object in a wrapper that indicates that it should be treated as a temporary object.\n"
                        "/// This can be used with `_ByValue_...` function parameters, to indicate that the argument should be moved.\n"
                        "/// See those structs for a longer explanation.\n"
                    );
                    file.WriteString(
                        "public static _Moved<T> Move<T>(T new_value) {return new(new_value);}\n"
                        "\n"
                    );
                    WriteComment(file,
                        "/// A wrapper for `T` that indicates that it's a temporary object, or should be treated as such.\n"
                        "/// If you're calling a function that returns this, you can safely convert this to `T`.\n"
                        "/// If you're calling a function that takes this as a parameter, use the `Move()` function to create this wrapper.\n"
                    );
                    file.WriteString(
                        "public readonly struct _Moved<T>\n"
                        "{\n"
                        "    public readonly T Value;\n"
                        "    internal _Moved(T new_value) {Value = new_value;}\n"
                        "    public static implicit operator T(_Moved<T> moved) {return moved.Value;}\n"
                        "}\n"
                    );
                }

                if (requested_helpers.erase("_PassBy"))
                {
                    file.WriteSeparatingNewline();
                    file.WriteString(
                        "internal enum _PassBy : int\n" // This enum must be synced with `CInterop::PassBy`.
                        "{\n"
                        "    default_construct,\n"
                        "    copy,\n"
                        "    move,\n"
                        "    default_arg,\n"
                        "    no_object,\n"
                        "}\n"
                    );
                }

                // Moving refs.
                if (requested_helpers.erase("_MoveRef"))
                {
                    file.WriteSeparatingNewline();
                    WriteComment(file,
                        "/// This is a tag value. Pass it to functions having a `_MoveRef` parameter.\n"
                        "/// This indicates that the reference parameter immediately following it is an rvalue reference.\n"
                    );
                    file.WriteString(
                        "public static _MoveRef MoveRef = default;\n"
                    );
                    WriteComment(file,
                        "/// This is a tag type for passing rvalue references. Don't construct directly, prefer the `MoveRef` constant.\n"
                    );
                    file.WriteString(
                        "public struct _MoveRef {}\n"
                    );
                }

                // `NullOpt`, for `_ByValueOptOpt_...`.
                // Intentionally using `|` to not short-circuit erasures.
                if (requested_helpers.erase("NullOpt") || requested_helpers.erase("NullOptType"))
                {
                    file.WriteSeparatingNewline();
                    WriteComment(file,
                        "/// The type of `NullOpt`, see that for more details.\n"
                    );
                    file.WriteString(
                        // This is a struct as an optimization.
                        "public struct NullOptType {}\n"
                    );
                    WriteComment(file,
                        "/// This can be passed into `_ByValueOptOpt_...` parameters to indicate that you want to pass no object,\n"
                        "///   as opposed to using the default argument provided by the function.\n"
                    );
                    file.WriteString(
                        "public static NullOptType NullOpt;\n"
                    );
                }

                { // `ReadOnlyCharSpanOpt`.
                    // Also leaving a generic version here for posterity.
                    #if 0
                    if (requested_helpers.erase("ReadOnlySpanOpt"))
                    {
                        file.WriteSeparatingNewline();
                        WriteComment(file,
                            "/// This is used for optional `ReadOnlySpan` function parameters.\n"
                            "/// Pass `null` or `new()` to use the default argument.\n"
                            "///   Note that for the original `ReadOnlySpan`, those result in an empty span instead.\n"
                        );
                        file.WriteString(
                            "public ref struct ReadOnlySpanOpt<T> where T: unmanaged\n"
                            "{\n"
                            "    public readonly bool HasValue;\n"
                            "\n"
                            "    public " + RequestReadOnlySpan("T") + " _Span;\n" // This needs to be visible for us to take the address of `_Span._reference`, when using span polyfills.
                            "    public " + RequestReadOnlySpan("T") + " Value\n"
                            "    {\n"
                            "        get\n"
                            "        {\n"
                            "            System.Diagnostics.Trace.Assert(HasValue);\n"
                            "            return _Span;\n"
                            "        }\n"
                            "    }\n"
                            "\n"
                            "    public ReadOnlySpanOpt(T[]? arr) {HasValue = arr is not null; _Span = arr;}\n"
                            "    public ReadOnlySpanOpt(" + RequestReadOnlySpan("T") + " span) {HasValue = true; _Span = span;}\n"
                            "    public static implicit operator ReadOnlySpanOpt<T>(T[]? arr) {return new(arr);}\n"
                            "    public static implicit operator ReadOnlySpanOpt<T>(" + RequestReadOnlySpan("T") + " span) {return new(span);}\n"
                            "}\n"
                        );
                    }
                    #endif

                    if (requested_helpers.erase("ReadOnlyCharSpanOpt"))
                    {
                        file.WriteSeparatingNewline();
                        WriteComment(file,
                            "/// This is used for optional `ReadOnlySpan<char>` function parameters. This is a specialized version that provides string interop.\n"
                            "/// Pass `null` or `new()` to use the default argument.\n"
                            "///   Note that for the original `ReadOnlySpan<char>`, those result in an empty span instead.\n"
                        );
                        file.WriteString(
                            "public ref struct ReadOnlyCharSpanOpt\n"
                            "{\n"
                            "    public readonly bool HasValue;\n"
                            "\n"
                            "    ReadOnlySpan<char> _Span;\n"
                            "    public ReadOnlySpan<char> Value\n"
                            "    {\n"
                            "        get\n"
                            "        {\n"
                            "            System.Diagnostics.Trace.Assert(HasValue);\n"
                            "            return _Span;\n"
                            "        }\n"
                            "    }\n"
                            "\n"
                            "    public ReadOnlyCharSpanOpt(char[]? arr) {HasValue = arr is not null; _Span = arr;}\n"
                            "    public ReadOnlyCharSpanOpt(ReadOnlySpan<char> span) {HasValue = true; _Span = span;}\n"
                            "    public ReadOnlyCharSpanOpt(string? str) {HasValue = str is not null; " + std::string(HaveCSharpFeatureSpans() ? "_Span = str;" : "if (str is not null) _Span = str.ToCharArray();") + "}\n"
                            "\n"
                            "    // This is disabled because it makes conversion from `null` ambiguous.\n"
                            "    // public static implicit operator ReadOnlyCharSpanOpt(char[]? arr) {return new(arr);}\n"
                            "    public static implicit operator ReadOnlyCharSpanOpt(ReadOnlySpan<char> span) {return new(span);}\n"
                            "    public static implicit operator ReadOnlyCharSpanOpt(string? str) {return new(str);}\n"
                            "}\n"
                        );
                    }
                }

                // `Box` and `Const_Box`.
                // Intentionally using the non-short-circuiting `|` here.
                if (requested_helpers.erase("Box") | requested_helpers.erase("Const_Box"))
                {
                    file.WriteSeparatingNewline();
                    WriteComment(file,
                        "/// Stores a single heap-allocated value with a stable address, or a user-provided non-owning pointer.\n"
                        "/// This is used for class fields of pointer types to const non-classes.\n"
                        "/// Usage:\n"
                        "/// * To read a property of type `Const_Box<T>?`, first check `is not null`. If it's not null, use `.Value` to read the value.\n"
                        "/// * To modify the property, either assign a value of type `T`, or assign `null`.\n"
                        "///   Assigning a value will allocate its copy and make the underlying pointer point to it.\n"
                    );
                    file.WriteString(
                        "public class Const_Box<T> : " + RequestHelper("KeepAliveHolder") + "<Const_Box<T>>, System.IDisposable where T: unmanaged\n"
                        "{\n"
                        "    internal unsafe T *_UnderlyingPtr;\n"
                        "    bool _IsOwning;\n"
                        "\n"
                        "    public unsafe ref readonly T Value => ref *_UnderlyingPtr;\n"
                        "    public bool IsOwning => _IsOwning;\n"
                        "\n"
                    );
                    WriteComment(file,
                        "    /// Allocate a new value.\n"
                    , 1);
                    file.WriteString(
                        "    unsafe public Const_Box(T value)\n"
                        "    {\n"
                        "        _IsOwning = true;\n"
                        "        _UnderlyingPtr = (T *)" + RequestHelper("_Alloc") + "((nuint)sizeof(T));\n"
                        "        *_UnderlyingPtr = value;\n"
                        "    }\n"
                        "\n"
                    );
                    WriteComment(file,
                        "    /// Implicitly convert from a value, allocating a copy of it.\n"
                        "    /// Only `Const_Box<T>` has this, `Box<T>` intentionally doesn't.\n" // Note that this behavior should be synced with how exposed structs are converted to their wrappers.
                    , 1);
                    file.WriteString(
                        "    public static implicit operator Const_Box<T>(T value) {return new(value);}\n"
                        "\n"
                    );
                    WriteComment(file,
                        "    /// Store a non-owning pointer.\n"
                    , 1);
                    file.WriteString(
                        "    unsafe public Const_Box(T *ptr)\n"
                        "    {\n"
                        "        _IsOwning = false;\n"
                        "        _UnderlyingPtr = ptr;\n"
                        "    }\n"
                        "\n"
                        "    protected virtual unsafe void Dispose(bool disposing)\n"
                        "    {\n"
                        "        if (_UnderlyingPtr is null || !_IsOwning)\n"
                        "            return;\n"
                        "        // Dealloc.\n"
                        "        _UnderlyingPtr = null;\n"
                        "    }\n"
                        "    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}\n"
                        "    ~Const_Box() {Dispose(false);}\n"
                        "}\n"
                    );

                    file.WriteSeparatingNewline();
                    WriteComment(file,
                        "/// Stores a single heap-allocated value with a stable address, or a user-provided non-owning pointer.\n"
                        "/// This is used for class fields of pointer types to mutable non-classes.\n"
                        "/// Usage:\n"
                        "/// * To read a property of type `Box<T>?`, first check `is not null`. If it's not null, use `.Value` to read the value.\n"
                        "/// * To modify the property, either assign `new(value)` (to allocate a copy of the value and point to it), or assign `null`.\n"
                        "///   Since `.Value` returns a mutable ref, you can also assign to that to modify the pointee, assuming the property isn't null.\n"
                    );
                    file.WriteString(
                        "public class Box<T> : Const_Box<T> where T: unmanaged\n"
                        "{\n"
                        "    public new unsafe ref T Value => ref *_UnderlyingPtr;\n"
                        "\n"
                    );
                    WriteComment(file,
                        "    /// Allocate a new value.\n"
                    , 1);
                    file.WriteString(
                        "    unsafe public Box(T value) : base(value) {}\n"
                        "\n"
                    );
                    WriteComment(file,
                        "    /// Store a non-owning pointer.\n"
                    , 1);
                    file.WriteString(
                        "    unsafe public Box(T *ptr) : base(ptr) {}\n"
                        "}\n"
                    );
                }

                // <-- Insert new public helpers here.

                // The `KeepAliveHolder`. Needs to be at least after `[Const_]Box`, since they need it.
                if (requested_helpers.erase("KeepAliveHolder"))
                {
                    file.WriteSeparatingNewline();
                    WriteComment(file,
                        "/// This is the base classes that keep other classes alive.\n"
                        "/// This is generic to keep static fields separate.\n"
                    );
                    file.WriteString(
                        "public abstract class KeepAliveHolder<T>\n"
                        "{\n"
                    );
                    WriteComment(file,
                        "    /// Which objects need to be kept alive while this object exists?\n"
                    , 1);
                    file.WriteString(
                        "    Dictionary<string, HashSet<object>>? _KeepAliveData;\n"
                        "    static Dictionary<string, HashSet<object>>? _StaticKeepAliveData;\n"
                        "\n"
                    );
                    WriteComment(file,
                        "    /// A special holder for the enclosing object when returning a reference to its subobject.\n"
                    , 1);
                    file.WriteString(
                        "    public object? _KeepAliveEnclosingObject = null;\n"
                        "\n"
                    );
                    WriteComment(file,
                        "    /// Keeps `obj` alive as long as this object exists.\n"
                        "    /// If `key` is specified, it's an optional tag for this object.\n"
                    , 1);
                    file.WriteString(
                        "    public void _KeepAlive(object obj, string key = \"\")\n"
                        "    {\n"
                        "        if (_KeepAliveData is null)\n"
                        "            _KeepAliveData = new();\n"
                        "        if (!_KeepAliveData.ContainsKey(key))\n"
                        "            _KeepAliveData[key] = new();\n"
                        "        _KeepAliveData[key].Add(obj);\n"
                        "    }\n"
                        "    public static void _StaticKeepAlive(object obj, string key = \"\")\n"
                        "    {\n"
                        "        if (_StaticKeepAliveData is null)\n"
                        "            _StaticKeepAliveData = new();\n"
                        "        if (!_StaticKeepAliveData.ContainsKey(key))\n"
                        "            _StaticKeepAliveData[key] = new();\n"
                        "        _StaticKeepAliveData[key].Add(obj);\n"
                        "    }\n"
                        "\n"
                    );
                    WriteComment(file,
                        "    /// Discards the objects kept alive by this object.\n"
                        "    /// If `key` is not empty, only discards the objects with the same key. Otherwise discards all of them.\n"
                        "    /// This intentionally doesn't discard `_KeepAliveEnclosingObject`.\n"
                    , 1);
                    file.WriteString(
                        "    public void _DiscardKeepAlive(string key = \"\")\n"
                        "    {\n"
                        "        if (_KeepAliveData is null)\n"
                        "            return;\n"
                        "        if (key == \"\")\n"
                        "        {\n"
                        "            _KeepAliveData.Clear(); // I could also make it null, but I don't think it's worth it.\n"
                        "            return;\n"
                        "        }\n"
                        "        _KeepAliveData[key].Clear(); // Or we could `.Remove(key)`, but keeping a slot in the map looks better to me.\n"
                        "    }\n"
                        "    public static void _StaticDiscardKeepAlive(string key = \"\")\n"
                        "    {\n"
                        "        if (_StaticKeepAliveData is null)\n"
                        "            return;\n"
                        "        if (key == \"\")\n"
                        "        {\n"
                        "            _StaticKeepAliveData.Clear(); // I could also make it null, but I don't think it's worth it.\n"
                        "            return;\n"
                        "        }\n"
                        "        _StaticKeepAliveData[key].Clear(); // Or we could `.Remove(key)`, but keeping a slot in the map looks better to me.\n"
                        "    }\n"
                        "}\n"
                    );
                }

                { // Custom exceptions.
                    auto CreateExceptionClassIfNeeded = [&](const std::string &name, std::string base, const std::string &comment)
                    {
                        if (!requested_helpers.erase(name))
                            return;

                        file.WriteSeparatingNewline();
                        WriteComment(file, comment);
                        file.WriteString(
                            "public class " + name + " : System." + base + "\n"
                            "{\n"
                            "    public " + name + "() {}\n"
                            "    public " + name + "(string message) : base(message) {}\n"
                            "    public " + name + "(string message, Exception inner) : base(message, inner) {}\n"
                            "}\n"
                        );
                    };

                    CreateExceptionClassIfNeeded("UnexpectedResultException", "Exception", "/// This is thrown when the underlying C++ function returns an error via `expected<>`.\n");
                    CreateExceptionClassIfNeeded("InvalidEnumeratorExpression", "InvalidOperationException", "/// This is thrown when dereferencing an invalid enumerator (a C++ iterator).\n");
                }

                // ---

                // Some non-public helpers.

                if (requested_helpers.erase("_Alloc"))
                {

                    file.WriteSeparatingNewline();
                    WriteComment(file,
                        "/// An internal function for allocating memory through C++.\n"
                    );
                    file.WriteString(
                        "internal static unsafe void *_Alloc(nuint size)\n"
                    );
                    file.PushScope();

                    auto dllimport_alloc = MakeDllImportDecl(c_desc.helpers_prefix + "Alloc", "void *", "nuint size");
                    file.WriteString(dllimport_alloc.dllimport_decl);
                    file.WriteString("return " + dllimport_alloc.csharp_name + "(size);\n");

                    file.PopScope();
                }

                if (requested_helpers.erase("_Free"))
                {

                    file.WriteSeparatingNewline();
                    WriteComment(file,
                        "/// An internal function for deallocating memory through C++.\n"
                    );
                    file.WriteString(
                        "internal static unsafe void _Free(void *ptr)\n"
                    );
                    file.PushScope();

                    auto dllimport_free = MakeDllImportDecl(c_desc.helpers_prefix + "Free", "void", "void *ptr");
                    file.WriteString(dllimport_free.dllimport_decl);
                    file.WriteString(dllimport_free.csharp_name + "(ptr);\n");

                    file.PopScope();
                }

                // ---

                // Lastly, check for unknown helper names.
                if (!requested_helpers.empty())
                {
                    std::string list;
                    for (const auto &str : requested_helpers)
                    {
                        if (!list.empty())
                            list += "`, `";

                        list += str;
                    }

                    throw std::logic_error("Internal error: Following unknown C# helpers were requested: `" + list + "`.");
                }
            }

            // --- Starting from this point we begin entering custom namespaces.

            if (!requested_empty_tag_types.empty())
            {
                file.WriteSeparatingNewline();
                for (const auto &[csharp_name, cpp_name] : requested_empty_tag_types)
                {
                    { // Enter the correct namespace.
                        cppdecl::QualifiedName ns = cpp_name;
                        ns.parts.pop_back();
                        file.EnsureNamespace(*this, ns);
                    }

                    file.WriteSeparatingNewline();
                    WriteComment(file,
                        // "/// This is an empty tag type, corresponding to C++ `" + CppdeclToCode(cpp_name) + "`.\n"
                        // Don't tell the underlying C++ type, since this type can be made up, such as our fake `std::variant_index` in the variant binding.
                        "/// This is an empty tag type.\n"
                    );
                    file.WriteString(
                        // A plain struct seems most appropriate. A `ref struct` would add extra limitations that we don't need.
                        "public struct " + CppToCSharpIdentifier(cpp_name.parts.back()) + " {}\n" // No members!
                    );
                }
            }

            // Generate plain arrays.
            // Note that this moves to a different namespace.
            if (!requested_plain_arrays.empty())
            {
                file.WriteSeparatingNewline();
                for (const auto &[csharp_name, desc] : requested_plain_arrays)
                {
                    { // Enter the correct namespace.
                        cppdecl::QualifiedName ns = desc.qual_array_name;
                        ns.parts.pop_back();
                        file.EnsureNamespace(*this, ns);
                    }

                    const std::string csharp_array_name = CppToCSharpIdentifier(desc.qual_array_name.parts.back());

                    // We use one of several approaches to implementing arrays...

                    if (HaveCSharpFeatureInlineArrays())
                    {
                        file.WriteSeparatingNewline();
                        file.WriteString(
                            "[System.Runtime.CompilerServices.InlineArray(" + std::to_string(desc.num_elems) + ")]\n"
                            // Those can't be `ref struct`s, but we're fine with plain `structr`s too.
                            "public struct " + csharp_array_name + "\n"
                            "{\n"
                            // The name here doesn't really matter, since the array access syntax ignores it.
                            // This could be made private, since accessing this member directly would be possible otherwise (and would return the first element, I think?),
                            //   and that isn't useful.
                            // But I'm leaving this public just in case.
                            "    public " + desc.csharp_elem_type + " _elem;\n"
                            "}\n"
                        );
                    }
                    else
                    {
                        // You can get this list from the compiler error message, by trying to use a wrong element type, e.g. a `struct`.
                        static const std::unordered_set<std::string> allowed_fixed_array_elem_types = {
                            "bool", "byte", "short", "int", "long", "char", "sbyte", "ushort", "uint", "ulong", "float", "double"
                        };

                        // Use a fixed array if it supports our element type.
                        // Interestingly, only primitive scalar types are allowed, and structs are not allowed.
                        if (allowed_fixed_array_elem_types.contains(desc.csharp_elem_type))
                        {
                            file.WriteSeparatingNewline();
                            file.WriteString(
                                "public struct " + csharp_array_name + "\n"
                                "{\n"
                                // Leaving this public just in case.
                                "    public unsafe fixed " + desc.csharp_elem_type + " _elem[" + std::to_string(desc.num_elems) + "];\n"
                                "    public unsafe ref " + desc.csharp_elem_type + " this[nint i] => ref _elem[i];\n"
                                "}\n"
                            );
                        }
                        else
                        {
                            file.WriteSeparatingNewline();
                            file.WriteString(
                                "public struct " + csharp_array_name + "\n"
                                "{\n"
                            );
                            for (std::size_t i = 0; i < desc.num_elems; i++)
                            {
                                // Lmao.
                                // Leaving this public just in case.
                                file.WriteString("    public " + desc.csharp_elem_type + " _" + std::to_string(i) + ";\n");
                            }
                            file.WriteString(
                                "\n"
                                "    public unsafe ref " + desc.csharp_elem_type + " this[nint i]\n"
                                "    {\n"
                                "        get\n"
                                "        {\n"
                                "            fixed (" + desc.csharp_elem_type + " *ptr = &_0)\n"
                                "            {\n"
                                // Smuggling out a pointer like this is a bit sus, since C# GC is said to be able to move the objects around.
                                // But from what I gathered, C# doesn't differentiate between `ref`s created from unsafe pointers and the normal ones,
                                //   so it should adjust all of them equally well, when GC moves stuff.
                                // See: https://stackoverflow.com/q/27616910/2752075
                                "                return ref *(ptr + i);\n"
                                "            }\n"
                                "        }\n"
                                "    }\n"
                                "}\n"
                            );
                        }
                    }
                }
            }

            // Generate opaque arrays.
            // Note that this moves to a different namespace.
            if (!requested_maybe_opaque_arrays.empty())
            {
                for (const auto &[name, desc] : requested_maybe_opaque_arrays)
                {
                    { // Enter the correct namespace.
                        cppdecl::QualifiedName ns = desc.qual_array_name;
                        ns.parts.pop_back();
                        file.EnsureNamespace(*this, ns);
                    }

                    const std::string unqual_csharp_name = CppToCSharpIdentifier(desc.qual_array_name.parts.back());

                    std::optional<DllImportDeclStrings> dllimport_offset_func;
                    if (desc.ptr_offset_func)
                    {
                        dllimport_offset_func = MakeDllImportDecl(*desc.ptr_offset_func, desc.strings.csharp_underlying_ptr_target_type + " *", desc.strings.csharp_underlying_ptr_target_type + " *ptr, nint i");
                    }

                    // If offsetting this pointer needs a function call, writes a dllimport for that call.
                    auto WriteOffsetFuncDllImportDecl = [&]
                    {
                        if (dllimport_offset_func)
                            file.WriteString(dllimport_offset_func->dllimport_decl);
                    };

                    // Returns the expression to offset the pointer by `amount`.
                    // `amount` mus be sufficiently parenthesized, if it's not a single variable/literal (the `-` sign is allowed without parens).
                    auto OffsetPtr = [&](std::string amount) -> std::string
                    {
                        std::string expr = amount;
                        if (desc.size_for_ptr_offsets != 1)
                        {
                            if (amount == "1")
                                expr = std::to_string(desc.size_for_ptr_offsets); // Purely to make the code look better.
                            else if (amount == "-1")
                                expr = "-" + std::to_string(desc.size_for_ptr_offsets); // Purely to make the code look better.
                            else
                                expr += " * " + std::to_string(desc.size_for_ptr_offsets);
                        }

                        if (desc.ptr_offset_func)
                            expr = dllimport_offset_func->csharp_name + "(Ptr, " + expr + ")";
                        else
                            expr = "Ptr + " + expr;

                        return expr;
                    };

                    file.WriteSeparatingNewline();

                    file.WriteString("public unsafe struct " + unqual_csharp_name);
                    if (!desc.num_elems)
                        file.WriteString(" : IEquatable<" + unqual_csharp_name + ">"); // Unbounded arrays are equality-compatable.
                    file.WriteString("\n");
                    file.PushScope();

                    auto Deref = [&](const std::string &expr) -> std::string
                    {
                        switch (desc.kind)
                        {
                          case RequestedMaybeOpaqueArray::ElemKind::ref:
                            return "return ref *(" + expr + ");";
                          case RequestedMaybeOpaqueArray::ElemKind::ptr:
                            return "return new(" + expr + ");";
                          case RequestedMaybeOpaqueArray::ElemKind::ptr_maybeowning:
                            return "return new(" + expr + ", is_owning: false);";
                        }

                        assert(false);
                        return "??";
                    };

                    // Extra stuff for unbounded arrays.
                    if (!desc.num_elems)
                    {
                        // `Deref()`. We need this not only for convenience, but also to implement our `IEnumerator` classes.
                        file.WriteString(
                            "public readonly " + desc.csharp_elem_type + " " + AdjustCalledFuncName("Deref") + "()\n"
                            "{\n"
                            "    " + Deref("Ptr") + "\n"
                            "}\n"
                        );

                        { // Increment and decrement. We need this to implement our `IEnumerator` classes.
                            file.WriteString("public unsafe void " + (HaveCSharpFeatureNonStaticIncrementAndDecrement() ? "operator++" : AdjustCalledFuncName("Incr")) + "()\n");
                            file.PushScope();
                            WriteOffsetFuncDllImportDecl();
                            file.WriteString("Ptr = " + OffsetPtr("1") + ";\n");
                            file.PopScope();

                            file.WriteString("public unsafe void " + (HaveCSharpFeatureNonStaticIncrementAndDecrement() ? "operator--" : AdjustCalledFuncName("Decr")) + "()\n");
                            file.PushScope();
                            WriteOffsetFuncDllImportDecl();
                            file.WriteString("Ptr = " + OffsetPtr("-1") + ";\n");
                            file.PopScope();
                        }
                    }

                    file.WriteSeparatingNewline();
                    file.WriteString(
                        "internal " + desc.strings.csharp_underlying_ptr_target_type + " *Ptr;\n"
                        "\n"
                        "internal " + unqual_csharp_name + "(" + desc.strings.csharp_underlying_ptr_target_type + " *new_ptr) {Ptr = new_ptr;}\n"
                        "\n"
                        // This one is intentionally `nint` instead of `nuint`, because we use arrays of unknown bound
                        //   to bind pointers marked as "pointers to arrays" in C bindings, and those sometimes
                        //   point to the middle of an array, so we have to support negative indices.
                        "public " + desc.csharp_elem_type + " this[nint i]\n"
                    );

                    file.PushScope();

                    // Properties and indexers of reference types only need getters. Attempting to provide a setter is an error.
                    // And if `desc.csharp_elem_type` is a non-reference, we don't need setters either, you can use `.Assign()` or whatever.
                    file.WriteString("get\n");

                    file.PushScope();

                    // Assert that `i` is in bounds.
                    // Note that for arrays of unknown bounds, we don't even check `i >= 0`, because we can use those
                    //   to represent pointers to the middle of an array, so we might need negative indices.
                    if (desc.num_elems)
                        file.WriteString("System.Diagnostics.Trace.Assert(i >= 0 && i < " + std::to_string(*desc.num_elems) + ");\n");

                    WriteOffsetFuncDllImportDecl();

                    file.WriteString(Deref(OffsetPtr("i")) + "\n");

                    file.PopScope(); // indexer getter

                    file.PopScope(); // indexer

                    // Get the underlying pointer.
                    if (desc.kind != RequestedMaybeOpaqueArray::ElemKind::ptr_maybeowning)
                    {
                        file.WriteSeparatingNewline();
                        file.WriteString(
                            "public unsafe " + desc.strings.csharp_underlying_ptr_target_type + " *GetPointer() => Ptr;\n"
                        );
                    }

                    // More extra stuff to unbounded arrays.
                    if (!desc.num_elems)
                    {
                        file.WriteSeparatingNewline();

                        // Unbounded arrays are equality-comparable.
                        file.WriteString(
                            "public static unsafe bool operator==(" + unqual_csharp_name + " a, " + unqual_csharp_name + " b) {return a.Equals(b);}\n"
                            "public static bool operator!=(" + unqual_csharp_name + " a, " + unqual_csharp_name + " b) {return !a.Equals(b);}\n"
                            // Apparently this already exists in the implicit struct base called `ValueType`, but that isn't enough to satisfy the interface, so I have to reimplement this myself.
                            "public readonly bool Equals(" + unqual_csharp_name + " other) {return base.Equals(other);}\n"
                            // This also already exists in the base, but the compiler warns about us not overriding it (though we don't really need to).
                            // So I'm overriding it just to silence the warning.
                            "public override bool Equals(object? other) {return base.Equals(other);}\n"
                        );
                    }

                    file.PopScope(); // struct
                }
            }
        }
    }
}
