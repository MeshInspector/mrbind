// The C++ namespace `MR::TestSizeT`.

import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export { MR_TestSizeT_A_unsigned_long as A_unsigned_long } from "../../lib/_all.mjs";
export { MR_TestSizeT_foo_unsigned_long as foo_unsigned_long } from "../../lib/_all.mjs";
export { MR_TestSizeT_foo_unsigned_long_ptr as foo_unsigned_long_ptr } from "../../lib/_all.mjs";
export { MR_TestSizeT_foo_std_vector_unsigned_long as foo_std_vector_unsigned_long } from "../../lib/_all.mjs";
export { MR_TestSizeT_foo_long as foo_long } from "../../lib/_all.mjs";
export { MR_TestSizeT_foo_long_ptr as foo_long_ptr } from "../../lib/_all.mjs";
export { MR_TestSizeT_foo_std_vector_long as foo_std_vector_long } from "../../lib/_all.mjs";

export function foo(...args)
{
    const __n = args.length;
    if (__n === 1 && typeof args[0] === "number")
        return L.MR_TestSizeT_foo_unsigned_long(args[0]);
    if (__n === 1 && (args[0] instanceof L.MR_C_std_vector_unsigned_long))
        return L.MR_TestSizeT_foo_std_vector_unsigned_long(args[0]);
    if (__n === 1 && (args[0] instanceof L.MR_C_std_vector_long))
        return L.MR_TestSizeT_foo_std_vector_long(args[0]);
    throw new TypeError("No overload of `foo` accepts these arguments.");
}

