#pragma once

#include "../AB_base/ab_base.h"

#include <vector>

namespace MR
{
    struct SeparateA : CommonBaseAB {};

    inline std::vector<SeparateA> GetSeparateVecA() {return {};}
}
