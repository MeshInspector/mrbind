#include "generator.h"

#include "common/string_escape.h"
#include "common/strings.h"

#include <cppdecl/declarations/data.h>

#include <cassert>

namespace mrbind::JS
{
    void Generator::AdjustCppNameNonRecursively(cppdecl::QualifiedName &name)
    {
        for (const auto &[from, to] : replaced_name_prefixes)
        {
            if (name.Equals(from, cppdecl::QualifiedName::EqualsFlags::allow_less_parts_in_target | cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target))
            {
                name.parts.erase(name.parts.begin(), name.parts.begin() + std::ptrdiff_t(from.parts.size()));
                name.parts.insert(name.parts.begin(), to.parts.begin(), to.parts.end());
            }
        }
    }

    std::string Generator::CppNameToJsIdentifier(cppdecl::QualifiedName name)
    {
        (void)name.VisitEachComponent<cppdecl::QualifiedName>({}, [&](cppdecl::QualifiedName &name){AdjustCppNameNonRecursively(name); return cppdecl::VisitResult{};});
        return CppdeclToIdentifierLow(name);
    }

    void Generator::WriteSeparatingNewLine()
    {
        if (output_text.ends_with("{\n"))
            return;

        output_text += '\n';
    }

    void Generator::BeginFragmentablePart()
    {
        if (std::exchange(in_fragmentable_part, true))
            throw std::logic_error("Internal error: Already in a fragmentable part.");
        output_text += "    #if MB_CHECK_FRAGMENT(" + std::to_string(fragmentable_part_index++) + ")\n";
    }

    void Generator::EndFragmentablePart()
    {
        if (!std::exchange(in_fragmentable_part, false))
            throw std::logic_error("Internal error: Already exited a fragmentable part.");
        output_text += "    #endif\n";
    }

    Generator::TypeBinding::ParamUsage::UnadjustFunc Generator::TypeBinding::ParamUsage::GetUnadjustArgumentFunc() const
    {
        if (unadjust_argument)
            return unadjust_argument;

        return [](const std::string &param_name, OutputIncludes &includes)
        {
            (void)includes;
            return param_name;
        };
    }

    Generator::TypeBinding::ReturnUsage::AdjustFunc Generator::TypeBinding::ReturnUsage::GetAdjustResultFunc() const
    {
        if (adjust_result)
            return adjust_result;

        return [](const std::string &expr, OutputIncludes &includes)
        {
            (void)includes;
            return expr;
        };
    }

    void Generator::TypeBinding::CreateParamUsageWithDefArgUsingStdOptional()
    {
        assert(param_usage && !param_usage->adjusted_type.IsEmpty());
        assert(!param_usage_defarg);
        ParamUsageDefArg &usage_defarg = param_usage_defarg.emplace();

        // Wrap the type in `std::optional`.
        usage_defarg.adjusted_type = cppdecl::Type::FromQualifiedName(cppdecl::QualifiedName{}.AddPart("std").AddPart("optional").AddTemplateArgument(param_usage.value().adjusted_type));

        usage_defarg.unadjust_argument = [unadjust_param = param_usage.value().GetUnadjustArgumentFunc()](const std::string &param_name, const std::string &default_arg, OutputIncludes &includes)
        {
            includes.stdlib.insert("optional"); // For `std::optional` in `.adjusted_type`.

            std::string ret;
            ret += param_name;
            ret += " ? ";
            ret += unadjust_param("(*" + param_name + ")", includes);
            ret += " : ";
            ret += default_arg;

            return "";
        };
    }

    const Generator::TypeBinding &Generator::GetTypeBinding(const cppdecl::Type &cpp_type)
    {
        if (auto opt = GetTypeBindingOpt(cpp_type))
            return *opt;
        else
            throw std::runtime_error("No binding information for type `" + CppdeclToCode(cpp_type) + "`.");
    }

