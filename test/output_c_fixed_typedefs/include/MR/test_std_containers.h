#pragma once

#include <common.h>
#include <exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_array_int32_t_42 MR_C_std_array_int32_t_42; // Defined in `#include <std_array_int32_t_42.h>`.
typedef struct MR_C_std_deque_int32_t MR_C_std_deque_int32_t; // Defined in `#include <std_deque_int32_t.h>`.
typedef struct MR_C_std_list_int32_t MR_C_std_list_int32_t; // Defined in `#include <std_list_int32_t.h>`.
typedef struct MR_C_std_map_int32_t_float MR_C_std_map_int32_t_float; // Defined in `#include <std_map_int32_t_float.h>`.
typedef struct MR_C_std_multimap_int32_t_float MR_C_std_multimap_int32_t_float; // Defined in `#include <std_multimap_int32_t_float.h>`.
typedef struct MR_C_std_multiset_float MR_C_std_multiset_float; // Defined in `#include <std_multiset_float.h>`.
typedef struct MR_C_std_multiset_int32_t MR_C_std_multiset_int32_t; // Defined in `#include <std_multiset_int32_t.h>`.
typedef struct MR_C_std_set_float_const_iterator MR_C_std_set_float_const_iterator; // Defined in `#include <std_set_float.h>`.
typedef struct MR_C_std_set_int32_t MR_C_std_set_int32_t; // Defined in `#include <std_set_int32_t.h>`.
typedef struct MR_C_std_unordered_map_int32_t_float MR_C_std_unordered_map_int32_t_float; // Defined in `#include <std_unordered_map_int32_t_float.h>`.
typedef struct MR_C_std_unordered_multimap_int32_t_float MR_C_std_unordered_multimap_int32_t_float; // Defined in `#include <std_unordered_multimap_int32_t_float.h>`.
typedef struct MR_C_std_unordered_multiset_int32_t MR_C_std_unordered_multiset_int32_t; // Defined in `#include <std_unordered_multiset_int32_t.h>`.
typedef struct MR_C_std_unordered_set_int32_t MR_C_std_unordered_set_int32_t; // Defined in `#include <std_unordered_set_int32_t.h>`.
typedef struct MR_C_std_vector_MR_StdContainers_NonDefaultConstructible MR_C_std_vector_MR_StdContainers_NonDefaultConstructible; // Defined in `#include <std_vector_MR_StdContainers_NonDefaultConstructible.h>`.
typedef struct MR_C_std_vector_int32_t MR_C_std_vector_int32_t; // Defined in `#include <std_vector_int32_t.h>`.
typedef struct MR_StdContainers_NonDefaultConstructible MR_StdContainers_NonDefaultConstructible; // Defined below in this file.


/// Generated from function `MR::StdContainers::Set`.
MR_C_API void MR_StdContainers_Set(MR_C_PassBy _1_pass_by, MR_C_std_vector_int32_t *_1);

/// Generated from function `MR::StdContainers::SetWithDefault`.
/// Parameter `_1` has a default argument: `{1, 2, 3}`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
MR_C_API void MR_StdContainers_SetWithDefault(MR_C_PassBy _1_pass_by, MR_C_std_vector_int32_t *_1);

/// Generated from function `MR::StdContainers::Get`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_int32_t *MR_StdContainers_Get(void);

/// Generated from function `MR::StdContainers::WriteToRef`.
/// Parameter `_1` can not be null.
MR_C_API void MR_StdContainers_WriteToRef(MR_C_std_vector_int32_t *_1);

/// Generated from function `MR::StdContainers::WriteToPtr`.
MR_C_API void MR_StdContainers_WriteToPtr(MR_C_std_vector_int32_t *_1);

/// Generated from function `MR::StdContainers::ConstRef`.
/// Parameter `_1` can not be null.
MR_C_API void MR_StdContainers_ConstRef(const MR_C_std_vector_int32_t *_1);

/// Generated from function `MR::StdContainers::RvalueRef`.
/// Parameter `_1` can not be null.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
MR_C_API void MR_StdContainers_RvalueRef(MR_C_std_vector_int32_t *_1);

/// Generated from function `MR::StdContainers::ConstRvalueRef`.
/// Parameter `_1` can not be null.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
MR_C_API void MR_StdContainers_ConstRvalueRef(const MR_C_std_vector_int32_t *_1);

// Just the list of other containers.
/// Generated from function `MR::StdContainers::GetDeque`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_deque_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_deque_int32_t *MR_StdContainers_GetDeque(void);

