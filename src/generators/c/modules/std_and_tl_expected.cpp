#include "generators/c/binding_common.h"
#include "generators/c/module.h"

#include <cppdecl/declarations/simplify.h>

#include <algorithm>
#include <vector>

namespace mrbind::CBindings::Modules
{
    struct StdAndTlExpected : DeriveModule<StdAndTlExpected>
    {
        cppdecl::QualifiedName target_std = cppdecl::QualifiedName{}.AddPart("std").AddPart("expected");
        cppdecl::QualifiedName target_tl = cppdecl::QualifiedName{}.AddPart("tl").AddPart("expected");

        bool merge_std_and_tl_expected = false;

        void ConsumeFlag(FlagInterface &in) override
        {
            if (in.FlagNameMatches("--merge-std-and-tl-expected", "", "Bind both `std::expected` and `tl::expected` to the same common C name, without the `std`/`tl` prefix."))
                merge_std_and_tl_expected = true;
        }

        std::optional<Generator::BindableType> GetBindableType(Generator &generator, const cppdecl::Type &type, const std::string &type_str) override
        {
            (void)type_str;

            std::optional<Generator::BindableType> ret;

            if (!type.IsOnlyQualifiedName() || !(
                type.simple_type.name.Equals(target_std, cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target) ||
                type.simple_type.name.Equals(target_tl, cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target)
            ))
            {
                return ret;
            }

            // This can throw if `type` has wrong template parameters, we don't mind. I'm not sure how it could be possible in valid C++ code in the first place.
            const cppdecl::Type &cpp_elem_type_value = std::get<cppdecl::Type>(type.simple_type.name.parts.back().template_args.value().args.at(0).var);
            const cppdecl::Type &cpp_elem_type_error = std::get<cppdecl::Type>(type.simple_type.name.parts.back().template_args.value().args.at(1).var);

            std::string customized_c_name;
            cppdecl::Type type_with_merged_std_and_tl = type;
            if (merge_std_and_tl_expected)
            {
                type_with_merged_std_and_tl.simple_type.name.parts.erase(type_with_merged_std_and_tl.simple_type.name.parts.begin());
                customized_c_name = generator.CppdeclToIdentifier(type_with_merged_std_and_tl);
            }

            HeapAllocatedClassBinder binder = HeapAllocatedClassBinder::ForCustomType(generator, type.simple_type.name, std::move(customized_c_name));

            binder.traits = Generator::TypeTraits::CopyableAndTrivialExceptForDefaultCtor{}; // The triviality can get reset by the `CombineCommonProperties()` below if necessary.
            binder.traits->CombineCommonProperties(generator.FindTypeTraits(cpp_elem_type_value));
            binder.traits->CombineCommonProperties(generator.FindTypeTraits(cpp_elem_type_error));

            const bool value_type_is_void = cpp_elem_type_value == cppdecl::Type::FromSingleWord("void");


            auto get_output_file = [
                type,
                type_with_merged_std_and_tl,
                type_str,
                value_type_is_void,
                cpp_elem_type_value,
                cpp_elem_type_error,
                binder
            ](Generator &generator) -> Generator::OutputFile &
            {
                bool is_new = false;
                Generator::OutputFile &file = *generator.GetPublicHelperFile(generator.CppdeclToIdentifier(type_with_merged_std_and_tl), &is_new);

                if (is_new)
                {
                    std::string comment = "/// Stores either ";
                    if (value_type_is_void)
                        comment += "nothing (which represents success)";
                    else
                        comment += "a `" + generator.CppdeclToCodeForComments(cpp_elem_type_value) + "` that represents success";
                    comment += " or a `" + generator.CppdeclToCodeForComments(cpp_elem_type_error) + "` that represents an error.\n";

                    binder.EmitForwardDeclaration(generator, file, comment);

                    // The special member functions.
                    binder.EmitSpecialMemberFunctions(generator, file);


                    // Some custom functions:

                    // `bool Success()`
                    // Note that this function is redundant, since you could use the other ones defined below that return pointers, for the same purpose.
                    // But we're still defining this one, because it's marked as `operator bool` for interop purposes, which plays great with C#.
                    {
                        Generator::EmitFuncParams emit;
                        emit.c_comment += "/// Returns true if this instance represents success, or false if it represents an error.";
                        emit.name = binder.MakeMemberFuncName(generator, "Success", CInterop::MethodKinds::ConversionOperator{});
                        emit.cpp_return_type = cppdecl::Type::FromSingleWord("bool");
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), true);
                        emit.cpp_called_func = "bool(@this@)";
                        generator.EmitFunction(file, emit);
                    }

                    const bool value_type_is_const = value_type_is_void || cpp_elem_type_value.IsConst();
                    const bool error_type_is_const = cpp_elem_type_error.IsConst();

                    for (bool is_const : {true, false})
                    {
                        // Get successful value.
                        if (is_const || !value_type_is_const)
                        {
                            Generator::EmitFuncParams emit;

                            if (value_type_is_void)
                            {
                                emit.c_comment = "/// Returns true if this instance stores nothing (which represents success).";
                            }
                            else
                            {
                                emit.c_comment += "/// If this instance represents success, returns the stored `" + generator.CppdeclToCodeForComments(cpp_elem_type_value) + "`. Otherwise null.";
                                if (!is_const)
                                    emit.c_comment += " This version returns a mutable pointer.";
                            }

                            emit.name = binder.MakeMemberFuncName(generator, "Get" + std::string(is_const ? "" : "Mutable") + "Value");

                            if (value_type_is_void)
                            {
                                emit.cpp_return_type = cppdecl::Type::FromSingleWord("bool");
                            }
                            else
                            {
                                emit.cpp_return_type = cpp_elem_type_value;
                                emit.cpp_return_type.AddQualifiers(cppdecl::CvQualifiers::const_ * is_const);
                                emit.cpp_return_type.AddModifier(cppdecl::Pointer{});
                            }

                            emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), is_const);

                            if (value_type_is_void)
                            {
                                emit.cpp_called_func = "bool(@this@)";
                            }
                            else
                            {
                                emit.cpp_extra_statements = "auto &_self = @this@;";
                                emit.cpp_called_func = "_self ? &*_self : nullptr";
                            }

                            generator.EmitFunction(file, emit);
                        }

