#ifndef MR_C_DETAIL_INCLUDED_STD_FILESYSTEM_PATH_H
#define MR_C_DETAIL_INCLUDED_STD_FILESYSTEM_PATH_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <common.h>
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_string MR_C_std_string; // Defined in `#include <std_string.h>`.


// Stores a filesystem path.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_filesystem_path MR_C_std_filesystem_path;

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_filesystem_path_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_filesystem_path *MR_C_std_filesystem_path_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_C_std_filesystem_path_DestroyArray()`.
// Use `MR_C_std_filesystem_path_OffsetMutablePtr()` and `MR_C_std_filesystem_path_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_filesystem_path *MR_C_std_filesystem_path_DefaultConstructArray(size_t num_elems);

// Constructs a copy of another instance. The source remains alive.
// The reference to the parameter `other` might be preserved in the return value.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_filesystem_path_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_filesystem_path *MR_C_std_filesystem_path_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_filesystem_path *other);

// Constructs a new instance.
// Parameter `other` is a UTF-8 encoded filesystem path.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_filesystem_path_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_filesystem_path *MR_C_std_filesystem_path_ConstructFrom(const char *other, const char *other_end);

// Assigns the contents from another instance. Both objects remain alive after the call.
// Parameter `_this` can not be null. It is a single object.
// The reference to the parameter `other` might be preserved in the parameter `_this`.
// When this function is called, the parameter `_this` will drop any object references it had previously.
MR_C_API void MR_C_std_filesystem_path_AssignFromAnother(MR_C_std_filesystem_path *_this, MR_C_PassBy other_pass_by, MR_C_std_filesystem_path *other);

// Assigns the contents.
// Parameter `_this` can not be null. It is a single object.
// Parameter `other` is a UTF-8 encoded filesystem path.
MR_C_API void MR_C_std_filesystem_path_AssignFrom(MR_C_std_filesystem_path *_this, const char *other, const char *other_end);

// Destroys a heap-allocated instance of `MR_C_std_filesystem_path`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_filesystem_path_Destroy(const MR_C_std_filesystem_path *_this);

// Destroys a heap-allocated array of `MR_C_std_filesystem_path`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_filesystem_path_DestroyArray(const MR_C_std_filesystem_path *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_filesystem_path *MR_C_std_filesystem_path_OffsetPtr(const MR_C_std_filesystem_path *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_filesystem_path *MR_C_std_filesystem_path_OffsetMutablePtr(MR_C_std_filesystem_path *ptr, ptrdiff_t i);

// Get the contents as a UTF8-encoded string.
// Parameter `_this` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_string *MR_C_std_filesystem_path_GetString(const MR_C_std_filesystem_path *_this);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_STD_FILESYSTEM_PATH_H

#if !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_STD_FILESYSTEM_PATH_H_2)
#define MR_C_DETAIL_INCLUDED_STD_FILESYSTEM_PATH_H_2

// Convenience includes for types mentioned in this header. They are here at the bottom to make circular includes harmless.

#include <std_string.h>

#endif // !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_STD_FILESYSTEM_PATH_H_2)
