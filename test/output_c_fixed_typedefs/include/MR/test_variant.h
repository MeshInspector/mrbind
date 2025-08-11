#ifndef MR_C_DETAIL_INCLUDED_MR_TEST_VARIANT_H
#define MR_C_DETAIL_INCLUDED_MR_TEST_VARIANT_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <common.h>
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_variant_int32_t_float MR_C_std_variant_int32_t_float; // Defined in `#include <std_variant_int32_t_float.h>`.
typedef struct MR_C_std_variant_int32_t_float_float MR_C_std_variant_int32_t_float_float; // Defined in `#include <std_variant_int32_t_float_float.h>`.
typedef struct MR_C_std_variant_int32_t_float_std_string MR_C_std_variant_int32_t_float_std_string; // Defined in `#include <std_variant_int32_t_float_std_string.h>`.
typedef struct MR_C_std_variant_std_monostate_int32_t_float MR_C_std_variant_std_monostate_int32_t_float; // Defined in `#include <std_variant_std_monostate_int32_t_float.h>`.


// Generated from function `MR::StdVariant::foo`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_variant_int32_t_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_variant_int32_t_float *MR_StdVariant_foo(void);

// Generated from function `MR::StdVariant::bar`.
// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_StdVariant_bar(const MR_C_std_variant_int32_t_float_float *_1);

// Generated from function `MR::StdVariant::baz`.
MR_C_API void MR_StdVariant_baz(MR_C_PassBy _1_pass_by, MR_C_std_variant_int32_t_float_std_string *_1);

// Generated from function `MR::StdVariant::blah`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_variant_std_monostate_int32_t_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_variant_std_monostate_int32_t_float *MR_StdVariant_blah(void);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_MR_TEST_VARIANT_H

#if !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_MR_TEST_VARIANT_H_2)
#define MR_C_DETAIL_INCLUDED_MR_TEST_VARIANT_H_2

// Convenience includes for types mentioned in this header. They are here at the bottom to make circular includes harmless.

#include <std_variant_int32_t_float.h>
#include <std_variant_int32_t_float_float.h>
#include <std_variant_int32_t_float_std_string.h>
#include <std_variant_std_monostate_int32_t_float.h>

#endif // !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_MR_TEST_VARIANT_H_2)
