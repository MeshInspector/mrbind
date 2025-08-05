#pragma once

#include <exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from class `MR::StaticFuncs::A`.
typedef struct MR_StaticFuncs_A MR_StaticFuncs_A;

/// Returns a pointer to a member variable of class `MR::StaticFuncs::A` named `x`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int32_t *MR_StaticFuncs_A_Get_x(void);

/// Modifies a member variable of class `MR::StaticFuncs::A` named `x`.
MR_C_API void MR_StaticFuncs_A_Set_x(int32_t value);

/// Returns a mutable pointer to a member variable of class `MR::StaticFuncs::A` named `x`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int32_t *MR_StaticFuncs_A_GetMutable_x(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_StaticFuncs_A_Destroy()` to free it when you're done using it.
MR_C_API MR_StaticFuncs_A *MR_StaticFuncs_A_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_StaticFuncs_A_DestroyArray()`.
/// Use `MR_StaticFuncs_A_OffsetMutablePtr()` and `MR_StaticFuncs_A_OffsetPtr()` to access the array elements.
MR_C_API MR_StaticFuncs_A *MR_StaticFuncs_A_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_StaticFuncs_A *MR_StaticFuncs_A_OffsetPtr(const MR_StaticFuncs_A *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_StaticFuncs_A *MR_StaticFuncs_A_OffsetMutablePtr(MR_StaticFuncs_A *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::StaticFuncs::A`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_StaticFuncs_A_Destroy()` to free it when you're done using it.
MR_C_API MR_StaticFuncs_A *MR_StaticFuncs_A_ConstructFromAnother(const MR_StaticFuncs_A *_other);

/// Destroys a heap-allocated instance of `MR_StaticFuncs_A`. Does nothing if the pointer is null.
MR_C_API void MR_StaticFuncs_A_Destroy(const MR_StaticFuncs_A *_this);

/// Destroys a heap-allocated array of `MR_StaticFuncs_A`. Does nothing if the pointer is null.
MR_C_API void MR_StaticFuncs_A_DestroyArray(const MR_StaticFuncs_A *_this);

/// Generated from a method of class `MR::StaticFuncs::A` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_StaticFuncs_A *MR_StaticFuncs_A_AssignFromAnother(MR_StaticFuncs_A *_this, const MR_StaticFuncs_A *_other);

/// Generated from a method of class `MR::StaticFuncs::A` named `blah`.
MR_C_API void MR_StaticFuncs_A_blah(void);

#ifdef __cplusplus
} // extern "C"
#endif
