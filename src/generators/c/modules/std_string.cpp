#include "common/meta.h"
#include "generators/c/binding_common.h"
#include "generators/c/module.h"

namespace mrbind::CBindings::Modules
{
    struct StdString : DeriveModule<StdString>
    {
        HeapAllocatedClassBinder binder;

        void Init(Generator &generator) override
        {
            binder = HeapAllocatedClassBinder::ForCustomType(generator, cppdecl::QualifiedName{}.AddPart("std").AddPart("string"));
            binder.traits = Generator::TypeTraits::CopyableNonTrivial{};
        }

        Generator::OutputFile &GetOutputFile(Generator &generator)
        {
            bool is_new = false;
            Generator::OutputFile &file = generator.GetPublicHelperFile("std_string", &is_new);

            if (is_new)
            {
                file.header.contents += "\n/// A heap-allocated string.\n";
                binder.EmitForwardDeclaration(generator, file);

                binder.EmitSpecialMemberFunctions(generator, file, true);

                // Some custom functions:

                { // size
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// The number of characters in the string, excluding the null-terminator.";
                    emit.c_name = generator.MakePublicHelperName(binder.basic_c_name + "_Size");
                    emit.cpp_return_type = cppdecl::Type::FromSingleWord("size_t");
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), true);
                    emit.cpp_called_func = "size";
                    generator.EmitFunction(file, emit);
                }

                { // data
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Returns the string contents, which are always null-terminated.";
                    emit.c_name = generator.MakePublicHelperName(binder.basic_c_name + "_Data");
                    emit.cpp_return_type = cppdecl::Type::FromSingleWord("char").AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{});
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), true);
                    emit.cpp_called_func = "c_str";
                    generator.EmitFunction(file, emit);
                }

                { // mutable data
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Returns the string contents, which are always null-terminated. This version returns a non-const pointer.";
                    emit.c_name = generator.MakePublicHelperName(binder.basic_c_name + "_MutableData");
                    emit.cpp_return_type = cppdecl::Type::FromSingleWord("char").AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{});
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), false);
                    emit.cpp_called_func = "data";
                    generator.EmitFunction(file, emit);
                }

                { // data end
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Returns a pointer to the end of string, to its null-terminator.";
                    emit.c_name = generator.MakePublicHelperName(binder.basic_c_name + "_DataEnd");
                    emit.cpp_return_type = cppdecl::Type::FromSingleWord("char").AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{});
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), true);
                    emit.cpp_called_func = "@this@.c_str() + @this@.size()";
                    generator.EmitFunction(file, emit);
                }

                { // mutable data end
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Returns a pointer to the end of string, to its null-terminator. This version returns a non-const pointer.";
                    emit.c_name = generator.MakePublicHelperName(binder.basic_c_name + "_MutableDataEnd");
                    emit.cpp_return_type = cppdecl::Type::FromSingleWord("char").AddModifier(cppdecl::Pointer{});
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), false);
                    emit.cpp_called_func = "@this@.data() + @this@.size()";
                    generator.EmitFunction(file, emit);
                }
            }

            return file;
        }

        std::optional<Generator::BindableType> GetBindableType(Generator &generator, const cppdecl::Type &type, const std::string &type_str) override
        {
            (void)type;

            std::optional<Generator::BindableType> ret;

            if ((ret = BindRefParamsExceptNonConstLvalueSameAsNonRef(generator, type, "std::string"))) {}
            else if (type_str == "std::string")
            {
                Generator::BindableType &new_type = ret.emplace();

                new_type.traits = Generator::TypeTraits::CopyableNonTrivial{};
                new_type.is_heap_allocated_class = true;

                new_type.bindable_with_same_address.declared_in_file = [this, &generator]() -> auto & {return GetOutputFile(generator);};
                new_type.bindable_with_same_address.forward_declaration = binder.MakeForwardDeclaration();
                new_type.bindable_with_same_address.custom_c_type_name = binder.c_type_name;

                new_type.return_usage = binder.MakeReturnUsage();

                Generator::BindableType::ParamUsage &param_usage = new_type.param_usage_with_default_arg.emplace();
                auto const_char_ptr_type = cppdecl::Type::FromSingleWord("char").AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{});
                param_usage.c_params.emplace_back().c_type = const_char_ptr_type;
                param_usage.c_params.emplace_back().c_type = const_char_ptr_type; // A second one.
                param_usage.c_params.back().name_suffix += "_end";
                param_usage.c_params_to_cpp = [](Generator::OutputFile::SpecificFileContents &source_file, std::string_view cpp_param_name, Generator::BindableType::ParamUsage::DefaultArgVar default_arg)
                {
                    std::string ret = "(";
                    ret += cpp_param_name;
                    ret += " ? ";

                    const auto *wrapper = std::get_if<Generator::BindableType::ParamUsage::DefaultArgWrapper>(&default_arg);
                    if (wrapper)
                        ret += wrapper->wrapper_cpp_type;

                    ret += "(" + std::string(cpp_param_name) + "_end ? std::string(" + std::string(cpp_param_name) + ", " + std::string(cpp_param_name) + "_end) : std::string(" + std::string(cpp_param_name) + ")) : ";

                    std::visit(Overload{
                        [&](Generator::BindableType::ParamUsage::DefaultArgNone)
                        {
                            source_file.stdlib_headers.insert("stdexcept");
                            ret += "throw std::runtime_error(\"Parameter `";
                            ret += cpp_param_name;
                            ret += "` can not be null.\")";
                        },
                        [&](std::string_view default_arg)
                        {
                            ret += "std::string(";
                            ret += default_arg;
                            ret += ")";
                        },
                        [&](const Generator::BindableType::ParamUsage::DefaultArgWrapper &wrapper)
                        {
                            ret += wrapper.wrapper_null;
                        }
                    }, default_arg);

                    ret += ")"; // Close `( ? : )` (default argument vs no default argument).
                    return ret;
                };
                param_usage.append_to_comment = [](std::string_view cpp_param_name, bool has_default_arg)
                {
                    std::string ret;
                    if (has_default_arg)
                        ret += "/// Non-null `" + std::string(cpp_param_name) + "_end` requires a non-null `" + std::string(cpp_param_name) + "`.\n";
                    else
                        ret += "/// Parameter `" + std::string(cpp_param_name) + "` can not be null.\n";
                    ret += "/// If `" + std::string(cpp_param_name) + "_end` is null, then `" + std::string(cpp_param_name) + "` is assumed to be null-terminated.";
                    return ret;
                };
                param_usage.explanation_how_to_use_default_arg = [](std::string_view cpp_param_name){return "pass a null pointer to both it and `" + std::string(cpp_param_name) + "_end`";};
            }

            return ret;
        }
    };
}
