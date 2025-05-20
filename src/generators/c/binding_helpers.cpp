#include "binding_helpers.h"

namespace mrbind::CBindings
{
    ClassBinder ClassBinder::ForCustomType(Generator &generator, cppdecl::QualifiedName new_cpp_type_name)
    {
        ClassBinder ret;

        ret.cpp_type_name = std::move(new_cpp_type_name);

        ret.basic_c_name = generator.StringToCIdentifier(cppdecl::ToCode(ret.cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style));
        ret.c_type_name = generator.MakePublicHelperName(ret.basic_c_name);

        ret.c_func_name_default_ctor = generator.MakePublicHelperName(ret.basic_c_name + "_DefaultConstruct");
        ret.c_func_name_copy_ctor = generator.MakePublicHelperName(ret.basic_c_name + "_CopyConstruct");
        ret.c_func_name_move_ctor = generator.MakePublicHelperName(ret.basic_c_name + "_MoveConstruct");
        ret.c_func_name_copy_assign = generator.MakePublicHelperName(ret.basic_c_name + "_CopyAssign");
        ret.c_func_name_move_assign = generator.MakePublicHelperName(ret.basic_c_name + "_MoveAssign");
        ret.c_func_name_destroy = generator.MakePublicHelperName(ret.basic_c_name + "_Destroy");

        // Not strictly necessary, but this makes things more sane.
        ret.returning_by_value_includes_header = true;

        return ret;
    }

    std::string ClassBinder::MakeForwardDeclaration() const
    {
        return MakeStructForwardDeclaration(c_type_name);
    }

    Generator::BindableType::ReturnUsage ClassBinder::MakeReturnUsage() const
    {
        Generator::BindableType::ReturnUsage ret;

        std::string cpp_type_str = cppdecl::ToCode(cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style);

        ret.c_type = cppdecl::Type::FromSingleWord(c_type_name).AddModifier(cppdecl::Pointer{});
        ret.same_addr_bindable_type_dependencies.try_emplace(cpp_type_str).first->second.need_header = returning_by_value_includes_header;

        assert(!c_func_name_destroy.empty());
        ret.append_to_comment = "/// Returns an instance allocated on the heap! Must call `" + c_func_name_destroy + "()` to free it when you're done using it.";

        ret.make_return_statement = [c_type_name = c_type_name, cpp_type_str = std::move(cpp_type_str)](Generator::OutputFile::SpecificFileContents &file, std::string_view expr)
        {
            (void)file;
            return "return (" + c_type_name + " *)new " + cpp_type_str + "(" + std::string(expr) + ");";
        };

        return ret;
    }

    Generator::EmitFuncParams ClassBinder::PrepareFuncDefaultCtor() const
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

    Generator::EmitFuncParams ClassBinder::PrepareFuncCopyCtor() const
    {
        std::string cpp_type_str = cppdecl::ToCode(cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style);

        Generator::EmitFuncParams ret;

        assert(!c_func_name_copy_ctor.empty());
        ret.c_name = c_func_name_copy_ctor;

        ret.cpp_return_type = cppdecl::Type::FromQualifiedName(cpp_type_name);
        ret.cpp_called_func = cpp_type_str;

        ret.params.push_back({
            .name = "other",
            .cpp_type = cppdecl::Type::FromQualifiedName(cpp_type_name).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Reference{}),
        });

        ret.c_comment = "/// Constructs a copy of another instance. The source remains alive.";

