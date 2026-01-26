#pragma once

#include <string_view>
#include <string>

namespace mrbind::detail::Json
{
    template <typename T>
    struct NameInVariant {static constexpr std::string_view value = T::name_in_variant;};
    template <>
    struct NameInVariant<std::string> {static constexpr std::string_view value = "string";};
}
