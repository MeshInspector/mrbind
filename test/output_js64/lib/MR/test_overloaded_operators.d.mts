// The wrappers of the C bindings file `MR/test_overloaded_operators`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Member functions.
 * Generated from class `MR::OverloadedOps::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_OverloadedOps_A extends ffi.CppObject
{
    /**
     * Since we have a custom assignment, we also need a custom copy ctor to avoid the deprecation warning.
     * Generated from constructor `MR::OverloadedOps::A::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_OverloadedOps_A_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_OverloadedOps_A);
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Unary plus.
     * Generated from method `MR::OverloadedOps::A::operator+`.
     *
     * Calls `MR_C_pos_MR_OverloadedOps_A()`.
     */
    opAdd(): number;
    /**
     * Binary plus.
     * Generated from method `MR::OverloadedOps::A::operator+`.
     *
     * Calls `MR_C_add_MR_OverloadedOps_A()`.
     */
    opAdd(_1: L.MR_OverloadedOps_A): number;
    /** The overloads of `opAdd` are resolved at runtime by the argument types; the first declared match wins. */
    /**
     * Unary minus.
     * Generated from method `MR::OverloadedOps::A::operator-`.
     *
     * Calls `MR_C_neg_MR_OverloadedOps_A()`.
     */
    opSub(): number;
    /**
     * Binary minus.
     * Generated from method `MR::OverloadedOps::A::operator-`.
     *
     * Calls `MR_C_sub_MR_OverloadedOps_A()`.
     */
    opSub(_1: L.MR_OverloadedOps_A): number;
    /** The overloads of `opSub` are resolved at runtime by the argument types; the first declared match wins. */
    /**
     * Dereference (unary star).
     * Generated from method `MR::OverloadedOps::A::operator*`.
     *
     * Calls `MR_C_deref_MR_OverloadedOps_A()`.
     */
    opMul(): number;
    /**
     * Multiply (binary star).
     * Generated from method `MR::OverloadedOps::A::operator*`.
     *
     * Calls `MR_C_mul_MR_OverloadedOps_A()`.
     */
    opMul(_1: L.MR_OverloadedOps_A): number;
    /** The overloads of `opMul` are resolved at runtime by the argument types; the first declared match wins. */
    /**
     * Assign.
     * Generated from method `MR::OverloadedOps::A::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_OverloadedOps_A_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_OverloadedOps_A): number;
    /**
     * Unary plus.
     * Generated from method `MR::OverloadedOps::A::operator+`.
     *
     * Calls `MR_C_pos_MR_OverloadedOps_A()`.
     */
    opPos(): number;
    /**
     * Binary plus.
     * Generated from method `MR::OverloadedOps::A::operator+`.
     *
     * Calls `MR_C_add_MR_OverloadedOps_A()`.
     */
    opAdd_2(_1: L.MR_OverloadedOps_A): number;
    /**
     * Unary minus.
     * Generated from method `MR::OverloadedOps::A::operator-`.
     *
     * Calls `MR_C_neg_MR_OverloadedOps_A()`.
     */
    opNeg(): number;
    /**
     * Binary minus.
     * Generated from method `MR::OverloadedOps::A::operator-`.
     *
     * Calls `MR_C_sub_MR_OverloadedOps_A()`.
     */
    opSub_2(_1: L.MR_OverloadedOps_A): number;
    /**
     * Dereference (unary star).
     * Generated from method `MR::OverloadedOps::A::operator*`.
     *
     * Calls `MR_C_deref_MR_OverloadedOps_A()`.
     */
    opDeref(): number;
    /**
     * Multiply (binary star).
     * Generated from method `MR::OverloadedOps::A::operator*`.
     *
     * Calls `MR_C_mul_MR_OverloadedOps_A()`.
     */
    opMul_2(_1: L.MR_OverloadedOps_A): number;
    /**
     * Divide.
     * Generated from method `MR::OverloadedOps::A::operator/`.
     *
     * Calls `MR_C_div_MR_OverloadedOps_A()`.
     */
    opDiv(_1: L.MR_OverloadedOps_A): number;
    /**
     * Modulo.
     * Generated from method `MR::OverloadedOps::A::operator%`.
     *
     * Calls `MR_C_mod_MR_OverloadedOps_A()`.
     */
    opMod(_1: L.MR_OverloadedOps_A): number;
    /**
     * Bit xor.
     * Generated from method `MR::OverloadedOps::A::operator^`.
     *
     * Calls `MR_C_xor_MR_OverloadedOps_A()`.
     */
    opXor(_1: L.MR_OverloadedOps_A): number;
    /**
     * Bit and.
     * Generated from method `MR::OverloadedOps::A::operator&`.
     *
     * Calls `MR_C_bitand_MR_OverloadedOps_A()`.
     */
    opBitand(_1: L.MR_OverloadedOps_A): number;
    /**
     * Bit or.
     * Generated from method `MR::OverloadedOps::A::operator|`.
     *
     * Calls `MR_C_bitor_MR_OverloadedOps_A()`.
     */
    opBitor(_1: L.MR_OverloadedOps_A): number;
    /**
     * Bit negate.
     * Generated from method `MR::OverloadedOps::A::operator~`.
     *
     * Calls `MR_C_compl_MR_OverloadedOps_A()`.
     */
    opCompl(): number;
    /**
     * Boolean negate.
     * Generated from method `MR::OverloadedOps::A::operator!`.
     *
     * Calls `MR_C_not_MR_OverloadedOps_A()`.
     */
    opNot(): number;
    /**
     * Less.
     * Generated from method `MR::OverloadedOps::A::operator<`.
     *
     * Calls `MR_C_less_MR_OverloadedOps_A()`.
     */
    opLess(_1: L.MR_OverloadedOps_A): number;
    /**
     * Greater.
     * Generated from method `MR::OverloadedOps::A::operator>`.
     *
     * Calls `MR_C_greater_MR_OverloadedOps_A()`.
     */
    opGreater(_1: L.MR_OverloadedOps_A): number;
    /**
     * Plus assign.
     * Generated from method `MR::OverloadedOps::A::operator+=`.
     *
     * Calls `MR_OverloadedOps_A_add_assign()`.
     */
    add_assign(_1: L.MR_OverloadedOps_A): number;
    /**
     * Minus assign.
     * Generated from method `MR::OverloadedOps::A::operator-=`.
     *
     * Calls `MR_OverloadedOps_A_sub_assign()`.
     */
    sub_assign(_1: L.MR_OverloadedOps_A): number;
    /**
     * Multiply assign.
     * Generated from method `MR::OverloadedOps::A::operator*=`.
     *
     * Calls `MR_OverloadedOps_A_mul_assign()`.
     */
    mul_assign(_1: L.MR_OverloadedOps_A): number;
    /**
     * Divide assign.
     * Generated from method `MR::OverloadedOps::A::operator/=`.
     *
     * Calls `MR_OverloadedOps_A_div_assign()`.
     */
    div_assign(_1: L.MR_OverloadedOps_A): number;
    /**
     * Modulo assign.
     * Generated from method `MR::OverloadedOps::A::operator%=`.
     *
     * Calls `MR_OverloadedOps_A_mod_assign()`.
     */
    mod_assign(_1: L.MR_OverloadedOps_A): number;
    /**
     * Bit xor assign.
     * Generated from method `MR::OverloadedOps::A::operator^=`.
     *
     * Calls `MR_OverloadedOps_A_xor_assign()`.
     */
    xor_assign(_1: L.MR_OverloadedOps_A): number;
    /**
     * Bit and assign.
     * Generated from method `MR::OverloadedOps::A::operator&=`.
     *
     * Calls `MR_OverloadedOps_A_bitand_assign()`.
     */
    bitand_assign(_1: L.MR_OverloadedOps_A): number;
    /**
     * Bit or assign.
     * Generated from method `MR::OverloadedOps::A::operator|=`.
     *
     * Calls `MR_OverloadedOps_A_bitor_assign()`.
     */
    bitor_assign(_1: L.MR_OverloadedOps_A): number;
    /**
     * Left shift.
     * Generated from method `MR::OverloadedOps::A::operator<<`.
     *
     * Calls `MR_C_lshift_MR_OverloadedOps_A()`.
     */
    opLshift(_1: L.MR_OverloadedOps_A): number;
    /**
     * Right shift.
     * Generated from method `MR::OverloadedOps::A::operator>>`.
     *
     * Calls `MR_C_rshift_MR_OverloadedOps_A()`.
     */
    opRshift(_1: L.MR_OverloadedOps_A): number;
    /**
     * Left shift assign.
     * Generated from method `MR::OverloadedOps::A::operator<<=`.
     *
     * Calls `MR_OverloadedOps_A_lshift_assign()`.
     */
    lshift_assign(_1: L.MR_OverloadedOps_A): number;
    /**
     * Right shift assign.
     * Generated from method `MR::OverloadedOps::A::operator>>=`.
     *
     * Calls `MR_OverloadedOps_A_rshift_assign()`.
     */
    rshift_assign(_1: L.MR_OverloadedOps_A): number;
    /**
     * Equal.
     * Generated from method `MR::OverloadedOps::A::operator==`.
     *
     * Calls `MR_C_equal_MR_OverloadedOps_A()`.
     */
    opEqual(_1: L.MR_OverloadedOps_A): number;
    /**
     * Not equal.
     * Generated from method `MR::OverloadedOps::A::operator!=`.
     *
     * Calls `MR_C_not_equal_MR_OverloadedOps_A()`.
     */
    opNotEqual(_1: L.MR_OverloadedOps_A): number;
    /**
     * Less equal.
     * Generated from method `MR::OverloadedOps::A::operator<=`.
     *
     * Calls `MR_C_less_equal_MR_OverloadedOps_A()`.
     */
    opLessEqual(_1: L.MR_OverloadedOps_A): number;
    /**
     * Greater equal.
     * Generated from method `MR::OverloadedOps::A::operator>=`.
     *
     * Calls `MR_C_greater_equal_MR_OverloadedOps_A()`.
     */
    opGreaterEqual(_1: L.MR_OverloadedOps_A): number;
    /**
     * Compare three way.
     * Generated from method `MR::OverloadedOps::A::operator<=>`.
     *
     * Calls `MR_C_compare_three_way_MR_OverloadedOps_A()`.
     */
    opCompareThreeWay(_1: L.MR_OverloadedOps_A): number;
    /**
     * And.
     * Generated from method `MR::OverloadedOps::A::operator&&`.
     *
     * Calls `MR_C_and_MR_OverloadedOps_A()`.
     */
    opAnd(_1: L.MR_OverloadedOps_A): number;
    /**
     * Or.
     * Generated from method `MR::OverloadedOps::A::operator||`.
     *
     * Calls `MR_C_or_MR_OverloadedOps_A()`.
     */
    opOr(_1: L.MR_OverloadedOps_A): number;
    /**
     * Pre-increment.
     * Generated from method `MR::OverloadedOps::A::operator++`.
     *
     * Calls `MR_C_incr_MR_OverloadedOps_A()`.
     */
    opIncr(): number;
    /**
     * Post-increment.
     * Generated from method `MR::OverloadedOps::A::operator++`.
     *
     * Calls `MR_C_post_incr_MR_OverloadedOps_A()`.
     */
    opPostIncr(): number;
    /**
     * Pre-decrement.
     * Generated from method `MR::OverloadedOps::A::operator--`.
     *
     * Calls `MR_C_decr_MR_OverloadedOps_A()`.
     */
    opDecr(): number;
    /**
     * Post-decrement.
     * Generated from method `MR::OverloadedOps::A::operator--`.
     *
     * Calls `MR_C_post_decr_MR_OverloadedOps_A()`.
     */
    opPostDecr(): number;
    /**
     * Comma.
     * Generated from method `MR::OverloadedOps::A::operator,`.
     *
     * Calls `MR_C_comma_MR_OverloadedOps_A()`.
     */
    opComma(_1: L.MR_OverloadedOps_A): number;
    /**
     * Arrow star.
     * Generated from method `MR::OverloadedOps::A::operator->*`.
     *
     * Calls `MR_OverloadedOps_A_arrow_star()`.
     */
    arrow_star(_1: L.MR_OverloadedOps_A): number;
    /**
     * Arrow.
     * Generated from method `MR::OverloadedOps::A::operator->`.
     *
     * Calls `MR_OverloadedOps_A_arrow()`.
     */
    arrow(): number;
    /**
     * Function call.
     * Generated from method `MR::OverloadedOps::A::operator()`.
     *
     * Calls `MR_OverloadedOps_A_call()`.
     */
    call(_1: L.MR_OverloadedOps_A): number;
    /**
     * Indexing.
     * Generated from method `MR::OverloadedOps::A::operator[]`.
     *
     * Calls `MR_OverloadedOps_A_index()`.
     */
    index(_1: L.MR_OverloadedOps_A): number;
}

