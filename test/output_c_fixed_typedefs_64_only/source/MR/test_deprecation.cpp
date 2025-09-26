#define MR_C_BUILD_LIBRARY
#include "MR/test_deprecation.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_deprecation.h>


void MR_Deprecation_foo(void)
{
    MRBINDC_IGNORE_DEPRECATION(
    ::MR::Deprecation::foo();
    ) // MRBINDC_IGNORE_DEPRECATION
}

void MR_Deprecation_bar(void)
{
    MRBINDC_IGNORE_DEPRECATION(
    ::MR::Deprecation::bar();
    ) // MRBINDC_IGNORE_DEPRECATION
}

