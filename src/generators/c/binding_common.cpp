#include "binding_common.h"
#include "common/meta.h"

namespace mrbind::CBindings
{
    HeapAllocatedClassBinder HeapAllocatedClassBinder::ForCustomType(Generator &generator, cppdecl::QualifiedName new_cpp_type_name, std::string new_underlying_c_type_name)
    {
        HeapAllocatedClassBinder ret;

        ret.cpp_type_name = std::move(new_cpp_type_name);

        ret.basic_c_name = cppdecl::ToString(ret.cpp_type_name, cppdecl::ToStringFlags::identifier);
        ret.c_type_name = generator.MakePublicHelperName(ret.basic_c_name);
        ret.c_underlying_type_name = !new_underlying_c_type_name.empty() ? generator.MakePublicHelperName(new_underlying_c_type_name) : ret.c_type_name;

        ret.c_func_name_default_ctor             = generator.MakePublicHelperName(ret.basic_c_name + "_DefaultConstruct");
        ret.c_func_name_copy_move_ctor           = generator.MakePublicHelperName(ret.basic_c_name + "_ConstructFromAnother");
        ret.c_func_name_copy_move_assign         = generator.MakePublicHelperName(ret.basic_c_name + "_AssignFromAnother");
        ret.c_func_name_copy_move_ctor_sugared   = generator.MakePublicHelperName(ret.basic_c_name + "_ConstructFrom");
        ret.c_func_name_copy_move_assign_sugared = generator.MakePublicHelperName(ret.basic_c_name + "_AssignFrom");
        // Inconsistent with the rest. Weird but let's keep it this way for now.
        ret.c_func_name_destroy = generator.GetClassDestroyFuncName(ret.c_type_name); // generator.MakePublicHelperName(ret.basic_c_name + "_Destroy");

        return ret;
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
        type.return_usage = MakeReturnUsage();
    }

    std::string HeapAllocatedClassBinder::MakeForwardDeclaration() const
    {
        return MakeStructForwardDeclaration(c_type_name, c_underlying_type_name);
    }

    Generator::BindableType::ReturnUsage HeapAllocatedClassBinder::MakeReturnUsage() const
    {
        Generator::BindableType::ReturnUsage ret;

        std::string cpp_type_str = cppdecl::ToCode(cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style);

        ret.c_type = cppdecl::Type::FromSingleWord(c_type_name).AddModifier(cppdecl::Pointer{});
        ret.same_addr_bindable_type_dependencies.try_emplace(cpp_type_str);

        assert(!c_func_name_destroy.empty());
        ret.append_to_comment = "/// Returns an instance allocated on the heap! Must call `" + c_func_name_destroy + "()` to free it when you're done using it.";

        ret.make_return_statement = [c_type_name = c_type_name, cpp_type_str = std::move(cpp_type_str)](Generator::OutputFile::SpecificFileContents &file, std::string_view expr)
        {
            (void)file;
            return "return (" + c_type_name + " *)new " + cpp_type_str + "(" + std::string(expr) + ");";
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

            param_usage.append_to_comment = [](std::string_view cpp_param_name, bool has_default_arg)
            {
                (void)has_default_arg;
                std::string ret;
                if (!has_default_arg)
                    ret = "/// Parameter `" + std::string(cpp_param_name) + "` can not be null.";
                return ret;
            };

            param_usage.explanation_how_to_use_default_arg = [](std::string_view cpp_param_name, bool use_wrapper){(void)cpp_param_name; (void)use_wrapper; return "pass a null pointer";};
        }
        else if (traits.value().IsDefaultOrCopyOrMoveConstructible())
        {
            // With the pass-by enum.

            // Here we only fill the `_with_default_arg` version, because that handles both.
            Generator::BindableType::ParamUsageWithDefaultArg &param_usage = ret.emplace();
            param_usage.same_addr_bindable_type_dependencies.try_emplace(cpp_type_str);
            param_usage.extra_headers.custom_in_header_file = [&generator]{return std::unordered_set{generator.GetPassByFile().header.path_for_inclusion};};

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

            param_usage.explanation_how_to_use_default_arg = [&generator](std::string_view cpp_param_name, bool use_wrapper)
            {
                (void)cpp_param_name;
                return "pass `" + generator.GetPassByEnumName() + (use_wrapper ? "_NoObject" : "_DefaultArgument") + "` and a null pointer";
            };

            param_usage.supports_default_arguments_in_wrappers = true; // !!
        }

        return ret;
    }

