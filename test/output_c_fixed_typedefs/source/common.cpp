#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "common.h"

#include <cstddef>


void *MR_C_Alloc(size_t num_bytes)
{
    return operator new(
        num_bytes
    );
}

void MR_C_Free(void *ptr)
{
    operator delete(
        ptr
    );
}

void *MR_C_AllocArray(size_t num_bytes)
{
    return operator new[](
        num_bytes
    );
}

void MR_C_FreeArray(void *ptr)
{
    operator delete[](
        ptr
    );
}

