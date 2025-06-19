#include "common/meta.h"
#include "generators/c/binding_common.h"
#include "generators/c/module.h"

namespace mrbind::CBindings::Modules
{
    struct StdString : DeriveModule<StdString>
    {
        cppdecl::QualifiedName target_name_stdstring = cppdecl::QualifiedName{}.AddPart("std").AddPart("string");
        cppdecl::QualifiedName target_name_stdstringview = cppdecl::QualifiedName{}.AddPart("std").AddPart("string_view");

        HeapAllocatedClassBinder binder_stdstring;
        HeapAllocatedClassBinder binder_stdstringview;

        void Init(Generator &generator) override
        {
            binder_stdstring = HeapAllocatedClassBinder::ForCustomType(generator, target_name_stdstring);
            binder_stdstringview = HeapAllocatedClassBinder::ForCustomType(generator, target_name_stdstringview);
            binder_stdstring.traits = Generator::TypeTraits::CopyableNonTrivial{};
            binder_stdstringview.traits = Generator::TypeTraits::CopyableAndTrivialExceptForDefaultCtor{};
        }

        Generator::OutputFile &GetOutputFile(Generator &generator, bool is_view)
        {
            bool is_new = false;
            Generator::OutputFile &file = generator.GetPublicHelperFile(is_view ? "std_string_view" : "std_string", &is_new);

            if (is_new)
            {
                auto &binder = is_view ? binder_stdstringview : binder_stdstring;

                file.header.contents += is_view ? "\n/// A non-owning string view. Not necessarily null-terminated.\n" : "\n/// A heap-allocated null-terminated string.\n";
                binder.EmitForwardDeclaration(generator, file);

                binder.EmitSpecialMemberFunctions(generator, file, true);

                // Some custom functions:

                { // size
                    Generator::EmitFuncParams emit;
                    emit.c_comment = is_view ? "/// The number of characters in the string." : "/// The number of characters in the string, excluding the null-terminator.";
                    emit.c_name = binder.MakeMemberFuncName("Size");
                    emit.cpp_return_type = cppdecl::Type::FromSingleWord("size_t");
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), true);
                    emit.cpp_called_func = "size";
                    generator.EmitFunction(file, emit);
                }

                { // data
                    Generator::EmitFuncParams emit;
                    emit.c_comment = is_view ? "/// Returns the string contents, NOT necessarily null-terminated." : "/// Returns the string contents, which are always null-terminated.";
                    emit.c_name = binder.MakeMemberFuncName("Data");
                    emit.cpp_return_type = cppdecl::Type::FromSingleWord("char").AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{});
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), true);
                    emit.cpp_called_func = "data";
                    generator.EmitFunction(file, emit);
                }

                // mutable data
                if (!is_view)
                {
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Returns the string contents, which are always null-terminated. This version returns a non-const pointer.";
                    emit.c_name = binder.MakeMemberFuncName("MutableData");
                    emit.cpp_return_type = cppdecl::Type::FromSingleWord("char").AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{});
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), false);
                    emit.cpp_called_func = "data";
                    generator.EmitFunction(file, emit);
                }

                { // data end
                    Generator::EmitFuncParams emit;
                    emit.c_comment = is_view ? "/// Returns a pointer to the end of string. Not dereferencable." : "/// Returns a pointer to the end of string, to its null-terminator.";
                    emit.c_name = binder.MakeMemberFuncName("DataEnd");
                    emit.cpp_return_type = cppdecl::Type::FromSingleWord("char").AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{});
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), true);
                    emit.cpp_called_func = "@this@.data() + @this@.size()";
                    generator.EmitFunction(file, emit);
                }

                // mutable data end
                if (!is_view)
                {
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Returns a pointer to the end of string, to its null-terminator. This version returns a non-const pointer.";
                    emit.c_name = binder.MakeMemberFuncName("MutableDataEnd");
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

            bool is_view = false;

            if ((ret = BindNonConstOrRvalueRefParamsSameAsNonRef(generator, type, target_name_stdstring))) {}
            if ((ret = BindNonConstOrRvalueRefParamsSameAsNonRef(generator, type, target_name_stdstringview))) {}
            else if (type_str == "std::string" || (is_view = type_str == "std::string_view"))
            {
                Generator::BindableType &new_type = ret.emplace();

                auto &binder = is_view ? binder_stdstringview : binder_stdstring;

                new_type.traits = Generator::TypeTraits::CopyableNonTrivial{};
                new_type.is_heap_allocated_class = true;

                new_type.bindable_with_same_address.declared_in_file = [this, &generator, is_view]() -> auto & {return GetOutputFile(generator, is_view);};
                new_type.bindable_with_same_address.forward_declaration = binder.MakeForwardDeclaration();
                new_type.bindable_with_same_address.custom_c_type_name = binder.c_type_name;

                new_type.return_usage = binder.MakeReturnUsage(generator);

                Generator::BindableType::ParamUsageWithDefaultArg &param_usage = new_type.param_usage_with_default_arg.emplace();
                auto const_char_ptr_type = cppdecl::Type::FromSingleWord("char").AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{});
                param_usage.c_params.emplace_back().c_type = const_char_ptr_type;
                param_usage.c_params.emplace_back().c_type = const_char_ptr_type; // A second one.
                param_usage.c_params.back().name_suffix += "_end";
                param_usage.c_params_to_cpp = [
                    type_str = std::string(type_str) // Casting just in case, to avoid dangling in the future, if the parameter type changes to `std::string_view`.
                ](Generator::OutputFile::SpecificFileContents &source_file, std::string_view cpp_param_name, Generator::BindableType::ParamUsage::DefaultArgVar default_arg)
                {
                    std::string ret = "(";
                    ret += cpp_param_name;
                    ret += " ? ";

                    const auto *wrapper = std::get_if<Generator::BindableType::ParamUsage::DefaultArgWrapper>(&default_arg);
                    if (wrapper)
                        ret += wrapper->wrapper_cpp_type;

                    ret += "(" + std::string(cpp_param_name) + "_end ? " + type_str + "(" + std::string(cpp_param_name) + ", " + std::string(cpp_param_name) + "_end) : " + type_str + "(" + std::string(cpp_param_name) + ")) : ";

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
                            ret += type_str + "(";
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
                param_usage.explanation_how_to_use_default_arg = [](std::string_view cpp_param_name, bool use_wrapper){(void)use_wrapper; return "pass a null pointer to both it and `" + std::string(cpp_param_name) + "_end`";};
            }

            return ret;
        }
    };
}
