#pragma once

#include <exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Stores either nothing (which represents success)or a `float` that represents an error.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_expected_void_float MR_C_std_expected_void_float;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_expected_void_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_expected_void_float *MR_C_std_expected_void_float_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_expected_void_float_DestroyArray()`.
/// Use `MR_C_std_expected_void_float_OffsetMutablePtr()` and `MR_C_std_expected_void_float_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_expected_void_float *MR_C_std_expected_void_float_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_expected_void_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_expected_void_float *MR_C_std_expected_void_float_ConstructFromAnother(const MR_C_std_expected_void_float *other);

/// Constructs a new instance.
/// Parameter `other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_expected_void_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_expected_void_float *MR_C_std_expected_void_float_ConstructFrom(const MR_C_std_expected_void_float *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
/// Parameter `other` can not be null.
MR_C_API void MR_C_std_expected_void_float_AssignFromAnother(MR_C_std_expected_void_float *_this, const MR_C_std_expected_void_float *other);

/// Assigns the contents.
/// Parameter `_this` can not be null.
/// Parameter `other` can not be null.
MR_C_API void MR_C_std_expected_void_float_AssignFrom(MR_C_std_expected_void_float *_this, const MR_C_std_expected_void_float *other);

/// Destroys a heap-allocated instance of `MR_C_std_expected_void_float`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_expected_void_float_Destroy(const MR_C_std_expected_void_float *_this);

/// Destroys a heap-allocated array of `MR_C_std_expected_void_float`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_expected_void_float_DestroyArray(const MR_C_std_expected_void_float *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_expected_void_float *MR_C_std_expected_void_float_OffsetPtr(const MR_C_std_expected_void_float *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_expected_void_float *MR_C_std_expected_void_float_OffsetMutablePtr(MR_C_std_expected_void_float *ptr, ptrdiff_t i);

/// Returns true if this instance stores nothing (which represents success).
/// Parameter `_this` can not be null.
MR_C_API bool MR_C_std_expected_void_float_GetValue(const MR_C_std_expected_void_float *_this);

/// If this instance represents an error, returns the stored `float`. Otherwise null.
/// Parameter `_this` can not be null.
MR_C_API const float *MR_C_std_expected_void_float_GetError(const MR_C_std_expected_void_float *_this);

/// If this instance represents an error, returns the stored `float`. Otherwise null. This version returns a mutable pointer.
/// Parameter `_this` can not be null.
MR_C_API float *MR_C_std_expected_void_float_GetMutableError(MR_C_std_expected_void_float *_this);

#ifdef __cplusplus
} // extern "C"
#endif
