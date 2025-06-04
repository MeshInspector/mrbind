#pragma once

#include <exports.h>
#include <pass_by.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// A heap-allocated string.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, `MR_C_PassBy_DefaultArgument` (if supported by the callee).
typedef struct MR_C_std_string MR_C_std_string;

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_string *MR_C_std_string_DefaultConstruct(void);

/// Constructs a copy of another instance. The source remains alive.
/// Returns an instance allocated on the heap! Must call `MR_C_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_string *MR_C_std_string_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_string *other);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null.
/// If `other_end` is null, then `other` is assumed to be null-terminated.
/// Returns an instance allocated on the heap! Must call `MR_C_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_string *MR_C_std_string_ConstructFrom(const char *other, const char *other_end);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_string_AssignFromAnother(MR_C_std_string *_this, MR_C_PassBy other_pass_by, MR_C_std_string *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
/// Parameter `other` can not be null.
/// If `other_end` is null, then `other` is assumed to be null-terminated.
MR_C_API void MR_C_std_string_AssignFrom(MR_C_std_string *_this, const char *other, const char *other_end);

/// Destroys a heap-allocated instance of `std::string`.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_string_Destroy(MR_C_std_string *_this);

/// The number of characters in the string, excluding the null-terminator.
/// Parameter `_this` can not be null.
MR_C_API size_t MR_C_std_string_Size(const MR_C_std_string *_this);

/// Returns the string contents, which are always null-terminated.
/// Parameter `_this` can not be null.
MR_C_API const char *MR_C_std_string_Data(const MR_C_std_string *_this);

/// Returns the string contents, which are always null-terminated. This version returns a non-const pointer.
/// Parameter `_this` can not be null.
MR_C_API const char *MR_C_std_string_MutableData(MR_C_std_string *_this);

/// Returns a pointer to the end of string, to its null-terminator.
/// Parameter `_this` can not be null.
MR_C_API const char *MR_C_std_string_DataEnd(const MR_C_std_string *_this);

/// Returns a pointer to the end of string, to its null-terminator. This version returns a non-const pointer.
/// Parameter `_this` can not be null.
MR_C_API char *MR_C_std_string_MutableDataEnd(MR_C_std_string *_this);

#ifdef __cplusplus
} // extern "C"
#endif
