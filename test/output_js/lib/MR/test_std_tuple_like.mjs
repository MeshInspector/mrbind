// The wrappers of the C bindings file `MR/test_std_tuple_like`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export function MR_StdTupleLike_SetPair(_1)
{
    ffi.C.MR_StdTupleLike_SetPair(ffi.ptrNonNull(_1, "_1"));
    ffi.check();
}

export function MR_StdTupleLike_GetPair()
{
    const __ret = ffi.C.MR_StdTupleLike_GetPair();
    ffi.check();
    return new L.MR_C_std_pair_int_float(ffi.RAW, (__ret >>> 0), true, null);
}

export function MR_StdTupleLike_GetPair2()
{
    const __ret = ffi.C.MR_StdTupleLike_GetPair2();
    ffi.check();
    return new L.MR_C_std_pair_const_int_float(ffi.RAW, (__ret >>> 0), true, null);
}

export function MR_StdTupleLike_GetPair3()
{
    const __ret = ffi.C.MR_StdTupleLike_GetPair3();
    ffi.check();
    return new L.MR_C_std_pair_int_ref_float_ref(ffi.RAW, (__ret >>> 0), true, null);
}

export function MR_StdTupleLike_GetPair4()
{
    const __ret = ffi.C.MR_StdTupleLike_GetPair4();
    ffi.check();
    return new L.MR_C_std_pair_const_int_ref_const_float_ref(ffi.RAW, (__ret >>> 0), true, null);
}

export function MR_StdTupleLike_GetPair5()
{
    const __ret = ffi.C.MR_StdTupleLike_GetPair5();
    ffi.check();
    return new L.MR_C_std_pair_int_rvalue_ref_float_rvalue_ref(ffi.RAW, (__ret >>> 0), true, null);
}

export function MR_StdTupleLike_GetPair6()
{
    const __ret = ffi.C.MR_StdTupleLike_GetPair6();
    ffi.check();
    return new L.MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref(ffi.RAW, (__ret >>> 0), true, null);
}

export function MR_StdTupleLike_SetTuple(_1)
{
    ffi.C.MR_StdTupleLike_SetTuple(ffi.ptrNonNull(_1, "_1"));
    ffi.check();
}

export function MR_StdTupleLike_GetTuple()
{
    const __ret = ffi.C.MR_StdTupleLike_GetTuple();
    ffi.check();
    return new L.MR_C_std_tuple_int_float(ffi.RAW, (__ret >>> 0), true, null);
}

export function MR_StdTupleLike_GetTuple2()
{
    const __ret = ffi.C.MR_StdTupleLike_GetTuple2();
    ffi.check();
    return new L.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref(ffi.RAW, (__ret >>> 0), true, null);
}

export function MR_StdTupleLike_GetTuple7()
{
    const __ret = ffi.C.MR_StdTupleLike_GetTuple7();
    ffi.check();
    return new L.MR_C_std_tuple(ffi.RAW, (__ret >>> 0), true, null);
}

export function MR_StdTupleLike_GetTuple8()
{
    const __ret = ffi.C.MR_StdTupleLike_GetTuple8();
    ffi.check();
    return new L.MR_C_std_tuple_float_double_int_int(ffi.RAW, (__ret >>> 0), true, null);
}

