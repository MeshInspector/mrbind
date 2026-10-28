// The wrappers of the C bindings file `MR/test_std_filesystem`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export function MR_StdFilesystem_GetPath()
{
    const __ret = ffi.C.MR_StdFilesystem_GetPath();
    ffi.check();
    return new L.MR_C_std_filesystem_path(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdFilesystem_SetPath(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __str__1 = ffi.utf8(ffi.nonNullString(_1, "_1"));
        const __end__1 = ffi.utf8End();
        ffi.C.MR_StdFilesystem_SetPath(BigInt(__str__1), BigInt(__end__1));
        ffi.check();
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
        ffi.C.MR_StdFilesystem_SetPathConstRef(BigInt(__str__1), BigInt(__end__1));
        ffi.check();
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
        const __end__1 = _1 == null ? 0 : ffi.utf8End();
        ffi.C.MR_StdFilesystem_SetPathDefTrivial(BigInt(__str__1), BigInt(__end__1));
        ffi.check();
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
        const __end__1 = _1 == null ? 0 : ffi.utf8End();
        ffi.C.MR_StdFilesystem_SetPathDef(BigInt(__str__1), BigInt(__end__1));
        ffi.check();
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

