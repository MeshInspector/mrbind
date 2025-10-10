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

            // Find return usage for the wrapped function.
            const cppdecl::Type cpp_callback_return_type = cppdecl::Type(cpp_elem_type).RemoveModifier();
            const bool cpp_callback_return_type_is_void = cpp_callback_return_type.AsSingleWord() == "void";

            // Come up with a nicer C name for the function class. We don't use the default one, because it ends up being `MR_std_function_R_func_from_A_B`.
            // That `_func_` is from the function type. It makes complete sense in all other cases, but not here!
            std::string c_type_name_base;
            {
                c_type_name_base = generator.CppdeclToIdentifier(base_name);

                c_type_name_base += '_';
                c_type_name_base += generator.CppdeclToIdentifier(cpp_callback_return_type);

                for (bool first = true; const auto &param : cpp_elem_type.As<cppdecl::Function>()->params)
                {
                    std::string param_str = generator.CppdeclToIdentifier(param);
                    if (!param_str.empty())
                    {
                        if (first)
                        {
                            first = false;
                            c_type_name_base += "_from"; // Hmm, should we capitalize this?
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


            // This is null if the return type is `void`.
            const Generator::BindableType *callback_return_type_binding = nullptr;
            const Generator::BindableType::ParamUsage *callback_return_usage = nullptr;

            if (!cpp_callback_return_type_is_void)
            {
                callback_return_type_binding = &generator.FindBindableType(cpp_callback_return_type);

                if (!callback_return_type_binding->param_usage && !callback_return_type_binding->param_usage_with_default_arg)
                    throw std::runtime_error("The return type of `std::function`, which is `" + generator.CppdeclToCode(cpp_callback_return_type) + "`, doesn't have a parameter usage.");

                callback_return_usage = callback_return_type_binding->param_usage ? &callback_return_type_binding->param_usage.value() : &callback_return_type_binding->param_usage_with_default_arg.value();
            }


            // Find parameter usages for the wrapped function.
            std::vector<const Generator::BindableType::ReturnUsage *> callback_param_usages;
            callback_param_usages.reserve(cpp_elem_type.As<cppdecl::Function>()->params.size());
            for (const auto &param : cpp_elem_type.As<cppdecl::Function>()->params)
            {
                // Adjust the type by replacing non-references with rvalue references, but only if they are not built-in C types.
                // This adds the weird comments, but at least the callback no longer needs to deallocate heap objects all the time. This is too dumb otherwise.
                cppdecl::Type fixed_type = param.type;
                if (!fixed_type.Is<cppdecl::Reference>() && !generator.IsSimplyBindableDirect(fixed_type))
                    fixed_type.AddModifier(cppdecl::Reference{.kind = cppdecl::RefQualifier::rvalue});

                const Generator::BindableType &param_type_binding = generator.FindBindableType(fixed_type);
                if (!param_type_binding.return_usage)
                    throw std::runtime_error("A parameter type of `std::function`, a `" + generator.CppdeclToCode(fixed_type) + "`, doesn't have a return usage.");
                callback_param_usages.push_back(&param_type_binding.return_usage.value());
            }


            // Now assemble the C function type:

            // Initially set the return type to `void`.
            cppdecl::Type c_func_type = cppdecl::Type::FromSingleWord("void");

            // Since our return usage is internally a parameter usage (because callbacks have to do things in reverse), it can have more than one C parameter corresponding to it.
            // And working around that by removing sugar isn't really viable, because you can't do that to by-value classes (that have pass-by parameters), they don't have desugared versions at all.
            // So instead what we do is pick ONE of those parameters as the return type (the one with no name suffix),
            //   and the rest are implemented as output parameters.
            if (callback_return_usage)
            {
                for (const auto &c_param : callback_return_usage->c_params)
                {
                    if (c_param.name_suffix.empty())
                        c_func_type = c_param.c_type; // This goes to the return type as is.
                }
            }

            c_func_type.AddModifier(cppdecl::Function{});

            const std::string output_parameters_base_name = "_return";

            // Same names as will be in `c_func_type`. But that can also have leading output parameters, which will not be mentioned in this vector.
            // We create this vector only because of those output parameters which we don't want here.
            std::vector<std::string> fixed_parameter_names;
            fixed_parameter_names.reserve(callback_param_usages.size());

            { // Fill the parameters of the function type.
                cppdecl::Function *c_func = c_func_type.As<cppdecl::Function>();

                // Add the output parameters for the return value, as explained above.
                if (callback_return_usage)
                {
                    for (const auto &usage_c_param : callback_return_usage->c_params)
                    {
                        if (!usage_c_param.name_suffix.empty())
                        {
                            auto &c_param = c_func->params.emplace_back();
                            c_param.name = cppdecl::QualifiedName::FromSingleWord(output_parameters_base_name + usage_c_param.name_suffix);
                            c_param.type = cppdecl::Type(usage_c_param.c_type).AddModifier(cppdecl::Pointer{});
                        }
                    }
                }

                // The regular parameters.
                for (std::size_t i = 0; i < callback_param_usages.size(); i++)
                {
                    const auto &param_usage = callback_param_usages[i];
                    auto &param = c_func->params.emplace_back();
                    param.type = param_usage->c_type;

                    // Adjust the parameter names ourselves, for clarity in the signature.
                    // The condition should always pass, since the parser doesn't seem to emit the parameter names here.
                    std::string fixed_param_name = generator.CppdeclToIdentifier(cpp_elem_type.As<cppdecl::Function>()->params.at(i).name);
                    if (fixed_param_name.empty())
                        fixed_param_name = '_' + std::to_string(i + 1);

                    param.name = cppdecl::QualifiedName::FromSingleWord(fixed_param_name);
                    fixed_parameter_names.push_back(std::move(fixed_param_name));
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
                output_parameters_base_name,
                c_type_name_base,
                c_func_type,
                c_func_type_with_userdata_ptr,
                fixed_parameter_names,
                callback_return_usage,
                callback_param_usages,
                binder
            ](Generator &generator) -> Generator::OutputFile &
            {
                bool is_new = false;
                Generator::OutputFile &file = *generator.GetPublicHelperFile(c_type_name_base, &is_new);

                if (is_new)
                {
                    binder.EmitForwardDeclaration(generator, file, "/// Stores a functor of type: `" + generator.CppdeclToCodeForComments(cpp_elem_type) + "`. Possibly stateful.\n");

                    // The special member functions:
                    binder.EmitSpecialMemberFunctions(generator, file);

                    // Some custom functions:

                    // Writes the extra comment to `out_comment`.
                    // If it's already non-empty, will add `\n` after the existing contents and before ours.
                    // Will not add a trailing `\n`.
                    auto PrepareLambda = [&](std::string_view called_func_name, std::string &out_comment) -> Generator::EmitFuncParams
                    {
                        Generator::EmitFuncParams ret;

                        const cppdecl::Function &func = *cpp_elem_type.As<cppdecl::Function>();

                        ret.cpp_return_type = cpp_callback_return_type;
                        ret.use_return_type_as_is = true;

                        // Add the headers for the return type manually.
                        if (callback_return_usage)
                        {
                            generator.ApplyTypeDependenciesToFile(file, callback_return_usage->same_addr_bindable_type_dependencies);
                            ret.extra_headers.MergeFrom(callback_return_usage->extra_headers);
                        }

                        ret.params.reserve(func.params.size());
                        for (std::size_t i = 0; i < func.params.size(); i++)
                        {
                            const auto &param_usage = *callback_param_usages.at(i);

                            ret.params.push_back({
                                .name = fixed_parameter_names.at(i),
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
                            if (param_usage.append_to_comment)
                            {
                                // Here must read the name from `c_func_type`, not from `func`, because there they might be unnamed.
                                std::string new_part = param_usage.append_to_comment(fixed_parameter_names.at(i));
                                if (!new_part.empty())
                                {
                                    if (!out_comment.empty())
                                        out_comment += '\n';
                                    out_comment += new_part;
                                }
                            }
                        }

                        ret.cpp_called_func = called_func_name;

                        // Handle returning.
                        if (callback_return_usage)
                        {
                            // Declare variables for the output parameters.
                            for (const auto &usage_c_param : callback_return_usage->c_params)
                            {
                                if (!usage_c_param.name_suffix.empty())
                                {
                                    cppdecl::Decl var_decl;
                                    var_decl.type = usage_c_param.c_type;
                                    var_decl.name = cppdecl::QualifiedName::FromSingleWord(output_parameters_base_name + usage_c_param.name_suffix);
                                    ret.cpp_extra_statements += generator.CppdeclToCode(var_decl) + " = {};\n";

                                    // Pass those variables too.
                                    ret.extra_args_before.push_back("&" + output_parameters_base_name + usage_c_param.name_suffix);

                                    { // And append to the comment.
                                        if (!out_comment.empty())
                                            out_comment += '\n';

                                        out_comment += "/// Callback parameter `" + output_parameters_base_name + usage_c_param.name_suffix + "` is an output parameter. It's will never be null, and initially points to a zeroed variable.";
                                    }
                                }
                            }
                            if (!ret.cpp_extra_statements.empty())
                            {
                                assert(ret.cpp_extra_statements.back() == '\n');
                                ret.cpp_extra_statements.pop_back();
                            }

                            // Now adjust the return expression.
                            ret.make_return_expr = [&file, callback_return_usage, output_parameters_base_name](std::string_view expr) -> std::string
                            {
                                std::string ret = "decltype(auto) " + output_parameters_base_name + " = " + std::string(expr) + ";\n    ";
                                ret += "return " + callback_return_usage->CParamsToCpp(file.source, output_parameters_base_name, {}) + ";";
                                return ret;
                            };
                        }

                        // The return comment.
                        if (callback_return_usage && callback_return_usage->append_to_comment)
                        {
                            std::string new_part = callback_return_usage->append_to_comment(output_parameters_base_name, false, true);
                            if (!new_part.empty())
                            {
                                if (!out_comment.empty())
                                    out_comment += '\n';
                                out_comment += new_part;
                            }
                        }

                        return ret;
                    };

                    { // Assign stateless.
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Assign a stateless function.";
                        emit.c_name = binder.MakeMemberFuncName(generator, "Assign");
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), false);
                        emit.params.push_back({
                            .name = "func",
                            .cpp_type = cppdecl::Type(c_func_type).AddModifier(cppdecl::Pointer{}),
                            .use_type_as_is = true,
                        });


                        Generator::EmitFuncParams emit_lambda = PrepareLambda("_f", emit.c_comment_trailing);

                        auto strings = generator.EmitFunctionAsStrings(file, emit_lambda);
                        strings.decl.type.As<cppdecl::Function>()->uses_trailing_return_type = true;

                        emit.cpp_extra_statements =
                            "auto &_self = @this@;\n"
                            "if (!@1@)\n" // Not moving `@1@` to a variable because it's just a plain argument.
                            "{\n"
                            "    _self = nullptr;\n"
                            "    return;\n"
                            "}";

                        emit.cpp_called_func = "_self = [_f = @1@]";
                        emit.cpp_called_func += generator.CppdeclToCode(strings.decl.type, cppdecl::ToCodeFlags::lambda);
                        emit.cpp_called_func += '\n';
                        emit.cpp_called_func += generator.IndentString(strings.body, 1, true);

                        generator.EmitFunction(file, emit);
                    }

                    { // Assign with user data pointer.
                        Generator::EmitFuncParams emit;
                        emit.c_comment =
                            "/// Assign a function with an extra user data pointer.\n"
                            "/// Parameter `userdata_callback` can be null. Pass null if you don't need custom behavior when destroying and/or copying the functor.";

                        emit.c_name = binder.MakeMemberFuncName(generator, "AssignWithDataPtr");
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), false);
                        emit.params.push_back({
                            .name = "func",
                            .cpp_type = cppdecl::Type(c_func_type_with_userdata_ptr).AddModifier(cppdecl::Pointer{}),
                            .use_type_as_is = true,
                        });
                        emit.params.push_back({
                            .name = "userdata",
                            .cpp_type = cppdecl::Type::FromSingleWord("void").AddModifier(cppdecl::Pointer{}),
                        });

                        std::vector<cppdecl::MaybeAmbiguousDecl> userdata_cb_params;
                        userdata_cb_params.emplace_back();
                        userdata_cb_params.back().name = cppdecl::QualifiedName::FromSingleWord("_this_userdata");
                        userdata_cb_params.back().type = cppdecl::Type::FromSingleWord("void").AddModifier(cppdecl::Pointer{}).AddModifier(cppdecl::Pointer{});
                        userdata_cb_params.emplace_back();
                        userdata_cb_params.back().name = cppdecl::QualifiedName::FromSingleWord("_other_userdata");
                        userdata_cb_params.back().type = cppdecl::Type::FromSingleWord("void").AddModifier(cppdecl::Pointer{});

                        emit.params.push_back({
                            .name = "userdata_callback",
                            .cpp_type = cppdecl::Type::FromSingleWord("void").AddModifier(cppdecl::Function{.params = userdata_cb_params}).AddModifier(cppdecl::Pointer{}),
                            .use_type_as_is = true,
                        });


                        Generator::EmitFuncParams emit_lambda = PrepareLambda("_func", emit.c_comment_trailing);

                        // Add more stuff to the comment.
                        if (!emit.c_comment_trailing.empty())
                            emit.c_comment_trailing += '\n';
                        emit.c_comment_trailing +=
                            "/// How to use `userdata_callback`:\n"
                            "///   The `_this_userdata` parameter will never be null.\n"
                            "///   If `*_this_userdata` is non-null and `_other_userdata` is     null, the functor is being destroyed. Perform any cleanup if needed.\n"
                            "///   If `*_this_userdata` is     null and `_other_userdata` is non-null, a copy of the functor is being constructed. Perform copying if needed and write the new userdata to `*_this_userdata`.\n"
                            "///   If `*_this_userdata` is non-null and `_other_userdata` is non-null, the functor is being assigned. The simplest option is to destroy `*_this_userdata` first, and then behave as if it was null.";

                        emit_lambda.extra_args_after.push_back("_userdata");

                        auto strings = generator.EmitFunctionAsStrings(file, emit_lambda);
                        strings.decl.type.As<cppdecl::Function>()->uses_trailing_return_type = true;

                        emit.cpp_extra_statements =
                            "auto &_self = @this@;\n"
                            "if (!@1@)\n" // Not moving `@1@` to a variable because it's just a plain argument.
                            "{\n"
                            "    _self = nullptr;\n"
                            "    return;\n"
                            "}\n"
                            "\n"
                            "struct _functor\n"
                            "{\n"
                            "    decltype(@1@) _func = nullptr;\n"
                            "    void *_userdata = nullptr;\n"
                            "    decltype(@3@) _userdata_cb = nullptr;\n"
                            "\n"
                            "    _functor(decltype(@1@) _func, void *_userdata, decltype(@3@) _userdata_cb) : _func(_func), _userdata(_userdata), _userdata_cb(_userdata_cb) {}\n"
                            "\n"
                            "    _functor(const _functor &_other) : _func(_other._func), _userdata_cb(_other._userdata_cb)\n"
                            "    {\n"
                            "        if (!_other._userdata) return; // No data to copy.\n"
                            "        if (!_userdata_cb) {_userdata = _other._userdata; return;} // No callback, just copy the data.\n"
                            "        _userdata_cb(&_userdata, _other._userdata);\n"
                            "    }\n"
                            "\n"
                            "    _functor(_functor &&_other) noexcept : _func(_other._func), _userdata(_other._userdata), _userdata_cb(_other._userdata_cb)\n"
                            "    {\n"
                            "        _other._func = nullptr;\n"
                            "        _other._userdata = nullptr;\n"
                            "        _other._userdata_cb = nullptr;\n"
                            "    }\n"
                            "\n"
                            "    _functor &operator=(const _functor &_other)\n"
                            "    {\n"
                            "        if (_userdata_cb && _userdata_cb != _other._userdata_cb) // Callback exists but incompatible, destroy the old contents first.\n"
                            "        {\n"
                            "            _userdata_cb(&_userdata, nullptr);\n"
                            "            _userdata = nullptr; // Don't need to zero the callbacks, we'll overwrite them anyway.\n"
                            "        }\n"
                            "        _func = _other._func;\n"
                            "        _userdata_cb = _other._userdata_cb;\n"
                            "        if (_other._userdata && _userdata_cb) // If we have data to copy and a callback, use the callback. The data must be non-null, otherwise the callback will confuse this for a copy construction.\n"
                            "            _userdata_cb(&_userdata, _other._userdata);\n"
                            "        else // Otherwise shallow-copy.\n"
                            "            _userdata = _other._userdata;\n"
                            "        return *this;\n"
                            "    }\n"
                            "\n"
                            "    _functor &operator=(_functor &&_other) noexcept\n"
                            "    {\n"
                            "        _func = _other._func;\n"
                            "        _userdata = _other._userdata;\n"
                            "        _userdata_cb = _other._userdata_cb;\n"
                            "        _other._func = nullptr;\n"
                            "        _other._userdata = nullptr;\n"
                            "        _other._userdata_cb = nullptr;\n"
                            "        return *this;\n"
                            "    }\n"
                            "\n"
                            "    ~_functor()\n"
                            "    {\n"
                            "        if (_userdata && _userdata_cb)\n"
                            "            _userdata_cb(&_userdata, nullptr);\n"
                            "    }\n"
                            "\n"
                            "    auto operator()" + generator.CppdeclToCode(strings.decl.type, cppdecl::ToCodeFlags::lambda) + "\n"
                            "    " + generator.IndentString(strings.body, 1, false) + "\n"
                            "};\n"
                            ;

                        emit.cpp_called_func = "_self = _functor{@1@, @2@, @3@}";

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

        std::optional<std::string> GetCppIncludeForQualifiedName(Generator &generator, const cppdecl::QualifiedName &name) override
        {
            (void)generator;
            if (name.Equals(base_name, cppdecl::QualifiedName::EqualsFlags::allow_less_parts_in_target | cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target))
                return "functional";
            return {};
        }
    };
}
