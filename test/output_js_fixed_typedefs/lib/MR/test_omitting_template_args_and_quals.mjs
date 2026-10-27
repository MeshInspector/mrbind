// The wrappers of the C bindings file `MR/test_omitting_template_args_and_quals`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Here the generated code will omit the template arguments for operators (to avoid unwanted instantiations),
 *   and omit qualifiers for friend functions (since they are normally only accessible via ADL).
 * Generated from class `MR::OmittingTargsAndQuals::A<float>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_OmittingTargsAndQuals_A_float extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_OmittingTargsAndQuals_A_float_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_OmittingTargsAndQuals_A_float_DefaultConstruct();
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
            const __ret = ffi.C.MR_OmittingTargsAndQuals_A_float_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
            return L.MR_OmittingTargsAndQuals_A_float.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_OmittingTargsAndQuals_A_float))
            return L.MR_OmittingTargsAndQuals_A_float.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_OmittingTargsAndQuals_A_float.__destroy : null, args[3]);
            return;
        }
        super(L.MR_OmittingTargsAndQuals_A_float.__ctor(args), L.MR_OmittingTargsAndQuals_A_float.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_OmittingTargsAndQuals_A_float_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_OmittingTargsAndQuals_A_float(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opAdd()
    {
        try
        {
            ffi.C.MR_C_pos_MR_OmittingTargsAndQuals_A_float(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Here the generated code will omit the template arguments for operators (to avoid unwanted instantiations),
 *   and omit qualifiers for friend functions (since they are normally only accessible via ADL).
 * Generated from class `MR::OmittingTargsAndQuals::A<int32_t>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_OmittingTargsAndQuals_A_int32_t extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_OmittingTargsAndQuals_A_int32_t_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_OmittingTargsAndQuals_A_int32_t_DefaultConstruct();
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
            const __ret = ffi.C.MR_OmittingTargsAndQuals_A_int32_t_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
            return L.MR_OmittingTargsAndQuals_A_int32_t.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_OmittingTargsAndQuals_A_int32_t))
            return L.MR_OmittingTargsAndQuals_A_int32_t.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_OmittingTargsAndQuals_A_int32_t.__destroy : null, args[3]);
            return;
        }
        super(L.MR_OmittingTargsAndQuals_A_int32_t.__ctor(args), L.MR_OmittingTargsAndQuals_A_int32_t.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_OmittingTargsAndQuals_A_int32_t_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_OmittingTargsAndQuals_A_int32_t(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opAdd()
    {
        try
        {
            ffi.C.MR_C_pos_MR_OmittingTargsAndQuals_A_int32_t(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opSub(_1)
    {
        try
        {
            ffi.C.MR_C_sub_MR_OmittingTargsAndQuals_A_int32_t_MR_OmittingTargsAndQuals_A_float(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

export function MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_int32_t(_1)
{
    try
    {
        ffi.C.MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_int32_t(ffi.ptrNonNull(_1, "_1"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_OmittingTargsAndQuals_b(_1, _2)
{
    try
    {
        ffi.C.MR_OmittingTargsAndQuals_b(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_float(_1)
{
    try
    {
        ffi.C.MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_float(ffi.ptrNonNull(_1, "_1"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_deref_MR_OmittingTargsAndQuals_A_int32_t(_1)
{
    try
    {
        ffi.C.MR_C_deref_MR_OmittingTargsAndQuals_A_int32_t(ffi.ptrNonNull(_1, "_1"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_compl_MR_OmittingTargsAndQuals_A_int32_t(_1)
{
    try
    {
        ffi.C.MR_C_compl_MR_OmittingTargsAndQuals_A_int32_t(ffi.ptrNonNull(_1, "_1"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_OmittingTargsAndQuals_c(_1)
{
    try
    {
        ffi.C.MR_OmittingTargsAndQuals_c(ffi.ptrNonNull(_1, "_1"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_OmittingTargsAndQuals_d(_1)
{
    try
    {
        ffi.C.MR_OmittingTargsAndQuals_d(ffi.ptrNonNull(_1, "_1"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_OmittingTargsAndQuals_inst()
{
    try
    {
        ffi.C.MR_OmittingTargsAndQuals_inst();
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

