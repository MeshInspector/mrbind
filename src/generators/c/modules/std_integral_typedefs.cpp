#include "generators/c/binding_common.h"
#include "generators/c/module.h"

#include <string>
#include <vector>

namespace mrbind::CBindings::Modules
{
    // Handles various typedefs from `<stddef.h>` and `<stdint.h>`.
    // Since those shouldn't appear in canonical parsed type names, this is primarily to simplify writing custom bindings.
    struct StdIntegralTypedefs : DeriveModule<StdIntegralTypedefs>
    {
        struct TargetType
        {
            std::string name;
            std::string c_header;
            std::string cpp_header;
            bool could_need_custom_typedef = false;
        };
        std::vector<TargetType> target_types = {
            {.name = "size_t"   , .c_header = "stddef.h", .cpp_header = "cstddef"},
            {.name = "ptrdiff_t", .c_header = "stddef.h", .cpp_header = "cstddef"},
            {.name = "int8_t"   , .c_header = "stdint.h", .cpp_header = "cstdint"},
            {.name = "uint8_t"  , .c_header = "stdint.h", .cpp_header = "cstdint"},
            {.name = "int16_t"  , .c_header = "stdint.h", .cpp_header = "cstdint"},
            {.name = "uint16_t" , .c_header = "stdint.h", .cpp_header = "cstdint"},
            {.name = "int32_t"  , .c_header = "stdint.h", .cpp_header = "cstdint"},
            {.name = "uint32_t" , .c_header = "stdint.h", .cpp_header = "cstdint"},
            {.name = "int64_t"  , .c_header = "stdint.h", .cpp_header = "cstdint", .could_need_custom_typedef = true},
            {.name = "uint64_t" , .c_header = "stdint.h", .cpp_header = "cstdint", .could_need_custom_typedef = true},
        };

        std::optional<Generator::BindableType> GetBindableType(Generator &generator, const cppdecl::Type &type, const std::string &type_str) override
        {
            (void)type;

            std::optional<Generator::BindableType> ret;

            for (const TargetType &target_type : target_types)
            {
                if (
                    generator.custom_typedef_for_uint64_t_pointing_to_size_t && target_type.could_need_custom_typedef
                    ? type_str == generator.MakePublicHelperName(target_type.name)
                    : type_str == target_type.name || (type_str.starts_with("std::") && std::string_view(type_str).substr(5) == target_type.name)
                )
                {
                    bool need_custom_typedef = target_type.could_need_custom_typedef && generator.custom_typedef_for_uint64_t_pointing_to_size_t;

                    std::string c_name = need_custom_typedef ? generator.MakePublicHelperName(target_type.name) : target_type.name;

                    ret = MakeSimpleDirectTypeBinding(generator, type, cppdecl::Type::FromSingleWord(c_name));
                    if (need_custom_typedef)
                        ret->bindable_with_same_address.declared_in_file = [&generator]() -> auto & {return *generator.GetCommonPublicHelpersFile();};
                    else
                        ret->bindable_with_same_address.declared_in_c_stdlib_file = target_type.c_header;
                    ret->bindable_with_same_address.custom_c_type_name = c_name;
                    ret->bindable_with_same_address.needs_reinterpret_cast = false;
                    break;
                }
            }

            return ret;
        }

        std::optional<std::string> GetCppIncludeForQualifiedName(Generator &generator, const cppdecl::QualifiedName &name) override
        {
            (void)generator;

            if (name.parts.size() != 1 && name.parts.size() != 2)
                return {};

            if (name.parts.size() == 2 && name.parts.front().AsSingleWord() != "std")
                return {};

            const std::string_view word = name.parts.back().AsSingleWord();
            if (word.empty())
                return {};

            for (const TargetType &target_type : target_types)
            {
                if (word == target_type.name)
                {
                    if (generator.custom_typedef_for_uint64_t_pointing_to_size_t && target_type.could_need_custom_typedef)
                    {
                        // Firstly, yes, we're still testing against the unadjusted name here. Apparently here it's always unadjusted.
                        // Secondly, yes, we intentionally include the C header in the C++ source file. Not sure how else we could do this.
                        return generator.GetCommonPublicHelpersFile()->header.path_for_inclusion;
                    }
                    else
                    {
                        return target_type.cpp_header;
                    }
                }
            }

            return {};
        }
    };
}
