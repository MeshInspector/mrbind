#include "generators/c/binding_helpers.h"
#include "generators/c/module.h"

namespace mrbind::CBindings::Modules
{
    struct StdString : DeriveModule<StdString>
    {
        ClassBinder binder;

        void Init(Generator &generator) override
        {
            binder = ClassBinder::ForCustomType(generator, cppdecl::QualifiedName{}.AddPart("std").AddPart("string"));
        }

        Generator::OutputFile &GetOutputFile(Generator &generator)
        {
            bool is_new = false;
            Generator::OutputFile &file = generator.GetPublicHelperFile("std_string", &is_new);

            if (is_new)
            {
                file.header.contents += "/// A heap-allocated string.\n";
                file.header.contents += binder.MakeForwardDeclaration() + '\n';

                generator.EmitFunction(file, binder.PrepareFuncDefaultCtor());
                generator.EmitFunction(file, binder.PrepareFuncCopyCtor());
                generator.EmitFunction(file, binder.PrepareFuncMoveCtor());
                generator.EmitFunction(file, binder.PrepareFuncCopyAssignment());
                generator.EmitFunction(file, binder.PrepareFuncMoveAssignment());
                generator.EmitFunction(file, binder.PrepareFuncDestroy());

                // Some custom functions:

                {
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Constructs a string object from a null-termianted string. Copies the contents.";
                    emit.c_name = generator.MakePublicHelperName(binder.basic_c_name + "_Construct");
                    emit.cpp_return_type = cppdecl::Type::FromQualifiedName(binder.cpp_type_name);
                    emit.cpp_called_func = "std::string";
                    emit.params.push_back({.name = "str", .cpp_type = cppdecl::Type::FromSingleWord("char").AddTopLevelQualifiers(cppdecl::CvQualifiers::const_).AddTopLevelModifier(cppdecl::Pointer{})});
                    generator.EmitFunction(file, emit);
                }

                {
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Constructs a string object from a possibly non-null-terminated string. Copies the contents. The resulting string is always null-terminated.";
                    emit.c_name = generator.MakePublicHelperName(binder.basic_c_name + "_ConstructFromRange");
                    emit.cpp_return_type = cppdecl::Type::FromQualifiedName(binder.cpp_type_name);
                    emit.cpp_called_func = "std::string";
                    emit.params.push_back({.name = "str", .cpp_type = cppdecl::Type::FromSingleWord("char").AddTopLevelQualifiers(cppdecl::CvQualifiers::const_).AddTopLevelModifier(cppdecl::Pointer{})});
                    emit.params.push_back({.name = "str_end", .cpp_type = cppdecl::Type::FromSingleWord("char").AddTopLevelQualifiers(cppdecl::CvQualifiers::const_).AddTopLevelModifier(cppdecl::Pointer{})});
                    generator.EmitFunction(file, emit);
                }

                {
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// The number of characters in the string, excluding the null-terminator.";
                    emit.c_name = generator.MakePublicHelperName(binder.basic_c_name + "_Size");
                    emit.cpp_return_type = cppdecl::Type::FromSingleWord("size_t");
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), true);
                    emit.cpp_called_func = "reinterpret_cast<const std::string *>(_this)->size()";
                    emit.cpp_called_func_parens = {};
                    generator.EmitFunction(file, emit);
                }

