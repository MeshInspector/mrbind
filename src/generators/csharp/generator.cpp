#include "generator.h"
#include "common/string_escape.h"

#include <cppdecl/declarations/parse.h>

#include <numeric>

namespace mrbind::CSharp
{
    std::string CppStringToCsharpIdentifier(std::string_view cpp_ident)
    {
        std::string ret;
        ret.reserve(cpp_ident.size());

        bool uppercase_next = true;
        for (char ch : cpp_ident)
        {
            if (ch == '<' || ch == '>' || ch == ',')
            {
                ret += '_';
                uppercase_next = true;
                continue;
            }

            if (cppdecl::IsAlpha(ch) || cppdecl::IsDigit(ch))
            {
                if (std::exchange(uppercase_next, false))
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
            if (!part.empty() && (contents.empty() || contents.ends_with("\n")))
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
        if (!contents.ends_with("{\n"))
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

        if (new_namespace.parts.empty())
        {
            // Pop any existing namespaces.
            while (!current_scope.empty())
                PopScope();
            return;
        }

        for (std::size_t i = 0; i < new_namespace.parts.size(); i++)
        {
            if (i < current_scope.size() && current_scope[i].name == new_namespace.parts[i])
                continue; // This namespace is already open, nothing to do.

            // Pop any existing namespaces.
            while (i < current_scope.size())
                PopScope();

            // Push new ones, assuming those are plain namespaces.
            // Since C# namespaces can only contain classes, and not e.g. free functions, we instead use partial classes.
            // "Partial" you can reopen them later to add more members.
            PushScope(new_namespace.parts[i], "public static partial class " + CppToCsharpIdentifier(new_namespace.parts[i]) + "\n{\n", "}\n");
        }
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

    std::optional<std::string_view> Generator::CToCSharpPrimitiveTypeOpt(std::string_view c_type, bool is_indirect)
    {
        if (c_type == "void") return "void";

        if (auto opt = c_desc.platform_info.FindPrimitiveType(c_type))
        {
            switch (opt->kind)
            {
              case PrimitiveTypeInfo::Kind::boolean:
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

        // This can totally happen if the user passes the global namespace `EnsureNamespace()`.
        if (name.parts.empty())
            return name;

        if (name.parts.front() != forced_namespace->parts.front())
            name.parts.insert(name.parts.begin(), forced_namespace->parts.begin(), forced_namespace->parts.end());

        return name;
    }

    std::string Generator::CppToCSharpEnumName(cppdecl::QualifiedName name)
    {
        name = AdjustCppNamespaces(std::move(name));

        std::string ret;
        for (std::size_t i = 0; i < name.parts.size(); i++)
        {
            if (i > 0)
                ret += '.'; // We don't use actual namespaces in C# (which would require `::`). Since we only use static classes, we can use `.` everywhere.

            ret += CppToCsharpIdentifier(name.parts[i]);
        }
        return ret;
    }

    std::string Generator::CppToCSharpClassName(cppdecl::QualifiedName name, bool is_const)
    {
        name = AdjustCppNamespaces(std::move(name));

        std::string ret;
        for (std::size_t i = 0; i < name.parts.size(); i++)
        {
            if (i > 0)
                ret += '.'; // We don't use actual namespaces in C# (which would require `::`). Since we only use static classes, we can use `.` everywhere.

            std::string part;
            if (i + 1 == name.parts.size())
                part = CppToCSharpUnqualClassName(name.parts[i], is_const);
            else
                part = CppToCsharpIdentifier(name.parts[i]);

            ret += part;
        }
        return ret;
    }

    std::string Generator::CppToCSharpUnqualClassName(const cppdecl::UnqualifiedName &name, bool is_const)
    {
        return is_const ? "Const" + CppToCsharpIdentifier(name) : CppToCsharpIdentifier(name);
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
                            return nullptr;
                        },
                        [&](const CInterop::TypeKinds::EmptyTagPtr &) -> const TypeBinding *
                        {
                            return nullptr;
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
                            const bool is_transparent_shared_ptr = shared_ptr_targ && IsManagedTypeInCSharp(*shared_ptr_targ);

                            // If this is a transparent `shared_ptr` (i.e. pointing to a class storing one), this its target type.
                            // Otherwise this is the original referenced type.
                            const cppdecl::Type &cpp_effective_type = is_transparent_shared_ptr ? *shared_ptr_targ : cpp_type;

                            const std::string csharp_type_mut = CppToCSharpClassName(cpp_effective_type.simple_type.name, false);
                            const std::string csharp_type_const = CppToCSharpClassName(cpp_effective_type.simple_type.name, true);
                            const std::string csharp_underlying_ptr = is_transparent_shared_ptr ? "_UnderlyingSharedPtr" : "_UnderlyingPtr";
                            const std::string csharp_underlying_ptr_type = csharp_type_mut + (is_transparent_shared_ptr ? "._UnderlyingShared" : "._Underlying") + " *";

                            switch (elem.kind)
                            {
                              case CInterop::ClassKind::ref_only:
                                throw std::runtime_error("The class marked as `ClassKind::ref_only`, but it's being passed by value.");
                                break;
                              case CInterop::ClassKind::uses_pass_by_enum:
                                return CreateBinding({
                                    .param_usage = TypeBinding::ParamUsage{
                                        .make_strings = [this, csharp_type_mut, csharp_type_const, csharp_underlying_ptr_type, csharp_underlying_ptr](const std::string &name, bool /*have_useless_defarg*/)
                                        {
                                            return TypeBinding::ParamUsage::Strings{
                                                .dllimport_decl_params = RequestHelper("_PassBy") + " " + name + "_pass_by, " + csharp_underlying_ptr_type + name,
                                                .csharp_decl_params = {{.type = RequestHelper("ByValue") + "<" + csharp_type_mut + ", " + csharp_type_const + ">", .name = name}},
                                                .dllimport_args = name + ".PassByMode, " + name + ".Value != null ? " + name + ".Value." + csharp_underlying_ptr + " : null",
                                            };
                                        },
                                    },
                                    .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                        .make_strings = [this, csharp_type_mut, csharp_type_const, csharp_underlying_ptr_type, csharp_underlying_ptr](const std::string &name, bool /*have_useless_defarg*/)
                                        {
                                            return TypeBinding::ParamUsage::Strings{
                                                .dllimport_decl_params = RequestHelper("_PassBy") + " " + name + "_pass_by, " + csharp_underlying_ptr_type + name,
                                                .csharp_decl_params = {{.type = RequestHelper("ByValue") + "<" + csharp_type_mut + ", " + csharp_type_const + ">?", .name = name, .default_arg = "null"}},
                                                .dllimport_args = name + ".HasValue ? " + name + ".Value.PassByMode : " + RequestHelper("_PassBy") + ".default_arg, " + name + ".HasValue && " + name + ".Value.Value != null ? " + name + ".Value.Value." + csharp_underlying_ptr + " : null",
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
                                                .dllimport_args = name + " != null ? " + name + "." + csharp_underlying_ptr + " : null",
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
                                // TODO
                                throw std::logic_error("Not implemented yet!");
                                break;
                            }
                        },
                        [&](const CInterop::TypeKinds::PointerNonOwning &) -> const TypeBinding *
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
                                                            csharp_type + " __value_" + name + " = " + name + " != null ? " + name + ".Value : default(" + csharp_type + ");\n" +
                                                            (fix_input ? fix_input("__value_" + name) : ""),
                                                        .dllimport_args = name + " != null ? &__value_" + name + " : null",
                                                        .extra_statements_after = "if (" + name + " != null) " + name + ".Value = __value_" + name + ";\n",
                                                    };
                                                },
                                            },
                                            .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                                .make_strings = [this, csharp_type, fix_input](const std::string &name, bool /*have_useless_defarg*/)
                                                {
                                                    return TypeBinding::ParamUsage::Strings{
                                                        .dllimport_decl_params = csharp_type + " **" + name,
                                                        .csharp_decl_params = {{.type = RequestHelper("InOutOpt") + "<" + csharp_type + ">?", .name = name, .default_arg = "null"}},
                                                        .extra_statements =
                                                            csharp_type + " __value_" + name + " = " + name + " != null && " + name + ".Opt != null ? " + name + ".Opt.Value : default(" + csharp_type + ");\n" +
                                                            csharp_type + " *__valueptr_" + name + " = " + name + " != null && " + name + ".Opt != null ? &__value_" + name + " : null;\n" +
                                                            (fix_input ? fix_input("__value_" + name) : ""),
                                                        .dllimport_args = name + " != null ? &__valueptr_" + name + " : null",
                                                        .extra_statements_after = "if (" + name + " != null && " + name + ".Opt != null) " + name + ".Opt.Value = __value_" + name + ";\n",
                                                    };
                                                },
                                            },
                                            .return_usage = TypeBinding::ReturnUsage{
                                                .needs_temporary_variable = true,
                                                .dllimport_return_type = csharp_type + " *",
                                                .csharp_return_type = RequestHelper("Ref") + "<" + csharp_type + ">?",
                                                .make_return_expr = [this, csharp_type](const std::string &expr)
                                                {
                                                    return "return " + expr + " != null ? new " + RequestHelper("Ref") + "<" + csharp_type + ">(" + expr + ") : null;";
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
                                                        .csharp_decl_params = {{.type = RequestHelper("InOpt") + "<" + csharp_type + ">?", .name = name, .default_arg = "null"}},
                                                        .extra_statements =
                                                            csharp_type + " __value_" + name + " = " + name + " != null && " + name + ".Opt != null ? " + name + ".Opt.Value : default(" + csharp_type + ");\n" +
                                                            csharp_type + " *__valueptr_" + name + " = " + name + " != null && " + name + ".Opt != null ? &__value_" + name + " : null;\n" +
                                                            (fix_input ? fix_input("__value_" + name) : ""),
                                                        .dllimport_args = name + " != null ? &__valueptr_" + name + " : null",
                                                    };
                                                },
                                            },
                                            .return_usage = TypeBinding::ReturnUsage{
                                                .needs_temporary_variable = true,
                                                .dllimport_return_type = csharp_type + " *",
                                                .csharp_return_type = csharp_type + "?",
                                                .make_return_expr = [](const std::string &expr){return "return " + expr + " != null ? *" + expr + " : null;";},
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
                                        const bool is_transparent_shared_ptr = shared_ptr_targ && IsManagedTypeInCSharp(*shared_ptr_targ);

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
                                            return CreateBinding({
                                                .param_usage = TypeBinding::ParamUsage{
                                                    .make_strings = [csharp_type, csharp_underlying_ptr_type, csharp_underlying_ptr](const std::string &name, bool have_useless_defarg)
                                                    {
                                                        return TypeBinding::ParamUsage::Strings{
                                                            .dllimport_decl_params = csharp_underlying_ptr_type + name,
                                                            .csharp_decl_params = {{.type = csharp_type + "?", .name = name, .default_arg = (have_useless_defarg ? std::optional<std::string>("null") : std::nullopt)}},
                                                            .dllimport_args = name + " != null ? " + name + "." + csharp_underlying_ptr + " : null",
                                                        };
                                                    },
                                                },
                                                .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                                    .make_strings = [this, csharp_type, csharp_underlying_ptr_type, csharp_underlying_ptr](const std::string &name, bool /*have_useless_defarg*/)
                                                    {
                                                        return TypeBinding::ParamUsage::Strings{
                                                            .dllimport_decl_params = csharp_underlying_ptr_type + "*" + name,
                                                            .csharp_decl_params = {{.type = RequestHelper("InOptClass") + "<" + csharp_type + ">?", .name = name, .default_arg = "null"}},
                                                            .extra_statements = csharp_underlying_ptr_type + "__ptr_" + name + " = " + name + " != null && " + name + ".Opt != null ? " + name + ".Opt." + csharp_underlying_ptr + " : null;\n",
                                                            .dllimport_args = name + " != null ? &__ptr_" + name + " : null",
                                                        };
                                                    },
                                                },
                                                .return_usage = TypeBinding::ReturnUsage{
                                                    .needs_temporary_variable = true,
                                                    .dllimport_return_type = csharp_underlying_ptr_type,
                                                    .csharp_return_type = csharp_type + "?",
                                                    .make_return_expr = [csharp_type](const std::string &expr)
                                                    {
                                                        return "return " + expr + " != null ? new " + csharp_type + "(" + expr + ", is_owning: false) : null;";
                                                    },
                                                },
                                            });

                                            break;
                                          case CInterop::ClassKind::exposed_struct:
                                            // TODO
                                            throw std::logic_error("Not implemented yet!");
                                            break;
                                        }
                                        return nullptr;
                                    },
                                    [&](const CInterop::TypeKinds::PointerNonOwning &) -> const TypeBinding *
                                    {
                                        return nullptr;
                                    },
                                    [&](const CInterop::TypeKinds::ReferenceNonOwning &) -> const TypeBinding *
                                    {
                                        return nullptr;
                                    },
                                }, underlying_type_desc->var);
                            }

                            return nullptr;
                        },
                        [&](const CInterop::TypeKinds::ReferenceNonOwning &) -> const TypeBinding *
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
                                                            csharp_type + " __value_" + name + " = " + name + " != null ? " + name + ".Value : default(" + csharp_type + ");\n" +
                                                            (fix_input ? fix_input("__value_" + name) : ""),
                                                        .dllimport_args = name + " != null ? &__value_" + name + " : null",
                                                        .extra_statements_after = "if (" + name + " != null) " + name + ".Value = __value_" + name + ";\n",
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
                                        const bool is_transparent_shared_ptr = shared_ptr_targ && IsManagedTypeInCSharp(*shared_ptr_targ);

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
                                                            .dllimport_args = name + " != null ? " + name + "." + csharp_underlying_ptr + " : null",
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
                                          case CInterop::ClassKind::exposed_struct:
                                            // TODO
                                            throw std::logic_error("Not implemented yet!");
                                            break;
                                        }
                                        return nullptr;
                                    },
                                    [&](const CInterop::TypeKinds::PointerNonOwning &) -> const TypeBinding *
                                    {
                                        return nullptr;
                                    },
                                    [&](const CInterop::TypeKinds::ReferenceNonOwning &) -> const TypeBinding *
                                    {
                                        return nullptr;
                                    },
                                }, underlying_type_desc->var);
                            }

                            return nullptr;
                        },
                    }, c_type_desc->var);
                }
            }
            else
            {
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

                // Returns true if `cpp_type` matches `target_name` exactly, or is a const or rvalue ref to `target_name`.
                auto TypeMatchesExactlyOrConstOrRvalueRef = [&](const cppdecl::QualifiedName &target_name) -> bool
                {
                    if (!cpp_type.simple_type.name.Equals(target_name, {}))
                        return false; // The name itself doesn't match.

                    if (cpp_type.modifiers.empty())
                        return true; // Matches exactly.

                    if (cpp_type.modifiers.size() != 1)
                        return false;

                    if (!cpp_type.IsConst(1) && cpp_type.Is<cppdecl::Reference>() && cpp_type.As<cppdecl::Reference>()->kind == cppdecl::RefQualifier::lvalue)
                        return false; // A non-const lvalue reference.

                    return true;
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

    std::string Generator::GetExtraContentsForParsedClass(const cppdecl::QualifiedName &cpp_name, bool is_const)
    {
        const std::string csharp_name = CppToCSharpClassName(cpp_name, is_const);

        std::string ret;

        auto WriteSeparator = [&]
        {
            if (!ret.empty())
                ret += '\n';
        };

        auto WriteConversionsToString = [&](bool is_mutable)
        {
            if (is_const)
            {
                WriteSeparator();
                ret +=
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

            if (!is_const && is_mutable)
            {
                WriteSeparator();
                ret +=
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
            WriteSeparator();
            ret +=
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

    Generator::FuncLikeEmitter::FuncLikeEmitter(Generator &generator, AnyFuncLikePtr any_func_like, std::string new_csharp_name)
    try
        : generator(generator),
        any_func_like(any_func_like),
        csharp_name(std::move(new_csharp_name)),
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
        }())
    {
        // Find the return type binding.
        if (!is_ctor)
        {
            ret_binding = &generator.GetReturnBinding(func_like.ret);
            if (!ret_binding)
                throw std::runtime_error("The C++ return type `" + func_like.ret.cpp_type + "`" + (func_like.ret.uses_sugar ? " (with sugar enabled)" : "") + " is known, but isn't usable as a return type.");
        }

        // Generate the parameter strings.
        param_usages.reserve(func_like.params.size());
        param_strings.reserve(func_like.params.size());
        for (const auto &param : func_like.params)
        {
            std::size_t visual_index = param_strings.size() + 1;
            try
            {
                // For setters, here we force the parameter name to be `value` (which is the implicit parameter name for C# property setters).
                auto param_binding = generator.GetParameterBinding(param, method_like, is_property_set && param_strings.size() == 1 ? std::optional<std::string>("value") : std::nullopt);

                if (!param_binding.strings.dllimport_decl_params.empty())
                {
                    if (!dllimport_param_string.empty())
                        dllimport_param_string += ", ";

                    dllimport_param_string += param_binding.strings.dllimport_decl_params;
                }

                param_usages.push_back(param_binding.usage);
                param_strings.push_back(std::move(param_binding.strings));
            }
            catch (...)
            {
                std::throw_with_nested(std::runtime_error("While handling parameter " + std::to_string(visual_index) + " out of " + std::to_string(func_like.params.size()) + ", of type `" + param.cpp_type + "`" + (param.uses_sugar ? " (with sugar enabled)" : "") + ":"));
            }
        }

        // Generate the dllimport declaration.
        dllimport_strings = generator.MakeDllImportDecl(func_like.c_name, is_ctor ? generator.CppToCSharpClassName(generator.ParseNameOrThrow(method_like->ret.cpp_type), true) + "._Underlying *" : ret_binding->dllimport_return_type, dllimport_param_string);
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
            // Write a separating empty line if needed.
            file.WriteSeparatingNewline();

            if (!is_property)
            {
                // Write the comment.
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
                if (!is_ctor && (!method_like || method_like->is_static))
                    file.WriteString("static ");

                // Note, not emitting `virtual` here, because it's useless in the interfaces.
                // We do emit it when explicitly inheriting each method in the derived classes.

                // Unsafe?
                if (dllimport_strings.is_unsafe)
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
                if (!is_ctor)
                {
                    file.WriteString(ret_binding->csharp_return_type);
                    if (!ret_binding->csharp_return_type.ends_with('*'))
                        file.WriteString(" ");
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

            // Write a member init list for the constructor.
            if (is_ctor)
            {
                if (!ctor_class_backed_by_shared_ptr)
                {
                    file.WriteString(" : this(null, is_owning: true)");
                }
                else
                {
                    // Here we're trying to call the constructor from a shared pointer, not from a raw pointer,
                    //   so we're using the parameter name `shared_ptr:` to disambiguate.
                    // Later in this constructor we'll call `_LateMakeShared()` to actually construct the object.
                    file.WriteString(" : this(shared_ptr: null, is_owning: true)");
                }
            }

            // Begin function body.
            file.PushScope({}, "\n{\n", "}\n");

            // The `DllImport` declaration.
            file.WriteString(dllimport_strings.dllimport_decl);

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

                // Call the function.
                if (is_ctor)
                {
                    file.WriteString(extra_statements);

                    if (!ctor_class_backed_by_shared_ptr)
                    {
                        file.WriteString("_UnderlyingPtr = " + expr + ";\n");
                    }
                    else
                    {
                        file.WriteString("_LateMakeShared(" + expr + ");\n");
                    }

                    file.WriteString(extra_statements_after);
                }
                else if (extra_statements_after.empty() && !ret_binding->needs_temporary_variable)
                {
                    // Return the call directly.
                    file.WriteString(extra_statements);
                    file.WriteString(ret_binding->MakeReturnExpr(expr) + '\n');
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
                        file.WriteString("var __ret = " + expr + ";\n");
                        file.WriteString(extra_statements_after);
                        file.WriteString(ret_expr + '\n');
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
        std::string ret = csharp_name;
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

    std::string Generator::MakeUnqualCSharpMethodName(const CInterop::ClassMethod &method, bool is_const)
    {
        return std::visit(Overload{
            [&](const CInterop::MethodKinds::Regular &elem) -> std::string
            {
                return elem.name;
            },
            [&](const CInterop::MethodKinds::Constructor &elem) -> std::string
            {
                (void)elem;
                return CppToCSharpUnqualClassName(ParseNameOrThrow(method.ret.cpp_type).parts.back(), is_const);
            },
            [&](const CInterop::MethodKinds::Operator &elem) -> std::string
            {
                (void)elem;
                assert(false); // TODO
                return "";
            },
            [&](const CInterop::MethodKinds::ConversionOperator &elem) -> std::string
            {
                (void)elem;
                assert(false); // TODO
                return "";
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
            ParameterBinding binding = GetParameterBinding(param, method_like);
            if (!binding.strings.extra_comment.empty())
            {
                assert(!binding.strings.extra_comment.starts_with('\n'));
                assert(binding.strings.extra_comment.ends_with('\n'));
                ret += binding.strings.extra_comment;
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

    Generator::ParameterBinding Generator::GetParameterBinding(const CInterop::FuncParam &param, const CInterop::BasicClassMethodLike *method_like, std::optional<std::string> override_name)
    {
        ParameterBinding ret;

        const std::string &param_name = override_name ? *override_name : param.name_or_placeholder;

        // Handle the `this` parameter.
        if (param.is_this_param)
        {
            cppdecl::Type this_type = ParseTypeOrThrow(param.cpp_type);
            assert(this_type.Is<cppdecl::Reference>() != method_like->is_static); // Just for now. Support for explicit `this` parameters can be added later.
            if (this_type.Is<cppdecl::Reference>())
                this_type.RemoveModifier();
            this_type.RemoveQualifiers(cppdecl::CvQualifiers::const_);
            assert(this_type.IsOnlyQualifiedName());

            if (!method_like->is_static)
            {
                ret.strings.dllimport_decl_params = "_Underlying *" + param_name;
                ret.strings.dllimport_args = "_UnderlyingPtr";
            }
        }
        else
        {
            const TypeBinding &param_binding = GetTypeBinding(ParseTypeOrThrow(param.cpp_type), TypeBindingFlagsForParam(param));

            // Note that we don't have fallback between usages with and without default args, unlike in the C generator.
            const auto &param_usage = param.default_arg_affects_parameter_passing ? param_binding.param_usage_with_default_arg : param_binding.param_usage;
            if (!param_usage)
                throw std::runtime_error("This C++ parameter type is known, but this type isn't usable as a parameter type" + std::string(param.default_arg_affects_parameter_passing ? " (with a default argument)" : "") + ".");

            const bool useless_default_arg = param.default_arg_spelling && !param.default_arg_affects_parameter_passing;

            ret.usage = &*param_usage;
            ret.strings = param_usage->make_strings(param_name, useless_default_arg);

            // Validate the default arguments.
            if (!ret.strings.csharp_decl_params.empty())
            {
                std::size_t num_defargs = std::size_t(std::count_if(ret.strings.csharp_decl_params.begin(), ret.strings.csharp_decl_params.end(), [](const TypeBinding::ParamUsage::Strings::CSharpParam &p){return bool(p.default_arg);}));

                // Check that either all of none parameters have default arguments.
                if (num_defargs != 0 && num_defargs != ret.strings.csharp_decl_params.size())
                    throw std::runtime_error("Our bindings map this C++ parameter maps to multiple C# parameters, but produce an inconsistent number of default arguments for those. Either all of them or none should have default arguments.");

                if (num_defargs == 0 && param.default_arg_spelling)
                    throw std::runtime_error("Our bindings fail to generate a default argument for this parameter, even though one is required." + std::string(param.default_arg_affects_parameter_passing ? "" : " (Note that this default argument in C++ doesn't affect the parameter passing style in C because it's trivial enough.)"));
                if (num_defargs > 0 && !param.default_arg_spelling)
                    throw std::runtime_error("Our bindings generate a default argument for this parameter, even though it's not needed.");
            }
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
            const std::string unqual_csharp_name = CppToCsharpIdentifier(cpp_name.parts.back());

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

                file.WriteString(elem.name);
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

    bool Generator::IsConstOrStaticMethodLike(const CInterop::TypeDesc &class_type_desc, const CInterop::BasicClassMethodLike &method_like)
    {
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

    void Generator::EmitMaybeConstCppClass(OutputFile &file, const MaybeConstClass &cl, ClassShadowingData *shadowing_data)
    {
        try
        {
            const cppdecl::QualifiedName cpp_qual_name = ParseNameOrThrow(cl.class_name);
            const std::string cpp_unqual_name = CppdeclToCode(cpp_qual_name.parts.back());
            const std::string unqual_csharp_name = CppToCSharpUnqualClassName(cpp_qual_name.parts.back(), cl.is_const);

            const CInterop::TypeDesc &type_desc = *c_desc.FindTypeOpt(cl.class_name);
            const CInterop::TypeKinds::Class &class_desc = std::get<CInterop::TypeKinds::Class>(type_desc.var);

            // Do we have bindings for `std::shared_ptr<T>`?
            const CInterop::TypeDesc *shared_ptr_desc = GetSharedPtrTypeDescForCppTypeOpt(cl.class_name);
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


            // Begin writing the class.
            file.WriteSeparatingNewline();

            // The comment, if any.
            // This already has a trailing newline and the slashes.
            file.WriteString(class_desc.comment.c_style);
            file.WriteString("/// This is the " + std::string(cl.is_const ? "const" : "non-const") + " half of the class.\n");

            // The class header.
            file.WriteString("public class ");
            file.WriteString(unqual_csharp_name);
            file.WriteString(" : ");

            { // Write the bases.
                auto BaseSeparator = [&, first = true]() mutable
                {
                    if (first)
                        first = false;
                    else
                        file.WriteString(", ");
                };

                if (!cl.is_const)
                {
                    BaseSeparator();

                    // Inherit from the const half.
                    file.WriteString(CppToCSharpUnqualClassName(cpp_qual_name.parts.back(), true));
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
            }
            file.PushScope({}, "\n{\n", "}\n");

            // The underlying pointer.
            // This is done only for the const halves, because the non-const ones can always reuse the pointer from the const half.
            if (cl.is_const)
            {
                file.WriteSeparatingNewline();

                // The opaque struct type for the raw pointer.
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

            // The constructor from a pointer.
            file.WriteSeparatingNewline();
            file.WriteString("internal unsafe " + std::string(unqual_csharp_name) + "(_Underlying *ptr, bool is_owning)");
            if (!cl.is_const)
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

            // Some shared-pointer-specific constructors and factory functions.
            if (shared_ptr_desc)
            {
                // A simple constructor from an existing shared pointer, either owning or not.
                // Note, the parameter name here is `shared_ptr` instead of `ptr` for overload disambiguation when passing null.
                file.WriteSeparatingNewline();
                file.WriteString("internal unsafe " + std::string(unqual_csharp_name) + "(_UnderlyingShared *shared_ptr, bool is_owning)");
                if (cl.is_const)
                    file.WriteString(" : base(is_owning) {_UnderlyingSharedPtr = shared_ptr;}\n");
                else
                    file.WriteString(" : base(shared_ptr, is_owning) {}\n");

                // An aliasing constructor.
                if (cl.is_const)
                {
                    file.WriteSeparatingNewline();

                    // Notice that this returns a non-const type. This allows us to avoid overriding it in the non-const half, and otherwise shouldn't change anything.
                    file.WriteString("internal static unsafe " + CppToCSharpUnqualClassName(cpp_qual_name.parts.back(), false) + " _MakeAliasing(" + sharedptr_constvoid_underlying_ptr_type + "ownership, _Underlying *ptr)\n");
                    file.PushScope({}, "{\n", "}\n");

                    auto dllimport_construct_aliasing = MakeDllImportDecl(c_sharedptr_name.value() + "_ConstructAliasing", "_UnderlyingShared *", RequestHelper("_PassBy") + " ownership_pass_by, " + sharedptr_constvoid_underlying_ptr_type + "ownership, _Underlying *ptr");
                    file.WriteString(dllimport_construct_aliasing.dllimport_decl);
                    file.WriteString("return new(" + dllimport_construct_aliasing.csharp_name + "(" + RequestHelper("_PassBy") + ".copy, ownership, ptr), is_owning: true);\n");

                    file.PopScope();
                }

                // `_LateMakeShared()`, a helper for parsed constructors.
                if (cl.is_const)
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
                    file.WriteString("System.Diagnostics.Trace.Assert(_UnderlyingSharedPtr == null);\n");

                    auto dllimport_construct_owning = MakeDllImportDecl(c_sharedptr_name.value() + "_Construct", "_UnderlyingShared *", "_Underlying *other");
                    file.WriteString(dllimport_construct_owning.dllimport_decl);

                    file.WriteString("_UnderlyingSharedPtr = " + dllimport_construct_owning.csharp_name + "(ptr);\n");

                    file.PopScope();
                }
            }

            // The `IDisposable` implementation and the destructor.
            // We don't need this and can't emit this if the underlying type isn't destructible. In that case we don't emit the constructors as well.
            // Except if we're also using a shared pointer; then we DO need this, as we must destroy the shared pointer even if it's non-owning.
            if (cl.is_const && (type_desc.traits.value().is_destructible || shared_ptr_desc))
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
                    "if (" + std::string(shared_ptr_desc ? "_UnderlyingSharedPtr" : "_UnderlyingPtr") + " == null || !_IsOwningVal)\n"
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

            { // Emit the custom upcasts/downcasts.
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

                        const std::string csharp_base_name = CppToCSharpClassName(ParseNameOrThrow(base_name), cl.is_const);

                        file.WriteString("public static unsafe implicit operator " + csharp_base_name + "(" + unqual_csharp_name + " self)\n");
                        file.PushScope({}, "{\n", "}\n");


                        auto dllimport_decl = MakeDllImportDecl(class_desc.c_name + "_UpcastTo_" + base_desc.c_name, CppToCSharpClassName(ParseNameOrThrow(base_name), cl.is_const) + "._Underlying *", "_Underlying *_this");
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

                        const std::string csharp_base_name = CppToCSharpClassName(ParseNameOrThrow(base_name), cl.is_const);
                        file.WriteString("public static unsafe explicit operator " + unqual_csharp_name + "?(" + csharp_base_name + " parent)\n");
                        file.PushScope({}, "{\n", "}\n");

                        auto dllimport_decl = MakeDllImportDecl(base_desc.c_name + "_DynamicDowncastTo_" + class_desc.c_name, "_Underlying *", CppToCSharpClassName(ParseNameOrThrow(base_name), cl.is_const) + "._Underlying *_this");
                        file.WriteString(dllimport_decl.dllimport_decl);

                        file.WriteString(
                            "var ptr = " + dllimport_decl.csharp_name + "(parent._UnderlyingPtr);\n"
                            "if (ptr == null) return null;\n"
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

            // Emit the fields.
            for (const auto &field : class_desc.fields)
                EmitCppField(file, type_desc, field, cl.is_const, shadowing_data);

            // Emit the methods.
            for (const auto &method : class_desc.methods)
            {
                const bool is_const_or_static = IsConstOrStaticMethodLike(type_desc, method);

                bool should_emit = std::visit(Overload{
                    [&](const CInterop::MethodKinds::Regular &elem)
                    {
                        (void)elem;
                        return true;
                    },
                    [&](const CInterop::MethodKinds::Constructor &elem)
                    {
                        if (!type_desc.traits.value().is_destructible)
                            return false;

                        // A special combined copy/move ctor. We don't emit those directly, instead the copying should be done using the `IClonable` interface.
                        return !elem.is_copying_ctor;
                    },
                    [&](const CInterop::MethodKinds::Operator &elem)
                    {
                        (void)elem;
                        return false; // TODO
                        // return !elem.is_copying_assignment;
                    },
                    [&](const CInterop::MethodKinds::ConversionOperator &elem)
                    {
                        (void)elem;
                        return false; // TODO
                    },
                }, method.var);

                if (!should_emit || (is_const_or_static != cl.is_const && !std::holds_alternative<CInterop::MethodKinds::Constructor>(method.var)))
                    continue;

                FuncLikeEmitter(*this, &method, MakeUnqualCSharpMethodName(method, cl.is_const)).Emit(file, FuncLikeEmitter::ShadowingDesc{.shadowing_data = shadowing_data, .write = cl.is_const});
            }

            // Emit the nested types, if any.
            // C# seems to allow declaring classes directly in interfaces, but accessing them through
            //   the derived class names doesn't work for some reason. So we put them there.
            if (cl.is_const)
                EmitNestedClasses();

            // Emit the custom hardcoded extras.
            if (auto str = GetExtraContentsForParsedClass(ParseNameOrThrow(cl.class_name), cl.is_const); !str.empty())
            {
                assert(!str.starts_with('\n'));
                assert(str.ends_with('\n'));

                file.WriteSeparatingNewline();
                file.WriteString("// Custom extras:\n");
                file.WriteSeparatingNewline();

                file.WriteString(str);
            }

            file.PopScope(); // Pop the class scope.
        }
        catch (...)
        {
            std::throw_with_nested(std::runtime_error("While emitting a wrapper for C++ class `" + cl.class_name + "` (" + (cl.is_const ? "const" : "non-const") + " half):"));
        }
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
        else if (std::holds_alternative<CInterop::TypeKinds::Class>(type_desc.var))
        {
            ClassShadowingData shadowing_data;
            EmitMaybeConstCppClass(file, {.class_name = cpp_type, .is_const = true}, &shadowing_data);
            EmitMaybeConstCppClass(file, {.class_name = cpp_type, .is_const = false}, &shadowing_data);
        }
    }

    bool Generator::IsManagedTypeInCSharp(cppdecl::Type cpp_type)
    {
        cpp_type.RemoveQualifiers(cppdecl::CvQualifiers::const_);

        if (const auto cl = std::get_if<CInterop::TypeKinds::Class>(&c_desc.cpp_types.Map().at(CppdeclToCode(cpp_type)).var))
        {
            switch (cl->kind)
            {
              case CInterop::ClassKind::ref_only:
              case CInterop::ClassKind::uses_pass_by_enum:
              case CInterop::ClassKind::trivial_via_ptr:
                return true;
              case CInterop::ClassKind::exposed_struct:
                return false;
            }
        }

        return false;
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
                if (IsManagedTypeInCSharp(*cpp_type.simple_type.name.parts.at(1).template_args.value().args.at(0).AsType()))
                    return false;
            }
        }

        return true;
    }

    void Generator::EmitCppField(OutputFile &file, const CInterop::TypeDesc &class_type_desc, const CInterop::ClassField &field, bool is_const, ClassShadowingData *shadowing_data)
    {
        try
        {
            // Fields without const getters should be impossible.
            assert(field.getter_const);

            // Those two can never end up null.
            const CInterop::ClassField::Accessor *const_getter = nullptr;
            const CInterop::ClassField::Accessor *mutable_getter = nullptr;

            if (field.getter_mutable && IsConstOrStaticMethodLike(class_type_desc, *field.getter_mutable))
            {
                // If the "mutable" getter can be called on const instances, prefer it for const instances too.
                // Not sure if this ever happens in the C code we emit.
                const_getter = &*field.getter_mutable;
                mutable_getter = &*field.getter_mutable;
            }
            else
            {
                // Use the const getter for the const instances, and the mutable one for mutable instances if it exists.
                const_getter = &*field.getter_const;
                mutable_getter = field.getter_mutable ? &*field.getter_mutable : &*field.getter_const;
            }

            // Those two can end up null.
            const CInterop::ClassField::Accessor *const_setter = nullptr;
            const CInterop::ClassField::Accessor *mutable_setter = nullptr;
            if (field.setter)
            {
                // Allow the setter on const instances if the setter is const.
                if (IsConstOrStaticMethodLike(class_type_desc, *field.setter))
                    const_setter = &*field.setter;

                mutable_setter = &*field.setter;
            }

            auto GetCSharpSetterParameterType = [this](const CInterop::ClassField::Accessor *setter) -> std::optional<std::string>
            {
                if (!setter)
                    return {};
                assert(setter->params.size() == 2 && setter->params.at(0).is_this_param); // `this` and the actual parameter.
                auto csharp_decl_params = GetParameterBinding(setter->params.at(1), setter).strings.csharp_decl_params;
                if (csharp_decl_params.size() == 1)
                    return csharp_decl_params.front().type;
                else
                    return {};
            };

            // Can this field be a property? For that, the C# getter return type must match the C# setter return type,
            //   or the setter must be missing entirely.
            // This has to be true separately for both const getters/setters and mutable getters/setters.
            // We check both, regardless of `is_const`, to consistently use or not use properties in both const and non-const halves of a class.
            bool can_be_property = true;
            // Check const getter and setter.
            if (can_be_property)
            {
                if (auto param_type = GetCSharpSetterParameterType(const_setter); param_type && param_type != GetReturnBinding(const_getter->ret).csharp_return_type)
                    can_be_property = false;
            }
            // Check mutable getter and setter.
            if (can_be_property)
            {
                if (auto param_type = GetCSharpSetterParameterType(mutable_setter); param_type && param_type != GetReturnBinding(mutable_getter->ret).csharp_return_type)
                    can_be_property = false;
            }


            const CInterop::ClassField::Accessor *const maybe_const_getter = is_const ? const_getter : mutable_getter;
            const CInterop::ClassField::Accessor *const maybe_const_setter = is_const ? const_setter : mutable_setter;


            // If this is a property, determine the C# property type.
            // This can be different for const and mutable halves, but this is fine.
            std::optional<std::string> csharp_property_type;
            if (can_be_property)
                csharp_property_type = GetReturnBinding(maybe_const_getter->ret).csharp_return_type;


            // Emit...
            if (can_be_property)
            {
                // Emit as a property.

                // Skip in mutable class if it's the same function as in the const class.
                if (!(!is_const && const_getter == mutable_getter && const_setter == mutable_setter))
                {
                    FuncLikeEmitter emit_getter(*this, maybe_const_getter, "get");

                    std::optional<FuncLikeEmitter> emit_setter;
                    if (maybe_const_setter)
                        emit_setter.emplace(*this, maybe_const_setter, "set");

                    // Write the property:

                    file.WriteString("public ");

                    if (field.is_static)
                        file.WriteString("static ");

                    // Be explicit about the shadowing.
                    if (!is_const)
                        file.WriteString("new ");

                    if (emit_getter.IsUnsafe() || (emit_setter && emit_setter->IsUnsafe()))
                        file.WriteString("unsafe ");

                    // The return type.
                    file.WriteString(csharp_property_type.value());
                    file.WriteString(" ");

                    // The property name.
                    file.WriteString(CppStringToCsharpIdentifier(field.full_name));
                    file.WriteString("\n");

                    file.PushScope({}, "{\n", "}\n");

                    emit_getter.Emit(file, FuncLikeEmitter::ShadowingDesc{.shadowing_data = shadowing_data, .write = is_const});
                    if (emit_setter)
                        emit_setter->Emit(file, FuncLikeEmitter::ShadowingDesc{.shadowing_data = shadowing_data, .write = is_const});

                    file.PopScope();
                }
            }
            else
            {
                // Emit the getter and setter separately, as plain functions.

                // Here we can skip each of the two functions separately in the mutable class, if they are the same as in the const class.

                if (!(!is_const && const_getter == mutable_getter))
                    FuncLikeEmitter(*this, maybe_const_getter, CppStringToCsharpIdentifier("Get_" + field.full_name)).Emit(file, FuncLikeEmitter::ShadowingDesc{.shadowing_data = shadowing_data, .write = is_const});
                if (maybe_const_setter && !(!is_const && const_setter == mutable_setter))
                    FuncLikeEmitter(*this, maybe_const_setter, CppStringToCsharpIdentifier("Set_" + field.full_name)).Emit(file, FuncLikeEmitter::ShadowingDesc{.shadowing_data = shadowing_data, .write = is_const});
            }
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
                helpers_prefix += CppToCsharpIdentifier(elem);
                helpers_prefix += '.';
            }

            // Force `char` to be unsigned, since C# tends to use `byte` for narrow chars.
            c_desc.platform_info.primitive_types.at("char").kind = PrimitiveTypeInfo::Kind::unsigned_integral;
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

                { // Reject nested types. `EmitMaybeConstCppClass()` will emit them recursively by itself.
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
            const auto &regular_func_desc = std::get<CInterop::FuncKinds::Regular>(free_func.var);

            // Open the namespace.
            cppdecl::QualifiedName qual_name = ParseNameOrThrow(regular_func_desc.name);
            assert(!qual_name.parts.empty());
            file.EnsureNamespace(*this, cppdecl::QualifiedName{.parts = {qual_name.parts.begin(), qual_name.parts.end() - 1}});

            FuncLikeEmitter(*this, &free_func, CppToCsharpIdentifier(qual_name.parts.back())).Emit(file);
        }

        // Generate the requested helpers. This must be after all user code generation, but before closing the namespaces.
        GenerateHelpers();

        { // Lastly, close the namespaces in all files.
            for (auto &file : output_files)
                file.second.EnsureNamespace(*this, {});
        }
    }

    void Generator::GenerateHelpers()
    {
        // Don't generate the file if no helpers are needed.
        if (!requested_helpers.empty())
        {
            OutputFile &file = output_files.try_emplace("__common").first->second;

            file.EnsureNamespace(*this, helpers_namespace);

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
                    "        if (_KeepAliveList == null)\n"
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


            { // `InOut`, `InOutOpt`.
                bool need_inout = requested_helpers.erase("InOut");
                bool need_inout_opt = requested_helpers.erase("InOutOpt");
                if (need_inout || need_inout_opt)
                {
                    file.WriteSeparatingNewline();
                    file.WriteString(
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
                            "/// Passing a null `InOutOpt` means \"use default argument\", and passing a one with a null `.Opt` means \"I don't want to input/output via this parameter\".\n"
                            "public class InOutOpt<T> where T: unmanaged\n"
                            "{\n"
                            "    public InOut<T>? Opt;\n"
                            "\n"
                            "    // Use this constructor (by passing `new()`) if you don't want to receive output from this function parameter.\n"
                            "    public InOutOpt() {}\n"
                            "    // Use this constructor (by passing an existing `InOut` instance) if you do want to receive output, into that object.\n"
                            "    public InOutOpt(InOut<T>? NewOpt) {Opt = NewOpt;}\n"
                            "    // An implicit conversion for passing function parameters.\n"
                            "    public static implicit operator InOutOpt<T>(InOut<T>? NewOpt) {return new InOutOpt<T>(NewOpt);}\n"
                            "}\n"
                        );
                    }
                }
            }

            // `InOpt`.
            if (requested_helpers.erase("InOpt"))
            {
                file.WriteSeparatingNewline();
                file.WriteString(
                    "/// This is used for optional parameters with default arguments.\n"
                    "/// Usage:\n"
                    "/// * Pass `null` to use the default argument.\n"
                    "/// * Pass `new()` to pass no object.\n"
                    "/// * Pass an instance of `T` to pass it to the function.\n"
                    "/// Passing a null `InOpt` means \"use default argument\", and passing a one with a null `.Opt` means \"pass nothing to the function\".\n"
                    "public class InOpt<T> where T: unmanaged\n"
                    "{\n"
                    "    public T? Opt;\n"
                    "\n"
                    "    public InOpt() {}\n"
                    "    public InOpt(T NewOpt) {Opt = NewOpt;}\n"
                    "    public static implicit operator InOpt<T>(T NewOpt) {return new InOpt<T>(NewOpt);}\n"
                    "}\n"
                );
            }

            // `InOptClass`.
            if (requested_helpers.erase("InOptClass"))
            {
                file.WriteSeparatingNewline();
                file.WriteString(
                    "/// This is used for optional parameters of class types with default arguments.\n"
                    "/// This needs to be separate from `InOpt`, since the lack of `unmanaged` constraint seems to somehow interfere with the behavior of unmanaged types.\n"
                    "/// Usage:\n"
                    "/// * Pass `null` to use the default argument.\n"
                    "/// * Pass `new()` to pass no object.\n"
                    "/// * Pass an instance of `T` to pass it to the function.\n"
                    "public class InOptClass<T>\n"
                    "{\n"
                    "    public T? Opt;\n"
                    "\n"
                    "    public InOptClass() {}\n"
                    "    public InOptClass(T NewOpt) {Opt = NewOpt;}\n"
                    "    public static implicit operator InOptClass<T>(T NewOpt) {return new InOptClass<T>(NewOpt);}\n"
                    "}\n"
                );
            }

            // `Ref`.
            if (requested_helpers.erase("Ref"))
            {
                file.WriteSeparatingNewline();
                file.WriteString(
                    "/// A reference to a C object. This is used to return optional references, since `ref` can't be nullable.\n"
                    "/// This object itself isn't nullable, we return `Ref<T>?` when nullability is needed.\n"
                    "public unsafe class Ref<T> where T: unmanaged\n"
                    "{\n"
                    "    /// Should never be null.\n"
                    "    private T *Ptr;\n"
                    "    /// Should never be given a null pointer. I would pass `ref T`, but this prevents the address from being taken without `fixed`.\n"
                    "    internal Ref(T *NewPtr)\n"
                    "    {\n"
                    "        System.Diagnostics.Trace.Assert(NewPtr != null);\n"
                    "        Ptr = NewPtr;\n"
                    "    }\n"
                    "\n"
                    "    public ref T Value => ref *Ptr;\n"
                    "}\n"
                );
            }

            // `ByValue` and friends.
            // Intentionally using `|` to not short-circuit erasures.
            if (requested_helpers.erase("ByValue") | requested_helpers.erase("_PassBy"))
            {
                file.WriteSeparatingNewline();
                file.WriteString(
                    "/// This is used as a function parameter when the underlying function receives a non-trivial C++ class by value.\n"
                    "/// Usage:\n"
                    "/// * Pass `new()` to default-construct the instance.\n"
                    "/// * Pass an instance of `T` to copy it into the function.\n"
                    "/// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.\n"
                    "///   Be careful if your input isn't a unique reference to this object.\n"
                    "/// * Pass `null` to use the default argument, assuming the parameter is nullable and has a default argument.\n"
                    "public readonly struct ByValue<T, ConstT> where T: ConstT\n"
                    "{\n"
                    "    internal readonly ConstT? Value;\n"
                    "    internal readonly _PassBy PassByMode;\n"
                    "    public ByValue() {PassByMode = _PassBy.default_construct;}\n"
                    "    public ByValue(ConstT NewValue) {Value = NewValue; PassByMode = _PassBy.copy;}\n"
                    "    public ByValue(_Moved<T> Moved) {Value = Moved.Value; PassByMode = _PassBy.move;}\n"
                    "    public static implicit operator ByValue<T, ConstT>(ConstT Arg) {return new ByValue<T, ConstT>(Arg);}\n"
                    "    public static implicit operator ByValue<T, ConstT>(_Moved<T> Arg) {return new ByValue<T, ConstT>(Arg);}\n"
                    "}\n"
                    "\n"
                    "/// This can be used with `ByValue<...>` function parameters, to indicate that the argument should be moved.\n"
                    "/// See that struct for a longer explanation.\n"
                    "public static _Moved<T> Move<T>(T NewValue) {return new(NewValue);}\n"
                    "\n"
                    "/// Don't use directly, this is the return type of `Move()`. See that for explanation.\n"
                    "public readonly struct _Moved<T>\n"
                    "{\n"
                    "    internal readonly T Value;\n"
                    "    internal _Moved(T NewValue) {Value = NewValue;}\n"
                    "}\n"
                    "\n"
                    "internal enum _PassBy : int\n" // This enum must be synced with `CInterop::PassBy`.`
                    "{\n"
                    "    default_construct,\n"
                    "    copy,\n"
                    "    move,\n"
                    "    default_arg,\n"
                    "    no_object,\n"
                    "}\n"
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
                        "    public ReadOnlySpanOpt(T[]? arr) {HasValue = arr != null; Span = arr;}\n"
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
                        "    public ReadOnlyCharSpanOpt(char[]? arr) {HasValue = arr != null; Span = arr;}\n"
                        "    public ReadOnlyCharSpanOpt(ReadOnlySpan<char> span) {HasValue = true; Span = span;}\n"
                        "    public ReadOnlyCharSpanOpt(string? str) {HasValue = str != null; Span = str;}\n"
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
    }
}
