// The wrappers of the C bindings file `std_shared_ptr_const_int32_t`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Wraps a pointer to a single shared reference-counted heap-allocated `const int32_t`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_shared_ptr_const_int32_t extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_shared_ptr_const_int32_t_Destroy(ptr);}

    static __ctor_0()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_shared_ptr_const_int32_t_DefaultConstruct();
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
            const __ret = ffi.C.MR_C_std_shared_ptr_const_int32_t_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
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

    static __ctor_2(value)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_shared_ptr_const_int32_t_ConstructFromValue(value);
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

    static __ctor_4(ptr)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_ptr = ptr == null ? 0 : ffi.stackScalar(4, (p) => {ffi.HEAPU32()[(p) >>> 2] = ptr;});
            const __ret = ffi.C.MR_C_std_shared_ptr_const_int32_t_ConstructNonOwning(__ptr_ptr);
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

    static __ctor_5(ptr)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_shared_ptr_const_int32_t_ConstructFromMutable(ffi.PASS_BY_COPY, ffi.ptrNonNull(ptr, "ptr"));
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

    static __ctor_6(ownership, ptr)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_ptr = ptr == null ? 0 : ffi.stackScalar(4, (p) => {ffi.HEAPU32()[(p) >>> 2] = ptr;});
            const __ret = ffi.C.MR_C_std_shared_ptr_const_int32_t_ConstructAliasing(ffi.PASS_BY_COPY, ffi.ptrNonNull(ownership, "ownership"), __ptr_ptr);
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
            return L.MR_C_std_shared_ptr_const_int32_t.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_shared_ptr_const_int32_t))
            return L.MR_C_std_shared_ptr_const_int32_t.__ctor_1(args[0]);
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_C_std_shared_ptr_const_int32_t.__ctor_2(args[0]);
        if (__n === 1 && (__n <= 0 || (args[0] == null || typeof args[0] === "number")))
            return L.MR_C_std_shared_ptr_const_int32_t.__ctor_4(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_C_std_shared_ptr_int32_t))
            return L.MR_C_std_shared_ptr_const_int32_t.__ctor_5(args[0]);
        if (__n === 2 && (args[0] instanceof L.MR_C_std_shared_ptr_const_void) && (__n <= 1 || (args[1] == null || typeof args[1] === "number")))
            return L.MR_C_std_shared_ptr_const_int32_t.__ctor_6(args[0], args[1]);
        if (__n >= 0 && __n < 1 && (__n <= 0 || (args[0] == null || typeof args[0] === "number")))
            return L.MR_C_std_shared_ptr_const_int32_t.__ctor_4(args[0]);
        if (__n >= 1 && __n < 2 && (args[0] instanceof L.MR_C_std_shared_ptr_const_void) && (__n <= 1 || (args[1] == null || typeof args[1] === "number")))
            return L.MR_C_std_shared_ptr_const_int32_t.__ctor_6(args[0], args[1]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    static construct(ptr)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_ptr = ffi.stackScalar(4, (p) => {ffi.HEAPU32()[(p) >>> 2] = ptr;});
            const __ret = ffi.C.MR_C_std_shared_ptr_const_int32_t_Construct(__ptr_ptr);
            ffi.check();
            return new L.MR_C_std_shared_ptr_const_int32_t(ffi.RAW, (__ret >>> 0), true, null);
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

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_shared_ptr_const_int32_t.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_shared_ptr_const_int32_t.__ctor(args), L.MR_C_std_shared_ptr_const_int32_t.__destroy, null);
    }

    assignFromAnother(other)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_std_shared_ptr_const_int32_t_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
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

    get()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_shared_ptr_const_int32_t_get(this.rawPointer());
            ffi.check();
            return ((__ret >>> 0) === 0 ? null : ffi.HEAP32()[((__ret >>> 0)) >>> 2]);
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
            const __ret = ffi.C.MR_C_std_shared_ptr_const_int32_t_has_value(this.rawPointer());
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

    use_count()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_shared_ptr_const_int32_t_use_count(this.rawPointer());
            ffi.check();
            return __ret;
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

    reset()
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_std_shared_ptr_const_int32_t_reset(this.rawPointer());
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

    assign(ptr)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_ptr = ffi.stackScalar(4, (p) => {ffi.HEAPU32()[(p) >>> 2] = ptr;});
            ffi.C.MR_C_std_shared_ptr_const_int32_t_Assign(this.rawPointer(), __ptr_ptr);
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

    assignNonOwning(ptr)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_ptr = ptr == null ? 0 : ffi.stackScalar(4, (p) => {ffi.HEAPU32()[(p) >>> 2] = ptr;});
            ffi.C.MR_C_std_shared_ptr_const_int32_t_AssignNonOwning(this.rawPointer(), __ptr_ptr);
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

    assignFromMutable(ptr)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_std_shared_ptr_const_int32_t_AssignFromMutable(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(ptr, "ptr"));
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

    AssignAliasing(ownership, ptr)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_ptr = ptr == null ? 0 : ffi.stackScalar(4, (p) => {ffi.HEAPU32()[(p) >>> 2] = ptr;});
            ffi.C.MR_C_std_shared_ptr_const_int32_t_AssignAliasing(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(ownership, "ownership"), __ptr_ptr);
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

    convertTo_MR_C_std_shared_ptr_const_void()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_shared_ptr_const_int32_t_ConvertTo_MR_C_std_shared_ptr_const_void(this.rawPointer());
            ffi.check();
            return new L.MR_C_std_shared_ptr_const_void(ffi.RAW, (__ret >>> 0), true, null);
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

    AssignTo_MR_C_std_shared_ptr_const_void(_target)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_std_shared_ptr_const_int32_t_AssignTo_MR_C_std_shared_ptr_const_void(this.rawPointer(), ffi.ptrNonNull(_target, "_target"));
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
}

