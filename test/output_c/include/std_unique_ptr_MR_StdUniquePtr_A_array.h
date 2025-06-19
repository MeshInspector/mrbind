#pragma once

#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_StdUniquePtr_A MR_StdUniquePtr_A; // Defined in `#include <MR/test_std_unique_ptr.h>`.


/// Wraps a pointer to a heap-allocated array of type `MR::StdUniquePtr::A`, of an unspecified size.
/// Doesn't store the size, it has to be obtained separately.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_unique_ptr_MR_StdUniquePtr_A_array MR_C_std_unique_ptr_MR_StdUniquePtr_A_array;

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_DestroyArray()`.
/// Use `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_OffsetMutablePtr()` and `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFromAnother(const MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *other);

/// Constructs a new instance.
/// Parameter `other` can point to an array.
/// Parameter `other` takes ownership of the passed pointer (if not null), and will later call `MR_StdUniquePtr_A_DestroyArray()` on it automatically.
/// Returns an instance allocated on the heap! Must call `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFrom(MR_StdUniquePtr_A *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
/// Parameter `other` can not be null.
MR_C_API void MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_AssignFromAnother(MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *_this, const MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *other);

/// Assigns the contents.
/// Parameter `_this` can not be null.
/// Parameter `other` can point to an array.
/// Parameter `other` takes ownership of the passed pointer (if not null), and will later call `MR_StdUniquePtr_A_DestroyArray()` on it automatically.
MR_C_API void MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_AssignFrom(MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *_this, MR_StdUniquePtr_A *other);

/// Destroys a heap-allocated instance of `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_Destroy(MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *_this);

/// Destroys a heap-allocated array of `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_DestroyArray(MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_OffsetPtr(const MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_OffsetMutablePtr(MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *ptr, ptrdiff_t i);

/// Returns the stored pointer, possibly null.
/// Parameter `_this` can not be null.
MR_C_API MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_Get(const MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *_this);

/// Returns an element from the stored array. The stored pointer must not be null.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_At(const MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *_this, size_t i);

/// Releases the pointer ownership. Returns the stored pointer and zeroes the source. If the source is already null, returns null and does nothing.
/// The returned pointer is owning! It must be deallocated using `MR_StdUniquePtr_A_DestroyArray()`.
/// Parameter `_this` can not be null.
MR_C_API MR_StdUniquePtr_A *MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_Release(MR_C_std_unique_ptr_MR_StdUniquePtr_A_array *_this);

#ifdef __cplusplus
} // extern "C"
#endif
