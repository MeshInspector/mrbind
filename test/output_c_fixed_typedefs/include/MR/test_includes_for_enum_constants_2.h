#ifndef MR_C_DETAIL_INCLUDED_MR_TEST_INCLUDES_FOR_ENUM_CONSTANTS_2_H
#define MR_C_DETAIL_INCLUDED_MR_TEST_INCLUDES_FOR_ENUM_CONSTANTS_2_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


// Generated from class `MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1;

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_Destroy()` to free it when you're done using it.
MR_C_API MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_DestroyArray()`.
// Use `MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_OffsetMutablePtr()` and `MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_OffsetPtr()` to access the array elements.
MR_C_API MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_DefaultConstructArray(size_t num_elems);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_OffsetPtr(const MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_OffsetMutablePtr(MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *ptr, ptrdiff_t i);

// Generated from constructor `MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>::A`.
// Parameter `_other` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_Destroy()` to free it when you're done using it.
MR_C_API MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_ConstructFromAnother(const MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *_other);

// Destroys a heap-allocated instance of `MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1`. Does nothing if the pointer is null.
MR_C_API void MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_Destroy(const MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *_this);

// Destroys a heap-allocated array of `MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1`. Does nothing if the pointer is null.
MR_C_API void MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_DestroyArray(const MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *_this);

// Generated from method `MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>::operator=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_other` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_AssignFromAnother(MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *_this, const MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *_other);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_MR_TEST_INCLUDES_FOR_ENUM_CONSTANTS_2_H