    void HeapAllocatedClassBinder::EmitSpecialMemberFunctions(Generator &generator, Generator::OutputFile &file, bool with_param_sugar) const
    {
        if (traits.value().is_default_constructible)
            generator.EmitFunction(file, PrepareFuncDefaultCtor());

        if (traits.value().is_move_constructible)
        {
            generator.EmitFunction(file, PrepareFuncCopyMoveCtor());
            if (with_param_sugar)
                generator.EmitFunction(file, PrepareFuncCopyMoveCtor(true));
        }

        if (traits.value().is_move_assignable)
        {
            generator.EmitFunction(file, PrepareFuncCopyMoveAssignment());
            if (with_param_sugar)
                generator.EmitFunction(file, PrepareFuncCopyMoveAssignment(true));
        }

        if (traits.value().is_destructible)
            generator.EmitFunction(file, PrepareFuncDestroy());
    }

    Generator::EmitFuncParams HeapAllocatedClassBinder::PrepareFuncDefaultCtor() const
    {
        std::string cpp_type_str = cppdecl::ToCode(cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style);

        Generator::EmitFuncParams ret;

        assert(!c_func_name_default_ctor.empty());
        ret.c_name = c_func_name_default_ctor;

        ret.cpp_return_type = cppdecl::Type::FromQualifiedName(cpp_type_name);
        ret.cpp_called_func = cpp_type_str;

        ret.c_comment = "/// Constructs an empty (default-constructed) instance.";

        return ret;
    }

