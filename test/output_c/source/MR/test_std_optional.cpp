#include "MR/test_std_optional.h"

#include <input/MR/test_std_optional.h>

#include <stdexcept>


MR_C_std_optional_int *MR_StdOptional_GetInt(void)
{
    using namespace MR;
    using namespace StdOptional;
    return (MR_C_std_optional_int *)new std::optional<int>(MR::StdOptional::GetInt());
}

void MR_StdOptional_SetInt(const MR_C_std_optional_int *_1)
{
    using namespace MR;
    using namespace StdOptional;
    MR::StdOptional::SetInt(
        (_1 ? std::optional<int>(*(std::optional<int> *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

