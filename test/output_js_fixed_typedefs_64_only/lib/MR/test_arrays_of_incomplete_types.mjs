// The wrappers of the C bindings file `MR/test_arrays_of_incomplete_types`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export function MR_IncompleteArrayElemType_foo(_1)
{
    try
    {
        ffi.C.MR_IncompleteArrayElemType_foo(_1);
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

