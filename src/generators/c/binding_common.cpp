#include "binding_common.h"
#include "common/meta.h"

namespace mrbind::CBindings
{
    HeapAllocatedClassBinder HeapAllocatedClassBinder::ForCustomType(Generator &generator, cppdecl::QualifiedName new_cpp_type_name, std::string_view new_c_type_name_base, std::string new_underlying_c_type_base_name)
    {
        HeapAllocatedClassBinder ret;

        ret.cpp_type_name = std::move(new_cpp_type_name);

        ret.c_type_name = generator.MakePublicHelperName(new_c_type_name_base.empty() ? generator.CppdeclToIdentifier(ret.cpp_type_name) : new_c_type_name_base);
        ret.c_underlying_type_name = !new_underlying_c_type_base_name.empty() ? generator.MakePublicHelperName(new_underlying_c_type_base_name) : "";

        return ret;
    }

    Generator::EmitFuncParams::Name HeapAllocatedClassBinder::MakeMemberFuncName(const Generator &generator, std::string name, std::optional<CInterop::MethodKindVar> interop_var) const
    {
        return generator.MakeMemberFuncName(c_type_name, name, std::move(interop_var));
    }

    void HeapAllocatedClassBinder::EmitForwardDeclaration(Generator &generator, Generator::OutputFile &file, std::string comment) const
    {
        { // Make a comment with supported pass-by modes.
            // Assert that the comment doesn't start with a newline, and ends with a newline if not empty.
            assert(comment.empty() || !comment.starts_with('\n'));
            assert(comment.empty() || comment.ends_with('\n'));

            // Add our own leading newline.
            comment = '\n' + comment;

            std::string enum_name; // This is filled later if needed.

            bool first = true;
            auto AddMode = [&](std::string_view mode_name)
            {
                if (first)
                {
                    first = false;

                    enum_name = generator.GetPassByEnumName();
                    comment += "/// Supported `" + enum_name + "` modes: ";
                }
                else
                {
                    comment += ", ";
                }

                comment += '`';
                comment += enum_name;
                comment += '_';
                comment += mode_name;
                comment += '`';
            };

            if (traits.value().is_default_constructible)
                AddMode("DefaultConstruct");

            if (traits.value().is_copy_constructible)
            {
                AddMode("Copy");
                if (traits.value().copy_constructor_takes_nonconst_ref)
                    comment += " (for this type it can modify the source object)";
            }

            if (traits.value().is_move_constructible)
                AddMode("Move");

            if (!first)
                comment += " (and `" + enum_name + "_DefaultArgument` and `" + enum_name + "_NoObject` if supported by the callee).\n";

            generator.EmitCommentLow(file.header, comment);
        }

        file.header.contents += MakeForwardDeclarationNoReg() + '\n';

        // Generate the interop description.
        if (generator.output_desc)
        {
            CInterop::TypeKinds::Class &class_desc = generator.CreateClassDescForInterop(cpp_type_name);
            class_desc.output_file = generator.MakeOutputFileDescForInterop(file);
            class_desc.comment = generator.MakeCommentForInterop(comment);
            class_desc.c_name = c_type_name;

            // Those conditions must be synced with what `MakeParamUsageSupportingDefaultArg()` is doing.
            if (traits.value().UnconditionallyCopyOnPassByValue())
                class_desc.kind = CInterop::ClassKind::trivial_via_ptr;
            else if (traits.value().IsDefaultOrCopyOrMoveConstructible())
                class_desc.kind = CInterop::ClassKind::uses_pass_by_enum;
            else
                class_desc.kind = CInterop::ClassKind::ref_only; // I guess?

            class_desc.inheritance_info = inheritance_info;

            // `fields` must be set separately, manually.
            // `methods` is filled when you call `EmitFunction()`.
        }
    }

    void HeapAllocatedClassBinder::FillCommonParams(Generator &generator, Generator::BindableType &type)
    {
        type.traits = traits.value(); // `type.traits` isn't actually optional (despite having that type), see the comment on it for details.

        type.is_heap_allocated_class = true;

        type.bindable_with_same_address.forward_declaration = MakeForwardDeclarationNoReg();
        type.bindable_with_same_address.custom_c_type_name = c_type_name;

        type.param_usage_with_default_arg = MakeParamUsageSupportingDefaultArg(generator);
        type.return_usage = MakeReturnUsage(generator);
    }

    std::string HeapAllocatedClassBinder::MakeForwardDeclarationNoReg() const
    {
        return MakeStructForwardDeclarationNoReg(c_type_name, c_underlying_type_name);
    }

    Generator::BindableType::ReturnUsage HeapAllocatedClassBinder::MakeReturnUsage(Generator &generator) const
    {
        Generator::BindableType::ReturnUsage ret;

        std::string cpp_type_str = generator.CppdeclToCode(cpp_type_name);

        ret.c_type = cppdecl::Type::FromSingleWord(c_type_name).AddModifier(cppdecl::Pointer{});
        ret.same_addr_bindable_type_dependencies.try_emplace(cpp_type_str);

        ret.append_to_comment = [destroy_func_name = generator.GetClassDestroyFuncName(c_type_name)](std::string_view callback_param_name) -> std::string
        {
            if (callback_param_name.empty())
                return "/// Never returns null. Returns an instance allocated on the heap! Must call `" + destroy_func_name.c + "()` to free it when you're done using it.";
            else
                return "/// Callback parameter `" + std::string(callback_param_name) + "` is never null. It is an instance allocated on the heap! Must call `" + destroy_func_name.c + "()` to free it when you're done using it.";
        };

        ret.make_return_expr = [c_type_name = c_type_name, cpp_type_str = std::move(cpp_type_str)](Generator::OutputFile::SpecificFileContents &file, std::string_view expr)
        {
            (void)file;
            return "(" + c_type_name + " *)new " + cpp_type_str + "(" + std::string(expr) + ")";
        };

        return ret;
    }

