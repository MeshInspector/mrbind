// The wrappers of the C bindings file `MR/test_std_expected`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export function MR_StdExpected_GetExp()
{
    try
    {
        const __ret = ffi.C.MR_StdExpected_GetExp();
        ffi.check();
        return (new L.MR_C_std_expected_int_std_string(ffi.RAW, (__ret >>> 0), true, null)).valueOrThrow();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdExpected_SetExp(_1)
{
    try
    {
        ffi.C.MR_StdExpected_SetExp(ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdExpected_SetExpConstRef(_1)
{
    try
    {
        ffi.C.MR_StdExpected_SetExpConstRef(ffi.ptrNonNull(_1, "_1"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdExpected_SetExpDefTrivial(_1)
{
    try
    {
        ffi.C.MR_StdExpected_SetExpDefTrivial((_1 == null ? ffi.PASS_BY_DEFAULT_ARGUMENT : ffi.PASS_BY_COPY), ffi.ptr(_1));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdExpected_SetExpDef(_1)
{
    try
    {
        ffi.C.MR_StdExpected_SetExpDef((_1 == null ? ffi.PASS_BY_DEFAULT_ARGUMENT : ffi.PASS_BY_COPY), ffi.ptr(_1));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdExpected_GetExpVoid()
{
    try
    {
        const __ret = ffi.C.MR_StdExpected_GetExpVoid();
        ffi.check();
        (new L.MR_C_std_expected_void_float(ffi.RAW, (__ret >>> 0), true, null)).valueOrThrow();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdExpected_SetExpVoid(_1)
{
    try
    {
        ffi.C.MR_StdExpected_SetExpVoid(ffi.ptrNonNull(_1, "_1"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdExpected_SetExpVoidConstRef(_1)
{
    try
    {
        ffi.C.MR_StdExpected_SetExpVoidConstRef(ffi.ptrNonNull(_1, "_1"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdExpected_SetExpVoidDefTrivial(_1)
{
    try
    {
        ffi.C.MR_StdExpected_SetExpVoidDefTrivial(ffi.ptr(_1));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdExpected_SetExpVoidDef(_1)
{
    try
    {
        ffi.C.MR_StdExpected_SetExpVoidDef(ffi.ptr(_1));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdExpected_GetExpVec()
{
    try
    {
        const __ret = ffi.C.MR_StdExpected_GetExpVec();
        ffi.check();
        return new L.MR_C_std_vector_std_expected_int_std_string(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

