#pragma once

#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Stores 2 objects: `int`, `float`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_tuple_int_float MR_C_std_tuple_int_float;

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_std_tuple_int_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_tuple_int_float *MR_C_std_tuple_int_float_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_tuple_int_float_DestroyArray()`.
/// Use `MR_C_std_tuple_int_float_OffsetMutablePtr()` and `MR_C_std_tuple_int_float_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_tuple_int_float *MR_C_std_tuple_int_float_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_tuple_int_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_tuple_int_float *MR_C_std_tuple_int_float_ConstructFromAnother(const MR_C_std_tuple_int_float *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
/// Parameter `other` can not be null.
MR_C_API void MR_C_std_tuple_int_float_AssignFromAnother(MR_C_std_tuple_int_float *_this, const MR_C_std_tuple_int_float *other);

/// Destroys a heap-allocated instance of `MR_C_std_tuple_int_float`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_tuple_int_float_Destroy(MR_C_std_tuple_int_float *_this);

/// Destroys a heap-allocated array of `MR_C_std_tuple_int_float`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_tuple_int_float_DestroyArray(MR_C_std_tuple_int_float *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array.
MR_C_API const MR_C_std_tuple_int_float *MR_C_std_tuple_int_float_OffsetPtr(const MR_C_std_tuple_int_float *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array.
MR_C_API MR_C_std_tuple_int_float *MR_C_std_tuple_int_float_OffsetMutablePtr(MR_C_std_tuple_int_float *ptr, ptrdiff_t i);

/// Constructs the tuple elementwise.
/// Returns an instance allocated on the heap! Must call `MR_C_std_tuple_int_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_tuple_int_float *MR_C_std_tuple_int_float_Construct(int _0, float _1);

/// The element 0, of type `int`, read-only.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_C_std_tuple_int_float_Get_int(const MR_C_std_tuple_int_float *_this);

/// The element 0, of type `int`, mutable.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_C_std_tuple_int_float_GetMutable_int(MR_C_std_tuple_int_float *_this);

/// The element 1, of type `float`, read-only.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const float *MR_C_std_tuple_int_float_Get_float(const MR_C_std_tuple_int_float *_this);

/// The element 1, of type `float`, mutable.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API float *MR_C_std_tuple_int_float_GetMutable_float(MR_C_std_tuple_int_float *_this);

#ifdef __cplusplus
} // extern "C"
#endif
