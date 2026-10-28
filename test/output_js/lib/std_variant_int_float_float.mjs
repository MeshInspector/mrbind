// The wrappers of the C bindings file `std_variant_int_float_float`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores one of 3 objects: `int`, `float`, `float`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_variant_int_float_float extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_variant_int_float_float_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_variant_int_float_float_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_variant_int_float_float_ConstructFromAnother(ffi.ptrNonNull(other, "other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_2(value)
    {
        const __ret = ffi.C.MR_C_std_variant_int_float_float_ConstructAs_int(value);
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_variant_int_float_float.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_variant_int_float_float))
            return L.MR_C_std_variant_int_float_float.__ctor_1(args[0]);
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_C_std_variant_int_float_float.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    static constructAs_float_1(value)
    {
        const __ret = ffi.C.MR_C_std_variant_int_float_float_ConstructAs_float_1(value);
        ffi.check();
        return new L.MR_C_std_variant_int_float_float(ffi.RAW, (__ret >>> 0), true, null);
    }

    static constructAs_float_2(value)
    {
        const __ret = ffi.C.MR_C_std_variant_int_float_float_ConstructAs_float_2(value);
        ffi.check();
        return new L.MR_C_std_variant_int_float_float(ffi.RAW, (__ret >>> 0), true, null);
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_variant_int_float_float.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_variant_int_float_float.__ctor(args), L.MR_C_std_variant_int_float_float.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_variant_int_float_float_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(other, "other"));
        ffi.check();
    }

    index()
    {
        const __ret = ffi.C.MR_C_std_variant_int_float_float_index(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    AssignAs_int(value)
    {
        ffi.C.MR_C_std_variant_int_float_float_AssignAs_int(this.rawPointer(), value);
        ffi.check();
    }

    AssignAs_float_1(value)
    {
        ffi.C.MR_C_std_variant_int_float_float_AssignAs_float_1(this.rawPointer(), value);
        ffi.check();
    }

    AssignAs_float_2(value)
    {
        ffi.C.MR_C_std_variant_int_float_float_AssignAs_float_2(this.rawPointer(), value);
        ffi.check();
    }

    get_int()
    {
        const __ret = ffi.C.MR_C_std_variant_int_float_float_get_int(this.rawPointer());
        ffi.check();
        return ((__ret >>> 0) === 0 ? null : ffi.HEAP32()[((__ret >>> 0)) >>> 2]);
    }

    get_int_mut()
    {
        const __ret = ffi.C.MR_C_std_variant_int_float_float_get_int_mut(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    get_float_1()
    {
        const __ret = ffi.C.MR_C_std_variant_int_float_float_get_float_1(this.rawPointer());
        ffi.check();
        return ((__ret >>> 0) === 0 ? null : ffi.HEAPF32()[((__ret >>> 0)) >>> 2]);
    }

    get_float_1_mut()
    {
        const __ret = ffi.C.MR_C_std_variant_int_float_float_get_float_1_mut(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    get_float_2()
    {
        const __ret = ffi.C.MR_C_std_variant_int_float_float_get_float_2(this.rawPointer());
        ffi.check();
        return ((__ret >>> 0) === 0 ? null : ffi.HEAPF32()[((__ret >>> 0)) >>> 2]);
    }

    get_float_2_mut()
    {
        const __ret = ffi.C.MR_C_std_variant_int_float_float_get_float_2_mut(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }
}

