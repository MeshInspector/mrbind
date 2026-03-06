#pragma once

#include <AB/common/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_vector_MR_SeparateA MR_C_std_vector_MR_SeparateA; // Defined in `#include <AB/common/std_vector_MR_SeparateA.h>`.


/// Generated from class `MR::SeparateA`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_SeparateA MR_SeparateA;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SeparateA_Destroy()` to free it when you're done using it.
MR_AB_API MR_SeparateA *MR_SeparateA_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SeparateA_DestroyArray()`.
/// Use `MR_SeparateA_OffsetMutablePtr()` and `MR_SeparateA_OffsetPtr()` to access the array elements.
MR_AB_API MR_SeparateA *MR_SeparateA_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_AB_API const MR_SeparateA *MR_SeparateA_OffsetPtr(const MR_SeparateA *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_AB_API MR_SeparateA *MR_SeparateA_OffsetMutablePtr(MR_SeparateA *ptr, ptrdiff_t i);

/// Generated from constructor `MR::SeparateA::SeparateA`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SeparateA_Destroy()` to free it when you're done using it.
MR_AB_API MR_SeparateA *MR_SeparateA_ConstructFromAnother(const MR_SeparateA *_other);

/// Destroys a heap-allocated instance of `MR_SeparateA`. Does nothing if the pointer is null.
MR_AB_API void MR_SeparateA_Destroy(const MR_SeparateA *_this);

/// Destroys a heap-allocated array of `MR_SeparateA`. Does nothing if the pointer is null.
MR_AB_API void MR_SeparateA_DestroyArray(const MR_SeparateA *_this);

/// Generated from method `MR::SeparateA::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it held previously.
MR_AB_API MR_SeparateA *MR_SeparateA_AssignFromAnother(MR_SeparateA *_this, const MR_SeparateA *_other);

/// Generated from function `MR::GetSeparateVecA`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_SeparateA_Destroy()` to free it when you're done using it.
MR_AB_API MR_C_std_vector_MR_SeparateA *MR_GetSeparateVecA(void);

#ifdef __cplusplus
} // extern "C"
#endif
