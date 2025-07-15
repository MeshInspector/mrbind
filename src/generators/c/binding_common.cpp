#include "binding_common.h"
#include "common/meta.h"

namespace mrbind::CBindings
{
    HeapAllocatedClassBinder HeapAllocatedClassBinder::ForCustomType(Generator &generator, cppdecl::QualifiedName new_cpp_type_name, std::string_view new_c_type_name_base, std::string new_underlying_c_type_base_name)
    {
        HeapAllocatedClassBinder ret;

        ret.cpp_type_name = std::move(new_cpp_type_name);

        ret.c_type_name = generator.MakePublicHelperName(new_c_type_name_base.empty() ? cppdecl::ToString(ret.cpp_type_name, cppdecl::ToStringFlags::identifier) : new_c_type_name_base);
        ret.c_underlying_type_name = !new_underlying_c_type_base_name.empty() ? generator.MakePublicHelperName(new_underlying_c_type_base_name) : "";

        return ret;
    }

    std::string HeapAllocatedClassBinder::MakeMemberFuncName(std::string_view name) const
    {
        return c_type_name + '_' + std::string(name);
    }

    void HeapAllocatedClassBinder::EmitForwardDeclaration(Generator &generator, Generator::OutputFile &file) const
    {
        { // Make a comment with supported pass-by modes.
            std::string enum_name = generator.GetPassByEnumName();

            file.header.contents += "/// Supported `" + enum_name + "` modes: ";
            if (traits.value().is_default_constructible)
                file.header.contents += '`' + enum_name + "_DefaultConstruct`, ";
            if (traits.value().is_copy_constructible)
            {
                file.header.contents += '`' + enum_name + "_Copy`";
                if (traits.value().copy_constructor_takes_nonconst_ref)
                    file.header.contents += " (for this type may modify the source object)";
                file.header.contents += ", ";
            }
            if (traits.value().is_move_constructible)
                file.header.contents += '`' + enum_name + "_Move`, ";

            file.header.contents += "(and `" + enum_name + "_DefaultArgument` and `" + enum_name + "_NoObject` if supported by the callee).\n";
        }

        file.header.contents += MakeForwardDeclaration();
        file.header.contents += '\n';
    }

    void HeapAllocatedClassBinder::FillCommonParams(Generator &generator, Generator::BindableType &type)
    {
        type.traits = traits.value(); // `type.traits` isn't actually optional (despite having that type), see the comment on it for details.

        type.is_heap_allocated_class = true;

        type.bindable_with_same_address.forward_declaration = MakeForwardDeclaration();
        type.bindable_with_same_address.custom_c_type_name = c_type_name;

        type.param_usage_with_default_arg = MakeParamUsageSupportingDefaultArg(generator);
        type.return_usage = MakeReturnUsage(generator);
    }

    std::string HeapAllocatedClassBinder::MakeForwardDeclaration() const
    {
        return MakeStructForwardDeclaration(c_type_name, c_underlying_type_name);
    }