    Generator::EmitFuncParams HeapAllocatedClassBinder::PrepareFuncCopyMoveCtor(bool with_param_sugar) const
    {
        std::string cpp_type_str = cppdecl::ToCode(cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style);

        Generator::EmitFuncParams ret;

        assert(!c_func_name_copy_move_ctor.empty());
        ret.c_name = with_param_sugar ? c_func_name_copy_move_ctor_sugared : c_func_name_copy_move_ctor;

        ret.cpp_return_type = cppdecl::Type::FromQualifiedName(cpp_type_name);
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

    Generator::EmitFuncParams HeapAllocatedClassBinder::PrepareFuncCopyMoveAssignment(bool with_param_sugar) const
    {
        std::string cpp_type_str = cppdecl::ToCode(cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style);

        Generator::EmitFuncParams ret;

        assert(!c_func_name_copy_move_assign.empty());
        ret.c_name = with_param_sugar ? c_func_name_copy_move_assign_sugared : c_func_name_copy_move_assign;

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

    Generator::EmitFuncParams HeapAllocatedClassBinder::PrepareFuncDestroy() const
    {
        Generator::EmitFuncParams ret;

        assert(!c_func_name_destroy.empty());
        ret.c_name = c_func_name_destroy;

        ret.AddThisParam(cppdecl::Type::FromQualifiedName(cpp_type_name), false);

        ret.cpp_called_func = "delete &@this@";

        ret.c_comment += "/// Destroys a heap-allocated instance of `" + c_type_name + "`.";

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
        // Can't use `Generator::ForEachNonBuiltInQualNameInTypeName()` here, because that uses `no_recurse_into_names`, while here we need only `no_recurse_into_nontype_names`.
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
                        file.source.custom_headers.insert(generator.ParsedFilenameToRelativeNameForInclusion(iter->second.GetParsedFileName()));
                    }
                }
            }
        );
    }

    std::string CheckPointerDefaultArgumentForNullptr(std::string_view default_arg)
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

        return "";
    }

    Generator::BindableType MakeSimpleDirectTypeBinding(Generator &generator, const cppdecl::Type &cpp_type, const cppdecl::Type &c_type)
    {
        Generator::BindableType ret(c_type);

        ret.traits = Generator::TypeTraits::TrivialAndSameSizeInCAndCpp{};
        if (cpp_type.IsConstOrReference())
            ret.traits->MakeNonAssignable();

        // Allow default arguments via pointers.
        auto &param_def_arg = ret.param_usage_with_default_arg.emplace();
        param_def_arg.c_params.push_back({
            .c_type = cppdecl::Type(c_type).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{})
        });
        param_def_arg.explanation_how_to_use_default_arg = [](std::string_view cpp_param_name, bool use_wrapper){(void)cpp_param_name; (void)use_wrapper; return "pass a null pointer";};
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
            param_def_arg.is_useless_default_argument = CheckPointerDefaultArgumentForNullptr;

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

            Generator::BindableType new_type(type_c_style);

            // I assume `IsSimplyBindableDirectCast()` is only going to trigger for simple types that are trivial enough for this. This could change later?
            // Must assume different size in C and C++ because of enums (with custom underlying types).
            new_type.traits = Generator::TypeTraits::TrivialButDifferentSizeInCAndCpp{};

            // Add the casts!
            new_type.return_usage->make_return_statement = [type_str_c = ToCode(type_c_style, cppdecl::ToCodeFlags::canonical_c_style)](Generator::OutputFile::SpecificFileContents &file, std::string_view expr)
            {
                (void)file;
                return "return (" + type_str_c + ")(" + std::string(expr) + ");";
            };
            new_type.param_usage->c_params_to_cpp = [cpp_type_str](Generator::OutputFile::SpecificFileContents &source_file, std::string_view cpp_param_name, Generator::BindableType::ParamUsage::DefaultArgVar default_arg)
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
            param_def_arg.explanation_how_to_use_default_arg = [](std::string_view cpp_param_name, bool use_wrapper){(void)cpp_param_name; (void)use_wrapper; return "pass a null pointer";};
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
                param_def_arg.is_useless_default_argument = CheckPointerDefaultArgumentForNullptr;

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

                Generator::BindableType new_type(type_c_style);

                new_type.traits = Generator::TypeTraits(Generator::TypeTraits::ReferenceType{}, ref_target_type.IsConst(), is_rvalue_ref);

                // Return type:

                new_type.return_usage->c_type.modifiers.front().var = cppdecl::Pointer{};
                new_type.return_usage->append_to_comment = "/// The returned pointer will never be null. It is non-owning, do NOT destroy it.";
                if (is_rvalue_ref)
                    new_type.return_usage->append_to_comment += "\n/// In C++ this returns an rvalue reference.";

                if (with_cast)
                {

                    auto ptr_type_c_style = type_c_style;
                    assert(ptr_type_c_style.Is<cppdecl::Reference>());
                    ptr_type_c_style.modifiers.at(0).var = cppdecl::Pointer{};

                    // Take the address and cast.
                    new_type.return_usage->make_return_statement = [
                        ref_target_c_type_str = ToCode(type_c_style, cppdecl::ToCodeFlags::canonical_c_style, 1),
                        ref_target_c_type_ptr_str = ToCode(ptr_type_c_style, cppdecl::ToCodeFlags::canonical_c_style),
                        is_rvalue_ref,
                        details_file = is_rvalue_ref ? generator.GetInternalDetailsFile().header.path_for_inclusion : std::string{}
                    ](Generator::OutputFile::SpecificFileContents &file, std::string_view expr)
                    {
                        if (!is_rvalue_ref)
                        {
                            return "return (" + ref_target_c_type_ptr_str + ")&(" + std::string(expr) + ");";
                        }
                        else
                        {
                            file.custom_headers.insert(details_file); // For `unmove()`.
                            return "return (" + ref_target_c_type_ptr_str + ")&mrbindc_details::unmove(" + std::string(expr) + ");";
                        }
                    };
                }
                else
                {
                    // Just take the address.
                    // Here we don't need any special handling of rvalue references.
                    new_type.return_usage->make_return_statement = [
                        is_rvalue_ref,
                        details_file = is_rvalue_ref ? generator.GetInternalDetailsFile().header.path_for_inclusion : std::string{}
                    ](Generator::OutputFile::SpecificFileContents &file, std::string_view expr)
                    {
                        (void)file;
                        if (!is_rvalue_ref)
                        {
                            return "return &(" + std::string(expr) + ");";
                        }
                        else
                        {
                            file.custom_headers.insert(details_file); // For `unmove()`.
                            return "return &mrbindc_details::unmove(" + std::string(expr) + ");";
                        }
                    };
                }


                // Params:

                new_type.param_usage_with_default_arg.emplace();
                new_type.param_usage_with_default_arg->ParamUsage::operator=(std::move(new_type.param_usage.value()));
                new_type.param_usage.reset();

                auto &param_def_arg = *new_type.param_usage_with_default_arg;

                param_def_arg.c_params.front().c_type.modifiers.front().var = cppdecl::Pointer{};
                param_def_arg.append_to_comment = [
                    is_rvalue_ref
                ](std::string_view cpp_param_name, bool has_default_arg) -> std::string
                {
                    std::string ret;
                    if (!has_default_arg)
                        ret = "/// Parameter `" + std::string(cpp_param_name) + "` can not be null.";

                    if (is_rvalue_ref)
                    {
                        ret +=
                            "\n"
                            "/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,\n"
                            "///   but if your pointer is owning, you must still destroy it manually later.";
                    }

                    return ret;
                };
                param_def_arg.explanation_how_to_use_default_arg = [](std::string_view cpp_param_name, bool use_wrapper){(void)cpp_param_name; (void)use_wrapper; return "pass a null pointer";};

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

    Generator::BindableType MakeByValueClassBinding(Generator &generator, const cppdecl::QualifiedName &cpp_type, std::string_view c_type, const Generator::TypeTraits &traits)
    {
        Generator::BindableType new_type;
        HeapAllocatedClassBinder class_binder;

        new_type.traits = traits;
        class_binder.traits = traits;

        class_binder.cpp_type_name = cpp_type;
        class_binder.c_type_name = c_type;
        class_binder.c_func_name_destroy = generator.GetClassDestroyFuncName(c_type);

        new_type.param_usage_with_default_arg = class_binder.MakeParamUsageSupportingDefaultArg(generator);

        new_type.return_usage = class_binder.MakeReturnUsage();

        return new_type;
    }

    std::optional<Generator::BindableType> BindRefParamsExceptNonConstLvalueSameAsNonRef(Generator &generator, const cppdecl::Type &cpp_type, std::string_view target_name)
    {
        const cppdecl::Reference *ref = cpp_type.As<cppdecl::Reference>();
        if (!ref)
            return {};

        bool is_const = cpp_type.IsConst(1);

        if (ref->kind == cppdecl::RefQualifier::lvalue && !is_const)
            return {}; // Reject non-const lvalue references.

        if (cppdecl::ToCode(cpp_type, {}, 1, cppdecl::CvQualifiers::const_) != target_name)
            return {}; // Type name mismatch.

        // This is non-`Opt`. We throw if this fails.
        const Generator::BindableType &by_value_binding = generator.FindBindableType(cppdecl::Type(cpp_type).RemoveModifier().RemoveQualifiers(cppdecl::CvQualifiers::const_));

        // We throw if this fails.
        Generator::BindableType ret = MakeSimpleTypeBinding(generator, cpp_type).value();

        ret.param_usage = by_value_binding.param_usage;
        ret.param_usage_with_default_arg = by_value_binding.param_usage_with_default_arg;

        return ret;
    }
}
