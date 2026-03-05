#define MR_C_BUILD_LIBRARY
#include "B/a.h"

#include <__mrbind_c_details.h>
#include <input/B/a.h>


void MR_separate_file_b(void)
{
    MRBINDC_TRY(
    ::MR::separate_file_b();
    ) // MRBINDC_TRY
}

