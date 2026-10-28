// The C++ namespace `MR::Overloads`.

import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export { MR_Overloads_a_1 as a_1 } from "../../lib/_all.mjs";
export { MR_Overloads_a_2 as a_2 } from "../../lib/_all.mjs";
export { MR_Overloads_b_int as b } from "../../lib/_all.mjs";
export { MR_Overloads_b_float as b_float } from "../../lib/_all.mjs";
export { MR_Overloads_c_int as c } from "../../lib/_all.mjs";
export { MR_Overloads_c_float as c_float } from "../../lib/_all.mjs";
export { MR_Overloads_d_int as d } from "../../lib/_all.mjs";
export { MR_Overloads_d_float as d_float } from "../../lib/_all.mjs";
export { MR_Overloads_e_const_int_ref as e } from "../../lib/_all.mjs";
export { MR_Overloads_e_int_rvalue_ref_int as e_int_rvalue_ref_int } from "../../lib/_all.mjs";
export { MR_Overloads_e_int_rvalue_ref_float as e_int_rvalue_ref_float } from "../../lib/_all.mjs";
export { MR_Overloads_f_float as f } from "../../lib/_all.mjs";
export { MR_Overloads_f_int_rvalue_ref as f_int_rvalue_ref } from "../../lib/_all.mjs";
export { MR_Overloads_f_const_int_ref as f_const_int_ref } from "../../lib/_all.mjs";

/**
 * Generated from function `MR::Overloads::a`.
 *
 * Calls `MR_Overloads_a_1()`.
 */
export declare function a(_1: number): void;
/**
 * Generated from function `MR::Overloads::a`.
 *
 * Calls `MR_Overloads_a_2()`.
 */
export declare function a(_1: number, _2: number): void;
/** The overloads of `a` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
