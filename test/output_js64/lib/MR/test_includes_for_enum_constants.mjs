// The wrappers of the C bindings file `MR/test_includes_for_enum_constants`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export function MR_IncludesForEnumConstants_foo()
{
    const __ret = ffi.C.MR_IncludesForEnumConstants_foo();
    ffi.check();
    return new L.MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1(ffi.RAW, Number(__ret), true, null);
}

