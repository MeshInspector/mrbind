#pragma once

#include <exports.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Stores two objects: `int` and `int`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_pair_int_float MR_C_std_pair_int_float;

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_std_pair_int_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_pair_int_float *MR_C_std_pair_int_float_DefaultConstruct(void);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_pair_int_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_pair_int_float *MR_C_std_pair_int_float_ConstructFromAnother(const MR_C_std_pair_int_float *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
/// Parameter `other` can not be null.
MR_C_API void MR_C_std_pair_int_float_AssignFromAnother(MR_C_std_pair_int_float *_this, const MR_C_std_pair_int_float *other);

/// Destroys a heap-allocated instance of `MR_C_std_pair_int_float`.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_pair_int_float_Destroy(MR_C_std_pair_int_float *_this);

/// Constructs the pair elementwise.
/// Returns an instance allocated on the heap! Must call `MR_C_std_pair_int_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_pair_int_float *MR_C_std_pair_int_float_Construct(int first, float second);

/// The first of the two elements, read-only.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_C_std_pair_int_float_First(const MR_C_std_pair_int_float *_this);

/// The first of the two elements, mutable.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_C_std_pair_int_float_MutableFirst(MR_C_std_pair_int_float *_this);

/// The second of the two elements, read-only.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const float *MR_C_std_pair_int_float_Second(const MR_C_std_pair_int_float *_this);

/// The second of the two elements, mutable.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API float *MR_C_std_pair_int_float_MutableSecond(MR_C_std_pair_int_float *_this);

#ifdef __cplusplus
} // extern "C"
#endif
