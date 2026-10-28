// The wrappers of the C bindings file `std_shared_ptr_const_int_array`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Wraps a pointer to a shared reference-counted heap-allocated array of type `const int`, of an unspecified size.
 * Doesn't store the size, it has to be obtained separately.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_shared_ptr_const_int_array extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_shared_ptr_const_int_array_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_const_int_array_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_const_int_array_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_2(size)
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_const_int_array_ConstructFromSize(size);
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_4(ptr)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_ptr = ptr == null ? 0 : ffi.stackScalar(4, (p) => {ffi.HEAPU32()[(p) >>> 2] = ptr;});
            const __ret = ffi.C.MR_C_std_shared_ptr_const_int_array_ConstructNonOwning(__ptr_ptr);
            ffi.check();
            return (__ret >>> 0);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    static __ctor_5(ptr)
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_const_int_array_ConstructFromMutable(ffi.PASS_BY_COPY, ffi.ptrNonNull(ptr, "ptr"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_6(ownership, ptr)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_ptr = ptr == null ? 0 : ffi.stackScalar(4, (p) => {ffi.HEAPU32()[(p) >>> 2] = ptr;});
            const __ret = ffi.C.MR_C_std_shared_ptr_const_int_array_ConstructAliasing(ffi.PASS_BY_COPY, ffi.ptrNonNull(ownership, "ownership"), __ptr_ptr);
            ffi.check();
            return (__ret >>> 0);
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
            return L.MR_C_std_shared_ptr_const_int_array.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_shared_ptr_const_int_array))
            return L.MR_C_std_shared_ptr_const_int_array.__ctor_1(args[0]);
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_C_std_shared_ptr_const_int_array.__ctor_2(args[0]);
        if (__n === 1 && (__n <= 0 || (args[0] == null || typeof args[0] === "number")))
            return L.MR_C_std_shared_ptr_const_int_array.__ctor_4(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_C_std_shared_ptr_int_array))
            return L.MR_C_std_shared_ptr_const_int_array.__ctor_5(args[0]);
        if (__n === 2 && (args[0] instanceof L.MR_C_std_shared_ptr_const_void) && (__n <= 1 || (args[1] == null || typeof args[1] === "number")))
            return L.MR_C_std_shared_ptr_const_int_array.__ctor_6(args[0], args[1]);
        if (__n >= 0 && __n < 1 && (__n <= 0 || (args[0] == null || typeof args[0] === "number")))
            return L.MR_C_std_shared_ptr_const_int_array.__ctor_4(args[0]);
        if (__n >= 1 && __n < 2 && (args[0] instanceof L.MR_C_std_shared_ptr_const_void) && (__n <= 1 || (args[1] == null || typeof args[1] === "number")))
            return L.MR_C_std_shared_ptr_const_int_array.__ctor_6(args[0], args[1]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    static construct(ptr)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_ptr = ffi.stackScalar(4, (p) => {ffi.HEAPU32()[(p) >>> 2] = ptr;});
            const __ret = ffi.C.MR_C_std_shared_ptr_const_int_array_Construct(__ptr_ptr);
            ffi.check();
            return new L.MR_C_std_shared_ptr_const_int_array(ffi.RAW, (__ret >>> 0), true, null);
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
            super(args[1], args[2] ? L.MR_C_std_shared_ptr_const_int_array.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_shared_ptr_const_int_array.__ctor(args), L.MR_C_std_shared_ptr_const_int_array.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_shared_ptr_const_int_array_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
        ffi.check();
    }

    get()
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_const_int_array_get(this.rawPointer());
        ffi.check();
        return ((__ret >>> 0) === 0 ? null : ffi.HEAP32()[((__ret >>> 0)) >>> 2]);
    }

    has_value()
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_const_int_array_has_value(this.rawPointer());
        ffi.check();
        return (__ret !== 0);
    }

    at(i)
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_const_int_array_at(this.rawPointer(), i);
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    use_count()
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_const_int_array_use_count(this.rawPointer());
        ffi.check();
        return __ret;
    }

    reset()
    {
        ffi.C.MR_C_std_shared_ptr_const_int_array_reset(this.rawPointer());
        ffi.check();
    }

    assign(ptr)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_ptr = ffi.stackScalar(4, (p) => {ffi.HEAPU32()[(p) >>> 2] = ptr;});
            ffi.C.MR_C_std_shared_ptr_const_int_array_Assign(this.rawPointer(), __ptr_ptr);
            ffi.check();
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
            ffi.C.MR_C_std_shared_ptr_const_int_array_AssignNonOwning(this.rawPointer(), __ptr_ptr);
            ffi.check();
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    assignFromMutable(ptr)
    {
        ffi.C.MR_C_std_shared_ptr_const_int_array_AssignFromMutable(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(ptr, "ptr"));
        ffi.check();
    }

    AssignAliasing(ownership, ptr)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_ptr = ptr == null ? 0 : ffi.stackScalar(4, (p) => {ffi.HEAPU32()[(p) >>> 2] = ptr;});
            ffi.C.MR_C_std_shared_ptr_const_int_array_AssignAliasing(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(ownership, "ownership"), __ptr_ptr);
            ffi.check();
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    convertTo_MR_C_std_shared_ptr_const_void()
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_const_int_array_ConvertTo_MR_C_std_shared_ptr_const_void(this.rawPointer());
        ffi.check();
        return new L.MR_C_std_shared_ptr_const_void(ffi.RAW, (__ret >>> 0), true, null);
    }

    AssignTo_MR_C_std_shared_ptr_const_void(_target)
    {
        ffi.C.MR_C_std_shared_ptr_const_int_array_AssignTo_MR_C_std_shared_ptr_const_void(this.rawPointer(), ffi.ptrNonNull(_target, "_target"));
        ffi.check();
    }
}

