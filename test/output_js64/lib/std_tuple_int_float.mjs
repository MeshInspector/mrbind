// The wrappers of the C bindings file `std_tuple_int_float`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores 2 objects: `int`, `float`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_tuple_int_float extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_tuple_int_float_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_tuple_int_float_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_tuple_int_float_ConstructFromAnother(BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor_2(_0, _1)
    {
        const __ret = ffi.C.MR_C_std_tuple_int_float_Construct(_0, _1);
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_tuple_int_float.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_tuple_int_float))
            return L.MR_C_std_tuple_int_float.__ctor_1(args[0]);
        if (__n === 2 && typeof args[0] === "number" && typeof args[1] === "number")
            return L.MR_C_std_tuple_int_float.__ctor_2(args[0], args[1]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_tuple_int_float.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_tuple_int_float.__ctor(args), L.MR_C_std_tuple_int_float.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_tuple_int_float_AssignFromAnother(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
    }

    get_int()
    {
        const __ret = ffi.C.MR_C_std_tuple_int_float_get_int(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.HEAP32()[(Number(__ret)) / 4];
    }

    get_int_mut()
    {
        const __ret = ffi.C.MR_C_std_tuple_int_float_get_int_mut(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    get_float()
    {
        const __ret = ffi.C.MR_C_std_tuple_int_float_get_float(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.HEAPF32()[(Number(__ret)) / 4];
    }

    get_float_mut()
    {
        const __ret = ffi.C.MR_C_std_tuple_int_float_get_float_mut(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }
}

