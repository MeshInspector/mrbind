// The wrappers of the C bindings file `MR/test_typedefs_in_templates`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * This tests a specific Clang bug/quirk.
 * Certain typedefs in templates get their names printed without the template arguments of the enclosing class template, breaking our code generation.
 * Generated from class `MR::TypedefsInTemplates::A<int32_t>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_TypedefsInTemplates_A_int32_t extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_TypedefsInTemplates_A_int32_t_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_TypedefsInTemplates_A_int32_t_DefaultConstruct();
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
            const __ret = ffi.C.MR_TypedefsInTemplates_A_int32_t_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
            return L.MR_TypedefsInTemplates_A_int32_t.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_TypedefsInTemplates_A_int32_t))
            return L.MR_TypedefsInTemplates_A_int32_t.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_TypedefsInTemplates_A_int32_t.__destroy : null, args[3]);
            return;
        }
        super(L.MR_TypedefsInTemplates_A_int32_t.__ctor(args), L.MR_TypedefsInTemplates_A_int32_t.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_TypedefsInTemplates_A_int32_t_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_TypedefsInTemplates_A_int32_t(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    foo()
    {
        try
        {
            const __ret = ffi.C.MR_TypedefsInTemplates_A_int32_t_foo(this.rawPointer());
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::TypedefsInTemplates::B<int32_t>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_TypedefsInTemplates_B_int32_t extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_TypedefsInTemplates_B_int32_t_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_TypedefsInTemplates_B_int32_t_DefaultConstruct();
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
            const __ret = ffi.C.MR_TypedefsInTemplates_B_int32_t_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
            return L.MR_TypedefsInTemplates_B_int32_t.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_TypedefsInTemplates_B_int32_t))
            return L.MR_TypedefsInTemplates_B_int32_t.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_TypedefsInTemplates_B_int32_t.__destroy : null, args[3]);
            return;
        }
        super(L.MR_TypedefsInTemplates_B_int32_t.__ctor(args), L.MR_TypedefsInTemplates_B_int32_t.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_TypedefsInTemplates_B_int32_t_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_TypedefsInTemplates_B_int32_t(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::TypedefsInTemplates::B<int32_t>::BB<float>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_TypedefsInTemplates_B_int32_t_BB_float extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_TypedefsInTemplates_B_int32_t_BB_float_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_TypedefsInTemplates_B_int32_t_BB_float_DefaultConstruct();
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
            const __ret = ffi.C.MR_TypedefsInTemplates_B_int32_t_BB_float_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
            return L.MR_TypedefsInTemplates_B_int32_t_BB_float.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_TypedefsInTemplates_B_int32_t_BB_float))
            return L.MR_TypedefsInTemplates_B_int32_t_BB_float.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_TypedefsInTemplates_B_int32_t_BB_float.__destroy : null, args[3]);
            return;
        }
        super(L.MR_TypedefsInTemplates_B_int32_t_BB_float.__ctor(args), L.MR_TypedefsInTemplates_B_int32_t_BB_float.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_TypedefsInTemplates_B_int32_t_BB_float_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_TypedefsInTemplates_B_int32_t_BB_float(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    foo()
    {
        try
        {
            const __ret = ffi.C.MR_TypedefsInTemplates_B_int32_t_BB_float_foo(this.rawPointer());
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    foo2()
    {
        try
        {
            const __ret = ffi.C.MR_TypedefsInTemplates_B_int32_t_BB_float_foo2(this.rawPointer());
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

export function MR_TypedefsInTemplates_bar(_1)
{
    try
    {
        ffi.C.MR_TypedefsInTemplates_bar(_1);
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

