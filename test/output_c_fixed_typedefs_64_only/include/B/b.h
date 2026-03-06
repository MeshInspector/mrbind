#pragma once

#include <AB/common/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_vector_MR_SeparateB MR_C_std_vector_MR_SeparateB; // Defined in `#include <AB/common/std_vector_MR_SeparateB.h>`.


/// Generated from class `MR::SeparateB`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_SeparateB MR_SeparateB;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SeparateB_Destroy()` to free it when you're done using it.
MR_AB_API MR_SeparateB *MR_SeparateB_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SeparateB_DestroyArray()`.
/// Use `MR_SeparateB_OffsetMutablePtr()` and `MR_SeparateB_OffsetPtr()` to access the array elements.
MR_AB_API MR_SeparateB *MR_SeparateB_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_AB_API const MR_SeparateB *MR_SeparateB_OffsetPtr(const MR_SeparateB *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_AB_API MR_SeparateB *MR_SeparateB_OffsetMutablePtr(MR_SeparateB *ptr, ptrdiff_t i);

/// Generated from constructor `MR::SeparateB::SeparateB`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SeparateB_Destroy()` to free it when you're done using it.
MR_AB_API MR_SeparateB *MR_SeparateB_ConstructFromAnother(const MR_SeparateB *_other);

/// Destroys a heap-allocated instance of `MR_SeparateB`. Does nothing if the pointer is null.
MR_AB_API void MR_SeparateB_Destroy(const MR_SeparateB *_this);

/// Destroys a heap-allocated array of `MR_SeparateB`. Does nothing if the pointer is null.
MR_AB_API void MR_SeparateB_DestroyArray(const MR_SeparateB *_this);

/// Generated from method `MR::SeparateB::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it held previously.
MR_AB_API MR_SeparateB *MR_SeparateB_AssignFromAnother(MR_SeparateB *_this, const MR_SeparateB *_other);

/// Generated from function `MR::GetSeparateVecB`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_SeparateB_Destroy()` to free it when you're done using it.
MR_AB_API MR_C_std_vector_MR_SeparateB *MR_GetSeparateVecB(void);

#ifdef __cplusplus
} // extern "C"
#endif
