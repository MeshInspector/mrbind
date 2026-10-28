// The C++ namespace `MR::LifetimeInference`.

import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export { MR_LifetimeInference_A as A } from "../../lib/_all.mjs";
export { MR_LifetimeInference_B as B } from "../../lib/_all.mjs";
export { MR_LifetimeInference_C as C } from "../../lib/_all.mjs";
export { MR_LifetimeInference_begin_MR_LifetimeInference_A as begin_MR_LifetimeInference_A } from "../../lib/_all.mjs";
export { MR_LifetimeInference_end_MR_LifetimeInference_A as end_MR_LifetimeInference_A } from "../../lib/_all.mjs";
export { MR_LifetimeInference_begin_MR_LifetimeInference_B as begin_MR_LifetimeInference_B } from "../../lib/_all.mjs";
export { MR_LifetimeInference_end_MR_LifetimeInference_B as end_MR_LifetimeInference_B } from "../../lib/_all.mjs";

export function begin(...args)
{
    const __n = args.length;
    if (__n === 1 && (args[0] instanceof L.MR_LifetimeInference_A))
        return L.MR_LifetimeInference_begin_MR_LifetimeInference_A(args[0]);
    if (__n === 1 && (args[0] instanceof L.MR_LifetimeInference_B))
        return L.MR_LifetimeInference_begin_MR_LifetimeInference_B(args[0]);
    throw new TypeError("No overload of `begin` accepts these arguments.");
}

export function end(...args)
{
    const __n = args.length;
    if (__n === 1 && (args[0] instanceof L.MR_LifetimeInference_A))
        return L.MR_LifetimeInference_end_MR_LifetimeInference_A(args[0]);
    if (__n === 1 && (args[0] instanceof L.MR_LifetimeInference_B))
        return L.MR_LifetimeInference_end_MR_LifetimeInference_B(args[0]);
    throw new TypeError("No overload of `end` accepts these arguments.");
}

