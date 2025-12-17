#include "generators/c/binding_common.h"
#include "generators/c/module.h"

#include <string>
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

        struct Target
        {
            cppdecl::QualifiedName name;
            std::string cpp_header;
        };
        std::vector<Target> targets = {
            {.name = cppdecl::QualifiedName{}.AddPart("std").AddPart("monostate"), .cpp_header = "variant"},
            {.name = cppdecl::QualifiedName{}.AddPart("std").AddPart("less"),      .cpp_header = "functional"},
            {.name = cppdecl::QualifiedName{}.AddPart("std").AddPart("greater"),   .cpp_header = "functional"},
        };

        std::optional<Generator::BindableType> GetBindableType(Generator &generator, const cppdecl::Type &type, const std::string &type_str) override
        {
            (void)type_str;
            if (std::none_of(targets.begin(), targets.end(), [&](const Target &target) {return type.simple_type.name.Equals(target.name, cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target);}))
                return {};
            return MakeEmptyTagBinding(generator, type);
        }

        std::optional<std::string> GetCppIncludeForQualifiedName(Generator &generator, const cppdecl::QualifiedName &name) override
        {
            (void)generator;
            for (const Target &target : targets)
            {
                if (name.Equals(target.name, cppdecl::QualifiedName::EqualsFlags::allow_less_parts_in_target | cppdecl::QualifiedName::EqualsFlags::allow_missing_final_template_args_in_target))
                    return target.cpp_header;
            }
            return {};
        }
    };
}
