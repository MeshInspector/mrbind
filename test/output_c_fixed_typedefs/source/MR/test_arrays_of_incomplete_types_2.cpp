#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "MR/test_arrays_of_incomplete_types_2.h"

#include <input/MR/test_arrays_of_incomplete_types_2.h>


void MR_IncompleteArrayElemType_bar(MR_IncompleteArrayElemType_E (*_1)[4])
{
    ::MR::IncompleteArrayElemType::bar(
        ((MR::IncompleteArrayElemType::E (*)[4])_1)
    );
}

