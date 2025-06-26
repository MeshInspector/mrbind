#include "generators/c/binding_common.h"
#include "generators/c/module.h"

#include <vector>

namespace mrbind::CBindings::Modules
{
    struct StdFunction : DeriveModule<StdFunction>
    {
        // Here we try to handle parameter names, but sadly they arrive empty from the parser, so we can't do much.

        cppdecl::QualifiedName base_name = cppdecl::QualifiedName{}.AddPart("std").AddPart("function");

        std::optional<Generator::BindableType> GetBindableType(Generator &generator, const cppdecl::Type &type, const std::string &type_str) override
        {
            (void)type_str;

            std::optional<Generator::BindableType> ret;

            if (!type.IsOnlyQualifiedName() || !type.simple_type.name.Equals(base_name, cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target))
                return ret;

            if (!type.simple_type.name.parts.back().template_args || type.simple_type.name.parts.back().template_args->args.size() != 1)
                throw std::runtime_error("Expected `std::function<...>` to have exactly one template argument.");

            // This can throw if the template parameter is not a type. We don't mind.
            const cppdecl::Type &cpp_elem_type = std::get<cppdecl::Type>(type.simple_type.name.parts.back().template_args.value().args.at(0).var);

            if (!cpp_elem_type.Is<cppdecl::Function>())
                throw std::runtime_error("Expected the template parameter of `std::function<...>` to be a function type, but got: " + cppdecl::ToString(cpp_elem_type, {}));

            // Come up with a nicer C name. We don't use the default one, because it ends up being `MR_std_function_R_func_from_A_B`.
            // That `_func_` is from the function type. It makes complete sense in all other cases, but not here!
            std::string c_type_name_base;
            {
                c_type_name_base = cppdecl::ToString(base_name, cppdecl::ToStringFlags::identifier);

                c_type_name_base += '_';
                c_type_name_base += cppdecl::ToString(cpp_elem_type, cppdecl::ToStringFlags::identifier);

                for (bool first = true; const auto &param : cpp_elem_type.As<cppdecl::Function>()->params)
                {
                    std::string param_str = cppdecl::ToString(param, cppdecl::ToStringFlags::identifier);
                    if (!param_str.empty())
                    {
                        if (first)
                        {
                            first = false;
                            c_type_name_base += "_from";
                        }
                        c_type_name_base += '_';
                        c_type_name_base += param_str;
                    }
                }
            }

            HeapAllocatedClassBinder binder = HeapAllocatedClassBinder::ForCustomType(generator, type.simple_type.name, c_type_name_base);

            binder.traits = Generator::TypeTraits::CopyableNonTrivial{};


            // Note that usages of the return type and parameter types of the wrapped callback are INVERTED.
            // We have to use param usage for the returned value, and return usages for the parameters.


            // Find return usage for the wrapped function.
            cppdecl::Type cpp_callback_return_type = cpp_elem_type;
            cpp_callback_return_type.RemoveModifier();

            const Generator::BindableType &callback_return_type_binding = generator.FindBindableType(cpp_callback_return_type);
            if (!callback_return_type_binding.param_usage && !callback_return_type_binding.param_usage_with_default_arg)
                throw std::runtime_error("The return type of `std::function`, which is `" + cppdecl::ToCode(cpp_callback_return_type, cppdecl::ToCodeFlags::canonical_c_style) + "`, doesn't have a parameter usage.");

            const Generator::BindableType::ParamUsage &callback_return_usage = callback_return_type_binding.param_usage ? callback_return_type_binding.param_usage.value() : callback_return_type_binding.param_usage_with_default_arg.value();


            // Find parameter usages for the wrapped function.
            std::vector<const Generator::BindableType::ReturnUsage *> callback_param_usages;
            callback_param_usages.reserve(cpp_elem_type.As<cppdecl::Function>()->params.size());
            for (const auto &param : cpp_elem_type.As<cppdecl::Function>()->params)
            {
                const Generator::BindableType &param_type_binding = generator.FindBindableType(param.type);
                if (!param_type_binding.return_usage)
                    throw std::runtime_error("A parameter type of `std::function`, a `" + cppdecl::ToCode(param.type, cppdecl::ToCodeFlags::canonical_c_style) + "`, doesn't have a return usage.");
                callback_param_usages.push_back(&param_type_binding.return_usage.value());
            }


            // Now assemble the C function type.
            if (callback_return_usage.c_params.size() != 1)
                throw std::runtime_error("The return type of `std::function`, which is `" + cppdecl::ToCode(cpp_callback_return_type, cppdecl::ToCodeFlags::canonical_c_style) + "`, must bind to exactly one C parameter.");
            cppdecl::Type c_func_type = callback_return_usage.c_params.front().c_type;
            c_func_type.AddModifier(cppdecl::Function{});
            {
                cppdecl::Function *c_func = c_func_type.As<cppdecl::Function>();
                for (std::size_t i = 0; i < callback_param_usages.size(); i++)
                {
                    const auto &param_usage = callback_param_usages[i];
                    auto &param = c_func->params.emplace_back();
                    param.type = param_usage->c_type;
                    param.name = cpp_elem_type.As<cppdecl::Function>()->params.at(i).name;

                    // Adjust the parameter names ourselves, for clarity in the signature.
                    // The condition should always pass, since the parser doesn't seem to emit the parameter names here.
                    if (param.name.IsEmpty())
                        param.name = cppdecl::QualifiedName::FromSingleWord('_' + std::to_string(i + 1));
                }
            }


            cppdecl::Type c_func_type_with_userdata_ptr = c_func_type;
            {
                auto &userdata_param = c_func_type_with_userdata_ptr.As<cppdecl::Function>()->params.emplace_back();
                userdata_param.type = cppdecl::Type::FromSingleWord("void").AddModifier(cppdecl::Pointer{});
                userdata_param.name = cppdecl::QualifiedName::FromSingleWord("_userdata");
            }


            auto get_output_file = [
                type,
                cpp_elem_type,
                cpp_callback_return_type,
                c_type_name_base,
                c_func_type,
                c_func_type_with_userdata_ptr,
                callback_return_usage,
                callback_param_usages,
                binder
            ](Generator &generator) -> Generator::OutputFile &
            {
                bool is_new = false;
                Generator::OutputFile &file = generator.GetPublicHelperFile(c_type_name_base, &is_new);

                if (is_new)
                {
                    file.source.stdlib_headers.insert("functional"); // For `std::function`.
                    TryIncludeHeadersForCppTypeInSourceFile(generator, file, type);


                    file.header.contents += "\n/// Stores a functor of type: `" + cppdecl::ToCode(cpp_elem_type, cppdecl::ToCodeFlags::canonical_c_style) + "`. Possibly stateful.\n";
                    binder.EmitForwardDeclaration(generator, file);

                    // The special member functions:
                    binder.EmitSpecialMemberFunctions(generator, file);

                    // Some custom functions:

                    auto PrepareLambda = [&](std::string_view called_func_name) -> Generator::EmitFuncParams
                    {
                        Generator::EmitFuncParams ret;

                        const cppdecl::Function &func = *cpp_elem_type.As<cppdecl::Function>();

                        ret.cpp_return_type = cpp_callback_return_type;
                        ret.use_return_type_as_is = true;

                        // Add the headers for the return type manually.
                        generator.ApplyTypeDependenciesToFile(file, callback_return_usage.same_addr_bindable_type_dependencies);
                        ret.extra_headers.MergeFrom(callback_return_usage.extra_headers);

                        ret.params.reserve(func.params.size());
                        for (std::size_t i = 0; i < func.params.size(); i++)
                        {
                            const auto &param_usage = *callback_param_usages.at(i);

                            std::string this_param_name = cppdecl::ToString(func.params.at(i).name, cppdecl::ToStringFlags::identifier);

                            ret.params.push_back({
                                .name = this_param_name,
                                .custom_argument_spelling = [&param_usage, &file](std::string_view param_name) -> std::string
                                {
                                    return param_usage.MakeReturnExpr(file.source, param_name);
                                },
                                .cpp_type = func.params.at(i).type,
                                .use_type_as_is = true,
                            });

                            // Add the headers manually.
                            generator.ApplyTypeDependenciesToFile(file, param_usage.same_addr_bindable_type_dependencies);
                            ret.extra_headers.MergeFrom(param_usage.extra_headers);

                            // Add the comments.
                            std::string comment;
                            if (param_usage.append_to_comment)
                            {
                                comment = param_usage.append_to_comment(this_param_name);
                                if (!comment.empty())
                                {
                                    ret.c_comment += comment;
                                    ret.c_comment += '\n';
                                }
                            }
                        }

                        ret.cpp_called_func = called_func_name;

                        // Now adjust the return expression.
                        ret.make_return_expr = [&file, &callback_return_usage](std::string_view expr) -> std::string
                        {
                            std::string ret = "decltype(auto) _return_value = " + std::string(expr) + ";\n    ";
                            ret += "return " + callback_return_usage.CParamsToCpp(file.source, "_return_value", {}) + ";";
                            return ret;
                        };

                        // The return comment.
                        if (callback_return_usage.append_to_comment)
                        {
                            std::string comment = callback_return_usage.append_to_comment("", false);
                            if (!comment.empty())
                            {
                                ret.c_comment += comment;
                                ret.c_comment += '\n';
                            }
                        }


                        // Now finally, remove the trailing newline from the comment, if any.
                        if (!ret.c_comment.empty())
                        {
                            assert(ret.c_comment.back() == '\n');
                            ret.c_comment.pop_back();
                        }

                        return ret;
                    };

                    { // Assign stateless.
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Assign a stateless function.";
                        emit.c_name = binder.MakeMemberFuncName("Assign");
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), false);
                        emit.params.push_back({
                            .name = "func",
                            .cpp_type = cppdecl::Type(c_func_type).AddModifier(cppdecl::Pointer{}),
                            .use_type_as_is = true,
                        });


                        Generator::EmitFuncParams emit_lambda = PrepareLambda("_f");

                        auto strings = generator.EmitFunctionAsStrings(file, emit_lambda);
                        strings.decl.type.As<cppdecl::Function>()->uses_trailing_return_type = true;

                        emit.cpp_called_func = "@this@ = [_f = @1@]";
                        emit.cpp_called_func += cppdecl::ToCode(strings.decl.type, cppdecl::ToCodeFlags::canonical_c_style | cppdecl::ToCodeFlags::lambda);
                        emit.cpp_called_func += '\n';
                        emit.cpp_called_func += generator.IndentString(strings.body, 1, true);

                        generator.EmitFunction(file, emit);
                    }
                }

                return file;
            };

            Generator::BindableType &new_type = ret.emplace();
            binder.FillCommonParams(generator, new_type);
            new_type.bindable_with_same_address.declared_in_file = [&generator, get_output_file]() -> auto & {return get_output_file(generator);};

            return ret;
        }
    };
}
