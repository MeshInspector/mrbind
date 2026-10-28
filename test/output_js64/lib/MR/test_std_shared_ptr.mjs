// The wrappers of the C bindings file `MR/test_std_shared_ptr`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Now with a class:
 * Generated from class `MR::StdSharedPtr::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_StdSharedPtr_A extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_StdSharedPtr_A_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_StdSharedPtr_A_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_StdSharedPtr_A_ConstructFromAnother(BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_StdSharedPtr_A.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_StdSharedPtr_A))
            return L.MR_StdSharedPtr_A.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_StdSharedPtr_A.__destroy : null, args[3]);
            return;
        }
        super(L.MR_StdSharedPtr_A.__ctor(args), L.MR_StdSharedPtr_A.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_StdSharedPtr_A_AssignFromAnother(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        const __owner = this;
        return new L.MR_StdSharedPtr_A(ffi.RAW, Number(__ret), false, __owner);
    }
}

export function MR_StdSharedPtr_GetInt()
{
    const __ret = ffi.C.MR_StdSharedPtr_GetInt();
    ffi.check();
    return new L.MR_C_std_shared_ptr_int(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdSharedPtr_SetInt(_1)
{
    ffi.C.MR_StdSharedPtr_SetInt(ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdSharedPtr_SetIntConstRef(_1)
{
    ffi.C.MR_StdSharedPtr_SetIntConstRef(BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdSharedPtr_SetIntDefTrivial(_1)
{
    ffi.C.MR_StdSharedPtr_SetIntDefTrivial((_1 == null ? ffi.PASS_BY_DEFAULT_ARGUMENT : ffi.PASS_BY_COPY), BigInt(ffi.ptr(_1)));
    ffi.check();
}

export function MR_StdSharedPtr_SetIntDef(_1)
{
    ffi.C.MR_StdSharedPtr_SetIntDef((_1 == null ? ffi.PASS_BY_DEFAULT_ARGUMENT : ffi.PASS_BY_COPY), BigInt(ffi.ptr(_1)));
    ffi.check();
}

export function MR_StdSharedPtr_SetIntLvalueRef(_1)
{
    ffi.C.MR_StdSharedPtr_SetIntLvalueRef(BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdSharedPtr_SetIntLvalueConstRef(_1)
{
    ffi.C.MR_StdSharedPtr_SetIntLvalueConstRef(BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdSharedPtr_SetIntRvalueRef(_1)
{
    ffi.C.MR_StdSharedPtr_SetIntRvalueRef(BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdSharedPtr_SetIntRvalueConstRef(_1)
{
    ffi.C.MR_StdSharedPtr_SetIntRvalueConstRef(BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdSharedPtr_GetIntArr()
{
    const __ret = ffi.C.MR_StdSharedPtr_GetIntArr();
    ffi.check();
    return new L.MR_C_std_shared_ptr_int_array(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdSharedPtr_SetIntArr(_1)
{
    ffi.C.MR_StdSharedPtr_SetIntArr(ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdSharedPtr_SetIntArrDefTrivial(_1)
{
    ffi.C.MR_StdSharedPtr_SetIntArrDefTrivial((_1 == null ? ffi.PASS_BY_DEFAULT_ARGUMENT : ffi.PASS_BY_COPY), BigInt(ffi.ptr(_1)));
    ffi.check();
}

export function MR_StdSharedPtr_SetIntArrDef(_1)
{
    ffi.C.MR_StdSharedPtr_SetIntArrDef((_1 == null ? ffi.PASS_BY_DEFAULT_ARGUMENT : ffi.PASS_BY_COPY), BigInt(ffi.ptr(_1)));
    ffi.check();
}

export function MR_StdSharedPtr_GetIntArr42()
{
    const __ret = ffi.C.MR_StdSharedPtr_GetIntArr42();
    ffi.check();
    return new L.MR_C_std_shared_ptr_int_array_42(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdSharedPtr_SetIntArr42(_1)
{
    ffi.C.MR_StdSharedPtr_SetIntArr42(ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdSharedPtr_SetIntArr42DefTrivial(_1)
{
    ffi.C.MR_StdSharedPtr_SetIntArr42DefTrivial((_1 == null ? ffi.PASS_BY_DEFAULT_ARGUMENT : ffi.PASS_BY_COPY), BigInt(ffi.ptr(_1)));
    ffi.check();
}

export function MR_StdSharedPtr_SetIntArr42Def(_1)
{
    ffi.C.MR_StdSharedPtr_SetIntArr42Def((_1 == null ? ffi.PASS_BY_DEFAULT_ARGUMENT : ffi.PASS_BY_COPY), BigInt(ffi.ptr(_1)));
    ffi.check();
}

export function MR_StdSharedPtr_GetClass()
{
    const __ret = ffi.C.MR_StdSharedPtr_GetClass();
    ffi.check();
    return new L.MR_C_std_shared_ptr_MR_StdSharedPtr_A(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdSharedPtr_SetClass(_1)
{
    ffi.C.MR_StdSharedPtr_SetClass(ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdSharedPtr_SetClassConstRef(_1)
{
    ffi.C.MR_StdSharedPtr_SetClassConstRef(BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdSharedPtr_SetClassDefTrivial(_1)
{
    ffi.C.MR_StdSharedPtr_SetClassDefTrivial((_1 == null ? ffi.PASS_BY_DEFAULT_ARGUMENT : ffi.PASS_BY_COPY), BigInt(ffi.ptr(_1)));
    ffi.check();
}

export function MR_StdSharedPtr_SetClassDef(_1)
{
    ffi.C.MR_StdSharedPtr_SetClassDef((_1 == null ? ffi.PASS_BY_DEFAULT_ARGUMENT : ffi.PASS_BY_COPY), BigInt(ffi.ptr(_1)));
    ffi.check();
}

export function MR_StdSharedPtr_SetClassLvalueRef(_1)
{
    ffi.C.MR_StdSharedPtr_SetClassLvalueRef(BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdSharedPtr_SetClassLvalueConstRef(_1)
{
    ffi.C.MR_StdSharedPtr_SetClassLvalueConstRef(BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdSharedPtr_SetClassRvalueRef(_1)
{
    ffi.C.MR_StdSharedPtr_SetClassRvalueRef(BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdSharedPtr_SetClassRvalueConstRef(_1)
{
    ffi.C.MR_StdSharedPtr_SetClassRvalueConstRef(BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdSharedPtr_GetClassArr()
{
    const __ret = ffi.C.MR_StdSharedPtr_GetClassArr();
    ffi.check();
    return new L.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdSharedPtr_SetClassArr(_1)
{
    ffi.C.MR_StdSharedPtr_SetClassArr(ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdSharedPtr_SetClassArrDefTrivial(_1)
{
    ffi.C.MR_StdSharedPtr_SetClassArrDefTrivial((_1 == null ? ffi.PASS_BY_DEFAULT_ARGUMENT : ffi.PASS_BY_COPY), BigInt(ffi.ptr(_1)));
    ffi.check();
}

export function MR_StdSharedPtr_SetClassArrDef(_1)
{
    ffi.C.MR_StdSharedPtr_SetClassArrDef((_1 == null ? ffi.PASS_BY_DEFAULT_ARGUMENT : ffi.PASS_BY_COPY), BigInt(ffi.ptr(_1)));
    ffi.check();
}

export function MR_StdSharedPtr_GetClassArr42()
{
    const __ret = ffi.C.MR_StdSharedPtr_GetClassArr42();
    ffi.check();
    return new L.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdSharedPtr_SetClassArr42(_1)
{
    ffi.C.MR_StdSharedPtr_SetClassArr42(ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdSharedPtr_SetClassArr42DefTrivial(_1)
{
    ffi.C.MR_StdSharedPtr_SetClassArr42DefTrivial((_1 == null ? ffi.PASS_BY_DEFAULT_ARGUMENT : ffi.PASS_BY_COPY), BigInt(ffi.ptr(_1)));
    ffi.check();
}

export function MR_StdSharedPtr_SetClassArr42Def(_1)
{
    ffi.C.MR_StdSharedPtr_SetClassArr42Def((_1 == null ? ffi.PASS_BY_DEFAULT_ARGUMENT : ffi.PASS_BY_COPY), BigInt(ffi.ptr(_1)));
    ffi.check();
}

export function MR_StdSharedPtr_GetConstInt()
{
    const __ret = ffi.C.MR_StdSharedPtr_GetConstInt();
    ffi.check();
    return new L.MR_C_std_shared_ptr_const_int(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdSharedPtr_GetConstIntArr()
{
    const __ret = ffi.C.MR_StdSharedPtr_GetConstIntArr();
    ffi.check();
    return new L.MR_C_std_shared_ptr_const_int_array(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdSharedPtr_GetConstIntArr42()
{
    const __ret = ffi.C.MR_StdSharedPtr_GetConstIntArr42();
    ffi.check();
    return new L.MR_C_std_shared_ptr_const_int_array_42(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdSharedPtr_GetConstClass()
{
    const __ret = ffi.C.MR_StdSharedPtr_GetConstClass();
    ffi.check();
    return new L.MR_C_std_shared_ptr_const_MR_StdSharedPtr_A(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdSharedPtr_GetConstClassArr()
{
    const __ret = ffi.C.MR_StdSharedPtr_GetConstClassArr();
    ffi.check();
    return new L.MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdSharedPtr_GetConstClassArr42()
{
    const __ret = ffi.C.MR_StdSharedPtr_GetConstClassArr42();
    ffi.check();
    return new L.MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42(ffi.RAW, Number(__ret), true, null);
}

