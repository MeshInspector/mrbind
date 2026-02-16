#ifndef MR_C_DETAIL_INCLUDED_STD_SHARED_PTR_CONST_MR_STDSHAREDPTR_A_ARRAY_H
#define MR_C_DETAIL_INCLUDED_STD_SHARED_PTR_CONST_MR_STDSHAREDPTR_A_ARRAY_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <common.h>
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_shared_ptr_MR_StdSharedPtr_A_array MR_C_std_shared_ptr_MR_StdSharedPtr_A_array; // Defined in `#include <std_shared_ptr_MR_StdSharedPtr_A_array.h>`.
typedef struct MR_C_std_shared_ptr_const_void MR_C_std_shared_ptr_const_void; // Defined in `#include <std_shared_ptr_const_void.h>`.
typedef struct MR_StdSharedPtr_A MR_StdSharedPtr_A; // Defined in `#include <MR/test_std_shared_ptr.h>`.


// Wraps a pointer to a shared reference-counted heap-allocated array of type `const MR::StdSharedPtr::A`, of an unspecified size.
// Doesn't store the size, it has to be obtained separately.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array;

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_DestroyArray()`.
// Use `MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_OffsetMutablePtr()` and `MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_DefaultConstructArray(size_t num_elems);

// Constructs a copy of another instance. The source remains alive.
// The reference to the parameter `other` might be preserved in the constructed object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_Destroy()` to free it when you're done using it.
// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *other);

// Assigns the contents from another instance. Both objects remain alive after the call.
// Parameter `_this` can not be null. It is a single object.
// The reference to the parameter `other` might be preserved in this object.
// When this function is called, this object will drop any object references it had previously.
MR_C_API void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_AssignFromAnother(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *other);

// Destroys a heap-allocated instance of `MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_Destroy(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *_this);

// Destroys a heap-allocated array of `MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_DestroyArray(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_OffsetPtr(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_OffsetMutablePtr(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *ptr, ptrdiff_t i);

// Returns the stored pointer, possibly null.
// Parameter `_this` can not be null. It is a single object.
// The reference to this object might be preserved as the return value.
MR_C_API const MR_StdSharedPtr_A *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_get(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *_this);

// Returns an element from the stored array. The stored pointer must not be null.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// The reference to this object might be preserved as the return value.
MR_C_API const MR_StdSharedPtr_A *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_at(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *_this, ptrdiff_t i);

// How many shared pointers share the managed object. Zero if no object is being managed.
// This being zero usually conincides with `MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_get()` returning null, but is ultimately orthogonal.
// Note that in multithreaded environments, the only safe way to use this number is comparing it with zero. Positive values might change by the time you get to use them.
// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_use_count(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *_this);

// Create a new instance, taking ownership of an existing pointer.
// Parameter `ptr` can point to an array.
// Parameter `ptr` takes ownership of the passed pointer (if not null), and will later call `MR_StdSharedPtr_A_DestroyArray()` on it automatically.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_Construct(const MR_StdSharedPtr_A *ptr);

// Overwrite the existing instance, taking ownership of an existing pointer. The previously owned object, if any, has its reference count decremented.
// Parameter `_this` can not be null. It is a single object.
// Parameter `ptr` can point to an array.
// Parameter `ptr` takes ownership of the passed pointer (if not null), and will later call `MR_StdSharedPtr_A_DestroyArray()` on it automatically.
MR_C_API void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_Assign(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *_this, const MR_StdSharedPtr_A *ptr);

// Create a new instance, storing a non-owning pointer.
// The reference to the parameter `ptr` might be preserved in the constructed object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_Destroy()` to free it when you're done using it.
// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_ConstructNonOwning(const MR_StdSharedPtr_A *ptr);

// Overwrite the existing instance with a non-owning pointer. The previously owned object, if any, has its reference count decremented.
// Parameter `_this` can not be null. It is a single object.
// The reference to the parameter `ptr` might be preserved in this object.
// When this function is called, this object will drop any object references it had previously.
MR_C_API void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_AssignNonOwning(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *_this, const MR_StdSharedPtr_A *ptr);

// Create a new instance from a non-const pointer to the same type.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_ConstructFromMutable(MR_C_PassBy ptr_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *ptr);

// Overwrite the existing instance with a non-const pointer to the same type.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_AssignFromMutable(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *_this, MR_C_PassBy ptr_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *ptr);

// The aliasing constructor. Create a new instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
// The reference to the parameter `ptr` might be preserved in the constructed object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_Destroy()` to free it when you're done using it.
// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_ConstructAliasing(MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, const MR_StdSharedPtr_A *ptr);

// The aliasing assignment. Overwrite an existing instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
// Parameter `_this` can not be null. It is a single object.
// The reference to the parameter `ptr` might be preserved in this object.
// When this function is called, this object will drop any object references it had previously.
MR_C_API void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_AssignAliasing(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *_this, MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, const MR_StdSharedPtr_A *ptr);

// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_const_void_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_const_void *MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array(MR_C_PassBy _other_pass_by, MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *_other);

// Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_shared_ptr_const_void_AssignFrom_MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array(MR_C_std_shared_ptr_const_void *_this, MR_C_PassBy _other_pass_by, MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *_other);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_STD_SHARED_PTR_CONST_MR_STDSHAREDPTR_A_ARRAY_H

#if !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_STD_SHARED_PTR_CONST_MR_STDSHAREDPTR_A_ARRAY_H_2)
#define MR_C_DETAIL_INCLUDED_STD_SHARED_PTR_CONST_MR_STDSHAREDPTR_A_ARRAY_H_2

// Convenience includes for types mentioned in this header. They are here at the bottom to make circular includes harmless.

#include <MR/test_std_shared_ptr.h>
#include <std_shared_ptr_MR_StdSharedPtr_A_array.h>
#include <std_shared_ptr_const_void.h>

#endif // !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_STD_SHARED_PTR_CONST_MR_STDSHAREDPTR_A_ARRAY_H_2)
