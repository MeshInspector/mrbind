#include "generator.h"
#include "common/string_escape.h"

#include <cppdecl/declarations/parse.h>

#include <numeric>

namespace mrbind::CSharp
{
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

    void OutputFile::EnsureNamespace(std::span<const cppdecl::UnqualifiedName> new_namespace)
    {
        if (new_namespace.empty())
        {
            // Pop any existing namespaces.
            while (!current_scope.empty())
                PopScope();
            return;
        }

        for (std::size_t i = 0; i < new_namespace.size(); i++)
        {
            if (i < current_scope.size() && current_scope[i].name == new_namespace[i])
                continue; // This namespace is already open, nothing to do.

            // Pop any existing namespaces.
            while (i < current_scope.size())
                PopScope();

            // Push new ones, assuming those are plain namespaces.
            // Since C# namespaces can only contain classes, and not e.g. free functions, we instead use partial classes.
            // "Partial" you can reopen them later to add more members.
            PushScope(new_namespace[i], "public static partial class " + CppdeclToIdentifier(new_namespace[i]) + "\n{\n", "}\n");
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

    std::string Generator::CppToCSharpEnumName(const cppdecl::QualifiedName &name)
    {
        std::string ret;
        for (std::size_t i = 0; i < name.parts.size(); i++)
        {
            if (i > 0)
                ret += '.'; // We don't use actual namespaces in C# (which would require `::`). Since we only use static classes, we can use `.` everywhere.

            ret += CppdeclToIdentifier(name.parts[i]);
        }
        return ret;
    }

    std::string Generator::CppToCSharpClassName(const cppdecl::QualifiedName &name, bool is_const)
    {
        std::string ret;
        for (std::size_t i = 0; i < name.parts.size(); i++)
        {
            if (i > 0)
                ret += '.'; // We don't use actual namespaces in C# (which would require `::`). Since we only use static classes, we can use `.` everywhere.

            std::string part = CppdeclToIdentifier(name.parts[i]);

            if (i + 1 == name.parts.size())
                part = CppToCSharpUnqualClassName(part, is_const);

            ret += part;
        }
        return ret;
    }

    std::string Generator::CppToCSharpUnqualClassName(std::string_view name, bool is_const)
    {
        return is_const ? "Const" + std::string(name) : std::string(name);
    }

    std::string Generator::CppToCSharpInterfaceName(const cppdecl::QualifiedName &name, bool is_const)
    {
        std::string ret;
        for (std::size_t i = 0; i < name.parts.size(); i++)
        {
            if (i > 0)
                ret += '.'; // We don't use actual namespaces in C# (which would require `::`). Since we only use static classes, we can use `.` everywhere.

            std::string part = CppdeclToIdentifier(name.parts[i]);

            if (i + 1 == name.parts.size())
                part = CppToCSharpUnqualInterfaceName(part, is_const);

            ret += part;
        }
        return ret;
    }

    std::string Generator::CppToCSharpUnqualInterfaceName(std::string_view name, bool is_const)
    {
        return "I" + CppToCSharpUnqualClassName(name, is_const);
    }

    std::string Generator::CppClassToCSharpGetUnderlyingMethodName(const cppdecl::QualifiedName &name)
    {
        return "_GetUnderlying_" + CppdeclToIdentifier(name);
    }

    const TypeBinding &Generator::GetTypeBinding(const cppdecl::Type &cpp_type, bool enable_sugar)
    {
        if (auto opt = GetTypeBindingOpt(cpp_type, enable_sugar))
            return *opt;
        else
            throw std::runtime_error("Don't know how to bind C++ type `" + CppdeclToCode(cpp_type) + "`" + (enable_sugar ? " (with sugar enabled)" : "") + ".");
    }

    const TypeBinding *Generator::GetTypeBindingOpt(const cppdecl::Type &cpp_type, bool enable_sugar)
    {
        const std::string cpp_type_str = CppdeclToCode(cpp_type);
        auto cached_iter = cached_type_bindings.find(std::pair(cpp_type_str, enable_sugar));
        if (cached_iter != cached_type_bindings.end())
            return &cached_iter->second;

        try
        {
            auto CreateBinding = [&](TypeBinding new_binding) -> const TypeBinding *
            {
                auto [iter, is_new] = cached_type_bindings.try_emplace(std::pair(cpp_type_str, enable_sugar), std::move(new_binding));
                assert(is_new);
                return &iter->second;
            };

            const CInterop::TypeDesc *c_type_desc = c_desc.FindTypeOpt(cpp_type_str);

            if (!enable_sugar && c_type_desc)
            {
                // Makes a by-value binding for an arithmetic type or a enum.
                // If `fix_input` is specified, it should return an extra statement for parameters' `extra_statements`.
                // The result should be terminated with a newline, and you can read/write `name` in your statement.
                // NOTE: The `fix_input` lambda is preserved, make sure it doesn't dangle.
                auto MakeScalarByValueBinding = [&](const std::string &csharp_type, std::function<std::string(const std::string &name)> fix_input = nullptr) -> TypeBinding
                {
                    return {
                        .param_usage = TypeBinding::ParamUsage{
                            .make_strings = [csharp_type, fix_input](const std::string &name, bool &/*have_useless_defarg*/)
                            {
                                return TypeBinding::ParamUsage::Strings{
                                    .dllimport_decl_params = csharp_type + ' ' + name,
                                    .csharp_decl_params = csharp_type + ' ' + name,
                                    .extra_statements = fix_input ? fix_input(name) : "",
                                    .dllimport_args = name,
                                };
                            },
                        },
                        .param_usage_with_default_arg = TypeBinding::ParamUsage{
                            .make_strings = [csharp_type, fix_input](const std::string &name, bool &/*have_useless_defarg*/)
                            {
                                return TypeBinding::ParamUsage::Strings{
                                    .dllimport_decl_params = csharp_type + " *" + name, // No const pointers in C#.
                                    .csharp_decl_params = csharp_type + "? " + name + " = null",
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
                                    .make_strings = [](const std::string &name, bool &/*have_useless_defarg*/)
                                    {
                                        return TypeBinding::ParamUsage::Strings{
                                            .dllimport_decl_params = "byte " + name,
                                            .csharp_decl_params = "bool " + name,
                                            .dllimport_args = name + " ? (byte)1 : (byte)0",
                                        };
                                    },
                                },
                                .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                    .make_strings = [](const std::string &name, bool &/*have_useless_defarg*/)
                                    {
                                        return TypeBinding::ParamUsage::Strings{
                                            .dllimport_decl_params = "byte *" + name, // No const pointers in C#.
                                            .csharp_decl_params = "bool? " + name + " = null",
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

                        const std::string csharp_interface = CppToCSharpInterfaceName(cpp_type.simple_type.name, false);
                        const std::string csharp_type = CppToCSharpClassName(cpp_type.simple_type.name, false);
                        const std::string csharp_underlying_ptr_method = CppClassToCSharpGetUnderlyingMethodName(cpp_type.simple_type.name);

                        switch (elem.kind)
                        {
                          case CInterop::ClassKind::ref_only:
                            throw std::runtime_error("The class marked as `ClassKind::ref_only`, but it's being passed by value.");
                            break;
                          case CInterop::ClassKind::uses_pass_by_enum:
                            // TODO
                            throw std::logic_error("Not implemented yet!");
                            break;
                          case CInterop::ClassKind::trivial_via_ptr:
                            return CreateBinding({
                                .param_usage = TypeBinding::ParamUsage{
                                    .make_strings = [csharp_type, csharp_interface, csharp_underlying_ptr_method](const std::string &name, bool &/*have_useless_defarg*/)
                                    {
                                        return TypeBinding::ParamUsage::Strings{
                                            .dllimport_decl_params = csharp_interface + "._Underlying *" + name,
                                            .csharp_decl_params = csharp_type + ' ' + name,
                                            .dllimport_args = name + "." + csharp_underlying_ptr_method + "()",
                                        };
                                    },
                                },
                                .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                    .make_strings = [csharp_type, csharp_interface, csharp_underlying_ptr_method](const std::string &name, bool &/*have_useless_defarg*/)
                                    {
                                        return TypeBinding::ParamUsage::Strings{
                                            .dllimport_decl_params = csharp_interface + "._Underlying *" + name,
                                            .csharp_decl_params = csharp_type + "? " + name + " = null",
                                            .dllimport_args = name + " != null ? " + name + "." + csharp_underlying_ptr_method + "() : null",
                                        };
                                    },
                                },
                                .return_usage = TypeBinding::ReturnUsage{
                                    .dllimport_return_type = csharp_interface + "._Underlying *",
                                    .csharp_return_type = csharp_type,
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
                                if (!is_const)
                                {
                                    return {
                                        .param_usage = TypeBinding::ParamUsage{
                                            .make_strings = [this, csharp_type, fix_input](const std::string &name, bool &have_useless_defarg)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .dllimport_decl_params = csharp_type + " *" + name,
                                                    .csharp_decl_params = RequestHelper("InOut") + "<" + csharp_type + ">? " + name + (std::exchange(have_useless_defarg, false) ? " = null" : ""),
                                                    .extra_statements =
                                                        csharp_type + " __value_" + name + " = " + name + " != null ? " + name + ".Value : default(" + csharp_type + ");\n" +
                                                        (fix_input ? fix_input("__value_" + name) : ""),
                                                    .dllimport_args = name + " != null ? &__value_" + name + " : null",
                                                    .extra_statements_after = "if (" + name + " != null) " + name + ".Value = __value_" + name + ";\n",
                                                };
                                            },
                                        },
                                        .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                            .make_strings = [this, csharp_type, fix_input](const std::string &name, bool &/*have_useless_defarg*/)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .dllimport_decl_params = csharp_type + " **" + name,
                                                    .csharp_decl_params = RequestHelper("InOutOpt") + "<" + csharp_type + ">? " + name + " = null",
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
                                            .make_strings = [csharp_type, fix_input](const std::string &name, bool &have_useless_defarg)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .dllimport_decl_params = csharp_type + " *" + name, // No const pointers in C#.
                                                    .csharp_decl_params = csharp_type + "? " + name + (std::exchange(have_useless_defarg, false) ? " = null" : ""),
                                                    .extra_statements =
                                                        csharp_type + " __deref_" + name + " = " + name + ".GetValueOrDefault();\n" +
                                                        (fix_input ? fix_input("__deref_" + name) : ""),
                                                    .dllimport_args = name + ".HasValue ? &__deref_" + name + " : null",
                                                };
                                            },
                                        },
                                        .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                            .make_strings = [this, csharp_type, fix_input](const std::string &name, bool &/*have_useless_defarg*/)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .dllimport_decl_params = csharp_type + " **" + name, // No const pointers in C#.
                                                    .csharp_decl_params = RequestHelper("InOpt") + "<" + csharp_type + ">? " + name + " = null",
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
                                    return CreateBinding(MakeScalarPtrBinding(cpp_underlying_type_str));
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
                                [&](const CInterop::TypeKinds::Class &) -> const TypeBinding *
                                {
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
                                            .make_strings = [csharp_type, fix_input](const std::string &name, bool &/*have_useless_defarg*/)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .dllimport_decl_params = csharp_type + " *" + name,
                                                    .csharp_decl_params = "ref " + csharp_type + " " + name,
                                                    .scope_open = "fixed (" + csharp_type + " *__ptr_" + name + " = &" + name + ") {\n",
                                                    .extra_statements = fix_input ? fix_input(name) : "",
                                                    .dllimport_args = "__ptr_" + name,
                                                    .scope_close = "} // fixed __ptr_" + name + "\n",
                                                };
                                            },
                                        },
                                        .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                            .make_strings = [this, csharp_type, fix_input](const std::string &name, bool &/*have_useless_defarg*/)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .dllimport_decl_params = csharp_type + " *" + name,
                                                    // Must pass a class because C# `ref` parameters can't have default arguments, and and we can't just tell the user
                                                    //   to pass a placeholder, because we might have proper default arguments before this one, so omitting the default argument here
                                                    //   would cause a compilation error.
                                                    .csharp_decl_params = RequestHelper("InOut") + "<" + csharp_type + ">? " + name + " = null",
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
                                            .make_strings = [csharp_type, fix_input](const std::string &name, bool &/*have_useless_defarg*/)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .dllimport_decl_params = csharp_type + " *" + name, // No const pointers in C#.
                                                    .csharp_decl_params = csharp_type + " " + name,
                                                    .extra_statements = fix_input ? fix_input(name) : "",
                                                    .dllimport_args = "&" + name,
                                                };
                                            },
                                        },
                                        .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                            .make_strings = [csharp_type, fix_input](const std::string &name, bool &/*have_useless_defarg*/)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .dllimport_decl_params = csharp_type + " *" + name, // No const pointers in C#.
                                                    .csharp_decl_params = csharp_type + "? " + name + " = null",
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
                                    return CreateBinding(MakeScalarRefBinding(cpp_underlying_type_str));
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
                                    (void)elem;
                                    #if 0
                                    if (!cpp_underlying_type.IsOnlyQualifiedName())
                                        throw std::runtime_error("The referenced type is marked `TypeKinds::Class`, but its name isn't just a qualified name.");

                                    const std::string csharp_interface = CppToCSharpInterfaceName(cpp_underlying_type.simple_type.name);
                                    const std::string csharp_type = CppToCSharpName(cpp_underlying_type.simple_type.name);
                                    const std::string csharp_underlying_ptr_method = CppClassToCSharpGetUnderlyingMethodName(cpp_underlying_type.simple_type.name);

                                    switch (elem.kind)
                                    {
                                      case CInterop::ClassKind::uses_pass_by_enum:
                                        // TODO
                                        throw std::logic_error("Not implemented yet!");
                                        break;
                                      case CInterop::ClassKind::ref_only:
                                      case CInterop::ClassKind::trivial_via_ptr:
                                        return CreateBinding({
                                            .param_usage = TypeBinding::ParamUsage{
                                                .make_strings = [csharp_type, csharp_interface, csharp_underlying_ptr_method](const std::string &name, bool &/*have_useless_defarg*/)
                                                {
                                                    return TypeBinding::ParamUsage::Strings{
                                                        .dllimport_decl_params = csharp_interface + "._Underlying *" + name,
                                                        .csharp_decl_params = csharp_type + ' ' + name,
                                                        .dllimport_args = name + "." + csharp_underlying_ptr_method + "()",
                                                    };
                                                },
                                            },
                                            .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                                .make_strings = [csharp_type, csharp_interface, csharp_underlying_ptr_method](const std::string &name, bool &/*have_useless_defarg*/)
                                                {
                                                    return TypeBinding::ParamUsage::Strings{
                                                        .dllimport_decl_params = csharp_interface + "._Underlying *" + name,
                                                        .csharp_decl_params = csharp_type + "? " + name + " = null",
                                                        .dllimport_args = name + " != null ? " + name + "." + csharp_underlying_ptr_method + "() : null",
                                                    };
                                                },
                                            },
                                            .return_usage = TypeBinding::ReturnUsage{
                                                .dllimport_return_type = csharp_interface + "._Underlying *",
                                                .csharp_return_type = csharp_type,
                                                .make_return_expr = [is_const](const std::string &expr)
                                                {
                                                    return "return new(" + expr + ", is_owning: false, is_const: " + (is_const ? "true" : "false") + ");";
                                                },
                                            },
                                        });

                                        break;
                                      case CInterop::ClassKind::exposed_struct:
                                        // TODO
                                        throw std::logic_error("Not implemented yet!");
                                        break;
                                    }
                                    #endif
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

            return {};
        }
        catch (...)
        {
            std::throw_with_nested(std::runtime_error("While obtaining the binding for type `" + cpp_type_str + "`" + (enable_sugar ? " (with sugar)" : "") + ":"));
        }
    }

    std::string Generator::RequestHelper(const std::string &name)
    {
        requested_helpers.insert(name);
        return helpers_prefix + name;
    }

    void Generator::EmitCFuncLike(OutputFile &file, AnyFuncLikePtr any_func_like, std::string_view csharp_name)
    {
        const CInterop::BasicFuncLike &func_like = *std::visit([](auto ptr) -> const CInterop::BasicFuncLike * {return ptr;}, any_func_like);
        const CInterop::BasicClassMethodLike *method_like = std::visit(Overload{
            [](const CInterop::BasicClassMethodLike *ptr) -> const CInterop::BasicClassMethodLike * {return ptr;},
            [](const CInterop::Function *) -> const CInterop::BasicClassMethodLike * {return nullptr;},
        }, any_func_like);

        try
        {
            // Find the return type binding.
            const TypeBinding &ret_binding = GetTypeBinding(ParseTypeOrThrow(func_like.ret.cpp_type), func_like.ret.uses_sugar);
            if (!ret_binding.return_usage)
                throw std::runtime_error("The C++ return type `" + func_like.ret.cpp_type + "`" + (func_like.ret.uses_sugar ? " (with sugar enabled)" : "") + " is known, but isn't usable as a return type.");

            // Generate the parameter strings.
            std::string dllimport_param_string;
            std::vector<const TypeBinding::ParamUsage *> param_usages;
            std::vector<TypeBinding::ParamUsage::Strings> param_strings;
            param_usages.reserve(func_like.params.size());
            param_strings.reserve(func_like.params.size());
            for (const auto &param : func_like.params)
            {
                std::size_t visual_index = param_strings.size() + 1;
                try
                {
                    auto param_binding = GetParameterBinding(param, method_like);

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
            const auto dllimport_strings = MakeDllImportDecl(func_like.c_name, ret_binding.return_usage->dllimport_return_type, dllimport_param_string);

            // Write a separating empty line if needed.
            file.WriteSeparatingNewline();

            // Write the comment.
            file.WriteString(MakeFuncComment(any_func_like));

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
            if (!method_like || method_like->is_static)
                file.WriteString("static ");

            // Virtual?
            if (method_like && method_like->is_virtual)
                file.WriteString("virtual ");

            // Unsafe?
            if (dllimport_strings.is_unsafe)
                file.WriteString("unsafe ");

            // Note, not emitting `virtual` here, because it's useless in the interfaces.
            // We do emit it when explicitly inheriting each method in the derived classes.

            // Write the return type.
            file.WriteString(ret_binding.return_usage->csharp_return_type);
            file.WriteString(" ");

            // Write the C# name.
            file.WriteString(csharp_name);

            { // Write the parameter list.
                file.WriteString("(");

                bool first = true;
                for (const auto &param : param_strings)
                {
                    if (param.csharp_decl_params.empty())
                        continue;

                    if (first)
                        first = false;
                    else
                        file.WriteString(", ");

                    file.WriteString(param.csharp_decl_params);
                }

                file.WriteString(")\n");
            }

            // Begin function body.
            file.PushScope({}, "{\n", "}\n");

            // The `DllImport` declaration.
            file.WriteString(dllimport_strings.dllimport_decl);

            std::string extra_statements;
            std::string extra_statements_after;
            int num_scopes_to_pop = 0;

            // Any extra statements from the parameters?
            {
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
                if (extra_statements_after.empty() && !ret_binding.return_usage->needs_temporary_variable)
                {
                    // Return the call directly.
                    file.WriteString(extra_statements);
                    file.WriteString(ret_binding.return_usage->MakeReturnExpr(expr) + '\n');
                }
                else
                {
                    // Store the result to a temporary variable (if not void), run some custom code, and then return.
                    std::string ret_expr = ret_binding.return_usage->MakeReturnExpr("__ret");

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
            std::throw_with_nested(std::runtime_error("While emitting a wrapper for C function `" + func_like.c_name + "`:"));
        }
    }

    std::string Generator::MakeUnqualCSharpMethodName(const CInterop::ClassMethod &method)
    {
        return std::visit(Overload{
            [&](const CInterop::MethodKinds::Regular &elem) -> std::string
            {
                return elem.name;
            },
            [&](const CInterop::MethodKinds::Constructor &elem) -> std::string
            {
                (void)elem;
                assert(false); // TODO
                return "";
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

    Generator::InheritedMethodStrings Generator::MakeInheritedMethod(const CInterop::ClassMethod &method, std::string_view base_name)
    {
        const std::string unqual_method_name = MakeUnqualCSharpMethodName(method);

        InheritedMethodStrings ret;

        try
        {
            ret.header += "public ";

            if (method.is_static)
                ret.header += "static ";

            // The return type.
            const TypeBinding &ret_binding = GetTypeBinding(ParseTypeOrThrow(method.ret.cpp_type), method.ret.uses_sugar);
            if (!ret_binding.return_usage)
                throw std::runtime_error("The C++ return type `" + method.ret.cpp_type + "`" + (method.ret.uses_sugar ? " (with sugar enabled)" : "") + " is known, but isn't usable as a return type.");
            ret.header += ret_binding.return_usage->csharp_return_type;
            ret.header += ' ';

            // The method name.
            ret.header += unqual_method_name;

            // Begin the parameter list.
            ret.header += '(';


            // Begin assembling the body.
            ret.body += " => ";

            // Do we return by reference?
            if (ret_binding.return_usage->csharp_return_type.starts_with("ref "))
                ret.body += "ref ";

            // The object we're calling this on.
            if (method.is_static)
            {
                ret.body += base_name;
            }
            else
            {
                ret.body += "((";
                ret.body += base_name;
                ret.body += ")this)";
            }

            // The member we're calling.
            ret.body += '.';
            ret.body += unqual_method_name;

            // Begin the argument list.
            ret.body += '(';

            // Handle the parameters.
            for (std::size_t visual_index = 1; const auto &param : method.params)
            {
                try
                {
                    // Handle the `this` parameter.
                    if (!param.is_this_param)
                    {
                        auto param_binding = GetParameterBinding(param, &method);

                        if (!param_binding.strings.csharp_decl_params.empty())
                        {
                            if (!ret.header.ends_with('('))
                                ret.header += ", ";
                            ret.header += param_binding.strings.csharp_decl_params;

                            if (!ret.body.ends_with('('))
                                ret.body += ", ";
                            Strings::Split(param_binding.strings.csharp_decl_params, ",", [&](std::string_view part) -> bool
                            {
                                while (part.starts_with(' '))
                                    part.remove_prefix(1);
                                while (part.ends_with(' '))
                                    part.remove_suffix(1);

                                if (part.starts_with("ref "))
                                    ret.body += "ref ";

                                std::string_view name;

                                // Find the name as the substring after the last space.
                                if (auto sep = part.find_last_of(' '); sep != std::string_view::npos)
                                    name = part.substr(sep + 1);
                                else
                                    name = part;

                                ret.body += name;

                                return false;
                            });
                        }
                    }
                }
                catch (...)
                {
                    std::throw_with_nested(std::runtime_error("While handling parameter " + std::to_string(visual_index) + " out of " + std::to_string(method.params.size()) + ", of type `" + param.cpp_type + "`" + (param.uses_sugar ? " (with sugar enabled)" : "") + ":"));
                }

                visual_index++;
            }

            // Close the parameter list and the argument list.
            ret.header += ')';
            ret.body += ");\n";


            // Lastly, make the comment.
            ret.comment = MakeFuncComment(&method);
        }
        catch (...)
        {
            std::throw_with_nested(std::runtime_error("While emitting an inheritance wrapper for method `" + unqual_method_name + "`:"));
        }

        return ret;
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
            ParameterBinding binding = GetParameterBinding(param, method_like);
            if (!binding.strings.extra_comment.empty())
            {
                assert(!binding.strings.extra_comment.starts_with('\n'));
                assert(binding.strings.extra_comment.ends_with('\n'));
                ret += binding.strings.extra_comment;
            }
        }

        // Comments for default arguments, if any.
        for (const auto &param : func_like.params)
        {
            // This message is only truly needed for non-trivial default arguments.
            if (param.default_arg_affects_parameter_passing)
                ret += "/// Parameter `" + param.name_or_placeholder + "` defaults to `" + *param.default_arg_spelling + "`.\n";
        }

        return ret;
    }

    Generator::ParameterBinding Generator::GetParameterBinding(const CInterop::FuncParam &param, const CInterop::BasicClassMethodLike *method_like)
    {
        ParameterBinding ret;

        // Handle the `this` parameter.
        if (param.is_this_param)
        {
            cppdecl::Type this_type = ParseTypeOrThrow(param.cpp_type);
            assert(this_type.Is<cppdecl::Reference>()); // Just for now. Support for explicit `this` parameters can be added later.
            if (this_type.Is<cppdecl::Reference>())
                this_type.RemoveModifier();
            this_type.RemoveQualifiers(cppdecl::CvQualifiers::const_);
            assert(this_type.IsOnlyQualifiedName());

            if (!method_like->is_static)
            {
                ret.strings.dllimport_decl_params = "_Underlying *" + param.name_or_placeholder;
                ret.strings.dllimport_args = CppClassToCSharpGetUnderlyingMethodName(this_type.simple_type.name) + "()";
            }
        }
        else
        {
            const TypeBinding &param_binding = GetTypeBinding(ParseTypeOrThrow(param.cpp_type), param.uses_sugar);

            // Note that we don't have fallback between usages with and without default args, unlike in the C generator.
            const auto &param_usage = param.default_arg_affects_parameter_passing ? param_binding.param_usage_with_default_arg : param_binding.param_usage;
            if (!param_usage)
                throw std::runtime_error("This C++ parameter type is known, but this type isn't usable as a parameter type" + std::string(param.default_arg_affects_parameter_passing ? " (with a default argument)" : "") + ".");

            const bool useless_default_arg = param.default_arg_spelling && !param.default_arg_affects_parameter_passing;
            bool useless_default_arg_var = useless_default_arg;

            ret.usage = &*param_usage;
            ret.strings = param_usage->make_strings(param.name_or_placeholder, useless_default_arg_var);

            // Check that the callback handled our useless default arg, if any.
            if (useless_default_arg && useless_default_arg_var)
                throw std::runtime_error("This parameter has a default argument that doesn't affect parameter passing, but this type binding doesn't understand those.");
        }

        return ret;
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

    void Generator::EmitCEnum(OutputFile &file, const CInterop::TypeKinds::Enum &enum_desc, std::string_view prefix, std::string_view csharp_name)
    {
        try
        {
            // A separator?
            file.WriteSeparatingNewline();

            // A comment?
            file.WriteString(enum_desc.comment.c_style);

            const PrimitiveTypeInfo::Kind underlying_kind = c_desc.platform_info.FindPrimitiveType(enum_desc.underlying_type)->kind;
            // If the underlying type is `bool`, mention this in a comment, because in C# we'll use `byte` (it doesn't allow `bool`).
            if (underlying_kind == PrimitiveTypeInfo::Kind::boolean)
                file.WriteString("/// This enum is intended to be boolean.\n");

            // The custom prefix, if any.
            if (!prefix.empty())
            {
                file.WriteString(prefix);
                file.WriteString(" ");
            }

            // The declaration header. We always force the underlying type, just in case.
            file.WriteString("enum ");
            file.WriteString(csharp_name);
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
            std::throw_with_nested(std::runtime_error("While emitting a wrapper for C enum `" + enum_desc.c_name + "`:"));
        }
    }

    const Generator::EmittedClassInfo &Generator::GetEmittedClassInfo(const MaybeConstClass &cl)
    {
        // Not immediately doing `try_emplace()` to intentionally get an infinite recursion if there's a cycle somehow.
        auto iter = cached_emitted_class_info.find(cl);
        if (iter != cached_emitted_class_info.end())
            return iter->second;

        EmittedClassInfo ret;

        const CInterop::TypeDesc *type_desc = c_desc.FindTypeOpt(cl.class_name);
        if (!type_desc)
            throw std::logic_error("Trying to emit C++ class `" + cl.class_name + "`, but it doesn't appear in the input JSON.");

        const auto *class_desc = std::get_if<CInterop::TypeKinds::Class>(&type_desc->var);
        if (!class_desc)
            throw std::logic_error("Trying to emit C++ class `" + cl.class_name + "`, but in the input JSON it's marked as something other than a class.");

        { // Figure out the bases.
            bool first = true;

            // The primary base of a non-const class is its const counterpart.
            if (!cl.is_const)
            {
                ret.base_class = cl;
                ret.base_class->is_const = true;
                first = false;
            }

            // For now we just iterate over all direct bases, both virtual and non-virtual.
            // All interface inheritance in C# is virtual. You can't inherit from multiple classes, so it can only be said to be virtual for interfaces.
            // In theory we could skip virtual bases if they were already inherited earlier in the inheritance hierarchy, but this doesn't see to actually do anything,
            //   other than skipping some redundant interface inheritance, that does nothing anyway.
            // So for now we don't do it.
            for (const auto &base : class_desc->inheritance_info.bases_direct_combined.Vec())
            {
                // If we didn't have a base class yet, make this the single base class. Otherwise an interface.
                if (first)
                {
                    first = false;
                    ret.base_class = MaybeConstClass{.class_name = base, .is_const = cl.is_const};
                }
                else
                {
                    ret.base_interfaces.push_back(MaybeConstClass{.class_name = base, .is_const = cl.is_const});
                }
            }
        }

        // Figure out the direct methods.
        for (const auto &method : class_desc->methods)
        {
            bool is_const_or_static = method.is_static;
            if (!is_const_or_static)
            {
                // Check if the `this` parameter is const.
                assert(!method.params.empty() && method.params.front().is_this_param);
                if (!method.params.empty() && method.params.front().is_this_param)
                {
                    cppdecl::Type type = ParseTypeOrThrow(method.params.front().cpp_type);
                    if (type.Is<cppdecl::Reference>())
                    {
                        is_const_or_static = type.IsConst(1);
                    }
                    else
                    {
                        // A by-value parameter.
                        // This branch will be useful when we eventually (hopefully) add support for explicit object parameters.
                        // For now it should be unreachable.
                        assert(type.modifiers.empty());
                        is_const_or_static = true; // This is considered `const`.
                    }
                }
            }

            bool should_emit = std::visit(Overload{
                [&](const CInterop::MethodKinds::Regular &elem)
                {
                    (void)elem;
                    return true;
                },
                [&](const CInterop::MethodKinds::Constructor &elem)
                {
                    (void)elem;
                    return false; // TODO allow constructors
                },
                [&](const CInterop::MethodKinds::Operator &elem)
                {
                    (void)elem;
                    return false; // TODO
                    // return !elem.is_special_assignment;
                },
                [&](const CInterop::MethodKinds::ConversionOperator &elem)
                {
                    (void)elem;
                    return false; // TODO
                },
            }, method.var);

            if (!should_emit || is_const_or_static != cl.is_const)
                continue;

            // We rely on pointer stability of the input.
            ret.direct_methods.push_back(&method);
        }


        // Figure out the combined methods.

        const EmittedClassInfo *base_info = nullptr;
        if (ret.base_class)
            base_info = &GetEmittedClassInfo(*ret.base_class);

        // Firstly, copy the methods from the base, if any.
        if (base_info)
        {
            ret.combined_methods = base_info->combined_methods;

            // The directly inherited methods don't need to be reimplemented.
            for (auto it = ret.combined_methods.MutableMapBegin(); it != ret.combined_methods.MutableMapEnd(); ++it)
                it->second.need_implementation = false;
        }

        // Add direct methods, replacing the ones from the base class.
        for (const CInterop::ClassMethod *method : ret.direct_methods)
        {
            EmittedClassInfo::MaybeInheritedMethod &new_method = ret.combined_methods.TryEmplace(MakeUnqualCSharpMethodName(*method)).first;
            // Hmm, do I pass this class or this interface? Interface should result in less wrapper depth, so it's probably better?
            new_method.method = MakeInheritedMethod(*method, CppToCSharpInterfaceName(ParseNameOrThrow(cl.class_name), cl.is_const));
            new_method.need_implementation = true;
        }

        // Add methods from inherited interfaces.
        for (const MaybeConstClass &base_interface : ret.base_interfaces)
        {
            const EmittedClassInfo &base_info = GetEmittedClassInfo(base_interface);
            for (const auto &method_name : base_info.combined_methods.Vec())
            {
                auto [ref, is_new] = ret.combined_methods.TryEmplace(method_name);

                // If this method already exists, then it's either from the base CLASS, in which case `.need_implementation == false`, which should be fine.
                // Or it's from an earlier INTERFACE, then it'll already have `.need_implementation = true`, which we're about to set here.
                if (!is_new)
                    continue;

                ref.method = base_info.combined_methods.Map().at(method_name).method;
                // Force reimplement the method, because we don't automatically inherit the implementation from an interface.
                ref.need_implementation = true;
            }
        }

        return cached_emitted_class_info.try_emplace(cl, std::move(ret)).first->second;
    }

    void Generator::EmitMaybeConstCClass(OutputFile &file, const MaybeConstClass &cl)
    {
        try
        {
            const cppdecl::QualifiedName cpp_qual_name = ParseNameOrThrow(cl.class_name);
            const std::string cpp_unqual_name = CppdeclToCode(cpp_qual_name.parts.back());
            const std::string unqual_csharp_name = CppToCSharpUnqualClassName(cpp_unqual_name, cl.is_const);

            const CInterop::TypeDesc &type_desc = *c_desc.FindTypeOpt(cl.class_name);
            const CInterop::TypeKinds::Class &class_desc = std::get<CInterop::TypeKinds::Class>(type_desc.var);

            const EmittedClassInfo &class_info = GetEmittedClassInfo(cl);

            // Declare the interface.

            // A separator?
            file.WriteSeparatingNewline();

            // No comment on the interface, we add it only on the class.

            // The interface header.
            file.WriteString("/// The interface for class `" + std::string(cpp_unqual_name) + "`, the " + (cl.is_const ? "const" : "non-const") + " half.\n");
            file.WriteString("/// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.\n");
            file.WriteString("public interface ");
            const std::string csharp_primary_interface_name = CppToCSharpUnqualInterfaceName(cpp_unqual_name, cl.is_const);
            file.WriteString(csharp_primary_interface_name);

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

                // The interface for the base class.
                if (class_info.base_class)
                {
                    BaseSeparator();
                    file.WriteString(CppToCSharpInterfaceName(ParseNameOrThrow(class_info.base_class->class_name), class_info.base_class->is_const));
                }

                // Any additional interfaces.
                for (const MaybeConstClass &in : class_info.base_interfaces)
                {
                    BaseSeparator();
                    file.WriteString(CppToCSharpInterfaceName(ParseNameOrThrow(in.class_name), in.is_const));
                }
            }

            file.PushScope({}, "\n{\n", "}\n");

            const std::string csharp_underlying_ptr_method_name = CppClassToCSharpGetUnderlyingMethodName(cpp_qual_name);
            if (cl.is_const)
            {
                // The "get underlying" method can have any access here, but then C# only lets you implement it as public.
                // I don't think it matters what access I put on it, since this method is considered internal, but the interface is considered internal as well. Shrug.
                // The "underlying" struct itself must be public, because the overriding method for "get underlying" must be public, and that requires
                //   all parameter/return types to be public too.

                if (class_info.base_class)
                    file.WriteString("new "); // Be explicit about the shadowing.
                file.WriteString("public struct _Underlying; // Represents the underlying C type.\n");
                file.WriteString("internal unsafe _Underlying *" + csharp_underlying_ptr_method_name + "(); // Returns the pointer to the underlying C object.\n");
            }

            for (const CInterop::ClassMethod *method : class_info.direct_methods)
            {
                EmitCFuncLike(file, method, MakeUnqualCSharpMethodName(*method));
            }

            file.PopScope(); // Pop the interface scope.

            file.WriteSeparatingNewline();


            // Now the class itself.

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

                if (class_info.base_class)
                {
                    BaseSeparator();
                    file.WriteString(CppToCSharpClassName(ParseNameOrThrow(class_info.base_class->class_name), class_info.base_class->is_const));
                }
                else
                {
                    // The default base and some default interfaces.

                    BaseSeparator();
                    file.WriteString(RequestHelper("Object"));

                    if (type_desc.traits.value().is_destructible)
                    {
                        BaseSeparator();
                        file.WriteString("System.IDisposable");
                    }
                }

                // The primary interface.
                BaseSeparator();
                file.WriteString(csharp_primary_interface_name);

                // Any additional interfaces.
                for (const MaybeConstClass &in : class_info.base_interfaces)
                {
                    BaseSeparator();
                    file.WriteString(CppToCSharpInterfaceName(ParseNameOrThrow(in.class_name), in.is_const));
                }
            }
            file.PushScope({}, "\n{\n", "}\n");

            // Does this class declare its own pointer to the underlying C instance? As opposed to just inheriting it.
            // This is always false for non-const class variants, since they can reuse the pointer from the const half.
            // If this is false, then we'll `static_cast` the pointer in the base class, so make sure that's possible for your type,
            //   or set this to `true` to declare your own pointer.
            bool declares_underlying_pointer = false;
            if (cl.is_const)
            {
                // If the base is virtual, we can no longer `static_cast`, and rather than try to `dynamic_cast` (which is only possible if the base is polymorphic,
                //   which isn't a given), we instead store a separate derived pointer. I don't want to pay the const of a `dynamic_cast` on every method call.
                declares_underlying_pointer = !class_info.base_class || class_desc.inheritance_info.bases_direct_combined.Map().at(class_info.base_class->class_name);
            }


            // Determine the C# underlying pointer types, for this class and its base, if any.
            // Some of those are `std::optional` to catch errors if we try to use them without assigning to them.
            std::string underlying_ptr_type = csharp_primary_interface_name + "._Underlying *";
            std::optional<std::string> base_underlying_ptr_type;
            std::optional<std::string> base_c_name;
            if (cl.is_const && class_info.base_class)
            {
                base_underlying_ptr_type = CppToCSharpInterfaceName(ParseNameOrThrow(class_info.base_class.value().class_name), true) + "._Underlying *";
                base_c_name = std::get<CInterop::TypeKinds::Class>(c_desc.FindTypeOpt(class_info.base_class.value().class_name)->var).c_name;
            }

            // The underlying pointer.
            // This is done only for the const halves, because the non-const ones can always reuse the pointer from the const half.
            if (cl.is_const)
            {
                if (declares_underlying_pointer)
                {
                    // Declare our own pointer.
                    file.WriteSeparatingNewline();
                    file.WriteString("private unsafe " + underlying_ptr_type + "_UnderlyingPtr;\n");
                    file.WriteString("public unsafe " + underlying_ptr_type + csharp_underlying_ptr_method_name + "() => _UnderlyingPtr;\n");
                }
                else
                {
                    // `static_cast` the parent pointer.

                    file.WriteSeparatingNewline();
                    file.WriteString("public unsafe " + underlying_ptr_type + csharp_underlying_ptr_method_name + "()\n");
                    file.PushScope({}, "{\n", "}\n");

                    // I believe it doesn't matter if we use the `Mutable` or the normal (const) downcast here.
                    // Mutable feels more natural to me, since all C# pointers are non-const.
                    auto cast_decl = MakeDllImportDecl(base_c_name.value() + "_StaticDowncastTo_" + class_desc.c_name, underlying_ptr_type, base_underlying_ptr_type.value() + "_this");
                    file.WriteString(cast_decl.dllimport_decl);

                    file.WriteString("return " + cast_decl.csharp_name + "(base." + CppClassToCSharpGetUnderlyingMethodName(ParseNameOrThrow(class_info.base_class.value().class_name)) + "());\n");

                    file.PopScope();
                }
            }

            // The "get underlying" methods for interface bases, as opposed to the primary base.
            // This is only needed for the const halves, since the non-const halves just inherit all this from the const half.
            if (cl.is_const)
            {
                for (const MaybeConstClass &base_interface : class_info.base_interfaces)
                {
                    // While we're at it, make sure that the base isn't ambiguous (or the upcast function will not exist).
                    if (class_desc.inheritance_info.bases_indirect.Map().at(base_interface.class_name) == CInterop::InheritanceInfo::Kind::ambiguous)
                        throw std::runtime_error("Class `" + cl.class_name + "` has an ambiguous direct base `" + base_interface.class_name + "`. This isn't supported by this generator, and is a questionable situation in general.");

                    const cppdecl::QualifiedName &this_base_name = ParseNameOrThrow(base_interface.class_name);
                    const std::string this_base_underlying_ptr_type = CppToCSharpInterfaceName(this_base_name, true) + "._Underlying *";

                    file.WriteSeparatingNewline();
                    file.WriteString("public unsafe " + this_base_underlying_ptr_type + CppClassToCSharpGetUnderlyingMethodName(this_base_name) + "()\n");
                    file.PushScope({}, "{\n", "}\n");

                    auto cast_decl = MakeDllImportDecl(class_desc.c_name + "_UpcastTo_" + std::get<CInterop::TypeKinds::Class>(c_desc.FindTypeOpt(base_interface.class_name)->var).c_name, this_base_underlying_ptr_type, underlying_ptr_type + "_this");
                    file.WriteString(cast_decl.dllimport_decl);

                    file.WriteString("return " + cast_decl.csharp_name + "(" + csharp_underlying_ptr_method_name + "());\n");

                    file.PopScope();
                }
            }

            // The upcast method for the constructor, if any.
            if (cl.is_const && class_info.base_class)
            {
                // While we're at it, make sure that the base isn't ambiguous (or the upcast function will not exist).
                if (class_desc.inheritance_info.bases_indirect.Map().at(class_info.base_class->class_name) == CInterop::InheritanceInfo::Kind::ambiguous)
                    throw std::runtime_error("Class `" + cl.class_name + "` has an ambiguous direct base `" + class_info.base_class->class_name + "`. This isn't supported by this generator, and is a questionable situation in general.");

                file.WriteSeparatingNewline();
                file.WriteString("private static unsafe " + base_underlying_ptr_type.value() + "_UpcastUnderlying(" + underlying_ptr_type + "ptr)\n");
                file.PushScope({}, "{\n", "}\n");

                auto cast_decl = MakeDllImportDecl(class_desc.c_name + "_UpcastTo_" + base_c_name.value(), base_underlying_ptr_type.value(), underlying_ptr_type + "_this");
                file.WriteString(cast_decl.dllimport_decl);

                file.WriteString("return " + cast_decl.csharp_name + "(ptr);\n");

                file.PopScope();
            }

            // The constructor.
            file.WriteSeparatingNewline();
            file.WriteString("internal unsafe " + std::string(unqual_csharp_name) + "(" + underlying_ptr_type + "ptr, bool is_owning) : ");
            file.WriteString(!cl.is_const ? "base(ptr, is_owning)" : class_info.base_class ? "base(_UpcastUnderlying(ptr), is_owning)" : "base(is_owning)");
            file.WriteString(declares_underlying_pointer ? " {_UnderlyingPtr = ptr;}" : " {}");
            file.WriteString("\n");

            if (declares_underlying_pointer && type_desc.traits.value().is_destructible)
            {
                const auto dtor_strings = MakeDllImportDecl(class_desc.c_name + "_Destroy", "void", underlying_ptr_type + "_this");

                std::string virtual_or_override = class_info.base_class ? "override" : "virtual";

                file.WriteSeparatingNewline();

                file.WriteString("protected " + virtual_or_override + " unsafe void Dispose(bool disposing)\n");
                file.PushScope({}, "{\n", "}\n");
                file.WriteString(
                    "if (_UnderlyingPtr == null)\n"
                    "    return;\n"
                );

                if (class_info.base_class)
                {
                    file.PushScope({}, "if (disposing)\n{\n", "}\n");

                    if (class_info.base_class)
                        file.WriteString("base.Dispose();");

                    file.PopScope();
                }

                file.WriteString(
                    // Here we'd have `if (disposing)` where we would explicitly `.Dispose()` managed data members, if we had any.
                    dtor_strings.dllimport_decl +
                    dtor_strings.csharp_name + "(" + csharp_underlying_ptr_method_name + "());\n"
                    "_UnderlyingPtr = null;\n"
                );

                // Propagate to the base class.
                if (class_info.base_class)
                    file.WriteString("base.Dispose(disposing);\n");

                file.PopScope(); // Close `void Dispose(bool disposing)`.
                file.WriteString(
                    "public " + virtual_or_override + " void Dispose() {Dispose(true); GC.SuppressFinalize(this);}\n"
                    "~" + std::string(unqual_csharp_name) + "() {Dispose(false);}\n"
                );
            }

            // Emit the method wrappers.
            for (const std::string &method_name : class_info.combined_methods.Vec())
            {
                const EmittedClassInfo::MaybeInheritedMethod &method_info = class_info.combined_methods.Map().at(method_name);
                if (!method_info.need_implementation)
                    continue;

                file.WriteSeparatingNewline();

                // Write the method itself.
                file.WriteString(method_info.method.comment);
                file.WriteString(method_info.method.header);
                file.WriteString(method_info.method.body);
            }

            file.PopScope(); // Pop the class scope.
        }
        catch (...)
        {
            std::throw_with_nested(std::runtime_error("While emitting a wrapper for a C++ class `" + cl.class_name + "` (" + (cl.is_const ? "const" : "non-const") + " half):"));
        }
    }

    void Generator::Generate()
    {
        { // Perform some initialization.
            // Set `helpers_prefix`.
            for (const auto &elem : helpers_namespace.parts)
            {
                helpers_prefix += CppdeclToIdentifier(elem);
                helpers_prefix += '.';
            }
        }

        // Emit types.
        for (const auto &key : c_desc.cpp_types.Vec())
        {
            // Most of the variant elements are useless to us, so we aren't using `std::visit` here.

            const auto &type_desc = c_desc.cpp_types.Map().at(key);

            // Enums.
            if (auto elem = std::get_if<CInterop::TypeKinds::Enum>(&type_desc.var))
            {
                OutputFile &file = GetOutputFile(elem->output_file);

                auto qual_name = ParseNameOrThrow(key);
                file.EnsureNamespace({qual_name.parts.begin(), qual_name.parts.end() - 1});

                EmitCEnum(file, *elem, "public", CppdeclToIdentifier(qual_name.parts.back()));
            }
            // Classes.
            else if (auto elem = std::get_if<CInterop::TypeKinds::Class>(&type_desc.var))
            {
                OutputFile &file = GetOutputFile(elem->output_file);

                auto qual_name = ParseNameOrThrow(key);
                file.EnsureNamespace({qual_name.parts.begin(), qual_name.parts.end() - 1});

                EmitMaybeConstCClass(file, {.class_name = key, .is_const = true});
                EmitMaybeConstCClass(file, {.class_name = key, .is_const = false});
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
            file.EnsureNamespace({qual_name.parts.begin(), qual_name.parts.end() - 1});

            EmitCFuncLike(file, &free_func, CppdeclToIdentifier(qual_name.parts.back()));
        }

        // Generate the requested helpers. This must be after all user code generation, but before closing the namespaces.
        GenerateHelpers();

        { // Lastly, close the namespaces in all files.
            for (auto &file : output_files)
                file.second.EnsureNamespace({});
        }
    }

    void Generator::GenerateHelpers()
    {
        // Don't generate the file if no helpers are needed.
        if (!requested_helpers.empty())
        {
            OutputFile &file = output_files.try_emplace("__common").first->second;

            file.EnsureNamespace(helpers_namespace.parts);

            // `Object`.
            if (requested_helpers.erase("Object"))
            {
                file.WriteSeparatingNewline();
                file.WriteString(
                    "/// This is the base class for all our classes.\n"
                    "public class Object\n"
                    "{\n"
                    "    private bool _IsOwningVal;\n"
                    "    /// Returns true if this is an owning instance. When disposed, it will either destroy the underlying C++ instance, or decrement its reference count.\n"
                    "    /// If false, we assume that the underlying C++ instance will live long enough.\n"
                    "    public bool _IsOwning() => _IsOwningVal;\n"
                    "\n"
                    "    internal Object(bool NewIsOwning) {_IsOwningVal = NewIsOwning;}"
                    "}\n"
                );
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
                    "        System.Diagnostics.Trace.Assert(NewPtr != null); Ptr = NewPtr;\n"
                    "    }\n"
                    "\n"
                    "    public ref T Value => ref *Ptr;\n"
                    "}\n"
                );
            }

            // `ByValue` and friends.
            if (requested_helpers.erase("ByValue"))
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
                    "public readonly struct ByValue<T>\n"
                    "{\n"
                    "    readonly T? Value;\n"
                    "    readonly _PassBy PassByMode;\n"
                    "    public ByValue() {PassByMode = _PassBy.default_construct;}\n"
                    "    public ByValue(T NewValue) {Value = NewValue; PassByMode = _PassBy.copy;}\n"
                    "    public ByValue(_Moved<T> Moved) {Value = Moved.Value; PassByMode = _PassBy.move;}\n"
                    "    public static implicit operator ByValue<T>(T Arg) {return new ByValue<T>(Arg);}\n"
                    "    public static implicit operator ByValue<T>(_Moved<T> Arg) {return new ByValue<T>(Arg);}\n"
                    "}\n"
                    "\n"
                    "/// This can be used with `ByValue<T>` function parameters, to indicate that the argument should be moved.\n"
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

            // Currently we don't need any custom exceptions.
            #if 0
            { // Custom exceptions.
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
            }
            #endif

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
