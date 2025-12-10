#pragma once

#include <common.h>
#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_string MR_C_std_string; // Defined in `#include <std_string.h>`.


/// Stores either a single `std::string` or nothing.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_optional_std_string MR_C_std_optional_std_string;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_optional_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_std_string *MR_C_std_optional_std_string_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_optional_std_string_DestroyArray()`.
/// Use `MR_C_std_optional_std_string_OffsetMutablePtr()` and `MR_C_std_optional_std_string_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_optional_std_string *MR_C_std_optional_std_string_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_optional_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_std_string *MR_C_std_optional_std_string_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_optional_std_string *other);

/// Constructs a new instance.
/// If `other_end` is null, then `other` is assumed to be null-terminated.
/// Non-null `other_end` requires a non-null `other`.
/// Parameter `other` is optional. To keep it empty, pass a null pointer to both it and `other_end`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_optional_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_std_string *MR_C_std_optional_std_string_ConstructFrom(const char *other, const char *other_end);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_optional_std_string_AssignFromAnother(MR_C_std_optional_std_string *_this, MR_C_PassBy other_pass_by, MR_C_std_optional_std_string *other);

/// Assigns the contents.
/// Parameter `_this` can not be null. It is a single object.
/// If `other_end` is null, then `other` is assumed to be null-terminated.
/// Non-null `other_end` requires a non-null `other`.
/// Parameter `other` is optional. To keep it empty, pass a null pointer to both it and `other_end`.
MR_C_API void MR_C_std_optional_std_string_AssignFrom(MR_C_std_optional_std_string *_this, const char *other, const char *other_end);

/// Destroys a heap-allocated instance of `MR_C_std_optional_std_string`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_optional_std_string_Destroy(const MR_C_std_optional_std_string *_this);

/// Destroys a heap-allocated array of `MR_C_std_optional_std_string`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_optional_std_string_DestroyArray(const MR_C_std_optional_std_string *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_optional_std_string *MR_C_std_optional_std_string_OffsetPtr(const MR_C_std_optional_std_string *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_optional_std_string *MR_C_std_optional_std_string_OffsetMutablePtr(MR_C_std_optional_std_string *ptr, ptrdiff_t i);

/// The stored element or null if none, read-only.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API const MR_C_std_string *MR_C_std_optional_std_string_Value(const MR_C_std_optional_std_string *_this);

/// The stored element or null if none, mutable.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_C_std_string *MR_C_std_optional_std_string_MutableValue(MR_C_std_optional_std_string *_this);

#ifdef __cplusplus
} // extern "C"
#endif
