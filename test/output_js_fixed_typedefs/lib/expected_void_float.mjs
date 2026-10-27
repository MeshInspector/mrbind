// The wrappers of the C bindings file `expected_void_float`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores either nothing (which represents success) or a `float` that represents an error.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_expected_void_float extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_expected_void_float_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_C_expected_void_float_DefaultConstruct();
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
            const __ret = ffi.C.MR_C_expected_void_float_ConstructFromAnother(ffi.ptrNonNull(other, "other"));
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
            return L.MR_C_expected_void_float.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_expected_void_float))
            return L.MR_C_expected_void_float.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_expected_void_float.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_expected_void_float.__ctor(args), L.MR_C_expected_void_float.__destroy, null);
    }

    assignFromAnother(other)
    {
        try
        {
            ffi.C.MR_C_expected_void_float_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(other, "other"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    success()
    {
        try
        {
            const __ret = ffi.C.MR_C_expected_void_float_success(this.rawPointer());
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
            const __ret = ffi.C.MR_C_expected_void_float_value(this.rawPointer());
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    error()
    {
        try
        {
            const __ret = ffi.C.MR_C_expected_void_float_error(this.rawPointer());
            ffi.check();
            return ((__ret >>> 0) === 0 ? null : ffi.M.HEAPF32[((__ret >>> 0)) >>> 2]);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    error_mut()
    {
        try
        {
            const __ret = ffi.C.MR_C_expected_void_float_error_mut(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    valueOrThrow()
    {
        const __owner = this;
        if (!(ffi.cppCall(() => ffi.C.MR_C_expected_void_float_success(this.rawPointer())) !== 0))
        {
            const __ret = ffi.cppCall(() => ffi.C.MR_C_expected_void_float_error(this.rawPointer()));
            ffi.check();
            throw new ffi.UnexpectedResultException(String(ffi.M.HEAPF32[((__ret >>> 0)) >>> 2]));
        }
    }
}

