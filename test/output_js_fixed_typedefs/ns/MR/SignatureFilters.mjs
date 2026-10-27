// The C++ namespace `MR::SignatureFilters`.

import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export { MR_SignatureFilters_A as A } from "../../lib/_all.mjs";
export { MR_SignatureFilters_Blah as Blah } from "../../lib/_all.mjs";
export { MR_SignatureFilters_foo_1 as foo_1 } from "../../lib/_all.mjs";
export { MR_SignatureFilters_foo_0 as foo_0 } from "../../lib/_all.mjs";
export { MR_SignatureFilters_foo2_1 as foo2_1 } from "../../lib/_all.mjs";
export { MR_SignatureFilters_foo2_0 as foo2_0 } from "../../lib/_all.mjs";
export { MR_SignatureFilters_foo3_1 as foo3_1 } from "../../lib/_all.mjs";
export { MR_SignatureFilters_foo3_0 as foo3_0 } from "../../lib/_all.mjs";
export { MR_SignatureFilters_foo4_1 as foo4_1 } from "../../lib/_all.mjs";
export { MR_SignatureFilters_foo4_0 as foo4_0 } from "../../lib/_all.mjs";
export { MR_SignatureFilters_foo5_1 as foo5_1 } from "../../lib/_all.mjs";
export { MR_SignatureFilters_foo5_0 as foo5_0 } from "../../lib/_all.mjs";

export function foo(...args)
{
    const __n = args.length;
    if (__n === 1 && (args[0] instanceof L.MR_SignatureFilters_A))
        return L.MR_SignatureFilters_foo_1(args[0]);
    if (__n === 0)
        return L.MR_SignatureFilters_foo_0();
    throw new TypeError("No overload of `foo` accepts these arguments.");
}

export function foo2(...args)
{
    const __n = args.length;
    if (__n === 1 && (args[0] instanceof L.MR_SignatureFilters_A))
        return L.MR_SignatureFilters_foo2_1(args[0]);
    if (__n === 0)
        return L.MR_SignatureFilters_foo2_0();
    throw new TypeError("No overload of `foo2` accepts these arguments.");
}

export function foo3(...args)
{
    const __n = args.length;
    if (__n === 1 && (args[0] instanceof L.MR_SignatureFilters_A))
        return L.MR_SignatureFilters_foo3_1(args[0]);
    if (__n === 0)
        return L.MR_SignatureFilters_foo3_0();
    throw new TypeError("No overload of `foo3` accepts these arguments.");
}

export function foo4(...args)
{
    const __n = args.length;
    if (__n === 1 && (args[0] instanceof L.MR_SignatureFilters_A))
        return L.MR_SignatureFilters_foo4_1(args[0]);
    if (__n === 0)
        return L.MR_SignatureFilters_foo4_0();
    throw new TypeError("No overload of `foo4` accepts these arguments.");
}

export function foo5(...args)
{
    const __n = args.length;
    if (__n === 1 && (args[0] instanceof L.MR_SignatureFilters_A))
        return L.MR_SignatureFilters_foo5_1(args[0]);
    if (__n === 0)
        return L.MR_SignatureFilters_foo5_0();
    throw new TypeError("No overload of `foo5` accepts these arguments.");
}

