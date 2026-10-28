// The wrappers of the C bindings file `MR/test_std_expected`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export function MR_StdExpected_GetExp()
{
    const __ret = ffi.C.MR_StdExpected_GetExp();
    ffi.check();
    return (new L.MR_C_std_expected_int_std_string(ffi.RAW, Number(__ret), true, null)).valueOrThrow();
}

export function MR_StdExpected_SetExp(_1)
{
    ffi.C.MR_StdExpected_SetExp(ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdExpected_SetExpConstRef(_1)
{
    ffi.C.MR_StdExpected_SetExpConstRef(BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdExpected_SetExpDefTrivial(_1)
{
    ffi.C.MR_StdExpected_SetExpDefTrivial((_1 == null ? ffi.PASS_BY_DEFAULT_ARGUMENT : ffi.PASS_BY_COPY), BigInt(ffi.ptr(_1)));
    ffi.check();
}

export function MR_StdExpected_SetExpDef(_1)
{
    ffi.C.MR_StdExpected_SetExpDef((_1 == null ? ffi.PASS_BY_DEFAULT_ARGUMENT : ffi.PASS_BY_COPY), BigInt(ffi.ptr(_1)));
    ffi.check();
}

export function MR_StdExpected_GetExpVoid()
{
    const __ret = ffi.C.MR_StdExpected_GetExpVoid();
    ffi.check();
    (new L.MR_C_std_expected_void_float(ffi.RAW, Number(__ret), true, null)).valueOrThrow();
}

export function MR_StdExpected_SetExpVoid(_1)
{
    ffi.C.MR_StdExpected_SetExpVoid(BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdExpected_SetExpVoidConstRef(_1)
{
    ffi.C.MR_StdExpected_SetExpVoidConstRef(BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdExpected_SetExpVoidDefTrivial(_1)
{
    ffi.C.MR_StdExpected_SetExpVoidDefTrivial(BigInt(ffi.ptr(_1)));
    ffi.check();
}

export function MR_StdExpected_SetExpVoidDef(_1)
{
    ffi.C.MR_StdExpected_SetExpVoidDef(BigInt(ffi.ptr(_1)));
    ffi.check();
}

export function MR_StdExpected_GetExpVec()
{
    const __ret = ffi.C.MR_StdExpected_GetExpVec();
    ffi.check();
    return new L.MR_C_std_vector_std_expected_int_std_string(ffi.RAW, Number(__ret), true, null);
}

