#ifndef MR_C_DETAIL_INCLUDED_STD_SHARED_PTR_MR_CSHARP_EXPOSEDLAYOUTSH_H
#define MR_C_DETAIL_INCLUDED_STD_SHARED_PTR_MR_CSHARP_EXPOSEDLAYOUTSH_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <common.h>
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_CSharp_ExposedLayoutSh MR_CSharp_ExposedLayoutSh; // Defined in `#include <MR/test_csharp.h>`.
typedef struct MR_C_std_shared_ptr_const_void MR_C_std_shared_ptr_const_void; // Defined in `#include <std_shared_ptr_const_void.h>`.
typedef struct MR_C_std_shared_ptr_void MR_C_std_shared_ptr_void; // Defined in `#include <std_shared_ptr_void.h>`.


// Wraps a pointer to a single shared reference-counted heap-allocated `MR::CSharp::ExposedLayoutSh`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh;

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_DestroyArray()`.
// Use `MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_OffsetMutablePtr()` and `MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_DefaultConstructArray(size_t num_elems);

// Constructs a copy of another instance. The source remains alive.
// The reference to the parameter `other` might be preserved in the return value.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *other);

// Assigns the contents from another instance. Both objects remain alive after the call.
// Parameter `_this` can not be null. It is a single object.
// The reference to the parameter `other` might be preserved in the parameter `_this`.
// After this function is called, the parameter `_this` will drop any object references it had previously.
MR_C_API void MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_AssignFromAnother(MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *other);

// Destroys a heap-allocated instance of `MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_Destroy(const MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *_this);

// Destroys a heap-allocated array of `MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_DestroyArray(const MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_OffsetPtr(const MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_OffsetMutablePtr(MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *ptr, ptrdiff_t i);

// Returns the stored pointer, possibly null.
// Parameter `_this` can not be null. It is a single object.
// The reference to the parameter `_this` might be preserved in the return value.
MR_C_API MR_CSharp_ExposedLayoutSh *MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_Get(const MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *_this);

// How many shared pointers share the managed object. Zero if no object is being managed.
// This being zero usually conincides with `MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_Get()` returning null, but is ultimately orthogonal.
// Note that in multithreaded environments, the only safe way to use this number is comparing it with zero. Positive values might change by the time you get to use them.
// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_UseCount(const MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *_this);

// Create a new instance, taking ownership of an existing pointer.
// Parameter `ptr` should point to a single object rather than to an array.
// Parameter `ptr` takes ownership of the passed pointer (if not null), and will later call `MR_C_Free()` on it automatically.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_Construct(MR_CSharp_ExposedLayoutSh *ptr);

// Overwrite the existing instance, taking ownership of an existing pointer. The previously owned object, if any, has its reference count decremented.
// Parameter `_this` can not be null. It is a single object.
// Parameter `ptr` should point to a single object rather than to an array.
// Parameter `ptr` takes ownership of the passed pointer (if not null), and will later call `MR_C_Free()` on it automatically.
MR_C_API void MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_Assign(MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *_this, MR_CSharp_ExposedLayoutSh *ptr);

// Create a new instance, storing a non-owning pointer.
// The reference to the parameter `ptr` might be preserved in the return value.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_ConstructNonOwning(MR_CSharp_ExposedLayoutSh *ptr);

// Overwrite the existing instance with a non-owning pointer. The previously owned object, if any, has its reference count decremented.
// Parameter `_this` can not be null. It is a single object.
// The reference to the parameter `ptr` might be preserved in the parameter `_this`.
// After this function is called, the parameter `_this` will drop any object references it had previously.
MR_C_API void MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_AssignNonOwning(MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *_this, MR_CSharp_ExposedLayoutSh *ptr);

// The aliasing constructor. Create a new instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
// The reference to the parameter `ptr` might be preserved in the return value.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_ConstructAliasing(MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, MR_CSharp_ExposedLayoutSh *ptr);

// The aliasing assignment. Overwrite an existing instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
// Parameter `_this` can not be null. It is a single object.
// The reference to the parameter `ptr` might be preserved in the parameter `_this`.
// After this function is called, the parameter `_this` will drop any object references it had previously.
MR_C_API void MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_AssignAliasing(MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *_this, MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, MR_CSharp_ExposedLayoutSh *ptr);

// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_void_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh(MR_C_PassBy _other_pass_by, MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *_other);

// Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh(MR_C_std_shared_ptr_void *_this, MR_C_PassBy _other_pass_by, MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *_other);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_STD_SHARED_PTR_MR_CSHARP_EXPOSEDLAYOUTSH_H

#if !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_STD_SHARED_PTR_MR_CSHARP_EXPOSEDLAYOUTSH_H_2)
#define MR_C_DETAIL_INCLUDED_STD_SHARED_PTR_MR_CSHARP_EXPOSEDLAYOUTSH_H_2

// Convenience includes for types mentioned in this header. They are here at the bottom to make circular includes harmless.

#include <MR/test_csharp.h>
#include <std_shared_ptr_const_void.h>
#include <std_shared_ptr_void.h>

#endif // !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_STD_SHARED_PTR_MR_CSHARP_EXPOSEDLAYOUTSH_H_2)
