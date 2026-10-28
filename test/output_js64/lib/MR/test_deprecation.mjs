// The wrappers of the C bindings file `MR/test_deprecation`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export function MR_Deprecation_foo()
{
    ffi.C.MR_Deprecation_foo();
    ffi.check();
}

export function MR_Deprecation_bar()
{
    ffi.C.MR_Deprecation_bar();
    ffi.check();
}

