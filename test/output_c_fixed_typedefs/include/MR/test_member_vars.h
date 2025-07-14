#pragma once

#include <exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_MemberVars_A MR_MemberVars_A; // Defined below in this file.


/// Generated from class `MR::MemberVars::A`.
typedef struct MR_MemberVars_A MR_MemberVars_A;

/// Returns a pointer to a member variable of class `MR::MemberVars::A` named `z`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int32_t *MR_MemberVars_A_GetConst_z(void);

/// Modifies a member variable of class `MR::MemberVars::A` named `z`.
MR_C_API void MR_MemberVars_A_Set_z(int32_t value);

/// Returns a mutable pointer to a member variable of class `MR::MemberVars::A` named `z`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int32_t *MR_MemberVars_A_GetMutable_z(void);

/// Returns a pointer to a member variable of class `MR::MemberVars::A` named `w`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int32_t *MR_MemberVars_A_GetConst_w(void);

/// Returns a pointer to a member variable of class `MR::MemberVars::A` named `x`.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int32_t *MR_MemberVars_A_GetConst_x(const MR_MemberVars_A *_this);

/// Modifies a member variable of class `MR::MemberVars::A` named `x`.
/// Parameter `_this` can not be null.
MR_C_API void MR_MemberVars_A_Set_x(MR_MemberVars_A *_this, int32_t value);

/// Returns a mutable pointer to a member variable of class `MR::MemberVars::A` named `x`.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int32_t *MR_MemberVars_A_GetMutable_x(MR_MemberVars_A *_this);

/// Returns a pointer to a member variable of class `MR::MemberVars::A` named `y`.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int32_t *MR_MemberVars_A_GetConst_y(const MR_MemberVars_A *_this);

// Those don't get setters, and also get only one (non-const-propagating) getter.
/// Returns a pointer to a member variable of class `MR::MemberVars::A` named `ref`.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int32_t *MR_MemberVars_A_GetConst_ref(const MR_MemberVars_A *_this);

// Arrays don't get setters, because they aren't assignable. But they still get mutable getters
/// Returns a pointer to a member variable of class `MR::MemberVars::A` named `arr`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int32_t *MR_MemberVars_A_GetConst_arr(const MR_MemberVars_A *_this);

// Arrays don't get setters, because they aren't assignable. But they still get mutable getters
/// Returns a mutable pointer to a member variable of class `MR::MemberVars::A` named `arr`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int32_t *MR_MemberVars_A_GetMutable_arr(MR_MemberVars_A *_this);

/// Returns the size of the array member of class `MR::MemberVars::A` named `arr`. The size is `4`.
MR_C_API size_t MR_MemberVars_A_GetSize_arr(void);

/// Generated from a constructor of class `MR::MemberVars::A`.
/// Parameter `_other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MemberVars_A_Destroy()` to free it when you're done using it.
MR_C_API MR_MemberVars_A *MR_MemberVars_A_ConstructFromAnother(const MR_MemberVars_A *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_MemberVars_A *MR_MemberVars_A_OffsetPtr(const MR_MemberVars_A *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_MemberVars_A *MR_MemberVars_A_OffsetMutablePtr(MR_MemberVars_A *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_MemberVars_A`. Does nothing if the pointer is null.
MR_C_API void MR_MemberVars_A_Destroy(const MR_MemberVars_A *_this);

/// Destroys a heap-allocated array of `MR_MemberVars_A`. Does nothing if the pointer is null.
MR_C_API void MR_MemberVars_A_DestroyArray(const MR_MemberVars_A *_this);

#ifdef __cplusplus
} // extern "C"
#endif
