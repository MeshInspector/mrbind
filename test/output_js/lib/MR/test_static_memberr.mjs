// The wrappers of the C bindings file `MR/test_static_memberr`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::StaticFuncs::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_StaticFuncs_A extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_StaticFuncs_A_Destroy(ptr);}

    static get x()
    {
        const __ret = ffi.C.MR_StaticFuncs_A_Get_x();
        ffi.check();
        return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
    }

    static set x(value)
    {
        ffi.C.MR_StaticFuncs_A_Set_x(value);
        ffi.check();
    }

    static __ctor_0()
    {
        const __ret = ffi.C.MR_StaticFuncs_A_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_StaticFuncs_A_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_StaticFuncs_A.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_StaticFuncs_A))
            return L.MR_StaticFuncs_A.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_StaticFuncs_A.__destroy : null, args[3]);
            return;
        }
        super(L.MR_StaticFuncs_A.__ctor(args), L.MR_StaticFuncs_A.__destroy, null);
    }

    static blah()
    {
        ffi.C.MR_StaticFuncs_A_blah();
        ffi.check();
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_StaticFuncs_A_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_StaticFuncs_A(ffi.RAW, (__ret >>> 0), false, __owner);
    }
}

