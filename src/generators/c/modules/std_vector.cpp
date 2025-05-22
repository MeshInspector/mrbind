#include "generators/c/binding_containers.h"
#include "generators/c/module.h"

namespace mrbind::CBindings::Modules
{
    struct StdVector : DeriveModule<StdVector>
    {
        std::optional<Generator::BindableType> GetBindableType(Generator &generator, const cppdecl::Type &type, const std::string &type_str) override
        {
            (void)type_str;

            std::optional<Generator::BindableType> ret;

            if (
                type.IsOnlyQualifiedName() &&
                type.simple_type.name.parts.size() == 2 &&
                type.simple_type.name.parts.at(0).AsSingleWord() == "std" &&
                type.simple_type.name.parts.at(1).AsSingleWordIgnoringTemplateArgs() == "vector" &&
                type.simple_type.name.parts.at(1).template_args &&
                type.simple_type.name.parts.at(1).template_args->args.size() >= 1
            )
            {
                if (auto elem_type = std::get_if<cppdecl::Type>(&type.simple_type.name.parts.at(1).template_args->args.at(0).var))
                {
                    ContainerBinder binder(generator, ContainerBinder::Params{
                        .cpp_container_type = type.simple_type.name,
                        .cpp_elem_type = *elem_type,
                        .stdlib_container_header = "vector",

                        .has_index_access = true,
                        .has_data_ptr = true,
                        .has_reserve_and_capacity = true,
                    });
                    ret = binder.MakeBinding(generator);
                }
            }

            return ret;
        }
    };
}
