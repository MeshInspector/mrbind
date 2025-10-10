#include "generators/c/binding_common.h"
#include "generators/c/module.h"

namespace mrbind::CBindings::Modules
{
    struct StdOptional : DeriveModule<StdOptional>
    {
        // I tried to add support for `std::optional<T &>`, in the hopes that it would eventually be added to the language.
        // I hope that I got it right, but it's obviously untested.

        cppdecl::QualifiedName base_name = cppdecl::QualifiedName{}.AddPart("std").AddPart("optional");

        std::optional<Generator::BindableType> GetBindableType(Generator &generator, const cppdecl::Type &type, const std::string &type_str) override
        {
            (void)type_str;

            std::optional<Generator::BindableType> ret;

            // It's not immediately obvious if this is correct if the reference is const and the class uses a pass-by enum. But I think it's still correct.
            if ((ret = BindNonConstOrRvalueRefParamsSameAsNonRef(generator, type, base_name, cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target)))
                return ret;

            if (!type.IsOnlyQualifiedName() || !type.simple_type.name.Equals(base_name, cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target))
                return ret;

            // This can throw if `type` has wrong template parameters, we don't mind. I'm not sure how it could be possible in valid C++ code in the first place.
            const cppdecl::Type &cpp_elem_type = std::get<cppdecl::Type>(type.simple_type.name.parts.back().template_args.value().args.at(0).var);
            const auto &elem_type_binding = generator.FindBindableType(cpp_elem_type);

            HeapAllocatedClassBinder binder = HeapAllocatedClassBinder::ForCustomType(generator, type.simple_type.name);

            // Copy the traits from the element type.
            // This will throw if the element type is unknown.
            binder.traits = generator.FindTypeTraits(cpp_elem_type);
            binder.traits->is_trivially_default_constructible = false; // This can't be trivial, but the rest of the operations can probably be considered trivial enough.

            auto get_output_file = [
                type,
                cpp_elem_type,
                binder
            ](Generator &generator) -> Generator::OutputFile &
            {
                bool is_new = false;
                Generator::OutputFile &file = *generator.GetPublicHelperFile(generator.CppdeclToIdentifier(type), &is_new);

                if (is_new)
                {
                    binder.EmitForwardDeclaration(generator, file, "/// Stores either a single `" + generator.CppdeclToCodeForComments(cpp_elem_type) + "` or nothing.\n");

                    // The special member functions.
                    // Right now we don't support element types that don't support default arguments, but if we decide to add support,
                    //   then we'll need to disable the sugar here. But then we'll also need to provide other ways of manipulating the value (construct from value, assign value, reset),
                    //   which is currently handled by those sugared operations.
                    binder.EmitSpecialMemberFunctions(generator, file, true);

                    // Some custom functions:

                    // We don't provide a `.has_value()` check because the dereferencing function (that returns a pointer) already acts as one.
                    // We don't provide "set value" and "reset" functions because the sugared copy/move constructor and assignment already do the same thing.

                    // Dereference.
                    for (bool is_const : {true, false})
                    {
                        if (!is_const && cpp_elem_type.IsConstOrReference())
                            continue;

                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// The stored element or null if none, " + std::string(is_const ? "read-only" : "mutable") + ".";
                        emit.c_name = binder.MakeMemberFuncName(generator, std::string(is_const ? "" : "Mutable") + "Value");
                        emit.cpp_return_type = cpp_elem_type;
                        if (emit.cpp_return_type.Is<cppdecl::Reference>())
                        {
                            // Rewrite references to pointers.
                            emit.cpp_return_type.modifiers.at(0).var = cppdecl::Pointer{};
                        }
                        else
                        {
                            // Add our own pointers to everything else.
                            if (is_const)
                                emit.cpp_return_type.AddQualifiers(cppdecl::CvQualifiers::const_);
                            emit.cpp_return_type.AddModifier(cppdecl::Pointer{});
                        }
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), is_const);
                        emit.cpp_extra_statements = "auto &_self = @this@;";
                        emit.cpp_called_func = "_self ? &*_self : nullptr";
                        generator.EmitFunction(file, emit);
                    }
                }

                return file;
            };

            Generator::BindableType &new_type = ret.emplace();

            new_type.traits = binder.traits.value();

            new_type.is_heap_allocated_class = true;

            new_type.bindable_with_same_address.declared_in_file = [&generator, get_output_file]() -> auto & {return get_output_file(generator);};
            new_type.bindable_with_same_address.forward_declaration = binder.MakeForwardDeclarationNoReg();
            new_type.bindable_with_same_address.custom_c_type_name = binder.c_type_name;

            new_type.return_usage = binder.MakeReturnUsage(generator);


            // Parameter usage:

            // Complain if this type doesn't understand default arguments. We shouldn't have any that don't.
            if (!elem_type_binding.param_usage_with_default_arg)
                throw std::runtime_error("Binding `std::optional` requires that the binding for the element type supports default arguments, but this type doesn't. Fix its binding to support them.");

