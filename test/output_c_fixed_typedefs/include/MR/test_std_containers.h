#ifndef MR_C_DETAIL_INCLUDED_MR_TEST_STD_CONTAINERS_H
#define MR_C_DETAIL_INCLUDED_MR_TEST_STD_CONTAINERS_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <common.h>
#include <exports.h>
#include <std_array_int32_t_43.h>
#include <std_array_int32_t_array_4_array_3_5.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_array_MR_StdContainers_A_42 MR_C_std_array_MR_StdContainers_A_42; // Defined in `#include <std_array_MR_StdContainers_A_42.h>`.
typedef struct MR_C_std_array_MR_StdContainers_NonAssignable_42 MR_C_std_array_MR_StdContainers_NonAssignable_42; // Defined in `#include <std_array_MR_StdContainers_NonAssignable_42.h>`.
typedef struct MR_C_std_deque_MR_StdContainers_NonAssignable MR_C_std_deque_MR_StdContainers_NonAssignable; // Defined in `#include <std_deque_MR_StdContainers_NonAssignable.h>`.
typedef struct MR_C_std_deque_int32_t MR_C_std_deque_int32_t; // Defined in `#include <std_deque_int32_t.h>`.
typedef struct MR_C_std_list_MR_StdContainers_NonAssignable MR_C_std_list_MR_StdContainers_NonAssignable; // Defined in `#include <std_list_MR_StdContainers_NonAssignable.h>`.
typedef struct MR_C_std_list_int32_t MR_C_std_list_int32_t; // Defined in `#include <std_list_int32_t.h>`.
typedef struct MR_C_std_map_MR_StdContainers_NonAssignable_float MR_C_std_map_MR_StdContainers_NonAssignable_float; // Defined in `#include <std_map_MR_StdContainers_NonAssignable_float.h>`.
typedef struct MR_C_std_map_int32_t_float MR_C_std_map_int32_t_float; // Defined in `#include <std_map_int32_t_float.h>`.
typedef struct MR_C_std_multimap_MR_StdContainers_NonAssignable_float MR_C_std_multimap_MR_StdContainers_NonAssignable_float; // Defined in `#include <std_multimap_MR_StdContainers_NonAssignable_float.h>`.
typedef struct MR_C_std_multimap_int32_t_float MR_C_std_multimap_int32_t_float; // Defined in `#include <std_multimap_int32_t_float.h>`.
typedef struct MR_C_std_multiset_MR_StdContainers_NonAssignable MR_C_std_multiset_MR_StdContainers_NonAssignable; // Defined in `#include <std_multiset_MR_StdContainers_NonAssignable.h>`.
typedef struct MR_C_std_multiset_float MR_C_std_multiset_float; // Defined in `#include <std_multiset_float.h>`.
typedef struct MR_C_std_multiset_int32_t MR_C_std_multiset_int32_t; // Defined in `#include <std_multiset_int32_t.h>`.
typedef struct MR_C_std_set_MR_StdContainers_NonAssignable MR_C_std_set_MR_StdContainers_NonAssignable; // Defined in `#include <std_set_MR_StdContainers_NonAssignable.h>`.
typedef struct MR_C_std_set_float_const_iterator MR_C_std_set_float_const_iterator; // Defined in `#include <std_set_float.h>`.
typedef struct MR_C_std_set_int32_t MR_C_std_set_int32_t; // Defined in `#include <std_set_int32_t.h>`.
typedef struct MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float; // Defined in `#include <std_unordered_map_MR_StdContainers_NonAssignable_float.h>`.
typedef struct MR_C_std_unordered_map_int32_t_float MR_C_std_unordered_map_int32_t_float; // Defined in `#include <std_unordered_map_int32_t_float.h>`.
typedef struct MR_C_std_unordered_multimap_MR_StdContainers_NonAssignable_float MR_C_std_unordered_multimap_MR_StdContainers_NonAssignable_float; // Defined in `#include <std_unordered_multimap_MR_StdContainers_NonAssignable_float.h>`.
typedef struct MR_C_std_unordered_multimap_int32_t_float MR_C_std_unordered_multimap_int32_t_float; // Defined in `#include <std_unordered_multimap_int32_t_float.h>`.
typedef struct MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable; // Defined in `#include <std_unordered_multiset_MR_StdContainers_NonAssignable.h>`.
typedef struct MR_C_std_unordered_multiset_int32_t MR_C_std_unordered_multiset_int32_t; // Defined in `#include <std_unordered_multiset_int32_t.h>`.
typedef struct MR_C_std_unordered_set_MR_StdContainers_NonAssignable MR_C_std_unordered_set_MR_StdContainers_NonAssignable; // Defined in `#include <std_unordered_set_MR_StdContainers_NonAssignable.h>`.
typedef struct MR_C_std_unordered_set_int32_t MR_C_std_unordered_set_int32_t; // Defined in `#include <std_unordered_set_int32_t.h>`.
typedef struct MR_C_std_vector_MR_StdContainers_NonAssignable MR_C_std_vector_MR_StdContainers_NonAssignable; // Defined in `#include <std_vector_MR_StdContainers_NonAssignable.h>`.
typedef struct MR_C_std_vector_MR_StdContainers_NonDefaultConstructible MR_C_std_vector_MR_StdContainers_NonDefaultConstructible; // Defined in `#include <std_vector_MR_StdContainers_NonDefaultConstructible.h>`.
typedef struct MR_C_std_vector_int32_t MR_C_std_vector_int32_t; // Defined in `#include <std_vector_int32_t.h>`.


