#pragma once

#include <vector>

namespace MR
{
    // A sub-library that nothing else uses. `make_csharp.sh` skips it in one of the C# variants (`--skip-split-lib`).
    struct SeparateABC {};

    inline std::vector<SeparateABC> GetSeparateVecABC() {return {};}
}
