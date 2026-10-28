// The wrappers of the C bindings file `MR/test_simple_types`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export const MR_TestSimpleTypes_ClassTemplate_uint64_t_Enum = Object.freeze({
});

export const MR_TestSimpleTypes_E = Object.freeze({
    e1: 0,
    [0]: "e1",
});

export const MR_TestSimpleTypes_E2 = Object.freeze({
    e1: 0,
    [0]: "e1",
});

export const MR_TestSimpleTypes_E3 = Object.freeze({
});

export const MR_TestSimpleTypes_E4 = Object.freeze({
});

export const MR_TestSimpleTypes_E5 = Object.freeze({
});

/**
 * Class templates.
 * Generated from class `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_TestSimpleTypes_ClassTemplate_uint64_t extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_TestSimpleTypes_ClassTemplate_uint64_t_Destroy(ptr);}

    static get var()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_TestSimpleTypes_ClassTemplate_uint64_t_Get_var_uint64_t();
            ffi.check();
            return ffi.HEAPU64()[((__ret >>> 0)) >>> 3];
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

    static set var(value)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_TestSimpleTypes_ClassTemplate_uint64_t_Set_var_uint64_t(ffi.toI64(value));
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

    static __ctor_0(_other)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_TestSimpleTypes_ClassTemplate_uint64_t_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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

    static __ctor_1(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_TestSimpleTypes_ClassTemplate_uint64_t_Construct_uint64_t(ffi.toI64(_1));
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

    static __ctor_2(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_TestSimpleTypes_ClassTemplate_uint64_t_Construct_int(_1);
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
        if (__n === 1 && (args[0] instanceof L.MR_TestSimpleTypes_ClassTemplate_uint64_t))
            return L.MR_TestSimpleTypes_ClassTemplate_uint64_t.__ctor_0(args[0]);
        if (__n === 1 && (typeof args[0] === "number" || typeof args[0] === "bigint"))
            return L.MR_TestSimpleTypes_ClassTemplate_uint64_t.__ctor_1(args[0]);
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_TestSimpleTypes_ClassTemplate_uint64_t.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_TestSimpleTypes_ClassTemplate_uint64_t.__destroy : null, args[3]);
            return;
        }
        super(L.MR_TestSimpleTypes_ClassTemplate_uint64_t.__ctor(args), L.MR_TestSimpleTypes_ClassTemplate_uint64_t.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_TestSimpleTypes_ClassTemplate_uint64_t_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_TestSimpleTypes_ClassTemplate_uint64_t(ffi.RAW, (__ret >>> 0), false, __owner);
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

    foo()
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_TestSimpleTypes_ClassTemplate_uint64_t_foo_uint64_t(this.rawPointer());
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

    foo_int()
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_TestSimpleTypes_ClassTemplate_uint64_t_foo_int(this.rawPointer());
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
}

export function MR_TestSimpleTypes_GetInt()
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_TestSimpleTypes_GetInt();
        ffi.check();
        return __ret;
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

export function MR_TestSimpleTypes_SetInt(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_SetInt(_1);
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

export function MR_TestSimpleTypes_SetIntDef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr__1 = _1 == null ? 0 : ffi.stackScalar(4, (p) => {ffi.HEAPU32()[(p) >>> 2] = _1;});
        ffi.C.MR_TestSimpleTypes_SetIntDef(__ptr__1);
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

export function MR_TestSimpleTypes_GetIntPtr()
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_TestSimpleTypes_GetIntPtr();
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

export function MR_TestSimpleTypes_SetIntPtr(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_SetIntPtr(_1);
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

export function MR_TestSimpleTypes_SetIntPtrDef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_SetIntPtrDef(_1);
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

export function MR_TestSimpleTypes_SetIntPtrDefNull(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_SetIntPtrDefNull(_1);
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

export function MR_TestSimpleTypes_GetIntRef()
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_TestSimpleTypes_GetIntRef();
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

export function MR_TestSimpleTypes_SetIntRef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_SetIntRef(_1);
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

export function MR_TestSimpleTypes_SetIntRefDef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_SetIntRefDef(_1);
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

export function MR_TestSimpleTypes_GetVoidPtr()
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_TestSimpleTypes_GetVoidPtr();
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

export function MR_TestSimpleTypes_SetVoidPtr(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_SetVoidPtr(_1);
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

export function MR_TestSimpleTypes_SetVoidPtrDef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_SetVoidPtrDef(_1);
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

export function MR_TestSimpleTypes_SetVoidPtrDefNull(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_SetVoidPtrDefNull(_1);
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

export function MR_TestSimpleTypes_GetConstVoidPtr()
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_TestSimpleTypes_GetConstVoidPtr();
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

export function MR_TestSimpleTypes_SetConstVoidPtr(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_SetConstVoidPtr(_1);
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

export function MR_TestSimpleTypes_SetConstVoidPtrDef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_SetConstVoidPtrDef(_1);
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

export function MR_TestSimpleTypes_SetConstVoidPtrDefNull(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_SetConstVoidPtrDefNull(_1);
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

export function MR_TestSimpleTypes_GetVoidPtrPtr()
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_TestSimpleTypes_GetVoidPtrPtr();
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

export function MR_TestSimpleTypes_SetVoidPtrPtr(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_SetVoidPtrPtr(_1);
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

export function MR_TestSimpleTypes_SetVoidPtrPtrDef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_SetVoidPtrPtrDef(_1);
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

export function MR_TestSimpleTypes_SetVoidPtrPtrDefNull(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_SetVoidPtrPtrDefNull(_1);
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

export function MR_TestSimpleTypes_GetEnum()
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_TestSimpleTypes_GetEnum();
        ffi.check();
        return __ret;
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

export function MR_TestSimpleTypes_SetEnum(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_SetEnum(_1);
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

export function MR_TestSimpleTypes_SetEnumDef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr__1 = _1 == null ? 0 : ffi.stackScalar(4, (p) => {ffi.HEAPU32()[(p) >>> 2] = _1;});
        ffi.C.MR_TestSimpleTypes_SetEnumDef(__ptr__1);
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

export function MR_TestSimpleTypes_GetEnumPtr()
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_TestSimpleTypes_GetEnumPtr();
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

export function MR_TestSimpleTypes_SetEnumPtr(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_SetEnumPtr(_1);
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

export function MR_TestSimpleTypes_SetEnumPtrDef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_SetEnumPtrDef(_1);
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

export function MR_TestSimpleTypes_SetEnumPtrDefNull(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_SetEnumPtrDefNull(_1);
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

export function MR_TestSimpleTypes_GetEnumRef()
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_TestSimpleTypes_GetEnumRef();
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

export function MR_TestSimpleTypes_SetEnumRef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_SetEnumRef(_1);
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

export function MR_TestSimpleTypes_SetEnumRefDef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_SetEnumRefDef(_1);
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

export function MR_TestSimpleTypes_GetEnum2()
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_TestSimpleTypes_GetEnum2();
        ffi.check();
        return __ret;
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

export function MR_TestSimpleTypes_SetEnum2(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_SetEnum2(((_1 << 16) >> 16));
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

export function MR_TestSimpleTypes_SetEnum2Def(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr__1 = _1 == null ? 0 : ffi.stackScalar(2, (p) => {ffi.HEAPU16()[(p) >>> 1] = _1;});
        ffi.C.MR_TestSimpleTypes_SetEnum2Def(__ptr__1);
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

export function MR_TestSimpleTypes_GetEnum2Ptr()
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_TestSimpleTypes_GetEnum2Ptr();
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

export function MR_TestSimpleTypes_SetEnum2Ptr(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_SetEnum2Ptr(_1);
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

export function MR_TestSimpleTypes_SetEnum2PtrDef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_SetEnum2PtrDef(_1);
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

export function MR_TestSimpleTypes_SetEnum2PtrDefNull(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_SetEnum2PtrDefNull(_1);
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

export function MR_TestSimpleTypes_GetEnum2Ref()
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_TestSimpleTypes_GetEnum2Ref();
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

export function MR_TestSimpleTypes_SetEnum2Ref(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_SetEnum2Ref(_1);
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

export function MR_TestSimpleTypes_SetEnum2RefDef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_SetEnum2RefDef(_1);
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

export function MR_TestSimpleTypes_CheckCharMaybeUnsigned(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_CheckCharMaybeUnsigned(_1);
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

export function MR_TestSimpleTypes_CheckChar_unsigned_char_ptr(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_CheckChar_unsigned_char_ptr(_1);
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

export function MR_TestSimpleTypes_CheckChar_signed_char_ptr(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_TestSimpleTypes_CheckChar_signed_char_ptr(_1);
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

export function MR_TestSimpleTypes_blah_uint64_t(x)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_TestSimpleTypes_blah_uint64_t(ffi.toI64(x));
        ffi.check();
        return BigInt.asUintN(64, __ret);
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

export function MR_TestSimpleTypes_blah_int64_t(x)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_TestSimpleTypes_blah_int64_t(ffi.toI64(x));
        ffi.check();
        return __ret;
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

export function MR_TestSimpleTypes_FuncTemplate_uint64_t(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_TestSimpleTypes_FuncTemplate_uint64_t(ffi.toI64(_1));
        ffi.check();
        return BigInt.asUintN(64, __ret);
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

export function MR_TestSimpleTypes_FuncTemplate_int(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_TestSimpleTypes_FuncTemplate_int(_1);
        ffi.check();
        return __ret;
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

