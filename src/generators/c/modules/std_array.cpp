#include "generators/c/binding_common.h"
#include "generators/c/module.h"

namespace mrbind::CBindings::Modules
{
    struct StdArray : DeriveModule<StdArray>
    {
        cppdecl::QualifiedName base_name = cppdecl::QualifiedName{}.AddPart("std").AddPart("array");

        std::optional<Generator::BindableType> GetBindableType(Generator &generator, const cppdecl::Type &type, const std::string &type_str) override
        {
            (void)type_str;

            std::optional<Generator::BindableType> ret;

            if (!type.IsOnlyQualifiedName() || !type.simple_type.name.Equals(base_name, cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target | cppdecl::QualifiedName::EqualsFlags::allow_less_parts_in_target))
                return ret;

            // `std::array`
            if (type.simple_type.name.parts.size() == base_name.parts.size())
            {
                // This can throw if `type` has wrong template parameters, we don't mind. I'm not sure how it could be possible in valid C++ code in the first place.
                const cppdecl::Type &cpp_elem_type = std::get<cppdecl::Type>(type.simple_type.name.parts.back().template_args.value().args.at(0).var);
                const cppdecl::PseudoExpr &array_size_expr = std::get<cppdecl::PseudoExpr>(type.simple_type.name.parts.back().template_args.value().args.at(1).var);

                if (array_size_expr.tokens.size() != 1)
                    throw std::runtime_error("The second template argument of `std::array` is somehow not a single token. The full type is: `" + type_str + "`.");
                const auto array_size = std::get<cppdecl::NumericLiteral>(array_size_expr.tokens.front()).ToInteger().value();

                if (array_size == 0 || !generator.FieldTypeUsableInSameLayoutStruct(cpp_elem_type))
                {
                    // The normal heap-allocated array.
                    // Zero-sized arrays go here too, because the layout of zero-sized arrays depends on the C++ standard library.

                    HeapAllocatedClassBinder binder = HeapAllocatedClassBinder::ForCustomType(generator, type.simple_type.name);

                    // Copy the traits from the element type.
                    // This will throw if the element type is unknown.
                    binder.traits = generator.FindTypeTraits(cpp_elem_type);

                    auto get_output_file = [
                        type,
                        cpp_elem_type,
                        binder,
                        array_size_str = generator.CppdeclToCodeForComments(array_size_expr)
                    ](Generator &generator) -> Generator::OutputFile &
                    {
                        bool is_new = false;
                        Generator::OutputFile &file = *generator.GetPublicHelperFile(generator.CppdeclToIdentifier(type), &is_new);

                        if (is_new)
                        {
                            binder.EmitForwardDeclaration(generator, file, "/// A fixed-size array of `" + generator.CppdeclToCodeForComments(cpp_elem_type) + "` of size " + array_size_str + ".\n");

                            // The special member functions:
                            binder.EmitSpecialMemberFunctions(generator, file);

                            // Some custom functions:

                            { // [] const
                                Generator::EmitFuncParams emit;
                                emit.c_comment = "/// The element at a specific index, read-only.";
                                emit.name = binder.MakeMemberFuncName(generator, "At");
                                emit.cpp_return_type = cppdecl::Type(cpp_elem_type).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Reference{});
                                emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), true);
                                emit.params.push_back({
                                    .name = "i",
                                    .cpp_type = cppdecl::Type::FromSingleWord("size_t"),
                                });
                                emit.cpp_called_func = "at";
                                generator.EmitFunction(file, emit);
                            }

                            { // [] mutable
                                Generator::EmitFuncParams emit;
                                emit.c_comment = "/// The element at a specific index, mutable.";
                                emit.name = binder.MakeMemberFuncName(generator, "MutableAt");
                                emit.cpp_return_type = cppdecl::Type(cpp_elem_type).AddModifier(cppdecl::Reference{});
                                emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), false);
                                emit.params.push_back({
                                    .name = "i",
                                    .cpp_type = cppdecl::Type::FromSingleWord("size_t"),
                                });
                                emit.cpp_called_func = "at";
                                generator.EmitFunction(file, emit);
                            }

