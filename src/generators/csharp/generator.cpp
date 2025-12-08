#include "generator.h"
#include "common/string_escape.h"

#include <cppdecl/declarations/parse.h>

#include <numeric>

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

    void OutputFile::DumpToOstream(std::ostream &out) const
    {
        out << contents;
    }

    void OutputFile::WriteString(std::string_view input, int extra_indent)
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
                for (int i = 0; i < int(current_scope.size()) + extra_indent; i++)
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

    cppdecl::QualifiedName Generator::CppToCSharpArrayHelperName(cppdecl::Type cpp_array_type)
    {
        // Make sure all modifiers are arrays, and have known bounds.
        if (!std::all_of(cpp_array_type.modifiers.begin(), cpp_array_type.modifiers.end(), [](const cppdecl::TypeModifier &mod)
        {
            return mod.Is<cppdecl::Array>() && mod.As<cppdecl::Array>()->GetSize();
        }))
        {
            return {};
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

        std::string csharp_array_name;
        if (cpp_array_type.IsEffectivelyConst())
            csharp_array_name += "Const_";

        csharp_array_name += "Array_";
        csharp_array_name += CppToCSharpIdentifier(remaining_parts);
        for (const auto &extent : cpp_array_type.modifiers)
        {
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

            ret.num_elems = cpp_array_type.As<cppdecl::Array>()->GetSize().value();
            ret.strings.csharp_type = csharp_array_name;
            ret.qual_array_name = qual_array_name;

            cppdecl::Type cpp_elem_type = cpp_array_type;
            cpp_elem_type.RemoveModifier();

            cpp_elem_type.RemoveQualifiers(cppdecl::CvQualifiers::const_);

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
                ret.size_for_ptr_offsets = desc->size_for_ptr_offsets * desc->num_elems;

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
        // This works in our case.
        return CppToCSharpHelperName(std::move(name));
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
        // You can't trivially remove `_` from `Const_`, since we need `ConstIterator` (from `const_iterator`) to be different from the result
        //   of this function applied to `iterator` (resulting in `Const_Iterator`).
        if (is_const)
            return "Const_" + CppToCSharpIdentifier(name.parts.back());

        // For exposed structs, the non-const half is named with the `Mut...` prefix, because there's also a `struct` that stores the thing by value.
        const auto &class_info = std::get<CInterop::TypeKinds::Class>(c_desc.FindTypeOpt(CppdeclToCode(name))->var);
        if (class_info.kind == CInterop::ClassKind::exposed_struct)
            return "Mut_" + CppToCSharpIdentifier(name.parts.back());

        return CppToCSharpIdentifier(name.parts.back());
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

    std::string Generator::CppToCSharpByValueHelperName(cppdecl::QualifiedName name)
    {
        name = AdjustCppNamespaces(std::move(name));

        std::string ret;
        for (std::size_t i = 0; i < name.parts.size(); i++)
        {
            if (i > 0)
                ret += '.'; // We don't use actual namespaces in C# (which would require `::`). Since we only use static classes, we can use `.` everywhere.

            std::string part;
            if (i + 1 == name.parts.size())
                part = CppToCSharpUnqualByValueHelperName(name.parts[i]);
            else
                part = CppToCSharpIdentifier(name.parts[i]);

            ret += part;
        }
        return ret;
    }

    std::string Generator::CppToCSharpUnqualByValueHelperName(const cppdecl::UnqualifiedName &name)
    {
        return "_ByValue_" + CppToCSharpIdentifier(name);
    }

    std::string Generator::CppToCSharpByValueOptOptHelperName(cppdecl::QualifiedName name)
    {
        name = AdjustCppNamespaces(std::move(name));

        std::string ret;
        for (std::size_t i = 0; i < name.parts.size(); i++)
        {
            if (i > 0)
                ret += '.'; // We don't use actual namespaces in C# (which would require `::`). Since we only use static classes, we can use `.` everywhere.

            std::string part;
            if (i + 1 == name.parts.size())
                part = CppToCSharpUnqualByValueOptOptHelperName(name.parts[i]);
            else
                part = CppToCSharpIdentifier(name.parts[i]);

            ret += part;
        }
        return ret;
    }

    std::string Generator::CppToCSharpUnqualByValueOptOptHelperName(const cppdecl::UnqualifiedName &name)
    {
        // Sic, repeating `Opt` two times (once because those always have default arguments, then again because of `std::optional`).
        return "_ByValueOptOpt_" + CppToCSharpIdentifier(name);
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

    std::string Generator::TypeBindingFlagsToString(TypeBindingFlags flags)
    {
        std::string ret;
        ret += bool(flags & TypeBindingFlags::enable_sugar) ? " (with sugar enabled)" : "";
        ret += bool(flags & TypeBindingFlags::pointer_to_array) ? " (pointer to array)" : "";
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
        const std::string cpp_type_str = CppdeclToCode(cpp_type);
        auto cached_iter = cached_type_bindings.find(std::pair(cpp_type_str, flags));
        if (cached_iter != cached_type_bindings.end())
            return &cached_iter->second;

        // The name `std::shared_ptr` without template arguments.
        static const cppdecl::QualifiedName cpp_name_shared_ptr = cppdecl::QualifiedName{}.AddPart("std").AddPart("shared_ptr");

        try
        {
            auto CreateBinding = [&](TypeBinding new_binding) -> const TypeBinding *
            {
                auto [iter, is_new] = cached_type_bindings.try_emplace(std::pair(cpp_type_str, flags), std::move(new_binding));
                assert(is_new);
                return &iter->second;
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
                                        .dllimport_decl_params = csharp_type + ' ' + name,
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
                                        .dllimport_decl_params = csharp_type + " *" + name, // No const pointers in C#.
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
                                        .make_return_expr = [](std::string_view expr){return std::string(expr) + ";";},
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
                                            .dllimport_decl_params = "", // Nothing.
                                            .csharp_decl_params = {{.type = RequestCSharpEmptyTagType(qual_name), .name = name, .default_arg = have_useless_defarg ? std::optional<std::string>("default") : std::nullopt}}, // Note `default` over `null`, since this is a struct.
                                            .dllimport_args = "", // Nothing.
                                        };
                                    },
                                },
                                // No `param_usage_with_default_arg`, since all default arguments are considered useless for tags.
                                .return_usage = TypeBinding::ReturnUsage{
                                    .dllimport_return_type = "void",
                                    .csharp_return_type = RequestCSharpEmptyTagType(cpp_type.simple_type.name),
                                    .make_return_expr = [](const std::string &expr){return expr + ";\nreturn new();";}, // Note that we must still paste `expr` to call the function.
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
                                    .make_return_expr = [this, qual_name = cpp_type.simple_type.name](const std::string &expr){return "return " + expr + " ? new " + RequestCSharpEmptyTagType(qual_name) + "() : null;";},
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
                                                .dllimport_decl_params = "byte " + name,
                                                .csharp_decl_params = {{.type = "bool", .name = name}},
                                                .dllimport_args = name + " ? (byte)1 : (byte)0",
                                            };
                                        },
                                    },
                                    .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                        .make_strings = [](const std::string &name, bool /*have_useless_defarg*/)
                                        {
                                            return TypeBinding::ParamUsage::Strings{
                                                .dllimport_decl_params = "byte *" + name, // No const pointers in C#.
                                                .csharp_decl_params = {{.type = "bool?", .name = name, .default_arg = "null"}},
                                                .extra_statements = "byte __deref_" + name + " = " + name + ".GetValueOrDefault() ? (byte)1 : (byte)0;\n",
                                                .dllimport_args = name + ".HasValue ? &__deref_" + name + " : null",
                                            };
                                        },
                                    },
                                    .return_usage = TypeBinding::ReturnUsage{
                                        .dllimport_return_type = "byte",
                                        .csharp_return_type = "bool",
                                        .make_return_expr = [](const std::string &expr){return "return " + expr + " != 0;";},
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
                            const std::string by_value_helper = CppToCSharpByValueHelperName(cpp_effective_type.simple_type.name);

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
                                                .dllimport_decl_params = RequestHelper("_PassBy") + " " + name + "_pass_by, " + csharp_underlying_ptr_type + name,
                                                .csharp_decl_params = {{.type = by_value_helper, .name = name}},
                                                .dllimport_args = name + ".PassByMode, " + name + ".Value is not null ? " + name + ".Value." + csharp_underlying_ptr + " : null",
                                            };
                                        },
                                    },
                                    .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                        .make_strings = [this, by_value_helper, csharp_underlying_ptr_type, csharp_underlying_ptr](const std::string &name, bool /*have_useless_defarg*/)
                                        {
                                            return TypeBinding::ParamUsage::Strings{
                                                .dllimport_decl_params = RequestHelper("_PassBy") + " " + name + "_pass_by, " + csharp_underlying_ptr_type + name,
                                                .csharp_decl_params = {{.type = by_value_helper + "?", .name = name, .default_arg = "null"}},
                                                .dllimport_args = name + " is not null ? " + name + ".PassByMode : " + RequestHelper("_PassBy") + ".default_arg, " + name + " is not null && " + name + ".Value is not null ? " + name + ".Value." + csharp_underlying_ptr + " : null",
                                            };
                                        },
                                    },
                                    .return_usage = TypeBinding::ReturnUsage{
                                        .dllimport_return_type = csharp_underlying_ptr_type,
                                        .csharp_return_type = csharp_type_mut,
                                        .make_return_expr = [](const std::string &expr)
                                        {
                                            return "return new(" + expr + ", is_owning: true);";
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
                                                .dllimport_decl_params = csharp_underlying_ptr_type + name,
                                                .csharp_decl_params = {{.type = csharp_type_const, .name = name}},
                                                .dllimport_args = name + "." + csharp_underlying_ptr,
                                            };
                                        },
                                    },
                                    .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                        .make_strings = [csharp_type_const, csharp_underlying_ptr_type, csharp_underlying_ptr](const std::string &name, bool /*have_useless_defarg*/)
                                        {
                                            return TypeBinding::ParamUsage::Strings{
                                                .dllimport_decl_params = csharp_underlying_ptr_type + name,
                                                .csharp_decl_params = {{.type = csharp_type_const + "?", .name = name, .default_arg = "null"}},
                                                .dllimport_args = name + " is not null ? " + name + "." + csharp_underlying_ptr + " : null",
                                            };
                                        },
                                    },
                                    .return_usage = TypeBinding::ReturnUsage{
                                        .dllimport_return_type = csharp_underlying_ptr_type,
                                        .csharp_return_type = csharp_type_mut,
                                        .make_return_expr = [](const std::string &expr)
                                        {
                                            return "return new(" + expr + ", is_owning: true);";
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
                                                    .dllimport_decl_params = csharp_value_type + " " + name,
                                                    .csharp_decl_params = {{.type = csharp_value_type, .name = name}},
                                                    .dllimport_args = name,
                                                };
                                            },
                                        },
                                        .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                            .make_strings = [csharp_value_type, csharp_in_opt_type](const std::string &name, bool /*have_useless_defarg*/)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .dllimport_decl_params = csharp_value_type + " *" + name,
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
                        },
                    }, c_type_desc->var);
                }
                else
                {
                    // Simple non-owning pointers and references.
                    // Note that something like `std::monostate *` does have a type description, and so isn't handled here.

                    if (cpp_type.Is<cppdecl::Reference>())
                    {
                        // References to...
                        // This intentionally handles rvalue references too.
                        if (cpp_type.Is<cppdecl::Reference>() && cpp_type.modifiers.size() == 1)
                        {
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
                            auto MakeScalarRefBinding = [&](const std::string &csharp_type, std::function<std::string(const std::string &name)> fix_input = nullptr) -> TypeBinding
                            {
                                if (!is_const)
                                {
                                    return {
                                        .param_usage = TypeBinding::ParamUsage{
                                            .make_strings = [csharp_type, fix_input](const std::string &name, bool /*have_useless_defarg*/)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .dllimport_decl_params = csharp_type + " *" + name,
                                                    .csharp_decl_params = {{.type = "ref " + csharp_type, .name = name}},
                                                    .scope_open = "fixed (" + csharp_type + " *__ptr_" + name + " = &" + name + ")\n{\n",
                                                    .extra_statements = fix_input ? fix_input(name) : "",
                                                    .dllimport_args = "__ptr_" + name,
                                                    .scope_close = "}\n",
                                                };
                                            },
                                        },
                                        .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                            .make_strings = [this, csharp_type, fix_input](const std::string &name, bool /*have_useless_defarg*/)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .dllimport_decl_params = csharp_type + " *" + name,
                                                    // Must pass a class because C# `ref` parameters can't have default arguments, and and we can't just tell the user
                                                    //   to pass a placeholder, because we might have proper default arguments before this one, so omitting the default argument here
                                                    //   would cause a compilation error.
                                                    .csharp_decl_params = {{.type = RequestHelper("InOut") + "<" + csharp_type + ">?", .name = name, .default_arg = "null"}},
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
                                            .csharp_return_type = "ref " + csharp_type,
                                            .make_return_expr = [](const std::string &expr){return "return ref *" + expr + ";";},
                                        },
                                    };
                                }
                                else
                                {
                                    return {
                                        .param_usage = TypeBinding::ParamUsage{
                                            .make_strings = [csharp_type, fix_input](const std::string &name, bool /*have_useless_defarg*/)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .dllimport_decl_params = csharp_type + " *" + name, // No const pointers in C#.
                                                    .csharp_decl_params = {{.type = csharp_type, .name = name}},
                                                    .extra_statements = fix_input ? fix_input(name) : "",
                                                    .dllimport_args = "&" + name,
                                                };
                                            },
                                        },
                                        .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                            .make_strings = [csharp_type, fix_input](const std::string &name, bool /*have_useless_defarg*/)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .dllimport_decl_params = csharp_type + " *" + name, // No const pointers in C#.
                                                    .csharp_decl_params = {{.type = csharp_type + "?", .name = name, .default_arg = "null"}},
                                                    .extra_statements =
                                                        csharp_type + " __deref_" + name + " = " + name + ".GetValueOrDefault();\n" +
                                                        (fix_input ? fix_input("__deref_" + name) : ""),
                                                    .dllimport_args = name + ".HasValue ? &__deref_" + name + " : null",
                                                };
                                            },
                                        },
                                        .return_usage = TypeBinding::ReturnUsage{
                                            .dllimport_return_type = csharp_type + " *",
                                            .csharp_return_type = csharp_type,
                                            .make_return_expr = [](const std::string &expr){return "return *" + expr + ";";},
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

                                    // If this is a transparent `shared_ptr` (i.e. pointing to a class storing one), this its target type.
                                    // Otherwise this is the original referenced type.
                                    const cppdecl::Type &cpp_effective_type = is_transparent_shared_ptr ? *shared_ptr_targ : cpp_type;

                                    const std::string csharp_type = CppToCSharpClassName(cpp_effective_type.simple_type.name, is_const);
                                    const std::string csharp_underlying_ptr = is_transparent_shared_ptr ? "_UnderlyingSharedPtr" : "_UnderlyingPtr";
                                    const std::string csharp_underlying_ptr_type = csharp_type + (is_transparent_shared_ptr ? "._UnderlyingShared" : "._Underlying") + " *";

                                    switch (elem.kind)
                                    {
                                      case CInterop::ClassKind::ref_only:
                                      case CInterop::ClassKind::uses_pass_by_enum:
                                      case CInterop::ClassKind::trivial_via_ptr:
                                      case CInterop::ClassKind::exposed_struct:
                                        return CreateBinding({
                                            .param_usage = TypeBinding::ParamUsage{
                                                .make_strings = [csharp_type, csharp_underlying_ptr_type, csharp_underlying_ptr](const std::string &name, bool /*have_useless_defarg*/)
                                                {
                                                    return TypeBinding::ParamUsage::Strings{
                                                        .dllimport_decl_params = csharp_underlying_ptr_type + name,
                                                        .csharp_decl_params = {{.type = csharp_type, .name = name}},
                                                        .dllimport_args = name + "." + csharp_underlying_ptr,
                                                    };
                                                },
                                            },
                                            .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                                .make_strings = [csharp_type, csharp_underlying_ptr_type, csharp_underlying_ptr](const std::string &name, bool /*have_useless_defarg*/)
                                                {
                                                    return TypeBinding::ParamUsage::Strings{
                                                        .dllimport_decl_params = csharp_underlying_ptr_type + name,
                                                        .csharp_decl_params = {{.type = csharp_type + "?", .name = name, .default_arg = "null"}},
                                                        .dllimport_args = name + " is not null ? " + name + "." + csharp_underlying_ptr + " : null",
                                                    };
                                                },
                                            },
                                            .return_usage = TypeBinding::ReturnUsage{
                                                .dllimport_return_type = csharp_underlying_ptr_type,
                                                .csharp_return_type = csharp_type,
                                                .make_return_expr = [](const std::string &expr)
                                                {
                                                    return "return new(" + expr + ", is_owning: false);";
                                                },
                                            },
                                        });

                                        break;
                                    }
                                    return nullptr;
                                },
                            }, underlying_type_desc->var);
                        }

                        return nullptr;
                    }

                    if (cpp_type.Is<cppdecl::Pointer>())
                    {
                        // Pointers to...
                        if (cpp_type.Is<cppdecl::Pointer>() && cpp_type.modifiers.size() == 1)
                        {
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
                            auto MakeScalarPtrBinding = [&](const std::string &csharp_type, std::function<std::string(const std::string &name)> fix_input = nullptr) -> TypeBinding
                            {
                                if (bool(flags & TypeBindingFlags::pointer_to_array))
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
                                                    .dllimport_decl_params = csharp_ptr_type + name,
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
                                                    .dllimport_decl_params = csharp_ptr_type + "*" + name,
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
                                                    .dllimport_decl_params = csharp_type + " *" + name,
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
                                                    .dllimport_decl_params = csharp_type + " **" + name,
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
                                            .make_return_expr = [this, csharp_type](const std::string &expr)
                                            {
                                                return "return " + expr + " is not null ? new " + RequestHelper("Ref") + "<" + csharp_type + ">(" + expr + ") : null;";
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
                                                    .dllimport_decl_params = csharp_type + " *" + name, // No const pointers in C#.
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
                                                    .dllimport_decl_params = csharp_type + " **" + name, // No const pointers in C#.
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
                                            .make_return_expr = [](const std::string &expr){return "return " + expr + " is not null ? *" + expr + " : null;";},
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
                                                    .dllimport_decl_params = "void *" + name,
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
                                                    .dllimport_decl_params = "void **" + name,
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
                                    return CreateBinding(MakeScalarPtrBinding(std::string(*csharp_type)));
                                },
                                [&](const CInterop::TypeKinds::Enum &underlying_enum) -> const TypeBinding *
                                {
                                    if (!cpp_underlying_type.IsOnlyQualifiedName())
                                        throw std::runtime_error("The underlying type of the reference is marked as `TypeKinds::Enum`, but the type name isn't just a qualified name.");

                                    const std::string csharp_underlying_enum_type = CppToCSharpEnumName(cpp_underlying_type.simple_type.name);
                                    const bool underlying_is_bool = c_desc.platform_info.FindPrimitiveType(underlying_enum.underlying_type)->kind == PrimitiveTypeInfo::Kind::boolean;

                                    return CreateBinding(MakeScalarPtrBinding(csharp_underlying_enum_type,
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

                                    // If this is a transparent `shared_ptr` (i.e. pointing to a class storing one), this its target type.
                                    // Otherwise this is the original referenced type.
                                    const cppdecl::Type &cpp_effective_type = is_transparent_shared_ptr ? *shared_ptr_targ : cpp_type;

                                    const std::string csharp_type = CppToCSharpClassName(cpp_effective_type.simple_type.name, is_const);
                                    const std::string csharp_underlying_ptr = is_transparent_shared_ptr ? "_UnderlyingSharedPtr" : "_UnderlyingPtr";
                                    const std::string csharp_underlying_ptr_type = csharp_type + (is_transparent_shared_ptr ? "._UnderlyingShared" : "._Underlying") + " *";
                                    const std::string csharp_in_opt_mut = CppToCSharpInOptMutNontrivialHelperName(cpp_effective_type.simple_type.name);
                                    const std::string csharp_in_opt_const = CppToCSharpInOptConstNontrivialHelperName(cpp_effective_type.simple_type.name);

                                    switch (elem.kind)
                                    {
                                      case CInterop::ClassKind::ref_only:
                                      case CInterop::ClassKind::uses_pass_by_enum:
                                      case CInterop::ClassKind::trivial_via_ptr:
                                      case CInterop::ClassKind::exposed_struct:
                                        return CreateBinding({
                                            .param_usage = TypeBinding::ParamUsage{
                                                .make_strings = [csharp_type, csharp_underlying_ptr_type, csharp_underlying_ptr](const std::string &name, bool have_useless_defarg)
                                                {
                                                    return TypeBinding::ParamUsage::Strings{
                                                        .dllimport_decl_params = csharp_underlying_ptr_type + name,
                                                        .csharp_decl_params = {{.type = csharp_type + "?", .name = name, .default_arg = (have_useless_defarg ? std::optional<std::string>("null") : std::nullopt)}},
                                                        .dllimport_args = name + " is not null ? " + name + "." + csharp_underlying_ptr + " : null",
                                                    };
                                                },
                                            },
                                            .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                                .make_strings = [is_const, csharp_in_opt_const, csharp_in_opt_mut, csharp_underlying_ptr_type, csharp_underlying_ptr](const std::string &name, bool /*have_useless_defarg*/)
                                                {
                                                    return TypeBinding::ParamUsage::Strings{
                                                        .dllimport_decl_params = csharp_underlying_ptr_type + "*" + name,
                                                        .csharp_decl_params = {{.type = (is_const ? csharp_in_opt_const : csharp_in_opt_mut) + "?", .name = name, .default_arg = "null"}},
                                                        .extra_statements = csharp_underlying_ptr_type + "__ptr_" + name + " = " + name + " is not null && " + name + ".Opt is not null ? " + name + ".Opt." + csharp_underlying_ptr + " : null;\n",
                                                        .dllimport_args = name + " is not null ? &__ptr_" + name + " : null",
                                                    };
                                                },
                                            },
                                            .return_usage = TypeBinding::ReturnUsage{
                                                .needs_temporary_variable = true,
                                                .dllimport_return_type = csharp_underlying_ptr_type,
                                                .csharp_return_type = csharp_type + "?",
                                                .make_return_expr = [csharp_type](const std::string &expr)
                                                {
                                                    return "return " + expr + " is not null ? new " + csharp_type + "(" + expr + ", is_owning: false) : null;";
                                                },
                                            },
                                        });

                                        break;
                                    }
                                    return nullptr;
                                },
                            }, underlying_type_desc->var);
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
                        const std::string by_value_opt_opt_helper = CppToCSharpByValueOptOptHelperName(elem_type.simple_type.name);
                        const std::string csharp_type_mut = CppToCSharpClassName(elem_type.simple_type.name, false);
                        const std::string csharp_underlying_ptr_type = csharp_type_mut + "._Underlying *";

                        ret.param_usage_with_default_arg = TypeBinding::ParamUsage{
                            .make_strings = [this, by_value_opt_opt_helper, csharp_underlying_ptr_type](const std::string &name, bool /*have_useless_defarg*/)
                            {
                                return TypeBinding::ParamUsage::Strings{
                                    .dllimport_decl_params = RequestHelper("_PassBy") + " " + name + "_pass_by, " + csharp_underlying_ptr_type + name,
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
                                    .dllimport_decl_params = "void *" + name,
                                    .csharp_decl_params = {{.type = "void *", .name = name, .default_arg = (have_useless_defarg ? std::optional<std::string>("null") : std::nullopt)}},
                                    .dllimport_args = name,
                                };
                            },
                        },
                        .param_usage_with_default_arg = TypeBinding::ParamUsage{
                            .make_strings = [](const std::string &name, bool /*have_useless_defarg*/)
                            {
                                return TypeBinding::ParamUsage::Strings{
                                    .dllimport_decl_params = "void *" + name,
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
                            .make_strings = [](const std::string &name, bool /*have_useless_defarg*/)
                            {
                                return TypeBinding::ParamUsage::Strings{
                                    .dllimport_decl_params = "byte *" + name + ", byte *" + name + "_end",
                                    .csharp_decl_params = {{.type = "ReadOnlySpan<char>", .name = name}},
                                    .scope_open =
                                        "byte[] __bytes_" + name + " = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(" + name + ".Length)];\n"
                                        "int __len_" + name + " = System.Text.Encoding.UTF8.GetBytes(" + name + ", __bytes_" + name + ");\n"
                                        "fixed (byte *__ptr_" + name + " = __bytes_" + name + ")\n{\n",
                                    .dllimport_args = "__ptr_" + name + ", __ptr_" + name + " + __len_" + name,
                                    .scope_close = "}\n",
                                };
                            },
                        },
                        .param_usage_with_default_arg = TypeBinding::ParamUsage{
                            .make_strings = [this](const std::string &name, bool /*have_useless_defarg*/)
                            {
                                return TypeBinding::ParamUsage::Strings{
                                    .dllimport_decl_params = "byte *" + name + ", byte *" + name + "_end",
                                    .csharp_decl_params = {{.type = RequestHelper("ReadOnlyCharSpanOpt"), .name = name, .default_arg = "new()"}}, // For some reason `= null` doesn't compile in the default argument here, though passing it manually to those parameters works.
                                    .scope_open =
                                        "byte[] __bytes_" + name + ";\n"
                                        "int __len_" + name + " = 0;\n"
                                        "if (" + name + ".HasValue)\n"
                                        "{\n"
                                        "    __bytes_" + name + " = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(" + name + ".Value.Length)];\n"
                                        "    __len_" + name + " = System.Text.Encoding.UTF8.GetBytes(" + name + ".Value, __bytes_" + name + ");\n"
                                        "}\n"
                                        "fixed (byte *__ptr_" + name + " = __bytes_" + name + ")\n{\n",
                                    .dllimport_args = name + ".HasValue ? __ptr_" + name + " : null, " + name + ".HasValue ? __ptr_" + name + " + __len_" + name + " : null",
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
                WriteSeparator();
                ret.text +=
                    "public static unsafe implicit operator ReadOnlySpan<byte>(" + csharp_name + " self)\n"
                    "{\n"
                    "    return new(self.Data(), checked((int)self.Size()));\n"
                    "}\n"
                    "\n"
                    "public static unsafe implicit operator string(" + csharp_name + " self)\n"
                    "{\n"
                    "    return System.Text.Encoding.UTF8.GetString(self.Data(), checked((int)self.Size()));\n"
                    "}\n";
            }

            // Non-const.
            if (!class_part_kind.value() && is_mutable)
            {
                WriteSeparator();
                ret.text +=
                    "public static unsafe implicit operator Span<byte>(" + csharp_name + " s)\n"
                    "{\n"
                    "    return new(s.MutableData(), checked((int)s.Size()));\n"
                    "}\n";
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
                "    return self.GetString();\n"
                "}\n";
        }

        return ret;
    }

    std::string Generator::RequestHelper(const std::string &name)
    {
        requested_helpers.insert(name);
        return helpers_prefix + name;
    }

    std::vector<Generator::EmitVariant> Generator::GetMethodVariants(const CInterop::ClassMethod &method)
    {
        std::vector<EmitVariant> ret = {Generator::EmitVariant::regular};

        // Implicit conversion operators for implicit constructors.
        // Do we also need explicit ones for explicit ctors? I don't think they're that necessary.
        if (auto *ctor = std::get_if<CInterop::MethodKinds::Constructor>(&method.var))
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
                // One actual parameter and one static `this` parameter.
                (method.params.size() == 2) &&
                // Just in case, exactly one C# parameter also.
                GetParameterBinding(method.params.at(1), false).csharp_decl_params.size() == 1
            )
            {
                ret.push_back(Generator::EmitVariant::conv_op_for_ctor);
            }
        }

        // Operator rewrites.
        if (auto *opt = std::get_if<CInterop::MethodKinds::Operator>(&method.var))
        {
            // This check is needed e.g. to reject `==` that returns non-bool.
            if (IsOverloadableOpOrConvOp(&method))
            {
                if (opt->token == "++" || opt->token == "--")
                    ret.push_back(Generator::EmitVariant::static_incr_or_decr);

                // We could try to be clever and emit `==` and `<` rewrites even if `IsOverloadableOpOrConvOp()` above returns false,
                //   but I can't think of any conditions where this could actually happen without interefering with the rewriting, so I don't even bother.
                if (opt->token == "==")
                    ret.push_back(Generator::EmitVariant::negated_comparison_operator);

                if (opt->token == "<")
                {
                    ret.push_back(Generator::EmitVariant::less_to_greater);
                    ret.push_back(Generator::EmitVariant::less_to_less_eq);
                    ret.push_back(Generator::EmitVariant::less_to_greater_eq);
                }
            }
        }

        return ret;
    }

    Generator::FuncLikeEmitter::FuncLikeEmitter(Generator &generator, AnyFuncLikePtr any_func_like, std::string new_csharp_name, bool in_exposed_struct, EmitVariant emit_variant)
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
        is_ctor(method && std::holds_alternative<CInterop::MethodKinds::Constructor>(method->var)),
        is_property_get(csharp_name == "get"),
        is_property_set(csharp_name == "set"),
        is_property(is_property_get || is_property_set),
        // If this is a constructor, is the target class backed by a `shared_ptr`?
        ctor_class_backed_by_shared_ptr([&]{
            assert(!is_ctor || generator.ParseTypeOrThrow(func_like.ret.cpp_type).IsOnlyQualifiedName());
            return is_ctor && generator.GetSharedPtrTypeDescForCppTypeOpt(func_like.ret.cpp_type);
        }()),
        in_exposed_struct(in_exposed_struct),
        // Here we only allow methods and not free functions, since all valid operators would've been moved to methods by this point,
        //   and all invalid ones (that C# doesn't support, that we must emit as functions) shouldn't be covered by this.
        // This excludes `EmitVariant::conv_op_for_ctor`, since that's a conversion to this type, not from it.
        is_overloaded_op_or_conv_op_from_this(
            method &&
            generator.IsOverloadableOpOrConvOp(method) &&
            !(in_exposed_struct && generator.IsMutatingOverloadedOperatorThatMustBeFuncInExposedStruct(*method))
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
            ret_binding = &generator.GetReturnBinding(func_like.ret);
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

                    this_param_strings = generator.GetParameterBinding(fake_param, false);

                    if (in_exposed_struct)
                    {
                        // This better work.
                        if (generator.ParseTypeOrThrow(param.cpp_type).Is<cppdecl::Reference>())
                        {
                            this_param_strings.dllimport_decl_params = generator.CppToCSharpUnqualExposedStructName(class_type.simple_type.name) + " *_this";
                            this_param_strings.dllimport_args = "&_this_copy";
                        }
                        else
                        {
                            this_param_strings.dllimport_args = "_this_copy";
                        }
                    }
                    else
                    {
                        this_param_strings.dllimport_args = "_this_copy._UnderlyingPtr"; // This better work.
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

                    this_param_strings = generator.GetParameterBinding(fake_param, false, {}, in_exposed_struct);

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
                            this_param_strings.dllimport_args = "(" + generator.CppToCSharpClassName(unqual_param_type.simple_type.name, false) + "._Underlying *)&" + param.name_or_placeholder;
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

                                this_param_strings.dllimport_args = this_param_strings.csharp_decl_params.front().name + ".UnderlyingStruct";
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


                if (!this_param_strings.dllimport_decl_params.empty())
                {
                    if (!dllimport_param_string.empty())
                        dllimport_param_string += ", ";

                    dllimport_param_string += this_param_strings.dllimport_decl_params;
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

            const bool is_automatic_rewrite =
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
                if (!is_automatic_rewrite)
                    file.WriteString(generator.MakeFuncComment(any_func_like));

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
                    emit_variant == EmitVariant::conv_op_for_ctor ||
                    emit_variant == EmitVariant::conv_op_for_ctor_for_by_value_helper ||
                    emit_variant == EmitVariant::conv_op_for_ctor_for_by_value_opt_opt_helper ||
                    emit_variant == EmitVariant::conv_op_for_ctor_for_in_opt_const_helper ||
                    emit_variant == EmitVariant::conv_op_for_ctor_for_in_opt_struct_helper
                )
                {
                    file.WriteString("static ");
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
                if (!is_ctor && !(method && std::holds_alternative<CInterop::MethodKinds::ConversionOperator>(method->var)))
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
            file.WriteString(csharp_name);

            // Write the parameter list.
            if (!is_property)
            {
                file.WriteString("(");

                bool first = true;
                for (const auto &param : param_strings)
                {
                    for (const auto &csharp_param : param.csharp_decl_params)
                    {
                        if (!std::exchange(first, false))
                            file.WriteString(", ");

                        file.WriteString(csharp_param.ToString());
                    }
                }

                file.WriteString(")");
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
                        file.WriteString("\n{\n    return !" + ArgA() + ".Equal(" + ArgB() + ");\n}\n");
                    else
                        file.WriteString("\n{\n    return !(" + ArgA() + " == " + ArgB() + ");\n}\n");
                    return;
                }
                // `<` to `>`.
                if (emit_variant == EmitVariant::less_to_greater)
                {
                    if (in_exposed_struct && generator.IsMutatingOverloadedOperatorThatMustBeFuncInExposedStruct(*method))
                        file.WriteString("\n{\n    return " + ArgB() + ".Less(" + ArgA() + ");\n}\n");
                    else
                        file.WriteString("\n{\n    return " + ArgB() + " < " + ArgA() + ";\n}\n");
                    return;
                }
                // `<` to `<=`.
                if (emit_variant == EmitVariant::less_to_less_eq)
                {
                    if (in_exposed_struct && generator.IsMutatingOverloadedOperatorThatMustBeFuncInExposedStruct(*method))
                        file.WriteString("\n{\n    return !" + ArgB() + ".Equal(" + ArgA() + ");\n}\n");
                    else
                        file.WriteString("\n{\n    return !(" + ArgB() + " < " + ArgA() + ");\n}\n");
                    return;
                }
                // `<` to `>=`.
                if (emit_variant == EmitVariant::less_to_greater_eq)
                {
                    if (in_exposed_struct && generator.IsMutatingOverloadedOperatorThatMustBeFuncInExposedStruct(*method))
                        file.WriteString("\n{\n    return !" + ArgA() + ".Less(" + ArgB() + ");\n}\n");
                    else
                        file.WriteString("\n{\n    return !(" + ArgA() + " < " + ArgB() + ");\n}\n");
                    return;
                }

                if (
                    emit_variant == EmitVariant::conv_op_for_ctor ||
                    emit_variant == EmitVariant::conv_op_for_ctor_for_by_value_helper ||
                    emit_variant == EmitVariant::conv_op_for_ctor_for_by_value_opt_opt_helper ||
                    emit_variant == EmitVariant::conv_op_for_ctor_for_in_opt_const_helper ||
                    emit_variant == EmitVariant::conv_op_for_ctor_for_in_opt_struct_helper
                )
                {
                    file.WriteString(" {return new");

                    if (emit_variant != EmitVariant::conv_op_for_ctor)
                    {
                        // Need the explicit type.
                        file.WriteString(" ");
                        file.WriteString(ret_binding->csharp_return_type);
                    }

                    // `.at(1)` to skip the static `this` parameter.
                    file.WriteString("(" + param_strings.at(1).csharp_decl_params.front().name + ");}\n");

                    // As a special case, when we're converting from `ReadOnlySpan<char>`, also insert a conversion from `string` for convenience.
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

            // The `DllImport` declaration.
            file.WriteString(dllimport_strings.dllimport_decl);

            // Copy `this` if needed.
            if (acts_on_copy_of_this)
            {
                file.WriteString(*csharp_type_for_copy_of_this);
                file.WriteString(" _this_copy = new(" + param_strings.at(0).csharp_decl_params.at(0).name + ");\n");
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

                auto AdjustReturnIfNeeded = [&](std::string expr) -> std::string
                {
                    if ((force_void_return_type || acts_on_copy_of_this) && expr.starts_with("return "))
                        expr = expr.substr(7);

                    if (force_void_return_type || acts_on_copy_of_this)
                    {
                        if (ret_binding->csharp_return_type != "void")
                            expr = ret_binding->csharp_return_type + " _unused_ret = " + expr;
                        if (acts_on_copy_of_this)
                            expr += "\nreturn _this_copy;";
                    }

                    return expr;
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

                            auto dllimport_alloc = generator.MakeDllImportDecl(generator.c_desc.helpers_prefix + "Alloc", "_Underlying *", "nuint size");
                            file.WriteString(dllimport_alloc.dllimport_decl);

                            ctor_expr = dllimport_alloc.csharp_name + "(" + class_size_str + ")";

                            post_ctor_statements =
                                ret_binding->csharp_return_type + " _ctor_result = " + expr + ";\n"
                                "System.Runtime.InteropServices.NativeMemory.Copy(&_ctor_result, _UnderlyingPtr, " + class_size_str + ");\n";
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

                    file.WriteString(extra_statements_after);
                }
                else if (extra_statements_after.empty() && !ret_binding->needs_temporary_variable)
                {
                    // Return the call directly.
                    file.WriteString(extra_statements);
                    file.WriteString(AdjustReturnIfNeeded(ret_binding->MakeReturnExpr(expr)) + '\n');
                }
                else
                {
                    // Store the result to a temporary variable (if not void), run some custom code, and then return.
                    std::string ret_expr = ret_binding->MakeReturnExpr("__ret");

                    if (ret_expr == "__ret;")
                    {
                        // Likely returning void, don't need to actually store the result in a variable.
                        file.WriteString(extra_statements);
                        file.WriteString(expr + ";\n");
                        file.WriteString(extra_statements_after);
                    }
                    else
                    {
                        file.WriteString(extra_statements);
                        // Note the untyped `var`. `expr` here contains not the result of `make_return_expr()` (which itself could be
                        //   an untyped `new()`, which wouldn't work with `var`), but instead contains the result of calling
                        //   a dllimported function, which always return a fixed type.
                        file.WriteString("var __ret = " + expr + ";\n");
                        file.WriteString(extra_statements_after);
                        file.WriteString(AdjustReturnIfNeeded(std::move(ret_expr)) + '\n');
                    }
                }
            }

            // End custom parameter scopes.
            for (int i = 0; i < num_scopes_to_pop; i++)
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
        const CInterop::FuncParam &param = method.params.at(method.is_static ? 2 : 0); // `2` instead of `1` to skip the fake static `this`.

        const cppdecl::Type &type = ParseTypeOrThrow(param.cpp_type);
        return type.Is<cppdecl::Reference>() && !type.IsConst(1);
    }

    std::string Generator::MakeUnqualCSharpMethodName(const CInterop::ClassMethod &method, std::optional<bool> class_part_kind, EmitVariant emit_variant)
    {
        return std::visit(Overload{
            [&](const CInterop::MethodKinds::Regular &elem) -> std::string
            {
                return CppIdentifierToCSharpIdentifier(elem.name);
            },
            [&](const CInterop::MethodKinds::Constructor &elem) -> std::string
            {
                // Rewriting the constructor to a conversion operator.
                if (
                    emit_variant == EmitVariant::conv_op_for_ctor ||
                    emit_variant == EmitVariant::conv_op_for_ctor_for_by_value_helper ||
                    emit_variant == EmitVariant::conv_op_for_ctor_for_by_value_opt_opt_helper ||
                    emit_variant == EmitVariant::conv_op_for_ctor_for_in_opt_const_helper ||
                    emit_variant == EmitVariant::conv_op_for_ctor_for_in_opt_struct_helper
                )
                {
                    // I guess we can just assemble the entire thing here?
                    std::string ret;
                    ret += elem.is_explicit ? "explicit" : "implicit";
                    ret += " operator ";
                    if (emit_variant == EmitVariant::conv_op_for_ctor_for_by_value_helper)
                        ret += CppToCSharpUnqualByValueHelperName(ParseNameOrThrow(method.ret.cpp_type).parts.back());
                    else if (emit_variant == EmitVariant::conv_op_for_ctor_for_by_value_opt_opt_helper)
                        ret += CppToCSharpUnqualByValueOptOptHelperName(ParseNameOrThrow(method.ret.cpp_type).parts.back());
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
                    // If this is a non-static version of `++`/`--` and we're pre-C# 14, must fall back to the normal function name.
                    !(
                        (elem.token == "++" || elem.token == "--") &&
                        emit_variant != EmitVariant::static_incr_or_decr &&
                        csharp_version < 14
                    ) &&
                    // If this is an overloaded operator that can't be implemented as such in an exposed struct, and we're in one, fall back to the normal function name.
                    !(
                        !class_part_kind &&
                        IsMutatingOverloadedOperatorThatMustBeFuncInExposedStruct(method)
                    )
                )
                {
                    return "operator" + fixed_token;
                }

                // Fall back to an identifier.

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
                // I guess we can just assemble the entire thing here?
                return std::string(elem.is_explicit ? "explicit" : "implicit") + " operator " + GetReturnBinding(method.ret).csharp_return_type;
            },
        }, method.var);
    }

    std::string Generator::MakeFuncComment(AnyFuncLikePtr any_func_like)
    {
        const CInterop::BasicFuncLike &func_like = *std::visit([](auto ptr) -> const CInterop::BasicFuncLike * {return ptr;}, any_func_like);
        const CInterop::BasicClassMethodLike *method_like = std::visit(Overload{
            [](const CInterop::BasicClassMethodLike *ptr) -> const CInterop::BasicClassMethodLike * {return ptr;},
            [](const CInterop::Function *) -> const CInterop::BasicClassMethodLike * {return nullptr;},
        }, any_func_like);

        std::string ret = func_like.comment.c_style;

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

        return ret;
    }

    TypeBinding::ParamUsage::Strings Generator::GetParameterBinding(const CInterop::FuncParam &param, bool is_static_method, std::optional<std::string> override_name, bool in_exposed_struct)
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

                            ret.dllimport_decl_params = RequestHelper("_PassBy") + " " + param_name + "_pass_by, _Underlying *" + param_name;

                            // Unconditionally copy for now. This is sad, but I'm not sure how else to solve this.
                            ret.dllimport_args = RequestHelper("_PassBy") + ".copy, _UnderlyingPtr";
                        }
                        else if (in_exposed_struct)
                        {
                            // We can't check this directly in this `if (...)`, since we want to reject `ConstFoo` and `MutFoo`, the reference-like classes
                            //   that we generate alongside the struct.
                            assert(class_kind == CInterop::ClassKind::exposed_struct);

                            done = true;

                            ret.dllimport_decl_params = CppToCSharpExposedStructName(this_type.simple_type.name) + " " + param_name;
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
                            ret.dllimport_decl_params = csharp_class_name + " *" + param_name;
                            // This doesn't work for some reason. Appears to be a defect: https://old.reddit.com/r/csharp/comments/137s9hv/taking_the_address_of_a_ref_struct_without_fixed/
                            //     ret.dllimport_args = "&this";
                            // So instead we have to use a `fixed` block:
                            ret.scope_open = "fixed (" + csharp_class_name + " *__ptr_" + param_name + " = &this)\n{\n";
                            ret.dllimport_args = "__ptr_" + param_name;
                            ret.scope_close = "}\n";
                        }
                        else
                        {
                            ret.dllimport_decl_params = "_Underlying *" + param_name;
                            ret.dllimport_args = "_UnderlyingPtr";
                        }
                    }
                }
            }
            else
            {
                const TypeBinding &param_binding = GetTypeBinding(ParseTypeOrThrow(param.cpp_type), TypeBindingFlagsForParam(param));

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

    const TypeBinding::ReturnUsage &Generator::GetReturnBinding(const CInterop::FuncReturn &ret)
    {
        return GetTypeBinding(ParseTypeOrThrow(ret.cpp_type), TypeBindingFlagsForReturn(ret)).return_usage.value();
    }

    Generator::CFuncDeclStrings Generator::MakeDllImportDecl(std::string_view c_name, std::string_view return_type, std::string_view params)
    {
        CFuncDeclStrings ret;

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

            // A comment?
            file.WriteString(enum_desc.comment.c_style);

            const PrimitiveTypeInfo::Kind underlying_kind = c_desc.platform_info.FindPrimitiveType(enum_desc.underlying_type)->kind;
            // If the underlying type is `bool`, mention this in a comment, because in C# we'll use `byte` (it doesn't allow `bool`).
            if (underlying_kind == PrimitiveTypeInfo::Kind::boolean)
                file.WriteString("/// This enum is intended to be boolean.\n");

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
            file.PushScope({}, "{\n", "}\n");

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
            token == ">=";

        // Could allow compound assignments here via `IsCompoundAssignmentToken()` in C# 14 or newer, but not bothering with it for now.
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

            // If `class_part_kind` isn't null, then it means `is_const`.
            // If it is null, we're in the `struct` corresponding to an exposed C++ struct.
            auto ShouldEmitMethod = [&](const CInterop::ClassMethod &method, std::optional<bool> class_part_kind, EmitVariant emit_variant)
            {
                // Must use `is_const` here instead of `is_const`.

                if (emit_variant == EmitVariant::static_incr_or_decr && !type_desc.traits.value().IsCopyableOrTriviallyMovable())
                    return false; // The static increment/decrement requires copying `this`.

                const bool is_const_or_static = IsConstOrStaticMethodLike(ParseNameOrThrow(cpp_type), type_desc, &method, emit_variant);

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

                return should_emit && ((!class_part_kind || is_const_or_static == *class_part_kind) || std::holds_alternative<CInterop::MethodKinds::Constructor>(method.var));
            };

            // This lambda emits all types nested in this one, if any.
            auto EmitNestedClasses = [&]
            {
                std::string nested_type_prefix = CppdeclToCode(cpp_qual_name) + "::";

                auto iter = c_desc.cpp_types.Map().lower_bound(nested_type_prefix);
                while (iter != c_desc.cpp_types.Map().end() && iter->first.starts_with(nested_type_prefix))
                {
                    if (ShouldEmitCppType(ParseTypeOrThrow(iter->first)))
                        EmitCppTypeUnconditionally(file, iter->first);

                    ++iter;
                }
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
                    static const std::string sharedptr_constvoid_underlying_ptr_type = CppToCSharpClassName(cpp_sharedptr_constvoid_name, true) + "._Underlying *";

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

                    // The comment, if any.
                    // This already has a trailing newline and the slashes.
                    file.WriteString(class_desc.comment.c_style);
                    if (is_exposed_struct_by_value)
                        file.WriteString("/// This is the by-value version of the struct.\n");
                    else
                        file.WriteString("/// This is the " + std::string(IsConst() ? "const" : "non-const") + " " + (class_desc.kind == CInterop::ClassKind::exposed_struct ? "reference to the struct" : "half of the class") + ".\n");

                    // The struct attributes.
                    if (is_exposed_struct_by_value)
                    {
                        // There's also `Pack = ...` parameter. It looks related to alignment, but the docs say that it only affects
                        //   the automatic field layout if that's enabled, and not the alignment of the entire struct.
                        // Instead I'm going to assume that it aligns by the largest field size, and check that below.
                        file.WriteString("[System.Runtime.InteropServices.StructLayout(System.Runtime.InteropServices.LayoutKind.Explicit, Size = " + std::to_string(class_desc.size_and_alignment.value().size) + ")]\n");
                    }

                    // The class header.
                    file.WriteString(is_exposed_struct_by_value ? "public ref struct " : "public class ");
                    file.WriteString(unqual_csharp_name);

                    bool base_implements_any_iequatable = false;
                    std::string iequatable_impls;
                    std::string iequatable_generic_impl;

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
                            file.WriteString(RequestHelper(shared_ptr_desc ? "SharedObject" : "Object"));

                            if (type_desc.traits.value().is_destructible)
                            {
                                BaseSeparator();
                                file.WriteString("System.IDisposable");
                            }
                        }

                        // `IEquatable` for our equality comparisons.
                        for (const CInterop::ClassMethod &method : class_desc.methods)
                        {
                            if (ShouldEmitMethod(method, class_part_kind, EmitVariant::regular) && IsEqualityComparisonForIEquatable(method))
                            {
                                FuncLikeEmitter dummy_emitter(*this, &method, MakeUnqualCSharpMethodName(method, class_part_kind, EmitVariant::regular), is_exposed_struct_by_value, EmitVariant::regular);

                                const ManagedKind param_managed_kind =
                                    is_exposed_struct_by_value && dummy_emitter.is_op_with_symmetric_self_args
                                    ? ManagedKind::never_managed // Gotta adjust the condition a little.
                                    : ClassifyParamManagedKind(ParseTypeOrThrow(method.params.at(1).cpp_type));
                                const bool param_is_managed = param_managed_kind == ManagedKind::managed;

                                // There's an extra dummy `this` parameter in static methods.
                                // Note that `IsEqualityComparisonForIEquatable()` currently rejects static (i.e. backwards) comparisons,
                                //   so this all is purely for the future.
                                assert(dummy_emitter.param_strings.size() == (method.is_static ? 3 : 2));

                                // This describes the other parameter, the one that may have a type not matching `this`.
                                const auto &param_strings = dummy_emitter.param_strings.at(1);

                                assert(param_strings.csharp_decl_params.size() == 1);

                                std::string interface_targ = param_strings.csharp_decl_params.front().type;

                                if (interface_targ.ends_with('?') && param_is_managed)
                                    interface_targ.pop_back(); // `IEquatable<T>` requires implementing `Equals(T? t)`, so just in case.

                                // Inheriting from the interface requires C# 13 or newer. But in older versions we can do everything else, provide the same methods etc.
                                if (!is_exposed_struct_by_value || csharp_version >= 13)
                                {
                                    BaseSeparator();
                                    file.WriteString("System.IEquatable<" + interface_targ + ">");
                                }

                                auto param = param_strings.csharp_decl_params.front();
                                param.default_arg = {};
                                bool added_nullability = false;
                                if (param_is_managed && !param.type.ends_with('?'))
                                {
                                    added_nullability = true;
                                    param.type += '?'; // The interface requires this.
                                }

                                std::string param_type_without_nullable = param.type;
                                if (param_type_without_nullable.ends_with('?'))
                                    param_type_without_nullable.pop_back();

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
                                        ? "    return this.Equal(" + param.name + ");\n" // This should never be necessary...
                                        : "    return this == " + param.name + ";\n"
                                    ) +
                                    "}\n";

                                // The `Equals(object?)` only makes sense if the class is not a `ref struct`, since an `object` can never point to one.
                                // We still emit it to silence the warning, but it can't compare against that type.
                                if (param_managed_kind == ManagedKind::never_managed)
                                {
                                    iequatable_generic_impl += "    // Skipping `" + param_type_without_nullable + "` because it can never be on the heap.\n";
                                }
                                else
                                {
                                    iequatable_generic_impl +=
                                        "    if (other is " + param_type_without_nullable + ")\n" +
                                        (
                                            equal_is_method
                                            ? "        return this.Equals((" + param_type_without_nullable + ")other);\n" // This should never be necessary...
                                            : "        return this == (" + param_type_without_nullable + ")other;\n"
                                        );
                                }
                            }

                            // Check the base too.
                            if (!is_exposed_struct_by_value && !IsConst() && ShouldEmitMethod(method, true, EmitVariant::regular) && IsEqualityComparisonForIEquatable(method))
                                base_implements_any_iequatable = true;
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
                        file.WriteString("internal struct _Underlying; // Represents the underlying C++ type.\n");

                        // The opaque struct type for the shared pointer.
                        if (shared_ptr_desc)
                            file.WriteString("internal struct _UnderlyingShared; // Represents the underlying shared pointer C++ type.\n");


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
                                file.PushScope({}, "{\n", "}\n");
                                file.WriteString("get\n");
                                file.PushScope({}, "{\n", "}\n");

                                auto dllimport_get_ptr_from_shared = MakeDllImportDecl(c_sharedptr_name.value() + "_Get", "_Underlying *", "_UnderlyingShared *_this");
                                file.WriteString(dllimport_get_ptr_from_shared.dllimport_decl);
                                file.WriteString("return " + dllimport_get_ptr_from_shared.csharp_name + "(_UnderlyingSharedPtr);\n");

                                file.PopScope();
                                file.PopScope();
                            }

                            { // Check if the underlying shared pointer owns the target object.
                                file.WriteSeparatingNewline();
                                file.WriteString("/// Check if the underlying shared pointer is owning or not.\n");
                                file.WriteString("public override bool _IsOwning\n");
                                file.PushScope({}, "{\n", "}\n");
                                file.PushScope({}, "get\n{\n", "}\n");

                                auto dllimport_use_count = MakeDllImportDecl(c_sharedptr_name.value() + "_UseCount", "int", "");
                                file.WriteString(dllimport_use_count.dllimport_decl);
                                file.WriteString("return " + dllimport_use_count.csharp_name + "() > 0;\n");

                                file.PopScope();
                                file.PopScope();
                            }

                            { // Copy the underlying shared pointer.
                                // This sadly has to be public, as otherwise we can't override methods from interfaces.
                                // Though honestly this doesn't strictly

                                file.WriteSeparatingNewline();
                                file.WriteString("/// Clones the underlying shared pointer. Returns an owning pointer to shared pointer (which itself isn't necessarily owning).\n");
                                file.WriteString("internal unsafe _UnderlyingShared *_CloneUnderlyingSharedPtr()\n");
                                file.PushScope({}, "{\n", "}\n");

                                auto dllimport_clone_shared = MakeDllImportDecl(c_sharedptr_name.value() + "_ConstructFromAnother", "_UnderlyingShared *", RequestHelper("_PassBy") + " other_pass_by, _UnderlyingShared *other");
                                file.WriteString(dllimport_clone_shared.dllimport_decl);
                                file.WriteString("return " + dllimport_clone_shared.csharp_name + "(" + RequestHelper("_PassBy") + ".copy, _UnderlyingSharedPtr);\n");

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
                        file.WriteString(
                            "/// Get the underlying struct.\n"
                            "public unsafe " +
                            std::string(IsConst() ? "" : "new ") +
                            (IsConst() ? "ref readonly " : "ref ") +
                            struct_name + " " +
                            "UnderlyingStruct => ref *(" + struct_name + " *)_UnderlyingPtr;\n"
                        );
                    }

                    // Conversion operators between the exposed struct and its class wrappers.
                    if (is_exposed_struct_by_value)
                    {
                        const std::string mut_name = CppToCSharpUnqualClassName(cpp_qual_name, false);
                        const std::string const_name = CppToCSharpUnqualClassName(cpp_qual_name, true);

                        file.WriteSeparatingNewline();
                        file.WriteString(
                            "/// Copy contents from a wrapper class to this struct.\n"
                            "public static implicit operator " + unqual_csharp_name + "(" + const_name + " other) => other.UnderlyingStruct;\n"
                            "/// Copy this struct into a wrapper class. (Even though we initially pass `is_owning: false`, we then use the copy constructor to produce an owning instance.)\n"
                            "public unsafe static implicit operator " + mut_name + "(" + unqual_csharp_name + " other) => new(new " + mut_name + "((" + mut_name + "._Underlying *)&other, is_owning: false));\n"
                        );
                    }

                    // The constructor from a pointer.
                    if (!is_exposed_struct_by_value)
                    {
                        file.WriteSeparatingNewline();
                        file.WriteString("internal unsafe " + std::string(unqual_csharp_name) + "(_Underlying *ptr, bool is_owning)");
                        if (!IsConst())
                        {
                            file.WriteString(" : base(ptr, is_owning) {}\n");
                        }
                        else if (!shared_ptr_desc)
                        {
                            file.WriteString(" : base(is_owning) {_UnderlyingPtr = ptr;}\n");
                        }
                        else
                        {
                            // Here we must create either an owning or a non-owning shared pointer.

                            // We own our shared pointer regardless, so this is unconditionally true.
                            file.WriteString(" : base(true)\n");

                            file.PushScope({}, "{\n", "}\n");

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
                            file.PopScope();
                        }
                    }

                    // Some shared-pointer-specific constructors and factory functions.
                    if (!is_exposed_struct_by_value && shared_ptr_desc)
                    {
                        // A simple constructor from an existing shared pointer, either owning or not.
                        // Note, the parameter name here is `shared_ptr` instead of `ptr` for overload disambiguation when passing null.
                        file.WriteSeparatingNewline();
                        file.WriteString("internal unsafe " + std::string(unqual_csharp_name) + "(_UnderlyingShared *shared_ptr, bool is_owning)");
                        if (IsConst())
                            file.WriteString(" : base(is_owning) {_UnderlyingSharedPtr = shared_ptr;}\n");
                        else
                            file.WriteString(" : base(shared_ptr, is_owning) {}\n");

                        // An aliasing constructor.
                        if (IsConst())
                        {
                            file.WriteSeparatingNewline();

                            // Notice that this returns a non-const type. This allows us to avoid overriding it in the non-const half, and otherwise shouldn't change anything.
                            file.WriteString("internal static unsafe " + CppToCSharpUnqualClassName(cpp_qual_name, false) + " _MakeAliasing(" + sharedptr_constvoid_underlying_ptr_type + "ownership, _Underlying *ptr)\n");
                            file.PushScope({}, "{\n", "}\n");

                            auto dllimport_construct_aliasing = MakeDllImportDecl(c_sharedptr_name.value() + "_ConstructAliasing", "_UnderlyingShared *", RequestHelper("_PassBy") + " ownership_pass_by, " + sharedptr_constvoid_underlying_ptr_type + "ownership, _Underlying *ptr");
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
                            file.PushScope({}, "{\n", "}\n");

                            // Make sure the usage is correct, i.e. that the owning bool was set to true, and the pointer is still false.
                            file.WriteString("System.Diagnostics.Trace.Assert(_IsOwningVal == true);\n");
                            file.WriteString("System.Diagnostics.Trace.Assert(_UnderlyingSharedPtr is null);\n");

                            auto dllimport_construct_owning = MakeDllImportDecl(c_sharedptr_name.value() + "_Construct", "_UnderlyingShared *", "_Underlying *other");
                            file.WriteString(dllimport_construct_owning.dllimport_decl);

                            file.WriteString("_UnderlyingSharedPtr = " + dllimport_construct_owning.csharp_name + "(ptr);\n");

                            file.PopScope();
                        }
                    }

                    // The `IDisposable` implementation and the destructor.
                    // We don't need this and can't emit this if the underlying type isn't destructible. In that case we don't emit the constructors as well.
                    // Except if we're also using a shared pointer; then we DO need this, as we must destroy the shared pointer even if it's non-owning.
                    if (!is_exposed_struct_by_value && IsConst() && (type_desc.traits.value().is_destructible || shared_ptr_desc))
                    {
                        const auto dtor_strings =
                            shared_ptr_desc
                            ? MakeDllImportDecl(c_sharedptr_name.value() + "_Destroy", "void", "_UnderlyingShared *_this")
                            : MakeDllImportDecl(class_desc.c_name + "_Destroy", "void", "_Underlying *_this");

                        file.WriteSeparatingNewline();

                        file.WriteString("protected virtual unsafe void Dispose(bool disposing)\n");
                        file.PushScope({}, "{\n", "}\n");
                        file.WriteString(
                            // Notice the use of `_IsOwningVal` instead of `_IsOwning`. They mean the same thing if shared pointers are not involved,
                            //   but if they ARE involved, then `_IsOwning` will check if the shared pointer owns the target or not,
                            //   while `_IsOwningVal` will check if we own the shared pointer itself or not.
                            // Here `_UnderlyingPtr` should never normally be null, unless something goes really wrong during construction,
                            //   but `_IsOwningVal` being false is common.
                            "if (" + std::string(shared_ptr_desc ? "_UnderlyingSharedPtr" : "_UnderlyingPtr") + " is null || !_IsOwningVal)\n"
                            "    return;\n" +
                            // Here we'd have `if (disposing)` where we would explicitly `.Dispose()` managed data members, if we had any.
                            dtor_strings.dllimport_decl +
                            dtor_strings.csharp_name + "(" + (shared_ptr_desc ? "_UnderlyingSharedPtr" : "_UnderlyingPtr") + ");\n" +
                            (shared_ptr_desc ? "_UnderlyingSharedPtr" : "_UnderlyingPtr") + " = null;\n"
                        );

                        // Here we'd call `base.Dispose(disposing);` if we had a base class.

                        file.PopScope(); // Close `void Dispose(bool disposing)`.
                        file.WriteString(
                            "public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}\n"
                            "~" + std::string(unqual_csharp_name) + "() {Dispose(false);}\n"
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
                                file.PushScope({}, "{\n", "}\n");


                                auto dllimport_decl = MakeDllImportDecl(class_desc.c_name + "_UpcastTo_" + base_desc.c_name, CppToCSharpClassName(ParseNameOrThrow(base_name), IsConst()) + "._Underlying *", "_Underlying *_this");
                                file.WriteString(dllimport_decl.dllimport_decl);

                                if (!shared_ptr_desc)
                                {
                                    file.WriteString(
                                        csharp_base_name + " ret = new(" + dllimport_decl.csharp_name + "(self._UnderlyingPtr), is_owning: false);\n"
                                        "ret._KeepAlive(self);\n"
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
                                    file.WriteString("return " + csharp_base_name + "._MakeAliasing((" + sharedptr_constvoid_underlying_ptr_type + ")self._UnderlyingSharedPtr, " + dllimport_decl.csharp_name + "(self._UnderlyingPtr));\n");
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
                                file.PushScope({}, "{\n", "}\n");

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
                                        "ret._KeepAlive(parent);\n"
                                        "return ret;\n"
                                    );
                                }
                                else
                                {
                                    // See the upcast code above for an explanation of what we're doing here and why.
                                    file.WriteString(
                                        "return " + csharp_base_name + "._MakeAliasing((" + sharedptr_constvoid_underlying_ptr_type + ")self._UnderlyingSharedPtr, ptr);\n"
                                    );
                                }

                                file.PopScope();
                            }
                        }
                    }

                    { // Emit the fields.
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

                                const std::string csharp_field_name = CppIdentifierToCSharpIdentifier(field.name);

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
                                            "=> UnderlyingStruct." + csharp_field_name + ";" +
                                            (IsConst() ? "" : " set => UnderlyingStruct." + csharp_field_name + " = value;}") +
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
                                            " => ref UnderlyingStruct." + csharp_field_name + ";\n"
                                        );
                                    }
                                }
                            }
                            else
                            {
                                // Just the normal field.
                                EmitCppField(file, field, is_exposed_struct_by_value ? false : IsConst(), shadowing_data);
                            }
                        }
                    }

                    // For exposed structs (and their ref wrappers!), we must manually emit the constructors that are trivial in C++,
                    //   since we don't emit them in C.
                    if (class_desc.kind == CInterop::ClassKind::exposed_struct) // Sic, not `in_exposed_struct`, see above.
                    {
                        // The default constructor, only if not emitted automatically (not emitted because it is trivial).
                        // This isn't needed for the struct, since those are always default-constructible in C#.
                        if (!is_exposed_struct_by_value && type_desc.traits.value().is_default_constructible && type_desc.traits.value().is_trivially_default_constructible)
                        {
                            file.WriteSeparatingNewline();
                            file.WriteString("/// Generated default constructor.\n");
                            file.WriteString("public unsafe " + unqual_csharp_name + "()");

                            if (shared_ptr_desc)
                                file.WriteString(" : this(shared_ptr: null, is_owning: true)\n");
                            else
                                file.WriteString(" : this(null, is_owning: true)\n");

                            file.PushScope({}, "{\n", "}\n");

                            auto dllimport_alloc = MakeDllImportDecl(c_desc.helpers_prefix + "Alloc", "_Underlying *", "nuint size");
                            file.WriteString(dllimport_alloc.dllimport_decl);

                            std::string expr = dllimport_alloc.csharp_name + "(" + std::to_string(class_desc.size_and_alignment.value().size) + ")";

                            if (shared_ptr_desc)
                                file.WriteString("_LateMakeShared(" + expr + ");\n");
                            else
                                file.WriteString("_UnderlyingPtr = " + expr + ";\n");

                            // Memset to zero.
                            file.WriteString("System.Runtime.InteropServices.NativeMemory.Fill(_UnderlyingPtr, " + std::to_string(class_desc.size_and_alignment.value().size) + ", 0);\n");

                            file.PopScope();
                        }

                        { // The copy constructor.
                            // No need to check the traits, since all this stuff is required to be trivial (or not exist at all). Just emit the copy ctor directly.

                            const std::string unqual_param_type =
                                is_exposed_struct_by_value
                                ? unqual_csharp_name
                                : CppToCSharpUnqualClassName(cpp_qual_name, !type_desc.traits.value().copy_constructor_takes_nonconst_ref);

                            file.WriteSeparatingNewline();
                            file.WriteString("/// Generated copy constructor.\n");
                            if (is_exposed_struct_by_value)
                            {
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

                                file.PushScope({}, "{\n", "}\n");

                                auto dllimport_alloc = MakeDllImportDecl(c_desc.helpers_prefix + "Alloc", "_Underlying *", "nuint size");
                                file.WriteString(dllimport_alloc.dllimport_decl);

                                std::string expr = dllimport_alloc.csharp_name + "(" + std::to_string(class_desc.size_and_alignment.value().size) + ")";

                                if (shared_ptr_desc)
                                    file.WriteString("_LateMakeShared(" + expr + ");\n");
                                else
                                    file.WriteString("_UnderlyingPtr = " + expr + ";\n");

                                // Bytewise copy.
                                file.WriteString("System.Runtime.InteropServices.NativeMemory.Copy(_other._UnderlyingPtr, _UnderlyingPtr, " + std::to_string(class_desc.size_and_alignment.value().size) + ");\n");

                                file.PopScope();
                            }
                        }
                    }

                    // Emit the methods.
                    for (const auto &method : class_desc.methods)
                    {
                        for (EmitVariant emit_variant : GetMethodVariants(method))
                        {
                            if (ShouldEmitMethod(method, class_part_kind, emit_variant))
                            {
                                FuncLikeEmitter emit(*this, &method, MakeUnqualCSharpMethodName(method, class_part_kind, emit_variant), is_exposed_struct_by_value, emit_variant);

                                emit.Emit(file, is_exposed_struct_by_value ? std::nullopt : std::optional(FuncLikeEmitter::ShadowingDesc{.shadowing_data = shadowing_data, .write = IsConst()}));
                            }
                        }
                    }

                    // Emit the nested types, if any.
                    if (is_exposed_struct_by_value || IsConst())
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
                    std::throw_with_nested(std::runtime_error("While emitting a wrapper for C++ class `" + cpp_type + "` (" + (is_exposed_struct_by_value ? "ref-struct" : IsConst() ? "const" : "non-const") + " part):"));
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

                            if (ShouldEmitMethod(method, false/*doesn't matter*/, emit_variant))
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

                // `_ByValue_...`.
                // Note that classes being backed by `std::shared_ptr` also go here, since passing `std::shared_ptr` by value would use this helper.
                if (cl->kind == CInterop::ClassKind::uses_pass_by_enum || shared_ptr_desc)
                {
                    auto EmitByValueHelper = [&](bool is_opt_opt)
                    {
                        const std::string by_val_name = is_opt_opt ? CppToCSharpUnqualByValueOptOptHelperName(cpp_name.parts.back()) : CppToCSharpUnqualByValueHelperName(cpp_name.parts.back());
                        const std::string copy_ctor_param_half_name = type_desc.traits.value().copy_constructor_takes_nonconst_ref ? mut_half_name : const_half_name;

                        file.WriteSeparatingNewline();
                        file.WriteString(
                            std::string(
                                is_opt_opt
                                ?
                                    "/// This is used as a function parameter when the underlying function receives an optional `" + mut_half_name + "` by value,\n"
                                    "///   and also has a default argument, meaning it has two different null states.\n"
                                :
                                    "/// This is used as a function parameter when the underlying function receives `" + mut_half_name + "` by value.\n"
                            ) +
                            "/// Usage:\n"
                            "/// * Pass `new()` to default-construct the instance.\n"
                            "/// * Pass an instance of " + related_classes_list + " to copy it into the function.\n"
                            "/// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.\n"
                            "///   Be careful if your input isn't a unique reference to this object.\n" +
                            (
                                is_opt_opt
                                ?
                                    "/// * Pass `null` to use the default argument.\n"
                                    "/// * Pass `" + RequestHelper("NullOptType") + "` to pass no object.\n"
                                :
                                    "/// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).\n"
                            ) +
                            // Can't be a `ref struct` because we use it with `?`.
                            // Can't be a plain `struct` because we might want it to not be default-constructible, if the underlying class isn't.
                            "public class " + by_val_name + "\n"
                        );
                        file.PushScope({}, "{\n", "}\n");
                        file.WriteString(
                            "internal readonly " + const_half_name + "? Value;\n" // We always store the const half for simplicity, and then effectively `const_cast` it.
                            "internal readonly " + pass_by + " PassByMode;\n" +
                            (
                                type_desc.traits.value().is_default_constructible
                                ?
                                    "public " + by_val_name + "() {PassByMode = " + pass_by + ".default_construct;}\n"
                                : ""
                            ) +
                            (
                                type_desc.traits.value().is_copy_constructible
                                ?
                                    "public " + by_val_name + "(" + copy_ctor_param_half_name + " new_value) {Value = new_value; PassByMode = " + pass_by + ".copy;}\n"
                                    "public static implicit operator " + by_val_name + "(" + copy_ctor_param_half_name + " arg) {return new(arg);}\n"
                                : ""
                            ) +
                            (
                                type_desc.traits.value().is_move_constructible
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

                        EmitConvertingCtors(
                            by_val_name,
                            is_opt_opt
                            ? Generator::EmitVariant::conv_op_for_ctor_for_by_value_opt_opt_helper
                            : EmitVariant::conv_op_for_ctor_for_by_value_helper
                        );

                        file.PopScope();
                    };

                    EmitByValueHelper(false);

                    // The version for `std::optional` parameters with default arguments, `_ByValueOptOpt_...`.
                    // This is enabled if the class uses the pass-by enum and at the same time `std::optional<cpp_type>` exists.
                    if (class_desc.kind == CInterop::ClassKind::uses_pass_by_enum && c_desc.FindTypeOpt(CppdeclToCode(cppdecl::Type::FromQualifiedName(cppdecl::QualifiedName{}.AddPart("std").AddPart("optional").AddTemplateArgument(cppdecl::Type::FromQualifiedName(cpp_qual_name))))))
                        EmitByValueHelper(true);
                }

                // `_InOpt_...`.
                // Note that those `_InOpt_...` wrappers for structs are used for a slightly different purpose than the generic `_InOpt<T>` for classes.
                if (cl->kind == CInterop::ClassKind::exposed_struct)
                {
                    const std::string in_opt_name = CppToCSharpUnqualInOptStructHelperName(cpp_name.parts.back());

                    file.WriteSeparatingNewline();
                    file.WriteString(
                        "/// This is used as a function parameter when passing `" + mut_half_name + "` by value with a default argument, since `?` doesn't seem to work with `ref struct`.\n"
                        "/// Usage:\n"
                        "/// * Pass an instance of " + related_classes_list + " to copy it into the function.\n"
                        "/// * Pass `null` to use the default argument\n"
                        "public readonly ref struct " + in_opt_name + "\n"
                    );
                    file.PushScope({}, "{\n", "}\n");
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
                        "public " + in_opt_name + "(" + const_half_name + " new_value) {HasValue = true; Object = new_value.UnderlyingStruct;}\n"
                        "public static implicit operator " + in_opt_name + "(" + const_half_name + " new_value) {return new(new_value);}\n"
                    );

                    EmitConvertingCtors(in_opt_name, EmitVariant::conv_op_for_ctor_for_in_opt_struct_helper);

                    file.PopScope();
                }

                { // `_InOptMut_...`.
                    const std::string in_opt_mut_name = CppToCSharpUnqualInOptMutNontrivialHelperName(cpp_name.parts.back());

                    file.WriteSeparatingNewline();
                    file.WriteString(
                        "/// This is used for optional parameters of class `" + mut_half_name + "` with default arguments.\n"
                        "/// This is only used mutable parameters. For const ones we have `" + CppToCSharpUnqualInOptConstNontrivialHelperName(cpp_name.parts.back()) + "`.\n"
                        "/// Usage:\n"
                        "/// * Pass `null` to use the default argument.\n"
                        "/// * Pass `new()` to pass no object.\n"
                        "/// * Pass an instance of " + related_classes_list + " directly.\n"
                        + (class_desc.kind == CInterop::ClassKind::exposed_struct ? "/// * Pass `new(ref ...)` to pass a reference to `" + *struct_name + "`.\n" : "") +
                        "public class " + in_opt_mut_name + "\n"
                    );
                    file.PushScope({}, "{\n", "}\n");
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
                    file.WriteString(
                        "/// This is used for optional parameters of class `" + mut_half_name + "` with default arguments.\n"
                        "/// This is only used const parameters. For non-const ones we have `" + CppToCSharpUnqualInOptMutNontrivialHelperName(cpp_name.parts.back()) + "`.\n"
                        "/// Usage:\n"
                        "/// * Pass `null` to use the default argument.\n"
                        "/// * Pass `new()` to pass no object.\n"
                        "/// * Pass an instance of " + related_classes_list + " to pass it to the function.\n"
                        + (class_desc.kind == CInterop::ClassKind::exposed_struct ? "/// * Pass `new(ref ...)` to pass a reference to `" + *struct_name + "`.\n" : "") +
                        "public class " + in_opt_const_name + "\n"
                    );
                    file.PushScope({}, "{\n", "}\n");
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

    Generator::ManagedKind Generator::ClassifyParamManagedKind(const cppdecl::Type &cpp_type)
    {
        // If this is a reference, return true if it's a class reference.
        if (cpp_type.modifiers.size() == 1 && cpp_type.Is<cppdecl::Reference>())
            return TypeIsCppClass(cppdecl::Type::FromSimpleType(cpp_type.simple_type)) ? ManagedKind::managed : ManagedKind::unsure;

        // If this has no modifiers, return true if it's a class, unless it's an exposed struct.
        if (cpp_type.modifiers.empty())
        {
            const CInterop::TypeDesc *type_desc = c_desc.FindTypeOpt(CppdeclToCode(cpp_type));
            if (!type_desc)
                return ManagedKind::unsure;
            auto class_desc = std::get_if<CInterop::TypeKinds::Class>(&type_desc->var);
            if (!class_desc)
                return ManagedKind::unmanaged; // Hopefully this is always correct.
            return class_desc->kind == CInterop::ClassKind::exposed_struct ? ManagedKind::never_managed : ManagedKind::managed;
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

    void Generator::EmitCppField(OutputFile &file, const CInterop::ClassField &field, bool is_const, ClassShadowingData *shadowing_data)
    {
        try
        {
            // Fields without const getters should be impossible.
            // If this fails, did you perhaps to try call this method on a field of an exposed struct?
            assert(field.getter_const);

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

                const cppdecl::Type &getter_return_type = ParseTypeOrThrow(getter->ret.cpp_type);

                // Our getters are considered to return references right now, rather than pointers.
                // In C it ends up as a pointer either way, but this indicates that it's non-null.
                assert(getter_return_type.Is<cppdecl::Reference>());

                ArrayStrings arr_strings = RequestCSharpArrayType(ParseTypeOrThrow(field.type));

                file.WriteSeparatingNewline();
                file.WriteString(field.comment.c_style);
                if (!is_const)
                    file.WriteString("new ");
                file.WriteString("public " + std::string(field.is_static ? "static " : "") + "unsafe " + arr_strings.csharp_type + " " + CppToCSharpIdentifier(ParseNameOrThrow(field.name)) + "\n");
                file.PushScope({}, "{\n", "}\n");

                file.WriteString("get\n");
                file.PushScope({}, "{\n", "}\n");

                auto dllimport_decl = MakeDllImportDecl(getter->c_name, arr_strings.csharp_underlying_ptr_target_type + " *", getter->is_static ? "" : GetParameterBinding(getter->params.at(0), getter->is_static).dllimport_decl_params);
                file.WriteString(dllimport_decl.dllimport_decl);

                file.WriteString(
                    "return " + arr_strings.construct(dllimport_decl.csharp_name + "(_UnderlyingPtr)") + ";\n"
                );

                file.PopScope();
                file.PopScope();

                return;
            }

            // If there's no mutable setter, then do nothing in the mutable half.
            // Static fields are entirely in the const half as well.
            if ((field.is_static || !field.getter_mutable) && !is_const)
                return;

            const auto &maybe_const_getter = !is_const || (field.is_static && field.getter_mutable) ? field.getter_mutable : field.getter_const;
            assert(maybe_const_getter);

            // Determine the C# property type.
            // This can be different for const and mutable halves, but this is fine.
            const std::string csharp_property_type = GetReturnBinding(maybe_const_getter->ret).csharp_return_type;

            // Emit the property.
            // We only emit the `get` half, never the `set` half.
            // If the property returns a `ref` type, then the getter is enough, and adding a setter is a compilation error.
            // If the property returns something else (aka a class wrapper), then we wouldn't be able to provide a setter anyway,
            //   since its parameter type (the by-value wrapper) needs to be different from what the getter returns, and C# requires those types to match.
            // But this isn't an issue, since we have `.Assign()` in our class wrappers.

            FuncLikeEmitter emit_getter(*this, &maybe_const_getter.value(), "get", false/*doesn't matter since we're not in a ctor*/);

            file.WriteSeparatingNewline();

            file.WriteString(field.comment.c_style);

            file.WriteString("public ");

            if (field.is_static)
                file.WriteString("static ");

            // Be explicit about the shadowing.
            if (!is_const)
                file.WriteString("new ");

            if (emit_getter.IsUnsafe())
                file.WriteString("unsafe ");

            // The return type.
            file.WriteString(csharp_property_type);
            file.WriteString(" ");

            // The property name.
            file.WriteString(CppToCSharpIdentifier(ParseNameOrThrow(field.full_name)));
            file.WriteString("\n");

            file.PushScope({}, "{\n", "}\n");

            emit_getter.Emit(file, FuncLikeEmitter::ShadowingDesc{.shadowing_data = shadowing_data, .write = is_const});

            file.PopScope();
        }
        catch (...)
        {
            std::throw_with_nested(std::runtime_error("While emitting C++ field `" + field.full_name + "`:"));
        }
    }

    void Generator::Generate()
    {
        { // Perform some initialization.
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

                                auto &new_op = new_method.var.emplace<CInterop::MethodKinds::Operator>();
                                new_op.token = std::move(std::get<CInterop::FuncKinds::Operator>(func.var).token);

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

            // At this point, if `free_func` is an overloaded operator (a free function operator that wasn't adjusted to a member one earlier in `Generate()`),
            //   then we can't bind it as an operator

            std::string unqual_csharp_name;
            std::visit(
                [&]<typename T>(const T &elem)
                {
                    cppdecl::QualifiedName qual_name = ParseNameOrThrow(elem.name);
                    assert(!qual_name.parts.empty());

                    // Open the namespace.
                    file.EnsureNamespace(*this, cppdecl::QualifiedName{.parts = {qual_name.parts.begin(), qual_name.parts.end() - 1}});

                    // Sync this logic for operators with `MakeUnqualCSharpMethodName()`.
                    if constexpr (std::is_same_v<T, CInterop::FuncKinds::Operator>)
                        unqual_csharp_name = CppIdentifierToCSharpIdentifier(cppdecl::TokenToIdentifier(std::get<cppdecl::OverloadedOperator>(qual_name.parts.back().var).token, true));
                    else
                        unqual_csharp_name = CppToCSharpIdentifier(qual_name.parts.back());
                },
                free_func.var
            );

            FuncLikeEmitter(*this, &free_func, unqual_csharp_name, false).Emit(file);
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
                    file.WriteString(
                        // This is semantically abstract, and we also must mark it as one due to the reasons explained in `SharedObject` below.
                        "/// This is the base class for all our classes.\n"
                        "public abstract class Object\n"
                        "{\n"
                        "    protected bool _IsOwningVal;\n"
                        "    /// Returns true if this is an owning instance, and when disposed, will destroy the underlying C++ instance.\n"
                        "    /// If false, we assume that the underlying C++ instance will live long enough.\n"
                        "    public virtual bool _IsOwning => _IsOwningVal;\n"
                        "\n"
                        "    /// Which objects need to be kept alive while this object exists? This is public just in case.\n"
                        "    public List<object>? _KeepAliveList;\n"
                        "    public void _KeepAlive(object obj)\n"
                        "    {\n"
                        "        if (_KeepAliveList is null)\n"
                        "            _KeepAliveList = new();\n"
                        "        _KeepAliveList.Add(obj);\n"
                        "    }\n"
                        "\n"
                        "    internal Object(bool is_owning) {_IsOwningVal = is_owning;}\n"
                        "}\n"
                    );

                    // Add `SharedObject`.
                    if (need_shared_object)
                    {
                        file.WriteSeparatingNewline();
                        file.WriteString(
                            // This is semantically abstract, and we also must mark it as one because we want to make the `IsOwning` property abstract.
                            "/// This is the base class for those of our classes that are backed by `std::shared_ptr`.\n"
                            "public abstract class SharedObject : Object\n"
                            "{\n"
                            "    /// This checks if the `shared_ptr` itself is owning or not, rather than whether we own our `shared_ptr`, which isn't a given.\n"
                            "    /// The derived classes have to implement this, since it depends on the specific `shared_ptr` type.\n"
                            "    public abstract override bool _IsOwning {get;}\n"
                            "    /// This checks if we own the underlying `shared_ptr` instance, regardless of whether it owns the underlying object, which is orthogonal.\n"
                            "    /// We repurpose `_IsOwningVal` for this.\n"
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
                        file.WriteString(
                            // This one class isn't prefixed with `_`, since you need to manually construct instances of it ot pass to `_InOutOpt`.
                            "/// This is used for optional in/out parameters, since `ref` can't be nullable.\n"
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
                            file.WriteString(
                                "/// This is used for optional in/out parameters with default arguments.\n"
                                "/// Usage:\n"
                                "/// * Pass `null` to use the default argument.\n"
                                "/// * Pass `new()` to pass no object.\n"
                                "/// * Pass an instance of `InOut<T>` to pass it to the function.\n"
                                "public class _InOutOpt<T> where T: unmanaged\n"
                                "{\n"
                                "    public InOut<T>? Opt;\n"
                                "\n"
                                "    // Use this constructor (by passing `new()`) if you don't want to receive output from this function parameter.\n"
                                "    public _InOutOpt() {}\n"
                                "    // Use this constructor (by passing an existing `InOut` instance) if you do want to receive output, into that object.\n"
                                "    public _InOutOpt(InOut<T>? NewOpt) {Opt = NewOpt;}\n"
                                "    // An implicit conversion for passing function parameters.\n"
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
                    file.WriteString(
                        "/// This is used for optional parameters with default arguments.\n"
                        "/// Usage:\n"
                        "/// * Pass `null` to use the default argument.\n"
                        "/// * Pass `new()` to pass no object.\n"
                        "/// * Pass an instance of `T` to pass it to the function.\n"
                        "/// Passing a null `_InOpt` means \"use default argument\", and passing a one with a null `.Opt` means \"pass nothing to the function\".\n"
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

                // `Ref`.
                if (requested_helpers.erase("Ref")) // See below for why there's no `_` prefix.
                {
                    file.WriteSeparatingNewline();
                    file.WriteString(
                        // This isn't prefixed with `_`, since the user might need to deal with those directly,
                        //   when handling results of functions returning this.
                        "/// A reference to a C object. This is used to return optional references, since `ref` can't be nullable.\n"
                        "/// This object itself isn't nullable, we return `Ref<T>?` when nullability is needed.\n"
                        "public unsafe class Ref<T> where T: unmanaged\n"
                        "{\n"
                        "    /// Should never be null.\n"
                        "    private T *Ptr;\n"
                        "    /// Should never be given a null pointer. I would pass `ref T`, but this prevents the address from being taken without `fixed`.\n"
                        "    internal Ref(T *NewPtr)\n"
                        "    {\n"
                        "        System.Diagnostics.Trace.Assert(NewPtr is not null);\n"
                        "        Ptr = NewPtr;\n"
                        "    }\n"
                        "\n"
                        "    public ref T Value => ref *Ptr;\n"
                        "}\n"
                    );
                }

                // Stuff for `_ByValue_...`.
                // Intentionally using `|` to not short-circuit erasures.
                if (requested_helpers.erase("_Moved") | requested_helpers.erase("_PassBy"))
                {
                    file.WriteSeparatingNewline();
                    file.WriteString(
                        "/// This can be used with `_ByValue_...` function parameters, to indicate that the argument should be moved.\n"
                        "/// See those structs for a longer explanation.\n"
                        "public static _Moved<T> Move<T>(T NewValue) {return new(NewValue);}\n"
                        "\n"
                        "/// Don't use directly, this is the return type of `Move()`. See that for explanation.\n"
                        "public readonly struct _Moved<T>\n"
                        "{\n"
                        "    internal readonly T Value;\n"
                        "    internal _Moved(T NewValue) {Value = NewValue;}\n"
                        "}\n"
                        "\n"
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

                // `NullOpt`, for `_ByValueOptOpt_...`.
                // Intentionally using `|` to not short-circuit erasures.
                if (requested_helpers.erase("NullOpt") || requested_helpers.erase("NullOptType"))
                {
                    file.WriteSeparatingNewline();
                    file.WriteString(
                        // This is a struct as an optimization.
                        "/// The type of `NullOpt`, see that for more details.\n"
                        "public struct NullOptType {}\n"
                        "/// This can be passed into `_ByValueOptOpt_...` parameters to indicate that you want to pass no object,\n"
                        "///   as opposed to using the default argument provided by the function.\n"
                        "public static NullOptType NullOpt;\n"
                    );
                }

                { // `ReadOnlySpanOpt<T>` and `ReadOnlyCharSpanOpt`.
                    // Since `ReadOnlySpan<T>` doesn't work with `?` at least in .NET 8, we need this class.
                    if (requested_helpers.erase("ReadOnlySpanOpt"))
                    {
                        file.WriteSeparatingNewline();
                        file.WriteString(
                            "/// This is used for optional `ReadOnlySpan` function parameters.\n"
                            "/// Pass `null` or `new()` to use the default argument.\n"
                            "///   Note that for the original `ReadOnlySpan`, those result in an empty span instead.\n"
                            "public ref struct ReadOnlySpanOpt<T> where T: unmanaged\n"
                            "{\n"
                            "    public readonly bool HasValue;\n"
                            "\n"
                            "    ReadOnlySpan<T> Span;\n"
                            "    public ReadOnlySpan<T> Value\n"
                            "    {\n"
                            "        get\n"
                            "        {\n"
                            "            System.Diagnostics.Trace.Assert(HasValue);\n"
                            "            return Span;\n"
                            "        }\n"
                            "    }\n"
                            "\n"
                            "    public ReadOnlySpanOpt(T[]? arr) {HasValue = arr is not null; Span = arr;}\n"
                            "    public ReadOnlySpanOpt(ReadOnlySpan<T> span) {HasValue = true; Span = span;}\n"
                            "    public static implicit operator ReadOnlySpanOpt<T>(T[]? arr) {return new(arr);}\n"
                            "    public static implicit operator ReadOnlySpanOpt<T>(ReadOnlySpan<T> span) {return new(span);}\n"
                            "}\n"
                        );
                    }

                    if (requested_helpers.erase("ReadOnlyCharSpanOpt"))
                    {
                        file.WriteSeparatingNewline();
                        file.WriteString(
                            "/// This is used for optional `ReadOnlySpan<char>` function parameters. This is a specialized version that provides string interop.\n"
                            "/// Pass `null` or `new()` to use the default argument.\n"
                            "///   Note that for the original `ReadOnlySpan`, those result in an empty span instead.\n"
                            "public ref struct ReadOnlyCharSpanOpt\n"
                            "{\n"
                            "    public readonly bool HasValue;\n"
                            "\n"
                            "    ReadOnlySpan<char> Span;\n"
                            "    public ReadOnlySpan<char> Value\n"
                            "    {\n"
                            "        get\n"
                            "        {\n"
                            "            System.Diagnostics.Trace.Assert(HasValue);\n"
                            "            return Span;\n"
                            "        }\n"
                            "    }\n"
                            "\n"
                            "    public ReadOnlyCharSpanOpt(char[]? arr) {HasValue = arr is not null; Span = arr;}\n"
                            "    public ReadOnlyCharSpanOpt(ReadOnlySpan<char> span) {HasValue = true; Span = span;}\n"
                            "    public ReadOnlyCharSpanOpt(string? str) {HasValue = str is not null; Span = str;}\n"
                            "\n"
                            "    // This is disabled because it makes conversion from `null` ambiguous.\n"
                            "    // public static implicit operator ReadOnlyCharSpanOpt(char[]? arr) {return new(arr);}\n"
                            "    public static implicit operator ReadOnlyCharSpanOpt(ReadOnlySpan<char> span) {return new(span);}\n"
                            "    public static implicit operator ReadOnlyCharSpanOpt(string? str) {return new(str);}\n"
                            "}\n"
                        );
                    }
                }

                // Currently we don't need any custom exceptions.
                { // Custom exceptions.
                    #if 0
                    auto CreateExceptionClassIfNeeded = [&](const std::string &name, const std::string &comment)
                    {
                        if (!requested_helpers.erase(name))
                            return;

                        file.WriteSeparatingNewline();

                        if (!comment.empty())
                        {
                            assert(comment.ends_with('\n'));
                            file.WriteString(comment);
                        }

                        file.WriteString(
                            "public class " + name + " : System.Exception\n"
                            "{\n"
                            "    public " + name + "() {}\n"
                            "    public " + name + "(string message) : base(message) {}\n"
                            "    public " + name + "(string message, Exception inner) : base(message, inner) {}\n"
                            "}\n"
                        );
                    };
                    #endif
                }

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
                    file.WriteString(
                        // A plain struct seems most appropriate. A `ref struct` would add extra limitations that we don't need.
                        "/// This is an empty tag type, corresponding to C++ `" + CppdeclToCode(cpp_name) + "`.\n"
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

                    file.WriteSeparatingNewline();
                    file.WriteString(
                        "[System.Runtime.CompilerServices.InlineArray(" + std::to_string(desc.num_elems) + ")]\n"
                        // Those can't be `ref struct`s, we need plain `struct`s.
                        // But even plain `sturct`s seem to be usable as fields of `ref struct`s, so we're all good.
                        "public struct " + CppToCSharpIdentifier(desc.qual_array_name.parts.back()) + "\n"
                        "{\n"
                        // The name here doesn't really matter, since the array access syntax ignores it.
                        // This is intentionally private, since accessing this member directly would be possible otherwise (and would return the first element, I think?),
                        //   and that isn't useful.
                        "    " + desc.csharp_elem_type + " elem;\n"
                        "}\n"
                    );
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

                    file.WriteSeparatingNewline();

                    file.WriteString("public unsafe struct " + unqual_csharp_name + "\n");
                    file.PushScope({}, "{\n", "}\n");

                    file.WriteString(
                        desc.strings.csharp_underlying_ptr_target_type + " *Ptr;\n"
                        "\n"
                        "internal " + unqual_csharp_name + "(" + desc.strings.csharp_underlying_ptr_target_type + " *new_ptr) {Ptr = new_ptr;}\n"
                        "\n"
                        "public " + desc.csharp_elem_type + " this[int i]\n"
                    );

                    file.PushScope({}, "{\n", "}\n");

                    // Properties and indexers of reference types only need getters. Attempting to provide a setter is an error.
                    // And if `desc.csharp_elem_type` is a non-reference, we don't need setters either, you can use `.Assign()` or whatever.
                    file.WriteString("get\n");

                    file.PushScope({}, "{\n", "}\n");

                    CFuncDeclStrings dllimport_decl;
                    if (desc.ptr_offset_func)
                    {
                        dllimport_decl = MakeDllImportDecl(*desc.ptr_offset_func, desc.strings.csharp_underlying_ptr_target_type + " *", desc.strings.csharp_underlying_ptr_target_type + " *ptr, nint i");
                        file.WriteString(dllimport_decl.dllimport_decl);
                    }

                    std::string expr = "i";
                    if (desc.size_for_ptr_offsets != 1)
                        expr += " * " + std::to_string(desc.size_for_ptr_offsets);

                    if (desc.ptr_offset_func)
                        expr = dllimport_decl.csharp_name + "(Ptr, " + expr + ")";
                    else
                        expr = "Ptr + " + expr;

                    switch (desc.kind)
                    {
                      case RequestedMaybeOpaqueArray::ElemKind::ref:
                        file.WriteString("return ref *" + expr + ";\n");
                        break;
                      case RequestedMaybeOpaqueArray::ElemKind::ptr:
                        file.WriteString("return new(" + expr + ");\n");
                        break;
                      case RequestedMaybeOpaqueArray::ElemKind::ptr_maybeowning:
                        file.WriteString("return new(" + expr + ", is_owning: false);\n");
                        break;
                    }

                    file.PopScope(); // indexer getter

                    file.PopScope(); // indexer

                    file.PopScope(); // struct
                }
            }
        }
    }
}
