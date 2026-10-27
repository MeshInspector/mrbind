// The C++ namespace `MR::OmittingTargsAndQuals`.

import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export { MR_OmittingTargsAndQuals_A_float as A_float } from "../../lib/_all.mjs";
export { MR_OmittingTargsAndQuals_A_int as A_int } from "../../lib/_all.mjs";
export { MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_int as a_MR_OmittingTargsAndQuals_A_int } from "../../lib/_all.mjs";
export { MR_OmittingTargsAndQuals_b as b } from "../../lib/_all.mjs";
export { MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_float as a_MR_OmittingTargsAndQuals_A_float } from "../../lib/_all.mjs";
export { MR_C_deref_MR_OmittingTargsAndQuals_A_int as opMul } from "../../lib/_all.mjs";
export { MR_C_compl_MR_OmittingTargsAndQuals_A_int as opCompl } from "../../lib/_all.mjs";
export { MR_OmittingTargsAndQuals_c as c } from "../../lib/_all.mjs";
export { MR_OmittingTargsAndQuals_d as d } from "../../lib/_all.mjs";
export { MR_OmittingTargsAndQuals_inst as inst } from "../../lib/_all.mjs";

export function a(...args)
{
    const __n = args.length;
    if (__n === 1 && (args[0] instanceof L.MR_OmittingTargsAndQuals_A_int))
        return L.MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_int(args[0]);
    if (__n === 1 && (args[0] instanceof L.MR_OmittingTargsAndQuals_A_float))
        return L.MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_float(args[0]);
    throw new TypeError("No overload of `a` accepts these arguments.");
}

