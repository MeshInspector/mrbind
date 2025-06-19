#pragma once

#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Stores 4 objects: `const int`, `const float`, `int &`, `float &`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_tuple_const_int_const_float_int_ref_float_ref MR_C_std_tuple_const_int_const_float_int_ref_float_ref;

/// Destroys a heap-allocated instance of `MR_C_std_tuple_const_int_const_float_int_ref_float_ref`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_tuple_const_int_const_float_int_ref_float_ref_Destroy(MR_C_std_tuple_const_int_const_float_int_ref_float_ref *_this);

/// Destroys a heap-allocated array of `MR_C_std_tuple_const_int_const_float_int_ref_float_ref`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_tuple_const_int_const_float_int_ref_float_ref_DestroyArray(MR_C_std_tuple_const_int_const_float_int_ref_float_ref *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_tuple_const_int_const_float_int_ref_float_ref *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_OffsetPtr(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_tuple_const_int_const_float_int_ref_float_ref *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_OffsetMutablePtr(MR_C_std_tuple_const_int_const_float_int_ref_float_ref *ptr, ptrdiff_t i);

/// Constructs the tuple elementwise.
/// Parameter `_2` can not be null.
/// Parameter `_3` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_tuple_const_int_const_float_int_ref_float_ref_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_tuple_const_int_const_float_int_ref_float_ref *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_Construct(int _0, float _1, int *_2, float *_3);

/// The element 0, of type `const int`, read-only.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_Get_const_int(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref *_this);

/// The element 1, of type `const float`, read-only.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const float *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_Get_const_float(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref *_this);

/// The element 2, of type `int &`, read-only.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_Get_int_ref(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref *_this);

/// The element 3, of type `float &`, read-only.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API float *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_Get_float_ref(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref *_this);

#ifdef __cplusplus
} // extern "C"
#endif
