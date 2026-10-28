// The wrappers of the C bindings file `MR/test_variant`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export function MR_StdVariant_foo()
{
    const __ret = ffi.C.MR_StdVariant_foo();
    ffi.check();
    return new L.MR_C_std_variant_int_float(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdVariant_bar(_1)
{
    ffi.C.MR_StdVariant_bar(BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdVariant_baz(_1)
{
    ffi.C.MR_StdVariant_baz(ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdVariant_blah()
{
    const __ret = ffi.C.MR_StdVariant_blah();
    ffi.check();
    return new L.MR_C_std_variant_std_monostate_int_float(ffi.RAW, Number(__ret), true, null);
}

