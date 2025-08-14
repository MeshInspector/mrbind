#ifndef MR_C_DETAIL_INCLUDED_MR_TEST_DEPRECATION_H
#define MR_C_DETAIL_INCLUDED_MR_TEST_DEPRECATION_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <common.h>
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#ifdef __cplusplus
extern "C" {
#endif


// Generated from function `MR::Deprecation::foo`.
MR_C_DEPRECATED MR_C_API void MR_Deprecation_foo(void);

// Generated from function `MR::Deprecation::bar`.
MR_C_DEPRECATED_REASON("Some \\message\n")
MR_C_API void MR_Deprecation_bar(void);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_MR_TEST_DEPRECATION_H
