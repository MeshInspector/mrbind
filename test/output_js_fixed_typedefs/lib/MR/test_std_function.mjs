// The wrappers of the C bindings file `MR/test_std_function`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export const MR_StdFunction_E = Object.freeze({
});

/**
 * Generated from class `MR::StdFunction::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_StdFunction_A extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_StdFunction_A_Destroy(ptr);}

    get a()
    {
        try
        {
            const __ret = ffi.C.MR_StdFunction_A_Get_a(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set a(value)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __str_value = ffi.utf8(ffi.nonNullString(value, "value"));
            const __end_value = ffi.utf8End();
            ffi.C.MR_StdFunction_A_Set_a(this.rawPointer(), __str_value, __end_value);
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

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_StdFunction_A_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(a)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __str_a = ffi.utf8(ffi.nonNullString(a, "a"));
            const __end_a = ffi.utf8End();
            const __ret = ffi.C.MR_StdFunction_A_ConstructFrom(__str_a, __end_a);
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

    static __ctor_2(_other)
    {
        try
        {
            const __ret = ffi.C.MR_StdFunction_A_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
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
            return L.MR_StdFunction_A.__ctor_0();
        if (__n === 1 && typeof args[0] === "string")
            return L.MR_StdFunction_A.__ctor_1(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_StdFunction_A))
            return L.MR_StdFunction_A.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_StdFunction_A.__destroy : null, args[3]);
            return;
        }
        super(L.MR_StdFunction_A.__ctor(args), L.MR_StdFunction_A.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_StdFunction_A_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_StdFunction_A(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

export function MR_StdFunction_foo_std_function_int32_t_func(_1)
{
    let __fn__1 = null;
    try
    {
        __fn__1 = typeof _1 === "function" ? L.MR_C_std_function_int32_t.of(_1) : _1;
        ffi.C.MR_StdFunction_foo_std_function_int32_t_func(ffi.PASS_BY_COPY, ffi.ptrNonNull(__fn__1, "_1"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        if (__fn__1 !== null && __fn__1 !== _1) __fn__1.delete();
    }
}

export function MR_StdFunction_foo_std_function_void_func_from_int32_t_int32_t(_1)
{
    let __fn__1 = null;
    try
    {
        __fn__1 = typeof _1 === "function" ? L.MR_C_std_function_void_from_int32_t_int32_t.of(_1) : _1;
        ffi.C.MR_StdFunction_foo_std_function_void_func_from_int32_t_int32_t(ffi.PASS_BY_COPY, ffi.ptrNonNull(__fn__1, "_1"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        if (__fn__1 !== null && __fn__1 !== _1) __fn__1.delete();
    }
}

export function MR_StdFunction_foo_std_function_int32_t_func_from_int32_t_int32_t(_1)
{
    let __fn__1 = null;
    try
    {
        __fn__1 = typeof _1 === "function" ? L.MR_C_std_function_int32_t_from_int32_t_int32_t.of(_1) : _1;
        ffi.C.MR_StdFunction_foo_std_function_int32_t_func_from_int32_t_int32_t(ffi.PASS_BY_COPY, ffi.ptrNonNull(__fn__1, "_1"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        if (__fn__1 !== null && __fn__1 !== _1) __fn__1.delete();
    }
}

export function MR_StdFunction_foo_std_function_MR_StdFunction_E_func_from_int32_t_MR_StdFunction_E(_1)
{
    let __fn__1 = null;
    try
    {
        __fn__1 = typeof _1 === "function" ? L.MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E.of(_1) : _1;
        ffi.C.MR_StdFunction_foo_std_function_MR_StdFunction_E_func_from_int32_t_MR_StdFunction_E(ffi.PASS_BY_COPY, ffi.ptrNonNull(__fn__1, "_1"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        if (__fn__1 !== null && __fn__1 !== _1) __fn__1.delete();
    }
}

export function MR_StdFunction_foo_std_function_std_string_func_from_int32_t_float(_1)
{
    let __fn__1 = null;
    try
    {
        __fn__1 = typeof _1 === "function" ? L.MR_C_std_function_std_string_from_int32_t_float.of(_1) : _1;
        ffi.C.MR_StdFunction_foo_std_function_std_string_func_from_int32_t_float(ffi.PASS_BY_COPY, ffi.ptrNonNull(__fn__1, "_1"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        if (__fn__1 !== null && __fn__1 !== _1) __fn__1.delete();
    }
}

export function MR_StdFunction_foo_std_function_void_func_from_std_string(_1)
{
    let __fn__1 = null;
    try
    {
        __fn__1 = typeof _1 === "function" ? L.MR_C_std_function_void_from_std_string.of(_1) : _1;
        ffi.C.MR_StdFunction_foo_std_function_void_func_from_std_string(ffi.PASS_BY_COPY, ffi.ptrNonNull(__fn__1, "_1"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        if (__fn__1 !== null && __fn__1 !== _1) __fn__1.delete();
    }
}

export function MR_StdFunction_foo_std_function_void_func_from_MR_StdFunction_A(_1)
{
    let __fn__1 = null;
    try
    {
        __fn__1 = typeof _1 === "function" ? L.MR_C_std_function_void_from_MR_StdFunction_A.of(_1) : _1;
        ffi.C.MR_StdFunction_foo_std_function_void_func_from_MR_StdFunction_A(ffi.PASS_BY_COPY, ffi.ptrNonNull(__fn__1, "_1"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        if (__fn__1 !== null && __fn__1 !== _1) __fn__1.delete();
    }
}

export function MR_StdFunction_foo_std_function_MR_StdFunction_A_func(_1)
{
    let __fn__1 = null;
    try
    {
        __fn__1 = typeof _1 === "function" ? L.MR_C_std_function_MR_StdFunction_A.of(_1) : _1;
        ffi.C.MR_StdFunction_foo_std_function_MR_StdFunction_A_func(ffi.PASS_BY_COPY, ffi.ptrNonNull(__fn__1, "_1"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        if (__fn__1 !== null && __fn__1 !== _1) __fn__1.delete();
    }
}