/// Generated from function `MR::StdContainers::GetList`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_list_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_list_int32_t *MR_StdContainers_GetList(void);

/// Generated from function `MR::StdContainers::GetSet`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_set_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_set_int32_t *MR_StdContainers_GetSet(void);

/// Generated from function `MR::StdContainers::GetMultiSet`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_multiset_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multiset_int32_t *MR_StdContainers_GetMultiSet(void);

/// Generated from function `MR::StdContainers::GetUnorderedSet`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_unordered_set_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unordered_set_int32_t *MR_StdContainers_GetUnorderedSet(void);

/// Generated from function `MR::StdContainers::GetUnorderedMultiSet`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_unordered_multiset_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unordered_multiset_int32_t *MR_StdContainers_GetUnorderedMultiSet(void);

/// Generated from function `MR::StdContainers::GetMap`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_map_int32_t_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_map_int32_t_float *MR_StdContainers_GetMap(void);

/// Generated from function `MR::StdContainers::GetMultiMap`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_multimap_int32_t_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multimap_int32_t_float *MR_StdContainers_GetMultiMap(void);

/// Generated from function `MR::StdContainers::GetUnorderedMap`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_unordered_map_int32_t_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unordered_map_int32_t_float *MR_StdContainers_GetUnorderedMap(void);

/// Generated from function `MR::StdContainers::GetUnorderedMultiMap`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_unordered_multimap_int32_t_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unordered_multimap_int32_t_float *MR_StdContainers_GetUnorderedMultiMap(void);

/// Generated from function `MR::StdContainers::GetStdArray`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_array_int32_t_42_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_array_int32_t_42 *MR_StdContainers_GetStdArray(void);

// For this `std::multiset` specialization, mention all iterators so that they get merged.
/// Generated from function `MR::StdContainers::GetMultiSetWithMergedIters`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_multiset_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multiset_float *MR_StdContainers_GetMultiSetWithMergedIters(void);

/// Generated from function `MR::StdContainers::GetMergedIter`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_set_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_set_float_const_iterator *MR_StdContainers_GetMergedIter(void);

/// Generated from function `MR::StdContainers::GetMergedIterConst`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_set_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_set_float_const_iterator *MR_StdContainers_GetMergedIterConst(void);

// Test vectors of a non-default-constructible type.
/// Generated from class `MR::StdContainers::NonDefaultConstructible`.
typedef struct MR_StdContainers_NonDefaultConstructible MR_StdContainers_NonDefaultConstructible;

/// Generated from a constructor of class `MR::StdContainers::NonDefaultConstructible`.
/// Parameter `_other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_StdContainers_NonDefaultConstructible_Destroy()` to free it when you're done using it.
MR_C_API MR_StdContainers_NonDefaultConstructible *MR_StdContainers_NonDefaultConstructible_ConstructFromAnother(const MR_StdContainers_NonDefaultConstructible *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_StdContainers_NonDefaultConstructible *MR_StdContainers_NonDefaultConstructible_OffsetPtr(const MR_StdContainers_NonDefaultConstructible *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_StdContainers_NonDefaultConstructible *MR_StdContainers_NonDefaultConstructible_OffsetMutablePtr(MR_StdContainers_NonDefaultConstructible *ptr, ptrdiff_t i);

/// Generated from a method of class `MR::StdContainers::NonDefaultConstructible` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_StdContainers_NonDefaultConstructible *MR_StdContainers_NonDefaultConstructible_AssignFromAnother(MR_StdContainers_NonDefaultConstructible *_this, const MR_StdContainers_NonDefaultConstructible *_other);

/// Destroys a heap-allocated instance of `MR_StdContainers_NonDefaultConstructible`. Does nothing if the pointer is null.
MR_C_API void MR_StdContainers_NonDefaultConstructible_Destroy(const MR_StdContainers_NonDefaultConstructible *_this);

/// Destroys a heap-allocated array of `MR_StdContainers_NonDefaultConstructible`. Does nothing if the pointer is null.
MR_C_API void MR_StdContainers_NonDefaultConstructible_DestroyArray(const MR_StdContainers_NonDefaultConstructible *_this);

/// Generated from a constructor of class `MR::StdContainers::NonDefaultConstructible`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_StdContainers_NonDefaultConstructible_Destroy()` to free it when you're done using it.
MR_C_API MR_StdContainers_NonDefaultConstructible *MR_StdContainers_NonDefaultConstructible_Construct(int32_t _1);

/// Generated from function `MR::StdContainers::NonDefCon`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_StdContainers_NonDefCon(void);

#ifdef __cplusplus
} // extern "C"
#endif