        return ret;
    }

    Generator::EmitFuncParams ClassBinder::PrepareFuncMoveCtor() const
    {
        std::string cpp_type_str = cppdecl::ToCode(cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style);

        Generator::EmitFuncParams ret;

        assert(!c_func_name_move_ctor.empty());
        ret.c_name = c_func_name_move_ctor;

        ret.cpp_return_type = cppdecl::Type::FromQualifiedName(cpp_type_name);
        ret.cpp_called_func = cpp_type_str;

        ret.params.push_back({
            .name = "other",
            .cpp_type = cppdecl::Type::FromQualifiedName(cpp_type_name).AddModifier(cppdecl::Reference{.kind = cppdecl::RefQualifier::rvalue}),
        });

        ret.c_comment = "/// Creates a new instance moved from another. The source remains alive.";

        return ret;
    }

    Generator::EmitFuncParams ClassBinder::PrepareFuncCopyAssignment() const
    {
        std::string cpp_type_str = cppdecl::ToCode(cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style);

        Generator::EmitFuncParams ret;

        assert(!c_func_name_copy_assign.empty());
        ret.c_name = c_func_name_copy_assign;

        ret.AddThisParam(cppdecl::Type::FromQualifiedName(cpp_type_name), false);

        ret.cpp_called_func = "reinterpret_cast<" + ToCode(cppdecl::Type::FromQualifiedName(cpp_type_name).AddModifier(cppdecl::Pointer{}), cppdecl::ToCodeFlags::canonical_c_style) + ">(_this)->operator=";

        ret.params.push_back({
            .name = "other",
            .cpp_type = cppdecl::Type::FromQualifiedName(cpp_type_name).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Reference{}),
        });

        ret.c_comment = "/// Assigns the contents from another instance. Both objects remain alive after the call.";

        return ret;
    }

    Generator::EmitFuncParams ClassBinder::PrepareFuncMoveAssignment() const
    {
        std::string cpp_type_str = cppdecl::ToCode(cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style);

        Generator::EmitFuncParams ret;

        assert(!c_func_name_move_assign.empty());
        ret.c_name = c_func_name_move_assign;

        ret.AddThisParam(cppdecl::Type::FromQualifiedName(cpp_type_name), false);

        ret.cpp_called_func = "reinterpret_cast<" + ToCode(cppdecl::Type::FromQualifiedName(cpp_type_name).AddModifier(cppdecl::Pointer{}), cppdecl::ToCodeFlags::canonical_c_style) + ">(_this)->operator=";

        ret.params.push_back({
            .name = "other",
            .cpp_type = cppdecl::Type::FromQualifiedName(cpp_type_name).AddModifier(cppdecl::Reference{.kind = cppdecl::RefQualifier::rvalue}),
        });

        ret.c_comment = "/// Assigns the contents from another instance. Both objects remain alive after the call.";

        return ret;
    }

    Generator::EmitFuncParams ClassBinder::PrepareFuncDestroy() const
    {
        std::string cpp_type_str = cppdecl::ToCode(cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style);

        Generator::EmitFuncParams ret;

        assert(!c_func_name_destroy.empty());
        ret.c_name = c_func_name_destroy;

        ret.AddThisParam(cppdecl::Type::FromQualifiedName(cpp_type_name), false);
        ret.params.front().add_to_call = true; // Force add `this` to the call expression.

        ret.cpp_called_func = "delete";
        ret.cpp_called_func_parens = {};

        ret.c_comment += "/// Destroys a heap-allocated instance of `" + cpp_type_str + "`.";

        return ret;
    }


    std::string MakeStructForwardDeclaration(std::string_view c_type_name)
    {
        std::string ret = "typedef struct ";
        ret += c_type_name;
        ret += ' ';
        ret += c_type_name;
        ret += ';';
        return ret;
    }

    Generator::BindableType MakeSimpleDirectTypeBinding(Generator &generator, const cppdecl::Type &cpp_type, const cppdecl::Type &c_type)
    {
        Generator::BindableType ret(c_type);

        // Allow default arguments via pointers.
        auto &param_def_arg = ret.param_usage_with_default_arg.emplace();
        param_def_arg.c_params.push_back({
            .c_type = cppdecl::Type(c_type).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{})
        });
        param_def_arg.append_to_comment = [](auto &&...){return "///   To use the default argument, pass a null pointer.";};
        param_def_arg.c_params_to_cpp = [type_str = cppdecl::ToCode(cpp_type, cppdecl::ToCodeFlags::canonical_c_style)](Generator::OutputFile::SpecificFileContents &file, std::string_view cpp_param_name, std::string_view default_arg)
        {
            (void)file;
            std::string ret;
            ret += cpp_param_name;
            ret += " ? *";
            ret += cpp_param_name;
            ret += " : (";
            ret += type_str;
            ret += ")(";
            ret += default_arg;
            ret += ")";
            return ret;
        };

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

            // Add the casts!
            new_type.return_usage->make_return_statement = [type_str_c = ToCode(type_c_style, cppdecl::ToCodeFlags::canonical_c_style)](Generator::OutputFile::SpecificFileContents &file, std::string_view expr)
            {
                (void)file;
                return "return (" + type_str_c + ")" + std::string(expr) + ";";
            };
            new_type.param_usage->c_params_to_cpp = [cpp_type_str](Generator::OutputFile::SpecificFileContents &, std::string_view cpp_param_name, std::string_view default_arg)
            {
                (void)default_arg;
                return "(" + cpp_type_str + ")" + std::string(cpp_param_name);
            };

            // Allow default arguments via pointers.
            auto &param_def_arg = new_type.param_usage_with_default_arg.emplace();
            param_def_arg.c_params.push_back({
                .c_type = type_c_style.AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{})
            });
            param_def_arg.append_to_comment = [](auto &&...){return "///   To use the default argument, pass a null pointer.";};
            param_def_arg.c_params_to_cpp = [cpp_type_str](Generator::OutputFile::SpecificFileContents &file, std::string_view cpp_param_name, std::string_view default_arg)
            {
                (void)file;
                std::string ret;
                ret += cpp_param_name;
                ret += " ? (";
                ret += cpp_type_str;
                ret += ")*";
                ret += cpp_param_name;
                ret += " : (";
                ret += cpp_type_str;
                ret += ")(";
                ret += default_arg;
                ret += ")";
                return ret;
            };

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


                // Return type:

                new_type.return_usage->c_type.modifiers.front().var = cppdecl::Pointer{};

                if (with_cast)
                {
                    new_type.return_usage->append_to_comment = "/// The returned pointer is non-owning, do NOT destroy it.";
                    if (is_rvalue_ref)
                        new_type.return_usage->append_to_comment += "\n/// In C++ this returns an rvalue reference.";

                    // Take the address and cast.
                    new_type.return_usage->make_return_statement = [
                        ref_target_type_str_c = ToCode(type_c_style, cppdecl::ToCodeFlags::canonical_c_style, 1),
                        is_rvalue_ref,
                        details_file = is_rvalue_ref ? generator.GetInternalDetailsFile().header.path_for_inclusion : std::string{}
                    ](Generator::OutputFile::SpecificFileContents &file, std::string_view expr)
                    {
                        file.stdlib_headers.insert("type_traits");
                        if (!is_rvalue_ref)
                        {
                            return "return (std::add_pointer_t<" + ref_target_type_str_c + ">)&" + std::string(expr) + ";";
                        }
                        else
                        {
                            file.custom_headers.insert(details_file); // For `unmove()`.
                            return "return (std::add_pointer_t<" + ref_target_type_str_c + ">)&mrbindc_details::unmove(" + std::string(expr) + ");";
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
                            return "return &" + std::string(expr) + ";";
                        }
                        else
                        {
                            file.custom_headers.insert(details_file); // For `unmove()`.
                            return "return &mrbindc_details::unmove(" + std::string(expr) + ");";
                        }
                    };
                }


                // Params:

                new_type.param_usage_with_default_arg = std::move(new_type.param_usage);
                new_type.param_usage.reset();

                auto &param_def_arg = *new_type.param_usage_with_default_arg;

                param_def_arg.c_params.front().c_type.modifiers.front().var = cppdecl::Pointer{};
                param_def_arg.append_to_comment = [
                    is_rvalue_ref
                ](std::string_view cpp_param_name, bool has_default_arg) -> std::string
                {
                    std::string ret;
                    if (has_default_arg)
                        // Two spaces because this goes after a message about the default argument.
                        ret = "///   To use the default argument, pass a null pointer.";
                    else
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

                param_def_arg.c_params_to_cpp = [
                    cpp_type_str,
                    ref_target_type_str,
                    with_cast,
                    is_rvalue_ref
                ](Generator::OutputFile::SpecificFileContents &file, std::string_view cpp_param_name, std::string_view default_arg)
                {
                    std::string ret;
                    if (is_rvalue_ref)
                    {
                        file.stdlib_headers.insert("utility");
                        // This also moves the default argument, but who cares, right? It shouldn't make any difference.
                        ret += "std::move(";
                    }
                    ret += cpp_param_name;
                    ret += " ? ";
                    ret += "*";
                    if (with_cast)
                    {
                        file.stdlib_headers.insert("type_traits");
                        ret += "(std::add_pointer_t<";
                        ret += ref_target_type_str;
                        ret += ">)(";
                        ret += cpp_param_name;
                        ret += ")";
                    }
                    else
                    {
                        ret += cpp_param_name;
                    }
                    ret += " : ";
                    if (default_arg.empty())
                    {
                        file.stdlib_headers.insert("stdexcept");
                        ret += "throw std::runtime_error(\"Parameter `";
                        ret += cpp_param_name;
                        ret += "` can not be null.\")";
                    }
                    else
                    {
                        ret += "static_cast<";
                        ret += cpp_type_str;
                        ret += ">(";
                        ret += default_arg;
                        ret += ")";
                    }

                    if (is_rvalue_ref)
                    {
                        ret += ")"; // Close `std::move(...)`.
                    }
                    return ret;
                };

                generator.FillDefaultTypeDependencies(cpp_type, new_type);

                return new_type;
            }
        }

        return {};
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
