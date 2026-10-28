// The wrappers of the C bindings file `std_tuple`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores 0 objects.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_tuple extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_tuple_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_tuple_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_tuple_ConstructFromAnother(BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_tuple.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_tuple))
            return L.MR_C_std_tuple.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_tuple.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_tuple.__ctor(args), L.MR_C_std_tuple.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_tuple_AssignFromAnother(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
    }
}