    std::optional<Generator::BindableType::ParamUsageWithDefaultArg> HeapAllocatedClassBinder::MakeParamUsageSupportingDefaultArg(Generator &generator) const
    {
        std::optional<Generator::BindableType::ParamUsageWithDefaultArg> ret;

        std::string cpp_type_str = generator.CppdeclToCode(cpp_type_name);

        // Parameter passing strategy.
        // Those conditions must be synced with how `HeapAllocatedClassBinder::EmitForwardDeclaration()` is generating the interop description.
        if (traits.value().UnconditionallyCopyOnPassByValue())
        {
            // For trivialy-copy/move-constructible classes, just pass a pointer.

            Generator::BindableType::ParamUsageWithDefaultArg &param_usage = ret.emplace();
            param_usage.same_addr_bindable_type_dependencies.try_emplace(cpp_type_str);

            param_usage.c_params.emplace_back().c_type = cppdecl::Type::FromSingleWord(c_type_name);
            param_usage.c_params.back().c_type.AddQualifiers(cppdecl::CvQualifiers::const_);
            param_usage.c_params.back().c_type.AddModifier(cppdecl::Pointer{}); // This should be the only modifier at this point.

            param_usage.c_params_to_cpp = [
                cpp_type_str,
                only_trivially_move_constructible = traits.value().is_trivially_move_constructible && !traits.value().is_trivially_copy_constructible
            ](Generator::OutputFile::SpecificFileContents &source_file, std::string_view cpp_param_name, Generator::BindableType::ParamUsage::DefaultArgVar default_arg)
            {
                const auto *wrapper = std::get_if<Generator::BindableType::ParamUsage::DefaultArgWrapper>(&default_arg);

                std::string ret = "(";

                // This obtuse way of writing the conditional is to work around MSVC bug: https://developercommunity.visualstudio.com/t/Regression-array-access-on-result-on-te/10968165?
                if (std::holds_alternative<Generator::BindableType::ParamUsage::DefaultArgNone>(default_arg))
                {
                    source_file.stdlib_headers.insert("stdexcept");
                    ret += "(";
                    ret += cpp_param_name;
                    ret += " ? void() : throw std::runtime_error(\"Parameter `" + std::string(cpp_param_name) + "` can not be null.\")";
                    ret += "), ";
                }
                else
                {
                    ret += cpp_param_name;
                    ret += " ? ";
                }

                if (wrapper)
                {
                    ret += wrapper->wrapper_cpp_type;
                    ret += "(";
                }

                ret += cpp_type_str;
                ret += "(";
                if (only_trivially_move_constructible)
                {
                    // This is rarely useful, but triggers e.g. for `std::pair<int &&, int &&>`.
                    source_file.stdlib_headers.insert("utility");
                    ret += "std::move(";
                }
                ret += "*(";
                ret += cpp_type_str;
                ret += " *)";
                ret += cpp_param_name;
                if (only_trivially_move_constructible)
                    ret += ")"; // Close `std::move()`.
                ret += ")"; // Close `cpp_type_str(...)` constructor call.
                if (wrapper)
                    ret += ")"; // Close wrapper construction.

                std::visit(Overload{
                    [&](Generator::BindableType::ParamUsage::DefaultArgNone)
                    {
                        // Handled above.
                    },
                    [&](std::string_view default_arg)
                    {
                        ret += " : static_cast<";
                        ret += cpp_type_str;
                        ret += ">(";
                        ret += default_arg;
                        ret += ")";
                    },
                    [&](const Generator::BindableType::ParamUsage::DefaultArgWrapper &wrapper)
                    {
                        ret += " : ";
                        ret += wrapper.wrapper_null;
                    }
                }, default_arg);

                ret += ")"; // Close `( ? : )` (default argument vs no default argument).
                return ret;
            };

            param_usage.append_to_comment = [](std::string_view cpp_param_name, bool has_default_arg, bool is_output_param) -> std::string
            {
                if (is_output_param)
                {
                    return "/// Callback return value can not be null.";
                }
                else
                {
                    if (has_default_arg)
                        return "/// Parameter `" + std::string(cpp_param_name) + "` is a single object.";
                    else
                        return "/// Parameter `" + std::string(cpp_param_name) + "` can not be null. It is a single object.";
                }
            };

            param_usage.explanation_how_to_use_default_arg = [](std::string_view cpp_param_name, bool use_wrapper, bool is_returned_from_callback)
            {
                (void)cpp_param_name; (void)use_wrapper;
                return is_returned_from_callback ? "return a null pointer" : "pass a null pointer";
            };
        }
        else if (traits.value().IsDefaultOrCopyOrMoveConstructible())
        {
            // With the pass-by enum.

            // Here we only fill the `_with_default_arg` version, because that handles both.
            Generator::BindableType::ParamUsageWithDefaultArg &param_usage = ret.emplace();
            param_usage.same_addr_bindable_type_dependencies.try_emplace(cpp_type_str);
            param_usage.extra_headers.custom_in_header_file = [&generator]{return std::unordered_set{generator.GetCommonPublicHelpersFile()->header.path_for_inclusion};};

            param_usage.c_params.emplace_back().c_type.simple_type.name.parts.emplace_back(generator.GetPassByEnumName());
            param_usage.c_params.back().name_suffix = "_pass_by";
            param_usage.c_params.emplace_back().c_type = cppdecl::Type::FromSingleWord(c_type_name);
            param_usage.c_params.back().c_type.AddModifier(cppdecl::Pointer{}); // This should be the only modifier at this point.

            param_usage.c_params_to_cpp = [
                &generator,
                cpp_type_str,
                is_default_constructible = traits.value().is_default_constructible,
                is_copy_constructible = traits.value().is_copy_constructible,
                is_move_constructible = traits.value().is_move_constructible,
                pass_by_defarg = generator.GetPassByEnumName() + "_DefaultArgument",
                pass_by_nullopt = generator.GetPassByEnumName() + "_NoObject"
            ](Generator::OutputFile::SpecificFileContents &source_file, std::string_view cpp_param_name, Generator::BindableType::ParamUsage::DefaultArgVar default_arg)
            {
                std::string ret = "(";

                // Insert the defails file for the `MRBINDC_CLASSARG_...()` macros.
                source_file.custom_headers.insert(generator.GetInternalDetailsFile().header.path_for_inclusion);

                const bool no_def_arg = std::holds_alternative<Generator::BindableType::ParamUsage::DefaultArgNone>(default_arg);
                const auto *wrapper = std::get_if<Generator::BindableType::ParamUsage::DefaultArgWrapper>(&default_arg);

                std::string_view cpp_type_or_wrapper_str = wrapper ? wrapper->wrapper_cpp_type : cpp_type_str;

                if (is_default_constructible)
                {
                    ret += "MRBINDC_CLASSARG_DEF_CTOR(";
                    ret += cpp_param_name;
                    ret += ", ";
                    ret += cpp_type_or_wrapper_str;
                    ret += ") ";
                }

                if (is_copy_constructible)
                {
                    ret += "MRBINDC_CLASSARG_COPY(";
                    ret += cpp_param_name;
                    ret += ", (";
                    ret += cpp_type_str;
                    ret += "), ";
                    ret += cpp_type_or_wrapper_str;
                    ret += ") ";
                }

                if (is_move_constructible)
                {
                    ret += "MRBINDC_CLASSARG_MOVE(";
                    ret += cpp_param_name;
                    ret += ", (";
                    ret += cpp_type_str;
                    ret += "), ";
                    ret += cpp_type_or_wrapper_str;
                    ret += ") ";
                }

                if (wrapper ? wrapper->actual_default_arg.empty() : no_def_arg)
                {
                    ret += "MRBINDC_CLASSARG_NO_DEF_ARG(";
                    ret += cpp_param_name;
                    ret += ", ";
                    ret += pass_by_defarg;
                    ret += ", ";
                    ret += cpp_type_or_wrapper_str;
                    ret += ") ";
                }
                else
                {
                    ret += "MRBINDC_CLASSARG_DEF_ARG(";
                    ret += cpp_param_name;
                    ret += ", (";
                    ret += pass_by_defarg;
                    ret += "), (";
                    ret += wrapper ? wrapper->actual_default_arg : std::get<std::string_view>(default_arg);
                    ret += "), ";
                    ret += cpp_type_or_wrapper_str;
                    ret += ") ";
                }

                if (!wrapper)
                {
                    ret += "MRBINDC_CLASSARG_NO_DEF_ARG(";
                    ret += cpp_param_name;
                    ret += ", ";
                    ret += pass_by_nullopt;
                    ret += ", ";
                    ret += cpp_type_or_wrapper_str;
                    ret += ") ";
                }
                else
                {
                    ret += "MRBINDC_CLASSARG_DEF_ARG(";
                    ret += cpp_param_name;
                    ret += ", ";
                    ret += pass_by_nullopt;
                    ret += ", (";
                    ret += wrapper->wrapper_null;
                    ret += "), ";
                    ret += cpp_type_or_wrapper_str;
                    ret += ") ";
                }

                ret += "MRBINDC_CLASSARG_END(";
                ret += cpp_param_name;
                ret += ", ";
                ret += cpp_type_or_wrapper_str;
                ret += ")";

                ret += ")";
                return ret;
            };

            param_usage.explanation_how_to_use_default_arg = [&generator](std::string_view cpp_param_name, bool use_wrapper, bool is_returned_from_callback)
            {
                (void)cpp_param_name;

                std::string enum_value = generator.GetPassByEnumName() + (use_wrapper ? "_NoObject" : "_DefaultArgument");

                if (is_returned_from_callback)
                    return "return a null pointer and write `" + enum_value + "` to `*" + std::string(cpp_param_name) + "_pass_by`";
                else
                    return "pass `" + enum_value + "` and a null pointer";
            };

            param_usage.supports_default_arguments_in_wrappers = true; // !!
        }

        return ret;
    }

