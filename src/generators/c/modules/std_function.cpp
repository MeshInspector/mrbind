#include "generators/c/binding_common.h"
#include "generators/c/module.h"

#include <vector>

// If you change anything in this file, you might need to sync the changes with the C# code.

namespace mrbind::C::Modules
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
                // Desugar this because returning `std::string` with sugar in C# is annoyingly difficult, since there's nothing you could pass to the cleanup callback, because you'd need to preserve the fixed pointers.
                // The only proper fix that comes to mind is passing a lambda to the callback that could be used to construct the return value, but I'm not entirely sure how to do that with zero moves,
                //   and if we allow moves, just returning a desugared object is the same thing.
                //
                // When adding or removing sugar here, sync it with C#.
                callback_return_type_binding = &generator.FindBindableType(cpp_callback_return_type, true);

                if (!callback_return_type_binding->param_usage && !callback_return_type_binding->param_usage_with_default_arg)
                    throw std::runtime_error("The return type of `std::function`, which is `" + generator.CppdeclToCode(cpp_callback_return_type) + "`, doesn't have a parameter usage.");

                callback_return_usage = callback_return_type_binding->param_usage ? &callback_return_type_binding->param_usage.value() : &callback_return_type_binding->param_usage_with_default_arg.value();
            }


            // Find parameter types and usages for the wrapped function.

            std::vector<cppdecl::Type> callback_param_cpp_types;
            callback_param_cpp_types.reserve(cpp_elem_type.As<cppdecl::Function>()->params.size());

            std::vector<const Generator::BindableType::ReturnUsage *> callback_param_usages;
            callback_param_usages.reserve(cpp_elem_type.As<cppdecl::Function>()->params.size());

            for (const auto &param : cpp_elem_type.As<cppdecl::Function>()->params)
            {
                callback_param_cpp_types.push_back(param.type);

                // Adjust the type by replacing non-references with rvalue references, but only if they are not simple enough types, such as scalars or enums.
                // This adds the weird comments, but at least the callback no longer needs to deallocate heap objects all the time. This is too dumb otherwise.
                // This condition (`IsSimplyBindableDirectCast()`) needs to be synced with C#.
                cppdecl::Type fixed_type = param.type;
                if (!fixed_type.Is<cppdecl::Reference>() && !generator.IsSimplyBindableDirectCast(fixed_type))
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


            cppdecl::Type c_func_type_with_extra_ptr_params = c_func_type;
            {
                auto &userdata_param = c_func_type_with_extra_ptr_params.As<cppdecl::Function>()->params.emplace_back();
                userdata_param.type = cppdecl::Type::FromSingleWord("void").AddModifier(cppdecl::Pointer{});
                userdata_param.name = cppdecl::QualifiedName::FromSingleWord("_userdata");

                auto &cleanup_param = c_func_type_with_extra_ptr_params.As<cppdecl::Function>()->params.emplace_back();
                cleanup_param.type = cppdecl::Type::FromSingleWord("void").AddModifier(cppdecl::Pointer{}).AddModifier(cppdecl::Pointer{});
                cleanup_param.name = cppdecl::QualifiedName::FromSingleWord("_cleanup_value");
            }


            auto get_output_file = [
                type,
                cpp_elem_type,
                cpp_callback_return_type,
                callback_param_cpp_types,
                output_parameters_base_name,
                c_type_name_base,
                c_func_type,
                c_func_type_with_extra_ptr_params,
                fixed_parameter_names,
                callback_return_usage,
                callback_param_usages,
                pass_by_enum_name = generator.GetPassByEnumName(),
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

                    { // `has_value()`
                        Generator::EmitFuncParams emit;
                        emit.c_comment += "/// Returns true if this instance stores a callable, as opposed to being null.";
                        emit.name = binder.MakeMemberFuncName(generator, "has_value", CInterop::MethodKinds::ConversionOperator{});
                        emit.cpp_return_type = cppdecl::Type::FromSingleWord("bool");
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), true);
                        emit.cpp_called_func = "bool(@this@)";
                        generator.EmitFunction(file, emit);
                    }

                    { // `reset()`
                        Generator::EmitFuncParams emit;
                        emit.c_comment += "/// Destroys the stored callable, making this instance null.";
                        emit.name = binder.MakeMemberFuncName(generator, "reset");
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), false);
                        emit.cpp_called_func = "@this@ = nullptr";
                        generator.EmitFunction(file, emit);
                    }

                    { // Call.
                        Generator::EmitFuncParams emit;
                        emit.c_comment += "/// Calls the stored callable.";
                        emit.name = binder.MakeMemberFuncName(generator, "call", CInterop::MethodKinds::Operator{.token = "()"});

                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), true);

                        emit.cpp_return_type = cpp_callback_return_type;
                        for (std::size_t i = 0; i < callback_param_cpp_types.size(); i++)
                        {
                            emit.params.push_back({
                                .name = "_" + std::to_string(i + 1), // 1-based indices for user-friendliness.
                                .cpp_type = callback_param_cpp_types[i],
                            });
                        }

                        emit.cpp_called_func = "operator()"; // It's easier to do this than `"@this@"`, since the latter will omit `()` when there are no arguments.
                        generator.EmitFunction(file, emit);
                    }

                    // Writes the extra comment to `out_comment`.
                    // If it's already non-empty, will add `\n` after the existing contents and before ours.
                    // Will not add a trailing `\n`.
                    auto PrepareLambda = [&](std::string_view called_func_name, std::string &out_comment) -> Generator::EmitFuncParams
                    {
                        Generator::EmitFuncParams ret;
                        ret.is_noexcept = true; // We don't want to catch exceptions from the user-provided C function.

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

                                        out_comment += "/// Callback parameter `" + output_parameters_base_name + usage_c_param.name_suffix + "` is an output parameter. It will never be null, and initially points to a zeroed variable.";
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
                                std::string ret = "decltype(auto) " + output_parameters_base_name + " = " + std::string(expr) + ";\n";

                                if (callback_return_usage->early_non_throwing_statements)
                                {
                                    std::string str = callback_return_usage->early_non_throwing_statements(output_parameters_base_name);
                                    if (!str.empty())
                                    {
                                        assert(str.ends_with('\n'));
                                        ret += str;
                                    }
                                }

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

                    { // Construct stateless.
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Construct a stateless function.";
                        emit.name = binder.MakeMemberFuncName(generator, "ConstructStateless", CInterop::MethodKinds::Constructor{}); // Intentionally implicit.
                        emit.name.ignore_in_interop = true; // C binding wrappers will likely want to ignore this, and write their own custom replacements.

                        emit.cpp_return_type = cppdecl::Type::FromQualifiedName(binder.cpp_type_name);
                        emit.params.push_back({
                            .name = "func",
                            .cpp_type = cppdecl::Type(c_func_type).AddModifier(cppdecl::Pointer{}),
                            .use_type_as_is = true,
                        });


                        Generator::EmitFuncParams emit_lambda = PrepareLambda("_f", emit.c_comment_trailing);

                        auto strings = generator.EmitFunctionAsStrings(file, emit_lambda);
                        strings.decl.type.As<cppdecl::Function>()->uses_trailing_return_type = true;

                        emit.cpp_called_func = "@1@ ? " + generator.CppdeclToCode(binder.cpp_type_name) + "([_f = @1@]";
                        emit.cpp_called_func += generator.CppdeclToCode(strings.decl.type, cppdecl::ToCodeFlags::lambda);
                        emit.cpp_called_func += '\n';
                        emit.cpp_called_func += strings.body;
                        emit.cpp_called_func += ") : nullptr";

                        generator.EmitFunction(file, emit);
                    }

                    { // Assign stateless.
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Assign a stateless function.";

                        emit.name = binder.MakeMemberFuncName(generator, "Assign");
                        emit.name.ignore_in_interop = true; // C binding wrappers will likely want to ignore this, and write their own custom replacements.

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
                        emit.cpp_called_func += strings.body;

                        generator.EmitFunction(file, emit);
                    }

                    { // Construct and assign stateful.
                        std::string trailing_comment;

                        cppdecl::Type funcptr_with_extra_ptr_params = cppdecl::Type(c_func_type_with_extra_ptr_params).AddModifier(cppdecl::Pointer{});

                        std::vector<cppdecl::MaybeAmbiguousDecl> postcall_cb_params;
                        postcall_cb_params.emplace_back();
                        postcall_cb_params.back().name = cppdecl::QualifiedName::FromSingleWord("_userdata");
                        postcall_cb_params.back().type = cppdecl::Type::FromSingleWord("void").AddModifier(cppdecl::Pointer{});
                        postcall_cb_params.emplace_back();
                        postcall_cb_params.back().name = cppdecl::QualifiedName::FromSingleWord("_cleanup_value");
                        postcall_cb_params.back().type = cppdecl::Type::FromSingleWord("void").AddModifier(cppdecl::Pointer{});

                        cppdecl::Type funcptr_postcall_cb = cppdecl::Type::FromSingleWord("void").AddModifier(cppdecl::Function{.params = postcall_cb_params}).AddModifier(cppdecl::Pointer{});

                        std::vector<cppdecl::MaybeAmbiguousDecl> userdata_cb_params;
                        userdata_cb_params.emplace_back();
                        userdata_cb_params.back().name = cppdecl::QualifiedName::FromSingleWord("_this_userdata");
                        userdata_cb_params.back().type = cppdecl::Type::FromSingleWord("void").AddModifier(cppdecl::Pointer{}).AddModifier(cppdecl::Pointer{});
                        userdata_cb_params.emplace_back();
                        userdata_cb_params.back().name = cppdecl::QualifiedName::FromSingleWord("_other_userdata");
                        userdata_cb_params.back().type = cppdecl::Type::FromSingleWord("void").AddModifier(cppdecl::Pointer{});

                        cppdecl::Type funcptr_userdata_cb = cppdecl::Type::FromSingleWord("void").AddModifier(cppdecl::Function{.params = userdata_cb_params}).AddModifier(cppdecl::Pointer{});


                        // This name must depend on the function type, otherwise unity builds explode.
                        const std::string functor_name = "_functor_" + binder.c_type_name;

                        { // Write some common helpers.
                            Generator::EmitFuncParams emit_lambda = PrepareLambda("_func", trailing_comment);
                            emit_lambda.cpp_extra_statements =
                                "struct _cleanup_guard_type\n"
                                "{\n"
                                "    " + functor_name + " *_self = nullptr;\n"
                                "    void *_value = nullptr;\n"
                                "    ~_cleanup_guard_type()\n"
                                "    {\n"
                                "        if (_self->_postcall_cb)\n" // Intentionally not checking `_value != nullptr`, this is documented as a part of the contract.
                                "            _self->_postcall_cb(_self->_userdata, _value);\n"
                                "    }\n"
                                "};\n"
                                "_cleanup_guard_type _cleanup_guard;\n"
                                "_cleanup_guard._self = this;" +
                                (emit_lambda.cpp_extra_statements.empty() ? "" : "\n" + emit_lambda.cpp_extra_statements);
                            emit_lambda.extra_args_after.push_back("_userdata");
                            emit_lambda.extra_args_after.push_back("_postcall_cb ? &_cleanup_guard._value : nullptr");

                            // Add more stuff to the comment.
                            if (!trailing_comment.empty())
                                trailing_comment += '\n';
                            trailing_comment +=
                                "/// Parameter `userdata` is propagated to `func`.\n"
                                "/// Parameter `postcall_callback` can be null. If specified, it will always be called right after `func`, after constructing the underlying C++ return value.\n"
                                "///   If null, then `func` will always receive null `_cleanup_value`. If specified, then `_cleanup_value` will not be null.\n"
                                "///   `func` can write to `*_cleanup_value`, and that value will be forwarded to the `postcall_callback` call.\n"
                                "///   Writing null has no special effect, `postcall_callback` will be called regardless. `*_cleanup_value` is null by default.\n"
                                "///   The intent is to handle cases where in C++ the callback returns by value, but the corresponding C callback returns a pointer,\n"
                                "///     which makes implementing the callback difficult, as you would need to either leak the pointer, or it would dangle.\n"
                                "///   With this callback, you can leak the pointer from `func`, and then clean it up in `postcall_callback`.\n"
                                "///   Another way to handle this is by using `" + pass_by_enum_name + "_MoveAndDestroy`,but it is less flexible than the callback,\n"
                                "///     since it forces an extra move in some cases. This might make no sense to C users,\n"
                                "///     but it helps when wrapping C bindings in another language. If you're using `" + pass_by_enum_name + "_Copy` or `" + pass_by_enum_name + "_Move`,\n"
                                "///     then in C you'd expect your pointer to outlive the callback, so all is good. But when wrapping C in a managed language where objects are shared references,\n"
                                "///     you might not know if the object you're returning is the last reference or not, so you'd have to either copy/move it into a temporary,\n"
                                "///     which you would then `" + pass_by_enum_name + "_MoveAndDestroy` (which adds an extra move), or introduce a null state to your objects\n"
                                "///     to `" + pass_by_enum_name + "_MoveAndDestroy` the original pointer (having the null state might be undesirable).\n"
                                "///     And attempting to use `" + pass_by_enum_name + "_Copy` or `" + pass_by_enum_name + "_Move` could dangle your pointer, if the returned object\n"
                                "///     in your language is a local or temporary, and is the last reference to the underlying C/C++ object.\n"
                                "///     What `postcall_callback` allows you to do is to preserve a reference to the returned object in your language, so that it lives long enough\n"
                                "///     for the contents to be copied into the returned C++ object.\n"
                                "/// Parameter `userdata_callback` can be null. Pass null if you don't need custom behavior when destroying and/or copying the functor.\n"
                                "///   The `_this_userdata` parameter will never be null.\n"
                                "///   If `*_this_userdata` is non-null and `_other_userdata` is     null, the functor is being destroyed. Perform any cleanup if needed.\n"
                                "///   If `*_this_userdata` is     null and `_other_userdata` is non-null, a copy of the functor is being constructed. Perform copying if needed and write the new userdata to `*_this_userdata`.\n"
                                "///   If `*_this_userdata` is non-null and `_other_userdata` is non-null, the functor is being assigned. The simplest option is to destroy `*_this_userdata` first, and then behave as if it was null.\n"
                                "///   Both `*_this_userdata` and `_other_userdata` will never be null at the same time.";


                            auto lambda_strings = generator.EmitFunctionAsStrings(file, emit_lambda);
                            lambda_strings.decl.type.As<cppdecl::Function>()->uses_trailing_return_type = true;


                            file.source.contents +=
                                "\n"
                                "namespace\n"
                                "{\n"
                                "    struct " + functor_name + "\n"
                                "    {\n"
                                "        using FuncPtr = " + generator.CppdeclToCode(funcptr_with_extra_ptr_params) + ";\n"
                                "        using PostcallCbPtr = " + generator.CppdeclToCode(funcptr_postcall_cb) + ";\n"
                                "        using UserdataCbPtr = " + generator.CppdeclToCode(funcptr_userdata_cb) + ";\n"
                                "\n"
                                "        FuncPtr _func = nullptr;\n"
                                "        void *_userdata = nullptr;\n"
                                "        PostcallCbPtr _postcall_cb = nullptr;\n"
                                "        UserdataCbPtr _userdata_cb = nullptr;\n"
                                "\n"
                                "        " + functor_name + "(FuncPtr _func, void *_userdata, PostcallCbPtr _postcall_cb, UserdataCbPtr _userdata_cb) : _func(_func), _userdata(_userdata), _postcall_cb(_postcall_cb), _userdata_cb(_userdata_cb) {}\n"
                                "\n"
                                "        " + functor_name + "(const " + functor_name + " &other) : _func(other._func), _postcall_cb(other._postcall_cb), _userdata_cb(other._userdata_cb)\n"
                                "        {\n"
                                "            if (!other._userdata) return; // No data to copy.\n"
                                "            if (!_userdata_cb) {_userdata = other._userdata; return;} // No callback, just copy the data.\n"
                                "            _userdata_cb(&_userdata, other._userdata);\n"
                                "        }\n"
                                "\n"
                                "        " + functor_name + "(" + functor_name + " &&other) noexcept : _func(other._func), _userdata(other._userdata), _postcall_cb(other._postcall_cb), _userdata_cb(other._userdata_cb)\n"
                                "        {\n"
                                "            other._func = nullptr;\n"
                                "            other._userdata = nullptr;\n"
                                "            other._postcall_cb = nullptr;\n"
                                "            other._userdata_cb = nullptr;\n"
                                "        }\n"
                                "\n"
                                "        " + functor_name + " &operator=(const " + functor_name + " &other)\n"
                                "        {\n"
                                "            if (_userdata_cb && _userdata_cb != other._userdata_cb) // Callback exists but incompatible, destroy the old contents first.\n"
                                "            {\n"
                                "                _userdata_cb(&_userdata, nullptr);\n"
                                "                _userdata = nullptr; // Don't need to zero the callbacks, we'll overwrite them anyway.\n"
                                "            }\n"
                                "            _func = other._func;\n"
                                "            _postcall_cb = other._postcall_cb;\n"
                                "            _userdata_cb = other._userdata_cb;\n"
                                "            if (other._userdata && _userdata_cb) // If we have data to copy and a callback, use the callback. The data must be non-null, otherwise the callback will confuse this for a copy construction.\n"
                                "                _userdata_cb(&_userdata, other._userdata);\n"
                                "            else // Otherwise shallow-copy.\n"
                                "                _userdata = other._userdata;\n"
                                "            return *this;\n"
                                "        }\n"
                                "\n"
                                "        " + functor_name + " &operator=(" + functor_name + " &&other) noexcept\n"
                                "        {\n"
                                "            _func = other._func;\n"
                                "            _userdata = other._userdata;\n"
                                "            _postcall_cb = other._postcall_cb;\n"
                                "            _userdata_cb = other._userdata_cb;\n"
                                "            other._func = nullptr;\n"
                                "            other._userdata = nullptr;\n"
                                "            other._userdata_cb = nullptr;\n"
                                "            return *this;\n"
                                "        }\n"
                                "\n"
                                "        ~" + functor_name + "()\n"
                                "        {\n"
                                "            if (_userdata && _userdata_cb)\n"
                                "                _userdata_cb(&_userdata, nullptr);\n"
                                "        }\n"
                                "\n"
                                "        auto operator()" + generator.CppdeclToCode(lambda_strings.decl.type, cppdecl::ToCodeFlags::lambda) + "\n"
                                "        " + generator.IndentString(lambda_strings.body, 2, false) + "\n"
                                "    };\n"
                                "}\n";
                        }

                        { // Construct with user data pointer.
                            Generator::EmitFuncParams emit;
                            emit.c_comment = "/// Construct a function with additional state.";

                            emit.c_comment_trailing = trailing_comment;

                            emit.name = binder.MakeMemberFuncName(generator, "ConstructEx", CInterop::MethodKinds::Constructor{}); // Intentionally implicit.
                            emit.name.ignore_in_interop = true; // C binding wrappers will likely want to ignore this, and write their own custom replacements.

                            emit.cpp_return_type = cppdecl::Type::FromQualifiedName(binder.cpp_type_name);
                            emit.params.push_back({
                                .name = "func",
                                .cpp_type = funcptr_with_extra_ptr_params,
                                .use_type_as_is = true,
                            });
                            emit.params.push_back({
                                .name = "userdata",
                                .cpp_type = cppdecl::Type::FromSingleWord("void").AddModifier(cppdecl::Pointer{}),
                                .reference_assigned = true,
                            });

                            emit.params.push_back({
                                .name = "postcall_callback",
                                .cpp_type = funcptr_postcall_cb,
                                .reference_assigned = true,
                                .use_type_as_is = true,
                            });

                            emit.params.push_back({
                                .name = "userdata_callback",
                                .cpp_type = funcptr_userdata_cb,
                                .reference_assigned = true,
                                .use_type_as_is = true,
                            });

                            emit.cpp_called_func = "@1@ ? " + generator.CppdeclToCode(binder.cpp_type_name) + "(" + functor_name + "{@1@, @2@, @3@, @4@}) : nullptr";

                            generator.EmitFunction(file, emit);
                        }

                        { // Assign with user data pointer.
                            Generator::EmitFuncParams emit;
                            emit.c_comment =
                                "/// Assign a function with additional state.";

                            emit.c_comment_trailing = trailing_comment;

                            emit.name = binder.MakeMemberFuncName(generator, "AssignEx");
                            emit.name.ignore_in_interop = true; // C binding wrappers will likely want to ignore this, and write their own custom replacements.

                            emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), false);
                            emit.params.push_back({
                                .name = "func",
                                .cpp_type = funcptr_with_extra_ptr_params,
                                .use_type_as_is = true,
                            });
                            emit.params.push_back({
                                .name = "userdata",
                                .cpp_type = cppdecl::Type::FromSingleWord("void").AddModifier(cppdecl::Pointer{}),
                                .reference_assigned = true,
                            });

                            emit.params.push_back({
                                .name = "postcall_callback",
                                .cpp_type = funcptr_postcall_cb,
                                .reference_assigned = true,
                                .use_type_as_is = true,
                            });

                            emit.params.push_back({
                                .name = "userdata_callback",
                                .cpp_type = funcptr_userdata_cb,
                                .reference_assigned = true,
                                .use_type_as_is = true,
                            });

                            emit.cpp_extra_statements =
                                "auto &_self = @this@;\n"
                                "if (!@1@)\n" // Not moving `@1@` to a variable because it's just a plain argument.
                                "{\n"
                                "    _self = nullptr;\n"
                                "    return;\n"
                                "}\n";

                            emit.cpp_called_func = "_self = " + functor_name + "{@1@, @2@, @3@, @4@}";

                            generator.EmitFunction(file, emit);
                        }
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