    const Generator::TypeBinding *Generator::GetTypeBindingOpt(const cppdecl::Type &cpp_type)
    {
        const std::string type_str = CppdeclToCode(cpp_type);

        auto [iter, is_new] = cached_type_bindings.try_emplace(type_str);
        TypeBinding &ret = iter->second;

        if (!is_new)
        {
            if (!ret.ready)
                throw std::runtime_error("Cyclical type binding dependency on `" + type_str + "`.");
            return &ret;
        }


        { // The bindings for different types.
            // Void?
            if (type_str == "void")
            {
                ret.return_usage.emplace().adjusted_type = cpp_type;
                ret.ready = true;
                return &ret;
            }

            // A primitive scalar?
            if (data.platform_info.FindPrimitiveType(type_str))
            {
                ret.param_usage.emplace().adjusted_type = cpp_type;
                ret.return_usage.emplace().adjusted_type = cpp_type;
                ret.CreateParamUsageWithDefArgUsingStdOptional();

                ret.ready = true;
                return &ret;
            }
        }

        return nullptr; // No such type.
    }

    void Generator::EmitFunction(const EmitFuncParams &params)
    {
        // Exact type matches.
        const FuncEntity *free_func = nullptr;
        const ClassCtor *ctor = nullptr;
        const ClassConvOp *conv_op = nullptr;
        const ClassMethod *method = nullptr;

        // Groups:                                                         // FuncEntity  ClassCtor  ClassConvOp  ClassMethod
        const BasicReturningFunc *any_returning_func = nullptr;            //     +                       +            +
        const BasicReturningClassFunc *any_returning_class_func = nullptr; //                             +            +

        const BasicFunc &basic_func = std::visit([&]<typename T>(const T *elem) -> const BasicFunc &
        {
            if constexpr (std::is_same_v<T, FuncEntity>)
                free_func = elem;
            if constexpr (std::is_same_v<T, ClassCtor>)
                ctor = elem;
            if constexpr (std::is_same_v<T, ClassConvOp>)
                conv_op = elem;
            if constexpr (std::is_same_v<T, ClassMethod>)
                method = elem;

            if constexpr (std::is_base_of_v<BasicReturningFunc, T>)
                any_returning_func = elem;
            if constexpr (std::is_base_of_v<BasicReturningClassFunc, T>)
                any_returning_class_func = elem;

            return *elem;
        }, params.var);

        try
        {
            // Determine the return type.
            cppdecl::Type return_type;
            if (any_returning_func)
                return_type = type_parser(any_returning_func->return_type.canonical);
            else
                throw std::logic_error("Internal error: Unable to determine the return type.");

            // Get the binding for the return type.
            const TypeBinding *ret_binding = nullptr;
            try
            {
                ret_binding = &GetTypeBinding(return_type);

                if (!ret_binding->return_usage)
                    throw std::runtime_error("This type is known, but it isn't usable as a return type.");
            }
            catch (...)
            {
                std::throw_with_nested(std::runtime_error("While getting the binding for the return type:"));
            }

            const TypeBinding::ReturnUsage &ret_usage = ret_binding->return_usage.value();


            // Decide on the unqualified name of the emitted function.
            std::string emitted_unqual_func_name;
            if (free_func)
            {
                assert(!free_func->IsOverloadedOperator());
                emitted_unqual_func_name = CppNameToJsIdentifier(name_parser(free_func->qual_name));
            }
            else
                throw std::logic_error("Internal error: Unable to choose the emitted unqualified name for this function.");


            // Begin assembling the function declaration.
            // First, the return type.
            cppdecl::Type func_type = ret_usage.adjusted_type;
            // Add function-ness.
            cppdecl::Function &func_modifier = *func_type.AddModifier(cppdecl::Function{}).As<cppdecl::Function>();
            // Since `func_type` is for a lambda, we want the trailing return type.
            func_modifier.uses_trailing_return_type = true;

            // If false, we'll pass the function pointer directly to embind, instead of wrapping it in a lambda.
            bool need_wrapping_lambda = false;

            const bool skip_template_args =
                (free_func && (free_func->IsOverloadedOperator() || funcs_called_without_template_args.contains(free_func->name))) ||
                (method && method->IsOverloadedOperator());
            if (skip_template_args)
                need_wrapping_lambda = true;

            // Begin assembling the call expression.
            std::string call_expr;
            if (free_func)
                call_expr = skip_template_args ? free_func->qual_name : free_func->full_qual_name;
            else
                throw std::logic_error("Internal error: Unable to determine the underlying function to call.");
            call_expr += '(';


            { // Handle parameters...
                std::size_t i = 0;
                for (const FuncParam &param : basic_func.params)
                {
                    try
                    {
                        const cppdecl::Type &param_type = type_parser(param.type.canonical);

                        // For now we consider all default arguments useful.
                        const bool param_has_useful_def_arg = bool(param.default_argument);

                        const TypeBinding &param_binding = GetTypeBinding(param_type);

                        if (!(param_has_useful_def_arg ? bool(param_binding.param_usage_defarg) : bool(param_binding.param_usage)))
                            throw std::runtime_error("This type is known, but it isn't usable as a parameter type" + std::string(param_has_useful_def_arg ? " (with default argument)" : "(without default argument)") + ":");

                        const std::string param_name_fixed = param.name ? *param.name : "_" + std::to_string(i + 1);

                        { // Add the parameter to the function declaration.
                            func_modifier.params.push_back(cppdecl::Decl{
                                .type = param_has_useful_def_arg ? param_binding.param_usage_defarg.value().adjusted_type : param_binding.param_usage.value().adjusted_type,
                                .name = cppdecl::QualifiedName::FromSingleWord(param_name_fixed),
                            });
                        }

                        { // Add the argument to the call expression.
                            if (i > 0)
                                call_expr += ", ";

                            if (param_has_useful_def_arg)
                            {
                                call_expr += param_binding.param_usage_defarg.value().unadjust_argument(param_name_fixed, param.default_argument.value().as_cpp_expression, output_includes);
                                need_wrapping_lambda = true;
                            }
                            else
                            {
                                std::string arg = param_binding.param_usage.value().GetUnadjustArgumentFunc()(param_name_fixed, output_includes);
                                call_expr += arg;
                                if (arg != param_name_fixed && arg != "std::move(" + param_name_fixed + ")")
                                    need_wrapping_lambda = true;
                            }
                        }
                    }
                    catch (...)
                    {
                        std::throw_with_nested(std::runtime_error("While handling parameter " + std::to_string(i + 1) + " out of " + std::to_string(basic_func.params.size()) + " of type `" + param.type.canonical + "`:"));
                    }

                    i++;
                }
            }

            call_expr += ')';

            std::string returned_expr = ret_usage.GetAdjustResultFunc()(call_expr, output_includes);
            if (returned_expr != call_expr)
                need_wrapping_lambda = true;

            output_text +=
                Strings::Indent(
                    "emscripten::function(" + EscapeQuoteString(emitted_unqual_func_name) + ", " +
                    (
                        need_wrapping_lambda
                        ?
                            "+[]" + CppdeclToCode(func_type, cppdecl::ToCodeFlags::lambda) + "\n"
                            "{\n" +
                            Strings::Indent(
                                "return " + returned_expr + ";\n"
                            ) +
                            "}"
                        :
                            "&" + free_func->full_qual_name
                    ) +
                    ");\n"
                );
        }
        catch (...)
        {
            std::string func_desc = std::visit(Overload{
                [](const FuncEntity *elem){return "free function `" + elem->full_qual_name + "`";},
                [](const ClassCtor *elem){(void)elem; return std::string("??");}, // TODO implement those and mention the class name in them. We'll need a parameter for it probably?
                [](const ClassConvOp *elem){(void)elem; return std::string("??");},
                [](const ClassMethod *elem){(void)elem; return std::string("??");},
            }, params.var);

            std::throw_with_nested(std::runtime_error("While emitting " + func_desc + ":"));
        }
    }

