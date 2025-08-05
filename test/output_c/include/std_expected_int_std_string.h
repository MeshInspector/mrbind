#pragma once

#include <common.h>
#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_string MR_C_std_string; // Defined in `#include <std_string.h>`.


/// Stores either a `int` that represents successor a `std::string` that represents an error.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_expected_int_std_string MR_C_std_expected_int_std_string;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_expected_int_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_expected_int_std_string *MR_C_std_expected_int_std_string_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_expected_int_std_string_DestroyArray()`.
/// Use `MR_C_std_expected_int_std_string_OffsetMutablePtr()` and `MR_C_std_expected_int_std_string_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_expected_int_std_string *MR_C_std_expected_int_std_string_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_expected_int_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_expected_int_std_string *MR_C_std_expected_int_std_string_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_expected_int_std_string *other);

/// Constructs a new instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_expected_int_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_expected_int_std_string *MR_C_std_expected_int_std_string_ConstructFrom(MR_C_PassBy other_pass_by, MR_C_std_expected_int_std_string *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_expected_int_std_string_AssignFromAnother(MR_C_std_expected_int_std_string *_this, MR_C_PassBy other_pass_by, MR_C_std_expected_int_std_string *other);

/// Assigns the contents.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_expected_int_std_string_AssignFrom(MR_C_std_expected_int_std_string *_this, MR_C_PassBy other_pass_by, MR_C_std_expected_int_std_string *other);

/// Destroys a heap-allocated instance of `MR_C_std_expected_int_std_string`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_expected_int_std_string_Destroy(const MR_C_std_expected_int_std_string *_this);

/// Destroys a heap-allocated array of `MR_C_std_expected_int_std_string`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_expected_int_std_string_DestroyArray(const MR_C_std_expected_int_std_string *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_expected_int_std_string *MR_C_std_expected_int_std_string_OffsetPtr(const MR_C_std_expected_int_std_string *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_expected_int_std_string *MR_C_std_expected_int_std_string_OffsetMutablePtr(MR_C_std_expected_int_std_string *ptr, ptrdiff_t i);

/// If this instance represents success, returns the stored `int`. Otherwise null.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API const int *MR_C_std_expected_int_std_string_GetValue(const MR_C_std_expected_int_std_string *_this);

/// If this instance represents an error, returns the stored `std::string`. Otherwise null.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API const MR_C_std_string *MR_C_std_expected_int_std_string_GetError(const MR_C_std_expected_int_std_string *_this);

/// If this instance represents success, returns the stored `int`. Otherwise null. This version returns a mutable pointer.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int *MR_C_std_expected_int_std_string_GetMutableValue(MR_C_std_expected_int_std_string *_this);

/// If this instance represents an error, returns the stored `std::string`. Otherwise null. This version returns a mutable pointer.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_C_std_string *MR_C_std_expected_int_std_string_GetMutableError(MR_C_std_expected_int_std_string *_this);

#ifdef __cplusplus
} // extern "C"
#endif
