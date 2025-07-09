#include "common.h"


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