    void HeapAllocatedClassBinder::EmitSpecialMemberFunctions(Generator &generator, Generator::OutputFile &file, bool with_param_sugar) const
    {
        if (traits.value().is_default_constructible)
        {
            generator.EmitFunction(file, PrepareFuncDefaultCtor(generator));
            generator.EmitFunction(file, PrepareFuncDefaultCtorArray(generator));
        }

        if (traits.value().is_move_constructible)
        {
            generator.EmitFunction(file, PrepareFuncCopyMoveCtor(generator));
            if (with_param_sugar)
                generator.EmitFunction(file, PrepareFuncCopyMoveCtor(generator, true));
        }

        if (traits.value().is_move_assignable)
        {
            generator.EmitFunction(file, PrepareFuncCopyMoveAssignment(generator));
            if (with_param_sugar)
                generator.EmitFunction(file, PrepareFuncCopyMoveAssignment(generator, true));
        }

        if (traits.value().is_destructible)
        {
            generator.EmitFunction(file, PrepareFuncDestroy(generator));
            generator.EmitFunction(file, PrepareFuncDestroyArray(generator));
        }

        // Functors to offset pointers:
        generator.EmitFunction(file, PrepareFuncOffsetPtr(generator, true));
        generator.EmitFunction(file, PrepareFuncOffsetPtr(generator, false));
    }

    Generator::EmitFuncParams HeapAllocatedClassBinder::PrepareFuncDefaultCtor(Generator &generator) const
    {
        std::string cpp_type_str = generator.CppdeclToCode(cpp_type_name);

        Generator::EmitFuncParams ret;

        ret.name = MakeMemberFuncName(generator, "DefaultConstruct", CInterop::MethodKinds::Constructor{});

        ret.cpp_return_type = cppdecl::Type::FromQualifiedName(cpp_type_name);
        ret.remove_return_type_sugar = true;

        ret.cpp_called_func = cpp_type_str;

        ret.c_comment = "/// Constructs an empty (default-constructed) instance.";

        return ret;
    }

    Generator::EmitFuncParams HeapAllocatedClassBinder::PrepareFuncDefaultCtorArray(Generator &generator) const
    {
        std::string cpp_type_str = generator.CppdeclToCode(cpp_type_name);

        Generator::EmitFuncParams ret;

        ret.name = MakeMemberFuncName(generator, "DefaultConstructArray"); // Not marking as a constructor.

        ret.cpp_return_type = cppdecl::Type::FromQualifiedName(cpp_type_name).AddModifier(cppdecl::Pointer{});
        ret.remove_return_type_sugar = true;

        // Add a dummy parameter to indicate to the interop that this is effectively a static member function.
        // This isn't needed for constructors, but this doesn't count as a constructor.
        ret.params.push_back({
            .name = "",
            .kind = Generator::EmitFuncParams::Param::Kind::static_,
            .omit_from_call = true,
            .cpp_type = cppdecl::Type::FromQualifiedName(cpp_type_name),
        });

        ret.params.push_back({
            .name = "num_elems",
            .cpp_type = cppdecl::Type::FromSingleWord("size_t"),
        });

        ret.cpp_called_func = "new " + generator.CppdeclToCode(cpp_type_name) + "[@1@]{}"; // Right now we're zeroing the array. That sounds like a good idea.

        ret.c_comment =
            "/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.\n"
            "/// The array must be destroyed using `" + generator.GetClassDestroyFuncName(c_type_name, true).c + "()`.\n"
            "/// Use `" + generator.GetClassPtrOffsetFuncName(c_type_name, false).c + "()` and `" + generator.GetClassPtrOffsetFuncName(c_type_name, true).c + "()` to access the array elements.";

        return ret;
    }

    Generator::EmitFuncParams HeapAllocatedClassBinder::PrepareFuncCopyMoveCtor(Generator &generator, bool with_param_sugar) const
    {
        std::string cpp_type_str = generator.CppdeclToCode(cpp_type_name);

        Generator::EmitFuncParams ret;

        ret.name = MakeMemberFuncName(generator, (with_param_sugar ? "ConstructFrom" : "ConstructFromAnother"), CInterop::MethodKinds::Constructor{});

        ret.cpp_return_type = cppdecl::Type::FromQualifiedName(cpp_type_name);
        ret.remove_return_type_sugar = true;

        ret.cpp_called_func = cpp_type_str;

        ret.params.push_back({
            .name = "other",
            .remove_sugar = !with_param_sugar,
            .cpp_type = cppdecl::Type::FromQualifiedName(cpp_type_name),
        });

        if (with_param_sugar)
            ret.c_comment = "/// Constructs a new instance.";
        else
            ret.c_comment = "/// Constructs a copy of another instance. The source remains alive.";

        return ret;
    }

    Generator::EmitFuncParams HeapAllocatedClassBinder::PrepareFuncCopyMoveAssignment(Generator &generator, bool with_param_sugar) const
    {
        std::string cpp_type_str = generator.CppdeclToCode(cpp_type_name);

        Generator::EmitFuncParams ret;

        ret.name = MakeMemberFuncName(generator, (with_param_sugar ? "AssignFrom" : "AssignFromAnother"), CInterop::MethodKinds::Operator{.token = "="});

        ret.AddThisParam(cppdecl::Type::FromQualifiedName(cpp_type_name), false);

        ret.cpp_called_func = "operator=";

        ret.params.push_back({
            .name = "other",
            .remove_sugar = !with_param_sugar,
            .cpp_type = cppdecl::Type::FromQualifiedName(cpp_type_name),
        });

        if (with_param_sugar)
            ret.c_comment = "/// Assigns the contents.";
        else
            ret.c_comment = "/// Assigns the contents from another instance. Both objects remain alive after the call.";

        return ret;
    }

