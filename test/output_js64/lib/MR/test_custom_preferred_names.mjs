// The wrappers of the C bindings file `MR/test_custom_preferred_names`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::CustomPrefNames::Af`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CustomPrefNames_Af extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CustomPrefNames_Af_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_CustomPrefNames_Af_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_CustomPrefNames_Af_ConstructFromAnother(BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_CustomPrefNames_Af.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CustomPrefNames_Af))
            return L.MR_CustomPrefNames_Af.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CustomPrefNames_Af.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CustomPrefNames_Af.__ctor(args), L.MR_CustomPrefNames_Af.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_CustomPrefNames_Af_AssignFromAnother(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        const __owner = this;
        return new L.MR_CustomPrefNames_Af(ffi.RAW, Number(__ret), false, __owner);
    }
}

/**
 * Generated from class `MR::CustomPrefNames::Ai`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CustomPrefNames_Ai extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CustomPrefNames_Ai_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_CustomPrefNames_Ai_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_CustomPrefNames_Ai_ConstructFromAnother(BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_CustomPrefNames_Ai.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CustomPrefNames_Ai))
            return L.MR_CustomPrefNames_Ai.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CustomPrefNames_Ai.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CustomPrefNames_Ai.__ctor(args), L.MR_CustomPrefNames_Ai.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_CustomPrefNames_Ai_AssignFromAnother(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        const __owner = this;
        return new L.MR_CustomPrefNames_Ai(ffi.RAW, Number(__ret), false, __owner);
    }
}

export function MR_CustomPrefNames_blah()
{
    ffi.C.MR_CustomPrefNames_blah();
    ffi.check();
}

