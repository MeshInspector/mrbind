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
    }

    opPos()
    {
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
    }

    opAdd_2(_1)
    {
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
    }

    opNeg()
    {
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
    }

    opSub_2(_1)
    {
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
    }

    opDeref()
    {
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
    }

    opMul_2(_1)
    {
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
    }

    opDiv(_1)
    {
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
    }

    opMod(_1)
    {
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
    }

    opXor(_1)
    {
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
    }

    opBitand(_1)
    {
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
    }

    opBitor(_1)
    {
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
    }

    opCompl()
    {
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
    }

    opNot()
    {
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
    }

    opLess(_1)
    {
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
    }

    opGreater(_1)
    {
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
    }

    add_assign(_1)
    {
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
    }

    sub_assign(_1)
    {
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
    }

    mul_assign(_1)
    {
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
    }

    div_assign(_1)
    {
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
    }

    mod_assign(_1)
    {
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
    }

    xor_assign(_1)
    {
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
    }

    bitand_assign(_1)
    {
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
    }

    bitor_assign(_1)
    {
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
    }

    opLshift(_1)
    {
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
    }

    opRshift(_1)
    {
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
    }

    lshift_assign(_1)
    {
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
    }

    rshift_assign(_1)
    {
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
    }

    opEqual(_1)
    {
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
    }

    opNotEqual(_1)
    {
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
    }

    opLessEqual(_1)
    {
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
    }

    opGreaterEqual(_1)
    {
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
    }

    opCompareThreeWay(_1)
    {
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
    }

    opAnd(_1)
    {
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
    }

    opOr(_1)
    {
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
    }

    opIncr()
    {
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
    }

    opPostIncr()
    {
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
    }

    opDecr()
    {
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
    }

    opPostDecr()
    {
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
    }

    opComma(_1)
    {
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
    }

    arrow_star(_1)
    {
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
    }

    arrow()
    {
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
    }

    call(_1)
    {
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
    }

    index(_1)
    {
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
    }

    static __ctor_1(_other)
    {
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
    }

    static __ctor_1(_other)
    {
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
    }

    static __ctor_1(_other)
    {
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
    }

    opMul()
    {
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
    }

    opDeref_const_ref()
    {
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
    }
}

export function MR_C_pos_MR_OverloadedOps_B(_1)
{
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
}

export function MR_C_add_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_neg_MR_OverloadedOps_B(_1)
{
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
}

export function MR_C_sub_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_deref_MR_OverloadedOps_B(_1)
{
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
}

export function MR_C_mul_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_div_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_mod_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_xor_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_bitand_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_bitor_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_compl_MR_OverloadedOps_B(_1)
{
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
}

export function MR_C_not_MR_OverloadedOps_B(_1)
{
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
}

export function MR_C_less_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_greater_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_add_assign_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_sub_assign_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_mul_assign_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_div_assign_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_mod_assign_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_xor_assign_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_bitand_assign_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_bitor_assign_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_lshift_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_rshift_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_lshift_assign_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_rshift_assign_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_equal_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_not_equal_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_less_equal_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_greater_equal_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_compare_three_way_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_and_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_or_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_incr_MR_OverloadedOps_B(_1)
{
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
}

export function MR_C_post_incr_MR_OverloadedOps_B(_1)
{
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
}

export function MR_C_decr_MR_OverloadedOps_B(_1)
{
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
}

export function MR_C_post_decr_MR_OverloadedOps_B(_1)
{
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
}

export function MR_C_comma_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_arrow_star_MR_OverloadedOps_B(_1, _2)
{
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
}

export function MR_C_add_MR_OverloadedOps_C(_1, _2)
{
    try
    {
        ffi.C.MR_C_add_MR_OverloadedOps_C(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_add_MR_OverloadedOps_C_MR_OverloadedOps_B(_1, _2)
{
    try
    {
        ffi.C.MR_C_add_MR_OverloadedOps_C_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_pos_MR_OverloadedOps_D_ref(_1)
{
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
}

export function MR_C_pos_const_MR_OverloadedOps_D_ref(_1)
{
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
}

