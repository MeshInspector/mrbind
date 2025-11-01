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

    std::string Generator::CppToCSharpName(const cppdecl::QualifiedName &name)
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

    std::string Generator::CppToCSharpInterfaceName(const cppdecl::QualifiedName &name)
    {
        std::string ret;
        for (std::size_t i = 0; i < name.parts.size(); i++)
        {
            if (i > 0)
                ret += '.'; // We don't use actual namespaces in C# (which would require `::`). Since we only use static classes, we can use `.` everywhere.

            std::string part = CppdeclToIdentifier(name.parts[i]);

            if (i + 1 == name.parts.size())
                part = CppToCSharpUnqualInterfaceName(part);

            ret += part;
        }
        return ret;
    }

    std::string Generator::CppToCSharpUnqualInterfaceName(std::string_view name)
    {
        return "__I" + std::string(name);
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
                                    .csharp_args_for_c = name,
                                };
                            },
                        },
                        .param_usage_with_default_arg = TypeBinding::ParamUsage{
                            .make_strings = [csharp_type, fix_input](const std::string &name, bool &/*have_useless_defarg*/)
                            {
                                return TypeBinding::ParamUsage::Strings{
                                    .needs_unsafe = true,
                                    .dllimport_decl_params = csharp_type + " *" + name, // No const pointers in C#.
                                    .csharp_decl_params = csharp_type + "? " + name + " = null",
                                    .extra_statements =
                                        csharp_type + " __deref_" + name + " = " + name + ".GetValueOrDefault();\n" +
                                        (fix_input ? fix_input("__deref_" + name) : ""),
                                    .csharp_args_for_c = name + ".HasValue ? &__deref_" + name + " : null",
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
                                            .csharp_args_for_c = name + " ? (byte)1 : (byte)0",
                                        };
                                    },
                                },
                                .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                    .make_strings = [](const std::string &name, bool &/*have_useless_defarg*/)
                                    {
                                        return TypeBinding::ParamUsage::Strings{
                                            .needs_unsafe = true,
                                            .dllimport_decl_params = "byte *" + name, // No const pointers in C#.
                                            .csharp_decl_params = "bool? " + name + " = null",
                                            .extra_statements = "byte __deref_" + name + " = " + name + ".GetValueOrDefault() ? (byte)1 : (byte)0;\n",
                                            .csharp_args_for_c = name + ".HasValue ? &__deref_" + name + " : null",
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

                        std::string csharp_type = CppToCSharpName(cpp_type.simple_type.name);

                        const bool underlying_is_bool = c_desc.platform_info.FindPrimitiveType(elem.underlying_type)->kind == PrimitiveTypeInfo::Kind::boolean;

                        TypeBinding ret = MakeScalarByValueBinding(csharp_type,
                            // If the underlying type was bool in C/C++, insert code to clamp out-of-range inputs.
                            underlying_is_bool
                            ? std::function([csharp_type](const std::string &name){return "if ((byte)" + name + " > 1) " + name + " = (" + csharp_type + ")1;\n";})
                            : nullptr
                        );

                        return CreateBinding(std::move(ret));
                    },
                    [&](const CInterop::TypeKinds::Class &) -> const TypeBinding *
                    {
                        return nullptr;
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
                                                    .needs_unsafe = true,
                                                    .dllimport_decl_params = csharp_type + " *" + name,
                                                    .csharp_decl_params = RequestHelper("InOut") + "<" + csharp_type + ">? " + name + (std::exchange(have_useless_defarg, false) ? " = null" : ""),
                                                    .extra_statements =
                                                        csharp_type + " __value_" + name + " = " + name + " != null ? " + name + ".Value : default(" + csharp_type + ");\n" +
                                                        (fix_input ? fix_input("__value_" + name) : ""),
                                                    .csharp_args_for_c = name + " != null ? &__value_" + name + " : null",
                                                    .extra_statements_after = "if (" + name + " != null) " + name + ".Value = __value_" + name + ";\n",
                                                };
                                            },
                                        },
                                        .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                            .make_strings = [this, csharp_type, fix_input](const std::string &name, bool &/*have_useless_defarg*/)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .needs_unsafe = true,
                                                    .dllimport_decl_params = csharp_type + " **" + name,
                                                    .csharp_decl_params = RequestHelper("InOutOpt") + "<" + csharp_type + ">? " + name + " = null",
                                                    .extra_statements =
                                                        csharp_type + " __value_" + name + " = " + name + " != null && " + name + ".Opt != null ? " + name + ".Opt.Value : default(" + csharp_type + ");\n" +
                                                        csharp_type + " *__valueptr_" + name + " = " + name + " != null && " + name + ".Opt != null ? &__value_" + name + " : null;\n" +
                                                        (fix_input ? fix_input("__value_" + name) : ""),
                                                    .csharp_args_for_c = name + " != null ? &__valueptr_" + name + " : null",
                                                    .extra_statements_after = "if (" + name + " != null && " + name + ".Opt != null) " + name + ".Opt.Value = __value_" + name + ";\n",
                                                };
                                            },
                                        },
                                        .return_usage = TypeBinding::ReturnUsage{
                                            .needs_unsafe = true,
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
                                                    .needs_unsafe = true,
                                                    .dllimport_decl_params = csharp_type + " *" + name, // No const pointers in C#.
                                                    .csharp_decl_params = csharp_type + "? " + name + (std::exchange(have_useless_defarg, false) ? " = null" : ""),
                                                    .extra_statements =
                                                        csharp_type + " __deref_" + name + " = " + name + ".GetValueOrDefault();\n" +
                                                        (fix_input ? fix_input("__deref_" + name) : ""),
                                                    .csharp_args_for_c = name + ".HasValue ? &__deref_" + name + " : null",
                                                };
                                            },
                                        },
                                        .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                            .make_strings = [this, csharp_type, fix_input](const std::string &name, bool &/*have_useless_defarg*/)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .needs_unsafe = true,
                                                    .dllimport_decl_params = csharp_type + " **" + name, // No const pointers in C#.
                                                    .csharp_decl_params = RequestHelper("InOpt") + "<" + csharp_type + ">? " + name + " = null",
                                                    .extra_statements =
                                                        csharp_type + " __value_" + name + " = " + name + " != null && " + name + ".Opt != null ? " + name + ".Opt.Value : default(" + csharp_type + ");\n" +
                                                        csharp_type + " *__valueptr_" + name + " = " + name + " != null && " + name + ".Opt != null ? &__value_" + name + " : null;\n" +
                                                        (fix_input ? fix_input("__value_" + name) : ""),
                                                    .csharp_args_for_c = name + " != null ? &__valueptr_" + name + " : null",
                                                };
                                            },
                                        },
                                        .return_usage = TypeBinding::ReturnUsage{
                                            .needs_unsafe = true,
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

                                    const std::string csharp_underlying_enum_type = CppToCSharpName(cpp_underlying_type.simple_type.name);
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
                                                    .needs_unsafe = true,
                                                    .dllimport_decl_params = csharp_type + " *" + name,
                                                    .csharp_decl_params = "ref " + csharp_type + " " + name,
                                                    .scope_open = "fixed (" + csharp_type + " *__ptr_" + name + " = &" + name + ") {\n",
                                                    .extra_statements = fix_input ? fix_input(name) : "",
                                                    .csharp_args_for_c = "__ptr_" + name,
                                                    .scope_close = "} // fixed __ptr_" + name + "\n",
                                                };
                                            },
                                        },
                                        .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                            .make_strings = [this, csharp_type, fix_input](const std::string &name, bool &/*have_useless_defarg*/)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .needs_unsafe = true,
                                                    .dllimport_decl_params = csharp_type + " *" + name,
                                                    // Must pass a class because C# `ref` parameters can't have default arguments, and and we can't just tell the user
                                                    //   to pass a placeholder, because we might have proper default arguments before this one, so omitting the default argument here
                                                    //   would cause a compilation error.
                                                    .csharp_decl_params = RequestHelper("InOut") + "<" + csharp_type + ">? " + name + " = null",
                                                    .extra_statements =
                                                        csharp_type + " __value_" + name + " = " + name + " != null ? " + name + ".Value : default(" + csharp_type + ");\n" +
                                                        (fix_input ? fix_input("__value_" + name) : ""),
                                                    .csharp_args_for_c = name + " != null ? &__value_" + name + " : null",
                                                    .extra_statements_after = "if (" + name + " != null) " + name + ".Value = __value_" + name + ";\n",
                                                };
                                            },
                                        },
                                        .return_usage = TypeBinding::ReturnUsage{
                                            .needs_unsafe = true,
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
                                                    .csharp_args_for_c = "&" + name,
                                                };
                                            },
                                        },
                                        .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                            .make_strings = [csharp_type, fix_input](const std::string &name, bool &/*have_useless_defarg*/)
                                            {
                                                return TypeBinding::ParamUsage::Strings{
                                                    .needs_unsafe = true,
                                                    .dllimport_decl_params = csharp_type + " *" + name, // No const pointers in C#.
                                                    .csharp_decl_params = csharp_type + "? " + name + " = null",
                                                    .extra_statements =
                                                        csharp_type + " __deref_" + name + " = " + name + ".GetValueOrDefault();\n" +
                                                        (fix_input ? fix_input("__deref_" + name) : ""),
                                                    .csharp_args_for_c = name + ".HasValue ? &__deref_" + name + " : null",
                                                };
                                            },
                                        },
                                        .return_usage = TypeBinding::ReturnUsage{
                                            .needs_unsafe = true,
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

                                    const std::string csharp_underlying_enum_type = CppToCSharpName(cpp_underlying_type.simple_type.name);
                                    const bool underlying_is_bool = c_desc.platform_info.FindPrimitiveType(underlying_enum.underlying_type)->kind == PrimitiveTypeInfo::Kind::boolean;

                                    return CreateBinding(MakeScalarRefBinding(csharp_underlying_enum_type,
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

    void Generator::EmitCFuncLike(OutputFile &file, const CInterop::BasicFuncLike &func_like, std::string_view prefix, std::string_view csharp_name)
    {
        try
        {
            bool func_is_unsafe = false;

            // First, generate the parameter strings.
            std::vector<const TypeBinding::ParamUsage *> param_usages;
            std::vector<TypeBinding::ParamUsage::Strings> param_strings;
            param_usages.reserve(func_like.params.size());
            param_strings.reserve(func_like.params.size());
            for (const auto &param : func_like.params)
            {
                std::size_t visual_index = param_strings.size() + 1;
                try
                {
                    // Handle the `this` parameter.
                    if (param.this_param)
                    {
                        cppdecl::Type this_type = ParseTypeOrThrow(param.cpp_type);
                        assert(this_type.Is<cppdecl::Reference>()); // Just for now. Support for explicit `this` parameters can be added later.
                        if (this_type.Is<cppdecl::Reference>())
                            this_type.RemoveModifier();
                        this_type.RemoveQualifiers(cppdecl::CvQualifiers::const_);
                        assert(this_type.IsOnlyQualifiedName());

                        param_usages.push_back(nullptr);
                        param_strings.push_back({
                            .needs_unsafe = true,
                            .dllimport_decl_params = "_Underlying *" + param.name_or_placeholder,
                            .csharp_decl_params = "", // Nothing.
                            .csharp_args_for_c = CppClassToCSharpGetUnderlyingMethodName(this_type.simple_type.name) + "()",
                        });
                        func_is_unsafe = true; // Since we `continue` early, this needs to be set manually.
                        continue;
                    }

                    const TypeBinding &param_binding = GetTypeBinding(ParseTypeOrThrow(param.cpp_type), param.uses_sugar);

                    // Note that we don't have fallback between usages with and without default args, unlike in the C generator.
                    const auto &param_usage = param.default_arg_affects_parameter_passing ? param_binding.param_usage_with_default_arg : param_binding.param_usage;
                    if (!param_usage)
                        throw std::runtime_error("This C++ parameter type is known, but this type isn't usable as a parameter type.");

                    const bool useless_default_arg = param.default_arg_spelling && !param.default_arg_affects_parameter_passing;
                    bool useless_default_arg_var = useless_default_arg;

                    param_usages.push_back(&*param_usage);
                    param_strings.push_back(param_usage->make_strings(param.name_or_placeholder, useless_default_arg_var));

                    // Check that the callback handled our useless default arg, if any.
                    if (useless_default_arg && useless_default_arg_var)
                        throw std::runtime_error("This parameter has a default argument that doesn't affect parameter passing, but this type binding doesn't understand those.");

                    if (param_strings.back().needs_unsafe)
                        func_is_unsafe = true;
                }
                catch (...)
                {
                    std::throw_with_nested(std::runtime_error("While handling parameter " + std::to_string(visual_index) + " out of " + std::to_string(func_like.params.size()) + ", of type `" + param.cpp_type + "`" + (param.uses_sugar ? " (with sugar enabled)" : "") + ":"));
                }
            }


            // Write a separating empty line if needed.
            file.WriteSeparatingNewline();

            // The comment, if any.
            // This already has a trailing newline and the slashes.
            file.WriteString(func_like.comment.c_style);

            // Comments for default arguments, if any.
            for (const auto &param : func_like.params)
            {
                // This message is only truly needed for non-trivial default arguments.
                if (param.default_arg_affects_parameter_passing)
                    file.WriteString("/// Parameter `" + param.name_or_placeholder + "` defaults to `" + *param.default_arg_spelling + "`.\n");
            }

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

            // Write the prefix, if any.
            if (!prefix.empty())
            {
                file.WriteString(prefix);
                file.WriteString(" ");
            }

            // Find the return type binding.
            const TypeBinding &ret_binding = GetTypeBinding(ParseTypeOrThrow(func_like.ret.cpp_type), func_like.ret.uses_sugar);
            if (!ret_binding.return_usage)
                throw std::runtime_error("The C++ return type `" + func_like.ret.cpp_type + "`" + (func_like.ret.uses_sugar ? " (with sugar enabled)" : "") + " is known, but isn't usable as a return type.");
            if (ret_binding.return_usage->needs_unsafe)
                func_is_unsafe = true;

            // Unsafe?
            if (func_is_unsafe)
                file.WriteString("unsafe ");

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

            // If this is a non-const function, make sure the instance is also not const.
            if (!func_like.params.empty() && func_like.params.front().this_param)
            {
                const cppdecl::Type param_type = ParseTypeOrThrow(func_like.params.front().cpp_type);
                assert(param_type.Is<cppdecl::Reference>()); // Just for now. Support for explicit `this` parameters can be added later.
                if (!param_type.IsConst(1))
                {
                    file.WriteString("if (!_IsConst()) throw new " + RequestHelper("MutableMethodCalledOnConstInstance") + "();\n");
                }
            }

            { // The `DllImport` declaration.
                file.WriteString("[System.Runtime.InteropServices.DllImport(" + EscapeQuoteString(imported_lib_name) + ", EntryPoint = \"" + func_like.c_name + "\", ExactSpelling = true)]\n");
                file.WriteString("extern static " + ret_binding.return_usage->dllimport_return_type + (ret_binding.return_usage->dllimport_return_type.ends_with('*') ? "" : " ") + "__" + func_like.c_name);

                { // Write the parameter list.
                    file.WriteString("(");

                    bool first = true;
                    for (const auto &param : param_strings)
                    {
                        if (param.dllimport_decl_params.empty())
                            continue;

                        if (first)
                            first = false;
                        else
                            file.WriteString(", ");

                        file.WriteString(param.dllimport_decl_params);
                    }

                    file.WriteString(");\n");
                }
            }

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
                std::string expr = "__" + func_like.c_name;

                { // Add the argument list.
                    expr += "(";

                    bool first = true;
                    for (const auto &param : param_strings)
                    {
                        if (param.csharp_args_for_c.empty())
                            continue;

                        if (first)
                            first = false;
                        else
                            expr += ", ";

                        expr += param.csharp_args_for_c;
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

    void Generator::EmitCClass(OutputFile &file, const cppdecl::QualifiedName &cpp_name, const CInterop::TypeKinds::Class &class_desc, std::string_view prefix, std::string_view csharp_name)
    {
        try
        {
            // Declare the interface.

            // A separator?
            file.WriteSeparatingNewline();

            // No comment on the interface, we add it only on the class.

            // The interface header.
            if (!prefix.empty())
            {
                file.WriteString(prefix);
                file.WriteString(" ");
            }
            file.WriteString("interface ");
            const std::string csharp_matching_interface_name = CppToCSharpUnqualInterfaceName(csharp_name);
            file.WriteString(csharp_matching_interface_name);
            file.PushScope({}, "\n{\n", "}\n");

            // The "get underlying" method can have any access here, but then C# only lets you implement it as public.
            // I don't think it matters what access I put on it, since this method is considered internal, but the interface is considered internal as well. Shrug.
            // The "underlying" struct itself must be public, because the overriding method for "get underlying" must be public, and that requires
            //   all parameter/return types to be public too.
            file.WriteString("public struct _Underlying; // Represents the underlying C type.\n");
            const std::string csharp_underlying_ptr_method_name = CppClassToCSharpGetUnderlyingMethodName(cpp_name);
            file.WriteString("internal unsafe _Underlying *" + csharp_underlying_ptr_method_name + "(); // Returns the pointer to the underlying C object.\n");
            file.WriteString("\n");
            file.WriteString("// Returns true if the underlying instance is read-only.\n");
            file.WriteString("public bool _IsConst();\n");

            for (const CInterop::ClassMethod &method : class_desc.methods)
            {
                std::string csharp_name;
                bool skip = false;

                std::visit(Overload{
                    [&](const CInterop::MethodKinds::Regular &elem)
                    {
                        csharp_name = elem.name;
                    },
                    [&](const CInterop::MethodKinds::Constructor &elem)
                    {
                        (void)elem;
                        skip = true; // Don't want constructors here.
                    },
                    [&](const CInterop::MethodKinds::Operator &elem)
                    {
                        (void)elem; // TODO
                        if (elem.is_special_assignment)
                            skip = true;
                    },
                    [&](const CInterop::MethodKinds::ConversionOperator &elem)
                    {
                        (void)elem; // TODO
                    },
                }, method.var);

                if (skip)
                    continue;

                assert(!csharp_name.empty());

                EmitCFuncLike(file, method, "public", csharp_name);
            }

            file.PopScope(); // Pop the interface scope.

            file.WriteSeparatingNewline();

            // Now the class itself.

            // The comment, if any.
            // This already has a trailing newline and the slashes.
            file.WriteString(class_desc.comment.c_style);

            // The class header.
            if (!prefix.empty())
            {
                file.WriteString(prefix);
                file.WriteString(" ");
            }
            file.WriteString("class ");
            file.WriteString(csharp_name);
            file.WriteString(" : ");
            file.WriteString(csharp_matching_interface_name);
            file.PushScope({}, "\n{\n", "}\n");

            // The underlying pointer.
            // TODO: We'll need to skip this in derived classes.
            file.WriteString("private unsafe " + csharp_matching_interface_name + "._Underlying *_underlying;\n");
            file.WriteString("private bool _IsConstVal;\n");
            file.WriteString("public unsafe " + csharp_matching_interface_name + "._Underlying *" + csharp_underlying_ptr_method_name + "() => _underlying;\n");
            file.WriteString("public bool _IsConst() => _IsConstVal;\n");

            file.PopScope(); // Pop the class scope.
        }
        catch (...)
        {
            std::throw_with_nested(std::runtime_error("While emitting a wrapper for C class-like type `" + class_desc.c_name + "`:"));
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

            const auto &var = c_desc.cpp_types.Map().at(key).var;

            // Enums.
            if (auto elem = std::get_if<CInterop::TypeKinds::Enum>(&var))
            {
                OutputFile &file = GetOutputFile(elem->output_file);

                auto qual_name = ParseNameOrThrow(key);
                file.EnsureNamespace({qual_name.parts.begin(), qual_name.parts.end() - 1});

                EmitCEnum(file, *elem, "public", CppdeclToIdentifier(qual_name.parts.back()));
            }
            // Classes.
            else if (auto elem = std::get_if<CInterop::TypeKinds::Class>(&var))
            {
                OutputFile &file = GetOutputFile(elem->output_file);

                auto qual_name = ParseNameOrThrow(key);
                file.EnsureNamespace({qual_name.parts.begin(), qual_name.parts.end() - 1});

                EmitCClass(file, ParseNameOrThrow(key), *elem, "public", CppdeclToIdentifier(qual_name.parts.back()));
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

            EmitCFuncLike(file, free_func, "public static", CppdeclToIdentifier(qual_name.parts.back()));
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

            { // Custom exception.
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

                CreateExceptionClassIfNeeded("MutableMethodCalledOnConstInstance", "/// This is thrown when a non-const method is called on class instance that's considered const (`._IsConst() == true`).\n");
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
