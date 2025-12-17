#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "MR/test_includes_for_enum_constants.h"

#include <input/MR/test_includes_for_enum_constants.h>
#include <input/MR/test_includes_for_enum_constants_2.h>
#include <input/MR/test_includes_for_enum_constants_3.h>


MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *MR_IncludesForEnumConstants_foo(void)
{
    return (MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *)new MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>(::MR::IncludesForEnumConstants::foo());
}

