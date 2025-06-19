#pragma once

#include <exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_pair_const_int_float MR_C_std_pair_const_int_float; // Defined in `#include <std_pair_const_int_float.h>`.
typedef struct MR_C_std_pair_const_int_ref_const_float_ref MR_C_std_pair_const_int_ref_const_float_ref; // Defined in `#include <std_pair_const_int_ref_const_float_ref.h>`.
typedef struct MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref; // Defined in `#include <std_pair_const_int_rvalue_ref_const_float_rvalue_ref.h>`.
typedef struct MR_C_std_pair_int_float MR_C_std_pair_int_float; // Defined in `#include <std_pair_int_float.h>`.
typedef struct MR_C_std_pair_int_ref_float_ref MR_C_std_pair_int_ref_float_ref; // Defined in `#include <std_pair_int_ref_float_ref.h>`.
typedef struct MR_C_std_pair_int_rvalue_ref_float_rvalue_ref MR_C_std_pair_int_rvalue_ref_float_rvalue_ref; // Defined in `#include <std_pair_int_rvalue_ref_float_rvalue_ref.h>`.
typedef struct MR_C_std_tuple MR_C_std_tuple; // Defined in `#include <std_tuple.h>`.
typedef struct MR_C_std_tuple_const_int_const_float_int_ref_float_ref MR_C_std_tuple_const_int_const_float_int_ref_float_ref; // Defined in `#include <std_tuple_const_int_const_float_int_ref_float_ref.h>`.
typedef struct MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref; // Defined in `#include <std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref.h>`.
typedef struct MR_C_std_tuple_const_int_rvalue_ref_const_float_rvalue_ref MR_C_std_tuple_const_int_rvalue_ref_const_float_rvalue_ref; // Defined in `#include <std_tuple_const_int_rvalue_ref_const_float_rvalue_ref.h>`.
typedef struct MR_C_std_tuple_float_double_int_int MR_C_std_tuple_float_double_int_int; // Defined in `#include <std_tuple_float_double_int_int.h>`.
typedef struct MR_C_std_tuple_int_float MR_C_std_tuple_int_float; // Defined in `#include <std_tuple_int_float.h>`.


/// Generated from function `MR::StdTupleLike::SetPair`.
/// Parameter `_1` can not be null.
MR_C_API void MR_StdTupleLike_SetPair(const MR_C_std_pair_int_float *_1);

/// Generated from function `MR::StdTupleLike::GetPair`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_pair_int_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_pair_int_float *MR_StdTupleLike_GetPair(void);

/// Generated from function `MR::StdTupleLike::GetPair2`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_pair_const_int_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_pair_const_int_float *MR_StdTupleLike_GetPair2(void);

/// Generated from function `MR::StdTupleLike::GetPair3`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_pair_int_ref_float_ref_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_pair_int_ref_float_ref *MR_StdTupleLike_GetPair3(void);

/// Generated from function `MR::StdTupleLike::GetPair4`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_pair_const_int_ref_const_float_ref_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_pair_const_int_ref_const_float_ref *MR_StdTupleLike_GetPair4(void);

/// Generated from function `MR::StdTupleLike::GetPair5`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_pair_int_rvalue_ref_float_rvalue_ref *MR_StdTupleLike_GetPair5(void);

/// Generated from function `MR::StdTupleLike::GetPair6`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref *MR_StdTupleLike_GetPair6(void);

/// Generated from function `MR::StdTupleLike::SetTuple`.
/// Parameter `_1` can not be null.
MR_C_API void MR_StdTupleLike_SetTuple(const MR_C_std_tuple_int_float *_1);

/// Generated from function `MR::StdTupleLike::GetTuple`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_tuple_int_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_tuple_int_float *MR_StdTupleLike_GetTuple(void);

// Three separate tuples to avoid generating file paths that are too long, as those cause issues on some filesystems apparently.
/// Generated from function `MR::StdTupleLike::GetTuple2`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_tuple_const_int_const_float_int_ref_float_ref_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_tuple_const_int_const_float_int_ref_float_ref *MR_StdTupleLike_GetTuple2(void);

/// Generated from function `MR::StdTupleLike::GetTuple3`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref *MR_StdTupleLike_GetTuple3(void);

/// Generated from function `MR::StdTupleLike::GetTuple4`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_tuple_const_int_rvalue_ref_const_float_rvalue_ref_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_tuple_const_int_rvalue_ref_const_float_rvalue_ref *MR_StdTupleLike_GetTuple4(void);

/// Generated from function `MR::StdTupleLike::GetTuple7`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_tuple_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_tuple *MR_StdTupleLike_GetTuple7(void);

/// Generated from function `MR::StdTupleLike::GetTuple8`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_tuple_float_double_int_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_tuple_float_double_int_int *MR_StdTupleLike_GetTuple8(void);

#ifdef __cplusplus
} // extern "C"
#endif