// `std::array` behaves differently with simple types.
// Generated from class `MR::StdContainers::A`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_StdContainers_A MR_StdContainers_A;

// Test vectors of a non-default-constructible type.
// Generated from class `MR::StdContainers::NonDefaultConstructible`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_StdContainers_NonDefaultConstructible MR_StdContainers_NonDefaultConstructible;

// A non-assignable type?
// Generated from class `MR::StdContainers::NonAssignable`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_StdContainers_NonAssignable MR_StdContainers_NonAssignable;

// Generated from function `MR::StdContainers::Set`.
MR_C_API void MR_StdContainers_Set(MR_C_PassBy _1_pass_by, MR_C_std_vector_int32_t *_1);

// Generated from function `MR::StdContainers::SetWithDefault`.
// Parameter `_1` has a default argument: `{1, 2, 3}`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
MR_C_API void MR_StdContainers_SetWithDefault(MR_C_PassBy _1_pass_by, MR_C_std_vector_int32_t *_1);

// Generated from function `MR::StdContainers::Get`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_int32_t *MR_StdContainers_Get(void);

// Generated from function `MR::StdContainers::WriteToRef`.
// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_StdContainers_WriteToRef(MR_C_std_vector_int32_t *_1);

// Generated from function `MR::StdContainers::WriteToPtr`.
MR_C_API void MR_StdContainers_WriteToPtr(MR_C_std_vector_int32_t *_1);

// Generated from function `MR::StdContainers::ConstRef`.
// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_StdContainers_ConstRef(const MR_C_std_vector_int32_t *_1);

// Generated from function `MR::StdContainers::RvalueRef`.
// Parameter `_1` can not be null. It is a single object.
// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
//   but if your pointer is owning, you must still destroy it manually later.
MR_C_API void MR_StdContainers_RvalueRef(MR_C_std_vector_int32_t *_1);

// Generated from function `MR::StdContainers::ConstRvalueRef`.
// Parameter `_1` can not be null. It is a single object.
// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
//   but if your pointer is owning, you must still destroy it manually later.
MR_C_API void MR_StdContainers_ConstRvalueRef(const MR_C_std_vector_int32_t *_1);

// Just the list of other containers.
// Generated from function `MR::StdContainers::GetDeque`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_deque_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_deque_int32_t *MR_StdContainers_GetDeque(void);

// Generated from function `MR::StdContainers::GetList`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_list_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_list_int32_t *MR_StdContainers_GetList(void);

// Generated from function `MR::StdContainers::GetSet`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_set_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_set_int32_t *MR_StdContainers_GetSet(void);

// Generated from function `MR::StdContainers::GetMultiSet`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_multiset_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multiset_int32_t *MR_StdContainers_GetMultiSet(void);

// Generated from function `MR::StdContainers::GetUnorderedSet`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_unordered_set_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unordered_set_int32_t *MR_StdContainers_GetUnorderedSet(void);

// Generated from function `MR::StdContainers::GetUnorderedMultiSet`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_unordered_multiset_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unordered_multiset_int32_t *MR_StdContainers_GetUnorderedMultiSet(void);

