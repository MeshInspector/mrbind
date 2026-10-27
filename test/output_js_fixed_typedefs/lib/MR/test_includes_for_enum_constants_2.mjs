// The wrappers of the C bindings file `MR/test_includes_for_enum_constants_2`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_Destroy(ptr);}

    static __ctor_0()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_DefaultConstruct();
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

    static __ctor_1(_other)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
            return L.MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1))
            return L.MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1.__destroy : null, args[3]);
            return;
        }
        super(L.MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1.__ctor(args), L.MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1(ffi.RAW, (__ret >>> 0), false, __owner);
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

