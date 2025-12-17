#pragma once

#include <common.h>
#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_shared_ptr_const_void MR_C_std_shared_ptr_const_void; // Defined in `#include <std_shared_ptr_const_void.h>`.
typedef struct MR_C_std_shared_ptr_void MR_C_std_shared_ptr_void; // Defined in `#include <std_shared_ptr_void.h>`.


/// Wraps a pointer to a shared reference-counted heap-allocated array of type `int`, of an unspecified size.
/// Doesn't store the size, it has to be obtained separately.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_shared_ptr_int_array MR_C_std_shared_ptr_int_array;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_int_array_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_int_array *MR_C_std_shared_ptr_int_array_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_shared_ptr_int_array_DestroyArray()`.
/// Use `MR_C_std_shared_ptr_int_array_OffsetMutablePtr()` and `MR_C_std_shared_ptr_int_array_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_shared_ptr_int_array *MR_C_std_shared_ptr_int_array_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_int_array_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_int_array *MR_C_std_shared_ptr_int_array_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_int_array *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_shared_ptr_int_array_AssignFromAnother(MR_C_std_shared_ptr_int_array *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_int_array *other);

/// Destroys a heap-allocated instance of `MR_C_std_shared_ptr_int_array`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_shared_ptr_int_array_Destroy(const MR_C_std_shared_ptr_int_array *_this);

/// Destroys a heap-allocated array of `MR_C_std_shared_ptr_int_array`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_shared_ptr_int_array_DestroyArray(const MR_C_std_shared_ptr_int_array *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_shared_ptr_int_array *MR_C_std_shared_ptr_int_array_OffsetPtr(const MR_C_std_shared_ptr_int_array *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_shared_ptr_int_array *MR_C_std_shared_ptr_int_array_OffsetMutablePtr(MR_C_std_shared_ptr_int_array *ptr, ptrdiff_t i);

/// Returns the stored pointer, possibly null.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int *MR_C_std_shared_ptr_int_array_Get(const MR_C_std_shared_ptr_int_array *_this);

/// Returns an element from the stored array. The stored pointer must not be null.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_C_std_shared_ptr_int_array_At(const MR_C_std_shared_ptr_int_array *_this, ptrdiff_t i);

/// How many shared pointers share the managed object. Zero if no object is being managed.
/// This being zero usually conincides with `MR_C_std_shared_ptr_int_array_Get()` returning null, but is ultimately orthogonal.
/// Note that in multithreaded environments, the only safe way to use this number is comparing it with zero. Positive values might change by the time you get to use them.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_std_shared_ptr_int_array_UseCount(const MR_C_std_shared_ptr_int_array *_this);

/// Create a new instance, taking ownership of an existing pointer.
/// Parameter `ptr` can point to an array.
/// Parameter `ptr` takes ownership of the passed pointer (if not null), and will later call `MR_C_FreeArray()` on it automatically.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_int_array_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_int_array *MR_C_std_shared_ptr_int_array_Construct(int *ptr);

/// Overwrite the existing instance, taking ownership of an existing pointer. The previously owned object, if any, has its reference count decremented.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `ptr` can point to an array.
/// Parameter `ptr` takes ownership of the passed pointer (if not null), and will later call `MR_C_FreeArray()` on it automatically.
MR_C_API void MR_C_std_shared_ptr_int_array_Assign(MR_C_std_shared_ptr_int_array *_this, int *ptr);

/// Create a new instance, storing a non-owning pointer.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_int_array_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_int_array *MR_C_std_shared_ptr_int_array_ConstructNonOwning(int *ptr);

/// Overwrite the existing instance with a non-owning pointer. The previously owned object, if any, has its reference count decremented.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_shared_ptr_int_array_AssignNonOwning(MR_C_std_shared_ptr_int_array *_this, int *ptr);

/// The aliasing constructor. Create a new instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
/// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_int_array_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_int_array *MR_C_std_shared_ptr_int_array_ConstructAliasing(MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, int *ptr);

/// The aliasing assignment. Overwrite an existing instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
/// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_shared_ptr_int_array_AssignAliasing(MR_C_std_shared_ptr_int_array *_this, MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, int *ptr);

/// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_void_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_int_array(MR_C_PassBy _other_pass_by, MR_C_std_shared_ptr_int_array *_other);

/// Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_int_array(MR_C_std_shared_ptr_void *_this, MR_C_PassBy _other_pass_by, MR_C_std_shared_ptr_int_array *_other);

#ifdef __cplusplus
} // extern "C"
#endif
