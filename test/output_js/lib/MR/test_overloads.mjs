// The wrappers of the C bindings file `MR/test_overloads`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export function MR_Overloads_a_1(_1)
{
    ffi.C.MR_Overloads_a_1(_1);
    ffi.check();
}

export function MR_Overloads_a_2(_1, _2)
{
    ffi.C.MR_Overloads_a_2(_1, _2);
    ffi.check();
}

export function MR_Overloads_b_int()
{
    ffi.C.MR_Overloads_b_int();
    ffi.check();
}

export function MR_Overloads_b_float()
{
    ffi.C.MR_Overloads_b_float();
    ffi.check();
}

export function MR_Overloads_c_int(_1)
{
    ffi.C.MR_Overloads_c_int(_1);
    ffi.check();
}

export function MR_Overloads_c_float(_1)
{
    ffi.C.MR_Overloads_c_float(_1);
    ffi.check();
}

export function MR_Overloads_d_int(_1, _2, _3)
{
    ffi.C.MR_Overloads_d_int(((_1 << 24) >> 24), _2, ((_3 << 24) >> 24));
    ffi.check();
}

export function MR_Overloads_d_float(_1, _2, _3)
{
    ffi.C.MR_Overloads_d_float(((_1 << 24) >> 24), _2, ((_3 << 24) >> 24));
    ffi.check();
}

export function MR_Overloads_e_const_int_ref(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr__1 = ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = _1;});
        ffi.C.MR_Overloads_e_const_int_ref(__ptr__1, _2);
        ffi.check();
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_Overloads_e_int_rvalue_ref_int(_1, _2)
{
    ffi.C.MR_Overloads_e_int_rvalue_ref_int(_1, _2);
    ffi.check();
}

export function MR_Overloads_e_int_rvalue_ref_float(_1, _2)
{
    ffi.C.MR_Overloads_e_int_rvalue_ref_float(_1, _2);
    ffi.check();
}

export function MR_Overloads_f_float(_1, _2)
{
    ffi.C.MR_Overloads_f_float(_1, _2);
    ffi.check();
}

export function MR_Overloads_f_int_rvalue_ref(_1, _2)
{
    ffi.C.MR_Overloads_f_int_rvalue_ref(_1, _2);
    ffi.check();
}

export function MR_Overloads_f_const_int_ref(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr__1 = ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = _1;});
        ffi.C.MR_Overloads_f_const_int_ref(__ptr__1, _2);
        ffi.check();
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

