// The C++ namespace `MR::OverloadedOps`.

import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export { MR_OverloadedOps_A as A } from "../../lib/_all.mjs";
export { MR_OverloadedOps_B as B } from "../../lib/_all.mjs";
export { MR_OverloadedOps_C as C } from "../../lib/_all.mjs";
export { MR_OverloadedOps_D as D } from "../../lib/_all.mjs";
export { MR_C_pos_MR_OverloadedOps_B as opPos_MR_OverloadedOps_B } from "../../lib/_all.mjs";
export { MR_C_add_MR_OverloadedOps_B as opAdd_MR_OverloadedOps_B } from "../../lib/_all.mjs";
export { MR_C_neg_MR_OverloadedOps_B as opNeg_MR_OverloadedOps_B } from "../../lib/_all.mjs";
export { MR_C_sub_MR_OverloadedOps_B as opSub_MR_OverloadedOps_B } from "../../lib/_all.mjs";
export { MR_C_deref_MR_OverloadedOps_B as opDeref_MR_OverloadedOps_B } from "../../lib/_all.mjs";
export { MR_C_mul_MR_OverloadedOps_B as opMul_MR_OverloadedOps_B } from "../../lib/_all.mjs";
export { MR_C_div_MR_OverloadedOps_B as opDiv } from "../../lib/_all.mjs";
export { MR_C_mod_MR_OverloadedOps_B as opMod } from "../../lib/_all.mjs";
export { MR_C_xor_MR_OverloadedOps_B as opXor } from "../../lib/_all.mjs";
export { MR_C_bitand_MR_OverloadedOps_B as opBitand } from "../../lib/_all.mjs";
export { MR_C_bitor_MR_OverloadedOps_B as opBitor } from "../../lib/_all.mjs";
export { MR_C_compl_MR_OverloadedOps_B as opCompl } from "../../lib/_all.mjs";
export { MR_C_not_MR_OverloadedOps_B as opNot } from "../../lib/_all.mjs";
export { MR_C_less_MR_OverloadedOps_B as opLess } from "../../lib/_all.mjs";
export { MR_C_greater_MR_OverloadedOps_B as opGreater } from "../../lib/_all.mjs";
export { MR_C_add_assign_MR_OverloadedOps_B as opAddAssign } from "../../lib/_all.mjs";
export { MR_C_sub_assign_MR_OverloadedOps_B as opSubAssign } from "../../lib/_all.mjs";
export { MR_C_mul_assign_MR_OverloadedOps_B as opMulAssign } from "../../lib/_all.mjs";
export { MR_C_div_assign_MR_OverloadedOps_B as opDivAssign } from "../../lib/_all.mjs";
export { MR_C_mod_assign_MR_OverloadedOps_B as opModAssign } from "../../lib/_all.mjs";
export { MR_C_xor_assign_MR_OverloadedOps_B as opXorAssign } from "../../lib/_all.mjs";
export { MR_C_bitand_assign_MR_OverloadedOps_B as opBitandAssign } from "../../lib/_all.mjs";
export { MR_C_bitor_assign_MR_OverloadedOps_B as opBitorAssign } from "../../lib/_all.mjs";
export { MR_C_lshift_MR_OverloadedOps_B as opLshift } from "../../lib/_all.mjs";
export { MR_C_rshift_MR_OverloadedOps_B as opRshift } from "../../lib/_all.mjs";
export { MR_C_lshift_assign_MR_OverloadedOps_B as opLshiftAssign } from "../../lib/_all.mjs";
export { MR_C_rshift_assign_MR_OverloadedOps_B as opRshiftAssign } from "../../lib/_all.mjs";
export { MR_C_equal_MR_OverloadedOps_B as opEqual } from "../../lib/_all.mjs";
export { MR_C_not_equal_MR_OverloadedOps_B as opNotEqual } from "../../lib/_all.mjs";
export { MR_C_less_equal_MR_OverloadedOps_B as opLessEqual } from "../../lib/_all.mjs";
export { MR_C_greater_equal_MR_OverloadedOps_B as opGreaterEqual } from "../../lib/_all.mjs";
export { MR_C_compare_three_way_MR_OverloadedOps_B as opCompareThreeWay } from "../../lib/_all.mjs";
export { MR_C_and_MR_OverloadedOps_B as opAnd } from "../../lib/_all.mjs";
export { MR_C_or_MR_OverloadedOps_B as opOr } from "../../lib/_all.mjs";
export { MR_C_incr_MR_OverloadedOps_B as opIncr } from "../../lib/_all.mjs";
export { MR_C_post_incr_MR_OverloadedOps_B as opPostIncr } from "../../lib/_all.mjs";
export { MR_C_decr_MR_OverloadedOps_B as opDecr } from "../../lib/_all.mjs";
export { MR_C_post_decr_MR_OverloadedOps_B as opPostDecr } from "../../lib/_all.mjs";
export { MR_C_comma_MR_OverloadedOps_B as opComma } from "../../lib/_all.mjs";
export { MR_C_arrow_star_MR_OverloadedOps_B as opArrowStar } from "../../lib/_all.mjs";
export { MR_C_add_MR_OverloadedOps_C as opAdd_MR_OverloadedOps_C } from "../../lib/_all.mjs";
export { MR_C_add_MR_OverloadedOps_C_MR_OverloadedOps_B as opAdd_MR_OverloadedOps_C_MR_OverloadedOps_B } from "../../lib/_all.mjs";
export { MR_C_pos_MR_OverloadedOps_D_ref as opPos_MR_OverloadedOps_D_ref } from "../../lib/_all.mjs";
export { MR_C_pos_const_MR_OverloadedOps_D_ref as opPos_const_MR_OverloadedOps_D_ref } from "../../lib/_all.mjs";

