#pragma once

#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Stores 1 object: `int`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_tuple_int MR_C_std_tuple_int;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_tuple_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_tuple_int *MR_C_std_tuple_int_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_tuple_int_DestroyArray()`.
/// Use `MR_C_std_tuple_int_OffsetMutablePtr()` and `MR_C_std_tuple_int_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_tuple_int *MR_C_std_tuple_int_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_tuple_int_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_std_tuple_int *MR_C_std_tuple_int_ConstructFromAnother(const MR_C_std_tuple_int *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in this object.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API void MR_C_std_tuple_int_AssignFromAnother(MR_C_std_tuple_int *_this, const MR_C_std_tuple_int *other);

/// Destroys a heap-allocated instance of `MR_C_std_tuple_int`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_tuple_int_Destroy(const MR_C_std_tuple_int *_this);

/// Destroys a heap-allocated array of `MR_C_std_tuple_int`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_tuple_int_DestroyArray(const MR_C_std_tuple_int *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_tuple_int *MR_C_std_tuple_int_OffsetPtr(const MR_C_std_tuple_int *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_tuple_int *MR_C_std_tuple_int_OffsetMutablePtr(MR_C_std_tuple_int *ptr, ptrdiff_t i);

/// Constructs the tuple elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_tuple_int_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_std_tuple_int *MR_C_std_tuple_int_Construct(int _0);

/// The element 0, of type `int`, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_C_std_tuple_int_get_int(const MR_C_std_tuple_int *_this);

/// The element 0, of type `int`, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_C_std_tuple_int_get_int_mut(MR_C_std_tuple_int *_this);

#ifdef __cplusplus
} // extern "C"
#endif