/**
 * Free functions.
 * Generated from class `MR::OverloadedOps::B`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_OverloadedOps_B extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_OverloadedOps_B_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::OverloadedOps::B::B`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_OverloadedOps_B_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_OverloadedOps_B);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::OverloadedOps::B::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_OverloadedOps_B_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_OverloadedOps_B): L.MR_OverloadedOps_B;
}

/**
 * Test how the names are generated.
 * Generated from class `MR::OverloadedOps::C`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_OverloadedOps_C extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_OverloadedOps_C_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::OverloadedOps::C::C`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_OverloadedOps_C_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_OverloadedOps_C);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::OverloadedOps::C::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_OverloadedOps_C_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_OverloadedOps_C): L.MR_OverloadedOps_C;
}

/**
 * Generated from class `MR::OverloadedOps::D`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_OverloadedOps_D extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_OverloadedOps_D_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::OverloadedOps::D::D`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_OverloadedOps_D_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_OverloadedOps_D);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::OverloadedOps::D::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_OverloadedOps_D_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_OverloadedOps_D): L.MR_OverloadedOps_D;
    /**
     * Disambiguating the names.
     * Generated from method `MR::OverloadedOps::D::operator*`.
     *
     * Calls `MR_C_deref_MR_OverloadedOps_D_ref()`.
     */
    opMul(): number;
    /**
     * Generated from method `MR::OverloadedOps::D::operator*`.
     *
     * Calls `MR_C_deref_const_MR_OverloadedOps_D_ref()`.
     */
    opDeref_const_ref(): number;
}

