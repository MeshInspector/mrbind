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
        const __sp = ffi.stackSave();
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
            const __ret = ffi.C.MR_StdUniquePtr_A_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        const __sp = ffi.stackSave();
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
        finally
        {
            ffi.stackRestore(__sp);
        }
    }
}

export function MR_StdUniquePtr_GetInt()
{
    const __sp = ffi.stackSave();
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
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_StdUniquePtr_SetInt(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_StdUniquePtr_SetInt(_1);
        ffi.check();
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

export function MR_StdUniquePtr_SetIntConstRef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_StdUniquePtr_SetIntConstRef(ffi.ptrNonNull(_1, "_1"));
        ffi.check();
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

export function MR_StdUniquePtr_SetIntDefTrivial(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_StdUniquePtr_SetIntDefTrivial(_1);
        ffi.check();
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

export function MR_StdUniquePtr_SetIntDef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_StdUniquePtr_SetIntDef(_1);
        ffi.check();
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

export function MR_StdUniquePtr_SetIntLvalueRef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __a0 = ffi.nonNull(_1, "_1").release();
        ffi.C.MR_StdUniquePtr_SetIntLvalueRef(__a0);
        ffi.check();
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

export function MR_StdUniquePtr_SetIntLvalueConstRef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_StdUniquePtr_SetIntLvalueConstRef(ffi.ptrNonNull(_1, "_1"));
        ffi.check();
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

export function MR_StdUniquePtr_SetIntRvalueRef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr__1 = ffi.stackScalar(4, (p) => {ffi.HEAPU32()[(p) >>> 2] = _1;});
        ffi.C.MR_StdUniquePtr_SetIntRvalueRef(__ptr__1);
        ffi.check();
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

export function MR_StdUniquePtr_SetIntRvalueConstRef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr__1 = ffi.stackScalar(4, (p) => {ffi.HEAPU32()[(p) >>> 2] = _1;});
        ffi.C.MR_StdUniquePtr_SetIntRvalueConstRef(__ptr__1);
        ffi.check();
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

export function MR_StdUniquePtr_GetIntArr()
{
    const __sp = ffi.stackSave();
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
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_StdUniquePtr_SetIntArr(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_StdUniquePtr_SetIntArr(_1);
        ffi.check();
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

export function MR_StdUniquePtr_SetIntArrDefTrivial(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_StdUniquePtr_SetIntArrDefTrivial(_1);
        ffi.check();
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

export function MR_StdUniquePtr_SetIntArrDef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_StdUniquePtr_SetIntArrDef(_1);
        ffi.check();
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

export function MR_StdUniquePtr_GetClass()
{
    const __sp = ffi.stackSave();
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
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_StdUniquePtr_SetClass(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __a0 = ffi.nonNull(_1, "_1").release();
        ffi.C.MR_StdUniquePtr_SetClass(__a0);
        ffi.check();
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

export function MR_StdUniquePtr_SetClassConstRef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_StdUniquePtr_SetClassConstRef(ffi.ptrNonNull(_1, "_1"));
        ffi.check();
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

export function MR_StdUniquePtr_SetClassDefTrivial(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __a0 = ffi.nonNull(_1, "_1").release();
        ffi.C.MR_StdUniquePtr_SetClassDefTrivial(__a0);
        ffi.check();
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

export function MR_StdUniquePtr_SetClassDef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_StdUniquePtr_SetClassDef(_1);
        ffi.check();
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

export function MR_StdUniquePtr_SetClassLvalueRef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __a0 = ffi.nonNull(_1, "_1").release();
        ffi.C.MR_StdUniquePtr_SetClassLvalueRef(__a0);
        ffi.check();
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

export function MR_StdUniquePtr_SetClassLvalueConstRef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_StdUniquePtr_SetClassLvalueConstRef(ffi.ptrNonNull(_1, "_1"));
        ffi.check();
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

export function MR_StdUniquePtr_SetClassRvalueRef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __a0 = ffi.nonNull(_1, "_1").release();
        ffi.C.MR_StdUniquePtr_SetClassRvalueRef(__a0);
        ffi.check();
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

export function MR_StdUniquePtr_SetClassRvalueConstRef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __a0 = ffi.nonNull(_1, "_1").release();
        ffi.C.MR_StdUniquePtr_SetClassRvalueConstRef(__a0);
        ffi.check();
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

export function MR_StdUniquePtr_GetClassArr()
{
    const __sp = ffi.stackSave();
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
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_StdUniquePtr_SetClassArr(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __a0 = ffi.nonNull(_1, "_1").release();
        ffi.C.MR_StdUniquePtr_SetClassArr(__a0);
        ffi.check();
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

export function MR_StdUniquePtr_SetClassArrDefTrivial(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __a0 = ffi.nonNull(_1, "_1").release();
        ffi.C.MR_StdUniquePtr_SetClassArrDefTrivial(__a0);
        ffi.check();
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

export function MR_StdUniquePtr_SetClassArrDef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_StdUniquePtr_SetClassArrDef(_1);
        ffi.check();
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

export function MR_StdUniquePtr_GetConstInt()
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_StdUniquePtr_GetConstInt();
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
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

export function MR_StdUniquePtr_GetConstIntArr()
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_StdUniquePtr_GetConstIntArr();
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
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

export function MR_StdUniquePtr_GetConstClass()
{
    const __sp = ffi.stackSave();
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
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_StdUniquePtr_GetConstClassArr()
{
    const __sp = ffi.stackSave();
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
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_StdUniquePtr_GetFloat()
{
    const __sp = ffi.stackSave();
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
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_StdUniquePtr_SetFloat(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_StdUniquePtr_SetFloat(_1);
        ffi.check();
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

export function MR_StdUniquePtr_SetFloatDefTrivial(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_StdUniquePtr_SetFloatDefTrivial(_1);
        ffi.check();
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

