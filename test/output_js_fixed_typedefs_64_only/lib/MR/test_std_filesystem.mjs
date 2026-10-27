// The wrappers of the C bindings file `MR/test_std_filesystem`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export function MR_StdFilesystem_GetPath()
{
    try
    {
        const __ret = ffi.C.MR_StdFilesystem_GetPath();
        ffi.check();
        return new L.MR_C_std_filesystem_path(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdFilesystem_SetPath(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __str__1 = ffi.utf8(ffi.nonNullString(_1, "_1"));
        const __end__1 = ffi.utf8End();
        ffi.C.MR_StdFilesystem_SetPath(__str__1, __end__1);
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

export function MR_StdFilesystem_SetPathConstRef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __str__1 = ffi.utf8(ffi.nonNullString(_1, "_1"));
        const __end__1 = ffi.utf8End();
        ffi.C.MR_StdFilesystem_SetPathConstRef(__str__1, __end__1);
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

export function MR_StdFilesystem_SetPathDefTrivial(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __str__1 = _1 == null ? 0 : ffi.utf8(_1);
        const __end__1 = ffi.utf8End();
        ffi.C.MR_StdFilesystem_SetPathDefTrivial(__str__1, __end__1);
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

export function MR_StdFilesystem_SetPathDef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __str__1 = _1 == null ? 0 : ffi.utf8(_1);
        const __end__1 = ffi.utf8End();
        ffi.C.MR_StdFilesystem_SetPathDef(__str__1, __end__1);
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

