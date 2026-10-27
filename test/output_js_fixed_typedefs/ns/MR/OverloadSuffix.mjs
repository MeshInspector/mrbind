// The C++ namespace `MR::OverloadSuffix`.

import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export { MR_OverloadSuffix_A as A } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_B as B } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_C as C } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_foo_a_1_int32_t as foo_a_1_int32_t } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_foo_a_1_float as foo_a_1_float } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_foo_a_2 as foo_a_2 } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_bar_a_int32_t as bar_a } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_bar_a_float as bar_a_float } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_baz_a_1 as baz_a_1 } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_baz_a_2 as baz_a_2 } from "../../lib/_all.mjs";
export { MR_C_pos_MR_OverloadSuffix_A_ref as opPos_MR_OverloadSuffix_A_ref } from "../../lib/_all.mjs";
export { MR_C_pos_const_MR_OverloadSuffix_A_ref as opPos_const_MR_OverloadSuffix_A_ref } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_foo_b as foo_b_2 } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_foo_b_1 as foo_b_1 } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_foo_b_2 as foo_b_2_2 } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_bar_b as bar_b } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_bar_b_float as bar_b_float } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_baz_b as baz_b_2 } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_baz_b_int32_t as baz_b_int32_t } from "../../lib/_all.mjs";
export { MR_C_pos_MR_OverloadSuffix_B_ref as opPos_MR_OverloadSuffix_B_ref } from "../../lib/_all.mjs";
export { MR_C_pos_const_MR_OverloadSuffix_B_ref as opPos_const_MR_OverloadSuffix_B_ref } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_foo_c_blah as foo_c_blah } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_foo_c_1 as foo_c_1 } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_foo_c_2 as foo_c_2 } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_bar_c_blah as bar_c } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_bar_c as bar_c_2 } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_baz_c_blah as baz_c_blah } from "../../lib/_all.mjs";
export { MR_OverloadSuffix_baz_c as baz_c_2 } from "../../lib/_all.mjs";
export { MR_C_pos_MR_OverloadSuffix_C_ref as opPos_MR_OverloadSuffix_C_ref } from "../../lib/_all.mjs";
export { MR_C_pos_const_MR_OverloadSuffix_C_ref as opPos_const_MR_OverloadSuffix_C_ref } from "../../lib/_all.mjs";

export function foo_a(...args)
{
    const __n = args.length;
    if (__n === 1 && typeof args[0] === "number")
        return L.MR_OverloadSuffix_foo_a_1_int32_t(args[0]);
    if (__n === 2 && typeof args[0] === "number" && typeof args[1] === "number")
        return L.MR_OverloadSuffix_foo_a_2(args[0], args[1]);
    throw new TypeError("No overload of `foo_a` accepts these arguments.");
}

export function baz_a(...args)
{
    const __n = args.length;
    if (__n === 1 && typeof args[0] === "number")
        return L.MR_OverloadSuffix_baz_a_1(args[0]);
    if (__n === 2 && typeof args[0] === "number" && typeof args[1] === "number")
        return L.MR_OverloadSuffix_baz_a_2(args[0], args[1]);
    throw new TypeError("No overload of `baz_a` accepts these arguments.");
}

export function opAdd(...args)
{
    const __n = args.length;
    if (__n === 1 && (args[0] instanceof L.MR_OverloadSuffix_A))
        return L.MR_C_pos_MR_OverloadSuffix_A_ref(args[0]);
    if (__n === 1 && (args[0] instanceof L.MR_OverloadSuffix_B))
        return L.MR_C_pos_MR_OverloadSuffix_B_ref(args[0]);
    if (__n === 1 && (args[0] instanceof L.MR_OverloadSuffix_C))
        return L.MR_C_pos_MR_OverloadSuffix_C_ref(args[0]);
    throw new TypeError("No overload of `opAdd` accepts these arguments.");
}

export function foo_b(...args)
{
    const __n = args.length;
    if (__n === 1 && typeof args[0] === "number")
        return L.MR_OverloadSuffix_foo_b(args[0]);
    if (__n === 2 && typeof args[0] === "number" && typeof args[1] === "number")
        return L.MR_OverloadSuffix_foo_b_2(args[0], args[1]);
    throw new TypeError("No overload of `foo_b` accepts these arguments.");
}

export function baz_b(...args)
{
    const __n = args.length;
    if (__n === 1 && typeof args[0] === "number")
        return L.MR_OverloadSuffix_baz_b(args[0]);
    if (__n === 2 && typeof args[0] === "number" && typeof args[1] === "number")
        return L.MR_OverloadSuffix_baz_b_int32_t(args[0], args[1]);
    throw new TypeError("No overload of `baz_b` accepts these arguments.");
}

export function foo_c(...args)
{
    const __n = args.length;
    if (__n === 1 && typeof args[0] === "number")
        return L.MR_OverloadSuffix_foo_c_blah(args[0]);
    if (__n === 2 && typeof args[0] === "number" && typeof args[1] === "number")
        return L.MR_OverloadSuffix_foo_c_2(args[0], args[1]);
    throw new TypeError("No overload of `foo_c` accepts these arguments.");
}

export function baz_c(...args)
{
    const __n = args.length;
    if (__n === 1 && typeof args[0] === "number")
        return L.MR_OverloadSuffix_baz_c_blah(args[0]);
    if (__n === 2 && typeof args[0] === "number" && typeof args[1] === "number")
        return L.MR_OverloadSuffix_baz_c(args[0], args[1]);
    throw new TypeError("No overload of `baz_c` accepts these arguments.");
}

