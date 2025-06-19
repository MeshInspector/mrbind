#pragma once

#include <common.h>
#include <exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_array_int_42 MR_C_std_array_int_42; // Defined in `#include <std_array_int_42.h>`.
typedef struct MR_C_std_deque_int MR_C_std_deque_int; // Defined in `#include <std_deque_int.h>`.
typedef struct MR_C_std_list_int MR_C_std_list_int; // Defined in `#include <std_list_int.h>`.
typedef struct MR_C_std_map_int_float MR_C_std_map_int_float; // Defined in `#include <std_map_int_float.h>`.
typedef struct MR_C_std_multimap_int_float MR_C_std_multimap_int_float; // Defined in `#include <std_multimap_int_float.h>`.
typedef struct MR_C_std_multiset_float MR_C_std_multiset_float; // Defined in `#include <std_multiset_float.h>`.
typedef struct MR_C_std_multiset_int MR_C_std_multiset_int; // Defined in `#include <std_multiset_int.h>`.
typedef struct MR_C_std_set_float_const_iterator MR_C_std_set_float_const_iterator; // Defined in `#include <std_set_float.h>`.
typedef struct MR_C_std_set_int MR_C_std_set_int; // Defined in `#include <std_set_int.h>`.
typedef struct MR_C_std_unordered_map_int_float MR_C_std_unordered_map_int_float; // Defined in `#include <std_unordered_map_int_float.h>`.
typedef struct MR_C_std_unordered_multimap_int_float MR_C_std_unordered_multimap_int_float; // Defined in `#include <std_unordered_multimap_int_float.h>`.
typedef struct MR_C_std_unordered_multiset_int MR_C_std_unordered_multiset_int; // Defined in `#include <std_unordered_multiset_int.h>`.
typedef struct MR_C_std_unordered_set_int MR_C_std_unordered_set_int; // Defined in `#include <std_unordered_set_int.h>`.
typedef struct MR_C_std_vector_int MR_C_std_vector_int; // Defined in `#include <std_vector_int.h>`.


/// Generated from function `MR::StdContainers::Set`.
MR_C_API void MR_StdContainers_Set(MR_C_PassBy _1_pass_by, MR_C_std_vector_int *_1);

/// Generated from function `MR::StdContainers::SetWithDefault`.
/// Parameter `_1` has default argument: `{1, 2, 3}`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
MR_C_API void MR_StdContainers_SetWithDefault(MR_C_PassBy _1_pass_by, MR_C_std_vector_int *_1);

/// Generated from function `MR::StdContainers::Get`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_vector_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_int *MR_StdContainers_Get(void);

/// Generated from function `MR::StdContainers::WriteToRef`.
/// Parameter `_1` can not be null.
MR_C_API void MR_StdContainers_WriteToRef(MR_C_std_vector_int *_1);

/// Generated from function `MR::StdContainers::WriteToPtr`.
MR_C_API void MR_StdContainers_WriteToPtr(MR_C_std_vector_int *_1);

/// Generated from function `MR::StdContainers::ConstRef`.
/// Parameter `_1` can not be null.
MR_C_API void MR_StdContainers_ConstRef(const MR_C_std_vector_int *_1);

/// Generated from function `MR::StdContainers::RvalueRef`.
/// Parameter `_1` can not be null.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
MR_C_API void MR_StdContainers_RvalueRef(MR_C_std_vector_int *_1);

/// Generated from function `MR::StdContainers::ConstRvalueRef`.
/// Parameter `_1` can not be null.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
MR_C_API void MR_StdContainers_ConstRvalueRef(const MR_C_std_vector_int *_1);

// Just the list of other containers.
/// Generated from function `MR::StdContainers::GetDeque`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_deque_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_deque_int *MR_StdContainers_GetDeque(void);

/// Generated from function `MR::StdContainers::GetList`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_list_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_list_int *MR_StdContainers_GetList(void);

/// Generated from function `MR::StdContainers::GetSet`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_set_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_set_int *MR_StdContainers_GetSet(void);

/// Generated from function `MR::StdContainers::GetMultiSet`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_multiset_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multiset_int *MR_StdContainers_GetMultiSet(void);

/// Generated from function `MR::StdContainers::GetUnorderedSet`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_unordered_set_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unordered_set_int *MR_StdContainers_GetUnorderedSet(void);

/// Generated from function `MR::StdContainers::GetUnorderedMultiSet`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_unordered_multiset_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unordered_multiset_int *MR_StdContainers_GetUnorderedMultiSet(void);

/// Generated from function `MR::StdContainers::GetMap`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_map_int_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_map_int_float *MR_StdContainers_GetMap(void);

/// Generated from function `MR::StdContainers::GetMultiMap`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_multimap_int_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multimap_int_float *MR_StdContainers_GetMultiMap(void);

/// Generated from function `MR::StdContainers::GetUnorderedMap`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_unordered_map_int_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unordered_map_int_float *MR_StdContainers_GetUnorderedMap(void);

/// Generated from function `MR::StdContainers::GetUnorderedMultiMap`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_unordered_multimap_int_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unordered_multimap_int_float *MR_StdContainers_GetUnorderedMultiMap(void);

/// Generated from function `MR::StdContainers::GetStdArray`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_array_int_42_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_array_int_42 *MR_StdContainers_GetStdArray(void);

// For this `std::multiset` specialization, mention all iterators so that they get merged.
/// Generated from function `MR::StdContainers::GetMultiSetWithMergedIters`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_multiset_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multiset_float *MR_StdContainers_GetMultiSetWithMergedIters(void);

/// Generated from function `MR::StdContainers::GetMergedIter`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_set_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_set_float_const_iterator *MR_StdContainers_GetMergedIter(void);

/// Generated from function `MR::StdContainers::GetMergedIterConst`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_set_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_set_float_const_iterator *MR_StdContainers_GetMergedIterConst(void);

#ifdef __cplusplus
} // extern "C"
#endif
