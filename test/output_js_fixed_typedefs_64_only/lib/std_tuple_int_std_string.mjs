// The wrappers of the C bindings file `std_tuple_int_std_string`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores 2 objects: `int`, `std::string`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_tuple_int_std_string extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_tuple_int_std_string_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_tuple_int_std_string_DefaultConstruct();
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
            const __ret = ffi.C.MR_C_std_tuple_int_std_string_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_2(_0, _1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __str__1 = ffi.utf8(ffi.nonNullString(_1, "_1"));
            const __end__1 = ffi.utf8End();
            const __ret = ffi.C.MR_C_std_tuple_int_std_string_Construct(_0, __str__1, __end__1);
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_tuple_int_std_string.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_tuple_int_std_string))
            return L.MR_C_std_tuple_int_std_string.__ctor_1(args[0]);
        if (__n === 2 && typeof args[0] === "number" && typeof args[1] === "string")
            return L.MR_C_std_tuple_int_std_string.__ctor_2(args[0], args[1]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_tuple_int_std_string.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_tuple_int_std_string.__ctor(args), L.MR_C_std_tuple_int_std_string.__destroy, null);
    }

    assignFromAnother(other)
    {
        try
        {
            ffi.C.MR_C_std_tuple_int_std_string_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get_int()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_tuple_int_std_string_get_int(this.rawPointer());
            ffi.check();
            return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get_int_mut()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_tuple_int_std_string_get_int_mut(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get_std_string()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_tuple_int_std_string_get_std_string(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get_std_string_mut()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_tuple_int_std_string_get_std_string_mut(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