    Generator::EmitFuncParams HeapAllocatedClassBinder::PrepareFuncDestroy(Generator &generator) const
    {
        Generator::EmitFuncParams ret;

        ret.name = generator.GetClassDestroyFuncName(c_type_name);

        ret.params.push_back({
            .name = "_this",
            // Note that this actually takes `const T *`. It seems that C++'s `delete` removes the constness automatically.
            // And we need this parameter to be `const T *` to support `std::unique_ptr<const T>` properly.
            .cpp_type = cppdecl::Type::FromQualifiedName(cpp_type_name).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{}),
        });

        ret.cpp_called_func = "delete @1@";

        ret.c_comment += "/// Destroys a heap-allocated instance of `" + c_type_name + "`. Does nothing if the pointer is null.";

        return ret;
    }

    Generator::EmitFuncParams HeapAllocatedClassBinder::PrepareFuncDestroyArray(Generator &generator) const
    {
        Generator::EmitFuncParams ret;

        ret.name = generator.GetClassDestroyFuncName(c_type_name, true);

        ret.params.push_back({
            .name = "_this",
            // Note that this actually takes `const T *`. It seems that C++'s `delete` removes the constness automatically.
            // And we need this parameter to be `const T *` to support `std::unique_ptr<const T[]>` properly.
            .cpp_type = cppdecl::Type::FromQualifiedName(cpp_type_name).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{}),
        });

        ret.cpp_called_func = "delete[] @1@";

        ret.c_comment += "/// Destroys a heap-allocated array of `" + c_type_name + "`. Does nothing if the pointer is null.";

        return ret;
    }

    Generator::EmitFuncParams HeapAllocatedClassBinder::PrepareFuncOffsetPtr(Generator &generator, bool is_const) const
    {
        Generator::EmitFuncParams ret;

        ret.name = generator.GetClassPtrOffsetFuncName(c_type_name, is_const);

        ret.cpp_return_type = cppdecl::Type::FromQualifiedName(cpp_type_name).AddQualifiers(is_const * cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{});

        ret.params.push_back({
            .name = "ptr",
            .cpp_type = ret.cpp_return_type,
        });
        ret.params.push_back({
            .name = "i",
            .cpp_type = cppdecl::Type::FromSingleWord("ptrdiff_t"),
        });

        ret.cpp_called_func = "@1@ + @2@";

        ret.c_comment += "/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.";

        return ret;
    }

    std::string MakeStructForwardDeclarationNoReg(std::string_view c_type_name, std::string_view c_underlying_type_name)
    {
        std::string ret = "typedef struct ";
        ret += !c_underlying_type_name.empty() ? c_underlying_type_name : c_type_name;
        ret += ' ';
        ret += c_type_name;
        ret += ';';
        return ret;
    }

    std::optional<std::string> CheckPointerDefaultArgumentForNullptr(std::string_view default_arg)
    {
        if (
            default_arg == "nullptr" ||
            default_arg == "NULL" ||
            default_arg == "0" ||
            default_arg == "{}" ||
            default_arg == "__null" || // On GCC and Clang, `NULL` expands to this in the C++ mode.
            default_arg == "((void *)0)" // GCC, Clang, and MSVC all seem to expand `NULL` to this in the C mode.
        )
        {
            return "a null pointer";
        }

        return {};
    }

    void EmitRefOnlyStructForwardDeclaration(Generator &generator, Generator::OutputFile &file, std::string comment, std::string_view c_type_name, std::string_view c_underlying_type_name)
    {
        if (!comment.empty())
        {
            assert(!comment.starts_with('\n')); // Banning this here because we always add one ourselves.
            file.header.contents += '\n'; // Leading newline adds some separation between declarations.
            generator.EmitCommentLow(file.header, std::move(comment));
        }

        file.header.contents += MakeStructForwardDeclarationNoReg(c_type_name, c_underlying_type_name);
        file.header.contents += '\n';
    }

    [[nodiscard]] std::optional<Generator::TypeSizeAndAlignment> GetSizeAndAlignmentForPrimitiveType(Generator &generator, const cppdecl::Type &cpp_type)
    {
        if (cpp_type.Is<cppdecl::Pointer>())
        {
            // A pointer?
            return Generator::TypeSizeAndAlignment{
                .size = generator.data.platform_info.pointer_size,
                .alignment = generator.data.platform_info.pointer_alignment,
            };
        }
        else if (auto prim = generator.data.platform_info.FindPrimitiveType(generator.CppdeclToCode(cpp_type)))
        {
            // A primitive type?
            return Generator::TypeSizeAndAlignment{
                .size = prim->type_size,
                .alignment = prim->type_alignment,
            };
        }

        return {};
    }

    Generator::BindableType MakeSimpleDirectTypeBinding(Generator &generator, const cppdecl::Type &cpp_type, const cppdecl::Type &c_type, std::optional<Generator::TypeSizeAndAlignment> override_size_and_alignment)
    {
        Generator::BindableType ret;

        ret.traits = Generator::TypeTraits::Trivial{};

        // Custom handling for `void`.
        if (cpp_type.AsSingleWord() == "void")
        {
            // Only fill the return usage.

            auto &ret_usage = ret.return_usage.emplace();
            ret_usage.c_type = c_type;

            ret.interop_info = CInterop::TypeKinds::Void{};

            return ret;
        }

        if (override_size_and_alignment)
        {
            ret.c_cpp_size_and_alignment = std::move(override_size_and_alignment);
        }
        else
        {
            // This should never return null, at least on built-in types.
            // But just in case I'm not inserting a check here, since it wouldn't break much.
            ret.c_cpp_size_and_alignment = GetSizeAndAlignmentForPrimitiveType(generator, cpp_type);
        }

        if (cpp_type.IsConstOrReference())
            ret.traits->MakeNonAssignable();

        auto &param = ret.param_usage.emplace();
        param.c_params.push_back({
            .c_type = cppdecl::Type(c_type),
        });

        // Allow default arguments via pointers.
        auto &param_def_arg = ret.param_usage_with_default_arg.emplace();
        param_def_arg.c_params.push_back({
            .c_type = cppdecl::Type(c_type).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{})
        });
        param_def_arg.explanation_how_to_use_default_arg = [](std::string_view cpp_param_name, bool use_wrapper, bool is_returned_from_callback){(void)cpp_param_name; (void)use_wrapper; return is_returned_from_callback ? "return a null pointer" : "pass a null pointer";};
        param_def_arg.c_params_to_cpp = [cpp_type_str = generator.CppdeclToCode(cpp_type)](Generator::OutputFile::SpecificFileContents &source_file, std::string_view cpp_param_name, Generator::BindableType::ParamUsage::DefaultArgVar default_arg)
        {
            (void)source_file;

            // This lambda doesn't need the workaround for bug: https://developercommunity.visualstudio.com/t/Regression-array-access-on-result-on-te/10968165?
            //   because it always gets a default argument, so it never needs to throw from a conditional.

            std::string ret = "(";
            ret += cpp_param_name;
            ret += " ? ";

            const auto *wrapper = std::get_if<Generator::BindableType::ParamUsage::DefaultArgWrapper>(&default_arg);

            if (wrapper)
                ret += std::string(wrapper->wrapper_cpp_type) + "(";

            ret += "*";
            ret += cpp_param_name;

            if (wrapper)
                ret += ")";

            ret += " : ";

            // The default argument begins...
            std::visit(Overload{
                [&](Generator::BindableType::ParamUsage::DefaultArgNone)
                {
                    assert(false); // Unreachable.
                },
                [&](std::string_view default_arg)
                {
                    ret += "static_cast<";
                    ret += cpp_type_str;
                    ret += ">(";
                    ret += default_arg;
                    ret += ")";
                },
                [&](const Generator::BindableType::ParamUsage::DefaultArgWrapper &wrapper)
                {
                    ret += wrapper.wrapper_null;
                }
            }, default_arg);

            ret += ")"; // Close `( ? : )` (default argument vs no default argument).
            return ret;
        };

        // Ignore nullptr default arguments on pointers. This produces nicer interfaces.
        if (cpp_type.Is<cppdecl::Pointer>())
            ret.is_useless_default_argument = CheckPointerDefaultArgumentForNullptr;

        // Return usage is trivial:
        ret.return_usage.emplace().c_type = c_type;

        generator.FillDefaultTypeDependencies(cpp_type, ret);

        // Guess the interop kind:
        if (cpp_type.Is<cppdecl::Pointer>())
            ret.interop_info = CInterop::TypeKinds::PointerNonOwning{};
        else
            ret.interop_info = CInterop::TypeKinds::Arithmetic{}; // What else could it be? Hmm.

        return ret;
    }

    std::optional<Generator::BindableType> MakeSimpleTypeBinding(Generator &generator, const cppdecl::Type &cpp_type)
    {
        const std::string cpp_type_str = generator.CppdeclToCode(cpp_type);

        // Bindable without a cast?
        if (generator.IsSimplyBindableDirect(cpp_type))
        {
            auto type_c_style = cpp_type;
            generator.ReplaceAllNamesInTypeWithCNames(type_c_style);

            return MakeSimpleDirectTypeBinding(generator, cpp_type, type_c_style);
        }
        // Bindable with a C-style cast?
        if (generator.IsSimplyBindableDirectCast(cpp_type))
        {
            auto type_c_style = cpp_type;
            generator.ReplaceAllNamesInTypeWithCNames(type_c_style);

            Generator::BindableType new_type;

            new_type.traits = Generator::TypeTraits::Trivial{};

            auto &ret_usage = new_type.return_usage.emplace();
            ret_usage.c_type = type_c_style;

            auto &param = new_type.param_usage.emplace();
            param.c_params.push_back({
                .c_type = type_c_style,
            });

            // Add the casts!
            ret_usage.make_return_expr = [type_str_c = generator.CppdeclToCode(type_c_style)](Generator::OutputFile::SpecificFileContents &file, std::string_view expr)
            {
                (void)file;
                return "(" + type_str_c + ")(" + std::string(expr) + ")";
            };
            param.c_params_to_cpp = [cpp_type_str](Generator::OutputFile::SpecificFileContents &source_file, std::string_view cpp_param_name, Generator::BindableType::ParamUsage::DefaultArgVar default_arg)
            {
                (void)source_file;
                (void)default_arg;
                return "((" + cpp_type_str + ")" + std::string(cpp_param_name) + ")";
            };

            // Allow default arguments via pointers.
            auto &param_def_arg = new_type.param_usage_with_default_arg.emplace();
            param_def_arg.c_params.push_back({
                .c_type = type_c_style.AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{})
            });
            param_def_arg.explanation_how_to_use_default_arg = [](std::string_view cpp_param_name, bool use_wrapper, bool is_returned_from_callback){(void)cpp_param_name; (void)use_wrapper; return is_returned_from_callback ? "return a null pointer" : "pass a null pointer";};
            param_def_arg.c_params_to_cpp = [cpp_type_str](Generator::OutputFile::SpecificFileContents &source_file, std::string_view cpp_param_name, Generator::BindableType::ParamUsage::DefaultArgVar default_arg)
            {
                (void)source_file;

                // This lambda doesn't need the workaround for bug: https://developercommunity.visualstudio.com/t/Regression-array-access-on-result-on-te/10968165?
                //   because it always gets a default argument, so it never needs to throw from a conditional.

                std::string ret = "(";
                ret += cpp_param_name;
                ret += " ? ";

                const auto *wrapper = std::get_if<Generator::BindableType::ParamUsage::DefaultArgWrapper>(&default_arg);

                if (wrapper)
                    ret += std::string(wrapper->wrapper_cpp_type) + "(";

                ret += "("; // Need those parentheses because `cpp_type_str` can be a pointer.
                ret += cpp_type_str;
                ret += ")(*";
                ret += cpp_param_name;
                ret += ")";

                if (wrapper)
                    ret += ")";

                ret += " : ";

                // The default argument begins...
                std::visit(Overload{
                    [&](Generator::BindableType::ParamUsage::DefaultArgNone)
                    {
                        assert(false); // Unreachable.
                    },
                    [&](std::string_view default_arg)
                    {
                        ret += "static_cast<";
                        ret += cpp_type_str;
                        ret += ">(";
                        ret += default_arg;
                        ret += ")";
                    },
                    [&](const Generator::BindableType::ParamUsage::DefaultArgWrapper &wrapper)
                    {
                        ret += wrapper.wrapper_null;
                    }
                }, default_arg);

                ret += ")"; // Close `( ? : )` (default argument vs no default argument).
                return ret;
            };

            // Ignore nullptr default arguments on pointers. This produces nicer interfaces.
            if (cpp_type.Is<cppdecl::Pointer>())
                new_type.is_useless_default_argument = CheckPointerDefaultArgumentForNullptr;

            // Definitely needed here.
            generator.FillDefaultTypeDependencies(cpp_type, new_type);

            // Try to guess size and alignment. Also here we handle the interop kind.
            if ((new_type.c_cpp_size_and_alignment = GetSizeAndAlignmentForPrimitiveType(generator, cpp_type)))
            {
                // Also guess the interop kind.
                if (cpp_type.Is<cppdecl::Pointer>())
                {
                    new_type.interop_info = CInterop::TypeKinds::PointerNonOwning{};
                }
                else
                {
                    // This shouldn't happen. Hmm.
                    throw std::logic_error("Not sure what interop kind to select for type `" + generator.CppdeclToCode(cpp_type) + "`, expected it to be a pointer but it's something else.");
                }
            }
            else
            {
                // A enum?
                if (auto iter = generator.parsed_type_info.find(cpp_type_str); iter != generator.parsed_type_info.end() && iter->second.IsEnum())
                {
                    try
                    {
                        // Propagate size and alignment from the underlying type.
                        // This should never fail, so we use the throwing version.
                        new_type.c_cpp_size_and_alignment = generator.FindSameSizeAndAlignment(generator.ParseTypeOrThrow(std::get<Generator::ParsedTypeInfo::EnumDesc>(iter->second.input_type).parsed->canonical_underlying_type));
                    }
                    catch (...)
                    {
                        std::throw_with_nested(std::runtime_error("While determining the size and alignment of the underlying type of enum `" + cpp_type_str + "`:"));
                    }

                    // Skipping setting the interop info for now, it's done later by the `Generator::EmitEnum()`.
                }
            }

            return new_type;
        }


        const bool is_ref = cpp_type.Is<cppdecl::Reference>();
        const bool is_rvalue_ref = is_ref && cpp_type.As<cppdecl::Reference>()->kind == cppdecl::RefQualifier::rvalue;
        cppdecl::Type ref_target_type;
        if (is_ref)
            ref_target_type = cppdecl::Type(cpp_type).RemoveModifier();

        // A reference to `IsSimplyBindableIndirect[Reinterpret]`?
        if (is_ref)
        {
            const bool without_cast = generator.IsSimplyBindableIndirect(ref_target_type);
            const bool with_cast = !without_cast && generator.IsSimplyBindableIndirectReinterpret(ref_target_type);

            if (without_cast || with_cast)
            {
                auto type_c_style = cpp_type;
                generator.ReplaceAllNamesInTypeWithCNames(type_c_style);

                Generator::BindableType new_type;

                new_type.traits = Generator::TypeTraits(Generator::TypeTraits::ReferenceType{}, ref_target_type.IsConst(), is_rvalue_ref);

                auto type_c_style_ptr = type_c_style;
                type_c_style_ptr.modifiers.front().var = cppdecl::Pointer{};

                // Return type:

                auto &ret_usage = new_type.return_usage.emplace();
                ret_usage.c_type = type_c_style_ptr;
                ret_usage.append_to_comment = [is_rvalue_ref](std::string_view callback_param_name) -> std::string
                {
                    std::string ret;
                    if (callback_param_name.empty())
                    {
                        ret = "/// The returned pointer will never be null. It is non-owning, do NOT destroy it.";
                        if (is_rvalue_ref)
                            ret += "\n/// In C++ returns an rvalue reference.";
                    }
                    else
                    {
                        ret = "/// Callback parameter `" + std::string(callback_param_name) + "` will never be null. It is non-owning, do NOT destroy it.";
                        if (is_rvalue_ref)
                            ret += "\n/// In C++ that parameter is an rvalue reference.";
                    }
                    return ret;
                };

                if (with_cast)
                {
                    auto ptr_type_c_style = type_c_style;
                    assert(ptr_type_c_style.Is<cppdecl::Reference>());
                    ptr_type_c_style.modifiers.at(0).var = cppdecl::Pointer{};

                    // Take the address and cast.
                    ret_usage.make_return_expr = [
                        ref_target_c_type_ptr_str = generator.CppdeclToCode(ptr_type_c_style),
                        is_rvalue_ref,
                        details_file = is_rvalue_ref ? generator.GetInternalDetailsFile().header.path_for_inclusion : std::string{}
                    ](Generator::OutputFile::SpecificFileContents &file, std::string_view expr)
                    {
                        if (!is_rvalue_ref)
                        {
                            return "(" + ref_target_c_type_ptr_str + ")&(" + std::string(expr) + ")";
                        }
                        else
                        {
                            file.custom_headers.insert(details_file); // For `unmove()`.
                            return "(" + ref_target_c_type_ptr_str + ")&mrbindc_details::unmove(" + std::string(expr) + ")";
                        }
                    };
                }
                else
                {
                    // Just take the address.
                    // Here we don't need any special handling of rvalue references.
                    ret_usage.make_return_expr = [
                        is_rvalue_ref,
                        details_file = is_rvalue_ref ? generator.GetInternalDetailsFile().header.path_for_inclusion : std::string{}
                    ](Generator::OutputFile::SpecificFileContents &file, std::string_view expr)
                    {
                        (void)file;
                        if (!is_rvalue_ref)
                        {
                            return "&(" + std::string(expr) + ")";
                        }
                        else
                        {
                            file.custom_headers.insert(details_file); // For `unmove()`.
                            return "&mrbindc_details::unmove(" + std::string(expr) + ")";
                        }
                    };
                }


                // Params:
                auto &param_def_arg = new_type.param_usage_with_default_arg.emplace();
                param_def_arg.c_params.push_back({
                    .c_type = type_c_style_ptr,
                });

                param_def_arg.append_to_comment = [
                    is_rvalue_ref
                ](std::string_view cpp_param_name, bool has_default_arg, bool is_output_param) -> std::string
                {
                    std::string ret;

                    if (is_output_param)
                    {
                        ret = "/// Callback return value can not be null.";
                        if (is_rvalue_ref)
                        {
                            ret +=
                                "\n"
                                "/// In C++ the callback returns an rvalue reference: it might invalidate the returned object,\n"
                                "///   but if your pointer is owning, you must still destroy it manually later.";
                        }
                    }
                    else
                    {
                        if (has_default_arg)
                            ret = "/// Parameter `" + std::string(cpp_param_name) + "` is a single object.";
                        else
                            ret = "/// Parameter `" + std::string(cpp_param_name) + "` can not be null. It is a single object.";

                        if (is_rvalue_ref)
                        {
                            ret +=
                                "\n"
                                "/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,\n"
                                "///   but if your pointer is owning, you must still destroy it manually later.";
                        }
                    }

                    return ret;
                };
                param_def_arg.explanation_how_to_use_default_arg = [](std::string_view cpp_param_name, bool use_wrapper, bool is_returned_from_callback){(void)cpp_param_name; (void)use_wrapper; return is_returned_from_callback ? "return a null pointer" : "pass a null pointer";};

                param_def_arg.c_params_to_cpp = [
                    cpp_type_str,
                    cpp_ptr_type_str = generator.CppdeclToCode(cppdecl::Type(ref_target_type).AddModifier(cppdecl::Pointer{})),
                    with_cast,
                    is_rvalue_ref
                ](Generator::OutputFile::SpecificFileContents &source_file, std::string_view cpp_param_name, Generator::BindableType::ParamUsage::DefaultArgVar default_arg)
                {
                    std::string ret;

                    ret += "(";

                    // This obtuse way of writing the conditional is to work around MSVC bug: https://developercommunity.visualstudio.com/t/Regression-array-access-on-result-on-te/10968165?
                    if (std::holds_alternative<Generator::BindableType::ParamUsage::DefaultArgNone>(default_arg))
                    {
                        source_file.stdlib_headers.insert("stdexcept");
                        ret += "(";
                        ret += cpp_param_name;
                        ret += " ? void() : throw std::runtime_error(\"Parameter `" + std::string(cpp_param_name) + "` can not be null.\")";
                        ret += "), ";
                    }
                    else
                    {
                        ret += cpp_param_name;
                        ret += " ? ";
                    }

                    const auto *wrapper = std::get_if<Generator::BindableType::ParamUsage::DefaultArgWrapper>(&default_arg);

                    if (wrapper)
                        ret += std::string(wrapper->wrapper_cpp_type) + "(";

                    if (is_rvalue_ref)
                    {
                        source_file.stdlib_headers.insert("utility");
                        ret += "std::move(";
                    }

                    ret += "*";
                    if (with_cast)
                    {
                        ret += "(";
                        ret += cpp_ptr_type_str;
                        ret += ")(";
                        ret += cpp_param_name;
                        ret += ")";
                    }
                    else
                    {
                        ret += cpp_param_name;
                    }

                    if (is_rvalue_ref)
                        ret += ")"; // Close `std::move()`.

                    if (wrapper)
                        ret += ")"; // Close wrapper.

                    // The default argument begins...
                    std::visit(Overload{
                        [&](Generator::BindableType::ParamUsage::DefaultArgNone)
                        {
                            // Handled above.
                        },
                        [&](std::string_view default_arg)
                        {
                            ret += " : static_cast<";
                            ret += cpp_type_str;
                            ret += ">(";
                            ret += default_arg;
                            ret += ")";
                        },
                        [&](const Generator::BindableType::ParamUsage::DefaultArgWrapper &wrapper)
                        {
                            ret += " : ";
                            ret += wrapper.wrapper_null;
                        }
                    }, default_arg);

                    ret += ")"; // Close `( ? : )` (default argument vs no default argument).
                    return ret;
                };

                generator.FillDefaultTypeDependencies(cpp_type, new_type);

                new_type.interop_info = CInterop::TypeKinds::ReferenceNonOwning{};

                return new_type;
            }
        }

        return {};
    }

    Generator::BindableType MakeByValueParsedClassBinding(Generator &generator, const cppdecl::QualifiedName &cpp_type, std::string_view c_type_str, const Generator::TypeTraits &traits)
    {
        Generator::BindableType new_type;
        HeapAllocatedClassBinder class_binder;

        new_type.traits = traits;

        class_binder.traits = traits;
        class_binder.cpp_type_name = cpp_type;
        class_binder.c_type_name = c_type_str;

        new_type.is_heap_allocated_class = true;

        new_type.param_usage_with_default_arg = class_binder.MakeParamUsageSupportingDefaultArg(generator);

        new_type.return_usage = class_binder.MakeReturnUsage(generator);

        // Not setting the interop info here, it's done lazily when emitting the struct body.

        return new_type;
    }

    Generator::BindableType MakeBitCastClassBinding(Generator &generator, const cppdecl::QualifiedName &cpp_type, std::string_view c_type_str, const Generator::TypeTraits &traits, const Generator::TypeSizeAndAlignment &size_and_alignment)
    {
        (void)generator;

        const std::string cpp_type_str = generator.CppdeclToCode(cpp_type);

        Generator::BindableType new_type;
        new_type.traits = traits;
        // Don't need `.bindable_with_same_address` for parsed classes. See the comment on this function.

        // Param usage.
        Generator::BindableType::ParamUsage &param = new_type.param_usage.emplace();
        param.same_addr_bindable_type_dependencies[cpp_type_str].need_header = true; // Need the header to pass this stuff by value.
        param.c_params.push_back({.c_type = cppdecl::Type::FromSingleWord(std::string(c_type_str))});
        param.extra_headers.custom_in_source_file = [&generator]{std::unordered_set<std::string> ret; ret.insert(generator.GetInternalDetailsFile().header.path_for_inclusion); return ret;};
        param.c_params_to_cpp = [cpp_type_str](Generator::OutputFile::SpecificFileContents &source_file, std::string_view cpp_param_name, Generator::BindableType::ParamUsage::DefaultArgVar default_arg) -> std::string
        {
            (void)source_file;
            (void)default_arg;
            assert(std::holds_alternative<Generator::BindableType::ParamUsage::DefaultArgNone>(default_arg));
            return "MRBINDC_BIT_CAST((" + cpp_type_str + "), " + std::string(cpp_param_name) + ")";
        };

        // Param usage with default argument.
        Generator::BindableType::ParamUsageWithDefaultArg &param_defarg = new_type.param_usage_with_default_arg.emplace();
        param_defarg.same_addr_bindable_type_dependencies[cpp_type_str].need_header = true; // Need the header to pass this stuff by value.
        param_defarg.c_params.push_back({.c_type = cppdecl::Type::FromSingleWord(std::string(c_type_str)).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{})});
        param_defarg.extra_headers.custom_in_source_file = [&generator]{std::unordered_set<std::string> ret; ret.insert(generator.GetInternalDetailsFile().header.path_for_inclusion); return ret;};
        param_defarg.c_params_to_cpp = [cpp_type_str](Generator::OutputFile::SpecificFileContents &source_file, std::string_view cpp_param_name, Generator::BindableType::ParamUsage::DefaultArgVar default_arg) -> std::string
        {
            (void)source_file;

            // This lambda doesn't need the workaround for bug: https://developercommunity.visualstudio.com/t/Regression-array-access-on-result-on-te/10968165?
            //   because it always gets a default argument, so it never needs to throw from a conditional.

            const auto *wrapper = std::get_if<Generator::BindableType::ParamUsage::DefaultArgWrapper>(&default_arg);

            std::string ret;
            ret += "(";
            ret += cpp_param_name;
            ret += " ? ";

            if (wrapper)
            {
                ret += wrapper->wrapper_cpp_type;
                ret += "(";
            }

            ret += "MRBINDC_BIT_CAST((" + cpp_type_str + "), *" + std::string(cpp_param_name) + ")";

            if (wrapper)
                ret += ")";

            ret += " : ";

            std::visit(Overload{
                [&](Generator::BindableType::ParamUsage::DefaultArgNone)
                {
                    // Unreachable, we have a separate usage without default parameters.
                    assert(false);
                },
                [&](std::string_view default_arg)
                {
                    ret += cpp_type_str + "(";
                    ret += default_arg;
                    ret += ")";
                },
                [&](const Generator::BindableType::ParamUsage::DefaultArgWrapper &wrapper)
                {
                    ret += wrapper.wrapper_null;
                }
            }, default_arg);

            ret += ")"; // Close `( ? : )` (default argument vs no default argument).

            return ret;
        };
        param_defarg.explanation_how_to_use_default_arg = [](std::string_view cpp_param_name, bool use_wrapper, bool is_returned_from_callback)
        {
            (void)cpp_param_name; (void)use_wrapper;
            return is_returned_from_callback ? "return a null pointer" : "pass a null pointer";
        };

        // Return usage.
        Generator::BindableType::ReturnUsage &ret_usage = new_type.return_usage.emplace();
        ret_usage.same_addr_bindable_type_dependencies[cpp_type_str].need_header = true; // Need the header to pass this stuff by value.
        ret_usage.c_type = cppdecl::Type::FromSingleWord(std::string(c_type_str));
        ret_usage.extra_headers.custom_in_source_file = [&generator]{std::unordered_set<std::string> ret; ret.insert(generator.GetInternalDetailsFile().header.path_for_inclusion); return ret;};
        ret_usage.make_return_expr = [c_type_str = std::string(c_type_str)](Generator::OutputFile::SpecificFileContents &file, std::string_view expr) -> std::string
        {
            (void)file;
            return "MRBINDC_BIT_CAST((" + c_type_str + "), " + std::string(expr) + ")";
        };

        new_type.c_cpp_size_and_alignment = size_and_alignment;

        return new_type;
    }

    std::optional<Generator::BindableType> BindNonConstOrRvalueRefParamsSameAsNonRef(Generator &generator, const cppdecl::Type &cpp_type, const cppdecl::QualifiedName &target_name, const cppdecl::QualifiedName::EqualsFlags comparison_flags)
    {
        if (cpp_type.modifiers.size() != 1)
            return {}; // Need exactly one modifier (a reference).

        const cppdecl::Reference *ref = cpp_type.As<cppdecl::Reference>();
        if (!ref)
            return {}; // Not a reference.

        bool is_const = cpp_type.IsConst(1);

        if (ref->kind == cppdecl::RefQualifier::lvalue && !is_const)
            return {}; // Reject non-const lvalue references.

        if (!cpp_type.simple_type.name.Equals(target_name, comparison_flags))
            return {}; // Type name mismatch.

        // This is non-`Opt`. We throw if this fails.
        const Generator::BindableType &by_value_binding = generator.FindBindableType(cppdecl::Type(cpp_type).RemoveModifier().RemoveQualifiers(cppdecl::CvQualifiers::const_));

        // We throw if this fails.
        Generator::BindableType ret = MakeSimpleTypeBinding(generator, cpp_type).value();

        ret.param_usage = by_value_binding.param_usage;
        ret.param_usage_with_default_arg = by_value_binding.param_usage_with_default_arg;

        return ret;
    }

    std::optional<Generator::BindableType> BindRvalueRefParamsSameAsNonRef(Generator &generator, const cppdecl::Type &cpp_type, const cppdecl::QualifiedName &target_name, const cppdecl::QualifiedName::EqualsFlags comparison_flags)
    {
        if (cpp_type.modifiers.size() != 1)
            return {}; // Need exactly one modifier (a reference).

        const cppdecl::Reference *ref = cpp_type.As<cppdecl::Reference>();
        if (!ref || ref->kind != cppdecl::RefQualifier::rvalue)
            return {}; // Not an rvalue reference.

        if (!cpp_type.simple_type.name.Equals(target_name, comparison_flags))
            return {}; // Type name mismatch.

        // This is non-`Opt`. We throw if this fails.
        const Generator::BindableType &by_value_binding = generator.FindBindableType(cppdecl::Type(cpp_type).RemoveModifier().RemoveQualifiers(cppdecl::CvQualifiers::const_));

        // We throw if this fails.
        Generator::BindableType ret = MakeSimpleTypeBinding(generator, cpp_type).value();

        ret.param_usage = by_value_binding.param_usage;
        ret.param_usage_with_default_arg = by_value_binding.param_usage_with_default_arg;

        return ret;
    }

    Generator::BindableType::ParamUsageWithDefaultArg MakeStringLikeParamUsageSupportingDefaultArg(
        std::string_view cpp_type_name,
        std::function<std::string(std::string_view begin)> from_one_pointer,
        std::function<std::string(std::string_view begin, std::string_view end)> from_two_pointers
    )
    {
        Generator::BindableType::ParamUsageWithDefaultArg ret;

        auto const_char_ptr_type = cppdecl::Type::FromSingleWord("char").AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{});
        ret.c_params.emplace_back().c_type = const_char_ptr_type;
        ret.c_params.emplace_back().c_type = const_char_ptr_type; // A second one.
        ret.c_params.back().name_suffix += "_end";
        ret.c_params_to_cpp = [
            cpp_type_name = std::string(cpp_type_name), // Capture a copy of the string
            from_one_pointer,
            from_two_pointers
        ](Generator::OutputFile::SpecificFileContents &source_file, std::string_view cpp_param_name, Generator::BindableType::ParamUsage::DefaultArgVar default_arg)
        {
            std::string ret = "(";

            // This obtuse way of writing the conditional is to work around MSVC bug: https://developercommunity.visualstudio.com/t/Regression-array-access-on-result-on-te/10968165?
            if (std::holds_alternative<Generator::BindableType::ParamUsage::DefaultArgNone>(default_arg))
            {
                source_file.stdlib_headers.insert("stdexcept");
                ret += "(";
                ret += cpp_param_name;
                ret += " ? void() : throw std::runtime_error(\"Parameter `" + std::string(cpp_param_name) + "` can not be null.\")";
                ret += "), ";
            }
            else
            {
                ret += cpp_param_name;
                ret += " ? ";
            }

            const auto *wrapper = std::get_if<Generator::BindableType::ParamUsage::DefaultArgWrapper>(&default_arg);
            if (wrapper)
                ret += wrapper->wrapper_cpp_type;

            ret += "(" + std::string(cpp_param_name) + "_end ? ";
            if (from_two_pointers)
                ret += from_two_pointers(cpp_param_name, std::string(cpp_param_name) + "_end");
            else
                ret += cpp_type_name + "(" + std::string(cpp_param_name) + ", " + std::string(cpp_param_name) + "_end)";

            ret += " : ";

            if (from_one_pointer)
                ret += from_one_pointer(cpp_param_name);
            else
                ret += cpp_type_name + "(" + std::string(cpp_param_name) + ")";

            ret += ")";

            std::visit(Overload{
                [&](Generator::BindableType::ParamUsage::DefaultArgNone)
                {
                    // Handled above.
                },
                [&](std::string_view default_arg)
                {
                    ret += " : ";
                    ret += cpp_type_name + "(";
                    ret += default_arg;
                    ret += ")";
                },
                [&](const Generator::BindableType::ParamUsage::DefaultArgWrapper &wrapper)
                {
                    ret += " : ";
                    ret += wrapper.wrapper_null;
                }
            }, default_arg);

            ret += ")"; // Close `( ? : )` (default argument vs no default argument).
            return ret;
        };
        ret.append_to_comment = [](std::string_view cpp_param_name, bool has_default_arg, bool is_output_param)
        {
            std::string ret;
            if (!has_default_arg)
            {
                if (is_output_param)
                    ret += "/// Callback return value can not be null.\n";
                else
                    ret += "/// Parameter `" + std::string(cpp_param_name) + "` can not be null.\n";
            }

            if (is_output_param)
                ret += "/// If `*" + std::string(cpp_param_name) + "_end` is kept null, then the callback return value is assumed to be null-terminated.";
            else
                ret += "/// If `" + std::string(cpp_param_name) + "_end` is null, then `" + std::string(cpp_param_name) + "` is assumed to be null-terminated.";

            if (has_default_arg)
                ret += "\n/// Non-null `" + std::string(cpp_param_name) + "_end` requires a non-null `" + std::string(cpp_param_name) + "`.";
            return ret;
        };
        ret.explanation_how_to_use_default_arg = [](std::string_view cpp_param_name, bool use_wrapper, bool is_returned_from_callback)
        {
            (void)use_wrapper;
            if (is_returned_from_callback)
                return "return a null pointer and leave `" + std::string(cpp_param_name) + "_end` as is"; // Leave as is because it defaults to null anyway.
            else
                return "pass a null pointer to both it and `" + std::string(cpp_param_name) + "_end`";
        };

        ret.considered_sugar_for_interop = true; // This is 100% sugar.

        return ret;
    }
}
