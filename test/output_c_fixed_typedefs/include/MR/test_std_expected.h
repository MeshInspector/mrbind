#ifndef MR_C_DETAIL_INCLUDED_MR_TEST_STD_EXPECTED_H
#define MR_C_DETAIL_INCLUDED_MR_TEST_STD_EXPECTED_H

#pragma push_macro("MR_C_DETAIL_CONVENIENCE_INCLUDES")
#define MR_C_DETAIL_CONVENIENCE_INCLUDES
#include <common.h>
#include <exports.h>
#pragma pop_macro("MR_C_DETAIL_CONVENIENCE_INCLUDES")

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_expected_int32_t_std_string MR_C_expected_int32_t_std_string; // Defined in `#include <expected_int32_t_std_string.h>`.
typedef struct MR_C_expected_void_float MR_C_expected_void_float; // Defined in `#include <expected_void_float.h>`.
typedef struct MR_C_std_vector_expected_int32_t_std_string MR_C_std_vector_expected_int32_t_std_string; // Defined in `#include <std_vector_expected_int32_t_std_string.h>`.


// Generated from function `MR::StdExpected::GetExp`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_expected_int32_t_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_expected_int32_t_std_string *MR_StdExpected_GetExp(void);

// Generated from function `MR::StdExpected::SetExp`.
MR_C_API void MR_StdExpected_SetExp(MR_C_PassBy _1_pass_by, MR_C_expected_int32_t_std_string *_1);

// Generated from function `MR::StdExpected::SetExpConstRef`.
// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_StdExpected_SetExpConstRef(const MR_C_expected_int32_t_std_string *_1);

// Generated from function `MR::StdExpected::SetExpDefTrivial`.
// Parameter `_1` has a default argument: `{}`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
MR_C_API void MR_StdExpected_SetExpDefTrivial(MR_C_PassBy _1_pass_by, MR_C_expected_int32_t_std_string *_1);

// Generated from function `MR::StdExpected::SetExpDef`.
// Parameter `_1` has a default argument: `42`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
MR_C_API void MR_StdExpected_SetExpDef(MR_C_PassBy _1_pass_by, MR_C_expected_int32_t_std_string *_1);

// Generated from function `MR::StdExpected::GetExpVoid`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_expected_void_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_expected_void_float *MR_StdExpected_GetExpVoid(void);

// Generated from function `MR::StdExpected::SetExpVoid`.
// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_StdExpected_SetExpVoid(const MR_C_expected_void_float *_1);

// Generated from function `MR::StdExpected::SetExpVoidConstRef`.
// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_StdExpected_SetExpVoidConstRef(const MR_C_expected_void_float *_1);

// Generated from function `MR::StdExpected::SetExpVoidDefTrivial`.
// Parameter `_1` is a single object.
// Parameter `_1` has a default argument: `{}`, pass a null pointer to use it.
MR_C_API void MR_StdExpected_SetExpVoidDefTrivial(const MR_C_expected_void_float *_1);

// Generated from function `MR::StdExpected::SetExpVoidDef`.
// Parameter `_1` is a single object.
// Parameter `_1` has a default argument: `std::expected<void, float>{}`, pass a null pointer to use it.
MR_C_API void MR_StdExpected_SetExpVoidDef(const MR_C_expected_void_float *_1);

// Generated from function `MR::StdExpected::GetExpVec`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_expected_int32_t_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_expected_int32_t_std_string *MR_StdExpected_GetExpVec(void);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_MR_TEST_STD_EXPECTED_H

#if !defined(MR_C_DETAIL_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_MR_TEST_STD_EXPECTED_H_2)
#define MR_C_DETAIL_INCLUDED_MR_TEST_STD_EXPECTED_H_2

// Convenience includes for types mentioned in this header. They are here at the bottom to make circular includes harmless.

#include <expected_int32_t_std_string.h>
#include <expected_void_float.h>
#include <std_vector_expected_int32_t_std_string.h>

#endif // !defined(MR_C_DETAIL_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_MR_TEST_STD_EXPECTED_H_2)
