#include "generators/c/binding_common.h"
#include "generators/c/module.h"

namespace mrbind::CBindings::Modules
{
    struct StdPair : DeriveModule<StdPair>
    {
        cppdecl::QualifiedName base_name = cppdecl::QualifiedName{}.AddPart("std").AddPart("pair");

        std::optional<Generator::BindableType> GetBindableType(Generator &generator, const cppdecl::Type &type, const std::string &type_str) override
        {
            (void)type_str;

            std::optional<Generator::BindableType> ret;

            if (!type.IsOnlyQualifiedName() || !type.simple_type.name.Equals(base_name, cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target))
                return ret;

            // This can throw if `type` has wrong template parameters, we don't mind. I'm not sure how it could be possible in valid C++ code in the first place.
            const cppdecl::Type &cpp_elem_type_a = std::get<cppdecl::Type>(type.simple_type.name.parts.back().template_args.value().args.at(0).var);
            const cppdecl::Type &cpp_elem_type_b = std::get<cppdecl::Type>(type.simple_type.name.parts.back().template_args.value().args.at(1).var);

            HeapAllocatedClassBinder binder = HeapAllocatedClassBinder::ForCustomType(generator, type.simple_type.name);

            binder.traits = Generator::TypeTraits::CopyableAndTrivialExceptForDefaultCtor{}; // The triviality can get reset by the `CombineCommonProperties()` below if necessary.
            binder.traits->CombineCommonProperties(generator.FindBindableType(cpp_elem_type_a).traits.value());
            binder.traits->CombineCommonProperties(generator.FindBindableType(cpp_elem_type_b).traits.value());

            auto get_output_file = [
                type,
                cpp_elem_type_a,
                cpp_elem_type_b,
                binder
            ](Generator &generator) -> Generator::OutputFile &
            {
                bool is_new = false;
                Generator::OutputFile &file = generator.GetPublicHelperFile(cppdecl::ToString(type, cppdecl::ToStringFlags::identifier), &is_new);

                if (is_new)
                {
                    file.source.stdlib_headers.insert("utility"); // For `std::pair`.
                    TryIncludeHeadersForCppTypeInSourceFile(generator, file, type);

                    file.header.contents += "\n/// Stores two objects: `" + cppdecl::ToCode(cpp_elem_type_a, cppdecl::ToCodeFlags::canonical_c_style) + "` and `" + cppdecl::ToCode(cpp_elem_type_a, cppdecl::ToCodeFlags::canonical_c_style) + "`.\n";
                    binder.EmitForwardDeclaration(generator, file);

                    // The special member functions:
                    binder.EmitSpecialMemberFunctions(generator, file);

                    { // Elementwise constructor.
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Constructs the pair elementwise.";
                        emit.c_name = binder.MakeMemberFuncName("Construct");
                        emit.cpp_return_type = type;
                        emit.params.push_back({
                            .name = "first",
                            .cpp_type = cpp_elem_type_a, // `EmitFunction` removes the top-level constness (if any) from this automatically.
                        });
                        emit.params.push_back({
                            .name = "second",
                            .cpp_type = cpp_elem_type_b, // `EmitFunction` removes the top-level constness (if any) from this automatically.
                        });

                        emit.cpp_called_func = cppdecl::ToCode(type, cppdecl::ToCodeFlags::canonical_c_style);
                        generator.EmitFunction(file, emit);
                    }

                    // Some custom functions:

                    auto MakeReturnType = [](cppdecl::Type type, bool is_const) -> cppdecl::Type
                    {
                        if (type.Is<cppdecl::Reference>())
                            return type;
                        if (is_const)
                            type.AddQualifiers(cppdecl::CvQualifiers::const_);
                        type.AddModifier(cppdecl::Reference{});
                        return type;
                    };

                    { // first, const
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// The first of the two elements, read-only.";
                        emit.c_name = binder.MakeMemberFuncName("First");
                        emit.cpp_return_type = MakeReturnType(cpp_elem_type_a, true);
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), true);
                        emit.cpp_called_func = "@this@.first";
                        generator.EmitFunction(file, emit);
                    }

                    // first, mutable
                    if (!cpp_elem_type_a.IsConstOrReference())
                    {
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// The first of the two elements, mutable.";
                        emit.c_name = binder.MakeMemberFuncName("MutableFirst");
                        emit.cpp_return_type = MakeReturnType(cpp_elem_type_a, false);
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), false);
                        emit.cpp_called_func = "@this@.first";
                        generator.EmitFunction(file, emit);
                    }

                    { // second, const
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// The second of the two elements, read-only.";
                        emit.c_name = binder.MakeMemberFuncName("Second");
                        emit.cpp_return_type = MakeReturnType(cpp_elem_type_b, true);
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), true);
                        emit.cpp_called_func = "@this@.second";
                        generator.EmitFunction(file, emit);
                    }

                    // second, mutable
                    if (!cpp_elem_type_b.IsConstOrReference())
                    {
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// The second of the two elements, mutable.";
                        emit.c_name = binder.MakeMemberFuncName("MutableSecond");
                        emit.cpp_return_type = MakeReturnType(cpp_elem_type_b, false);
                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), false);
                        emit.cpp_called_func = "@this@.second";
                        generator.EmitFunction(file, emit);
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
