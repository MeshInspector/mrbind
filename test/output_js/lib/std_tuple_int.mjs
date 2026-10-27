// The wrappers of the C bindings file `std_tuple_int`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores 1 object: `int`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_tuple_int extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_tuple_int_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_tuple_int_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_tuple_int_ConstructFromAnother(ffi.ptrNonNull(other, "other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_2(_0)
    {
        const __ret = ffi.C.MR_C_std_tuple_int_Construct(_0);
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_tuple_int.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_tuple_int))
            return L.MR_C_std_tuple_int.__ctor_1(args[0]);
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_C_std_tuple_int.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_tuple_int.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_tuple_int.__ctor(args), L.MR_C_std_tuple_int.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_tuple_int_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(other, "other"));
        ffi.check();
    }

    get_int()
    {
        const __ret = ffi.C.MR_C_std_tuple_int_get_int(this.rawPointer());
        ffi.check();
        return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
    }

    get_int_mut()
    {
        const __ret = ffi.C.MR_C_std_tuple_int_get_int_mut(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }
}