    void Generator::EmitEnum(const EnumEntity &en)
    {
        try
        {
            // Decide on the unqualified name of the emitted enum.
            const std::string emitted_unqual_name = CppNameToJsIdentifier(name_parser(en.full_type));

            output_text += "    emscripten::enum_<" + en.full_type + ">(" + EscapeQuoteString(emitted_unqual_name) + ")";

            if (!en.elems.empty())
                output_text += '\n';

            for (const EnumElem &elem : en.elems)
                output_text += "        .value(" + EscapeQuoteString(elem.name) + ", " + en.full_type + "::" + elem.name + ")\n";

            if (!en.elems.empty())
                output_text += "    ";

            output_text += ";\n";
        }
        catch (...)
        {
            std::throw_with_nested(std::runtime_error("While emitting enum `" + en.full_type + "`:"));
        }
    }

    void Generator::EmitClass(const ClassEntity &cl)
    {
        const std::string emitted_unqual_mut_name = CppNameToJsIdentifier(name_parser(cl.full_type));
        const std::string emitted_unqual_const_name = "Const_" + emitted_unqual_mut_name;

        std::string const_wrapper_type = "mrbindjs_details::ConstClass<" + cl.full_type + ">";
        std::string mut_wrapper_type = "mrbindjs_details::MutClass<" + cl.full_type + ">";

        auto EmitClassPart = [&](bool is_const)
        {
            const std::string &this_wrapper_type = is_const ? const_wrapper_type : mut_wrapper_type;

            output_text += "    emscripten::class_<" + this_wrapper_type;
            if (!is_const)
                output_text += ", emscripten::base<" + const_wrapper_type + ">";
            output_text += ">(" + EscapeQuoteString(is_const ? emitted_unqual_const_name : emitted_unqual_mut_name) + ")";

            bool first_member = true;

            for (const ClassMemberVariant &member : cl.members)
            {
                auto BeginMember = [&]
                {
                    if (std::exchange(first_member, false))
                        output_text += '\n';
                };

                std::visit(Overload{
                    [&](const ClassField &elem)
                    {
                        cppdecl::Type type = type_parser(elem.type.canonical);

                        bool field_is_eff_const = type.IsEffectivelyConst();

                        // Don't duplicate const fields into non-const class halves, this is redundant.
                        // But for some reason static fields are not inherited properly, so we still duplicate them here (by adding `&& !elem.is_static`).
                        if (field_is_eff_const && !is_const && !elem.is_static)
                            return;

                        BeginMember();

                        if (elem.is_static)
                            output_text += "        .class_property(";
                        else
                            output_text += "        .property(";

                        output_text += EscapeQuoteString(CppdeclToIdentifierLow(name_parser(elem.full_name)));
                        output_text += ", ";

                        // Do we need to cast the pointer? If so, with what cast?
                        const char *cast = nullptr;
                        if (elem.is_static)
                        {
                            if (is_const && !field_is_eff_const)
                                cast = "const_cast"; // Adding constness.
                        }
                        else
                        {
                            cast = "reinterpret_cast";
                        }

                        // Perform the cast.
                        if (cast)
                        {
                            cppdecl::Type cast_target_type = type;

                            if (is_const)
                                cast_target_type.AddQualifiers(cppdecl::CvQualifiers::const_);

                            if (elem.is_static)
                                cast_target_type.AddModifier(cppdecl::Pointer{});
                            else
                                cast_target_type.AddModifier(cppdecl::MemberPointer{.base = name_parser(this_wrapper_type)});

                            output_text += cast;
                            output_text += "<" + CppdeclToCode(cast_target_type) + ">(";
                        }

                        output_text += "&" + cl.full_type + "::" + elem.full_name;

                        if (cast)
                            output_text += ')';

                        output_text += ")\n";
                    },
                    [&](const ClassCtor &elem)
                    {
                        // TODO: Need to handle overloading here.
                        if (elem.kind != CopyMoveKind{})
                            return; // TODO: Remove this when we add overloading support.

                        BeginMember();

                        output_text += "        .constructor<";

                        bool first_param = true;
                        for (const FuncParam &param : elem.params)
                        {
                            if (!std::exchange(first_param, false))
                                output_text += ", ";

                            output_text += param.type.canonical;
                        }

                        output_text += ">()\n";
                    },
                    [&](const ClassDtor &elem)
                    {
                        // Nothing here.
                        (void)elem;
                    },
                    [&](const ClassConvOp &elem)
                    {
                        // TODO: Implement this.
                        (void)elem;
                    },
                    [&](const ClassMethod &elem)
                    {
                        // TODO: Implement this.
                        (void)elem;
                    },
                }, member);
            }

            if (!first_member)
                output_text += "    ";
            output_text += ";\n";
        };
        EmitClassPart(true);
        EmitClassPart(false);
    }

