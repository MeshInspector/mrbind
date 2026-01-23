#ifndef MR_C_DETAIL_INCLUDED_STD_UNIQUE_PTR_MR_STDUNIQUEPTR_A_H
#define MR_C_DETAIL_INCLUDED_STD_UNIQUE_PTR_MR_STDUNIQUEPTR_A_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_StdUniquePtr_A MR_StdUniquePtr_A; // Defined in `#include <MR/test_std_unique_ptr.h>`.


// Wraps a pointer to a single heap-allocated `MR::StdUniquePtr::A`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_unique_ptr_MR_StdUniquePtr_A MR_C_std_unique_ptr_MR_StdUniquePtr_A;

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_unique_ptr_MR_StdUniquePtr_A_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unique_ptr_MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_C_std_unique_ptr_MR_StdUniquePtr_A_DestroyArray()`.
// Use `MR_C_std_unique_ptr_MR_StdUniquePtr_A_OffsetMutablePtr()` and `MR_C_std_unique_ptr_MR_StdUniquePtr_A_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_unique_ptr_MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_DefaultConstructArray(size_t num_elems);

// Constructs a copy of another instance. The source remains alive.
// Parameter `other` can not be null. It is a single object.
// The reference to the parameter `other` might be preserved in the constructed object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_unique_ptr_MR_StdUniquePtr_A_Destroy()` to free it when you're done using it.
// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_std_unique_ptr_MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_ConstructFromAnother(const MR_C_std_unique_ptr_MR_StdUniquePtr_A *other);

// Constructs a new instance.
// Parameter `other` should point to a single object rather than to an array.
// Parameter `other` takes ownership of the passed pointer (if not null), and will later call `MR_StdUniquePtr_A_Destroy()` on it automatically.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_unique_ptr_MR_StdUniquePtr_A_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unique_ptr_MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_ConstructFrom(MR_StdUniquePtr_A *other);

// Assigns the contents from another instance. Both objects remain alive after the call.
// Parameter `_this` can not be null. It is a single object.
// Parameter `other` can not be null. It is a single object.
// The reference to the parameter `other` might be preserved in this object.
// When this function is called, this object will drop any object references it had previously.
MR_C_API void MR_C_std_unique_ptr_MR_StdUniquePtr_A_AssignFromAnother(MR_C_std_unique_ptr_MR_StdUniquePtr_A *_this, const MR_C_std_unique_ptr_MR_StdUniquePtr_A *other);

// Assigns the contents.
// Parameter `_this` can not be null. It is a single object.
// Parameter `other` should point to a single object rather than to an array.
// Parameter `other` takes ownership of the passed pointer (if not null), and will later call `MR_StdUniquePtr_A_Destroy()` on it automatically.
MR_C_API void MR_C_std_unique_ptr_MR_StdUniquePtr_A_AssignFrom(MR_C_std_unique_ptr_MR_StdUniquePtr_A *_this, MR_StdUniquePtr_A *other);

// Destroys a heap-allocated instance of `MR_C_std_unique_ptr_MR_StdUniquePtr_A`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_unique_ptr_MR_StdUniquePtr_A_Destroy(const MR_C_std_unique_ptr_MR_StdUniquePtr_A *_this);

// Destroys a heap-allocated array of `MR_C_std_unique_ptr_MR_StdUniquePtr_A`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_unique_ptr_MR_StdUniquePtr_A_DestroyArray(const MR_C_std_unique_ptr_MR_StdUniquePtr_A *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_unique_ptr_MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_OffsetPtr(const MR_C_std_unique_ptr_MR_StdUniquePtr_A *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_unique_ptr_MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_OffsetMutablePtr(MR_C_std_unique_ptr_MR_StdUniquePtr_A *ptr, ptrdiff_t i);

// Returns the stored pointer, possibly null.
// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_Get(const MR_C_std_unique_ptr_MR_StdUniquePtr_A *_this);

// Releases the pointer ownership. Returns the stored pointer and zeroes the source. If the source is already null, returns null and does nothing.
// The returned pointer is owning! It must be deallocated using `MR_StdUniquePtr_A_Destroy()`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_Release(MR_C_std_unique_ptr_MR_StdUniquePtr_A *_this);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_STD_UNIQUE_PTR_MR_STDUNIQUEPTR_A_H

#if !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_STD_UNIQUE_PTR_MR_STDUNIQUEPTR_A_H_2)
#define MR_C_DETAIL_INCLUDED_STD_UNIQUE_PTR_MR_STDUNIQUEPTR_A_H_2

// Convenience includes for types mentioned in this header. They are here at the bottom to make circular includes harmless.

#include <MR/test_std_unique_ptr.h>

#endif // !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_STD_UNIQUE_PTR_MR_STDUNIQUEPTR_A_H_2)
