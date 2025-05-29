#include "generators/c/binding_containers.h"
#include "generators/c/module.h"

namespace mrbind::CBindings::Modules
{
    struct StdVector : DeriveModule<StdVector>
    {
        MetaContainerBinder binder_vector = {
            .generic_cpp_container_name = cppdecl::QualifiedName{}.AddPart("std").AddPart("vector"),
            .params = {
                .stdlib_container_header = "vector",
                .iter_category = ContainerBinder::IteratorCategory::contiguous,
                .has_mutable_iterators = true,
                .has_resize = true,
                .has_capacity = true,
                .has_front_back = true,
                .has_push_back = true,
            },
        };

        std::optional<Generator::BindableType> GetBindableType(Generator &generator, const cppdecl::Type &type, const std::string &type_str) override
        {
            (void)type_str;
            if (auto ret = binder_vector.MakeBinding(generator, type))
                return ret;

            return {};
        }
    };
}
