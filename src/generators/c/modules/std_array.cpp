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

            if (!type.IsOnlyQualifiedName() || !type.simple_type.name.Equals(base_name, cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target | cppdecl::QualifiedName::EqualsFlags::allow_shorter_target))
                return ret;

            // `std::array`
            if (type.simple_type.name.parts.size() == base_name.parts.size())
            {
                // This can throw if `type` has wrong template parameters, we don't mind. I'm not sure how it could be possible in valid C++ code in the first place.
                const cppdecl::Type &cpp_elem_type = std::get<cppdecl::Type>(type.simple_type.name.parts.back().template_args.value().args.at(0).var);
                const cppdecl::PseudoExpr &array_size = std::get<cppdecl::PseudoExpr>(type.simple_type.name.parts.back().template_args.value().args.at(1).var);

                HeapAllocatedClassBinder binder = HeapAllocatedClassBinder::ForCustomType(generator, type.simple_type.name);

                // Copy the traits from the element type.
                // This will throw if the element type is unknown.
                binder.traits = generator.FindBindableType(cpp_elem_type).traits.value();

                auto get_output_file = [
                    type,
                    cpp_elem_type,
                    binder,
                    array_size_str = cppdecl::ToCode(array_size, cppdecl::ToCodeFlags::canonical_c_style)
                ](Generator &generator) -> Generator::OutputFile &
                {
                    bool is_new = false;
                    Generator::OutputFile &file = generator.GetPublicHelperFile(cppdecl::ToString(type, cppdecl::ToStringFlags::identifier), &is_new);

                    if (is_new)
                    {
                        file.source.stdlib_headers.insert("array");
                        TryIncludeHeadersForCppTypeInSourceFile(generator, file, type);

                        file.header.contents += "\n/// A fixed-size array of `" + cppdecl::ToCode(cpp_elem_type, cppdecl::ToCodeFlags::canonical_c_style) + "` of size " + array_size_str + ".\n";
                        binder.EmitForwardDeclaration(generator, file);

                        // The special member functions:
                        binder.EmitSpecialMemberFunctions(generator, file);

                        // Some custom functions:

                        { // [] const
                            Generator::EmitFuncParams emit;
                            emit.c_comment = "/// The element at a specific index, read-only.";
                            emit.c_name = generator.MakePublicHelperName(binder.basic_c_name + "_At");
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
                            emit.c_name = generator.MakePublicHelperName(binder.basic_c_name + "_MutableAt");
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
                            emit.c_name = generator.MakePublicHelperName(binder.basic_c_name + "_Data");
                            emit.cpp_return_type = cppdecl::Type(cpp_elem_type).AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{});
                            emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), true);
                            emit.cpp_called_func = "data";
                            generator.EmitFunction(file, emit);
                        }

                        { // data mutable
                            Generator::EmitFuncParams emit;
                            emit.c_comment = "/// Returns a pointer to the continuous storage that holds all elements, mutable.";
                            emit.c_name = generator.MakePublicHelperName(binder.basic_c_name + "_MutableData");
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

            // `std::array::[const_]iterator` isn't handled yet.
            // It would require some interesting logic, since they aren't pointers only on MSVC.
            // Could probably make the functions operating on them just use pointers on other standard libraries, typedefing those pointers to make it clear that they are operators.

            return ret;
        }
    };
}