// Generated from function `MR::StdContainers::GetMap`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_map_int32_t_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_map_int32_t_float *MR_StdContainers_GetMap(void);

// Generated from function `MR::StdContainers::GetMultiMap`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_multimap_int32_t_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multimap_int32_t_float *MR_StdContainers_GetMultiMap(void);

// Generated from function `MR::StdContainers::GetUnorderedMap`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_unordered_map_int32_t_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unordered_map_int32_t_float *MR_StdContainers_GetUnorderedMap(void);

// Generated from function `MR::StdContainers::GetUnorderedMultiMap`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_unordered_multimap_int32_t_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unordered_multimap_int32_t_float *MR_StdContainers_GetUnorderedMultiMap(void);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_StdContainers_A_Destroy()` to free it when you're done using it.
MR_C_API MR_StdContainers_A *MR_StdContainers_A_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_StdContainers_A_DestroyArray()`.
// Use `MR_StdContainers_A_OffsetMutablePtr()` and `MR_StdContainers_A_OffsetPtr()` to access the array elements.
MR_C_API MR_StdContainers_A *MR_StdContainers_A_DefaultConstructArray(size_t num_elems);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_StdContainers_A *MR_StdContainers_A_OffsetPtr(const MR_StdContainers_A *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_StdContainers_A *MR_StdContainers_A_OffsetMutablePtr(MR_StdContainers_A *ptr, ptrdiff_t i);

// Generated from constructor `MR::StdContainers::A::A`.
// Parameter `_other` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_StdContainers_A_Destroy()` to free it when you're done using it.
MR_C_API MR_StdContainers_A *MR_StdContainers_A_ConstructFromAnother(const MR_StdContainers_A *_other);

// Destroys a heap-allocated instance of `MR_StdContainers_A`. Does nothing if the pointer is null.
MR_C_API void MR_StdContainers_A_Destroy(const MR_StdContainers_A *_this);

// Destroys a heap-allocated array of `MR_StdContainers_A`. Does nothing if the pointer is null.
MR_C_API void MR_StdContainers_A_DestroyArray(const MR_StdContainers_A *_this);

// Generated from method `MR::StdContainers::A::operator=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_other` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_StdContainers_A *MR_StdContainers_A_AssignFromAnother(MR_StdContainers_A *_this, const MR_StdContainers_A *_other);

// Generated from function `MR::StdContainers::GetStdArray`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_array_MR_StdContainers_A_42_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_array_MR_StdContainers_A_42 *MR_StdContainers_GetStdArray(void);

// Generated from function `MR::StdContainers::GetStdArraySimple`.
MR_C_API MR_C_std_array_int32_t_43 MR_StdContainers_GetStdArraySimple(void);

// The custom simple array needs a bit more testing:
// Generated from function `MR::StdContainers::StdArraySimpleParam`.
MR_C_API void MR_StdContainers_StdArraySimpleParam(MR_C_std_array_int32_t_43 _1);

// Generated from function `MR::StdContainers::StdArraySimplePtr`.
MR_C_API MR_C_std_array_int32_t_43 *MR_StdContainers_StdArraySimplePtr(MR_C_std_array_int32_t_43 *param);

// For this `std::multiset` specialization, mention all iterators so that they get merged.
// Generated from function `MR::StdContainers::GetMultiSetWithMergedIters`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_multiset_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multiset_float *MR_StdContainers_GetMultiSetWithMergedIters(void);

// Generated from function `MR::StdContainers::GetMergedIter`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_set_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_set_float_const_iterator *MR_StdContainers_GetMergedIter(void);

// Generated from function `MR::StdContainers::GetMergedIterConst`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_set_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_set_float_const_iterator *MR_StdContainers_GetMergedIterConst(void);

