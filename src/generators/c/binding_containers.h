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
            IteratorCategory iter_category{};

            bool is_map = false;
            bool is_set = false;
            bool is_multi = false; // A multimap or a multiset. Needs either `is_map` or `is_set` to be set.

            bool has_mutable_iterators = false; // This is false for sets.
            bool has_resize = false;
            bool has_capacity = false; // Also `reserve()`, `shrink_to_fit()`.
            bool has_front_back = false;

            bool has_push_back = false; // Also `pop_back()`.
            bool has_push_front = false; // Also `pop_front()`.

            bool push_front_requires_assignment = false;
            bool push_back_requires_assignment = false;
            bool insert_requires_assignment = false; // This also covers `erase()`, etc.
        };

        // `new_cpp_mapped_elem_type` should only be non-empty for maps. It's the mapped type, while `new_cpp_elem_type` is the key type.
        // `new_container_library_header` is the header where the container template itself is declared, e.g. `vector` for `std::vector`. Leave empty if not needed.
        ContainerBinder(
            Generator &generator,
            cppdecl::QualifiedName new_cpp_container_type,
            cppdecl::Type new_cpp_elem_type,
            cppdecl::Type new_cpp_mapped_elem_type,
            std::string new_container_library_header,
            Params new_params
        );

        [[nodiscard]] Generator::BindableType MakeBinding(Generator &generator);
        [[nodiscard]] Generator::BindableType MakeIteratorBinding(Generator &generator, bool is_const);

        // The file is created lazily on the first use.
        Generator::OutputFile &GetImplementationFile(Generator &generator) const;

      private:
        cppdecl::QualifiedName cpp_container_type;
        cppdecl::Type cpp_elem_type;
        cppdecl::Type cpp_mapped_elem_type; // Empty for non-maps. The mapped type of maps, and then `cpp_elem_type` is the key type.
        std::string stdlib_container_header;
        Params params;
        HeapAllocatedClassBinder class_binder;
        Generator::TypeTraits elem_traits;
        Generator::TypeTraits mapped_elem_traits;
        std::string basic_output_file_name;

        // Is the element type simple enough to allow assigning ranges?
        bool supports_range_assignment = false;

        HeapAllocatedClassBinder iterator_binder_mutable;
        HeapAllocatedClassBinder iterator_binder_const;
    };

    // Creates `ContainerBinder`s with different element types as needed.
    struct MetaContainerBinder
    {
        struct Target
        {
            // The container name, without the trailing template arguments.
            std::vector<cppdecl::QualifiedName> generic_cpp_container_names;

            // The header where the container template itself is declared, e.g. `vector` for `std::vector`. Leave empty if not needed.
            std::string stdlib_container_header;
        };

        // Need at least one.
        std::vector<Target> targets;

        ContainerBinder::Params params;

        // Binds any specialization of any of `generic_cpp_container_names`, and also its mutable and const iterator types.
        [[nodiscard]] std::optional<Generator::BindableType> MakeBinding(Generator &generator, const cppdecl::Type &type_to_bind);
    };
}
