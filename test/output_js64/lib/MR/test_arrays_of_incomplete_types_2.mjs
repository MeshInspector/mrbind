// The wrappers of the C bindings file `MR/test_arrays_of_incomplete_types_2`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export const MR_IncompleteArrayElemType_E = Object.freeze({
});

export function MR_IncompleteArrayElemType_bar(_1)
{
    ffi.C.MR_IncompleteArrayElemType_bar(BigInt(_1));
    ffi.check();
}

