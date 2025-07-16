#pragma once

#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from class `MR::NestedTemplateInst::A<int>`.
typedef struct MR_NestedTemplateInst_A_int MR_NestedTemplateInst_A_int;

// This struct needs special care to be instantiated, even with the typedef below. Hmm.
/// Generated from class `MR::NestedTemplateInst::A<int>::AA<float>`.
typedef struct MR_NestedTemplateInst_A_int_AA_float MR_NestedTemplateInst_A_int_AA_float;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NestedTemplateInst_A_int_Destroy()` to free it when you're done using it.
MR_C_API MR_NestedTemplateInst_A_int *MR_NestedTemplateInst_A_int_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NestedTemplateInst_A_int_DestroyArray()`.
/// Use `MR_NestedTemplateInst_A_int_OffsetMutablePtr()` and `MR_NestedTemplateInst_A_int_OffsetPtr()` to access the array elements.
MR_C_API MR_NestedTemplateInst_A_int *MR_NestedTemplateInst_A_int_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_NestedTemplateInst_A_int *MR_NestedTemplateInst_A_int_OffsetPtr(const MR_NestedTemplateInst_A_int *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_NestedTemplateInst_A_int *MR_NestedTemplateInst_A_int_OffsetMutablePtr(MR_NestedTemplateInst_A_int *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::NestedTemplateInst::A<int>`.
/// Parameter `_other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NestedTemplateInst_A_int_Destroy()` to free it when you're done using it.
MR_C_API MR_NestedTemplateInst_A_int *MR_NestedTemplateInst_A_int_ConstructFromAnother(const MR_NestedTemplateInst_A_int *_other);

/// Destroys a heap-allocated instance of `MR_NestedTemplateInst_A_int`. Does nothing if the pointer is null.
MR_C_API void MR_NestedTemplateInst_A_int_Destroy(const MR_NestedTemplateInst_A_int *_this);

/// Destroys a heap-allocated array of `MR_NestedTemplateInst_A_int`. Does nothing if the pointer is null.
MR_C_API void MR_NestedTemplateInst_A_int_DestroyArray(const MR_NestedTemplateInst_A_int *_this);

/// Generated from a method of class `MR::NestedTemplateInst::A<int>` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_NestedTemplateInst_A_int *MR_NestedTemplateInst_A_int_AssignFromAnother(MR_NestedTemplateInst_A_int *_this, const MR_NestedTemplateInst_A_int *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NestedTemplateInst_A_int_AA_float_Destroy()` to free it when you're done using it.
MR_C_API MR_NestedTemplateInst_A_int_AA_float *MR_NestedTemplateInst_A_int_AA_float_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NestedTemplateInst_A_int_AA_float_DestroyArray()`.
/// Use `MR_NestedTemplateInst_A_int_AA_float_OffsetMutablePtr()` and `MR_NestedTemplateInst_A_int_AA_float_OffsetPtr()` to access the array elements.
MR_C_API MR_NestedTemplateInst_A_int_AA_float *MR_NestedTemplateInst_A_int_AA_float_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_NestedTemplateInst_A_int_AA_float *MR_NestedTemplateInst_A_int_AA_float_OffsetPtr(const MR_NestedTemplateInst_A_int_AA_float *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_NestedTemplateInst_A_int_AA_float *MR_NestedTemplateInst_A_int_AA_float_OffsetMutablePtr(MR_NestedTemplateInst_A_int_AA_float *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::NestedTemplateInst::A<int>::AA<float>`.
/// Parameter `_other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NestedTemplateInst_A_int_AA_float_Destroy()` to free it when you're done using it.
MR_C_API MR_NestedTemplateInst_A_int_AA_float *MR_NestedTemplateInst_A_int_AA_float_ConstructFromAnother(const MR_NestedTemplateInst_A_int_AA_float *_other);

/// Destroys a heap-allocated instance of `MR_NestedTemplateInst_A_int_AA_float`. Does nothing if the pointer is null.
MR_C_API void MR_NestedTemplateInst_A_int_AA_float_Destroy(const MR_NestedTemplateInst_A_int_AA_float *_this);

/// Destroys a heap-allocated array of `MR_NestedTemplateInst_A_int_AA_float`. Does nothing if the pointer is null.
MR_C_API void MR_NestedTemplateInst_A_int_AA_float_DestroyArray(const MR_NestedTemplateInst_A_int_AA_float *_this);

/// Generated from a method of class `MR::NestedTemplateInst::A<int>::AA<float>` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_NestedTemplateInst_A_int_AA_float *MR_NestedTemplateInst_A_int_AA_float_AssignFromAnother(MR_NestedTemplateInst_A_int_AA_float *_this, const MR_NestedTemplateInst_A_int_AA_float *_other);

#ifdef __cplusplus
} // extern "C"
#endif
