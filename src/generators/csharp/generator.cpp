#include "generator.h"
#include "common/string_escape.h"

#include <cppdecl/declarations/parse.h>

#include <numeric>

namespace mrbind::CSharp
{
    std::string CppdeclToCode(const auto &value)
    {
        return cppdecl::ToCode(value, {});
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
            PushScope(new_namespace[i], "public static partial class " + CppdeclToCode(new_namespace[i]) + "\n{\n", "}\n");
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

    std::optional<std::string_view> Generator::CToCSharpPrimitiveTypeOpt(std::string_view c_type)
    {
        if (c_type == "void") return "void";
        if (c_type == "bool") return "byte"; // I heard the C# `bool` gets passed as an `int32_t`, so using a `byte` instead.

        if (auto opt = c_desc.platform_info.FindPrimitiveType(c_type))
        {
            switch (opt->kind)
            {
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

    std::optional<std::string> Generator::CToCSharpTypeOpt(const cppdecl::Type &c_type, bool *is_unsafe)
    {
        if (c_type.modifiers.empty())
        {
            if (auto opt = CToCSharpPrimitiveTypeOpt(c_type.IsSingleWord() ? c_type.AsSingleWord() : CppdeclToCode(c_type)))
                return std::string(*opt);
        }

        if (c_type.Is<cppdecl::Pointer>())
        {
            if (is_unsafe)
                *is_unsafe = true;

            cppdecl::Type new_c_type = c_type;
            new_c_type.RemoveModifier();
            new_c_type.RemoveQualifiers(cppdecl::CvQualifiers::const_); // C# has no pointers to `const`.
            if (auto opt = CToCSharpTypeOpt(new_c_type)) // Don't need to propagate `is_unsafe` because we've already written true to it.
                return *opt + "*";
            else
                return "void*"; // I guess?
        }

        return {};
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
        auto iter = cached_type_bindings.find(std::pair(cpp_type_str, enable_sugar));
        if (iter != cached_type_bindings.end())
            return &iter->second;

        auto CreateBinding = [&](TypeBinding new_binding) -> const TypeBinding *
        {
            auto [iter, is_new] = cached_type_bindings.try_emplace(std::pair(cpp_type_str, enable_sugar), std::move(new_binding));
            assert(is_new);
            return &iter->second;
        };

        if (!enable_sugar)
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

            // Bool.
            // I heard the C# `bool` gets passed as an `int32_t`, so it needs special-casing with `byte` as the underlying type.
            if (cpp_type_str == "bool")
            {
                return CreateBinding({
                    .param_usage = TypeBinding::ParamUsage{
                        .make_strings = [](const std::string &name)
                        {
                            return TypeBinding::ParamUsage::Strings{
                                .dllimport_decl_params = "byte " + name,
                                .csharp_decl_params = "bool " + name,
                                .csharp_args_for_c = name + " ? (byte)1 : (byte)0",
                            };
                        },
                    },
                    .param_usage_with_default_arg = TypeBinding::ParamUsage{
                        .make_strings = [](const std::string &name)
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
            if (auto csharp_type_str = CToCSharpPrimitiveTypeOpt(cpp_type_str))
            {
                return CreateBinding({
                    .param_usage = TypeBinding::ParamUsage{
                        .make_strings = [type = std::string(*csharp_type_str)](const std::string &name)
                        {
                            return TypeBinding::ParamUsage::Strings{
                                .dllimport_decl_params = type + ' ' + name,
                                .csharp_decl_params = type + ' ' + name,
                                .csharp_args_for_c = name,
                            };
                        },
                    },
                    .param_usage_with_default_arg = TypeBinding::ParamUsage{
                        .make_strings = [type = std::string(*csharp_type_str)](const std::string &name)
                        {
                            return TypeBinding::ParamUsage::Strings{
                                .needs_unsafe = true,
                                .dllimport_decl_params = type + " *" + name, // No const pointers in C#.
                                .csharp_decl_params = type + "? " + name + " = null",
                                .extra_statements = type + " __deref_" + name + " = " + name + ".GetValueOrDefault();\n",
                                .csharp_args_for_c = name + ".HasValue ? &__deref_" + name + " : null",
                            };
                        },
                    },
                    .return_usage = TypeBinding::ReturnUsage{
                        .dllimport_return_type = std::string(*csharp_type_str),
                        .csharp_return_type = std::string(*csharp_type_str),
                    },
                });
            }

            // References to...
            if (cpp_type.Is<cppdecl::Reference>() && cpp_type.modifiers.size() == 1)
            {
                cppdecl::Type cpp_underlying_type = cpp_type;
                cpp_underlying_type.RemoveModifier();
                const bool is_const = cpp_underlying_type.IsConst();
                cpp_underlying_type.RemoveQualifiers(cppdecl::CvQualifiers::const_);

                const std::string cpp_underlying_type_str = CppdeclToCode(cpp_underlying_type);

                // Bool.
                if (cpp_underlying_type_str == "bool")
                {
                    if (!is_const)
                    {
                        return CreateBinding({
                            .param_usage = TypeBinding::ParamUsage{
                                .make_strings = [](const std::string &name)
                                {
                                    return TypeBinding::ParamUsage::Strings{
                                        .needs_unsafe = true,
                                        .dllimport_decl_params = "byte *" + name,
                                        .csharp_decl_params = "ref bool " + name,
                                        .extra_statements = "byte __bool_" + name + " = " + name + " ? (byte)1 : (byte)0;\n",
                                        .csharp_args_for_c = "&__bool_" + name,
                                        .extra_statements_after = name + " = __bool_" + name + " != 0;\n",
                                    };
                                },
                            },
                            .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                .make_strings = [this](const std::string &name)
                                {
                                    return TypeBinding::ParamUsage::Strings{
                                        .needs_unsafe = true,
                                        .dllimport_decl_params = "byte *" + name,
                                        // Must pass a class because C# `ref` parameters can't have default arguments, and and we can't just tell the user
                                        //   to pass a placeholder, because we might have proper default arguments before this one, so omitting the default argument here
                                        //   would cause a compilation error.
                                        .csharp_decl_params = RequestHelper("InOut") + "<bool>? " + name + " = null",
                                        .extra_statements = "byte __bool_" + name + " = " + name + " != null && " + name + ".Value ? (byte)1 : (byte)0;\n",
                                        .csharp_args_for_c = name + " != null ? &__bool_" + name + " : null",
                                        .extra_statements_after = "if (" + name + " != null) " + name + ".Value = __bool_" + name + " != 0;\n",
                                    };
                                },
                            },
                            .return_usage = TypeBinding::ReturnUsage{
                                .needs_unsafe = true,
                                .dllimport_return_type = "byte *",
                                .csharp_return_type = RequestHelper("BoolRef"), // Can't return a true `ref bool` because C# bools occupy 4 bytes.
                                .make_return_expr = [this](const std::string &expr){return "return new " + RequestHelper("BoolRef") + "(" + expr + ");";},
                            },
                        });
                    }
                    else
                    {
                        return CreateBinding({
                            .param_usage = TypeBinding::ParamUsage{
                                .make_strings = [](const std::string &name)
                                {
                                    return TypeBinding::ParamUsage::Strings{
                                        .dllimport_decl_params = "byte *" + name, // No const pointers in C#.
                                        .csharp_decl_params = "bool " + name,
                                        .extra_statements = "byte __bool_" + name + " = " + name + " ? (byte)1 : (byte)0;\n",
                                        .csharp_args_for_c = "&__bool_" + name,
                                    };
                                },
                            },
                            .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                .make_strings = [](const std::string &name)
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
                                .needs_unsafe = true,
                                .dllimport_return_type = "byte *",
                                .csharp_return_type = "bool",
                                .make_return_expr = [](const std::string &expr){return "return *" + expr + " != 0;";},
                            },
                        });
                    }
                }

                // Arithmetic types.
                if (auto csharp_type_str = CToCSharpPrimitiveTypeOpt(cpp_underlying_type_str))
                {
                    if (!is_const)
                    {
                        return CreateBinding({
                            .param_usage = TypeBinding::ParamUsage{
                                .make_strings = [type = std::string(*csharp_type_str)](const std::string &name)
                                {
                                    return TypeBinding::ParamUsage::Strings{
                                        .needs_unsafe = true,
                                        .dllimport_decl_params = type + " *" + name,
                                        .csharp_decl_params = "ref " + type + " " + name,
                                        .scope_open = "fixed (" + type + " *__ptr_" + name + " = &" + name + ") {\n",
                                        .csharp_args_for_c = "__ptr_" + name,
                                        .scope_close = "} // fixed __ptr_" + name + "\n",
                                    };
                                },
                            },
                            .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                .make_strings = [this, type = std::string(*csharp_type_str)](const std::string &name)
                                {
                                    return TypeBinding::ParamUsage::Strings{
                                        .needs_unsafe = true,
                                        .dllimport_decl_params = type + " *" + name,
                                        // Must pass a class because C# `ref` parameters can't have default arguments, and and we can't just tell the user
                                        //   to pass a placeholder, because we might have proper default arguments before this one, so omitting the default argument here
                                        //   would cause a compilation error.
                                        .csharp_decl_params = RequestHelper("InOut") + "<" + type + ">? " + name + " = null",
                                        .extra_statements = type + " __value_" + name + " = " + name + " != null ? " + name + ".Value : default(" + type + ");\n",
                                        .csharp_args_for_c = name + " != null ? &__value_" + name + " : null",
                                        .extra_statements_after = "if (" + name + " != null) " + name + ".Value = __value_" + name + ";\n",
                                    };
                                },
                            },
                            .return_usage = TypeBinding::ReturnUsage{
                                .needs_unsafe = true,
                                .dllimport_return_type = std::string(*csharp_type_str) + " *",
                                .csharp_return_type = "ref " + std::string(*csharp_type_str),
                                .make_return_expr = [](const std::string &expr){return "return ref *" + expr + ";";},
                            },
                        });
                    }
                    else
                    {
                        return CreateBinding({
                            .param_usage = TypeBinding::ParamUsage{
                                .make_strings = [type = std::string(*csharp_type_str)](const std::string &name)
                                {
                                    return TypeBinding::ParamUsage::Strings{
                                        .dllimport_decl_params = type + " *" + name, // No const pointers in C#.
                                        .csharp_decl_params = type + " " + name,
                                        .csharp_args_for_c = "&" + name,
                                    };
                                },
                            },
                            .param_usage_with_default_arg = TypeBinding::ParamUsage{
                                .make_strings = [type = std::string(*csharp_type_str)](const std::string &name)
                                {
                                    return TypeBinding::ParamUsage::Strings{
                                        .needs_unsafe = true,
                                        .dllimport_decl_params = type + " *" + name, // No const pointers in C#.
                                        .csharp_decl_params = type + "? " + name + " = null",
                                        .extra_statements = type + " __deref_" + name + " = " + name + ".GetValueOrDefault();\n",
                                        .csharp_args_for_c = name + ".HasValue ? &__deref_" + name + " : null",
                                    };
                                },
                            },
                            .return_usage = TypeBinding::ReturnUsage{
                                .needs_unsafe = true,
                                .dllimport_return_type = std::string(*csharp_type_str) + " *",
                                .csharp_return_type = std::string(*csharp_type_str),
                                .make_return_expr = [](const std::string &expr){return "return *" + expr + ";";},
                            },
                        });
                    }
                }
            }
        }

        return {};
    }

    std::string Generator::RequestHelper(const std::string &name)
    {
        requested_helpers.insert(name);
        return helpers_prefix + name;
    }

    void Generator::EmitWrapperForFuncLike(OutputFile &file, const CInterop::BasicFuncLike &func_like, std::string_view prefix, std::string_view csharp_name)
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
                try
                {
                    const TypeBinding &param_binding = GetTypeBinding(ParseTypeOrThrow(param.cpp_type), param.uses_sugar);

                    // Note that we don't have fallback between usages with and without default args, unlike in the C generator.
                    const auto &param_usage = param.default_arg_affects_parameter_passing ? param_binding.param_usage_with_default_arg : param_binding.param_usage;
                    if (!param_usage)
                        throw std::runtime_error("The C++ parameter type `" + param.cpp_type + "`" + (param.uses_sugar ? " (with sugar enabled)" : "") + " is known, but isn't usable as a parameter type.");

                    param_usages.push_back(&*param_usage);
                    param_strings.push_back(param_usage->make_strings(param.name_or_placeholder));

                    if (param_strings.back().needs_unsafe)
                        func_is_unsafe = true;
                }
                catch (...)
                {
                    std::throw_with_nested(std::runtime_error("While handling parameter " + std::to_string(param_strings.size() + 1) + " out of " + std::to_string(func_like.params.size()) + ":"));
                }
            }


            // Write a separating empty line if needed.
            if (!file.contents.ends_with("{\n"))
                file.WriteString("\n");

            // The comment, if any.
            // This already has a trailing newline and the slashes.
            file.WriteString(func_like.comment.c_style);

            // Comments for default arguments, if any.
            for (const auto &param : func_like.params)
            {
                if (param.default_arg_spelling)
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
                if (extra_statements_after.empty())
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
            std::throw_with_nested(std::runtime_error("While emitting a wrapper function for C function `" + func_like.c_name + "`:"));
        }
    }

    void Generator::Generate()
    {
        { // Perform some initialization.
            // Set `helpers_prefix`.
            for (const auto &elem : helpers_namespace.parts)
            {
                helpers_prefix += CppdeclToCode(elem);
                helpers_prefix += '.';
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

            EmitWrapperForFuncLike(file, free_func, "public static", CppdeclToCode(qual_name.parts.back()));
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

            bool first = true;
            auto NeedHelper = [&](const std::string &name) -> bool
            {
                if (requested_helpers.erase(name))
                {
                    // A separator between helpers, if needed.
                    if (!file.contents.ends_with("{\n"))
                        file.WriteString("\n");

                    return true;
                }

                return false;
            };

            if (NeedHelper("BoolRef"))
            {
                file.WriteString(
                    "public unsafe class BoolRef\n"
                    "{\n"
                    "    internal byte* Ptr = null;\n"
                    "    internal BoolRef(byte *NewPtr) {Ptr = NewPtr;}\n" // Need this to have pretty oneliners.
                    "\n"
                    "    public bool Value\n"
                    "    {\n"
                    "        get => *Ptr != 0;\n"
                    "        set => *Ptr = value ? (byte)1 : (byte)0;\n"
                    "    }\n"
                    "}\n");
            }

            if (NeedHelper("InOut"))
            {
                file.WriteString(
                    "public class InOut<T> where T: unmanaged\n"
                    "{\n"
                    "    public T Value;\n"
                    "}\n"
                );
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
