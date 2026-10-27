// The wrappers of the C bindings file `MR/test_std_string_view`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export function MR_StdStringView_Set(s)
{
    const __sp = ffi.stackSave();
    try
    {
        const __str_s = ffi.utf8(ffi.nonNullString(s, "s"));
        const __end_s = ffi.utf8End();
        ffi.C.MR_StdStringView_Set(__str_s, __end_s);
        ffi.check();
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_StdStringView_SetWithDefault(s)
{
    const __sp = ffi.stackSave();
    try
    {
        const __str_s = s == null ? 0 : ffi.utf8(s);
        const __end_s = s == null ? 0 : ffi.utf8End();
        ffi.C.MR_StdStringView_SetWithDefault(__str_s, __end_s);
        ffi.check();
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_StdStringView_Get()
{
    const __ret = ffi.C.MR_StdStringView_Get();
    ffi.check();
    return new L.MR_C_std_string_view(ffi.RAW, (__ret >>> 0), true, null);
}

export function MR_StdStringView_WriteToRef(ref)
{
    ffi.C.MR_StdStringView_WriteToRef(ffi.ptrNonNull(ref, "ref"));
    ffi.check();
}

export function MR_StdStringView_WriteToPtr(ptr)
{
    ffi.C.MR_StdStringView_WriteToPtr(ffi.ptr(ptr));
    ffi.check();
}

export function MR_StdStringView_ConstRef(s)
{
    const __sp = ffi.stackSave();
    try
    {
        const __str_s = ffi.utf8(ffi.nonNullString(s, "s"));
        const __end_s = ffi.utf8End();
        ffi.C.MR_StdStringView_ConstRef(__str_s, __end_s);
        ffi.check();
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_StdStringView_RvalueRef(s)
{
    const __sp = ffi.stackSave();
    try
    {
        const __str_s = ffi.utf8(ffi.nonNullString(s, "s"));
        const __end_s = ffi.utf8End();
        ffi.C.MR_StdStringView_RvalueRef(__str_s, __end_s);
        ffi.check();
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_StdStringView_ConstRvalueRef(s)
{
    const __sp = ffi.stackSave();
    try
    {
        const __str_s = ffi.utf8(ffi.nonNullString(s, "s"));
        const __end_s = ffi.utf8End();
        ffi.C.MR_StdStringView_ConstRvalueRef(__str_s, __end_s);
        ffi.check();
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

