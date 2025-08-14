#pragma once

#include <common.h>
#include <exports.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from function `MR::Deprecation::foo`.
MR_C_DEPRECATED MR_C_API void MR_Deprecation_foo(void);

/// Generated from function `MR::Deprecation::bar`.
MR_C_DEPRECATED_REASON("Some \\message\n")
MR_C_API void MR_Deprecation_bar(void);

#ifdef __cplusplus
} // extern "C"
#endif
