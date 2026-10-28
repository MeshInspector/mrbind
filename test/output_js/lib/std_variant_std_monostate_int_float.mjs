// The wrappers of the C bindings file `std_variant_std_monostate_int_float`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores one of 3 objects: `std::monostate`, `int`, `float`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_variant_std_monostate_int_float extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_variant_std_monostate_int_float_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_variant_std_monostate_int_float_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_variant_std_monostate_int_float_ConstructFromAnother(ffi.ptrNonNull(other, "other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_3(value)
    {
        const __ret = ffi.C.MR_C_std_variant_std_monostate_int_float_ConstructAs_int(value);
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_variant_std_monostate_int_float.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_variant_std_monostate_int_float))
            return L.MR_C_std_variant_std_monostate_int_float.__ctor_1(args[0]);
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_C_std_variant_std_monostate_int_float.__ctor_3(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    static constructAs_std_monostate()
    {
        const __ret = ffi.C.MR_C_std_variant_std_monostate_int_float_ConstructAs_std_monostate();
        ffi.check();
        return new L.MR_C_std_variant_std_monostate_int_float(ffi.RAW, (__ret >>> 0), true, null);
    }

    static constructAs_float(value)
    {
        const __ret = ffi.C.MR_C_std_variant_std_monostate_int_float_ConstructAs_float(value);
        ffi.check();
        return new L.MR_C_std_variant_std_monostate_int_float(ffi.RAW, (__ret >>> 0), true, null);
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_variant_std_monostate_int_float.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_variant_std_monostate_int_float.__ctor(args), L.MR_C_std_variant_std_monostate_int_float.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_variant_std_monostate_int_float_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(other, "other"));
        ffi.check();
    }

    index()
    {
        const __ret = ffi.C.MR_C_std_variant_std_monostate_int_float_index(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    AssignAs_std_monostate()
    {
        ffi.C.MR_C_std_variant_std_monostate_int_float_AssignAs_std_monostate(this.rawPointer());
        ffi.check();
    }

    AssignAs_int(value)
    {
        ffi.C.MR_C_std_variant_std_monostate_int_float_AssignAs_int(this.rawPointer(), value);
        ffi.check();
    }

    AssignAs_float(value)
    {
        ffi.C.MR_C_std_variant_std_monostate_int_float_AssignAs_float(this.rawPointer(), value);
        ffi.check();
    }

    get_std_monostate()
    {
        const __ret = ffi.C.MR_C_std_variant_std_monostate_int_float_get_std_monostate(this.rawPointer());
        ffi.check();
        return (__ret !== 0);
    }

    get_int()
    {
        const __ret = ffi.C.MR_C_std_variant_std_monostate_int_float_get_int(this.rawPointer());
        ffi.check();
        return ((__ret >>> 0) === 0 ? null : ffi.HEAP32()[((__ret >>> 0)) >>> 2]);
    }

    get_int_mut()
    {
        const __ret = ffi.C.MR_C_std_variant_std_monostate_int_float_get_int_mut(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    get_float()
    {
        const __ret = ffi.C.MR_C_std_variant_std_monostate_int_float_get_float(this.rawPointer());
        ffi.check();
        return ((__ret >>> 0) === 0 ? null : ffi.HEAPF32()[((__ret >>> 0)) >>> 2]);
    }

    get_float_mut()
    {
        const __ret = ffi.C.MR_C_std_variant_std_monostate_int_float_get_float_mut(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }
}

