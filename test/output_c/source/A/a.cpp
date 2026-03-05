#define MR_C_BUILD_LIBRARY
#include "A/a.h"

#include <__mrbind_c_details.h>
#include <input/A/a.h>


void MR_separate_file_a(void)
{
    MRBINDC_TRY(
    ::MR::separate_file_a();
    ) // MRBINDC_TRY
}

