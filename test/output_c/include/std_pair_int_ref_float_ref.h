#pragma once

#include <exports.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Stores two objects: `int &` and `int &`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_pair_int_ref_float_ref MR_C_std_pair_int_ref_float_ref;

/// Destroys a heap-allocated instance of `MR_C_std_pair_int_ref_float_ref`.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_pair_int_ref_float_ref_Destroy(MR_C_std_pair_int_ref_float_ref *_this);

/// Constructs the pair elementwise.
/// Parameter `first` can not be null.
/// Parameter `second` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_pair_int_ref_float_ref_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_pair_int_ref_float_ref *MR_C_std_pair_int_ref_float_ref_Construct(int *first, float *second);

/// The first of the two elements, read-only.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_C_std_pair_int_ref_float_ref_First(const MR_C_std_pair_int_ref_float_ref *_this);

/// The second of the two elements, read-only.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API float *MR_C_std_pair_int_ref_float_ref_Second(const MR_C_std_pair_int_ref_float_ref *_this);

#ifdef __cplusplus
} // extern "C"
#endif