// Generated from constructor `MR::StdContainers::NonDefaultConstructible::NonDefaultConstructible`.
// Parameter `_other` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_StdContainers_NonDefaultConstructible_Destroy()` to free it when you're done using it.
MR_C_API MR_StdContainers_NonDefaultConstructible *MR_StdContainers_NonDefaultConstructible_ConstructFromAnother(const MR_StdContainers_NonDefaultConstructible *_other);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_StdContainers_NonDefaultConstructible *MR_StdContainers_NonDefaultConstructible_OffsetPtr(const MR_StdContainers_NonDefaultConstructible *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_StdContainers_NonDefaultConstructible *MR_StdContainers_NonDefaultConstructible_OffsetMutablePtr(MR_StdContainers_NonDefaultConstructible *ptr, ptrdiff_t i);

// Generated from constructor `MR::StdContainers::NonDefaultConstructible::NonDefaultConstructible`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_StdContainers_NonDefaultConstructible_Destroy()` to free it when you're done using it.
MR_C_API MR_StdContainers_NonDefaultConstructible *MR_StdContainers_NonDefaultConstructible_Construct(int32_t _1);

// Destroys a heap-allocated instance of `MR_StdContainers_NonDefaultConstructible`. Does nothing if the pointer is null.
MR_C_API void MR_StdContainers_NonDefaultConstructible_Destroy(const MR_StdContainers_NonDefaultConstructible *_this);

// Destroys a heap-allocated array of `MR_StdContainers_NonDefaultConstructible`. Does nothing if the pointer is null.
MR_C_API void MR_StdContainers_NonDefaultConstructible_DestroyArray(const MR_StdContainers_NonDefaultConstructible *_this);

// Generated from method `MR::StdContainers::NonDefaultConstructible::operator=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_other` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_StdContainers_NonDefaultConstructible *MR_StdContainers_NonDefaultConstructible_AssignFromAnother(MR_StdContainers_NonDefaultConstructible *_this, const MR_StdContainers_NonDefaultConstructible *_other);

// Generated from function `MR::StdContainers::NonDefCon`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_StdContainers_NonDefCon(void);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_StdContainers_NonAssignable_Destroy()` to free it when you're done using it.
MR_C_API MR_StdContainers_NonAssignable *MR_StdContainers_NonAssignable_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_StdContainers_NonAssignable_DestroyArray()`.
// Use `MR_StdContainers_NonAssignable_OffsetMutablePtr()` and `MR_StdContainers_NonAssignable_OffsetPtr()` to access the array elements.
MR_C_API MR_StdContainers_NonAssignable *MR_StdContainers_NonAssignable_DefaultConstructArray(size_t num_elems);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_StdContainers_NonAssignable *MR_StdContainers_NonAssignable_OffsetPtr(const MR_StdContainers_NonAssignable *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_StdContainers_NonAssignable *MR_StdContainers_NonAssignable_OffsetMutablePtr(MR_StdContainers_NonAssignable *ptr, ptrdiff_t i);

// Generated from constructor `MR::StdContainers::NonAssignable::NonAssignable`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_StdContainers_NonAssignable_Destroy()` to free it when you're done using it.
MR_C_API MR_StdContainers_NonAssignable *MR_StdContainers_NonAssignable_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_StdContainers_NonAssignable *_other);

// Destroys a heap-allocated instance of `MR_StdContainers_NonAssignable`. Does nothing if the pointer is null.
MR_C_API void MR_StdContainers_NonAssignable_Destroy(const MR_StdContainers_NonAssignable *_this);

// Destroys a heap-allocated array of `MR_StdContainers_NonAssignable`. Does nothing if the pointer is null.
MR_C_API void MR_StdContainers_NonAssignable_DestroyArray(const MR_StdContainers_NonAssignable *_this);

// Generated from method `MR::StdContainers::NonAssignable::operator<`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API bool MR_C_less_MR_StdContainers_NonAssignable(const MR_StdContainers_NonAssignable *_this, MR_C_PassBy _1_pass_by, MR_StdContainers_NonAssignable *_1);

// Generated from method `MR::StdContainers::NonAssignable::operator==`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API bool MR_C_equal_MR_StdContainers_NonAssignable(const MR_StdContainers_NonAssignable *_this, MR_C_PassBy _1_pass_by, MR_StdContainers_NonAssignable *_1);

// Generated from function `MR::StdContainers::GetVectorNA`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_StdContainers_NonAssignable_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_StdContainers_NonAssignable *MR_StdContainers_GetVectorNA(void);

// Generated from function `MR::StdContainers::GetDequeNA`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_deque_MR_StdContainers_NonAssignable_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_deque_MR_StdContainers_NonAssignable *MR_StdContainers_GetDequeNA(void);

// Generated from function `MR::StdContainers::GetListNA`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_list_MR_StdContainers_NonAssignable_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_list_MR_StdContainers_NonAssignable *MR_StdContainers_GetListNA(void);

