#include "generators/c/binding_common.h"
#include "generators/c/module.h"

#include <unordered_map>
#include <vector>

namespace mrbind::CBindings::Modules
{
    struct StdVariant : DeriveModule<StdVariant>
    {
        cppdecl::QualifiedName base_name = cppdecl::QualifiedName{}.AddPart("std").AddPart("variant");

        std::optional<Generator::BindableType> GetBindableType(Generator &generator, const cppdecl::Type &type, const std::string &type_str) override
        {
            (void)type_str;

            std::optional<Generator::BindableType> ret;

            // We use this to disambiguate constructors (when the element types are duplicated) in languages other than C.
            // Injecting a fake name into `std` is a bit sketchy, but I don't want to name this `in_place_index_t`,
            //   since in our constructors it comes AFTER the value argument, which allows us to give this tag a default argument,
            //   which helps when there's no ambiguity.
            static const cppdecl::QualifiedName tag_name = cppdecl::QualifiedName{}.AddPart("std").AddPart("variant_index");

            { // Special handling for the `variant_index` tag.
                if (type.simple_type.name.Equals(tag_name, cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target))
                {
                    ret = MakeEmptyTagBinding(generator, type);
                    if (ret)
                        return ret;
                }
            }

            if (!type.IsOnlyQualifiedName() || !type.simple_type.name.Equals(base_name, cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target))
                return ret;

            std::vector<cppdecl::Type> elem_types;
            // This can throw if `type` has wrong template parameters, we don't mind. I'm not sure how it could be possible in valid C++ code in the first place.
            elem_types.reserve(type.simple_type.name.parts.back().template_args.value().args.size());
            for (const auto &arg : type.simple_type.name.parts.back().template_args.value().args)
                elem_types.push_back(std::get<cppdecl::Type>(arg.var));

            HeapAllocatedClassBinder binder = HeapAllocatedClassBinder::ForCustomType(generator, type.simple_type.name);

            binder.traits = Generator::TypeTraits::CopyableAndTrivialExceptForDefaultCtor{}; // Maybe not actually trivial, but we don't care. (The strictly correct tag would be `CopyableNonTrivialButCheap{}`, but I don't think it would change anything here.)
            for (const auto &elem_type : elem_types)
                binder.traits->CombineCommonProperties(generator.FindTypeTraits(elem_type));
            // Except the default constructability of the whole variant depends only on that of the first member.
            if (!elem_types.empty())
                binder.traits->is_default_constructible = generator.FindTypeTraits(elem_types.front()).is_default_constructible;

            auto get_output_file = [
                type,
                elem_types,
                binder
            ](Generator &generator) -> Generator::OutputFile &
            {
                bool is_new = false;
                Generator::OutputFile &file = *generator.GetPublicHelperFile(generator.CppdeclToIdentifier(type), &is_new);

                if (is_new)
                {
                    std::string comment;
                    comment += "/// Stores one of " + std::to_string(elem_types.size()) + " object" + (elem_types.size() == 1 ? "" : "s") + (elem_types.empty() ? "" : ": ");
                    for (bool first = true; const auto &elem_type : elem_types)
                    {
                        if (first)
                            first = false;
                        else
                            comment += ", ";

                        comment += '`' + generator.CppdeclToCodeForComments(elem_type) + '`';
                    }
                    comment += ".\n";

                    binder.EmitForwardDeclaration(generator, file, std::move(comment));

                    // The special member functions:
                    binder.EmitSpecialMemberFunctions(generator, file);

                    // Some common functions:

                    { // index
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Returns the index of the stored element type. In rare cases may return -1 if this variant is \"valueless by exception\".";
                        emit.name = binder.MakeMemberFuncName(generator, "Index");
                        emit.cpp_return_type = cppdecl::Type::FromSingleWord("size_t");
                        emit.AddThisParam(type, true);
                        emit.cpp_called_func = "index";
                        generator.EmitFunction(file, emit);
                    }

                    { // Per-element functions and constructors:
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

                        for (std::size_t i = 0; i < type_identifiers.size(); i++)
                        {
                            std::string &ident = type_identifiers[i];
                            if (type_identifier_dupes.at(ident))
                                ident += "_" + std::to_string(i);
                        }

                        // Construct with the specified element.
                        for (std::size_t i = 0; i < elem_types.size(); i++)
                        {
                            Generator::EmitFuncParams emit;
                            emit.c_comment = "/// Constructs the variant storing the element " + std::to_string(i) + ", of type `" + generator.CppdeclToCodeForComments(elem_types[i]) + "`.";
                            emit.name = binder.MakeMemberFuncName(generator, "ConstructAs_" + type_identifiers[i], CInterop::MethodKinds::Constructor{});
                            emit.cpp_return_type = type;
                            emit.params.push_back({
                                .name = "value",
                                .cpp_type = elem_types[i],
                                .reference_assigned = true,
                            });
                            { // A dummy tag parameter for disamgiuation in languages other than C. See the comment on `tag_name`.
                                cppdecl::Type param_type = cppdecl::Type::FromQualifiedName(cppdecl::QualifiedName(tag_name).AddTemplateArgument(cppdecl::PseudoExpr{.tokens = {cppdecl::NumericLiteral{.var = cppdecl::NumericLiteral::Integer{.value = std::to_string(i)}}}}));
                                emit.params.push_back({
                                    .name = "tag",
                                    .omit_from_call = true,
                                    .cpp_type = param_type,
                                    .default_arg = Generator::EmitFuncParams::Param::DefaultArg{
                                        .cpp_expr = generator.CppdeclToCode(param_type) + "{}", // Not `CppdeclToCodeForComments`.
                                        .original_spelling = "{}",
                                    },
                                });
                            }
                            emit.cpp_called_func = generator.CppdeclToCode(type) + "(std::in_place_index<" + std::to_string(i) + ">, @1@)";
                            generator.EmitFunction(file, emit);
                        }

                        // Assign with the specified element.
                        for (std::size_t i = 0; i < elem_types.size(); i++)
                        {
                            Generator::EmitFuncParams emit;
                            emit.c_comment = "/// Assigns to the variant, making it store the element " + std::to_string(i) + ", of type `" + generator.CppdeclToCodeForComments(elem_types[i]) + "`.";
                            emit.name = binder.MakeMemberFuncName(generator, "AssignAs_" + type_identifiers[i]);
                            emit.AddThisParam(type, false);
                            emit.params.push_back({
                                .name = "value",
                                .cpp_type = elem_types[i],
                                .reference_assigned = true,
                            });
                            emit.cpp_extra_statements =
                                "auto &_self = @this@;\n" // To reduce duplication in the generated code.
                                "if (_self.index() == " + std::to_string(i) + ")\n"
                                "    std::get<" + std::to_string(i) + ">(_self) = @1@;\n"
                                "else\n"
                                "    _self.emplace<" + std::to_string(i) + ">(@1@);";
                            generator.EmitFunction(file, emit);
                        }

                        // Return a reference to the `i`th element.
                        for (std::size_t i = 0; i < elem_types.size(); i++)
                        {
                            for (bool is_const : {true, false})
                            {
                                if (!is_const && elem_types[i].IsEffectivelyConst())
                                    continue;

                                Generator::EmitFuncParams emit;

                                // Those types are never references, so we're free to do this.
                                emit.cpp_return_type = elem_types[i];
                                if (is_const)
                                    emit.cpp_return_type.AddQualifiers(cppdecl::CvQualifiers::const_);
                                emit.cpp_return_type.AddModifier(cppdecl::Pointer{});

                                // If our `emit.cpp_return_type` return type binds to a `bool` (as is the case for tag/empty types, see `src/generators/c/modules/tags.cpp`),
                                //   then don't emit the non-const overload, because that's just gonna give us another bool.
                                // Note that we silently ignore the condition if the type isn't bindable (at all, or has no return usage),
                                //   because that'll fail in `EmitFunction()` anyway, with a better error than what we could produce here.
                                if (!is_const)
                                {
                                    if (auto opt = generator.FindBindableTypeOpt(emit.cpp_return_type); opt && opt->return_usage && opt->return_usage->c_type.AsSingleWord() == "bool")
                                        continue;
                                }

                                std::string name_suffix;
                                name_suffix += "_";
                                name_suffix += type_identifiers[i];

                                emit.c_comment = "/// Returns the element " + std::to_string(i) + ", of type `" + generator.CppdeclToCodeForComments(elem_types[i]) + "`, " + (is_const ? "read-only" : "mutable") + ". If it's not the active element, returns null.";
                                emit.name = binder.MakeMemberFuncName(generator, "Get" + std::string(is_const ? "" : "Mutable") + name_suffix, "Get" + name_suffix);
                                emit.lifetimes.ReturnsReferenceToThis();

                                emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), is_const);
                                emit.cpp_called_func = "std::get_if<" + std::to_string(i) + ">(&@this@)";
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
                return "variant";
            return {};
        }
    };
}
