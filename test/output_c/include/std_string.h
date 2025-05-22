#pragma once

#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/// A heap-allocated string.
typedef struct MR_C_std_string MR_C_std_string;

typedef enum MR_C_std_string_PassBy
{
    MR_C_std_string_PassBy_DefaultConstruct, // Default-construct this parameter, the associated pointer must be null.
    MR_C_std_string_PassBy_Copy, // Copy the object into the function. That object is not modified, feel free to cast away the constness from it.
    MR_C_std_string_PassBy_Move, // Move the object into the function. You must still manually destroy your copy.
    MR_C_std_string_PassBy_DefaultArgument, // If this function has a default argument value for this parameter, uses that; illegal otherwise. The associated pointer must be null.
} MR_C_std_string_PassBy;

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_string *MR_C_std_string_DefaultConstruct(void);

/// Constructs a copy of another instance. The source remains alive.
/// Returns an instance allocated on the heap! Must call `MR_C_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_string *MR_C_std_string_ConstructFromAnother(MR_C_std_string_PassBy other_pass_by, MR_C_std_string *other);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null.
/// If `other_end` is null, then `other` is assumed to be null-terminated.
/// Returns an instance allocated on the heap! Must call `MR_C_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_string *MR_C_std_string_ConstructFrom(const char *other, const char *other_end);

/// Assigns the contents from another instance. Both objects remain alive after the call.
MR_C_API void MR_C_std_string_AssignFromAnother(MR_C_std_string *_this, MR_C_std_string_PassBy other_pass_by, MR_C_std_string *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `other` can not be null.
/// If `other_end` is null, then `other` is assumed to be null-terminated.
MR_C_API void MR_C_std_string_AssignFrom(MR_C_std_string *_this, const char *other, const char *other_end);

/// Destroys a heap-allocated instance of `std::string`.
MR_C_API void MR_C_std_string_Destroy(MR_C_std_string *_this);

/// The number of characters in the string, excluding the null-terminator.
MR_C_API size_t MR_C_std_string_Size(const MR_C_std_string *_this);

/// Returns the string contents, which are always null-terminated.
MR_C_API const char *MR_C_std_string_Data(const MR_C_std_string *_this);

/// Returns the string contents, which are always null-terminated. This version returns a non-const pointer.
MR_C_API const char *MR_C_std_string_MutableData(MR_C_std_string *_this);

/// Returns a pointer to the end of string, to its null-terminator.
MR_C_API const char *MR_C_std_string_DataEnd(const MR_C_std_string *_this);

/// Returns a pointer to the end of string, to its null-terminator. This version returns a non-const pointer.
MR_C_API char *MR_C_std_string_MutableDataEnd(MR_C_std_string *_this);

#ifdef __cplusplus
} // extern "C"
#endif
