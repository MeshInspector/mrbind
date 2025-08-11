#ifndef MR_C_DETAIL_INCLUDED_MR_TEST_NESTED_CLASS_TEMPLATE_INST_H
#define MR_C_DETAIL_INCLUDED_MR_TEST_NESTED_CLASS_TEMPLATE_INST_H

#pragma push_macro("MR_C_DETAIL_CONVENIENCE_INCLUDES")
#define MR_C_DETAIL_CONVENIENCE_INCLUDES
#include <exports.h>
#pragma pop_macro("MR_C_DETAIL_CONVENIENCE_INCLUDES")

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


// Generated from class `MR::NestedTemplateInst::A<int32_t>`.
typedef struct MR_NestedTemplateInst_A_int32_t MR_NestedTemplateInst_A_int32_t;

// This struct needs special care to be instantiated, even with the typedef below. Hmm.
// Generated from class `MR::NestedTemplateInst::A<int32_t>::AA<float>`.
typedef struct MR_NestedTemplateInst_A_int32_t_AA_float MR_NestedTemplateInst_A_int32_t_AA_float;

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_NestedTemplateInst_A_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_NestedTemplateInst_A_int32_t *MR_NestedTemplateInst_A_int32_t_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_NestedTemplateInst_A_int32_t_DestroyArray()`.
// Use `MR_NestedTemplateInst_A_int32_t_OffsetMutablePtr()` and `MR_NestedTemplateInst_A_int32_t_OffsetPtr()` to access the array elements.
MR_C_API MR_NestedTemplateInst_A_int32_t *MR_NestedTemplateInst_A_int32_t_DefaultConstructArray(size_t num_elems);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_NestedTemplateInst_A_int32_t *MR_NestedTemplateInst_A_int32_t_OffsetPtr(const MR_NestedTemplateInst_A_int32_t *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_NestedTemplateInst_A_int32_t *MR_NestedTemplateInst_A_int32_t_OffsetMutablePtr(MR_NestedTemplateInst_A_int32_t *ptr, ptrdiff_t i);

// Generated from a constructor of class `MR::NestedTemplateInst::A<int32_t>`.
// Parameter `_other` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_NestedTemplateInst_A_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_NestedTemplateInst_A_int32_t *MR_NestedTemplateInst_A_int32_t_ConstructFromAnother(const MR_NestedTemplateInst_A_int32_t *_other);

// Destroys a heap-allocated instance of `MR_NestedTemplateInst_A_int32_t`. Does nothing if the pointer is null.
MR_C_API void MR_NestedTemplateInst_A_int32_t_Destroy(const MR_NestedTemplateInst_A_int32_t *_this);

// Destroys a heap-allocated array of `MR_NestedTemplateInst_A_int32_t`. Does nothing if the pointer is null.
MR_C_API void MR_NestedTemplateInst_A_int32_t_DestroyArray(const MR_NestedTemplateInst_A_int32_t *_this);

// Generated from a method of class `MR::NestedTemplateInst::A<int32_t>` named `operator=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_other` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_NestedTemplateInst_A_int32_t *MR_NestedTemplateInst_A_int32_t_AssignFromAnother(MR_NestedTemplateInst_A_int32_t *_this, const MR_NestedTemplateInst_A_int32_t *_other);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_NestedTemplateInst_A_int32_t_AA_float_Destroy()` to free it when you're done using it.
MR_C_API MR_NestedTemplateInst_A_int32_t_AA_float *MR_NestedTemplateInst_A_int32_t_AA_float_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_NestedTemplateInst_A_int32_t_AA_float_DestroyArray()`.
// Use `MR_NestedTemplateInst_A_int32_t_AA_float_OffsetMutablePtr()` and `MR_NestedTemplateInst_A_int32_t_AA_float_OffsetPtr()` to access the array elements.
MR_C_API MR_NestedTemplateInst_A_int32_t_AA_float *MR_NestedTemplateInst_A_int32_t_AA_float_DefaultConstructArray(size_t num_elems);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_NestedTemplateInst_A_int32_t_AA_float *MR_NestedTemplateInst_A_int32_t_AA_float_OffsetPtr(const MR_NestedTemplateInst_A_int32_t_AA_float *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_NestedTemplateInst_A_int32_t_AA_float *MR_NestedTemplateInst_A_int32_t_AA_float_OffsetMutablePtr(MR_NestedTemplateInst_A_int32_t_AA_float *ptr, ptrdiff_t i);

// Generated from a constructor of class `MR::NestedTemplateInst::A<int32_t>::AA<float>`.
// Parameter `_other` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_NestedTemplateInst_A_int32_t_AA_float_Destroy()` to free it when you're done using it.
MR_C_API MR_NestedTemplateInst_A_int32_t_AA_float *MR_NestedTemplateInst_A_int32_t_AA_float_ConstructFromAnother(const MR_NestedTemplateInst_A_int32_t_AA_float *_other);

// Destroys a heap-allocated instance of `MR_NestedTemplateInst_A_int32_t_AA_float`. Does nothing if the pointer is null.
MR_C_API void MR_NestedTemplateInst_A_int32_t_AA_float_Destroy(const MR_NestedTemplateInst_A_int32_t_AA_float *_this);

// Destroys a heap-allocated array of `MR_NestedTemplateInst_A_int32_t_AA_float`. Does nothing if the pointer is null.
MR_C_API void MR_NestedTemplateInst_A_int32_t_AA_float_DestroyArray(const MR_NestedTemplateInst_A_int32_t_AA_float *_this);

// Generated from a method of class `MR::NestedTemplateInst::A<int32_t>::AA<float>` named `operator=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_other` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_NestedTemplateInst_A_int32_t_AA_float *MR_NestedTemplateInst_A_int32_t_AA_float_AssignFromAnother(MR_NestedTemplateInst_A_int32_t_AA_float *_this, const MR_NestedTemplateInst_A_int32_t_AA_float *_other);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_MR_TEST_NESTED_CLASS_TEMPLATE_INST_H
