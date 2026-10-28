// The wrappers of the C bindings file `MR/test_member_vars`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::MemberVars::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_MemberVars_A extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_MemberVars_A_Destroy(BigInt(ptr));}

    static get z()
    {
        const __ret = ffi.C.MR_MemberVars_A_Get_z();
        ffi.check();
        return ffi.HEAP32()[(Number(__ret)) / 4];
    }

    static set z(value)
    {
        ffi.C.MR_MemberVars_A_Set_z(value);
        ffi.check();
    }

    static get w()
    {
        const __ret = ffi.C.MR_MemberVars_A_Get_w();
        ffi.check();
        return ffi.HEAP32()[(Number(__ret)) / 4];
    }

    get x()
    {
        const __ret = ffi.C.MR_MemberVars_A_Get_x(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.HEAP32()[(Number(__ret)) / 4];
    }

    set x(value)
    {
        ffi.C.MR_MemberVars_A_Set_x(BigInt(this.rawPointer()), value);
        ffi.check();
    }

    get y()
    {
        const __ret = ffi.C.MR_MemberVars_A_Get_y(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.HEAP32()[(Number(__ret)) / 4];
    }

    get ref()
    {
        const __ret = ffi.C.MR_MemberVars_A_Get_ref(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    get arr()
    {
        const __ret = ffi.C.MR_MemberVars_A_Get_arr(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.HEAP32()[(Number(__ret)) / 4];
    }

    static __ctor_0(_other)
    {
        const __ret = ffi.C.MR_MemberVars_A_ConstructFromAnother(BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 1 && (args[0] instanceof L.MR_MemberVars_A))
            return L.MR_MemberVars_A.__ctor_0(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_MemberVars_A.__destroy : null, args[3]);
            return;
        }
        super(L.MR_MemberVars_A.__ctor(args), L.MR_MemberVars_A.__destroy, null);
    }

    static arrSize()
    {
        const __ret = ffi.C.MR_MemberVars_A_GetSize_arr();
        ffi.check();
        return Number(__ret);
    }
}

