#ifndef MR_C_DETAIL_INCLUDED_MR_TEST_TYPEDEFS_IN_TEMPLATES_H
#define MR_C_DETAIL_INCLUDED_MR_TEST_TYPEDEFS_IN_TEMPLATES_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


// This tests a specific Clang bug/quirk.
// Certain typedefs in templates get their names printed without the template arguments of the enclosing class template, breaking our code generation.
// Generated from class `MR::TypedefsInTemplates::A<int32_t>`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_TypedefsInTemplates_A_int32_t MR_TypedefsInTemplates_A_int32_t;

// Generated from class `MR::TypedefsInTemplates::B<int32_t>::BB<float>`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_TypedefsInTemplates_B_int32_t_BB_float MR_TypedefsInTemplates_B_int32_t_BB_float;

// Generated from class `MR::TypedefsInTemplates::B<int32_t>`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_TypedefsInTemplates_B_int32_t MR_TypedefsInTemplates_B_int32_t;

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_TypedefsInTemplates_A_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_TypedefsInTemplates_A_int32_t *MR_TypedefsInTemplates_A_int32_t_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_TypedefsInTemplates_A_int32_t_DestroyArray()`.
// Use `MR_TypedefsInTemplates_A_int32_t_OffsetMutablePtr()` and `MR_TypedefsInTemplates_A_int32_t_OffsetPtr()` to access the array elements.
MR_C_API MR_TypedefsInTemplates_A_int32_t *MR_TypedefsInTemplates_A_int32_t_DefaultConstructArray(size_t num_elems);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_TypedefsInTemplates_A_int32_t *MR_TypedefsInTemplates_A_int32_t_OffsetPtr(const MR_TypedefsInTemplates_A_int32_t *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_TypedefsInTemplates_A_int32_t *MR_TypedefsInTemplates_A_int32_t_OffsetMutablePtr(MR_TypedefsInTemplates_A_int32_t *ptr, ptrdiff_t i);

// Generated from constructor `MR::TypedefsInTemplates::A<int32_t>::A`.
// Parameter `_other` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_TypedefsInTemplates_A_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_TypedefsInTemplates_A_int32_t *MR_TypedefsInTemplates_A_int32_t_ConstructFromAnother(const MR_TypedefsInTemplates_A_int32_t *_other);

// Destroys a heap-allocated instance of `MR_TypedefsInTemplates_A_int32_t`. Does nothing if the pointer is null.
MR_C_API void MR_TypedefsInTemplates_A_int32_t_Destroy(const MR_TypedefsInTemplates_A_int32_t *_this);

// Destroys a heap-allocated array of `MR_TypedefsInTemplates_A_int32_t`. Does nothing if the pointer is null.
MR_C_API void MR_TypedefsInTemplates_A_int32_t_DestroyArray(const MR_TypedefsInTemplates_A_int32_t *_this);

// Generated from method `MR::TypedefsInTemplates::A<int32_t>::operator=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_other` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_TypedefsInTemplates_A_int32_t *MR_TypedefsInTemplates_A_int32_t_AssignFromAnother(MR_TypedefsInTemplates_A_int32_t *_this, const MR_TypedefsInTemplates_A_int32_t *_other);

// Generated from method `MR::TypedefsInTemplates::A<int32_t>::foo`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API int32_t MR_TypedefsInTemplates_A_int32_t_foo(MR_TypedefsInTemplates_A_int32_t *_this);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_TypedefsInTemplates_B_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_TypedefsInTemplates_B_int32_t *MR_TypedefsInTemplates_B_int32_t_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_TypedefsInTemplates_B_int32_t_DestroyArray()`.
// Use `MR_TypedefsInTemplates_B_int32_t_OffsetMutablePtr()` and `MR_TypedefsInTemplates_B_int32_t_OffsetPtr()` to access the array elements.
MR_C_API MR_TypedefsInTemplates_B_int32_t *MR_TypedefsInTemplates_B_int32_t_DefaultConstructArray(size_t num_elems);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_TypedefsInTemplates_B_int32_t *MR_TypedefsInTemplates_B_int32_t_OffsetPtr(const MR_TypedefsInTemplates_B_int32_t *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_TypedefsInTemplates_B_int32_t *MR_TypedefsInTemplates_B_int32_t_OffsetMutablePtr(MR_TypedefsInTemplates_B_int32_t *ptr, ptrdiff_t i);

// Generated from constructor `MR::TypedefsInTemplates::B<int32_t>::B`.
// Parameter `_other` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_TypedefsInTemplates_B_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_TypedefsInTemplates_B_int32_t *MR_TypedefsInTemplates_B_int32_t_ConstructFromAnother(const MR_TypedefsInTemplates_B_int32_t *_other);

// Destroys a heap-allocated instance of `MR_TypedefsInTemplates_B_int32_t`. Does nothing if the pointer is null.
MR_C_API void MR_TypedefsInTemplates_B_int32_t_Destroy(const MR_TypedefsInTemplates_B_int32_t *_this);

// Destroys a heap-allocated array of `MR_TypedefsInTemplates_B_int32_t`. Does nothing if the pointer is null.
MR_C_API void MR_TypedefsInTemplates_B_int32_t_DestroyArray(const MR_TypedefsInTemplates_B_int32_t *_this);

// Generated from method `MR::TypedefsInTemplates::B<int32_t>::operator=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_other` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_TypedefsInTemplates_B_int32_t *MR_TypedefsInTemplates_B_int32_t_AssignFromAnother(MR_TypedefsInTemplates_B_int32_t *_this, const MR_TypedefsInTemplates_B_int32_t *_other);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_TypedefsInTemplates_B_int32_t_BB_float_Destroy()` to free it when you're done using it.
MR_C_API MR_TypedefsInTemplates_B_int32_t_BB_float *MR_TypedefsInTemplates_B_int32_t_BB_float_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_TypedefsInTemplates_B_int32_t_BB_float_DestroyArray()`.
// Use `MR_TypedefsInTemplates_B_int32_t_BB_float_OffsetMutablePtr()` and `MR_TypedefsInTemplates_B_int32_t_BB_float_OffsetPtr()` to access the array elements.
MR_C_API MR_TypedefsInTemplates_B_int32_t_BB_float *MR_TypedefsInTemplates_B_int32_t_BB_float_DefaultConstructArray(size_t num_elems);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_TypedefsInTemplates_B_int32_t_BB_float *MR_TypedefsInTemplates_B_int32_t_BB_float_OffsetPtr(const MR_TypedefsInTemplates_B_int32_t_BB_float *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_TypedefsInTemplates_B_int32_t_BB_float *MR_TypedefsInTemplates_B_int32_t_BB_float_OffsetMutablePtr(MR_TypedefsInTemplates_B_int32_t_BB_float *ptr, ptrdiff_t i);

// Generated from constructor `MR::TypedefsInTemplates::B<int32_t>::BB<float>::BB`.
// Parameter `_other` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_TypedefsInTemplates_B_int32_t_BB_float_Destroy()` to free it when you're done using it.
MR_C_API MR_TypedefsInTemplates_B_int32_t_BB_float *MR_TypedefsInTemplates_B_int32_t_BB_float_ConstructFromAnother(const MR_TypedefsInTemplates_B_int32_t_BB_float *_other);

// Destroys a heap-allocated instance of `MR_TypedefsInTemplates_B_int32_t_BB_float`. Does nothing if the pointer is null.
MR_C_API void MR_TypedefsInTemplates_B_int32_t_BB_float_Destroy(const MR_TypedefsInTemplates_B_int32_t_BB_float *_this);

// Destroys a heap-allocated array of `MR_TypedefsInTemplates_B_int32_t_BB_float`. Does nothing if the pointer is null.
MR_C_API void MR_TypedefsInTemplates_B_int32_t_BB_float_DestroyArray(const MR_TypedefsInTemplates_B_int32_t_BB_float *_this);

// Generated from method `MR::TypedefsInTemplates::B<int32_t>::BB<float>::operator=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_other` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_TypedefsInTemplates_B_int32_t_BB_float *MR_TypedefsInTemplates_B_int32_t_BB_float_AssignFromAnother(MR_TypedefsInTemplates_B_int32_t_BB_float *_this, const MR_TypedefsInTemplates_B_int32_t_BB_float *_other);

// Generated from method `MR::TypedefsInTemplates::B<int32_t>::BB<float>::foo`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API int32_t MR_TypedefsInTemplates_B_int32_t_BB_float_foo(MR_TypedefsInTemplates_B_int32_t_BB_float *_this);

// Generated from method `MR::TypedefsInTemplates::B<int32_t>::BB<float>::foo2`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API int32_t MR_TypedefsInTemplates_B_int32_t_BB_float_foo2(MR_TypedefsInTemplates_B_int32_t_BB_float *_this);

// Generated from function `MR::TypedefsInTemplates::bar`.
MR_C_API void MR_TypedefsInTemplates_bar(int32_t _1);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_MR_TEST_TYPEDEFS_IN_TEMPLATES_H