    void Generator::Generate()
    {
        output_text +=
            "#include <" + data.original_file + ">\n"
            "\n"
            "#include <emscripten/bind.h>\n"
            "\n"
            "#include <utility>\n" // For `std::forward`.
            "\n"
            "#if !defined(MB_NUM_FRAGMENTS) || MB_NUM_FRAGMENTS <= 1\n"
            "#define MB_CHECK_FRAGMENT(x) 1\n"
            "#else\n"
            "#define MB_CHECK_FRAGMENT(x) (x % MB_NUM_FRAGMENTS == MB_FRAGMENT)\n"
            "#endif\n"
            "\n"
            "namespace mrbindjs_details\n"
            "{\n"
            "    template <typename T>\n"
            "    struct ConstClass\n"
            "    {\n"
            "        T value;\n"
            "        template <typename ...P> ConstClass(P &&... args) : value(std::forward<P>(args)...) {}\n"
            "    };\n"
            "\n"
            "    template <typename T>\n"
            "    struct MutClass : ConstClass<T>\n"
            "    {\n"
            "        using ConstClass<T>::ConstClass;\n"
            "    };\n"
            "}\n"
            "\n"
            "EMSCRIPTEN_BINDINGS(mrbind) // This identifier is only used to create a (TU-local) `static` variable with a constructor that runs your code.\n"
            "{\n";

        auto VisitEntity = [&](auto &self, const Entity &entity) -> void
        {
            // Handle this entity.
            std::visit(Overload{
                [&](const EnumEntity &elem)
                {
                    BeginFragmentablePart();
                    EmitEnum(elem);
                    EndFragmentablePart();
                },
                [&](const FuncEntity &elem)
                {
                    BeginFragmentablePart();
                    EmitFunction({.var = &elem});
                    EndFragmentablePart();
                },
                [&](const ClassEntity &elem)
                {
                    BeginFragmentablePart();
                    EmitClass(elem);
                    EndFragmentablePart();

                    // We recurse separately below.
                },
                [&](const TypedefEntity &elem)
                {
                    // Nothing here.
                    (void)elem;
                },
                [&](const NamespaceEntity &elem)
                {
                    // Nothing here, we recurse separately below.
                    (void)elem;
                },
            }, *entity.variant);

            // Possibly recurse.
            std::visit(Overload{
                [&]<typename T>(const T &elem)
                {
                    if constexpr (std::is_base_of_v<EntityContainer, T>)
                    {
                        for (const Entity &elem : elem.nested)
                            self(self, elem);
                    }
                },
            }, *entity.variant);
        };

        for (const Entity &entity : data.entities.nested)
            VisitEntity(VisitEntity, entity);

        output_text +=
            "}\n";
    }
}
