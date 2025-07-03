#include "common/meta.h"
#include "generators/c/binding_common.h"
#include "generators/c/module.h"

namespace mrbind::CBindings::Modules
{
    struct StdUniquePtr : DeriveModule<StdUniquePtr>
    {
        // Here I try to support both `std::unique_ptr<T>` and `std::unique_ptr<T[]>`.
        // `std::unique_ptr<T[N]>` has no special logic in the standard library, and is pretty rare in general, so I don't have special handling for it.
        //
        // The support for custom deleters is minimal at this point.

        cppdecl::QualifiedName base_name = cppdecl::QualifiedName{}.AddPart("std").AddPart("unique_ptr");

        std::optional<Generator::BindableType> GetBindableType(Generator &generator, const cppdecl::Type &type, const std::string &type_str) override
        {
            (void)type_str;

            std::optional<Generator::BindableType> ret;

            // Hmm. We reject const lvalue references here. I think this is better than accepting them.
            if ((ret = BindRvalueRefParamsSameAsNonRef(generator, type, base_name, cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target)))
                return ret;

            if (!type.IsOnlyQualifiedName() || !type.simple_type.name.Equals(base_name, cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target))
                return ret;

            // This can throw if `type` has wrong template parameters, we don't mind. I'm not sure how it could be possible in valid C++ code in the first place.
            const cppdecl::Type &cpp_elem_type = std::get<cppdecl::Type>(type.simple_type.name.parts.back().template_args.value().args.at(0).var);

            // Only accepting arrays of unknown bounds here, intentionally. See the comment at the top of this file.
            const bool is_array_of_unknown_bound = cpp_elem_type.Is<cppdecl::Array>() && cpp_elem_type.As<cppdecl::Array>()->size.IsEmpty();

            const cppdecl::Type cpp_elem_type_minus_array = is_array_of_unknown_bound ? cppdecl::Type(cpp_elem_type).RemoveModifier() : cpp_elem_type;


            // The underlying plain pointer type.
            const cppdecl::Type underlying_ptr_type = cppdecl::Type(cpp_elem_type_minus_array).AddModifier(cppdecl::Pointer{});

            HeapAllocatedClassBinder binder = HeapAllocatedClassBinder::ForCustomType(generator, type.simple_type.name);
            binder.traits = Generator::TypeTraits::MoveOnlyAndTrivialExceptForDefaultCtorAndDtor{}; // Maybe not strictly trivial, but doesn't matter in practice.

            const bool has_custom_deleter = type.simple_type.name.parts.back().template_args.value().args.size() >= 2;
            bool include_common_header_in_output_header = false;

            // Figure out which function should be used to deallocate the element type...
            // This is only viable if the deleter isn't custom, because in that case it could be stateful, and then we're shit outta luck (i.e. we can't allow the user to release it).
            std::string func_name_destroy_released_ptr;
            if (!has_custom_deleter)
            {
                const bool is_qual_name_only = cpp_elem_type_minus_array.IsOnlyQualifiedName();

                std::optional<std::string> c_name;
                if (is_qual_name_only)
                {
                    if (auto opt = generator.FindTypeBindableWithSameAddressOpt(cpp_elem_type_minus_array.simple_type.name); opt && opt->declared_in_file)
                    {
                        // This shouldn't fail at this point.
                        c_name = generator.CppTypeNameToCTypeName(cpp_elem_type_minus_array.simple_type.name);

                        // Might as well force-generate the file for the deleter function.
                        (void)opt->declared_in_file();
                    }
                }

                if (c_name)
                {
                    // This is a type that we bind. It SHOULD have its own deallocation function generated.

                    // Make sure it's destructible, because otherwise there will be no deallocation function.
                    // This will also throw if `FindBindableType` doesn't find anything, which is fine, and I don't see how it could possibly happen anyway.
                    if (!generator.FindBindableType(cpp_elem_type_minus_array).traits.value().is_destructible)
                        throw std::runtime_error("Type `" + cppdecl::ToCode(cpp_elem_type_minus_array, cppdecl::ToCodeFlags::canonical_c_style) + "` doesn't have an accessible destructor, so we can't bind a `std::unique_ptr` with it as the element type.");

                    func_name_destroy_released_ptr = generator.GetClassDestroyFuncName(*c_name, is_array_of_unknown_bound);
                }
                else if (
                    // This is a rough heuristic to allow only trivially destructible types.
                    // If this fails, or comes up in some other place too, we probably need to add a specialized function to `cppdecl::Type`.
                    // Might name it `IsScalar()` or something, since all those types seem to be scalars. (Need to decide where to handle `std::nullptr_t`, since it's a scalar type,
                    //   but isn't handled by `IsBuiltInTypeName()`, because it isn't, well, built-in.)
                    cpp_elem_type_minus_array.Is<cppdecl::Pointer>() ||
                    (
                        cpp_elem_type_minus_array.IsOnlyQualifiedName() &&
                        cpp_elem_type_minus_array.simple_type.name.IsBuiltInTypeName(cppdecl::IsBuiltInTypeNameFlags::allow_arithmetic)
                    )
                )
                {
                    // Those are trivially destructible, so recommend the generic deallocation functions.

                    func_name_destroy_released_ptr = generator.GetMemoryDeallocFuncName(is_array_of_unknown_bound, nullptr);
                    include_common_header_in_output_header = true; // Include the header that declares this deallocation function.
                }
                else
                {
                    throw std::runtime_error("Not sure what deallocation function to use for this `std::unique_ptr` element type: `" + cppdecl::ToCode(cpp_elem_type_minus_array, cppdecl::ToCodeFlags::canonical_c_style) + "`.");
                }
            }


            auto get_output_file = [
                type,
                cpp_elem_type,
                is_array_of_unknown_bound,
                cpp_elem_type_minus_array,
                binder,
                func_name_destroy_released_ptr,
                has_custom_deleter,
                include_common_header_in_output_header,
                underlying_ptr_type
            ](Generator &generator) -> Generator::OutputFile &
            {
                bool is_new = false;
                Generator::OutputFile &file = generator.GetPublicHelperFile(cppdecl::ToString(type, cppdecl::ToStringFlags::identifier), &is_new);

                if (is_new)
                {
                    file.source.stdlib_headers.insert("memory");
                    if (include_common_header_in_output_header)
                        file.source.custom_headers.insert(generator.GetCommonPublicHelpersFile().header.path_for_inclusion);

                    TryIncludeHeadersForCppTypeInSourceFile(generator, file, type);

                    if (is_array_of_unknown_bound)
                    {
                        file.header.contents +=
                            "\n"
                            "/// Wraps a pointer to a heap-allocated array of type `" + cppdecl::ToCode(cpp_elem_type_minus_array, cppdecl::ToCodeFlags::canonical_c_style) + "`, of an unspecified size.\n"
                            "/// Doesn't store the size, it has to be obtained separately.\n";
                    }
                    else
                    {
                        file.header.contents += "\n/// Wraps a pointer to a single heap-allocated `" + cppdecl::ToCode(cpp_elem_type, cppdecl::ToCodeFlags::canonical_c_style) + "`.\n";
                    }
                    binder.EmitForwardDeclaration(generator, file);

                    // The special member functions.
                    binder.EmitSpecialMemberFunctions(generator, file, true);


                    // Some custom functions:

                    // We don't provide an `operator bool` check because the dereferencing function (that returns a pointer) already acts as one.
                    // We don't provide "set value" and "reset" functions because the sugared copy/move constructor and assignment already do the same thing.

                    // NOTE: We don't wrap `std::make_unique()`, because the sugared constructor and assignment above can already be used to achieve the same thing,
                    //   by manually calling the right allocation functions, and passing the pointers returned from them.

                    { // Get pointer. Doesn't propagate const, since `std::unique_ptr` doesn't too.
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Returns the stored pointer, possibly null.";
                        emit.c_name = binder.MakeMemberFuncName("Get");

                        emit.cpp_return_type = underlying_ptr_type;

                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), true);

                        emit.cpp_called_func = "get";

                        generator.EmitFunction(file, emit);
                    }

                    // Indexing, if this is an array. Doesn't propagate const, since `std::unique_ptr` doesn't too.
                    if (is_array_of_unknown_bound)
                    {
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Returns an element from the stored array. The stored pointer must not be null.";
                        emit.c_name = binder.MakeMemberFuncName("At");

                        emit.cpp_return_type = cppdecl::Type(cpp_elem_type_minus_array).AddModifier(cppdecl::Reference{});

                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), true);
                        emit.params.push_back({
                            .name = "i",
                            .cpp_type = cppdecl::Type::FromSingleWord("size_t"),
                        });

