#pragma once

#include <exports.h>
#include <std_optional_int.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from function `MR::StdOptional::GetInt`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_optional_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_int *MR_StdOptional_GetInt(void);

/// Generated from function `MR::StdOptional::SetInt`.
/// Parameter `_1` can not be null.
MR_C_API void MR_StdOptional_SetInt(const MR_C_std_optional_int *_1);

#ifdef __cplusplus
} // extern "C"
#endif
