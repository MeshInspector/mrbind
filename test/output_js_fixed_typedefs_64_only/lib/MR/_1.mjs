// The wrappers of the C bindings file `MR/1`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_A extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_A_Destroy(ptr);}

    get x()
    {
        try
        {
            const __ret = ffi.C.MR_A_Get_x(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set x(value)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __str_value = ffi.utf8(ffi.nonNullString(value, "value"));
            const __end_value = ffi.utf8End();
            ffi.C.MR_A_Set_x(this.rawPointer(), __str_value, __end_value);
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

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_A_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_A_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
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
            return L.MR_A.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_A))
            return L.MR_A.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_A.__destroy : null, args[3]);
            return;
        }
        super(L.MR_A.__ctor(args), L.MR_A.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_A_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_A(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

export function MR_foo()
{
    try
    {
        const __ret = ffi.C.MR_foo();
        ffi.check();
        return new L.MR_C_std_vector_MR_A(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_bar(_1)
{
    try
    {
        ffi.C.MR_bar(ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

