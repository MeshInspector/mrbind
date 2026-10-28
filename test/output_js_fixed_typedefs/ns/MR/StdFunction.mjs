// The C++ namespace `MR::StdFunction`.

import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export { MR_StdFunction_E as E } from "../../lib/_all.mjs";
export { MR_StdFunction_A as A } from "../../lib/_all.mjs";
export { MR_StdFunction_foo_std_function_int32_t_func as foo_std_function_int32_t_func } from "../../lib/_all.mjs";
export { MR_StdFunction_foo_std_function_void_func_from_int32_t_int32_t as foo_std_function_void_func_from_int32_t_int32_t } from "../../lib/_all.mjs";
export { MR_StdFunction_foo_std_function_int32_t_func_from_int32_t_int32_t as foo_std_function_int32_t_func_from_int32_t_int32_t } from "../../lib/_all.mjs";
export { MR_StdFunction_foo_std_function_MR_StdFunction_E_func_from_int32_t_MR_StdFunction_E as foo_std_function_MR_StdFunction_E_func_from_int32_t_MR_StdFunction_E } from "../../lib/_all.mjs";
export { MR_StdFunction_foo_std_function_std_string_func_from_int32_t_float as foo_std_function_std_string_func_from_int32_t_float } from "../../lib/_all.mjs";
export { MR_StdFunction_foo_std_function_void_func_from_std_string as foo_std_function_void_func_from_std_string } from "../../lib/_all.mjs";
export { MR_StdFunction_foo_std_function_void_func_from_MR_StdFunction_A as foo_std_function_void_func_from_MR_StdFunction_A } from "../../lib/_all.mjs";
export { MR_StdFunction_foo_std_function_MR_StdFunction_A_func as foo_std_function_MR_StdFunction_A_func } from "../../lib/_all.mjs";

export function foo(...args)
{
    const __n = args.length;
    if (__n === 1 && (args[0] instanceof L.MR_C_std_function_int32_t || typeof args[0] === "function"))
        return L.MR_StdFunction_foo_std_function_int32_t_func(args[0]);
    if (__n === 1 && (args[0] instanceof L.MR_C_std_function_void_from_int32_t_int32_t || typeof args[0] === "function"))
        return L.MR_StdFunction_foo_std_function_void_func_from_int32_t_int32_t(args[0]);
    if (__n === 1 && (args[0] instanceof L.MR_C_std_function_int32_t_from_int32_t_int32_t || typeof args[0] === "function"))
        return L.MR_StdFunction_foo_std_function_int32_t_func_from_int32_t_int32_t(args[0]);
    if (__n === 1 && (args[0] instanceof L.MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E || typeof args[0] === "function"))
        return L.MR_StdFunction_foo_std_function_MR_StdFunction_E_func_from_int32_t_MR_StdFunction_E(args[0]);
    if (__n === 1 && (args[0] instanceof L.MR_C_std_function_std_string_from_int32_t_float || typeof args[0] === "function"))
        return L.MR_StdFunction_foo_std_function_std_string_func_from_int32_t_float(args[0]);
    if (__n === 1 && (args[0] instanceof L.MR_C_std_function_void_from_std_string || typeof args[0] === "function"))
        return L.MR_StdFunction_foo_std_function_void_func_from_std_string(args[0]);
    if (__n === 1 && (args[0] instanceof L.MR_C_std_function_void_from_MR_StdFunction_A || typeof args[0] === "function"))
        return L.MR_StdFunction_foo_std_function_void_func_from_MR_StdFunction_A(args[0]);
    if (__n === 1 && (args[0] instanceof L.MR_C_std_function_MR_StdFunction_A || typeof args[0] === "function"))
        return L.MR_StdFunction_foo_std_function_MR_StdFunction_A_func(args[0]);
    throw new TypeError("No overload of `foo` accepts these arguments.");
}

