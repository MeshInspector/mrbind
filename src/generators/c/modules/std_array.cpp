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
                const cppdecl::PseudoExpr &array_size = std::get<cppdecl::PseudoExpr>(type.simple_type.name.parts.back().template_args.value().args.at(1).var);

                if (!generator.FieldTypeUsableInSameLayoutStruct(cpp_elem_type))
                {
                    // The normal heap-allocated array.

                    HeapAllocatedClassBinder binder = HeapAllocatedClassBinder::ForCustomType(generator, type.simple_type.name);

                    // Copy the traits from the element type.
                    // This will throw if the element type is unknown.
                    binder.traits = generator.FindTypeTraits(cpp_elem_type);

                    auto get_output_file = [
                        type,
                        cpp_elem_type,
                        binder,
                        array_size_str = generator.CppdeclToCodeForComments(array_size)
                    ](Generator &generator) -> Generator::OutputFile &
                    {
                        bool is_new = false;
                        Generator::OutputFile &file = generator.GetPublicHelperFile(generator.CppdeclToIdentifier(type), &is_new);

                        if (is_new)
                        {
                            generator.EmitComment(file.header, "\n/// A fixed-size array of `" + generator.CppdeclToCodeForComments(cpp_elem_type) + "` of size " + array_size_str + ".\n");
                            binder.EmitForwardDeclaration(generator, file);

                            // The special member functions:
                            binder.EmitSpecialMemberFunctions(generator, file);

                            // Some custom functions:

                            { // [] const
                                Generator::EmitFuncParams emit;
                                emit.c_comment = "/// The element at a specific index, read-only.";
                                emit.c_name = binder.MakeMemberFuncName(generator, "At");
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
                                emit.c_name = binder.MakeMemberFuncName(generator, "MutableAt");
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
                                emit.c_name = binder.MakeMemberFuncName(generator, "Data");
                                emit.cpp_return_type = cppdecl::Type(cpp_elem_type).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{});
                                emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), true);
                                emit.cpp_called_func = "data";
                                generator.EmitFunction(file, emit);
                            }

                            { // data mutable
                                Generator::EmitFuncParams emit;
                                emit.c_comment = "/// Returns a pointer to the continuous storage that holds all elements, mutable.";
                                emit.c_name = binder.MakeMemberFuncName(generator, "MutableData");
                                emit.cpp_return_type = cppdecl::Type(cpp_elem_type).AddModifier(cppdecl::Pointer{});
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

                    new_type = MakeBitCastClassBinding(generator, type.simple_type.name, c_type_name, generator.FindTypeTraits(cpp_elem_type));
                    new_type.bindable_with_same_address.custom_c_type_name = c_type_name;
                    new_type.bindable_with_same_address.forward_declaration = MakeStructForwardDeclaration(c_type_name);

                    auto get_output_file = [
                        type,
                        cpp_elem_type,
                        c_type_name,
                        array_size
                    ](Generator &generator) -> Generator::OutputFile &
                    {
                        bool is_new = false;
                        Generator::OutputFile &file = generator.GetPublicHelperFile(generator.CppdeclToIdentifier(type), &is_new);

                        if (is_new)
                        {
                            generator.EmitComment(file.header, "\n/// A fixed-size array of `" + generator.CppdeclToCodeForComments(cpp_elem_type) + "` of size " + generator.CppdeclToCodeForComments(array_size) + ".\n");

                            cppdecl::Decl array_field_decl;
                            array_field_decl.name = cppdecl::QualifiedName::FromSingleWord("elems"); // Shrug.

                            array_field_decl.type = cpp_elem_type;
                            generator.ReplaceAllNamesInTypeWithCNames(array_field_decl.type);
                            array_field_decl.type.AddModifier(cppdecl::Array{.size = array_size});

                            // Passing the non-array type here (the element type), since a plain array will likely not have the bindings.
                            generator.AddDependenciesToFileForFieldOfSameLayoutStruct(cpp_elem_type, file);

                            file.header.contents += "typedef struct " + c_type_name + '\n';
                            file.header.contents += "{\n";
                            file.header.contents += "    " + generator.CppdeclToCode(array_field_decl) + ";\n";
                            file.header.contents += "} " + c_type_name + ";\n";
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
