#pragma once

#include <optional>

namespace MR::StdOptional
{
    inline std::optional<int> GetInt() {return {};}
    inline void SetInt(std::optional<int>) {}
}