/**
 * Unary plus.
 * Generated from function `MR::OverloadedOps::operator+`.
 *
 * Calls `MR_C_pos_MR_OverloadedOps_B()`.
 */
export declare function opAdd(_1: L.MR_OverloadedOps_B): number;
/**
 * Generated from function `MR::OverloadedOps::operator+`.
 *
 * Calls `MR_C_pos_MR_OverloadedOps_D_ref()`.
 */
export declare function opAdd(_1: L.MR_OverloadedOps_D): number;
/**
 * Binary plus.
 * Generated from function `MR::OverloadedOps::operator+`.
 *
 * Calls `MR_C_add_MR_OverloadedOps_B()`.
 */
export declare function opAdd(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;
/**
 * If rhs type is same as the lhs one (ignoring cvref), it's not emitted.
 * Generated from function `MR::OverloadedOps::operator+`.
 *
 * Calls `MR_C_add_MR_OverloadedOps_C()`.
 */
export declare function opAdd(_1: L.MR_OverloadedOps_C, _2: L.MR_OverloadedOps_C): void;
/**
 * But different types are printed.
 * Generated from function `MR::OverloadedOps::operator+`.
 *
 * Calls `MR_C_add_MR_OverloadedOps_C_MR_OverloadedOps_B()`.
 */
export declare function opAdd(_1: L.MR_OverloadedOps_C, _2: L.MR_OverloadedOps_B): void;
/** The overloads of `opAdd` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
/**
 * Unary minus.
 * Generated from function `MR::OverloadedOps::operator-`.
 *
 * Calls `MR_C_neg_MR_OverloadedOps_B()`.
 */
export declare function opSub(_1: L.MR_OverloadedOps_B): number;
/**
 * Binary minus.
 * Generated from function `MR::OverloadedOps::operator-`.
 *
 * Calls `MR_C_sub_MR_OverloadedOps_B()`.
 */
export declare function opSub(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;
/** The overloads of `opSub` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
/**
 * Dereference (unary star).
 * Generated from function `MR::OverloadedOps::operator*`.
 * The reference to the parameter `_1` might be preserved in the return value.
 *
 * Calls `MR_C_deref_MR_OverloadedOps_B()`.
 */
export declare function opMul(_1: L.MR_OverloadedOps_B): number;
/**
 * Multiply (binary star).
 * Generated from function `MR::OverloadedOps::operator*`.
 *
 * Calls `MR_C_mul_MR_OverloadedOps_B()`.
 */
export declare function opMul(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;
/** The overloads of `opMul` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
