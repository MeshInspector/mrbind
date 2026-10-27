// The wrappers of the C bindings file `std_optional_int32_t`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores either a single `int32_t` or nothing.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_optional_int32_t extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_optional_int32_t_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_optional_int32_t_DefaultConstruct();
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
            const __ret = ffi.C.MR_C_std_optional_int32_t_ConstructFromAnother(ffi.ptrNonNull(other, "other"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_2(other)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_other = ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = other;});
            const __ret = ffi.C.MR_C_std_optional_int32_t_ConstructFrom(__ptr_other);
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
            return L.MR_C_std_optional_int32_t.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_optional_int32_t))
            return L.MR_C_std_optional_int32_t.__ctor_1(args[0]);
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_C_std_optional_int32_t.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_optional_int32_t.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_optional_int32_t.__ctor(args), L.MR_C_std_optional_int32_t.__destroy, null);
    }

    assignFromAnother(other)
    {
        try
        {
            ffi.C.MR_C_std_optional_int32_t_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(other, "other"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assignFrom(other)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_other = ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = other;});
            ffi.C.MR_C_std_optional_int32_t_AssignFrom(this.rawPointer(), __ptr_other);
            ffi.check();
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

    has_value()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_optional_int32_t_has_value(this.rawPointer());
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    value()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_optional_int32_t_value(this.rawPointer());
            ffi.check();
            return ((__ret >>> 0) === 0 ? null : ffi.M.HEAP32[((__ret >>> 0)) >>> 2]);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    value_mut()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_optional_int32_t_value_mut(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

