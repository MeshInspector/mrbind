#include "generators/c/binding_common.h"
#include "generators/c/module.h"

#include <unordered_map>
#include <vector>

namespace mrbind::CBindings::Modules
{
    struct Tags : DeriveModule<Tags>
    {
        // This binds certain types as "tags". Meaning they get mapped to zero parameters when used as a parameter (a default-constructed copy
        //   is passed instead), and to `void` when used as a return type. They don't get C headers, since they don't exist on the C side at all.
        // References to those get the same treatment (but only in parameters, they don't have a return usage).
        // Pointers to those get replaced with `bool`s when returned, and don't support being passed by parameters.
        //
        // Note that we assume that all tag types are trivial and copyable, at least now. We can make that customizable later, it's simple.

        std::vector<cppdecl::QualifiedName> base_names = {
            cppdecl::QualifiedName{}.AddPart("std").AddPart("monostate"),
            cppdecl::QualifiedName{}.AddPart("std").AddPart("less"),
            cppdecl::QualifiedName{}.AddPart("std").AddPart("greater"),
        };

        std::optional<Generator::BindableType> GetBindableType(Generator &generator, const cppdecl::Type &type, const std::string &type_str) override
        {
            (void)generator; // Heh.
            (void)type_str;

            std::optional<Generator::BindableType> ret;

            { // Check against the list of known types.
                if (!type.simple_type.IsOnlyQualifiedName(cppdecl::SingleWordFlags::ignore_const))
                    return ret; // Hmm.
                if (
                    !(
                        type.modifiers.size() == 0 ||
                        (
                            type.modifiers.size() == 1 &&
                            (
                                (
                                    type.Is<cppdecl::Reference>() &&
                                    (
                                        // Only accept const or rvalue references.
                                        // Because non-const lvalue references don't accept default-constructed rvalues (what else would we do with them?).
                                        type.As<cppdecl::Reference>()->kind == cppdecl::RefQualifier::rvalue ||
                                        bool(type.simple_type.quals & cppdecl::CvQualifiers::const_)
                                    )
                                ) ||
                                // Pointers get some limited bindings too (get returned as bools, and that's all).
                                type.Is<cppdecl::Pointer>()
                            )
                        )
                    )
                )
                {
                    return ret; // Neither a qualified-name only, nor a reference to one.
                }

                if (std::none_of(base_names.begin(), base_names.end(), [&](const cppdecl::QualifiedName &base_name){return type.simple_type.name.Equals(base_name, cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target);}))
                    return ret; // Not a matching type.
            }


            Generator::BindableType &binding = ret.emplace();

            binding.traits = Generator::TypeTraits::TrivialButDifferentSizeInCAndCpp{};


            // Entirely custom logic for pointers.
            // They get replaced with `bool` when returned, and don't support being passed as parameters.
            if (type.Is<cppdecl::Pointer>())
            {
                Generator::BindableType::ReturnUsage &return_usage = binding.return_usage.emplace();
                return_usage.c_type = cppdecl::Type::FromSingleWord("bool");
                return_usage.extra_headers.stdlib_in_header_file = {"stdbool.h"};
                return ret; // That's all.
            }


            if (!type.Is<cppdecl::Reference>())
            {
                // The return usage only works for non-references.
                Generator::BindableType::ReturnUsage &return_usage = binding.return_usage.emplace();
                return_usage.c_type = cppdecl::Type::FromSingleWord("void");
            }

            binding.is_useless_default_argument = [](std::string_view) -> std::optional<std::string> {return "";}; // Always ignore default arguments.

            // No actual default argument support, since all of them are rejected by `is_useless_default_argument`.
            // This interacts nicely with `std::optional` bindings too, those would reject this class (as the element type) as expected.
            Generator::BindableType::ParamUsage &param_usage = binding.param_usage_with_default_arg.emplace();
            // Return a default-constructed instance, that's all. Don't add any `c_params`.
            param_usage.c_params_to_cpp = [
                ret = cppdecl::ToCode(type.simple_type, cppdecl::ToCodeFlags::canonical_c_style, cppdecl::CvQualifiers::const_) + "{}"
            ](Generator::OutputFile::SpecificFileContents &source_file, std::string_view cpp_param_name, Generator::BindableType::ParamUsage::DefaultArgVar default_arg) -> std::string
            {
                (void)source_file;
                (void)cpp_param_name;
                (void)default_arg;

                return ret;
            };

            return ret;
        }
    };
}
