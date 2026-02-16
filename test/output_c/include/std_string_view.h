#pragma once

#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// A non-owning string view. Not necessarily null-terminated.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_string_view MR_C_std_string_view;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_string_view_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_string_view *MR_C_std_string_view_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_string_view_DestroyArray()`.
/// Use `MR_C_std_string_view_OffsetMutablePtr()` and `MR_C_std_string_view_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_string_view *MR_C_std_string_view_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_string_view_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_std_string_view *MR_C_std_string_view_ConstructFromAnother(const MR_C_std_string_view *other);

/// Constructs a new instance.
/// Parameter `other` can not be null.
/// If `other_end` is null, then `other` is assumed to be null-terminated.
/// The reference to the parameter `other` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_string_view_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_std_string_view *MR_C_std_string_view_ConstructFrom(const char *other, const char *other_end);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in this object.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API void MR_C_std_string_view_AssignFromAnother(MR_C_std_string_view *_this, const MR_C_std_string_view *other);

/// Assigns the contents.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null.
/// If `other_end` is null, then `other` is assumed to be null-terminated.
/// The reference to the parameter `other` might be preserved in this object.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API void MR_C_std_string_view_AssignFrom(MR_C_std_string_view *_this, const char *other, const char *other_end);

/// Destroys a heap-allocated instance of `MR_C_std_string_view`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_string_view_Destroy(const MR_C_std_string_view *_this);

/// Destroys a heap-allocated array of `MR_C_std_string_view`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_string_view_DestroyArray(const MR_C_std_string_view *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_string_view *MR_C_std_string_view_OffsetPtr(const MR_C_std_string_view *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_string_view *MR_C_std_string_view_OffsetMutablePtr(MR_C_std_string_view *ptr, ptrdiff_t i);

/// The number of characters in the string.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API size_t MR_C_std_string_view_size(const MR_C_std_string_view *_this);

/// Returns the string contents, NOT necessarily null-terminated.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to this object might be preserved as the return value.
MR_C_API const char *MR_C_std_string_view_data(const MR_C_std_string_view *_this);

/// Returns a pointer to the end of string. Not dereferencable.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to this object might be preserved as the return value.
MR_C_API const char *MR_C_std_string_view_data_end(const MR_C_std_string_view *_this);

#ifdef __cplusplus
} // extern "C"
#endif
