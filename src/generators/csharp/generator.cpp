#include "generator.h"
#include "common/string_escape.h"

#include <cppdecl/declarations/parse.h>

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

    void OutputFile::WriteString(std::string_view input)
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
                for (std::size_t i = 0; i < current_scope.size(); i++)
                    contents += "    ";
            }

            contents += part;

            return false;
        });
    }

    void OutputFile::PopScope()
    {
        assert(!current_scope.empty());
        current_scope.pop_back();
        WriteString("}\n");
    }

    void OutputFile::PushScope(cppdecl::UnqualifiedName cpp_name, std::string_view code_header)
    {
        WriteString(code_header);
        WriteString("\n{\n");
        current_scope.push_back(std::move(cpp_name));
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
            if (i < current_scope.size() && current_scope[i] == new_namespace[i])
                continue; // This namespace is already open, nothing to do.

            // Pop any existing namespaces.
            while (i < current_scope.size())
                PopScope();

            // Push new ones, assuming those are plain namespaces.
            // Since C# namespaces can only contain classes, and not e.g. free functions, we instead use partial classes.
            // "Partial" you can reopen them later to add more members.
            PushScope(new_namespace[i], "public static partial class " + CppdeclToCode(new_namespace[i]));
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

        // Primitive types.
        if (!enable_sugar)
        {
            if (auto csharp_type_str = CToCSharpPrimitiveTypeOpt(cpp_type_str))
            {
                if (*csharp_type_str == "void")
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
                    return CreateBinding({
                        .param_usage = TypeBinding::ParamUsage{
                            .make_strings = [type = std::string(*csharp_type_str)](std::string_view cpp_param_name)
                            {
                                return TypeBinding::ParamUsage::Strings{
                                    .dllimport_decl_params = type + ' ' + std::string(cpp_param_name),
                                    .csharp_decl_params = type + ' ' + std::string(cpp_param_name),
                                    .csharp_args_for_c = std::string(cpp_param_name),
                                };
                            },
                        },
                        .return_usage = TypeBinding::ReturnUsage{
                            .dllimport_return_type = std::string(*csharp_type_str),
                            .csharp_return_type = std::string(*csharp_type_str),
                        },
                    });
                }
            }
        }

        return {};
    }

    void Generator::EmitWrapperForFuncLike(OutputFile &file, const CInterop::BasicFuncLike &func_like, std::string_view prefix, std::string_view csharp_name)
    {
        try
        {
            // Write a separating empty line if needed.
            if (!file.contents.ends_with("{\n"))
                file.WriteString("\n");

            // A comment, if any.
            // This already has a trailing newline and the slashes.
            file.WriteString(func_like.comment.c_style);

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

            // Write the return type.
            file.WriteString(ret_binding.return_usage->csharp_return_type);
            file.WriteString(" ");

            // Write the C# name.
            file.WriteString(csharp_name);

            // Generate the parameter strings.
            std::vector<TypeBinding::ParamUsage::Strings> param_strings;
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

                    param_strings.push_back(param_usage->make_strings(param.name_or_placeholder));
                }
                catch (...)
                {
                    std::throw_with_nested(std::runtime_error("While handling parameter " + std::to_string(param_strings.size()) + " out of " + std::to_string(func_like.params.size()) + ":"));
                }
            }

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
            file.WriteString("{\n");

            { // The `DllImport` declaration.
                file.WriteString("    [System.Runtime.InteropServices.DllImport(" + EscapeQuoteString(imported_lib_name) + ", EntryPoint = \"" + func_like.c_name + "\", ExactSpelling = true)]\n");
                file.WriteString("    extern static " + ret_binding.return_usage->dllimport_return_type + " __" + func_like.c_name);

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

            { // Call the imported function.
                std::string expr = "__" + func_like.c_name;

                { // The argument list.
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

                // The return expression.
                file.WriteString("    ");
                file.WriteString(ret_binding.return_usage->MakeReturnExpr(expr));
                file.WriteString("\n");
            }

            // End function body.
            file.WriteString("}\n");
        }
        catch (...)
        {
            std::throw_with_nested(std::runtime_error("While emitting a wrapper function for C function `" + func_like.c_name + "`:"));
        }
    }

    void Generator::Generate()
    {
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

        { // Lastly, close the namespaces in all files.
            for (auto &file : output_files)
                file.second.EnsureNamespace({});
        }
    }
}
