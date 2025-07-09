#pragma once

#include <exports.h>

#include <stddef.h>


typedef enum MR_C_PassBy
{
    MR_C_PassBy_DefaultConstruct, // Default-construct this parameter, the associated pointer must be null.
    MR_C_PassBy_Copy, // Copy the object into the function. For most types this doesn't modify the input object, so feel free to cast away constness from it if needed.
    MR_C_PassBy_Move, // Move the object into the function. The input object remains alive and still needs to be manually destroyed after.
    MR_C_PassBy_DefaultArgument, // If this function has a default argument value for this parameter, uses that; illegal otherwise. The associated pointer must be null.
    MR_C_PassBy_NoObject, // This is used to pass no object to the function (functions supporting this will document this fact). This is used e.g. for C++ `std::optional<T>` parameters.
} MR_C_PassBy;

/// Allocates `n` bytes of memory, which can then be freed using `MR_C_Free()`.
MR_C_API void *MR_C_Alloc(size_t num_bytes);

/// Deallocates memory that was previously allocated with `MR_C_Alloc()`. Does nothing if the pointer is null.
MR_C_API void MR_C_Free(void *ptr);

/// Allocates `n` bytes of memory, which can then be freed using `MR_C_FreeArray()`.
/// For all purposes this is equivalent to `MR_C_Alloc()` and `MR_C_Free()`, but the deallocation functions are not interchangable.
/// This is a bit weird, but we have to have separate deallocation functions for arrays and non-arrays, because ASAN complains otherwise.
/// So the allocation functions must be provided separately for both too.
MR_C_API void *MR_C_AllocArray(size_t num_bytes);

/// Deallocates memory that was previously allocated with `MR_C_AllocArray()`. Does nothing if the pointer is null.
MR_C_API void MR_C_FreeArray(void *ptr);

