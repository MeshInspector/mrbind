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

        struct Params
        {
            cppdecl::QualifiedName cpp_container_type;
            cppdecl::Type cpp_elem_type;

            // The header where the container template itself is declared, e.g. `vector` for `std::vector`.
            // Leave empty if not needed.
            std::string stdlib_container_header;

            bool has_index_access = false;
            bool has_data_ptr = false;
            bool has_reserve = false;
        };

        ContainerBinder(Generator &generator, Params new_params);

        [[nodiscard]] Generator::BindableType MakeBinding(Generator &generator);

        // The file is created lazily on the first use.
        Generator::OutputFile &GetImplementationFile(Generator &generator) const;

      private:
        Params params;
        HeapAllocatedClassBinder class_binder;
        Generator::TypeTraits elem_traits;

        std::string basic_output_file_name;
    };
}
