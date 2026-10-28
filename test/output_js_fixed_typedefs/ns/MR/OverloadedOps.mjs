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

export function opAdd(...args)
{
    const __n = args.length;
    if (__n === 1 && (args[0] instanceof L.MR_OverloadedOps_B))
        return L.MR_C_pos_MR_OverloadedOps_B(args[0]);
    if (__n === 2 && (args[0] instanceof L.MR_OverloadedOps_B) && (args[1] instanceof L.MR_OverloadedOps_B))
        return L.MR_C_add_MR_OverloadedOps_B(args[0], args[1]);
    if (__n === 2 && (args[0] instanceof L.MR_OverloadedOps_C) && (args[1] instanceof L.MR_OverloadedOps_C))
        return L.MR_C_add_MR_OverloadedOps_C(args[0], args[1]);
    if (__n === 2 && (args[0] instanceof L.MR_OverloadedOps_C) && (args[1] instanceof L.MR_OverloadedOps_B))
        return L.MR_C_add_MR_OverloadedOps_C_MR_OverloadedOps_B(args[0], args[1]);
    if (__n === 1 && (args[0] instanceof L.MR_OverloadedOps_D))
        return L.MR_C_pos_MR_OverloadedOps_D_ref(args[0]);
    throw new TypeError("No overload of `opAdd` accepts these arguments.");
}

export function opSub(...args)
{
    const __n = args.length;
    if (__n === 1 && (args[0] instanceof L.MR_OverloadedOps_B))
        return L.MR_C_neg_MR_OverloadedOps_B(args[0]);
    if (__n === 2 && (args[0] instanceof L.MR_OverloadedOps_B) && (args[1] instanceof L.MR_OverloadedOps_B))
        return L.MR_C_sub_MR_OverloadedOps_B(args[0], args[1]);
    throw new TypeError("No overload of `opSub` accepts these arguments.");
}

export function opMul(...args)
{
    const __n = args.length;
    if (__n === 1 && (args[0] instanceof L.MR_OverloadedOps_B))
        return L.MR_C_deref_MR_OverloadedOps_B(args[0]);
    if (__n === 2 && (args[0] instanceof L.MR_OverloadedOps_B) && (args[1] instanceof L.MR_OverloadedOps_B))
        return L.MR_C_mul_MR_OverloadedOps_B(args[0], args[1]);
    throw new TypeError("No overload of `opMul` accepts these arguments.");
}

