#pragma once

#include <exports.h>
#include <pass_by.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Stores two objects: `const int &&` and `const int &&`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Move`, `MR_C_PassBy_DefaultArgument` (if supported by the callee).
typedef struct MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref;

/// Constructs a copy of another instance. The source remains alive.
/// Returns an instance allocated on the heap! Must call `MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref *MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref *other);

/// Destroys a heap-allocated instance of `MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref`.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Destroy(MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref *_this);

/// Constructs the pair elementwise.
/// Parameter `first` can not be null.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `second` can not be null.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Returns an instance allocated on the heap! Must call `MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref *MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Construct(const int *first, const float *second);

/// The first of the two elements, read-only.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ this returns an rvalue reference.
MR_C_API const int *MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_First(const MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref *_this);

/// The second of the two elements, read-only.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ this returns an rvalue reference.
MR_C_API const float *MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Second(const MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref *_this);

#ifdef __cplusplus
} // extern "C"
#endif
