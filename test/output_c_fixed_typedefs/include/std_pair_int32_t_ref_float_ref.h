#pragma once

#include <exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


// Stores two objects: `int32_t &` and `int32_t &`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_pair_int32_t_ref_float_ref MR_C_std_pair_int32_t_ref_float_ref;

// Destroys a heap-allocated instance of `MR_C_std_pair_int32_t_ref_float_ref`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_pair_int32_t_ref_float_ref_Destroy(const MR_C_std_pair_int32_t_ref_float_ref *_this);

// Destroys a heap-allocated array of `MR_C_std_pair_int32_t_ref_float_ref`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_pair_int32_t_ref_float_ref_DestroyArray(const MR_C_std_pair_int32_t_ref_float_ref *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_pair_int32_t_ref_float_ref *MR_C_std_pair_int32_t_ref_float_ref_OffsetPtr(const MR_C_std_pair_int32_t_ref_float_ref *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_pair_int32_t_ref_float_ref *MR_C_std_pair_int32_t_ref_float_ref_OffsetMutablePtr(MR_C_std_pair_int32_t_ref_float_ref *ptr, ptrdiff_t i);

// Constructs the pair elementwise.
// Parameter `first` can not be null. It is a single object.
// Parameter `second` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_pair_int32_t_ref_float_ref_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_pair_int32_t_ref_float_ref *MR_C_std_pair_int32_t_ref_float_ref_Construct(int32_t *first, float *second);

// The first of the two elements, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int32_t *MR_C_std_pair_int32_t_ref_float_ref_First(const MR_C_std_pair_int32_t_ref_float_ref *_this);

// The second of the two elements, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API float *MR_C_std_pair_int32_t_ref_float_ref_Second(const MR_C_std_pair_int32_t_ref_float_ref *_this);

#ifdef __cplusplus
} // extern "C"
#endif
