// The wrappers of the C bindings file `std_filesystem_path`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores a filesystem path.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_filesystem_path extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_filesystem_path_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_filesystem_path_DefaultConstruct();
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
            const __ret = ffi.C.MR_C_std_filesystem_path_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
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
            const __str_other = ffi.utf8(ffi.nonNullString(other, "other"));
            const __end_other = ffi.utf8End();
            const __ret = ffi.C.MR_C_std_filesystem_path_ConstructFrom(__str_other, __end_other);
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
            return L.MR_C_std_filesystem_path.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_filesystem_path))
            return L.MR_C_std_filesystem_path.__ctor_1(args[0]);
        if (__n === 1 && typeof args[0] === "string")
            return L.MR_C_std_filesystem_path.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_filesystem_path.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_filesystem_path.__ctor(args), L.MR_C_std_filesystem_path.__destroy, null);
    }

    assignFromAnother(other)
    {
        try
        {
            ffi.C.MR_C_std_filesystem_path_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
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
            const __str_other = ffi.utf8(ffi.nonNullString(other, "other"));
            const __end_other = ffi.utf8End();
            ffi.C.MR_C_std_filesystem_path_AssignFrom(this.rawPointer(), __str_other, __end_other);
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

    string()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_filesystem_path_string(this.rawPointer());
            ffi.check();
            return ffi.takeString((__ret >>> 0));
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

