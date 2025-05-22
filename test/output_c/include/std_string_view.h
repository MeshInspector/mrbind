#pragma once

#ifdef __cplusplus
extern "C" {
#endif

/// A reference to a string or a part of one, not necessarily null-terminated.
typedef struct MR_C_std_string_view
{
    const char *begin;
    const char *end;
} MR_C_std_string_view;

#ifdef __cplusplus
} // extern "C"
#endif
