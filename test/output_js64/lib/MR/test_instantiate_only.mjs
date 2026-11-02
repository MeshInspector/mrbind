// The wrappers of the C bindings file `MR/test_instantiate_only`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::InstantiateOnly::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_InstantiateOnly_A extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_InstantiateOnly_A_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_InstantiateOnly_A_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_InstantiateOnly_A_ConstructFromAnother(BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_InstantiateOnly_A.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_InstantiateOnly_A))
            return L.MR_InstantiateOnly_A.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_InstantiateOnly_A.__destroy : null, args[3]);
            return;
        }
        super(L.MR_InstantiateOnly_A.__ctor(args), L.MR_InstantiateOnly_A.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_InstantiateOnly_A_AssignFromAnother(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        const __owner = this;
        return new L.MR_InstantiateOnly_A(ffi.RAW, Number(__ret), false, __owner);
    }
}

