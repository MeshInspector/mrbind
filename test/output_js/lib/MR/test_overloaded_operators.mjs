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
        const __ret = ffi.C.MR_OverloadedOps_A_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
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
        const __ret = ffi.C.MR_OverloadedOps_A_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return __ret;
    }

    opPos()
    {
        const __ret = ffi.C.MR_C_pos_MR_OverloadedOps_A(this.rawPointer());
        ffi.check();
        return __ret;
    }

    opAdd_2(_1)
    {
        const __ret = ffi.C.MR_C_add_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    opNeg()
    {
        const __ret = ffi.C.MR_C_neg_MR_OverloadedOps_A(this.rawPointer());
        ffi.check();
        return __ret;
    }

    opSub_2(_1)
    {
        const __ret = ffi.C.MR_C_sub_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    opDeref()
    {
        const __ret = ffi.C.MR_C_deref_MR_OverloadedOps_A(this.rawPointer());
        ffi.check();
        return __ret;
    }

    opMul_2(_1)
    {
        const __ret = ffi.C.MR_C_mul_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    opDiv(_1)
    {
        const __ret = ffi.C.MR_C_div_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    opMod(_1)
    {
        const __ret = ffi.C.MR_C_mod_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    opXor(_1)
    {
        const __ret = ffi.C.MR_C_xor_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    opBitand(_1)
    {
        const __ret = ffi.C.MR_C_bitand_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    opBitor(_1)
    {
        const __ret = ffi.C.MR_C_bitor_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    opCompl()
    {
        const __ret = ffi.C.MR_C_compl_MR_OverloadedOps_A(this.rawPointer());
        ffi.check();
        return __ret;
    }

    opNot()
    {
        const __ret = ffi.C.MR_C_not_MR_OverloadedOps_A(this.rawPointer());
        ffi.check();
        return __ret;
    }

    opLess(_1)
    {
        const __ret = ffi.C.MR_C_less_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    opGreater(_1)
    {
        const __ret = ffi.C.MR_C_greater_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    add_assign(_1)
    {
        const __ret = ffi.C.MR_OverloadedOps_A_add_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    sub_assign(_1)
    {
        const __ret = ffi.C.MR_OverloadedOps_A_sub_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    mul_assign(_1)
    {
        const __ret = ffi.C.MR_OverloadedOps_A_mul_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    div_assign(_1)
    {
        const __ret = ffi.C.MR_OverloadedOps_A_div_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    mod_assign(_1)
    {
        const __ret = ffi.C.MR_OverloadedOps_A_mod_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    xor_assign(_1)
    {
        const __ret = ffi.C.MR_OverloadedOps_A_xor_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    bitand_assign(_1)
    {
        const __ret = ffi.C.MR_OverloadedOps_A_bitand_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    bitor_assign(_1)
    {
        const __ret = ffi.C.MR_OverloadedOps_A_bitor_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    opLshift(_1)
    {
        const __ret = ffi.C.MR_C_lshift_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    opRshift(_1)
    {
        const __ret = ffi.C.MR_C_rshift_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    lshift_assign(_1)
    {
        const __ret = ffi.C.MR_OverloadedOps_A_lshift_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    rshift_assign(_1)
    {
        const __ret = ffi.C.MR_OverloadedOps_A_rshift_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    opEqual(_1)
    {
        const __ret = ffi.C.MR_C_equal_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    opNotEqual(_1)
    {
        const __ret = ffi.C.MR_C_not_equal_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    opLessEqual(_1)
    {
        const __ret = ffi.C.MR_C_less_equal_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    opGreaterEqual(_1)
    {
        const __ret = ffi.C.MR_C_greater_equal_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    opCompareThreeWay(_1)
    {
        const __ret = ffi.C.MR_C_compare_three_way_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    opAnd(_1)
    {
        const __ret = ffi.C.MR_C_and_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    opOr(_1)
    {
        const __ret = ffi.C.MR_C_or_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    opIncr()
    {
        const __ret = ffi.C.MR_C_incr_MR_OverloadedOps_A(this.rawPointer());
        ffi.check();
        return __ret;
    }

    opPostIncr()
    {
        const __ret = ffi.C.MR_C_post_incr_MR_OverloadedOps_A(this.rawPointer());
        ffi.check();
        return __ret;
    }

    opDecr()
    {
        const __ret = ffi.C.MR_C_decr_MR_OverloadedOps_A(this.rawPointer());
        ffi.check();
        return __ret;
    }

    opPostDecr()
    {
        const __ret = ffi.C.MR_C_post_decr_MR_OverloadedOps_A(this.rawPointer());
        ffi.check();
        return __ret;
    }

    opComma(_1)
    {
        const __ret = ffi.C.MR_C_comma_MR_OverloadedOps_A(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    arrow_star(_1)
    {
        const __ret = ffi.C.MR_OverloadedOps_A_arrow_star(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    arrow()
    {
        const __ret = ffi.C.MR_OverloadedOps_A_arrow(this.rawPointer());
        ffi.check();
        return __ret;
    }

    call(_1)
    {
        const __ret = ffi.C.MR_OverloadedOps_A_call(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }

    index(_1)
    {
        const __ret = ffi.C.MR_OverloadedOps_A_index(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
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
        const __ret = ffi.C.MR_OverloadedOps_B_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_OverloadedOps_B_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
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
        const __ret = ffi.C.MR_OverloadedOps_B_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_OverloadedOps_B(ffi.RAW, (__ret >>> 0), false, __owner);
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
        const __ret = ffi.C.MR_OverloadedOps_C_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_OverloadedOps_C_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
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
        const __ret = ffi.C.MR_OverloadedOps_C_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_OverloadedOps_C(ffi.RAW, (__ret >>> 0), false, __owner);
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
        const __ret = ffi.C.MR_OverloadedOps_D_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_OverloadedOps_D_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
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
        const __ret = ffi.C.MR_OverloadedOps_D_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_OverloadedOps_D(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    opMul()
    {
        const __ret = ffi.C.MR_C_deref_MR_OverloadedOps_D_ref(this.rawPointer());
        ffi.check();
        return __ret;
    }

    opDeref_const_ref()
    {
        const __ret = ffi.C.MR_C_deref_const_MR_OverloadedOps_D_ref(this.rawPointer());
        ffi.check();
        return __ret;
    }
}

export function MR_C_pos_MR_OverloadedOps_B(_1)
{
    const __ret = ffi.C.MR_C_pos_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"));
    ffi.check();
    return __ret;
}

export function MR_C_add_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_add_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_neg_MR_OverloadedOps_B(_1)
{
    const __ret = ffi.C.MR_C_neg_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"));
    ffi.check();
    return __ret;
}

export function MR_C_sub_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_sub_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_deref_MR_OverloadedOps_B(_1)
{
    const __ret = ffi.C.MR_C_deref_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"));
    ffi.check();
    return __ret;
}

export function MR_C_mul_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_mul_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_div_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_div_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_mod_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_mod_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_xor_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_xor_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_bitand_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_bitand_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_bitor_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_bitor_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_compl_MR_OverloadedOps_B(_1)
{
    const __ret = ffi.C.MR_C_compl_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"));
    ffi.check();
    return __ret;
}

export function MR_C_not_MR_OverloadedOps_B(_1)
{
    const __ret = ffi.C.MR_C_not_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"));
    ffi.check();
    return __ret;
}

export function MR_C_less_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_less_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_greater_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_greater_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_add_assign_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_add_assign_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_sub_assign_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_sub_assign_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_mul_assign_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_mul_assign_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_div_assign_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_div_assign_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_mod_assign_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_mod_assign_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_xor_assign_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_xor_assign_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_bitand_assign_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_bitand_assign_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_bitor_assign_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_bitor_assign_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_lshift_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_lshift_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_rshift_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_rshift_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_lshift_assign_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_lshift_assign_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_rshift_assign_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_rshift_assign_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_equal_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_equal_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_not_equal_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_not_equal_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_less_equal_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_less_equal_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_greater_equal_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_greater_equal_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_compare_three_way_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_compare_three_way_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_and_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_and_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_or_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_or_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_incr_MR_OverloadedOps_B(_1)
{
    const __ret = ffi.C.MR_C_incr_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"));
    ffi.check();
    return __ret;
}

export function MR_C_post_incr_MR_OverloadedOps_B(_1)
{
    const __ret = ffi.C.MR_C_post_incr_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"));
    ffi.check();
    return __ret;
}

export function MR_C_decr_MR_OverloadedOps_B(_1)
{
    const __ret = ffi.C.MR_C_decr_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"));
    ffi.check();
    return __ret;
}

export function MR_C_post_decr_MR_OverloadedOps_B(_1)
{
    const __ret = ffi.C.MR_C_post_decr_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"));
    ffi.check();
    return __ret;
}

export function MR_C_comma_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_comma_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_arrow_star_MR_OverloadedOps_B(_1, _2)
{
    const __ret = ffi.C.MR_C_arrow_star_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
    return __ret;
}

export function MR_C_add_MR_OverloadedOps_C(_1, _2)
{
    ffi.C.MR_C_add_MR_OverloadedOps_C(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
}

export function MR_C_add_MR_OverloadedOps_C_MR_OverloadedOps_B(_1, _2)
{
    ffi.C.MR_C_add_MR_OverloadedOps_C_MR_OverloadedOps_B(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
    ffi.check();
}

export function MR_C_pos_MR_OverloadedOps_D_ref(_1)
{
    const __ret = ffi.C.MR_C_pos_MR_OverloadedOps_D_ref(ffi.ptrNonNull(_1, "_1"));
    ffi.check();
    return __ret;
}

export function MR_C_pos_const_MR_OverloadedOps_D_ref(_1)
{
    const __ret = ffi.C.MR_C_pos_const_MR_OverloadedOps_D_ref(ffi.ptrNonNull(_1, "_1"));
    ffi.check();
    return __ret;
}

