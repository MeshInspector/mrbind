#pragma once

#include <exports.h>
#include <pass_by.h>
#include <std_pair_int_float.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from function `MR::StdTupleLike::SetPair`.
MR_C_API void MR_StdTupleLike_SetPair(MR_C_PassBy _1_pass_by, MR_C_std_pair_int_float *_1);

/// Generated from function `MR::StdTupleLike::GetPair`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_pair_int_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_pair_int_float *MR_StdTupleLike_GetPair(void);

#ifdef __cplusplus
} // extern "C"
#endif
