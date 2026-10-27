// The wrappers of the C bindings file `MR/test_overloaded_operators`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Member functions.
 * Generated from class `MR::OverloadedOps::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_OverloadedOps_A extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_OverloadedOps_A_Destroy(ptr);}

    static __ctor_0(_other)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadedOps_A_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 1 && (args[0] instanceof L.MR_OverloadedOps_A))
            return L.MR_OverloadedOps_A.__ctor_0(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_OverloadedOps_A.__destroy : null, args[3]);
            return;
        }
        super(L.MR_OverloadedOps_A.__ctor(args), L.MR_OverloadedOps_A.__destroy, null);
    }

    opAdd(...args)
    {
        const __n = args.length;
        if (__n === 0)
            return this.opPos();
        if (__n === 1 && (args[0] instanceof L.MR_OverloadedOps_A))
            return this.opAdd_2(args[0]);
        throw new TypeError("No overload of `opAdd` accepts these arguments.");
    }

    opSub(...args)
    {
        const __n = args.length;
        if (__n === 0)
            return this.opNeg();
        if (__n === 1 && (args[0] instanceof L.MR_OverloadedOps_A))
            return this.opSub_2(args[0]);
        throw new TypeError("No overload of `opSub` accepts these arguments.");
    }

    opMul(...args)
    {
        const __n = args.length;
        if (__n === 0)
            return this.opDeref();
        if (__n === 1 && (args[0] instanceof L.MR_OverloadedOps_A))
            return this.opMul_2(args[0]);
        throw new TypeError("No overload of `opMul` accepts these arguments.");
    }

    assignFromAnother(_other)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadedOps_A_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
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

    opPos()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_pos_MR_OverloadedOps_A(this.rawPointer());
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

    opAdd_2(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_add_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    opNeg()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_neg_MR_OverloadedOps_A(this.rawPointer());
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

    opSub_2(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_sub_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    opDeref()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_deref_MR_OverloadedOps_A(this.rawPointer());
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

    opMul_2(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_mul_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    opDiv(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_div_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    opMod(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_mod_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    opXor(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_xor_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    opBitand(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_bitand_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    opBitor(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_bitor_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    opCompl()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_compl_MR_OverloadedOps_A(this.rawPointer());
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

    opNot()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_not_MR_OverloadedOps_A(this.rawPointer());
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

    opLess(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_less_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    opGreater(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_greater_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    add_assign(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadedOps_A_add_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    sub_assign(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadedOps_A_sub_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    mul_assign(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadedOps_A_mul_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    div_assign(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadedOps_A_div_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    mod_assign(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadedOps_A_mod_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    xor_assign(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadedOps_A_xor_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    bitand_assign(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadedOps_A_bitand_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    bitor_assign(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadedOps_A_bitor_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    opLshift(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_lshift_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    opRshift(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_rshift_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    lshift_assign(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadedOps_A_lshift_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    rshift_assign(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadedOps_A_rshift_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    opEqual(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_equal_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    opNotEqual(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_not_equal_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    opLessEqual(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_less_equal_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    opGreaterEqual(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_greater_equal_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    opCompareThreeWay(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_compare_three_way_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    opAnd(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_and_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    opOr(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_or_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    opIncr()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_incr_MR_OverloadedOps_A(this.rawPointer());
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

    opPostIncr()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_post_incr_MR_OverloadedOps_A(this.rawPointer());
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

    opDecr()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_decr_MR_OverloadedOps_A(this.rawPointer());
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

    opPostDecr()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_post_decr_MR_OverloadedOps_A(this.rawPointer());
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

    opComma(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_comma_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    arrow_star(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadedOps_A_arrow_star(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    arrow()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadedOps_A_arrow(this.rawPointer());
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

    call(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadedOps_A_call(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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

    index(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadedOps_A_index(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
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
}

/**
 * Free functions.
 * Generated from class `MR::OverloadedOps::B`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_OverloadedOps_B extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_OverloadedOps_B_Destroy(ptr);}

    static __ctor_0()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadedOps_B_DefaultConstruct();
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
            const __ret = ffi.C.MR_OverloadedOps_B_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
            return L.MR_OverloadedOps_B.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_OverloadedOps_B))
            return L.MR_OverloadedOps_B.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_OverloadedOps_B.__destroy : null, args[3]);
            return;
        }
        super(L.MR_OverloadedOps_B.__ctor(args), L.MR_OverloadedOps_B.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadedOps_B_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_OverloadedOps_B(ffi.RAW, (__ret >>> 0), false, __owner);
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

/**
 * Test how the names are generated.
 * Generated from class `MR::OverloadedOps::C`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_OverloadedOps_C extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_OverloadedOps_C_Destroy(ptr);}

    static __ctor_0()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadedOps_C_DefaultConstruct();
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
            const __ret = ffi.C.MR_OverloadedOps_C_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
            return L.MR_OverloadedOps_C.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_OverloadedOps_C))
            return L.MR_OverloadedOps_C.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_OverloadedOps_C.__destroy : null, args[3]);
            return;
        }
        super(L.MR_OverloadedOps_C.__ctor(args), L.MR_OverloadedOps_C.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadedOps_C_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_OverloadedOps_C(ffi.RAW, (__ret >>> 0), false, __owner);
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

/**
 * Generated from class `MR::OverloadedOps::D`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_OverloadedOps_D extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_OverloadedOps_D_Destroy(ptr);}

    static __ctor_0()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadedOps_D_DefaultConstruct();
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
            const __ret = ffi.C.MR_OverloadedOps_D_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
            return L.MR_OverloadedOps_D.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_OverloadedOps_D))
            return L.MR_OverloadedOps_D.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_OverloadedOps_D.__destroy : null, args[3]);
            return;
        }
        super(L.MR_OverloadedOps_D.__ctor(args), L.MR_OverloadedOps_D.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadedOps_D_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_OverloadedOps_D(ffi.RAW, (__ret >>> 0), false, __owner);
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

    opMul()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_deref_MR_OverloadedOps_D_ref(this.rawPointer());
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

    opDeref_const_ref()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_deref_const_MR_OverloadedOps_D_ref(this.rawPointer());
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
}

export function MR_C_pos_MR_OverloadedOps_B(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_pos_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"));
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

export function MR_C_add_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_add_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_neg_MR_OverloadedOps_B(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_neg_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"));
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

export function MR_C_sub_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_sub_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_deref_MR_OverloadedOps_B(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_deref_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"));
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

export function MR_C_mul_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_mul_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_div_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_div_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_mod_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_mod_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_xor_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_xor_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_bitand_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_bitand_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_bitor_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_bitor_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_compl_MR_OverloadedOps_B(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_compl_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"));
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

export function MR_C_not_MR_OverloadedOps_B(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_not_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"));
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

export function MR_C_less_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_less_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_greater_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_greater_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_add_assign_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_add_assign_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_sub_assign_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_sub_assign_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_mul_assign_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_mul_assign_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_div_assign_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_div_assign_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_mod_assign_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_mod_assign_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_xor_assign_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_xor_assign_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_bitand_assign_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_bitand_assign_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_bitor_assign_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_bitor_assign_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_lshift_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_lshift_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_rshift_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_rshift_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_lshift_assign_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_lshift_assign_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_rshift_assign_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_rshift_assign_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_equal_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_equal_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_not_equal_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_not_equal_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_less_equal_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_less_equal_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_greater_equal_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_greater_equal_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_compare_three_way_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_compare_three_way_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_and_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_and_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_or_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_or_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_incr_MR_OverloadedOps_B(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_incr_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"));
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

export function MR_C_post_incr_MR_OverloadedOps_B(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_post_incr_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"));
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

export function MR_C_decr_MR_OverloadedOps_B(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_decr_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"));
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

export function MR_C_post_decr_MR_OverloadedOps_B(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_post_decr_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"));
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

export function MR_C_comma_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_comma_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_arrow_star_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_arrow_star_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_add_MR_OverloadedOps_C(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_C_add_MR_OverloadedOps_C(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_add_MR_OverloadedOps_C_MR_OverloadedOps_B(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_C_add_MR_OverloadedOps_C_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
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

export function MR_C_pos_MR_OverloadedOps_D_ref(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_pos_MR_OverloadedOps_D_ref(ffi.ptrNonNull(_1, "_1"));
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

export function MR_C_pos_const_MR_OverloadedOps_D_ref(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_pos_const_MR_OverloadedOps_D_ref(ffi.ptrNonNull(_1, "_1"));
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

