// The wrappers of the C bindings file `std_pair_int_ref_float_ref`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores two objects: `int &` and `int &`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_pair_int_ref_float_ref extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_pair_int_ref_float_ref_Destroy(ptr);}

    static __ctor_0(first, second)
    {
        const __ret = ffi.C.MR_C_std_pair_int_ref_float_ref_Construct(first, second);
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 2 && typeof args[0] === "number" && typeof args[1] === "number")
            return L.MR_C_std_pair_int_ref_float_ref.__ctor_0(args[0], args[1]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_pair_int_ref_float_ref.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_pair_int_ref_float_ref.__ctor(args), L.MR_C_std_pair_int_ref_float_ref.__destroy, null);
    }

    first()
    {
        const __ret = ffi.C.MR_C_std_pair_int_ref_float_ref_first(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    second()
    {
        const __ret = ffi.C.MR_C_std_pair_int_ref_float_ref_second(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }
}

