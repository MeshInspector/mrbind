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
        ffi.C.MR_StdString_Set(BigInt(__str_s), BigInt(__end_s));
        ffi.check();
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
        ffi.C.MR_StdString_SetWithDefault(BigInt(__str_s), BigInt(__end_s));
        ffi.check();
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_StdString_Get()
{
    const __ret = ffi.C.MR_StdString_Get();
    ffi.check();
    return ffi.takeString(Number(__ret));
}

export function MR_StdString_WriteToRef(ref)
{
    ffi.C.MR_StdString_WriteToRef(BigInt(ffi.ptrNonNull(ref, "ref")));
    ffi.check();
}

export function MR_StdString_WriteToPtr(ptr)
{
    ffi.C.MR_StdString_WriteToPtr(BigInt(ffi.ptr(ptr)));
    ffi.check();
}

export function MR_StdString_ConstRef(s)
{
    const __sp = ffi.stackSave();
    try
    {
        const __str_s = ffi.utf8(ffi.nonNullString(s, "s"));
        const __end_s = ffi.utf8End();
        ffi.C.MR_StdString_ConstRef(BigInt(__str_s), BigInt(__end_s));
        ffi.check();
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
        ffi.C.MR_StdString_RvalueRef(BigInt(__str_s), BigInt(__end_s));
        ffi.check();
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
        ffi.C.MR_StdString_ConstRvalueRef(BigInt(__str_s), BigInt(__end_s));
        ffi.check();
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

