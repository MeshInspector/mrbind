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

export function a(...args)
{
    const __n = args.length;
    if (__n === 1 && typeof args[0] === "number")
        return L.MR_Overloads_a_1(args[0]);
    if (__n === 2 && typeof args[0] === "number" && typeof args[1] === "number")
        return L.MR_Overloads_a_2(args[0], args[1]);
    throw new TypeError("No overload of `a` accepts these arguments.");
}

