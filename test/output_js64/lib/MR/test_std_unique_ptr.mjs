// The wrappers of the C bindings file `MR/test_std_unique_ptr`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Now with a class:
 * Generated from class `MR::StdUniquePtr::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_StdUniquePtr_A extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_StdUniquePtr_A_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_StdUniquePtr_A_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_StdUniquePtr_A_ConstructFromAnother(BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_StdUniquePtr_A.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_StdUniquePtr_A))
            return L.MR_StdUniquePtr_A.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_StdUniquePtr_A.__destroy : null, args[3]);
            return;
        }
        super(L.MR_StdUniquePtr_A.__ctor(args), L.MR_StdUniquePtr_A.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_StdUniquePtr_A_AssignFromAnother(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        const __owner = this;
        return new L.MR_StdUniquePtr_A(ffi.RAW, Number(__ret), false, __owner);
    }
}

export function MR_StdUniquePtr_GetInt()
{
    const __ret = ffi.C.MR_StdUniquePtr_GetInt();
    ffi.check();
    return Number(__ret);
}

export function MR_StdUniquePtr_SetInt(_1)
{
    ffi.C.MR_StdUniquePtr_SetInt(BigInt(_1));
    ffi.check();
}

export function MR_StdUniquePtr_SetIntConstRef(_1)
{
    ffi.C.MR_StdUniquePtr_SetIntConstRef(BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdUniquePtr_SetIntDefTrivial(_1)
{
    ffi.C.MR_StdUniquePtr_SetIntDefTrivial(BigInt(_1));
    ffi.check();
}

export function MR_StdUniquePtr_SetIntDef(_1)
{
    ffi.C.MR_StdUniquePtr_SetIntDef(BigInt(_1));
    ffi.check();
}

export function MR_StdUniquePtr_SetIntLvalueRef(_1)
{
    ffi.C.MR_StdUniquePtr_SetIntLvalueRef(BigInt(ffi.nonNull(_1, "_1").release()));
    ffi.check();
}

export function MR_StdUniquePtr_SetIntLvalueConstRef(_1)
{
    ffi.C.MR_StdUniquePtr_SetIntLvalueConstRef(BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdUniquePtr_SetIntRvalueRef(_1)
{
    ffi.C.MR_StdUniquePtr_SetIntRvalueRef(BigInt(_1));
    ffi.check();
}

export function MR_StdUniquePtr_SetIntRvalueConstRef(_1)
{
    ffi.C.MR_StdUniquePtr_SetIntRvalueConstRef(BigInt(_1));
    ffi.check();
}

export function MR_StdUniquePtr_GetIntArr()
{
    const __ret = ffi.C.MR_StdUniquePtr_GetIntArr();
    ffi.check();
    return Number(__ret);
}

export function MR_StdUniquePtr_SetIntArr(_1)
{
    ffi.C.MR_StdUniquePtr_SetIntArr(BigInt(_1));
    ffi.check();
}

export function MR_StdUniquePtr_SetIntArrDefTrivial(_1)
{
    ffi.C.MR_StdUniquePtr_SetIntArrDefTrivial(BigInt(_1));
    ffi.check();
}

export function MR_StdUniquePtr_SetIntArrDef(_1)
{
    ffi.C.MR_StdUniquePtr_SetIntArrDef(BigInt(_1));
    ffi.check();
}

export function MR_StdUniquePtr_GetClass()
{
    const __ret = ffi.C.MR_StdUniquePtr_GetClass();
    ffi.check();
    return new L.MR_StdUniquePtr_A(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdUniquePtr_SetClass(_1)
{
    ffi.C.MR_StdUniquePtr_SetClass(BigInt(ffi.nonNull(_1, "_1").release()));
    ffi.check();
}

export function MR_StdUniquePtr_SetClassConstRef(_1)
{
    ffi.C.MR_StdUniquePtr_SetClassConstRef(BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdUniquePtr_SetClassDefTrivial(_1)
{
    ffi.C.MR_StdUniquePtr_SetClassDefTrivial(BigInt(ffi.nonNull(_1, "_1").release()));
    ffi.check();
}

export function MR_StdUniquePtr_SetClassDef(_1)
{
    ffi.C.MR_StdUniquePtr_SetClassDef(BigInt(_1));
    ffi.check();
}

export function MR_StdUniquePtr_SetClassLvalueRef(_1)
{
    ffi.C.MR_StdUniquePtr_SetClassLvalueRef(BigInt(ffi.nonNull(_1, "_1").release()));
    ffi.check();
}

export function MR_StdUniquePtr_SetClassLvalueConstRef(_1)
{
    ffi.C.MR_StdUniquePtr_SetClassLvalueConstRef(BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdUniquePtr_SetClassRvalueRef(_1)
{
    ffi.C.MR_StdUniquePtr_SetClassRvalueRef(BigInt(ffi.nonNull(_1, "_1").release()));
    ffi.check();
}

export function MR_StdUniquePtr_SetClassRvalueConstRef(_1)
{
    ffi.C.MR_StdUniquePtr_SetClassRvalueConstRef(BigInt(ffi.nonNull(_1, "_1").release()));
    ffi.check();
}

export function MR_StdUniquePtr_GetClassArr()
{
    const __ret = ffi.C.MR_StdUniquePtr_GetClassArr();
    ffi.check();
    return new L.MR_StdUniquePtr_A(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdUniquePtr_SetClassArr(_1)
{
    ffi.C.MR_StdUniquePtr_SetClassArr(BigInt(ffi.nonNull(_1, "_1").release()));
    ffi.check();
}

export function MR_StdUniquePtr_SetClassArrDefTrivial(_1)
{
    ffi.C.MR_StdUniquePtr_SetClassArrDefTrivial(BigInt(ffi.nonNull(_1, "_1").release()));
    ffi.check();
}

export function MR_StdUniquePtr_SetClassArrDef(_1)
{
    ffi.C.MR_StdUniquePtr_SetClassArrDef(BigInt(_1));
    ffi.check();
}

export function MR_StdUniquePtr_GetConstInt()
{
    const __ret = ffi.C.MR_StdUniquePtr_GetConstInt();
    ffi.check();
    return ffi.M.HEAP32[(Number(__ret)) >>> 2];
}

export function MR_StdUniquePtr_GetConstIntArr()
{
    const __ret = ffi.C.MR_StdUniquePtr_GetConstIntArr();
    ffi.check();
    return ffi.M.HEAP32[(Number(__ret)) >>> 2];
}

export function MR_StdUniquePtr_GetConstClass()
{
    const __ret = ffi.C.MR_StdUniquePtr_GetConstClass();
    ffi.check();
    return Number(__ret);
}

export function MR_StdUniquePtr_GetConstClassArr()
{
    const __ret = ffi.C.MR_StdUniquePtr_GetConstClassArr();
    ffi.check();
    return Number(__ret);
}

export function MR_StdUniquePtr_GetFloat()
{
    const __ret = ffi.C.MR_StdUniquePtr_GetFloat();
    ffi.check();
    return Number(__ret);
}

export function MR_StdUniquePtr_SetFloat(_1)
{
    ffi.C.MR_StdUniquePtr_SetFloat(BigInt(_1));
    ffi.check();
}

export function MR_StdUniquePtr_SetFloatDefTrivial(_1)
{
    ffi.C.MR_StdUniquePtr_SetFloatDefTrivial(BigInt(_1));
    ffi.check();
}

