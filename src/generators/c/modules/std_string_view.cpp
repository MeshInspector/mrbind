#include "generators/c/binding_helpers.h"
#include "generators/c/module.h"

namespace mrbind::CBindings::Modules
{
    struct StdStringView : DeriveModule<StdStringView>
    {
        std::string c_type_name;

        void Init(Generator &generator) override
        {
            c_type_name = generator.MakePublicHelperName("std_string_view");
        }

        Generator::OutputFile &GetOutputFile(Generator &generator)
        {
            bool is_new = false;
            Generator::OutputFile &file = generator.GetPublicHelperFile("std_string_view", &is_new);

            if (is_new)
            {
                file.header.contents += "/// A reference to a string or a part of one, not necessarily null-terminated.\n";
                file.header.contents += "struct " + c_type_name + "\n";
                file.header.contents += "{\n";
                file.header.contents += "    const char *begin;\n";
                file.header.contents += "    const char *end;\n";
                file.header.contents += "};\n";
            }

            return file;
        }

        std::optional<Generator::BindableType> GetBindableType(Generator &generator, const cppdecl::Type &type, const std::string &type_str) override
        {
            (void)type;

            std::optional<Generator::BindableType> ret;

            if (type_str == "std::string_view")
            {
                Generator::BindableType &new_type = ret.emplace();

                new_type.bindable_with_same_address.declared_in_file = [this, &generator]() -> auto & {return GetOutputFile(generator);};
                new_type.bindable_with_same_address.forward_declaration = MakeStructForwardDeclaration(c_type_name);
                new_type.bindable_with_same_address.c_type_name = c_type_name;

                Generator::BindableType::ReturnUsage &return_usage = new_type.return_usage.emplace();
                return_usage.same_addr_bindable_type_dependencies["std::string_view"].need_header = true; // Force our header to be included.
                return_usage.c_type = cppdecl::Type::FromSingleWord(c_type_name);
                return_usage.make_return_statement = [](Generator::OutputFile::SpecificFileContents &file, std::string_view expr)
                {
                    (void)file;
                    return "auto _ret = " + std::string(expr) + "; return {_ret.data(), _ret.data() + _ret.size()};";
                };

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
                    ret += " ? (" + std::string(cpp_param_name) + "_end ? std::string_view(" + std::string(cpp_param_name) + ", " + std::string(cpp_param_name) + "_end) : std::string_view(" + std::string(cpp_param_name) + ")) : ";

                    if (default_arg.empty())
                    {
                        file.stdlib_headers.insert("stdexcept");
                        ret += "throw std::runtime_error(\"Parameter `" + std::string(cpp_param_name) + "` can not be null.\")";
                    }
                    else
                    {
                        ret += "std::string_view(" + std::string(default_arg) + ")";
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
