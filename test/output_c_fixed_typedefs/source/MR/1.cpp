#define MR_C_BUILD_LIBRARY
#include "MR/1.h"

#include <input/MR/1.h>


void MR_foo(void)
{
    ::MR::foo<int32_t, 0>();
}

