// The wrappers of the C bindings file `MR/test_combined_a_b`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export function MR_GetCombinedVecAB()
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_GetCombinedVecAB();
        ffi.check();
        return new L.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

