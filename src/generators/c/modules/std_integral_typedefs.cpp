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

            auto HandleType = [&](std::string_view c_header, std::string_view cpp_header, std::string_view c_name, bool could_need_custom_typedef = false) -> bool
            {
                if (type_str == c_name || (type_str.starts_with("std::") && std::string_view(type_str).substr(5) == c_name))
                {
                    bool need_custom_typedef = could_need_custom_typedef && generator.custom_typedef_for_uint64_t_pointing_to_size_t;

                    ret = MakeSimpleDirectTypeBinding(generator, type, cppdecl::Type::FromSingleWord(need_custom_typedef ? generator.MakePublicHelperName(c_name) : std::string(c_name)));
                    if (need_custom_typedef)
                        ret->bindable_with_same_address.declared_in_file = [&generator]() -> auto & {return generator.GetCommonPublicHelpersFile();};
                    else
                        ret->bindable_with_same_address.declared_in_c_stdlib_file = c_header;
                    ret->bindable_with_same_address.needs_reinterpret_cast = false;

                    ret->cpp_decl_location.cpp_stdlib_headers.insert(std::string(cpp_header));
                    return true;
                }
                else
                {
                    return false;
                }
            };

            HandleType("stddef.h", "cstddef", "size_t") ||
            HandleType("stddef.h", "cstddef", "ptrdiff_t") ||
            HandleType("stdint.h", "cstdint", "int8_t") ||
            HandleType("stdint.h", "cstdint", "uint8_t") ||
            HandleType("stdint.h", "cstdint", "int16_t") ||
            HandleType("stdint.h", "cstdint", "uint16_t") ||
            HandleType("stdint.h", "cstdint", "int32_t") ||
            HandleType("stdint.h", "cstdint", "uint32_t") ||
            HandleType("stdint.h", "cstdint", "int64_t", true) ||
            HandleType("stdint.h", "cstdint", "uint64_t", true);

            return ret;
        }
    };
}
