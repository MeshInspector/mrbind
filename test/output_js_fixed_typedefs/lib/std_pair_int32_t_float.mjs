// The wrappers of the C bindings file `std_pair_int32_t_float`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores two objects: `int32_t` and `int32_t`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_pair_int32_t_float extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_pair_int32_t_float_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_pair_int32_t_float_DefaultConstruct();
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
            const __ret = ffi.C.MR_C_std_pair_int32_t_float_ConstructFromAnother(ffi.ptrNonNull(other, "other"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_2(first, second)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_pair_int32_t_float_Construct(first, second);
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
            return L.MR_C_std_pair_int32_t_float.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_pair_int32_t_float))
            return L.MR_C_std_pair_int32_t_float.__ctor_1(args[0]);
        if (__n === 2 && typeof args[0] === "number" && typeof args[1] === "number")
            return L.MR_C_std_pair_int32_t_float.__ctor_2(args[0], args[1]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_pair_int32_t_float.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_pair_int32_t_float.__ctor(args), L.MR_C_std_pair_int32_t_float.__destroy, null);
    }

    assignFromAnother(other)
    {
        try
        {
            ffi.C.MR_C_std_pair_int32_t_float_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(other, "other"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    first()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_pair_int32_t_float_first(this.rawPointer());
            ffi.check();
            return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    first_mut()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_pair_int32_t_float_first_mut(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    second()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_pair_int32_t_float_second(this.rawPointer());
            ffi.check();
            return ffi.M.HEAPF32[((__ret >>> 0)) >>> 2];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    second_mut()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_pair_int32_t_float_second_mut(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

