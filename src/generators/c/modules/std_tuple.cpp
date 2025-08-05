#include "generators/c/binding_common.h"
#include "generators/c/module.h"

#include <unordered_map>
#include <vector>

namespace mrbind::CBindings::Modules
{
    struct StdTuple : DeriveModule<StdTuple>
    {
        cppdecl::QualifiedName base_name = cppdecl::QualifiedName{}.AddPart("std").AddPart("tuple");

        std::optional<Generator::BindableType> GetBindableType(Generator &generator, const cppdecl::Type &type, const std::string &type_str) override
        {
            (void)type_str;

            std::optional<Generator::BindableType> ret;

            if (!type.IsOnlyQualifiedName() || !type.simple_type.name.Equals(base_name, cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target))
                return ret;

            std::vector<cppdecl::Type> elem_types;
            // This can throw if `type` has wrong template parameters, we don't mind. I'm not sure how it could be possible in valid C++ code in the first place.
            elem_types.reserve(type.simple_type.name.parts.back().template_args.value().args.size());
            for (const auto &arg : type.simple_type.name.parts.back().template_args.value().args)
                elem_types.push_back(std::get<cppdecl::Type>(arg.var));

            HeapAllocatedClassBinder binder = HeapAllocatedClassBinder::ForCustomType(generator, type.simple_type.name);

            binder.traits = Generator::TypeTraits::CopyableAndTrivialExceptForDefaultCtor{}; // The triviality can get reset by the `CombineCommonProperties()` below if necessary.
            for (const auto &elem_type : elem_types)
                binder.traits->CombineCommonProperties(generator.FindTypeTraits(elem_type));

            auto get_output_file = [
                type,
                elem_types,
                binder
            ](Generator &generator) -> Generator::OutputFile &
            {
                bool is_new = false;
                Generator::OutputFile &file = generator.GetPublicHelperFile(generator.CppdeclToIdentifier(type), &is_new);

                if (is_new)
                {
                    file.header.contents += "\n/// Stores " + std::to_string(elem_types.size()) + " object" + (elem_types.size() == 1 ? "" : "s") + (elem_types.empty() ? "" : ": ");
                    for (bool first = true; const auto &elem_type : elem_types)
                    {
                        if (first)
                            first = false;
                        else
                            file.header.contents += ", ";

                        file.header.contents += '`' + generator.CppdeclToCodeForComments(elem_type) + '`';
                    }
                    file.header.contents += ".\n";


                    binder.EmitForwardDeclaration(generator, file);

                    // The special member functions:
                    binder.EmitSpecialMemberFunctions(generator, file);

                    // Elementwise constructor.
                    if (elem_types.size() > 0)
                    {
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Constructs the tuple elementwise.";
                        emit.c_name = binder.MakeMemberFuncName(generator, "Construct");
                        emit.cpp_return_type = type;
                        for (std::size_t i = 0; i < elem_types.size(); i++)
                        {
                            emit.params.push_back({
                                .name = "_" + std::to_string(i), // This is almost exactly the same as what the automatically selected names would be, but the difference is that this is zero-based, to match (the optional indices in) the getters below.
                                .cpp_type = elem_types[i], // `EmitFunction` removes the top-level constness (if any) from this automatically.
                            });
                        }

                        emit.cpp_called_func = generator.CppdeclToCode(type);
                        generator.EmitFunction(file, emit);
                    }

                    // Some custom functions:

                    { // Element getters.
                        // Get the identifier spellings of every types. Also find the duplicates if any, we'll need to disambiguate them.
                        std::vector<std::string> type_identifiers;
                        std::unordered_map<std::string, bool> type_identifier_dupes;
                        type_identifiers.reserve(elem_types.size());
                        for (const auto &elem_type : elem_types)
                        {
                            type_identifiers.push_back(generator.CppdeclToIdentifier(elem_type));
                            auto [iter, is_new] = type_identifier_dupes.try_emplace(type_identifiers.back());
                            if (!is_new)
                                iter->second = true;
                        }

                        for (std::size_t i = 0; i < elem_types.size(); i++)
                        {
                            for (bool is_const : {true, false})
                            {
                                if (!is_const && elem_types[i].IsConstOrReference())
                                    continue;

                                std::string name = "Get";
                                if (!is_const)
                                    name += "Mutable";
                                name += "_";
                                name += type_identifiers[i];

                                // Add a disambiguating suffix if the type is ambiguous.
                                if (type_identifier_dupes.at(type_identifiers[i]))
                                {
                                    name += "_";
                                    name += std::to_string(i);
                                }

                                Generator::EmitFuncParams emit;
                                emit.c_comment = "/// The element " + std::to_string(i) + ", of type `" + generator.CppdeclToCodeForComments(elem_types[i]) + "`, " + (is_const ? "read-only" : "mutable") + ".";
                                emit.c_name = binder.MakeMemberFuncName(generator, name);
                                emit.cpp_return_type = elem_types[i];
                                if (!emit.cpp_return_type.Is<cppdecl::Reference>())
                                {
                                    if (is_const)
                                        emit.cpp_return_type.AddQualifiers(cppdecl::CvQualifiers::const_);
                                    emit.cpp_return_type.AddModifier(cppdecl::Reference{});
                                }

                                emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), is_const);
                                emit.cpp_called_func = "std::get<" + std::to_string(i) + ">(@this@)";
                                generator.EmitFunction(file, emit);
                            }
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
            if (name.Equals(base_name, cppdecl::QualifiedName::EqualsFlags::allow_less_parts_in_target | cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target))
                return "tuple";
            return {};
        }
    };
}
