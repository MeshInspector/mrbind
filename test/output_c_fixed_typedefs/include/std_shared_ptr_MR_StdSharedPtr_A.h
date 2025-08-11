#ifndef MR_C_DETAIL_INCLUDED_STD_SHARED_PTR_MR_STDSHAREDPTR_A_H
#define MR_C_DETAIL_INCLUDED_STD_SHARED_PTR_MR_STDSHAREDPTR_A_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <common.h>
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_StdSharedPtr_A MR_StdSharedPtr_A; // Defined in `#include <MR/test_std_shared_ptr.h>`.


// Wraps a pointer to a single shared reference-counted heap-allocated `MR::StdSharedPtr::A`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_shared_ptr_MR_StdSharedPtr_A MR_C_std_shared_ptr_MR_StdSharedPtr_A;

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_MR_StdSharedPtr_A_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_MR_StdSharedPtr_A *MR_C_std_shared_ptr_MR_StdSharedPtr_A_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_C_std_shared_ptr_MR_StdSharedPtr_A_DestroyArray()`.
// Use `MR_C_std_shared_ptr_MR_StdSharedPtr_A_OffsetMutablePtr()` and `MR_C_std_shared_ptr_MR_StdSharedPtr_A_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_shared_ptr_MR_StdSharedPtr_A *MR_C_std_shared_ptr_MR_StdSharedPtr_A_DefaultConstructArray(size_t num_elems);

// Constructs a copy of another instance. The source remains alive.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_MR_StdSharedPtr_A_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_MR_StdSharedPtr_A *MR_C_std_shared_ptr_MR_StdSharedPtr_A_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A *other);

// Assigns the contents from another instance. Both objects remain alive after the call.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_shared_ptr_MR_StdSharedPtr_A_AssignFromAnother(MR_C_std_shared_ptr_MR_StdSharedPtr_A *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A *other);

// Destroys a heap-allocated instance of `MR_C_std_shared_ptr_MR_StdSharedPtr_A`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_shared_ptr_MR_StdSharedPtr_A_Destroy(const MR_C_std_shared_ptr_MR_StdSharedPtr_A *_this);

// Destroys a heap-allocated array of `MR_C_std_shared_ptr_MR_StdSharedPtr_A`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_shared_ptr_MR_StdSharedPtr_A_DestroyArray(const MR_C_std_shared_ptr_MR_StdSharedPtr_A *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_shared_ptr_MR_StdSharedPtr_A *MR_C_std_shared_ptr_MR_StdSharedPtr_A_OffsetPtr(const MR_C_std_shared_ptr_MR_StdSharedPtr_A *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_shared_ptr_MR_StdSharedPtr_A *MR_C_std_shared_ptr_MR_StdSharedPtr_A_OffsetMutablePtr(MR_C_std_shared_ptr_MR_StdSharedPtr_A *ptr, ptrdiff_t i);

// Returns the stored pointer, possibly null.
// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_StdSharedPtr_A *MR_C_std_shared_ptr_MR_StdSharedPtr_A_Get(const MR_C_std_shared_ptr_MR_StdSharedPtr_A *_this);

// How many shared pointers share the managed object. Zero if no object is being managed.
// This being zero usually conincides with `MR_C_std_shared_ptr_MR_StdSharedPtr_A_Get()` returning null, but is ultimately orthogonal.
// Note that in multithreaded environments, the only safe way to use this number is comparing it with zero. Positive values might change by the time you get to use them.
// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_std_shared_ptr_MR_StdSharedPtr_A_UseCount(const MR_C_std_shared_ptr_MR_StdSharedPtr_A *_this);

// Create a new instance, taking ownership of an existing pointer.
// Parameter `ptr` should point to a single object rather than to an array.
// Parameter `ptr` takes ownership of the passed pointer (if not null), and will later call `MR_StdSharedPtr_A_Destroy()` on it automatically.
MR_C_API void MR_C_std_shared_ptr_MR_StdSharedPtr_A_Construct(MR_StdSharedPtr_A *ptr);

// Overwrite the existing instance, taking ownership of an existing pointer. The previously owned object, if any, has its reference count decremented.
// Parameter `_this` can not be null. It is a single object.
// Parameter `ptr` should point to a single object rather than to an array.
// Parameter `ptr` takes ownership of the passed pointer (if not null), and will later call `MR_StdSharedPtr_A_Destroy()` on it automatically.
MR_C_API void MR_C_std_shared_ptr_MR_StdSharedPtr_A_Assign(MR_C_std_shared_ptr_MR_StdSharedPtr_A *_this, MR_StdSharedPtr_A *ptr);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_STD_SHARED_PTR_MR_STDSHAREDPTR_A_H

#if !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_STD_SHARED_PTR_MR_STDSHAREDPTR_A_H_2)
#define MR_C_DETAIL_INCLUDED_STD_SHARED_PTR_MR_STDSHAREDPTR_A_H_2

// Convenience includes for types mentioned in this header. They are here at the bottom to make circular includes harmless.

#include <MR/test_std_shared_ptr.h>

#endif // !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_STD_SHARED_PTR_MR_STDSHAREDPTR_A_H_2)
