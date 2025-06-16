#pragma once

#include <exports.h>

#ifdef __cplusplus
extern "C" {
#endif


typedef struct MR_NestedTemplateInst_A_int MR_NestedTemplateInst_A_int;

/// Generated from a constructor of class `MR::NestedTemplateInst::A<int>`.
/// Returns an instance allocated on the heap! Must call `MR_NestedTemplateInst_A_int_Destroy()` to free it when you're done using it.
MR_C_API MR_NestedTemplateInst_A_int *MR_NestedTemplateInst_A_int_Construct(void);

/// Generated from a constructor of class `MR::NestedTemplateInst::A<int>`.
/// Parameter `_other` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_NestedTemplateInst_A_int_Destroy()` to free it when you're done using it.
MR_C_API MR_NestedTemplateInst_A_int *MR_NestedTemplateInst_A_int_ConstructFromAnother(const MR_NestedTemplateInst_A_int *_other);

/// Generated from a method of class `MR::NestedTemplateInst::A<int>` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_NestedTemplateInst_A_int *MR_NestedTemplateInst_A_int_AssignFromAnother(MR_NestedTemplateInst_A_int *_this, const MR_NestedTemplateInst_A_int *_other);

/// Generated from a destructor of class `MR::NestedTemplateInst::A<int>`. Destroys the heap-allocated instances.
/// Parameter `_this` can not be null.
MR_C_API void MR_NestedTemplateInst_A_int_Destroy(MR_NestedTemplateInst_A_int *_this);

// This struct needs special care to be instantiated, even with the typedef below. Hmm.
typedef struct MR_NestedTemplateInst_A_int_AA_float MR_NestedTemplateInst_A_int_AA_float;

/// Generated from a constructor of class `MR::NestedTemplateInst::A<int>::AA<float>`.
/// Returns an instance allocated on the heap! Must call `MR_NestedTemplateInst_A_int_AA_float_Destroy()` to free it when you're done using it.
MR_C_API MR_NestedTemplateInst_A_int_AA_float *MR_NestedTemplateInst_A_int_AA_float_Construct(void);

/// Generated from a constructor of class `MR::NestedTemplateInst::A<int>::AA<float>`.
/// Parameter `_other` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_NestedTemplateInst_A_int_AA_float_Destroy()` to free it when you're done using it.
MR_C_API MR_NestedTemplateInst_A_int_AA_float *MR_NestedTemplateInst_A_int_AA_float_ConstructFromAnother(const MR_NestedTemplateInst_A_int_AA_float *_other);

/// Generated from a method of class `MR::NestedTemplateInst::A<int>::AA<float>` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_NestedTemplateInst_A_int_AA_float *MR_NestedTemplateInst_A_int_AA_float_AssignFromAnother(MR_NestedTemplateInst_A_int_AA_float *_this, const MR_NestedTemplateInst_A_int_AA_float *_other);

/// Generated from a destructor of class `MR::NestedTemplateInst::A<int>::AA<float>`. Destroys the heap-allocated instances.
/// Parameter `_this` can not be null.
MR_C_API void MR_NestedTemplateInst_A_int_AA_float_Destroy(MR_NestedTemplateInst_A_int_AA_float *_this);

#ifdef __cplusplus
} // extern "C"
#endif