// Generated from function `MR::StdContainers::GetSetNA`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_set_MR_StdContainers_NonAssignable_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_set_MR_StdContainers_NonAssignable *MR_StdContainers_GetSetNA(void);

// Generated from function `MR::StdContainers::GetMultiSetNA`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_multiset_MR_StdContainers_NonAssignable_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multiset_MR_StdContainers_NonAssignable *MR_StdContainers_GetMultiSetNA(void);

// Generated from function `MR::StdContainers::GetUnorderedSetNA`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_unordered_set_MR_StdContainers_NonAssignable_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unordered_set_MR_StdContainers_NonAssignable *MR_StdContainers_GetUnorderedSetNA(void);

// Generated from function `MR::StdContainers::GetUnorderedMultiSetNA`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable *MR_StdContainers_GetUnorderedMultiSetNA(void);

// Generated from function `MR::StdContainers::GetMapNA`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_map_MR_StdContainers_NonAssignable_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_map_MR_StdContainers_NonAssignable_float *MR_StdContainers_GetMapNA(void);

// Generated from function `MR::StdContainers::GetMultiMapNA`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multimap_MR_StdContainers_NonAssignable_float *MR_StdContainers_GetMultiMapNA(void);

// Generated from function `MR::StdContainers::GetUnorderedMapNA`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *MR_StdContainers_GetUnorderedMapNA(void);

// Generated from function `MR::StdContainers::GetUnorderedMultiMapNA`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_unordered_multimap_MR_StdContainers_NonAssignable_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unordered_multimap_MR_StdContainers_NonAssignable_float *MR_StdContainers_GetUnorderedMultiMapNA(void);

// Generated from function `MR::StdContainers::GetStdArrayNA`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_array_MR_StdContainers_NonAssignable_42_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_array_MR_StdContainers_NonAssignable_42 *MR_StdContainers_GetStdArrayNA(void);

// Fun stuff!
// The type name is a bit weird for this, but at least it works.
// Generated from function `MR::StdContainers::GetStdArrayOfPlainArray`.
MR_C_API MR_C_std_array_int32_t_array_4_array_3_5 MR_StdContainers_GetStdArrayOfPlainArray(void);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_MR_TEST_STD_CONTAINERS_H

#if !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_MR_TEST_STD_CONTAINERS_H_2)
#define MR_C_DETAIL_INCLUDED_MR_TEST_STD_CONTAINERS_H_2

// Convenience includes for types mentioned in this header. They are here at the bottom to make circular includes harmless.

#include <std_array_MR_StdContainers_A_42.h>
#include <std_array_MR_StdContainers_NonAssignable_42.h>
#include <std_array_int32_t_43.h>
#include <std_array_int32_t_array_4_array_3_5.h>
#include <std_deque_MR_StdContainers_NonAssignable.h>
#include <std_deque_int32_t.h>
#include <std_list_MR_StdContainers_NonAssignable.h>
#include <std_list_int32_t.h>
#include <std_map_MR_StdContainers_NonAssignable_float.h>
#include <std_map_int32_t_float.h>
#include <std_multimap_MR_StdContainers_NonAssignable_float.h>
#include <std_multimap_int32_t_float.h>
#include <std_multiset_MR_StdContainers_NonAssignable.h>
#include <std_multiset_float.h>
#include <std_multiset_int32_t.h>
#include <std_set_MR_StdContainers_NonAssignable.h>
#include <std_set_float.h>
#include <std_set_int32_t.h>
#include <std_unordered_map_MR_StdContainers_NonAssignable_float.h>
#include <std_unordered_map_int32_t_float.h>
#include <std_unordered_multimap_MR_StdContainers_NonAssignable_float.h>
#include <std_unordered_multimap_int32_t_float.h>
#include <std_unordered_multiset_MR_StdContainers_NonAssignable.h>
#include <std_unordered_multiset_int32_t.h>
#include <std_unordered_set_MR_StdContainers_NonAssignable.h>
#include <std_unordered_set_int32_t.h>
#include <std_vector_MR_StdContainers_NonAssignable.h>
#include <std_vector_MR_StdContainers_NonDefaultConstructible.h>
#include <std_vector_int32_t.h>

#endif // !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_MR_TEST_STD_CONTAINERS_H_2)
