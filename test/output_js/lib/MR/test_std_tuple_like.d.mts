// The wrappers of the C bindings file `MR/test_std_tuple_like`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from function `MR::StdTupleLike::SetPair`.
 *
 * Calls `MR_StdTupleLike_SetPair()`.
 */
export declare function MR_StdTupleLike_SetPair(_1: L.MR_C_std_pair_int_float): void;

/**
 * Generated from function `MR::StdTupleLike::GetPair`.
 *
 * Calls `MR_StdTupleLike_GetPair()`.
 */
export declare function MR_StdTupleLike_GetPair(): L.MR_C_std_pair_int_float;

/**
 * Generated from function `MR::StdTupleLike::GetPair2`.
 *
 * Calls `MR_StdTupleLike_GetPair2()`.
 */
export declare function MR_StdTupleLike_GetPair2(): L.MR_C_std_pair_const_int_float;

/**
 * Generated from function `MR::StdTupleLike::GetPair3`.
 *
 * Calls `MR_StdTupleLike_GetPair3()`.
 */
export declare function MR_StdTupleLike_GetPair3(): L.MR_C_std_pair_int_ref_float_ref;

/**
 * Generated from function `MR::StdTupleLike::GetPair4`.
 *
 * Calls `MR_StdTupleLike_GetPair4()`.
 */
export declare function MR_StdTupleLike_GetPair4(): L.MR_C_std_pair_const_int_ref_const_float_ref;

/**
 * Generated from function `MR::StdTupleLike::GetPair5`.
 *
 * Calls `MR_StdTupleLike_GetPair5()`.
 */
export declare function MR_StdTupleLike_GetPair5(): L.MR_C_std_pair_int_rvalue_ref_float_rvalue_ref;

/**
 * Generated from function `MR::StdTupleLike::GetPair6`.
 *
 * Calls `MR_StdTupleLike_GetPair6()`.
 */
export declare function MR_StdTupleLike_GetPair6(): L.MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref;

/**
 * Generated from function `MR::StdTupleLike::SetTuple`.
 *
 * Calls `MR_StdTupleLike_SetTuple()`.
 */
export declare function MR_StdTupleLike_SetTuple(_1: L.MR_C_std_tuple_int_float): void;

/**
 * Generated from function `MR::StdTupleLike::GetTuple`.
 *
 * Calls `MR_StdTupleLike_GetTuple()`.
 */
export declare function MR_StdTupleLike_GetTuple(): L.MR_C_std_tuple_int_float;

/**
 * Three separate tuples to avoid generating file paths that are too long, as those cause issues on some filesystems apparently.
 * Generated from function `MR::StdTupleLike::GetTuple2`.
 *
 * Calls `MR_StdTupleLike_GetTuple2()`.
 */
export declare function MR_StdTupleLike_GetTuple2(): L.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref;

/**
 * Generated from function `MR::StdTupleLike::GetTuple7`.
 *
 * Calls `MR_StdTupleLike_GetTuple7()`.
 */
export declare function MR_StdTupleLike_GetTuple7(): L.MR_C_std_tuple;

/**
 * Generated from function `MR::StdTupleLike::GetTuple8`.
 *
 * Calls `MR_StdTupleLike_GetTuple8()`.
 */
export declare function MR_StdTupleLike_GetTuple8(): L.MR_C_std_tuple_float_double_int_int;

