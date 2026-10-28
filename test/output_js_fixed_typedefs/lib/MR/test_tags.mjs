// The wrappers of the C bindings file `MR/test_tags`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export function MR_Tags_foo_1_std_less_int32_t()
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_Tags_foo_1_std_less_int32_t();
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

export function MR_Tags_foo_1_std_less_void()
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_Tags_foo_1_std_less_void();
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

export function MR_Tags_foo_1_std_greater_int32_t()
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_Tags_foo_1_std_greater_int32_t();
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

export function MR_Tags_foo_1_std_greater_void()
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_Tags_foo_1_std_greater_void();
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

export function MR_Tags_foo_0()
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_Tags_foo_0();
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