                        // Get error.
                        if (is_const || !error_type_is_const)
                        {
                            Generator::EmitFuncParams emit;

                            emit.c_comment += "/// If this instance represents an error, returns the stored `" + generator.CppdeclToCodeForComments(cpp_elem_type_error) + "`. Otherwise null.";
                            if (!is_const)
                                emit.c_comment += " This version returns a mutable pointer.";

                            emit.name = binder.MakeMemberFuncName(generator, "Get" + std::string(is_const ? "" : "Mutable") + "Error");

                            emit.cpp_return_type = cpp_elem_type_error;
                            emit.cpp_return_type.AddQualifiers(cppdecl::CvQualifiers::const_ * is_const);
                            emit.cpp_return_type.AddModifier(cppdecl::Pointer{});

                            emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), is_const);

                            emit.cpp_extra_statements = "auto &_self = @this@;";
                            emit.cpp_called_func = "_self ? nullptr : &_self.error()";

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
            if (name.Equals(target_std, cppdecl::QualifiedName::EqualsFlags::allow_less_parts_in_target | cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target))
                return "expected";
            if (name.Equals(target_tl, cppdecl::QualifiedName::EqualsFlags::allow_less_parts_in_target | cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target))
                return "tl/expected.hpp"; // For now we're putting third-party headers into the same category.
            return {};
        }

        void AdjustForCommentsAndInterop(const Generator &generator, AdjustableForCommentsAndInteropVar target) const override
        {
            (void)generator;

            if (merge_std_and_tl_expected)
            {
                std::visit([&](auto *ptr)
                {
                    cppdecl::Simplify(cppdecl::SimplifyFlags::bit_extra_merge_std_tl_expected, *ptr);
                }, target);
            }
        }
    };
}
