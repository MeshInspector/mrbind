#include "common/meta.h"
#include "generators/c/binding_common.h"
#include "generators/c/module.h"

namespace mrbind::CBindings::Modules
{
    struct StdStringView : DeriveModule<StdStringView>
    {
        cppdecl::QualifiedName base_name = cppdecl::QualifiedName{}.AddPart("std").AddPart("string_view");

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
                file.header.contents += "\n/// A reference to a string or a part of one, not necessarily null-terminated.\n";
                file.header.contents += "typedef struct " + c_type_name + "\n";
                file.header.contents += "{\n";
                file.header.contents += "    const char *begin;\n";
                file.header.contents += "    const char *end;\n";
                file.header.contents += "} " + c_type_name + ";\n";
            }

            return file;
        }

        std::optional<Generator::BindableType> GetBindableType(Generator &generator, const cppdecl::Type &type, const std::string &type_str) override
        {
            (void)type;

            std::optional<Generator::BindableType> ret;

            if ((ret = BindRefParamsExceptNonConstLvalueSameAsNonRef(generator, type, base_name))) {}
            else if (type_str == "std::string_view")
            {
                Generator::BindableType &new_type = ret.emplace();

                new_type.traits = Generator::TypeTraits::CopyableAndTrivialExceptForDefaultCtor{};

                new_type.bindable_with_same_address.declared_in_file = [this, &generator]() -> auto & {return GetOutputFile(generator);};
                new_type.bindable_with_same_address.forward_declaration = MakeStructForwardDeclaration(c_type_name);
                new_type.bindable_with_same_address.custom_c_type_name = c_type_name;

                Generator::BindableType::ReturnUsage &return_usage = new_type.return_usage.emplace();
                return_usage.same_addr_bindable_type_dependencies["std::string_view"].need_header = true; // Force our header to be included.
                return_usage.c_type = cppdecl::Type::FromSingleWord(c_type_name);
                return_usage.make_return_statement = [](Generator::OutputFile::SpecificFileContents &file, std::string_view expr)
                {
                    (void)file;
                    return "auto _ret = " + std::string(expr) + "; return {_ret.data(), _ret.data() + _ret.size()};";
                };

                Generator::BindableType::ParamUsageWithDefaultArg &param_usage = new_type.param_usage_with_default_arg.emplace();
                auto const_char_ptr_type = cppdecl::Type::FromSingleWord("char").AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{});
                param_usage.c_params.emplace_back().c_type = const_char_ptr_type;
                param_usage.c_params.emplace_back().c_type = const_char_ptr_type; // A second one.
                param_usage.c_params.back().name_suffix += "_end";
                param_usage.c_params_to_cpp = param_usage.c_params_to_cpp = [](Generator::OutputFile::SpecificFileContents &source_file, std::string_view cpp_param_name, Generator::BindableType::ParamUsage::DefaultArgVar default_arg)
                {
                    std::string ret = "(";
                    ret += cpp_param_name;
                    ret += " ? ";

                    const auto *wrapper = std::get_if<Generator::BindableType::ParamUsage::DefaultArgWrapper>(&default_arg);
                    if (wrapper)
                        ret += wrapper->wrapper_cpp_type;

                    // Here we're constructing the `std::string_view` from a pointer and a size, instead of two pointers, because the two pointers constructor requires C++20.
                    // Also instantiating the constructor from two iterators may or may not be a bit more expensive? (In terms of compilation times.)
                    ret += "(" + std::string(cpp_param_name) + "_end ? std::string_view(" + std::string(cpp_param_name) + ", std::size_t(" + std::string(cpp_param_name) + "_end - " + std::string(cpp_param_name) + ")) : std::string_view(" + std::string(cpp_param_name) + ")) : ";

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
                            ret += "std::string_view(";
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
