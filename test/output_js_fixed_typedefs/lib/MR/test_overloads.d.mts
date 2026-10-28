// The wrappers of the C bindings file `MR/test_overloads`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from function `MR::Overloads::a`.
 *
 * Calls `MR_Overloads_a_1()`.
 */
export declare function MR_Overloads_a_1(_1: number): void;

/**
 * Generated from function `MR::Overloads::a`.
 *
 * Calls `MR_Overloads_a_2()`.
 */
export declare function MR_Overloads_a_2(_1: number, _2: number): void;

/**
 * Generated from function `MR::Overloads::b<int32_t>`.
 *
 * Calls `MR_Overloads_b_int32_t()`.
 */
export declare function MR_Overloads_b_int32_t(): void;

/**
 * Generated from function `MR::Overloads::b<float>`.
 *
 * Calls `MR_Overloads_b_float()`.
 */
export declare function MR_Overloads_b_float(): void;

/**
 * Generated from function `MR::Overloads::c`.
 *
 * Calls `MR_Overloads_c_int32_t()`.
 */
export declare function MR_Overloads_c_int32_t(_1: number): void;

/**
 * Generated from function `MR::Overloads::c`.
 *
 * Calls `MR_Overloads_c_float()`.
 */
export declare function MR_Overloads_c_float(_1: number): void;

/**
 * Generated from function `MR::Overloads::d`.
 *
 * Calls `MR_Overloads_d_int32_t()`.
 */
export declare function MR_Overloads_d_int32_t(_1: number, _2: number, _3: number): void;

/**
 * Generated from function `MR::Overloads::d`.
 *
 * Calls `MR_Overloads_d_float()`.
 */
export declare function MR_Overloads_d_float(_1: number, _2: number, _3: number): void;

/**
 * Generated from function `MR::Overloads::e`.
 *
 * Calls `MR_Overloads_e_const_int32_t_ref()`.
 */
export declare function MR_Overloads_e_const_int32_t_ref(_1: number, _2: number): void;

/**
 * Generated from function `MR::Overloads::e`.
 *
 * Calls `MR_Overloads_e_int32_t_rvalue_ref_int32_t()`.
 */
export declare function MR_Overloads_e_int32_t_rvalue_ref_int32_t(_1: number, _2: number): void;

/**
 * Generated from function `MR::Overloads::e`.
 *
 * Calls `MR_Overloads_e_int32_t_rvalue_ref_float()`.
 */
export declare function MR_Overloads_e_int32_t_rvalue_ref_float(_1: number, _2: number): void;

/**
 * This is a fun testcase. Here we must not omit cvref on the first parameter, even if it partially helps with disambiguation,
 *   because that ultimately leads to an ambiguity.
 * So we can only omit cvref if each function has cvref in that parameter).
 * Generated from function `MR::Overloads::f`.
 *
 * Calls `MR_Overloads_f_float()`.
 */
export declare function MR_Overloads_f_float(_1: number, _2: number): void;

/**
 * Generated from function `MR::Overloads::f`.
 *
 * Calls `MR_Overloads_f_int32_t_rvalue_ref()`.
 */
export declare function MR_Overloads_f_int32_t_rvalue_ref(_1: number, _2: number): void;

/**
 * Generated from function `MR::Overloads::f`.
 *
 * Calls `MR_Overloads_f_const_int32_t_ref()`.
 */
export declare function MR_Overloads_f_const_int32_t_ref(_1: number, _2: number): void;

