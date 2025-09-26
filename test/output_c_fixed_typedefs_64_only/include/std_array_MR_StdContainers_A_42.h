#pragma once

#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_StdContainers_A MR_StdContainers_A; // Defined in `#include <MR/test_std_containers.h>`.


/// A fixed-size array of `MR::StdContainers::A` of size 42.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_array_MR_StdContainers_A_42 MR_C_std_array_MR_StdContainers_A_42;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_array_MR_StdContainers_A_42_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_array_MR_StdContainers_A_42 *MR_C_std_array_MR_StdContainers_A_42_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_array_MR_StdContainers_A_42_DestroyArray()`.
/// Use `MR_C_std_array_MR_StdContainers_A_42_OffsetMutablePtr()` and `MR_C_std_array_MR_StdContainers_A_42_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_array_MR_StdContainers_A_42 *MR_C_std_array_MR_StdContainers_A_42_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_array_MR_StdContainers_A_42_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_array_MR_StdContainers_A_42 *MR_C_std_array_MR_StdContainers_A_42_ConstructFromAnother(const MR_C_std_array_MR_StdContainers_A_42 *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MR_C_API void MR_C_std_array_MR_StdContainers_A_42_AssignFromAnother(MR_C_std_array_MR_StdContainers_A_42 *_this, const MR_C_std_array_MR_StdContainers_A_42 *other);

/// Destroys a heap-allocated instance of `MR_C_std_array_MR_StdContainers_A_42`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_array_MR_StdContainers_A_42_Destroy(const MR_C_std_array_MR_StdContainers_A_42 *_this);

/// Destroys a heap-allocated array of `MR_C_std_array_MR_StdContainers_A_42`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_array_MR_StdContainers_A_42_DestroyArray(const MR_C_std_array_MR_StdContainers_A_42 *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_array_MR_StdContainers_A_42 *MR_C_std_array_MR_StdContainers_A_42_OffsetPtr(const MR_C_std_array_MR_StdContainers_A_42 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_array_MR_StdContainers_A_42 *MR_C_std_array_MR_StdContainers_A_42_OffsetMutablePtr(MR_C_std_array_MR_StdContainers_A_42 *ptr, ptrdiff_t i);

/// The element at a specific index, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_StdContainers_A *MR_C_std_array_MR_StdContainers_A_42_At(const MR_C_std_array_MR_StdContainers_A_42 *_this, size_t i);

/// The element at a specific index, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_StdContainers_A *MR_C_std_array_MR_StdContainers_A_42_MutableAt(MR_C_std_array_MR_StdContainers_A_42 *_this, size_t i);

/// Returns a pointer to the continuous storage that holds all elements, read-only.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API const MR_StdContainers_A *MR_C_std_array_MR_StdContainers_A_42_Data(const MR_C_std_array_MR_StdContainers_A_42 *_this);

/// Returns a pointer to the continuous storage that holds all elements, mutable.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_StdContainers_A *MR_C_std_array_MR_StdContainers_A_42_MutableData(MR_C_std_array_MR_StdContainers_A_42 *_this);

#ifdef __cplusplus
} // extern "C"
#endif
