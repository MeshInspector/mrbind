// The wrappers of the C bindings file `std_pair_const_int_float`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores two objects: `const int` and `const int`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_pair_const_int_float extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_pair_const_int_float_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_pair_const_int_float_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_pair_const_int_float_ConstructFromAnother(BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor_2(first, second)
    {
        const __ret = ffi.C.MR_C_std_pair_const_int_float_Construct(first, second);
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_pair_const_int_float.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_pair_const_int_float))
            return L.MR_C_std_pair_const_int_float.__ctor_1(args[0]);
        if (__n === 2 && typeof args[0] === "number" && typeof args[1] === "number")
            return L.MR_C_std_pair_const_int_float.__ctor_2(args[0], args[1]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_pair_const_int_float.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_pair_const_int_float.__ctor(args), L.MR_C_std_pair_const_int_float.__destroy, null);
    }

    first()
    {
        const __ret = ffi.C.MR_C_std_pair_const_int_float_first(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.HEAP32()[(Number(__ret)) / 4];
    }

    second()
    {
        const __ret = ffi.C.MR_C_std_pair_const_int_float_second(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.HEAPF32()[(Number(__ret)) / 4];
    }

    second_mut()
    {
        const __ret = ffi.C.MR_C_std_pair_const_int_float_second_mut(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }
}

