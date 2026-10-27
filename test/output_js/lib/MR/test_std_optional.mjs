// The wrappers of the C bindings file `MR/test_std_optional`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export const MR_StdOptional_E = Object.freeze({
    e1: 0,
    [0]: "e1",
});

/**
 * Generated from class `MR::StdOptional::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_StdOptional_A extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_StdOptional_A_Destroy(ptr);}

    get x()
    {
        const __ret = ffi.C.MR_StdOptional_A_Get_x(this.rawPointer());
        ffi.check();
        return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
    }

    set x(value)
    {
        ffi.C.MR_StdOptional_A_Set_x(this.rawPointer(), value);
        ffi.check();
    }

    static __ctor_0()
    {
        const __ret = ffi.C.MR_StdOptional_A_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(x)
    {
        const __ret = ffi.C.MR_StdOptional_A_ConstructFrom(x);
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_2(_other)
    {
        const __ret = ffi.C.MR_StdOptional_A_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_StdOptional_A.__ctor_0();
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_StdOptional_A.__ctor_1(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_StdOptional_A))
            return L.MR_StdOptional_A.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_StdOptional_A.__destroy : null, args[3]);
            return;
        }
        super(L.MR_StdOptional_A.__ctor(args), L.MR_StdOptional_A.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_StdOptional_A_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_StdOptional_A(ffi.RAW, (__ret >>> 0), false, __owner);
    }
}

/**
 * Generated from class `MR::StdOptional::B`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_StdOptional_B extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_StdOptional_B_Destroy(ptr);}

    get s()
    {
        const __ret = ffi.C.MR_StdOptional_B_Get_s(this.rawPointer());
        ffi.check();
        const __owner = this;
        return new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    set s(value)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __str_value = ffi.utf8(ffi.nonNullString(value, "value"));
            const __end_value = ffi.utf8End();
            ffi.C.MR_StdOptional_B_Set_s(this.rawPointer(), __str_value, __end_value);
            ffi.check();
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    static __ctor_0()
    {
        const __ret = ffi.C.MR_StdOptional_B_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(s)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __str_s = ffi.utf8(ffi.nonNullString(s, "s"));
            const __end_s = ffi.utf8End();
            const __ret = ffi.C.MR_StdOptional_B_ConstructFrom(__str_s, __end_s);
            ffi.check();
            return (__ret >>> 0);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    static __ctor_2(_other)
    {
        const __ret = ffi.C.MR_StdOptional_B_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_StdOptional_B.__ctor_0();
        if (__n === 1 && typeof args[0] === "string")
            return L.MR_StdOptional_B.__ctor_1(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_StdOptional_B))
            return L.MR_StdOptional_B.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_StdOptional_B.__destroy : null, args[3]);
            return;
        }
        super(L.MR_StdOptional_B.__ctor(args), L.MR_StdOptional_B.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_StdOptional_B_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_StdOptional_B(ffi.RAW, (__ret >>> 0), false, __owner);
    }
}

export function MR_StdOptional_GetInt()
{
    const __ret = ffi.C.MR_StdOptional_GetInt();
    ffi.check();
    return new L.MR_C_std_optional_int(ffi.RAW, (__ret >>> 0), true, null);
}

export function MR_StdOptional_SetInt(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr__1 = ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = _1;});
        ffi.C.MR_StdOptional_SetInt(__ptr__1);
        ffi.check();
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_StdOptional_SetIntConstRef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr__1 = ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = _1;});
        ffi.C.MR_StdOptional_SetIntConstRef(__ptr__1);
        ffi.check();
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_StdOptional_SetIntDefTrivial(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr__1 = ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = _1;});
        ffi.C.MR_StdOptional_SetIntDefTrivial(__ptr__1);
        ffi.check();
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_StdOptional_SetIntDef(_1)
{
    ffi.C.MR_StdOptional_SetIntDef(ffi.ptr(_1));
    ffi.check();
}

export function MR_StdOptional_GetEnum()
{
    const __ret = ffi.C.MR_StdOptional_GetEnum();
    ffi.check();
    return new L.MR_C_std_optional_MR_StdOptional_E(ffi.RAW, (__ret >>> 0), true, null);
}

export function MR_StdOptional_SetEnum(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr__1 = ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = _1;});
        ffi.C.MR_StdOptional_SetEnum(__ptr__1);
        ffi.check();
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_StdOptional_SetEnumConstRef(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr__1 = ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = _1;});
        ffi.C.MR_StdOptional_SetEnumConstRef(__ptr__1);
        ffi.check();
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_StdOptional_SetEnumDefTrivial(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr__1 = ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = _1;});
        ffi.C.MR_StdOptional_SetEnumDefTrivial(__ptr__1);
        ffi.check();
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_StdOptional_SetEnumDef(_1)
{
    ffi.C.MR_StdOptional_SetEnumDef(ffi.ptr(_1));
    ffi.check();
}

export function MR_StdOptional_GetClass()
{
    const __ret = ffi.C.MR_StdOptional_GetClass();
    ffi.check();
    return new L.MR_C_std_optional_MR_StdOptional_A(ffi.RAW, (__ret >>> 0), true, null);
}

export function MR_StdOptional_SetClass(_1)
{
    ffi.C.MR_StdOptional_SetClass(ffi.ptrNonNull(_1, "_1"));
    ffi.check();
}

export function MR_StdOptional_SetClassConstRef(_1)
{
    ffi.C.MR_StdOptional_SetClassConstRef(ffi.ptrNonNull(_1, "_1"));
    ffi.check();
}

export function MR_StdOptional_SetClassDefTrivial(_1)
{
    ffi.C.MR_StdOptional_SetClassDefTrivial(ffi.ptrNonNull(_1, "_1"));
    ffi.check();
}

export function MR_StdOptional_SetClassDef(_1)
{
    ffi.C.MR_StdOptional_SetClassDef(ffi.ptr(_1));
    ffi.check();
}

export function MR_StdOptional_GetClass2()
{
    const __ret = ffi.C.MR_StdOptional_GetClass2();
    ffi.check();
    return new L.MR_C_std_optional_MR_StdOptional_B(ffi.RAW, (__ret >>> 0), true, null);
}

export function MR_StdOptional_SetClass2(_1)
{
    ffi.C.MR_StdOptional_SetClass2((_1 == null ? ffi.PASS_BY_NO_OBJECT : ffi.PASS_BY_COPY), ffi.ptr(_1));
    ffi.check();
}

export function MR_StdOptional_SetClass2ConstRef(_1)
{
    ffi.C.MR_StdOptional_SetClass2ConstRef((_1 == null ? ffi.PASS_BY_NO_OBJECT : ffi.PASS_BY_COPY), ffi.ptr(_1));
    ffi.check();
}

export function MR_StdOptional_SetClass2DefTrivial(_1)
{
    ffi.C.MR_StdOptional_SetClass2DefTrivial((_1 == null ? ffi.PASS_BY_NO_OBJECT : ffi.PASS_BY_COPY), ffi.ptr(_1));
    ffi.check();
}

export function MR_StdOptional_SetClass2Def(_1)
{
    ffi.C.MR_StdOptional_SetClass2Def((_1 == null ? ffi.PASS_BY_NO_OBJECT : ffi.PASS_BY_COPY), ffi.ptr(_1));
    ffi.check();
}

