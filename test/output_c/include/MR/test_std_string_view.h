#pragma once

#include <exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_string_view MR_C_std_string_view; // Defined in `#include <std_string_view.h>`.


/// Generated from function `MR::StdStringView::Set`.
/// Parameter `s` can not be null.
/// If `s_end` is null, then `s` is assumed to be null-terminated.
MR_C_API void MR_StdStringView_Set(const char *s, const char *s_end);

/// Generated from function `MR::StdStringView::SetWithDefault`.
/// Non-null `s_end` requires a non-null `s`.
/// If `s_end` is null, then `s` is assumed to be null-terminated.
/// Parameter `s` has default argument: `"42"`, pass a null pointer to both it and `s_end` to use it.
MR_C_API void MR_StdStringView_SetWithDefault(const char *s, const char *s_end);

/// Generated from function `MR::StdStringView::Get`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_string_view_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_string_view *MR_StdStringView_Get(void);

/// Generated from function `MR::StdStringView::WriteToRef`.
/// Parameter `ref` can not be null.
MR_C_API void MR_StdStringView_WriteToRef(MR_C_std_string_view *ref);

/// Generated from function `MR::StdStringView::WriteToPtr`.
MR_C_API void MR_StdStringView_WriteToPtr(MR_C_std_string_view *ptr);

/// Generated from function `MR::StdStringView::ConstRef`.
/// Parameter `s` can not be null.
/// If `s_end` is null, then `s` is assumed to be null-terminated.
MR_C_API void MR_StdStringView_ConstRef(const char *s, const char *s_end);

/// Generated from function `MR::StdStringView::RvalueRef`.
/// Parameter `s` can not be null.
/// If `s_end` is null, then `s` is assumed to be null-terminated.
MR_C_API void MR_StdStringView_RvalueRef(const char *s, const char *s_end);

/// Generated from function `MR::StdStringView::ConstRvalueRef`.
/// Parameter `s` can not be null.
/// If `s_end` is null, then `s` is assumed to be null-terminated.
MR_C_API void MR_StdStringView_ConstRvalueRef(const char *s, const char *s_end);

#ifdef __cplusplus
} // extern "C"
#endif
