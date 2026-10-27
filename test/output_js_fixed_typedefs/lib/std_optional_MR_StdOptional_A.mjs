// The wrappers of the C bindings file `std_optional_MR_StdOptional_A`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores either a single `MR::StdOptional::A` or nothing.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_optional_MR_StdOptional_A extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_optional_MR_StdOptional_A_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_optional_MR_StdOptional_A_DefaultConstruct();
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
            const __ret = ffi.C.MR_C_std_optional_MR_StdOptional_A_ConstructFromAnother(ffi.ptrNonNull(other, "other"));
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
        try
        {
            const __ret = ffi.C.MR_C_std_optional_MR_StdOptional_A_ConstructFrom(ffi.ptrNonNull(other, "other"));
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
            return L.MR_C_std_optional_MR_StdOptional_A.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_optional_MR_StdOptional_A))
            return L.MR_C_std_optional_MR_StdOptional_A.__ctor_1(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_StdOptional_A))
            return L.MR_C_std_optional_MR_StdOptional_A.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_optional_MR_StdOptional_A.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_optional_MR_StdOptional_A.__ctor(args), L.MR_C_std_optional_MR_StdOptional_A.__destroy, null);
    }

    assignFromAnother(other)
    {
        try
        {
            ffi.C.MR_C_std_optional_MR_StdOptional_A_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(other, "other"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assignFrom(other)
    {
        try
        {
            ffi.C.MR_C_std_optional_MR_StdOptional_A_AssignFrom(this.rawPointer(), ffi.ptrNonNull(other, "other"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    has_value()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_optional_MR_StdOptional_A_has_value(this.rawPointer());
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
            const __ret = ffi.C.MR_C_std_optional_MR_StdOptional_A_value(this.rawPointer());
            ffi.check();
            const __owner = this;
            return ((__ret >>> 0) === 0 ? null : new L.MR_StdOptional_A(ffi.RAW, (__ret >>> 0), false, __owner));
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
            const __ret = ffi.C.MR_C_std_optional_MR_StdOptional_A_value_mut(this.rawPointer());
            ffi.check();
            const __owner = this;
            return ((__ret >>> 0) === 0 ? null : new L.MR_StdOptional_A(ffi.RAW, (__ret >>> 0), false, __owner));
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

