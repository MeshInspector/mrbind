#include "generators/c/binding_common.h"
#include "generators/c/module.h"

#include <algorithm>
#include <vector>

namespace mrbind::CBindings::Modules
{
    struct StdAndTlExpected : DeriveModule<StdAndTlExpected>
    {
        std::vector<cppdecl::QualifiedName> target_names = {
            cppdecl::QualifiedName{}.AddPart("std").AddPart("expected"),
            cppdecl::QualifiedName{}.AddPart("tl").AddPart("expected"),
        };

        std::optional<Generator::BindableType> GetBindableType(Generator &generator, const cppdecl::Type &type, const std::string &type_str) override
        {
            (void)type_str;

            std::optional<Generator::BindableType> ret;

            if (
                !type.IsOnlyQualifiedName() ||
                std::none_of(target_names.begin(), target_names.end(), [&](const cppdecl::QualifiedName &target_name){return type.simple_type.name.Equals(target_name, cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target);})
            )
            {
                return ret;
            }

            // This can throw if `type` has wrong template parameters, we don't mind. I'm not sure how it could be possible in valid C++ code in the first place.
            const cppdecl::Type &cpp_elem_type_value = std::get<cppdecl::Type>(type.simple_type.name.parts.back().template_args.value().args.at(0).var);
            const cppdecl::Type &cpp_elem_type_error = std::get<cppdecl::Type>(type.simple_type.name.parts.back().template_args.value().args.at(1).var);

            HeapAllocatedClassBinder binder = HeapAllocatedClassBinder::ForCustomType(generator, type.simple_type.name);

            binder.traits = Generator::TypeTraits::CopyableAndTrivialExceptForDefaultCtor{}; // The triviality can get reset by the `CombineCommonProperties()` below if necessary.
            binder.traits->CombineCommonProperties(generator.FindTypeTraits(cpp_elem_type_value));
            binder.traits->CombineCommonProperties(generator.FindTypeTraits(cpp_elem_type_error));

            const bool value_type_is_void = cpp_elem_type_value == cppdecl::Type::FromSingleWord("void");


            auto get_output_file = [
                type,
                type_str,
                value_type_is_void,
                cpp_elem_type_value,
                cpp_elem_type_error,
                binder
            ](Generator &generator) -> Generator::OutputFile &
            {
                bool is_new = false;
                Generator::OutputFile &file = generator.GetPublicHelperFile(cppdecl::ToString(type, cppdecl::ToStringFlags::identifier), &is_new);

                if (is_new)
                {
                    file.source.stdlib_headers.insert("expected");
                    TryIncludeHeadersForCppTypeInSourceFile(generator, file, type);

                    file.header.contents += "\n/// Stores either ";
                    if (value_type_is_void)
                        file.header.contents += "nothing (which represents success)";
                    else
                        file.header.contents += "a `" + cppdecl::ToCode(cpp_elem_type_value, cppdecl::ToCodeFlags::canonical_c_style) + "` that represents success";
                    file.header.contents += "or a `" + cppdecl::ToCode(cpp_elem_type_error, cppdecl::ToCodeFlags::canonical_c_style) + "` that represents an error.\n";

                    binder.EmitForwardDeclaration(generator, file);

                    // The special member functions.
                    binder.EmitSpecialMemberFunctions(generator, file, true);


                    // Some custom functions:

                    // There are no boolean checks, because the ones returning pointers can be used for the same purpose.

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
                                emit.c_comment += "/// If this instance represents success, returns the stored `" + cppdecl::ToCode(cpp_elem_type_value, cppdecl::ToCodeFlags::canonical_c_style) + "`. Otherwise null.";
                                if (!is_const)
                                    emit.c_comment += " This version returns a mutable pointer.";
                            }

                            emit.c_name = binder.MakeMemberFuncName("Get" + std::string(is_const ? "" : "Mutable") + "Value");

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

                            emit.c_comment += "/// If this instance represents an error, returns the stored `" + cppdecl::ToCode(cpp_elem_type_error, cppdecl::ToCodeFlags::canonical_c_style) + "`. Otherwise null.";
                            if (!is_const)
                                emit.c_comment += " This version returns a mutable pointer.";

                            emit.c_name = binder.MakeMemberFuncName("Get" + std::string(is_const ? "" : "Mutable") + "Error");

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
    };
}
