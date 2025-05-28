#pragma once

#include <exports.h>
#include <pass_by.h>
#include <std_vector_int.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from function `MR::StdVector::Set`.
MR_C_API void MR_StdVector_Set(MR_C_PassBy _0_pass_by, MR_C_std_vector_int *_0);

/// Generated from function `MR::StdVector::SetWithDefault`.
/// Parameter `_0` has a default argument: `{1, 2, 3}`.
///   To use the default argument, pass `MR_C_PassBy_DefaultArgument` and a null pointer.
MR_C_API void MR_StdVector_SetWithDefault(MR_C_PassBy _0_pass_by, MR_C_std_vector_int *_0);

/// Generated from function `MR::StdVector::Get`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_vector_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_int *MR_StdVector_Get(void);

/// Generated from function `MR::StdVector::WriteToRef`.
/// Parameter `_0` can not be null.
MR_C_API void MR_StdVector_WriteToRef(MR_C_std_vector_int *_0);

/// Generated from function `MR::StdVector::WriteToPtr`.
MR_C_API void MR_StdVector_WriteToPtr(MR_C_std_vector_int *_0);

/// Generated from function `MR::StdVector::ConstRef`.
/// Parameter `_0` can not be null.
MR_C_API void MR_StdVector_ConstRef(const MR_C_std_vector_int *_0);

/// Generated from function `MR::StdVector::RvalueRef`.
/// Parameter `_0` can not be null.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
MR_C_API void MR_StdVector_RvalueRef(MR_C_std_vector_int *_0);

/// Generated from function `MR::StdVector::ConstRvalueRef`.
/// Parameter `_0` can not be null.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
MR_C_API void MR_StdVector_ConstRvalueRef(const MR_C_std_vector_int *_0);

#ifdef __cplusplus
} // extern "C"
#endif
