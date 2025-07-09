#pragma once

#include <common.h>
#include <exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_expected_int32_t_std_string MR_C_std_expected_int32_t_std_string; // Defined in `#include <std_expected_int32_t_std_string.h>`.
typedef struct MR_C_std_expected_void_float MR_C_std_expected_void_float; // Defined in `#include <std_expected_void_float.h>`.


/// Generated from function `MR::StdExpected::GetExp`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_expected_int32_t_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_expected_int32_t_std_string *MR_StdExpected_GetExp(void);

/// Generated from function `MR::StdExpected::SetExp`.
MR_C_API void MR_StdExpected_SetExp(MR_C_PassBy _1_pass_by, MR_C_std_expected_int32_t_std_string *_1);

/// Generated from function `MR::StdExpected::SetExpConstRef`.
/// Parameter `_1` can not be null.
MR_C_API void MR_StdExpected_SetExpConstRef(const MR_C_std_expected_int32_t_std_string *_1);

/// Generated from function `MR::StdExpected::SetExpDefTrivial`.
/// Parameter `_1` has a default argument: `{}`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
MR_C_API void MR_StdExpected_SetExpDefTrivial(MR_C_PassBy _1_pass_by, MR_C_std_expected_int32_t_std_string *_1);

/// Generated from function `MR::StdExpected::SetExpDef`.
/// Parameter `_1` has a default argument: `42`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
MR_C_API void MR_StdExpected_SetExpDef(MR_C_PassBy _1_pass_by, MR_C_std_expected_int32_t_std_string *_1);

/// Generated from function `MR::StdExpected::GetExpVoid`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_expected_void_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_expected_void_float *MR_StdExpected_GetExpVoid(void);

/// Generated from function `MR::StdExpected::SetExpVoid`.
/// Parameter `_1` can not be null.
MR_C_API void MR_StdExpected_SetExpVoid(const MR_C_std_expected_void_float *_1);

/// Generated from function `MR::StdExpected::SetExpVoidConstRef`.
/// Parameter `_1` can not be null.
MR_C_API void MR_StdExpected_SetExpVoidConstRef(const MR_C_std_expected_void_float *_1);

/// Generated from function `MR::StdExpected::SetExpVoidDefTrivial`.
/// Parameter `_1` has a default argument: `{}`, pass a null pointer to use it.
MR_C_API void MR_StdExpected_SetExpVoidDefTrivial(const MR_C_std_expected_void_float *_1);

/// Generated from function `MR::StdExpected::SetExpVoidDef`.
/// Parameter `_1` has a default argument: `std::expected<void, float>{}`, pass a null pointer to use it.
MR_C_API void MR_StdExpected_SetExpVoidDef(const MR_C_std_expected_void_float *_1);

#ifdef __cplusplus
} // extern "C"
#endif
