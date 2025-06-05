#pragma once

#include <exports.h>
#include <pass_by.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Stores two objects: `const int` and `const int`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, `MR_C_PassBy_DefaultArgument` (if supported by the callee).
typedef struct MR_C_std_pair_const_int_float MR_C_std_pair_const_int_float;

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_std_pair_const_int_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_pair_const_int_float *MR_C_std_pair_const_int_float_DefaultConstruct(void);

/// Constructs a copy of another instance. The source remains alive.
/// Returns an instance allocated on the heap! Must call `MR_C_std_pair_const_int_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_pair_const_int_float *MR_C_std_pair_const_int_float_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_pair_const_int_float *other);

/// Destroys a heap-allocated instance of `MR_C_std_pair_const_int_float`.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_pair_const_int_float_Destroy(MR_C_std_pair_const_int_float *_this);

/// Constructs the pair elementwise.
/// Returns an instance allocated on the heap! Must call `MR_C_std_pair_const_int_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_pair_const_int_float *MR_C_std_pair_const_int_float_Construct(int first, float second);

/// The first of the two elements, read-only.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_C_std_pair_const_int_float_First(const MR_C_std_pair_const_int_float *_this);

/// The second of the two elements, read-only.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const float *MR_C_std_pair_const_int_float_Second(const MR_C_std_pair_const_int_float *_this);

/// The second of the two elements, mutable.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API float *MR_C_std_pair_const_int_float_MutableSecond(MR_C_std_pair_const_int_float *_this);

#ifdef __cplusplus
} // extern "C"
#endif
