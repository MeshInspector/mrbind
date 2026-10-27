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
    static __destroy(ptr) {ffi.C.MR_StdUniquePtr_A_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_StdUniquePtr_A_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_StdUniquePtr_A_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        try
        {
            const __ret = ffi.C.MR_StdUniquePtr_A_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_StdUniquePtr_A(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

export function MR_StdUniquePtr_GetInt()
{
    try
    {
        const __ret = ffi.C.MR_StdUniquePtr_GetInt();
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_SetInt(_1)
{
    try
    {
        ffi.C.MR_StdUniquePtr_SetInt(_1);
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_SetIntConstRef(_1)
{
    try
    {
        ffi.C.MR_StdUniquePtr_SetIntConstRef(ffi.ptrNonNull(_1, "_1"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_SetIntDefTrivial(_1)
{
    try
    {
        ffi.C.MR_StdUniquePtr_SetIntDefTrivial(_1);
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_SetIntDef(_1)
{
    try
    {
        ffi.C.MR_StdUniquePtr_SetIntDef(_1);
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_SetIntLvalueRef(_1)
{
    try
    {
        ffi.C.MR_StdUniquePtr_SetIntLvalueRef(ffi.nonNull(_1, "_1").release());
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_SetIntLvalueConstRef(_1)
{
    try
    {
        ffi.C.MR_StdUniquePtr_SetIntLvalueConstRef(ffi.ptrNonNull(_1, "_1"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_SetIntRvalueRef(_1)
{
    try
    {
        ffi.C.MR_StdUniquePtr_SetIntRvalueRef(_1);
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_SetIntRvalueConstRef(_1)
{
    try
    {
        ffi.C.MR_StdUniquePtr_SetIntRvalueConstRef(_1);
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_GetIntArr()
{
    try
    {
        const __ret = ffi.C.MR_StdUniquePtr_GetIntArr();
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_SetIntArr(_1)
{
    try
    {
        ffi.C.MR_StdUniquePtr_SetIntArr(_1);
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_SetIntArrDefTrivial(_1)
{
    try
    {
        ffi.C.MR_StdUniquePtr_SetIntArrDefTrivial(_1);
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_SetIntArrDef(_1)
{
    try
    {
        ffi.C.MR_StdUniquePtr_SetIntArrDef(_1);
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_GetClass()
{
    try
    {
        const __ret = ffi.C.MR_StdUniquePtr_GetClass();
        ffi.check();
        return new L.MR_StdUniquePtr_A(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_SetClass(_1)
{
    try
    {
        ffi.C.MR_StdUniquePtr_SetClass(ffi.nonNull(_1, "_1").release());
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_SetClassConstRef(_1)
{
    try
    {
        ffi.C.MR_StdUniquePtr_SetClassConstRef(ffi.ptrNonNull(_1, "_1"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_SetClassDefTrivial(_1)
{
    try
    {
        ffi.C.MR_StdUniquePtr_SetClassDefTrivial(ffi.nonNull(_1, "_1").release());
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_SetClassDef(_1)
{
    try
    {
        ffi.C.MR_StdUniquePtr_SetClassDef(_1);
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_SetClassLvalueRef(_1)
{
    try
    {
        ffi.C.MR_StdUniquePtr_SetClassLvalueRef(ffi.nonNull(_1, "_1").release());
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_SetClassLvalueConstRef(_1)
{
    try
    {
        ffi.C.MR_StdUniquePtr_SetClassLvalueConstRef(ffi.ptrNonNull(_1, "_1"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_SetClassRvalueRef(_1)
{
    try
    {
        ffi.C.MR_StdUniquePtr_SetClassRvalueRef(ffi.nonNull(_1, "_1").release());
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_SetClassRvalueConstRef(_1)
{
    try
    {
        ffi.C.MR_StdUniquePtr_SetClassRvalueConstRef(ffi.nonNull(_1, "_1").release());
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_GetClassArr()
{
    try
    {
        const __ret = ffi.C.MR_StdUniquePtr_GetClassArr();
        ffi.check();
        return new L.MR_StdUniquePtr_A(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_SetClassArr(_1)
{
    try
    {
        ffi.C.MR_StdUniquePtr_SetClassArr(ffi.nonNull(_1, "_1").release());
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_SetClassArrDefTrivial(_1)
{
    try
    {
        ffi.C.MR_StdUniquePtr_SetClassArrDefTrivial(ffi.nonNull(_1, "_1").release());
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_SetClassArrDef(_1)
{
    try
    {
        ffi.C.MR_StdUniquePtr_SetClassArrDef(_1);
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_GetConstInt()
{
    try
    {
        const __ret = ffi.C.MR_StdUniquePtr_GetConstInt();
        ffi.check();
        return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_GetConstIntArr()
{
    try
    {
        const __ret = ffi.C.MR_StdUniquePtr_GetConstIntArr();
        ffi.check();
        return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_GetConstClass()
{
    try
    {
        const __ret = ffi.C.MR_StdUniquePtr_GetConstClass();
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_GetConstClassArr()
{
    try
    {
        const __ret = ffi.C.MR_StdUniquePtr_GetConstClassArr();
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_GetFloat()
{
    try
    {
        const __ret = ffi.C.MR_StdUniquePtr_GetFloat();
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_SetFloat(_1)
{
    try
    {
        ffi.C.MR_StdUniquePtr_SetFloat(_1);
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_StdUniquePtr_SetFloatDefTrivial(_1)
{
    try
    {
        ffi.C.MR_StdUniquePtr_SetFloatDefTrivial(_1);
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