                {
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Returns the string contents, which are always null-terminated.";
                    emit.c_name = generator.MakePublicHelperName(binder.basic_c_name + "_Data");
                    emit.cpp_return_type = cppdecl::Type::FromSingleWord("char").AddTopLevelQualifiers(cppdecl::CvQualifiers::const_).AddTopLevelModifier(cppdecl::Pointer{});
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), true);
                    emit.cpp_called_func = "reinterpret_cast<const std::string *>(_this)->c_str()";
                    emit.cpp_called_func_parens = {};
                    generator.EmitFunction(file, emit);
                }

                {
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Returns the string contents, which are always null-terminated. This version returns a non-const pointer.";
                    emit.c_name = generator.MakePublicHelperName(binder.basic_c_name + "_MutableData");
                    emit.cpp_return_type = cppdecl::Type::FromSingleWord("char").AddTopLevelQualifiers(cppdecl::CvQualifiers::const_).AddTopLevelModifier(cppdecl::Pointer{});
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), false);
                    emit.cpp_called_func = "reinterpret_cast<std::string *>(_this)->data()";
                    emit.cpp_called_func_parens = {};
                    generator.EmitFunction(file, emit);
                }

                {
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Returns a pointer to the end of string, to its null-terminator.";
                    emit.c_name = generator.MakePublicHelperName(binder.basic_c_name + "_DataEnd");
                    emit.cpp_return_type = cppdecl::Type::FromSingleWord("char").AddTopLevelQualifiers(cppdecl::CvQualifiers::const_).AddTopLevelModifier(cppdecl::Pointer{});
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), true);
                    emit.cpp_called_func = "reinterpret_cast<const std::string *>(_this)->c_str() + reinterpret_cast<const std::string *>(_this)->size()";
                    emit.cpp_called_func_parens = {};
                    generator.EmitFunction(file, emit);
                }

                {
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Returns a pointer to the end of string, to its null-terminator. This version returns a non-const pointer.";
                    emit.c_name = generator.MakePublicHelperName(binder.basic_c_name + "_MutableDataEnd");
                    emit.cpp_return_type = cppdecl::Type::FromSingleWord("char").AddTopLevelModifier(cppdecl::Pointer{});
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), false);
                    emit.cpp_called_func = "reinterpret_cast<std::string *>(_this)->data() + reinterpret_cast<std::string *>(_this)->size()";
                    emit.cpp_called_func_parens = {};
                    generator.EmitFunction(file, emit);
                }
            }

            return file;
        }

        std::optional<Generator::BindableType> GetBindableType(Generator &generator, const cppdecl::Type &type, const std::string &type_str) override
        {
            (void)type;

            std::optional<Generator::BindableType> ret;

            if (type_str == "std::string")
            {
                Generator::BindableType &new_type = ret.emplace();

                new_type.bindable_with_same_address.declared_in_file = [this, &generator]() -> auto & {return GetOutputFile(generator);};
                new_type.bindable_with_same_address.forward_declaration = binder.MakeForwardDeclaration();
                new_type.bindable_with_same_address.c_type_name = binder.c_type_name;

                new_type.return_usage = binder.MakeReturnUsage();
                new_type.return_usage->same_addr_bindable_type_dependencies.at("std::string").need_header = true; // Force our header to be included.

                Generator::BindableType::ParamUsage &param_usage = new_type.param_usage_with_default_arg.emplace();
                auto const_char_ptr_type = cppdecl::Type::FromSingleWord("char").AddTopLevelQualifiers(cppdecl::CvQualifiers::const_).AddTopLevelModifier(cppdecl::Pointer{});
                param_usage.c_params.emplace_back().c_type = const_char_ptr_type;
                param_usage.c_params.emplace_back().c_type = const_char_ptr_type; // A second one.
                param_usage.c_params.back().name_suffix += "_end";
                param_usage.c_params_to_cpp = [](Generator::OutputFile::SpecificFileContents &file, std::string_view cpp_param_name, std::string_view default_arg)
                {
                    (void)file;

                    std::string ret;
                    ret += cpp_param_name;
                    ret += " ? (" + std::string(cpp_param_name) + "_end ? std::string(" + std::string(cpp_param_name) + ", " + std::string(cpp_param_name) + "_end) : std::string(" + std::string(cpp_param_name) + ")) : ";

                    if (default_arg.empty())
                    {
                        file.stdlib_headers.insert("stdexcept");
                        ret += "throw std::runtime_error(\"Parameter `" + std::string(cpp_param_name) + "` can not be null.\")";
                    }
                    else
                    {
                        ret += "std::string(" + std::string(default_arg) + ")";
                    }

                    return ret;
                };
                param_usage.append_to_comment = [](std::string_view cpp_param_name, bool has_default_arg)
                {
                    std::string ret;
                    if (has_default_arg)
                    {
                        // Two spaces because this goes after a message about the default argument.
                        ret += "///   To use the default argument, pass a null pointer to both it and `" + std::string(cpp_param_name) + "_end`.\n";
                        ret += "/// Non-null `" + std::string(cpp_param_name) + "_end` requires a non-null `" + std::string(cpp_param_name) + "`.\n";
                    }
                    else
                    {
                        ret += "/// Parameter `" + std::string(cpp_param_name) + "` can not be null.\n";
                    }
                    ret += "/// If `" + std::string(cpp_param_name) + "_end` is null, then `" + std::string(cpp_param_name) + "` is assumed to be null-terminated.";
                    return ret;
                };
            }

            return ret;
        }
    };
}
