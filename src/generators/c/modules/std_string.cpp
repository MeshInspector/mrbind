#include "generators/c/module.h"

namespace mrbind::CBindings::Modules
{
    struct StdString : DeriveModule<StdString>
    {
        // The C struct name for strings.
        std::string c_str_struct;
        // The name of a C function that destroys strings.
        std::string c_str_destroy_func;
        // The name of the internal C++ function that creates strings.
        std::string c_str_detail_create_func;

        void Init(Generator &generator) override
        {
            c_str_struct = generator.MakePublicHelperName("std_string");
            c_str_destroy_func = generator.MakePublicHelperName("Destroy_std_string");
            c_str_detail_create_func = generator.MakeDetailHelperName("Create_std_string");
        }

        Generator::OutputFile &GetOutputFile(Generator &generator)
        {
            bool is_new = false;
            Generator::OutputFile &file = generator.GetPublicHelperFile("std_string", &is_new);

            if (is_new)
            {
                file.header.stdlib_headers.insert("stddef.h"); // For `size_t`.

                file.header.contents += "struct ";
                file.header.contents += c_str_struct;
                file.header.contents += "\n{\n";
                file.header.contents += "    char *str; // Always null-terminated.\n";
                file.header.contents += "    size_t size;\n";
                file.header.contents += "    void *_owner; // For internal use.\n";
                file.header.contents += "};\n";

                { // Emit the destroy func.
                    Generator::EmitFuncParams emit_params;
                    emit_params.c_name = c_str_destroy_func,
                    emit_params.cpp_return_type = cppdecl::Type::FromSingleWord("void"),
                    emit_params.cpp_extra_statements = "delete reinterpret_cast<std::string *>(str._owner);\nstr = {};",
                    emit_params.cpp_called_func_begin = "",
                    emit_params.c_comment = "// Destroys the memory owned by a `" + c_str_struct + "` and zeroes the internal pointers.",
                    emit_params.params.push_back({
                        .name = "str",
                        .cpp_type = cppdecl::Type::FromSingleWord(c_str_struct),
                        .emit_as_is = true,
                    });
                    generator.EmitFunction(file, emit_params);
                }

                { // Emit the internal C++ header.
                    file.internal_header.stdlib_headers.insert("string");

                    file.internal_header.contents += "[[nodiscard]] " + generator.GetExportMacroForFile(file, true) + " " + c_str_struct + " " + c_str_detail_create_func + "(std::string str) noexcept;\n";

                    file.source.contents += c_str_struct + " " + c_str_detail_create_func + "(std::string str) noexcept\n";
                    file.source.contents += "{\n";
                    file.source.contents += "    std::string *storage = new std::string(std::move(str));\n";
                    file.source.contents += "    return {.str = storage->data(), .size = storage->size(), ._owner = storage};\n";
                    file.source.contents += "}\n";
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
                new_type.bindable_with_same_address.forward_declaration = "typedef struct " + c_str_struct + " " + c_str_struct + ";";

                Generator::BindableType::ReturnUsage &return_usage = new_type.return_usage.emplace();
                return_usage.c_type = cppdecl::Type::FromSingleWord(c_str_struct);
                return_usage.make_return_statement = [this](Generator::OutputFile::SpecificFileContents &file, std::string_view expr)
                {
                    (void)file;
                    return "return " + std::string(c_str_detail_create_func) + "(" + std::string(expr) + ");";
                };
                return_usage.append_to_comment = "/// The returned string must be freed by calling `" + c_str_destroy_func + "()`.";
                return_usage.same_addr_bindable_type_dependencies["std::string"].need_header = true; // Don't strictly need a header, but this nicely gives the user the destruction func.
                return_usage.extra_headers.custom_in_source_file = [this, &generator]{return std::unordered_set<std::string>{GetOutputFile(generator).internal_header.path_for_inclusion};};

                Generator::BindableType::ParamUsage &param_usage = new_type.param_usage_with_default_arg.emplace();
                auto const_char_ptr_type = cppdecl::Type::FromSingleWord("char").AddTopLevelQualifiers(cppdecl::CvQualifiers::const_).AddTopLevelModifier(cppdecl::Pointer{});
                param_usage.c_params.emplace_back().c_type = const_char_ptr_type;
                param_usage.c_params.emplace_back().c_type = const_char_ptr_type; // A second one.
                param_usage.c_params.back().name_suffix += "_end";
                param_usage.c_params_to_cpp = [](Generator::OutputFile::SpecificFileContents &file, std::string_view cpp_param_name, std::string_view default_arg)
                {
                    file.stdlib_headers.insert("string");

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