/**
 * Unary plus.
 * Generated from function `MR::OverloadedOps::operator+`.
 *
 * Calls `MR_C_pos_MR_OverloadedOps_B()`.
 */
export declare function MR_C_pos_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B): number;

/**
 * Binary plus.
 * Generated from function `MR::OverloadedOps::operator+`.
 *
 * Calls `MR_C_add_MR_OverloadedOps_B()`.
 */
export declare function MR_C_add_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * Unary minus.
 * Generated from function `MR::OverloadedOps::operator-`.
 *
 * Calls `MR_C_neg_MR_OverloadedOps_B()`.
 */
export declare function MR_C_neg_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B): number;

/**
 * Binary minus.
 * Generated from function `MR::OverloadedOps::operator-`.
 *
 * Calls `MR_C_sub_MR_OverloadedOps_B()`.
 */
export declare function MR_C_sub_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * Dereference (unary star).
 * Generated from function `MR::OverloadedOps::operator*`.
 *
 * Calls `MR_C_deref_MR_OverloadedOps_B()`.
 */
export declare function MR_C_deref_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B): number;

/**
 * Multiply (binary star).
 * Generated from function `MR::OverloadedOps::operator*`.
 *
 * Calls `MR_C_mul_MR_OverloadedOps_B()`.
 */
