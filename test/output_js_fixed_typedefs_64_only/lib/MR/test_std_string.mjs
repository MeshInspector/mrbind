// The wrappers of the C bindings file `MR/test_std_string`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export function MR_StdString_Set(s)
{
    const __sp = ffi.stackSave();
    try
    {
        const __str_s = ffi.utf8(ffi.nonNullString(s, "s"));
        const __end_s = ffi.utf8End();
        ffi.C.MR_StdString_Set(__str_s, __end_s);
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

export function MR_StdString_SetWithDefault(s)
{
    const __sp = ffi.stackSave();
    try
    {
        const __str_s = s == null ? 0 : ffi.utf8(s);
        const __end_s = ffi.utf8End();
        ffi.C.MR_StdString_SetWithDefault(__str_s, __end_s);
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

export function MR_StdString_Get()
{
    try
    {
        const __ret = ffi.C.MR_StdString_Get();
        ffi.check();
        return ffi.takeString((__ret >>> 0));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdString_WriteToRef(ref)
{
    try
    {
        ffi.C.MR_StdString_WriteToRef(ffi.ptrNonNull(ref, "ref"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdString_WriteToPtr(ptr)
{
    try
    {
        ffi.C.MR_StdString_WriteToPtr(ffi.ptr(ptr));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdString_ConstRef(s)
{
    const __sp = ffi.stackSave();
    try
    {
        const __str_s = ffi.utf8(ffi.nonNullString(s, "s"));
        const __end_s = ffi.utf8End();
        ffi.C.MR_StdString_ConstRef(__str_s, __end_s);
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

export function MR_StdString_RvalueRef(s)
{
    const __sp = ffi.stackSave();
    try
    {
        const __str_s = ffi.utf8(ffi.nonNullString(s, "s"));
        const __end_s = ffi.utf8End();
        ffi.C.MR_StdString_RvalueRef(__str_s, __end_s);
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

export function MR_StdString_ConstRvalueRef(s)
{
    const __sp = ffi.stackSave();
    try
    {
        const __str_s = ffi.utf8(ffi.nonNullString(s, "s"));
        const __end_s = ffi.utf8End();
        ffi.C.MR_StdString_ConstRvalueRef(__str_s, __end_s);
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

