#pragma once

#include <exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_string MR_C_std_string; // Defined in `#include <std_string.h>`.


/// Generated from function `MR::StdString::Set`.
/// Parameter `s` can not be null.
/// If `s_end` is null, then `s` is assumed to be null-terminated.
MR_C_API void MR_StdString_Set(const char *s, const char *s_end);

/// Generated from function `MR::StdString::SetWithDefault`.
/// Non-null `s_end` requires a non-null `s`.
/// If `s_end` is null, then `s` is assumed to be null-terminated.
/// Parameter `s` has default argument: `"42"`, pass a null pointer to both it and `s_end` to use it.
MR_C_API void MR_StdString_SetWithDefault(const char *s, const char *s_end);

/// Generated from function `MR::StdString::Get`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_string *MR_StdString_Get(void);

/// Generated from function `MR::StdString::WriteToRef`.
/// Parameter `ref` can not be null.
MR_C_API void MR_StdString_WriteToRef(MR_C_std_string *ref);

/// Generated from function `MR::StdString::WriteToPtr`.
MR_C_API void MR_StdString_WriteToPtr(MR_C_std_string *ptr);

/// Generated from function `MR::StdString::ConstRef`.
/// Parameter `s` can not be null.
/// If `s_end` is null, then `s` is assumed to be null-terminated.
MR_C_API void MR_StdString_ConstRef(const char *s, const char *s_end);

/// Generated from function `MR::StdString::RvalueRef`.
/// Parameter `s` can not be null.
/// If `s_end` is null, then `s` is assumed to be null-terminated.
MR_C_API void MR_StdString_RvalueRef(const char *s, const char *s_end);

/// Generated from function `MR::StdString::ConstRvalueRef`.
/// Parameter `s` can not be null.
/// If `s_end` is null, then `s` is assumed to be null-terminated.
MR_C_API void MR_StdString_ConstRvalueRef(const char *s, const char *s_end);

#ifdef __cplusplus
} // extern "C"
#endif