export declare function MR_C_mul_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * Divide.
 * Generated from function `MR::OverloadedOps::operator/`.
 *
 * Calls `MR_C_div_MR_OverloadedOps_B()`.
 */
export declare function MR_C_div_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * Modulo.
 * Generated from function `MR::OverloadedOps::operator%`.
 *
 * Calls `MR_C_mod_MR_OverloadedOps_B()`.
 */
export declare function MR_C_mod_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * Bit xor.
 * Generated from function `MR::OverloadedOps::operator^`.
 *
 * Calls `MR_C_xor_MR_OverloadedOps_B()`.
 */
export declare function MR_C_xor_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * Bit and.
 * Generated from function `MR::OverloadedOps::operator&`.
 *
 * Calls `MR_C_bitand_MR_OverloadedOps_B()`.
 */
export declare function MR_C_bitand_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * Bit or.
 * Generated from function `MR::OverloadedOps::operator|`.
 *
 * Calls `MR_C_bitor_MR_OverloadedOps_B()`.
 */
export declare function MR_C_bitor_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * Bit negate.
 * Generated from function `MR::OverloadedOps::operator~`.
 *
 * Calls `MR_C_compl_MR_OverloadedOps_B()`.
 */
export declare function MR_C_compl_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B): number;

/**
 * Boolean negate.
 * Generated from function `MR::OverloadedOps::operator!`.
 *
 * Calls `MR_C_not_MR_OverloadedOps_B()`.
 */