    Generator::BindableType::ReturnUsage HeapAllocatedClassBinder::MakeReturnUsage(Generator &generator) const
    {
        Generator::BindableType::ReturnUsage ret;

        std::string cpp_type_str = cppdecl::ToCode(cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style);

        ret.c_type = cppdecl::Type::FromSingleWord(c_type_name).AddModifier(cppdecl::Pointer{});
        ret.same_addr_bindable_type_dependencies.try_emplace(cpp_type_str);

        ret.append_to_comment = [destroy_func_name = generator.GetClassDestroyFuncName(c_type_name)](std::string_view callback_param_name) -> std::string
        {
            if (callback_param_name.empty())
                return "/// Never returns null. Returns an instance allocated on the heap! Must call `" + destroy_func_name + "()` to free it when you're done using it.";
            else
                return "/// Callback parameter `" + std::string(callback_param_name) + "` is never null. It is an instance allocated on the heap! Must call `" + destroy_func_name + "()` to free it when you're done using it.";
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

        std::string cpp_type_str = cppdecl::ToCode(cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style);

        // Parameter passing strategy.
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

                ret += cpp_param_name;
                ret += " ? ";

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
                ret += " : ";

                std::visit(Overload{
                    [&](Generator::BindableType::ParamUsage::DefaultArgNone)
                    {
                        source_file.stdlib_headers.insert("stdexcept");
                        ret += "throw std::runtime_error(\"Parameter `";
                        ret += cpp_param_name;
                        ret += "` can not be null.\")";
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

            param_usage.append_to_comment = [](std::string_view cpp_param_name, bool has_default_arg, bool is_output_param) -> std::string
            {
                if (is_output_param)
                    return "/// Callback return value can not be null.";
                else if (!has_default_arg)
                    return "/// Parameter `" + std::string(cpp_param_name) + "` can not be null.";
                else return "";
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
            param_usage.extra_headers.custom_in_header_file = [&generator]{return std::unordered_set{generator.GetCommonPublicHelpersFile().header.path_for_inclusion};};

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
        (void)generator;

        std::string cpp_type_str = cppdecl::ToCode(cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style);

        Generator::EmitFuncParams ret;

        ret.c_name = MakeMemberFuncName("DefaultConstruct");

        ret.cpp_return_type = cppdecl::Type::FromQualifiedName(cpp_type_name);
        ret.remove_return_type_sugar = true;

        ret.cpp_called_func = cpp_type_str;

        ret.c_comment = "/// Constructs an empty (default-constructed) instance.";

        return ret;
    }

    Generator::EmitFuncParams HeapAllocatedClassBinder::PrepareFuncDefaultCtorArray(Generator &generator) const
    {
        std::string cpp_type_str = cppdecl::ToCode(cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style);

        Generator::EmitFuncParams ret;

        ret.c_name = MakeMemberFuncName("DefaultConstructArray");

        ret.cpp_return_type = cppdecl::Type::FromQualifiedName(cpp_type_name).AddModifier(cppdecl::Pointer{});
        ret.remove_return_type_sugar = true;

        ret.params.push_back({
            .name = "num_elems",
            .cpp_type = cppdecl::Type::FromSingleWord("size_t"),
        });

        ret.cpp_called_func = "new " + cppdecl::ToCode(cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style) + "[@1@]{}"; // Right now we're zeroing the array. That sounds like a good idea.

        ret.c_comment =
            "/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.\n"
            "/// The array must be destroyed using `" + generator.GetClassDestroyFuncName(c_type_name, true) + "()`.\n"
            "/// Use `" + generator.GetClassPtrOffsetFuncName(c_type_name, false) + "()` and `" + generator.GetClassPtrOffsetFuncName(c_type_name, true) + "()` to access the array elements.";

        return ret;
    }

    Generator::EmitFuncParams HeapAllocatedClassBinder::PrepareFuncCopyMoveCtor(Generator &generator, bool with_param_sugar) const
    {
        (void)generator;

        std::string cpp_type_str = cppdecl::ToCode(cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style);

        Generator::EmitFuncParams ret;

        ret.c_name = MakeMemberFuncName((with_param_sugar ? "ConstructFrom" : "ConstructFromAnother"));

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
        (void)generator;

        std::string cpp_type_str = cppdecl::ToCode(cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style);

        Generator::EmitFuncParams ret;

        ret.c_name = MakeMemberFuncName((with_param_sugar ? "AssignFrom" : "AssignFromAnother"));

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

        ret.c_name = generator.GetClassDestroyFuncName(c_type_name);

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

        ret.c_name = generator.GetClassDestroyFuncName(c_type_name, true);

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

        ret.c_name = generator.GetClassPtrOffsetFuncName(c_type_name, is_const);

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

    std::string MakeStructForwardDeclaration(std::string_view c_type_name, std::string_view c_underlying_type_name)
    {
        std::string ret = "typedef struct ";
        ret += !c_underlying_type_name.empty() ? c_underlying_type_name : c_type_name;
        ret += ' ';
        ret += c_type_name;
        ret += ';';
        return ret;
    }

    void TryIncludeHeadersForCppTypeInSourceFile(Generator &generator, Generator::OutputFile &file, const cppdecl::Type &type)
    {
        // Can't use `Generator::ForEachNonBuiltInNestedTypeInType()` here, because that uses `no_recurse_into_names`, while here we need only `no_recurse_into_nontype_names`.
        // Consider e.g. how we process `std::vector<T>`. Here we do need to visit `T`, and `no_recurse_into_names` would prevent that.
        type.VisitEachComponent<cppdecl::QualifiedName>(
            cppdecl::VisitEachComponentFlags::no_visit_nontype_names | cppdecl::VisitEachComponentFlags::no_recurse_into_nontype_names,
            [&](const cppdecl::QualifiedName &name)
            {
                // Those checks are here as a little optimization. Even if we remove them, `parsed_type_info.find()` below should find nothing for those types.
                if (!name.IsEmpty() && !generator.TypeNameIsCBuiltIn(name))
                {
                    if (auto iter = generator.parsed_type_info.find(cppdecl::ToCode(name, cppdecl::ToCodeFlags::canonical_c_style)); iter != generator.parsed_type_info.end())
                    {
                        auto headers = generator.ParsedFilenameToRelativeNamesForInclusion(iter->second.GetParsedFileName());
                        file.source.custom_headers.insert(std::make_move_iterator(headers.begin()), std::make_move_iterator(headers.end()));
                    }
                }
            }
        );
    }

    std::optional<std::string> CheckPointerDefaultArgumentForNullptr(std::string_view default_arg)
    {
        if (
            default_arg == "nullptr" ||
            default_arg == "NULL" ||
            default_arg == "0" ||
            default_arg == "{}"
        )
        {
            return "a null pointer";
        }

        return {};
    }

    Generator::BindableType MakeSimpleDirectTypeBinding(Generator &generator, const cppdecl::Type &cpp_type, const cppdecl::Type &c_type)
    {
        Generator::BindableType ret;

        ret.traits = Generator::TypeTraits::TrivialAndSameSizeInCAndCpp{};

        // Custom handling for `void`.
        if (cpp_type.AsSingleWord() == "void")
        {
            // Only fill the return usage.

            auto &ret_usage = ret.return_usage.emplace();
            ret_usage.c_type = c_type;

            return ret;
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
        param_def_arg.c_params_to_cpp = [cpp_type_str = cppdecl::ToCode(cpp_type, cppdecl::ToCodeFlags::canonical_c_style)](Generator::OutputFile::SpecificFileContents &source_file, std::string_view cpp_param_name, Generator::BindableType::ParamUsage::DefaultArgVar default_arg)
        {
            (void)source_file;
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

        return ret;
    }

    std::optional<Generator::BindableType> MakeSimpleTypeBinding(Generator &generator, const cppdecl::Type &cpp_type)
    {
        const std::string cpp_type_str = ToCode(cpp_type, cppdecl::ToCodeFlags::canonical_c_style);

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

            // I assume `IsSimplyBindableDirectCast()` is only going to trigger for simple types that are trivial enough for this. This could change later?
            // The size in C and C++ should always be the same here? Even for enums with custom underlying types, as we typedef them to their underlying types.
            new_type.traits = Generator::TypeTraits::TrivialAndSameSizeInCAndCpp{};

            auto &ret_usage = new_type.return_usage.emplace();
            ret_usage.c_type = type_c_style;

            auto &param = new_type.param_usage.emplace();
            param.c_params.push_back({
                .c_type = type_c_style,
            });

            // Add the casts!
            ret_usage.make_return_expr = [type_str_c = ToCode(type_c_style, cppdecl::ToCodeFlags::canonical_c_style)](Generator::OutputFile::SpecificFileContents &file, std::string_view expr)
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
                        // Unreachable.
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

            return new_type;
        }


        const bool is_ref = cpp_type.Is<cppdecl::Reference>();
        const bool is_rvalue_ref = is_ref && cpp_type.As<cppdecl::Reference>()->kind == cppdecl::RefQualifier::rvalue;
        cppdecl::Type ref_target_type;
        std::string ref_target_type_str;
        if (is_ref)
        {
            ref_target_type = cppdecl::Type(cpp_type).RemoveModifier();
            ref_target_type_str = cppdecl::ToCode(ref_target_type, cppdecl::ToCodeFlags::canonical_c_style);
        }

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
                        ref_target_c_type_str = ToCode(type_c_style, cppdecl::ToCodeFlags::canonical_c_style, 1),
                        ref_target_c_type_ptr_str = ToCode(ptr_type_c_style, cppdecl::ToCodeFlags::canonical_c_style),
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
                        if (!has_default_arg)
                            ret = "/// Parameter `" + std::string(cpp_param_name) + "` can not be null.";

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
                    ref_target_type_str,
                    cpp_ptr_type_str = cppdecl::ToCode(cppdecl::Type(ref_target_type).AddModifier(cppdecl::Pointer{}), cppdecl::ToCodeFlags::canonical_c_style),
                    with_cast,
                    is_rvalue_ref
                ](Generator::OutputFile::SpecificFileContents &source_file, std::string_view cpp_param_name, Generator::BindableType::ParamUsage::DefaultArgVar default_arg)
                {
                    std::string ret;

                    ret += "(";
                    ret += cpp_param_name;
                    ret += " ? ";

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

                    ret += " : ";

                    // The default argument begins...
                    std::visit(Overload{
                        [&](Generator::BindableType::ParamUsage::DefaultArgNone)
                        {
                            source_file.stdlib_headers.insert("stdexcept");
                            ret += "throw std::runtime_error(\"Parameter `" + std::string(cpp_param_name) + "` can not be null.\")";
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

                generator.FillDefaultTypeDependencies(cpp_type, new_type);

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

        new_type.param_usage_with_default_arg = class_binder.MakeParamUsageSupportingDefaultArg(generator);

        new_type.return_usage = class_binder.MakeReturnUsage(generator);

        return new_type;
    }

    Generator::BindableType MakeBitCastParsedClassBinding(Generator &generator, const cppdecl::QualifiedName &cpp_type, std::string_view c_type_str, const Generator::TypeTraits &traits)
    {
        (void)generator;

        const std::string cpp_type_str = cppdecl::ToCode(cpp_type, cppdecl::ToCodeFlags::canonical_c_style);

        Generator::BindableType new_type;
        new_type.traits = traits;
        // Don't need `.bindable_with_same_address` for parsed classes. See the comment on this function.

        // Param usage.
        Generator::BindableType::ParamUsage &param = new_type.param_usage.emplace();
        param.same_addr_bindable_type_dependencies[cpp_type_str].need_header = true; // Need the header to pass this stuff by value.
        param.c_params.push_back({.c_type = cppdecl::Type::FromSingleWord(std::string(c_type_str))});
        param.extra_headers.stdlib_in_source_file.insert("bit"); // For `std::bit_cast()`.
        param.c_params_to_cpp = [cpp_type_str](Generator::OutputFile::SpecificFileContents &source_file, std::string_view cpp_param_name, Generator::BindableType::ParamUsage::DefaultArgVar default_arg) -> std::string
        {
            (void)source_file;
            (void)default_arg;
            assert(std::holds_alternative<Generator::BindableType::ParamUsage::DefaultArgNone>(default_arg));
            return "std::bit_cast<" + cpp_type_str + ">(" + std::string(cpp_param_name) + ")";
        };

        // Param usage with default argument.
        Generator::BindableType::ParamUsageWithDefaultArg &param_defarg = new_type.param_usage_with_default_arg.emplace();
        param_defarg.same_addr_bindable_type_dependencies[cpp_type_str].need_header = true; // Need the header to pass this stuff by value.
        param_defarg.c_params.push_back({.c_type = cppdecl::Type::FromSingleWord(std::string(c_type_str)).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{})});
        param_defarg.extra_headers.stdlib_in_source_file.insert("bit"); // For `std::bit_cast()`.
        param_defarg.c_params_to_cpp = [cpp_type_str](Generator::OutputFile::SpecificFileContents &source_file, std::string_view cpp_param_name, Generator::BindableType::ParamUsage::DefaultArgVar default_arg) -> std::string
        {
            (void)source_file;

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

            ret += "std::bit_cast<" + cpp_type_str + ">(*" + std::string(cpp_param_name) + ")";

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
        ret_usage.extra_headers.stdlib_in_source_file.insert("bit"); // For `std::bit_cast()`.
        ret_usage.make_return_expr = [c_type_str = std::string(c_type_str)](Generator::OutputFile::SpecificFileContents &file, std::string_view expr) -> std::string
        {
            (void)file;
            return "std::bit_cast<" + c_type_str + ">(" + std::string(expr) + ")";
        };

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
            ret += cpp_param_name;
            ret += " ? ";

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

            ret += ") : ";

            std::visit(Overload{
                [&](Generator::BindableType::ParamUsage::DefaultArgNone)
                {
                    source_file.stdlib_headers.insert("stdexcept");
                    ret += "throw std::runtime_error(\"Parameter `";
                    ret += cpp_param_name;
                    ret += "` can not be null.\")";
                },
                [&](std::string_view default_arg)
                {
                    ret += cpp_type_name + "(";
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

        return ret;
    }
}
