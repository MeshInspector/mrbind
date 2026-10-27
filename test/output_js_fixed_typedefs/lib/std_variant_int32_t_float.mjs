// The wrappers of the C bindings file `std_variant_int32_t_float`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores one of 2 objects: `int32_t`, `float`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_variant_int32_t_float extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_variant_int32_t_float_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_variant_int32_t_float_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(other)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_variant_int32_t_float_ConstructFromAnother(ffi.ptrNonNull(other, "other"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_2(value)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_variant_int32_t_float_ConstructAs_int32_t(value);
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_variant_int32_t_float.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_variant_int32_t_float))
            return L.MR_C_std_variant_int32_t_float.__ctor_1(args[0]);
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_C_std_variant_int32_t_float.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    static constructAs_float(value)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_variant_int32_t_float_ConstructAs_float(value);
            ffi.check();
            return new L.MR_C_std_variant_int32_t_float(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_variant_int32_t_float.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_variant_int32_t_float.__ctor(args), L.MR_C_std_variant_int32_t_float.__destroy, null);
    }

    assignFromAnother(other)
    {
        try
        {
            ffi.C.MR_C_std_variant_int32_t_float_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(other, "other"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    index()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_variant_int32_t_float_index(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    AssignAs_int32_t(value)
    {
        try
        {
            ffi.C.MR_C_std_variant_int32_t_float_AssignAs_int32_t(this.rawPointer(), value);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    AssignAs_float(value)
    {
        try
        {
            ffi.C.MR_C_std_variant_int32_t_float_AssignAs_float(this.rawPointer(), value);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get_int32_t()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_variant_int32_t_float_get_int32_t(this.rawPointer());
            ffi.check();
            return ((__ret >>> 0) === 0 ? null : ffi.M.HEAP32[((__ret >>> 0)) >>> 2]);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get_int32_t_mut()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_variant_int32_t_float_get_int32_t_mut(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get_float()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_variant_int32_t_float_get_float(this.rawPointer());
            ffi.check();
            return ((__ret >>> 0) === 0 ? null : ffi.M.HEAPF32[((__ret >>> 0)) >>> 2]);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get_float_mut()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_variant_int32_t_float_get_float_mut(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

