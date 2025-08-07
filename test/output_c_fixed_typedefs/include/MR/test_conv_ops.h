#pragma once

#include <exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


// Generated from class `MR::ConvOps::A`.
typedef struct MR_ConvOps_A MR_ConvOps_A;

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_ConvOps_A_Destroy()` to free it when you're done using it.
MR_C_API MR_ConvOps_A *MR_ConvOps_A_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_ConvOps_A_DestroyArray()`.
// Use `MR_ConvOps_A_OffsetMutablePtr()` and `MR_ConvOps_A_OffsetPtr()` to access the array elements.
MR_C_API MR_ConvOps_A *MR_ConvOps_A_DefaultConstructArray(size_t num_elems);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_ConvOps_A *MR_ConvOps_A_OffsetPtr(const MR_ConvOps_A *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_ConvOps_A *MR_ConvOps_A_OffsetMutablePtr(MR_ConvOps_A *ptr, ptrdiff_t i);

// Generated from a constructor of class `MR::ConvOps::A`.
// Parameter `_other` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_ConvOps_A_Destroy()` to free it when you're done using it.
MR_C_API MR_ConvOps_A *MR_ConvOps_A_ConstructFromAnother(const MR_ConvOps_A *_other);

// Destroys a heap-allocated instance of `MR_ConvOps_A`. Does nothing if the pointer is null.
MR_C_API void MR_ConvOps_A_Destroy(const MR_ConvOps_A *_this);

// Destroys a heap-allocated array of `MR_ConvOps_A`. Does nothing if the pointer is null.
MR_C_API void MR_ConvOps_A_DestroyArray(const MR_ConvOps_A *_this);

// Generated from a conversion operator of class `MR::ConvOps::A` to type `bool`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API bool MR_ConvOps_A_ConvertTo_bool(const MR_ConvOps_A *_this);

// Generated from a method of class `MR::ConvOps::A` named `operator=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_other` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_ConvOps_A *MR_ConvOps_A_AssignFromAnother(MR_ConvOps_A *_this, const MR_ConvOps_A *_other);

#ifdef __cplusplus
} // extern "C"
#endif
