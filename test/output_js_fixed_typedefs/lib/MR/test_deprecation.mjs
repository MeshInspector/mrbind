// The wrappers of the C bindings file `MR/test_deprecation`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export function MR_Deprecation_foo()
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_Deprecation_foo();
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_Deprecation_bar()
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_Deprecation_bar();
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

