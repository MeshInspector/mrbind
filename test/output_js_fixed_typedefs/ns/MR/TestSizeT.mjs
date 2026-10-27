// The C++ namespace `MR::TestSizeT`.

import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export { MR_TestSizeT_A_uint64_t as A_uint64_t } from "../../lib/_all.mjs";
export { MR_TestSizeT_foo_uint64_t as foo_uint64_t } from "../../lib/_all.mjs";
export { MR_TestSizeT_foo_uint64_t_ptr as foo_uint64_t_ptr } from "../../lib/_all.mjs";
export { MR_TestSizeT_foo_std_vector_uint64_t as foo_std_vector_uint64_t } from "../../lib/_all.mjs";
export { MR_TestSizeT_foo_int64_t as foo_int64_t } from "../../lib/_all.mjs";
export { MR_TestSizeT_foo_int64_t_ptr as foo_int64_t_ptr } from "../../lib/_all.mjs";
export { MR_TestSizeT_foo_std_vector_int64_t as foo_std_vector_int64_t } from "../../lib/_all.mjs";

export function foo(...args)
{
    const __n = args.length;
    if (__n === 1 && (typeof args[0] === "number" || typeof args[0] === "bigint"))
        return L.MR_TestSizeT_foo_uint64_t(args[0]);
    if (__n === 1 && typeof args[0] === "number")
        return L.MR_TestSizeT_foo_uint64_t_ptr(args[0]);
    if (__n === 1 && (args[0] instanceof L.MR_C_std_vector_uint64_t))
        return L.MR_TestSizeT_foo_std_vector_uint64_t(args[0]);
    if (__n === 1 && (args[0] instanceof L.MR_C_std_vector_int64_t))
        return L.MR_TestSizeT_foo_std_vector_int64_t(args[0]);
    throw new TypeError("No overload of `foo` accepts these arguments.");
}