export declare function MR_C_not_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B): number;

/**
 * Assign.
 * friend int operator=(B, B); // Can't be a free function.
 * Less.
 * Generated from function `MR::OverloadedOps::operator<`.
 *
 * Calls `MR_C_less_MR_OverloadedOps_B()`.
 */
export declare function MR_C_less_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * Greater.
 * Generated from function `MR::OverloadedOps::operator>`.
 *
 * Calls `MR_C_greater_MR_OverloadedOps_B()`.
 */
export declare function MR_C_greater_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * Plus assign.
 * Generated from function `MR::OverloadedOps::operator+=`.
 *
 * Calls `MR_C_add_assign_MR_OverloadedOps_B()`.
 */
export declare function MR_C_add_assign_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * Minus assign.
 * Generated from function `MR::OverloadedOps::operator-=`.
 *
 * Calls `MR_C_sub_assign_MR_OverloadedOps_B()`.
 */
export declare function MR_C_sub_assign_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * Multiply assign.
 * Generated from function `MR::OverloadedOps::operator*=`.
 *
 * Calls `MR_C_mul_assign_MR_OverloadedOps_B()`.
 */
export declare function MR_C_mul_assign_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * Divide assign.
 * Generated from function `MR::OverloadedOps::operator/=`.
 *
 * Calls `MR_C_div_assign_MR_OverloadedOps_B()`.
 */
export declare function MR_C_div_assign_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * Modulo assign.
 * Generated from function `MR::OverloadedOps::operator%=`.
 *
 * Calls `MR_C_mod_assign_MR_OverloadedOps_B()`.
 */
export declare function MR_C_mod_assign_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * Bit xor assign.
 * Generated from function `MR::OverloadedOps::operator^=`.
 *
 * Calls `MR_C_xor_assign_MR_OverloadedOps_B()`.
 */
export declare function MR_C_xor_assign_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * Bit and assign.
 * Generated from function `MR::OverloadedOps::operator&=`.
 *
 * Calls `MR_C_bitand_assign_MR_OverloadedOps_B()`.
 */
export declare function MR_C_bitand_assign_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * Bit or assign.
 * Generated from function `MR::OverloadedOps::operator|=`.
 *
 * Calls `MR_C_bitor_assign_MR_OverloadedOps_B()`.
 */
export declare function MR_C_bitor_assign_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * Left shift.
 * Generated from function `MR::OverloadedOps::operator<<`.
 *
 * Calls `MR_C_lshift_MR_OverloadedOps_B()`.
 */
export declare function MR_C_lshift_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * Right shift.
 * Generated from function `MR::OverloadedOps::operator>>`.
 *
 * Calls `MR_C_rshift_MR_OverloadedOps_B()`.
 */
export declare function MR_C_rshift_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * Left shift assign.
 * Generated from function `MR::OverloadedOps::operator<<=`.
 *
 * Calls `MR_C_lshift_assign_MR_OverloadedOps_B()`.
 */
export declare function MR_C_lshift_assign_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * Right shift assign.
 * Generated from function `MR::OverloadedOps::operator>>=`.
 *
 * Calls `MR_C_rshift_assign_MR_OverloadedOps_B()`.
 */
export declare function MR_C_rshift_assign_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * Equal.
 * Generated from function `MR::OverloadedOps::operator==`.
 *
 * Calls `MR_C_equal_MR_OverloadedOps_B()`.
 */
