// The wrappers of the C bindings file `AB_base/ab_base`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::CommonBaseAB`.
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::SeparateA`
 *     `MR::SeparateB`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CommonBaseAB extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CommonBaseAB_Destroy(BigInt(ptr));}

    static __ctor_0(_other)
    {
        const __ret = ffi.C.MR_CommonBaseAB_ConstructFromAnother(ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 1 && (args[0] instanceof L.MR_CommonBaseAB))
            return L.MR_CommonBaseAB.__ctor_0(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CommonBaseAB.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CommonBaseAB.__ctor(args), L.MR_CommonBaseAB.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_CommonBaseAB_AssignFromAnother(BigInt(this.rawPointer()), ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        const __owner = this;
        return new L.MR_CommonBaseAB(ffi.RAW, Number(__ret), false, __owner);
    }
}

export function MR_mark_shared_common_base_ab()
{
    const __ret = ffi.C.MR_mark_shared_common_base_ab();
    ffi.check();
    return new L.MR_C_std_shared_ptr_MR_CommonBaseAB(ffi.RAW, Number(__ret), true, null);
}