                            { // data const
                                Generator::EmitFuncParams emit;
                                emit.c_comment = "/// Returns a pointer to the continuous storage that holds all elements, read-only.";
                                emit.name = binder.MakeMemberFuncName(generator, "Data");
                                emit.cpp_return_type = cppdecl::Type(cpp_elem_type).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{});
                                emit.mark_as_returning_pointer_to_array = true;
                                emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), true);
                                emit.cpp_called_func = "data";
                                generator.EmitFunction(file, emit);
                            }

                            { // data mutable
                                Generator::EmitFuncParams emit;
                                emit.c_comment = "/// Returns a pointer to the continuous storage that holds all elements, mutable.";
                                emit.name = binder.MakeMemberFuncName(generator, "MutableData");
                                emit.cpp_return_type = cppdecl::Type(cpp_elem_type).AddModifier(cppdecl::Pointer{});
                                emit.mark_as_returning_pointer_to_array = true;
                                emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), false);
                                emit.cpp_called_func = "data";
                                generator.EmitFunction(file, emit);
                            }
                        }

                        return file;
                    };

                    Generator::BindableType &new_type = ret.emplace();
                    binder.FillCommonParams(generator, new_type);
                    new_type.bindable_with_same_address.declared_in_file = [&generator, get_output_file]() -> auto & {return get_output_file(generator);};
                }
                else
                {
                    // The fancy same-layout array.

                    Generator::BindableType &new_type = ret.emplace();
                    const std::string c_type_name = generator.MakePublicHelperName(generator.CppdeclToIdentifier(type));

                    auto array_size_and_alignment = generator.FindSameSizeAndAlignment(cpp_elem_type);
                    array_size_and_alignment.size *= array_size;

                    new_type = MakeBitCastClassBinding(generator, type.simple_type.name, c_type_name, generator.FindTypeTraits(cpp_elem_type), array_size_and_alignment);
                    new_type.bindable_with_same_address.custom_c_type_name = c_type_name;
                    new_type.bindable_with_same_address.forward_declaration = MakeStructForwardDeclarationNoReg(c_type_name);

                    auto get_output_file = [
                        type,
                        cpp_elem_type,
                        c_type_name,
                        array_size_expr,
                        array_size_and_alignment
                    ](Generator &generator) -> Generator::OutputFile &
                    {
                        bool is_new = false;
                        Generator::OutputFile &file = *generator.GetPublicHelperFile(generator.CppdeclToIdentifier(type), &is_new);

                        if (is_new)
                        {
                            cppdecl::Type cpp_plain_array_type = cpp_elem_type;
                            cpp_plain_array_type.AddModifier(cppdecl::Array{.size = array_size_expr});

                            // Emit the `std::array` struct.
                            generator.EmitExposedStruct(
                                file,
                                "/// A fixed-size array of `" + generator.CppdeclToCodeForComments(cpp_elem_type) + "` of size " + generator.CppdeclToCodeForComments(array_size_expr) + ".\n",
                                type.simple_type.name,
                                c_type_name,
                                array_size_and_alignment,
                                [&](Generator::EmitExposedStructFieldFunc emit_field)
                                {
                                    emit_field(
                                        cpp_plain_array_type,
                                        "", // No comment.
                                        "elems", // The field name. This is arbitrary.
                                        array_size_and_alignment, // Same as what the entire struct has.
                                        0 // The offset is zero, since this is the first field.
                                    );
                                }
                            );
                        }

                        return file;
                    };

                    new_type.bindable_with_same_address.declared_in_file = [&generator, get_output_file]() -> auto & {return get_output_file(generator);};
                }
            }

            // `std::array::[const_]iterator` isn't handled yet.
            // It would require some interesting logic, since they aren't pointers only on MSVC.
            // Could probably make the functions operating on them just use pointers on other standard libraries, typedefing those pointers to make it clear that they are operators.

            return ret;
        }

        std::optional<std::string> GetCppIncludeForQualifiedName(Generator &generator, const cppdecl::QualifiedName &name) override
        {
            (void)generator;
            if (name.Equals(base_name, cppdecl::QualifiedName::EqualsFlags::allow_less_parts_in_target | cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target))
                return "array";
            return {};
        }
    };
}
