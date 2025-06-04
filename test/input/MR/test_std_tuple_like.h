#pragma once

#include <utility>

namespace MR::StdTupleLike
{
    inline void SetPair(std::pair<int, float>) {}
    inline std::pair<int, float> GetPair() {return {};}
}
