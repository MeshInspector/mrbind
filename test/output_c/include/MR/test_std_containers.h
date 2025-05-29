#pragma once

#include <exports.h>
#include <pass_by.h>
#include <std_deque_int.h>
#include <std_list_int.h>
#include <std_multiset_int.h>
#include <std_set_int.h>
#include <std_unordered_multiset_int.h>
#include <std_unordered_set_int.h>
#include <std_vector_int.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from function `MR::StdContainers::Set`.
MR_C_API void MR_StdContainers_Set(MR_C_PassBy _1_pass_by, MR_C_std_vector_int *_1);

/// Generated from function `MR::StdContainers::SetWithDefault`.
/// Parameter `_1` has a default argument: `{1, 2, 3}`.
///   To use the default argument, pass `MR_C_PassBy_DefaultArgument` and a null pointer.
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

#ifdef __cplusplus
} // extern "C"
#endif
