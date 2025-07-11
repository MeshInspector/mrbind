#include "MR/test_arrays_of_incomplete_types.h"

#include <input/MR/test_arrays_of_incomplete_types.h>
#include <input/MR/test_arrays_of_incomplete_types_2.h>


void MR_IncompleteArrayElemType_foo(MR_IncompleteArrayElemType_A (*_1)[4])
{
    ::MR::IncompleteArrayElemType::foo(
        ((MR::IncompleteArrayElemType::A (*)[4])_1)
    );
}

