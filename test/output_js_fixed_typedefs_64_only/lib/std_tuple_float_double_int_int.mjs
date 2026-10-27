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
    static __destroy(ptr) {ffi.C.MR_C_std_tuple_float_double_int_int_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_tuple_float_double_int_int_DefaultConstruct();
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
            const __ret = ffi.C.MR_C_std_tuple_float_double_int_int_ConstructFromAnother(ffi.ptrNonNull(other, "other"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_2(_0, _1, _2, _3)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_tuple_float_double_int_int_Construct(_0, _1, _2, _3);
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
        try
        {
            ffi.C.MR_C_std_tuple_float_double_int_int_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(other, "other"));
            ffi.check();
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
            const __ret = ffi.C.MR_C_std_tuple_float_double_int_int_get_float(this.rawPointer());
            ffi.check();
            return ffi.M.HEAPF32[((__ret >>> 0)) >>> 2];
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
            const __ret = ffi.C.MR_C_std_tuple_float_double_int_int_get_float_mut(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get_double()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_tuple_float_double_int_int_get_double(this.rawPointer());
            ffi.check();
            return ffi.M.HEAPF64[((__ret >>> 0)) >>> 3];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get_double_mut()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_tuple_float_double_int_int_get_double_mut(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get_int_2()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_tuple_float_double_int_int_get_int_2(this.rawPointer());
            ffi.check();
            return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get_int_2_mut()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_tuple_float_double_int_int_get_int_2_mut(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get_int_3()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_tuple_float_double_int_int_get_int_3(this.rawPointer());
            ffi.check();
            return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get_int_3_mut()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_tuple_float_double_int_int_get_int_3_mut(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

