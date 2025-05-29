#pragma once

#include "generators/c/binding_common.h"
#include "generators/c/generator.h"

#include <cppdecl/declarations/data.h>

namespace mrbind::CBindings
{
    class ContainerBinder
    {
      public:
        ContainerBinder() {}

        // Do not reorder! Those must be ordered from weakest to strongest.
        enum class IteratorCategory
        {
            forward,
            bidirectional,
            random_access,
            contiguous,
        };

        struct Params
        {
            // The header where the container template itself is declared, e.g. `vector` for `std::vector`.
            // Leave empty if not needed.
            std::string stdlib_container_header;

            IteratorCategory iter_category{};

            bool has_mutable_iterators = false; // This is false for sets.
            bool has_resize = false;
            bool has_capacity = false; // Also `reserve()`, `shrink_to_fit()`.
            bool has_front_back = false;

            bool has_push_back = false; // Also `pop_back()`.
        };

        ContainerBinder(Generator &generator, cppdecl::QualifiedName new_cpp_container_type, cppdecl::Type new_cpp_elem_type, Params new_params);

        [[nodiscard]] Generator::BindableType MakeBinding(Generator &generator);
        [[nodiscard]] Generator::BindableType MakeIteratorBinding(Generator &generator, bool is_const);

        // The file is created lazily on the first use.
        Generator::OutputFile &GetImplementationFile(Generator &generator) const;

      private:
        cppdecl::QualifiedName cpp_container_type;
        cppdecl::Type cpp_elem_type;
        Params params;
        HeapAllocatedClassBinder class_binder;
        Generator::TypeTraits elem_traits;
        std::string basic_output_file_name;

        HeapAllocatedClassBinder iterator_binder_mutable;
        HeapAllocatedClassBinder iterator_binder_const;
    };

    // Creates `ContainerBinder`s with different element types as needed.
    struct MetaContainerBinder
    {
        // The container name, without the trailing template arguments.
        cppdecl::QualifiedName generic_cpp_container_name;

        ContainerBinder::Params params;

        // Binds any specialization of `generic_cpp_container_name`, and also its mutable and const iterator types.
        [[nodiscard]] std::optional<Generator::BindableType> MakeBinding(Generator &generator, const cppdecl::Type &type_to_bind);
    };
}
