// The wrappers of the C bindings file `std_optional_MR_StdOptional_E`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores either a single `MR::StdOptional::E` or nothing.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_optional_MR_StdOptional_E extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_optional_MR_StdOptional_E_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_optional_MR_StdOptional_E_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_optional_MR_StdOptional_E_ConstructFromAnother(BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor_2(other)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_other = ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = other;});
            const __ret = ffi.C.MR_C_std_optional_MR_StdOptional_E_ConstructFrom(BigInt(__ptr_other));
            ffi.check();
            return Number(__ret);
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
            return L.MR_C_std_optional_MR_StdOptional_E.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_optional_MR_StdOptional_E))
            return L.MR_C_std_optional_MR_StdOptional_E.__ctor_1(args[0]);
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_C_std_optional_MR_StdOptional_E.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_optional_MR_StdOptional_E.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_optional_MR_StdOptional_E.__ctor(args), L.MR_C_std_optional_MR_StdOptional_E.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_optional_MR_StdOptional_E_AssignFromAnother(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
    }

    assignFrom(other)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_other = ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = other;});
            ffi.C.MR_C_std_optional_MR_StdOptional_E_AssignFrom(BigInt(this.rawPointer()), BigInt(__ptr_other));
            ffi.check();
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    has_value()
    {
        const __ret = ffi.C.MR_C_std_optional_MR_StdOptional_E_has_value(BigInt(this.rawPointer()));
        ffi.check();
        return (__ret !== 0);
    }

    value()
    {
        const __ret = ffi.C.MR_C_std_optional_MR_StdOptional_E_value(BigInt(this.rawPointer()));
        ffi.check();
        return (Number(__ret) === 0 ? null : ffi.M.HEAP32[(Number(__ret)) >>> 2]);
    }

    value_mut()
    {
        const __ret = ffi.C.MR_C_std_optional_MR_StdOptional_E_value_mut(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }
}

