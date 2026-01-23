#pragma once

#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Stores two objects: `const int` and `const int`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_pair_const_int_float MR_C_std_pair_const_int_float;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_pair_const_int_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_pair_const_int_float *MR_C_std_pair_const_int_float_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_pair_const_int_float_DestroyArray()`.
/// Use `MR_C_std_pair_const_int_float_OffsetMutablePtr()` and `MR_C_std_pair_const_int_float_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_pair_const_int_float *MR_C_std_pair_const_int_float_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_pair_const_int_float_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_std_pair_const_int_float *MR_C_std_pair_const_int_float_ConstructFromAnother(const MR_C_std_pair_const_int_float *other);

/// Destroys a heap-allocated instance of `MR_C_std_pair_const_int_float`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_pair_const_int_float_Destroy(const MR_C_std_pair_const_int_float *_this);

/// Destroys a heap-allocated array of `MR_C_std_pair_const_int_float`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_pair_const_int_float_DestroyArray(const MR_C_std_pair_const_int_float *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_pair_const_int_float *MR_C_std_pair_const_int_float_OffsetPtr(const MR_C_std_pair_const_int_float *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_pair_const_int_float *MR_C_std_pair_const_int_float_OffsetMutablePtr(MR_C_std_pair_const_int_float *ptr, ptrdiff_t i);

/// Constructs the pair elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_pair_const_int_float_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_std_pair_const_int_float *MR_C_std_pair_const_int_float_Construct(int first, float second);

/// The first of the two elements, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_C_std_pair_const_int_float_First(const MR_C_std_pair_const_int_float *_this);

/// The second of the two elements, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const float *MR_C_std_pair_const_int_float_Second(const MR_C_std_pair_const_int_float *_this);

/// The second of the two elements, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API float *MR_C_std_pair_const_int_float_MutableSecond(MR_C_std_pair_const_int_float *_this);

#ifdef __cplusplus
} // extern "C"
#endif
