#pragma once

#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


// Here the generated code will omit the template arguments for operators (to avoid unwanted instantiations),
//   and omit qualifiers for friend functions (since they are normally only accessible via ADL).
/// Generated from class `MR::OmittingTargsAndQuals::A<int>`.
typedef struct MR_OmittingTargsAndQuals_A_int MR_OmittingTargsAndQuals_A_int;

// Here the generated code will omit the template arguments for operators (to avoid unwanted instantiations),
//   and omit qualifiers for friend functions (since they are normally only accessible via ADL).
/// Generated from class `MR::OmittingTargsAndQuals::A<float>`.
typedef struct MR_OmittingTargsAndQuals_A_float MR_OmittingTargsAndQuals_A_float;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OmittingTargsAndQuals_A_int_Destroy()` to free it when you're done using it.
MR_C_API MR_OmittingTargsAndQuals_A_int *MR_OmittingTargsAndQuals_A_int_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_OmittingTargsAndQuals_A_int_DestroyArray()`.
/// Use `MR_OmittingTargsAndQuals_A_int_OffsetMutablePtr()` and `MR_OmittingTargsAndQuals_A_int_OffsetPtr()` to access the array elements.
MR_C_API MR_OmittingTargsAndQuals_A_int *MR_OmittingTargsAndQuals_A_int_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_OmittingTargsAndQuals_A_int *MR_OmittingTargsAndQuals_A_int_OffsetPtr(const MR_OmittingTargsAndQuals_A_int *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_OmittingTargsAndQuals_A_int *MR_OmittingTargsAndQuals_A_int_OffsetMutablePtr(MR_OmittingTargsAndQuals_A_int *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::OmittingTargsAndQuals::A<int>`.
/// Parameter `_other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OmittingTargsAndQuals_A_int_Destroy()` to free it when you're done using it.
MR_C_API MR_OmittingTargsAndQuals_A_int *MR_OmittingTargsAndQuals_A_int_ConstructFromAnother(const MR_OmittingTargsAndQuals_A_int *_other);

/// Destroys a heap-allocated instance of `MR_OmittingTargsAndQuals_A_int`. Does nothing if the pointer is null.
MR_C_API void MR_OmittingTargsAndQuals_A_int_Destroy(const MR_OmittingTargsAndQuals_A_int *_this);

/// Destroys a heap-allocated array of `MR_OmittingTargsAndQuals_A_int`. Does nothing if the pointer is null.
MR_C_API void MR_OmittingTargsAndQuals_A_int_DestroyArray(const MR_OmittingTargsAndQuals_A_int *_this);

/// Generated from a method of class `MR::OmittingTargsAndQuals::A<int>` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_OmittingTargsAndQuals_A_int *MR_OmittingTargsAndQuals_A_int_AssignFromAnother(MR_OmittingTargsAndQuals_A_int *_this, const MR_OmittingTargsAndQuals_A_int *_other);

/// Generated from a method of class `MR::OmittingTargsAndQuals::A<int>` named `operator+`.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_pos_MR_OmittingTargsAndQuals_A_int(MR_OmittingTargsAndQuals_A_int *_this);

/// Generated from a method of class `MR::OmittingTargsAndQuals::A<int>` named `operator-<float>`.
/// Parameter `_this` can not be null.
/// Parameter `_1` can not be null.
MR_C_API void MR_C_sub_MR_OmittingTargsAndQuals_A_int_MR_OmittingTargsAndQuals_A_float(MR_OmittingTargsAndQuals_A_int *_this, const MR_OmittingTargsAndQuals_A_float *_1);

/// Generated from function `MR::OmittingTargsAndQuals::a`.
/// Parameter `_1` can not be null.
MR_C_API void MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_int(const MR_OmittingTargsAndQuals_A_int *_1);

/// Generated from function `MR::OmittingTargsAndQuals::b<float>`.
/// Parameter `_1` can not be null.
/// Parameter `_2` can not be null.
MR_C_API void MR_OmittingTargsAndQuals_b(const MR_OmittingTargsAndQuals_A_int *_1, const MR_OmittingTargsAndQuals_A_float *_2);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OmittingTargsAndQuals_A_float_Destroy()` to free it when you're done using it.
MR_C_API MR_OmittingTargsAndQuals_A_float *MR_OmittingTargsAndQuals_A_float_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_OmittingTargsAndQuals_A_float_DestroyArray()`.
/// Use `MR_OmittingTargsAndQuals_A_float_OffsetMutablePtr()` and `MR_OmittingTargsAndQuals_A_float_OffsetPtr()` to access the array elements.
MR_C_API MR_OmittingTargsAndQuals_A_float *MR_OmittingTargsAndQuals_A_float_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_OmittingTargsAndQuals_A_float *MR_OmittingTargsAndQuals_A_float_OffsetPtr(const MR_OmittingTargsAndQuals_A_float *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_OmittingTargsAndQuals_A_float *MR_OmittingTargsAndQuals_A_float_OffsetMutablePtr(MR_OmittingTargsAndQuals_A_float *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::OmittingTargsAndQuals::A<float>`.
/// Parameter `_other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OmittingTargsAndQuals_A_float_Destroy()` to free it when you're done using it.
MR_C_API MR_OmittingTargsAndQuals_A_float *MR_OmittingTargsAndQuals_A_float_ConstructFromAnother(const MR_OmittingTargsAndQuals_A_float *_other);

/// Destroys a heap-allocated instance of `MR_OmittingTargsAndQuals_A_float`. Does nothing if the pointer is null.
MR_C_API void MR_OmittingTargsAndQuals_A_float_Destroy(const MR_OmittingTargsAndQuals_A_float *_this);

/// Destroys a heap-allocated array of `MR_OmittingTargsAndQuals_A_float`. Does nothing if the pointer is null.
MR_C_API void MR_OmittingTargsAndQuals_A_float_DestroyArray(const MR_OmittingTargsAndQuals_A_float *_this);

/// Generated from a method of class `MR::OmittingTargsAndQuals::A<float>` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_OmittingTargsAndQuals_A_float *MR_OmittingTargsAndQuals_A_float_AssignFromAnother(MR_OmittingTargsAndQuals_A_float *_this, const MR_OmittingTargsAndQuals_A_float *_other);

/// Generated from a method of class `MR::OmittingTargsAndQuals::A<float>` named `operator+`.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_pos_MR_OmittingTargsAndQuals_A_float(MR_OmittingTargsAndQuals_A_float *_this);

/// Generated from function `MR::OmittingTargsAndQuals::a`.
/// Parameter `_1` can not be null.
MR_C_API void MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_float(const MR_OmittingTargsAndQuals_A_float *_1);

/// Generated from function `MR::OmittingTargsAndQuals::operator*`.
/// Parameter `_1` can not be null.
MR_C_API void MR_C_deref_MR_OmittingTargsAndQuals_A_int(const MR_OmittingTargsAndQuals_A_int *_1);

/// Generated from function `MR::OmittingTargsAndQuals::operator~<int>`.
/// Parameter `_1` can not be null.
MR_C_API void MR_C_compl_MR_OmittingTargsAndQuals_A_int(const MR_OmittingTargsAndQuals_A_int *_1);

/// Generated from function `MR::OmittingTargsAndQuals::c`.
/// Parameter `_1` can not be null.
MR_C_API void MR_OmittingTargsAndQuals_c(const MR_OmittingTargsAndQuals_A_int *_1);

/// Generated from function `MR::OmittingTargsAndQuals::d<int>`.
/// Parameter `_1` can not be null.
MR_C_API void MR_OmittingTargsAndQuals_d(const MR_OmittingTargsAndQuals_A_int *_1);

/// Generated from function `MR::OmittingTargsAndQuals::inst`.
MR_C_API void MR_OmittingTargsAndQuals_inst(void);

#ifdef __cplusplus
} // extern "C"
#endif