                        emit.cpp_called_func = "@this@[@1@]";

                        generator.EmitFunction(file, emit);
                    }

                    // Release the pointer.
                    // This only makes sense if the deleter isn't custom, because custom deleters might be stateful (and non-default-constructible too?),
                    // so in that case we can't provide a function to destroy released pointers, so we don't allow releasing them in the first place.
                    if (!has_custom_deleter)
                    {
                        Generator::EmitFuncParams emit;
                        emit.c_comment =
                            "/// Releases the pointer ownership. Returns the stored pointer and zeroes the source. If the source is already null, returns null and does nothing.\n"
                            "/// The returned pointer is owning! It must be deallocated using `" + func_name_destroy_released_ptr + "()`.";

                        emit.c_name = binder.MakeMemberFuncName("Release");

                        emit.cpp_return_type = underlying_ptr_type;

                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), false);

                        emit.cpp_called_func = "release";

                        generator.EmitFunction(file, emit);
                    }
                }

                return file;
            };

            Generator::BindableType &new_type = ret.emplace();

            binder.FillCommonParams(generator, new_type);
            new_type.bindable_with_same_address.declared_in_file = [&generator, get_output_file]() -> auto & {return get_output_file(generator);};

            // If the deleter isn't custom, add some sugar.
            // We can't add automatic releasing when it's custom, because the deleter can be stateful, and then there's no way to free the pointer.
            if (!has_custom_deleter)
            {
                // Param usage:
                // I would do this based on plain pointers, but it's too difficult to make them do this, with all the default arguments and wrappers logic in those callbacks.

                const bool pointer_needs_cast = !generator.IsSimplyBindableDirect(underlying_ptr_type);
                if (pointer_needs_cast && !generator.IsSimplyBindableDirectCast(underlying_ptr_type))
                    throw std::runtime_error("The underlying pointer type `" + cppdecl::ToCode(underlying_ptr_type, cppdecl::ToCodeFlags::canonical_c_style) + "` of a `std::unique_ptr` is somehow not bindable.");

                // Make the C-style pointer type.
                auto underlying_c_ptr_type = underlying_ptr_type;
                generator.ReplaceAllNamesInTypeWithCNames(underlying_c_ptr_type);

                auto param_append_to_comment =
                    [func_name_destroy_released_ptr, is_array_of_unknown_bound](std::string_view cpp_param_name, bool has_default_arg, bool is_output_param) -> std::string
                    {
                        if (is_output_param)
                        {
                            return
                                "/// Callback return value " + std::string(is_array_of_unknown_bound ? "can point to an array" : "should point to a single object rather than to an array") + ".\n"
                                "/// It takes ownership of the returned pointer (if not null), and will later call `" + func_name_destroy_released_ptr + "()` on it automatically.";
                        }
                        else
                        {
                            return
                                "/// Parameter `" + std::string(cpp_param_name) + "`" + (has_default_arg ? " (after dereferencing)" : "") + " " + (is_array_of_unknown_bound ? "can point to an array" : "should point to a single object rather than to an array") + ".\n"
                                "/// Parameter `" + std::string(cpp_param_name) + "` takes ownership of the" + (has_default_arg ? " (deferenced)" : "") + " passed pointer (if not null), and will later call `" + func_name_destroy_released_ptr + "()` on it automatically.";
                        }
                    };

                auto &param_usage = new_type.param_usage.emplace();
                param_usage.append_to_comment = param_append_to_comment;
                param_usage.c_params.push_back({
                    .c_type = underlying_c_ptr_type,
                });
                param_usage.c_params_to_cpp =
                    [
                        pointer_needs_cast,
                        type_str = std::string(type_str), // Casting to `std::string`, just in case I later change the function parameter `type_str` to a `std::string_view`. Wouldn't want it to blow up.
                        underlying_ptr_type_str = cppdecl::ToCode(underlying_ptr_type, cppdecl::ToCodeFlags::canonical_c_style)
                    ](Generator::OutputFile::SpecificFileContents &source_file, std::string_view cpp_param_name, Generator::BindableType::ParamUsage::DefaultArgVar default_arg) -> std::string
                    {
                        (void)source_file;
                        (void)default_arg; // Always null here.

                        std::string ret;
                        ret += type_str; // Cast to `std::unique_ptr` begins.
                        ret += "(";
                        if (pointer_needs_cast)
                            ret += "(" + underlying_ptr_type_str + ")"; // Cast to the right pointer type.
                        ret += cpp_param_name;
                        ret += ")"; // Cast to `std::unique_ptr` ends.

                        return ret;
                    };

                // Param usage with the default argument:
                auto underlying_c_ptr_to_ptr_type = underlying_c_ptr_type;
                underlying_c_ptr_to_ptr_type.AddQualifiers(cppdecl::CvQualifiers::const_);
                underlying_c_ptr_to_ptr_type.AddModifier(cppdecl::Pointer{});

                auto &param_usage_defarg = new_type.param_usage_with_default_arg.emplace();
                param_usage_defarg.append_to_comment = param_append_to_comment;
                param_usage_defarg.c_params.push_back({
                    .c_type = underlying_c_ptr_to_ptr_type,
                });

                param_usage_defarg.c_params_to_cpp =
                    [
                        pointer_needs_cast,
                        type_str = std::string(type_str), // Casting to `std::string`, just in case I later change the function parameter `type_str` to a `std::string_view`. Wouldn't want it to blow up.
                        underlying_ptr_type_str = cppdecl::ToCode(underlying_ptr_type, cppdecl::ToCodeFlags::canonical_c_style)
                    ](Generator::OutputFile::SpecificFileContents &source_file, std::string_view cpp_param_name, Generator::BindableType::ParamUsage::DefaultArgVar default_arg)
                    {
                        (void)source_file;

                        std::string ret;
                        ret += "(";
                        ret += cpp_param_name;
                        ret += " ? ";

                        const auto *wrapper = std::get_if<Generator::BindableType::ParamUsage::DefaultArgWrapper>(&default_arg);

                        if (wrapper)
                            ret += std::string(wrapper->wrapper_cpp_type) + "("; // Cast to the wrapper begins.

                        ret += type_str + "("; // Cast to `std::unique_ptr` begins.

                        if (pointer_needs_cast)
                            ret += "(" + underlying_ptr_type_str + ")"; // Cast to the right pointer type.

                        ret += "*"; // Dereference the input pointer-to-pointer.
                        ret += cpp_param_name;
                        ret += ")"; // Cast to `std::unique_ptr` ends.

                        if (wrapper)
                            ret += ")"; // Cast to the wrapper ends.

                        ret += " : "; // The default argument begins.

                        // The default argument begins...
                        std::visit(Overload{
                            [&](Generator::BindableType::ParamUsage::DefaultArgNone)
                            {
                                // Unreachable.
                            },
                            [&](std::string_view default_arg)
                            {
                                ret += "static_cast<";
                                ret += type_str;
                                ret += ">(";
                                ret += default_arg;
                                ret += ")";
                            },
                            [&](const Generator::BindableType::ParamUsage::DefaultArgWrapper &wrapper)
                            {
                                ret += wrapper.wrapper_null;
                            }
                        }, default_arg);

                        ret += ")"; // Close the `( ? : )` (selecting between the default argument vs no default argument).
                        return ret;
                    };

                param_usage_defarg.explanation_how_to_use_default_arg = [](std::string_view cpp_param_name, bool use_wrapper, bool is_returned_from_callback){(void)cpp_param_name; (void)use_wrapper; return is_returned_from_callback ? "return a null pointer" : "pass a null pointer";};
                new_type.is_useless_default_argument = CheckPointerDefaultArgumentForNullptr;


                // Return usage:
                // Since we have to handwrite the parameter usage, might as well handwrite this too.

                auto &ret_usage = new_type.return_usage.emplace();
                ret_usage.c_type = underlying_c_ptr_type;

                new_type.return_usage->make_return_expr =
                    [
                        pointer_needs_cast,
                        underlying_c_ptr_type_str = cppdecl::ToCode(underlying_c_ptr_type, cppdecl::ToCodeFlags::canonical_c_style)
                    ](Generator::OutputFile::SpecificFileContents &file, std::string_view expr) -> std::string
                    {
                        (void)file;

                        std::string ret;
                        if (pointer_needs_cast)
                            ret += "(" + underlying_c_ptr_type_str + ")"; // Cast to the right pointer type.

                        ret += "(";
                        ret += expr;
                        ret += ").release()";
                        return ret;
                    };

                new_type.return_usage->append_to_comment = [func_name_destroy_released_ptr](std::string_view callback_param_name) -> std::string
                {
                    if (callback_param_name.empty())
                        return "/// The returned pointer is owning! If not null, it must be deallocated using `" + func_name_destroy_released_ptr + "().";
                    else
                        return "/// Callback parameter `" + std::string(callback_param_name) + "` is owning! If not null, it must be deallocated using `" + func_name_destroy_released_ptr + "().";
                };


                // Fill the type deps.
                generator.FillDefaultTypeDependencies(underlying_ptr_type, new_type);
                new_type.param_usage_with_default_arg->same_addr_bindable_type_dependencies.try_emplace(type_str); // Default arguments need the full `std_unique_ptr_T` type.
            }

            return ret;
        }
    };
}
