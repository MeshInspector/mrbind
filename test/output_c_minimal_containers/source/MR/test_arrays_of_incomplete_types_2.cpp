#define MR_C_BUILD_LIBRARY
#include "MR/test_arrays_of_incomplete_types_2.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_arrays_of_incomplete_types_2.h>


void MR_IncompleteArrayElemType_bar(MR_IncompleteArrayElemType_E (*_1)[4])
{
    MRBINDC_TRY(
    ::MR::IncompleteArrayElemType::bar(
        ((MR::IncompleteArrayElemType::E (*)[4])_1)
    );
    ) // MRBINDC_TRY
}