            // Param usage WITHOUT the default argument is same as the usage of the element type WITH the default argument.
            // All we need to do is to adjust the callbacks a bit, in particular to pass `std::optional<T>` as the wrapper.
            auto &param_usage = new_type.param_usage.emplace();
            param_usage = elem_type_binding.param_usage_with_default_arg.value();
            param_usage.c_params_to_cpp =
                [
                    next = std::move(param_usage.c_params_to_cpp),
                    cpp_type_str = std::string(type_str) // Just in case we change it to `std::string_view` later, do an explicit copy.
                ](Generator::OutputFile::SpecificFileContents &source_file, std::string_view cpp_param_name, Generator::BindableType::ParamUsage::DefaultArgVar default_arg) -> std::string
                {
                    (void)default_arg;
                    assert(std::holds_alternative<Generator::BindableType::ParamUsage::DefaultArgNone>(default_arg)); // Since we're in `param_usage` (not `param_usage_with_default_arg`), this should always be null.
                    return next(source_file, cpp_param_name, Generator::BindableType::ParamUsage::DefaultArgWrapper{.wrapper_cpp_type = cpp_type_str, .wrapper_null = "std::nullopt", .actual_default_arg = ""});
                };
            // Force the comment generation callback to think that we have a default argument.
            if (param_usage.append_to_comment)
                param_usage.append_to_comment = [next = std::move(param_usage.append_to_comment)](std::string_view cpp_param_name, bool has_default_arg, bool is_output_param){(void)has_default_arg; return next(cpp_param_name, true, is_output_param);};
            // And also add some custom comments!
            param_usage.append_to_comment = [
                next = std::move(param_usage.append_to_comment),
                explain_defarg = elem_type_binding.param_usage_with_default_arg.value().explanation_how_to_use_default_arg
            ](std::string_view cpp_param_name, bool has_default_arg, bool is_output_param)
            {
                std::string ret;
                if (next)
                {
                    // Should I call this before or after adding the custom text? I'm not sure. Before sounds better to me now.
                    ret = next(cpp_param_name, has_default_arg, is_output_param);
                    if (!ret.empty())
                        ret += '\n';
                }

                if (is_output_param)
                    ret += "/// Callback return value is optional. To keep it empty, " + explain_defarg(cpp_param_name, true, is_output_param) + ".";
                else
                    ret += "/// Parameter `" + std::string(cpp_param_name) + "` is optional. To keep it empty, " + explain_defarg(cpp_param_name, true, is_output_param) + ".";

                return ret;
            };


            // Param usage WITH the default argument gets a bit weird. If this is a class that uses the `PassBy` enum (as indicated by its `supports_default_arguments_in_wrappers == true`),
            //   then it can handle both default arguments and nullopts at the same time, with no issues (they use two different enum constants).
            // But otherwise we're toast, and have to use the more traditional default argument approach.

            if (elem_type_binding.param_usage_with_default_arg.value().supports_default_arguments_in_wrappers)
            {
                auto &param_usage_defarg = new_type.param_usage_with_default_arg.emplace();
                param_usage_defarg = elem_type_binding.param_usage_with_default_arg.value();

                param_usage_defarg.supports_default_arguments_in_wrappers = false; // Important! Or optionals of optionals will blow up.

                // Adjust the callback a little.
                param_usage_defarg.c_params_to_cpp =
                    [
                        next = std::move(param_usage_defarg.c_params_to_cpp),
                        cpp_type_str = std::string(type_str) // Just in case we change it to `std::string_view` later, do an explicit copy.
                    ](Generator::OutputFile::SpecificFileContents &source_file, std::string_view cpp_param_name, Generator::BindableType::ParamUsage::DefaultArgVar default_arg) -> std::string
                    {
                        assert(!std::holds_alternative<Generator::BindableType::ParamUsage::DefaultArgNone>(default_arg)); // Since we're in `param_usage_with_default_arg` (not just `param_usage`), this should never happen.
                        std::string_view actual_default_arg = std::holds_alternative<std::string_view>(default_arg) ? std::get<std::string_view>(default_arg) : "";

                        return next(source_file, cpp_param_name, Generator::BindableType::ParamUsage::DefaultArgWrapper{.wrapper_cpp_type = cpp_type_str, .wrapper_null = "std::nullopt", .actual_default_arg = actual_default_arg});
                    };

                // Explain how to pass a null optional.
                param_usage_defarg.append_to_comment = [
                    next = std::move(param_usage_defarg.append_to_comment),
                    explain_defarg = elem_type_binding.param_usage_with_default_arg.value().explanation_how_to_use_default_arg
                ](std::string_view cpp_param_name, bool has_default_arg, bool is_output_param)
                {
                    std::string ret;
                    if (next)
                    {
                        // Should I call this before or after adding the custom text? I'm not sure. Before sounds better to me now.
                        ret = next(cpp_param_name, has_default_arg, is_output_param);
                        if (!ret.empty())
                            ret += '\n';
                    }

                    if (is_output_param)
                        ret += "/// Callback return value is optional. To keep it empty, " + explain_defarg(cpp_param_name, true, is_output_param) + ".";
                    else
                        ret += "/// Parameter `" + std::string(cpp_param_name) + "` is optional. To keep it empty, " + explain_defarg(cpp_param_name, true, is_output_param) + ".";

                    return ret;
                };
            }
            else
            {
                // I guess?

                // This can return null. LOL.
                new_type.param_usage_with_default_arg = binder.MakeParamUsageSupportingDefaultArg(generator);
            }

            // Filter out the null default arguments.
            new_type.is_useless_default_argument = [](std::string_view default_arg) -> std::optional<std::string>
            {
                if (
                    default_arg == "std::nullopt" ||
                    default_arg == "{}"
                    // Could also list `std::optional<T>{}` here, but that requires a whitespace-insensitive comparison function.
                )
                {
                    return "empty"; // I guess? For consistency with "Parameter X is optional, to keep it empty do Y.".
                }

                return {};
            };

            return ret;
        }

        std::optional<std::string> GetCppIncludeForQualifiedName(Generator &generator, const cppdecl::QualifiedName &name) override
        {
            (void)generator;
            if (name.Equals(base_name, cppdecl::QualifiedName::EqualsFlags::allow_less_parts_in_target | cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target))
                return "optional";
            return {};
        }
    };
}
