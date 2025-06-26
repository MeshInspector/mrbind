#pragma once

#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Stores 0 objects.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_tuple MR_C_std_tuple;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_tuple_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_tuple *MR_C_std_tuple_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_tuple_DestroyArray()`.
/// Use `MR_C_std_tuple_OffsetMutablePtr()` and `MR_C_std_tuple_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_tuple *MR_C_std_tuple_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_tuple_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_tuple *MR_C_std_tuple_ConstructFromAnother(const MR_C_std_tuple *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
/// Parameter `other` can not be null.
MR_C_API void MR_C_std_tuple_AssignFromAnother(MR_C_std_tuple *_this, const MR_C_std_tuple *other);

/// Destroys a heap-allocated instance of `MR_C_std_tuple`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_tuple_Destroy(MR_C_std_tuple *_this);

/// Destroys a heap-allocated array of `MR_C_std_tuple`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_tuple_DestroyArray(MR_C_std_tuple *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_tuple *MR_C_std_tuple_OffsetPtr(const MR_C_std_tuple *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_tuple *MR_C_std_tuple_OffsetMutablePtr(MR_C_std_tuple *ptr, ptrdiff_t i);

#ifdef __cplusplus
} // extern "C"
#endif
