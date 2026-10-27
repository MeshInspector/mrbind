// The wrappers of the C bindings file `std_optional_MR_StdOptional_B`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores either a single `MR::StdOptional::B` or nothing.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_optional_MR_StdOptional_B extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_optional_MR_StdOptional_B_Destroy(ptr);}

    static __ctor_0()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_optional_MR_StdOptional_B_DefaultConstruct();
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

    static __ctor_1(other)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_optional_MR_StdOptional_B_ConstructFromAnother((other == null ? ffi.PASS_BY_NO_OBJECT : ffi.PASS_BY_COPY), ffi.ptr(other));
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

    static __ctor_2(other)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_optional_MR_StdOptional_B_ConstructFrom((other == null ? ffi.PASS_BY_NO_OBJECT : ffi.PASS_BY_COPY), ffi.ptr(other));
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
            return L.MR_C_std_optional_MR_StdOptional_B.__ctor_0();
        if (__n === 1 && (__n <= 0 || (args[0] == null || args[0] instanceof L.MR_C_std_optional_MR_StdOptional_B)))
            return L.MR_C_std_optional_MR_StdOptional_B.__ctor_1(args[0]);
        if (__n === 1 && (__n <= 0 || (args[0] == null || args[0] instanceof L.MR_StdOptional_B)))
            return L.MR_C_std_optional_MR_StdOptional_B.__ctor_2(args[0]);
        if (__n >= 0 && __n < 1 && (__n <= 0 || (args[0] == null || args[0] instanceof L.MR_C_std_optional_MR_StdOptional_B)))
            return L.MR_C_std_optional_MR_StdOptional_B.__ctor_1(args[0]);
        if (__n >= 0 && __n < 1 && (__n <= 0 || (args[0] == null || args[0] instanceof L.MR_StdOptional_B)))
            return L.MR_C_std_optional_MR_StdOptional_B.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_optional_MR_StdOptional_B.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_optional_MR_StdOptional_B.__ctor(args), L.MR_C_std_optional_MR_StdOptional_B.__destroy, null);
    }

    assignFromAnother(other)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_std_optional_MR_StdOptional_B_AssignFromAnother(this.rawPointer(), (other == null ? ffi.PASS_BY_NO_OBJECT : ffi.PASS_BY_COPY), ffi.ptr(other));
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

    assignFrom(other)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_std_optional_MR_StdOptional_B_AssignFrom(this.rawPointer(), (other == null ? ffi.PASS_BY_NO_OBJECT : ffi.PASS_BY_COPY), ffi.ptr(other));
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
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_optional_MR_StdOptional_B_has_value(this.rawPointer());
            ffi.check();
            return (__ret !== 0);
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

    value()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_optional_MR_StdOptional_B_value(this.rawPointer());
            ffi.check();
            const __owner = this;
            return ((__ret >>> 0) === 0 ? null : new L.MR_StdOptional_B(ffi.RAW, (__ret >>> 0), false, __owner));
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

    value_mut()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_optional_MR_StdOptional_B_value_mut(this.rawPointer());
            ffi.check();
            const __owner = this;
            return ((__ret >>> 0) === 0 ? null : new L.MR_StdOptional_B(ffi.RAW, (__ret >>> 0), false, __owner));
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
}

