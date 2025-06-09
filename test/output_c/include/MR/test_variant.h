#pragma once

#include <exports.h>
#include <pass_by.h>
#include <std_variant_int_float.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_variant_int_float_float MR_C_std_variant_int_float_float;
typedef struct MR_C_std_variant_int_float_std_string MR_C_std_variant_int_float_std_string;


/// Generated from function `MR::StdVariant::foo`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_variant_int_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_variant_int_float *MR_StdVariant_foo(void);

/// Generated from function `MR::StdVariant::bar`.
/// Parameter `_1` can not be null.
MR_C_API void MR_StdVariant_bar(const MR_C_std_variant_int_float_float *_1);

/// Generated from function `MR::StdVariant::baz`.
MR_C_API void MR_StdVariant_baz(MR_C_PassBy _1_pass_by, MR_C_std_variant_int_float_std_string *_1);

#ifdef __cplusplus
} // extern "C"
#endif
