#pragma once

#include <common.h>
#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_shared_ptr_void MR_C_std_shared_ptr_void; // Defined in `#include <std_shared_ptr_void.h>`.


/// Wraps a pointer to a single shared reference-counted heap-allocated `const void`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_shared_ptr_const_void MR_C_std_shared_ptr_const_void;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_const_void_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_const_void *MR_C_std_shared_ptr_const_void_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_shared_ptr_const_void_DestroyArray()`.
/// Use `MR_C_std_shared_ptr_const_void_OffsetMutablePtr()` and `MR_C_std_shared_ptr_const_void_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_shared_ptr_const_void *MR_C_std_shared_ptr_const_void_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// The reference to the parameter `other` might be preserved in the return value.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_const_void_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_const_void *MR_C_std_shared_ptr_const_void_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_const_void *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in the parameter `_this`.
/// After this function is called, the parameter `_this` will drop any object references it had previously.
MR_C_API void MR_C_std_shared_ptr_const_void_AssignFromAnother(MR_C_std_shared_ptr_const_void *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_const_void *other);

/// Destroys a heap-allocated instance of `MR_C_std_shared_ptr_const_void`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_shared_ptr_const_void_Destroy(const MR_C_std_shared_ptr_const_void *_this);

/// Destroys a heap-allocated array of `MR_C_std_shared_ptr_const_void`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_shared_ptr_const_void_DestroyArray(const MR_C_std_shared_ptr_const_void *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_shared_ptr_const_void *MR_C_std_shared_ptr_const_void_OffsetPtr(const MR_C_std_shared_ptr_const_void *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_shared_ptr_const_void *MR_C_std_shared_ptr_const_void_OffsetMutablePtr(MR_C_std_shared_ptr_const_void *ptr, ptrdiff_t i);

/// Returns the stored pointer, possibly null.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `_this` might be preserved in the return value.
MR_C_API const void *MR_C_std_shared_ptr_const_void_Get(const MR_C_std_shared_ptr_const_void *_this);

/// How many shared pointers share the managed object. Zero if no object is being managed.
/// This being zero usually conincides with `MR_C_std_shared_ptr_const_void_Get()` returning null, but is ultimately orthogonal.
/// Note that in multithreaded environments, the only safe way to use this number is comparing it with zero. Positive values might change by the time you get to use them.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_std_shared_ptr_const_void_UseCount(const MR_C_std_shared_ptr_const_void *_this);

/// Create a new instance, storing a non-owning pointer.
/// The reference to the parameter `ptr` might be preserved in the return value.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_const_void_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_const_void *MR_C_std_shared_ptr_const_void_ConstructNonOwning(const void *ptr);

/// Overwrite the existing instance with a non-owning pointer. The previously owned object, if any, has its reference count decremented.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `ptr` might be preserved in the parameter `_this`.
/// After this function is called, the parameter `_this` will drop any object references it had previously.
MR_C_API void MR_C_std_shared_ptr_const_void_AssignNonOwning(MR_C_std_shared_ptr_const_void *_this, const void *ptr);

/// Create a new instance from a non-const pointer to the same type.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_const_void_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_const_void *MR_C_std_shared_ptr_const_void_ConstructFromMutable(MR_C_PassBy ptr_pass_by, MR_C_std_shared_ptr_void *ptr);

/// Overwrite the existing instance with a non-const pointer to the same type.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_shared_ptr_const_void_AssignFromMutable(MR_C_std_shared_ptr_const_void *_this, MR_C_PassBy ptr_pass_by, MR_C_std_shared_ptr_void *ptr);

/// The aliasing constructor. Create a new instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
/// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
/// The reference to the parameter `ptr` might be preserved in the return value.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_const_void_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_const_void *MR_C_std_shared_ptr_const_void_ConstructAliasing(MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, const void *ptr);

/// The aliasing assignment. Overwrite an existing instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
/// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `ptr` might be preserved in the parameter `_this`.
/// After this function is called, the parameter `_this` will drop any object references it had previously.
MR_C_API void MR_C_std_shared_ptr_const_void_AssignAliasing(MR_C_std_shared_ptr_const_void *_this, MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, const void *ptr);

#ifdef __cplusplus
} // extern "C"
#endif
