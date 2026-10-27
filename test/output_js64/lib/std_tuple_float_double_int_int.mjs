// The wrappers of the C bindings file `std_tuple_float_double_int_int`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores 4 objects: `float`, `double`, `int`, `int`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_tuple_float_double_int_int extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_tuple_float_double_int_int_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_tuple_float_double_int_int_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_tuple_float_double_int_int_ConstructFromAnother(BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor_2(_0, _1, _2, _3)
    {
        const __ret = ffi.C.MR_C_std_tuple_float_double_int_int_Construct(_0, _1, _2, _3);
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_tuple_float_double_int_int.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_tuple_float_double_int_int))
            return L.MR_C_std_tuple_float_double_int_int.__ctor_1(args[0]);
        if (__n === 4 && typeof args[0] === "number" && typeof args[1] === "number" && typeof args[2] === "number" && typeof args[3] === "number")
            return L.MR_C_std_tuple_float_double_int_int.__ctor_2(args[0], args[1], args[2], args[3]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_tuple_float_double_int_int.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_tuple_float_double_int_int.__ctor(args), L.MR_C_std_tuple_float_double_int_int.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_tuple_float_double_int_int_AssignFromAnother(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
    }

    get_float()
    {
        const __ret = ffi.C.MR_C_std_tuple_float_double_int_int_get_float(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAPF32[(Number(__ret)) >>> 2];
    }

    get_float_mut()
    {
        const __ret = ffi.C.MR_C_std_tuple_float_double_int_int_get_float_mut(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    get_double()
    {
        const __ret = ffi.C.MR_C_std_tuple_float_double_int_int_get_double(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAPF64[(Number(__ret)) >>> 3];
    }

    get_double_mut()
    {
        const __ret = ffi.C.MR_C_std_tuple_float_double_int_int_get_double_mut(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    get_int_2()
    {
        const __ret = ffi.C.MR_C_std_tuple_float_double_int_int_get_int_2(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    get_int_2_mut()
    {
        const __ret = ffi.C.MR_C_std_tuple_float_double_int_int_get_int_2_mut(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    get_int_3()
    {
        const __ret = ffi.C.MR_C_std_tuple_float_double_int_int_get_int_3(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    get_int_3_mut()
    {
        const __ret = ffi.C.MR_C_std_tuple_float_double_int_int_get_int_3_mut(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }
}

