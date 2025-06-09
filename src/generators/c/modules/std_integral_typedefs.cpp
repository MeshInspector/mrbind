#include "generators/c/binding_common.h"
#include "generators/c/module.h"

namespace mrbind::CBindings::Modules
{
    // Handles various typedefs from `<stddef.h>` and `<stdint.h>`.
    // Since those shouldn't appear in canonical parsed type names, this is primarily to simplify writing custom bindings.
    struct StdIntegralTypedefs : DeriveModule<StdIntegralTypedefs>
    {
        std::optional<Generator::BindableType> GetBindableType(Generator &generator, const cppdecl::Type &type, const std::string &type_str) override
        {
            (void)type;

            std::optional<Generator::BindableType> ret;

            auto HandleType = [&](std::string_view header, std::string_view c_name) -> bool
            {
                if (type_str == c_name || (type_str.starts_with("std::") && std::string_view(type_str).substr(5) == c_name))
                {
                    ret = MakeSimpleDirectTypeBinding(generator, type, cppdecl::Type::FromSingleWord(std::string(c_name)));
                    ret->bindable_with_same_address.declared_in_c_stdlib_file = header;
                    return true;
                }
                else
                {
                    return false;
                }
            };

            HandleType("stddef.h", "size_t") ||
            HandleType("stddef.h", "ptrdiff_t") ||
            HandleType("stdint.h", "int8_t") ||
            HandleType("stdint.h", "uint8_t") ||
            HandleType("stdint.h", "int16_t") ||
            HandleType("stdint.h", "uint16_t") ||
            HandleType("stdint.h", "int32_t") ||
            HandleType("stdint.h", "uint32_t") ||
            HandleType("stdint.h", "int64_t") ||
            HandleType("stdint.h", "uint64_t");

            return ret;
        }
    };
}
