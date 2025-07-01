#pragma once

#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_optional_int MR_C_std_optional_int; // Defined below in this file.


/// Stores either a single `int` or nothing.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_optional_int MR_C_std_optional_int;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_optional_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_int *MR_C_std_optional_int_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_optional_int_DestroyArray()`.
/// Use `MR_C_std_optional_int_OffsetMutablePtr()` and `MR_C_std_optional_int_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_optional_int *MR_C_std_optional_int_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_optional_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_int *MR_C_std_optional_int_ConstructFromAnother(const MR_C_std_optional_int *other);

/// Constructs a new instance.
/// Parameter `other` is optional. To keep it empty, pass a null pointer.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_optional_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_int *MR_C_std_optional_int_ConstructFrom(const int *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
/// Parameter `other` can not be null.
MR_C_API void MR_C_std_optional_int_AssignFromAnother(MR_C_std_optional_int *_this, const MR_C_std_optional_int *other);

/// Assigns the contents.
/// Parameter `_this` can not be null.
/// Parameter `other` is optional. To keep it empty, pass a null pointer.
MR_C_API void MR_C_std_optional_int_AssignFrom(MR_C_std_optional_int *_this, const int *other);

/// Destroys a heap-allocated instance of `MR_C_std_optional_int`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_optional_int_Destroy(MR_C_std_optional_int *_this);

/// Destroys a heap-allocated array of `MR_C_std_optional_int`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_optional_int_DestroyArray(MR_C_std_optional_int *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_optional_int *MR_C_std_optional_int_OffsetPtr(const MR_C_std_optional_int *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_optional_int *MR_C_std_optional_int_OffsetMutablePtr(MR_C_std_optional_int *ptr, ptrdiff_t i);

/// The stored element or null if none, read-only.
/// Parameter `_this` can not be null.
MR_C_API const int *MR_C_std_optional_int_Value(const MR_C_std_optional_int *_this);

/// The stored element or null if none, mutable.
/// Parameter `_this` can not be null.
MR_C_API int *MR_C_std_optional_int_MutableValue(MR_C_std_optional_int *_this);

#ifdef __cplusplus
} // extern "C"
#endif