export declare function MR_C_equal_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * Not equal.
 * Generated from function `MR::OverloadedOps::operator!=`.
 *
 * Calls `MR_C_not_equal_MR_OverloadedOps_B()`.
 */
export declare function MR_C_not_equal_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * Less equal.
 * Generated from function `MR::OverloadedOps::operator<=`.
 *
 * Calls `MR_C_less_equal_MR_OverloadedOps_B()`.
 */
export declare function MR_C_less_equal_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * Greater equal.
 * Generated from function `MR::OverloadedOps::operator>=`.
 *
 * Calls `MR_C_greater_equal_MR_OverloadedOps_B()`.
 */
export declare function MR_C_greater_equal_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * Compare three way.
 * Generated from function `MR::OverloadedOps::operator<=>`.
 *
 * Calls `MR_C_compare_three_way_MR_OverloadedOps_B()`.
 */
export declare function MR_C_compare_three_way_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * And.
 * Generated from function `MR::OverloadedOps::operator&&`.
 *
 * Calls `MR_C_and_MR_OverloadedOps_B()`.
 */
export declare function MR_C_and_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * Or.
 * Generated from function `MR::OverloadedOps::operator||`.
 *
 * Calls `MR_C_or_MR_OverloadedOps_B()`.
 */
export declare function MR_C_or_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * Pre-increment.
 * Generated from function `MR::OverloadedOps::operator++`.
 *
 * Calls `MR_C_incr_MR_OverloadedOps_B()`.
 */
export declare function MR_C_incr_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B): number;

/**
 * Post-increment.
 * Generated from function `MR::OverloadedOps::operator++`.
 *
 * Calls `MR_C_post_incr_MR_OverloadedOps_B()`.
 */
export declare function MR_C_post_incr_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B): number;

/**
 * Pre-decrement.
 * Generated from function `MR::OverloadedOps::operator--`.
 *
 * Calls `MR_C_decr_MR_OverloadedOps_B()`.
 */
export declare function MR_C_decr_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B): number;

/**
 * Post-decrement.
 * Generated from function `MR::OverloadedOps::operator--`.
 *
 * Calls `MR_C_post_decr_MR_OverloadedOps_B()`.
 */
export declare function MR_C_post_decr_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B): number;

/**
 * Comma.
 * Generated from function `MR::OverloadedOps::operator,`.
 *
 * Calls `MR_C_comma_MR_OverloadedOps_B()`.
 */
export declare function MR_C_comma_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * Arrow star.
 * Generated from function `MR::OverloadedOps::operator->*`.
 *
 * Calls `MR_C_arrow_star_MR_OverloadedOps_B()`.
 */
export declare function MR_C_arrow_star_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_B, _2: L.MR_OverloadedOps_B): number;

/**
 * If rhs type is same as the lhs one (ignoring cvref), it's not emitted.
 * Generated from function `MR::OverloadedOps::operator+`.
 *
 * Calls `MR_C_add_MR_OverloadedOps_C()`.
 */
export declare function MR_C_add_MR_OverloadedOps_C(_1: L.MR_OverloadedOps_C, _2: L.MR_OverloadedOps_C): void;

/**
 * But different types are printed.
 * Generated from function `MR::OverloadedOps::operator+`.
 *
 * Calls `MR_C_add_MR_OverloadedOps_C_MR_OverloadedOps_B()`.
 */
export declare function MR_C_add_MR_OverloadedOps_C_MR_OverloadedOps_B(_1: L.MR_OverloadedOps_C, _2: L.MR_OverloadedOps_B): void;

/**
 * Generated from function `MR::OverloadedOps::operator+`.
 *
 * Calls `MR_C_pos_MR_OverloadedOps_D_ref()`.
 */
export declare function MR_C_pos_MR_OverloadedOps_D_ref(_1: L.MR_OverloadedOps_D): number;

/**
 * Generated from function `MR::OverloadedOps::operator+`.
 *
 * Calls `MR_C_pos_const_MR_OverloadedOps_D_ref()`.
 */
export declare function MR_C_pos_const_MR_OverloadedOps_D_ref(_1: L.MR_OverloadedOps_D): number;

