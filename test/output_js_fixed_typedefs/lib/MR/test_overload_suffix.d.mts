// The wrappers of the C bindings file `MR/test_overload_suffix`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::OverloadSuffix::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_OverloadSuffix_A extends ffi.CppObject
{
    /**
     * Generated from constructor `MR::OverloadSuffix::A::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_OverloadSuffix_A_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_OverloadSuffix_A);
    /**
     * Generated from constructor `MR::OverloadSuffix::A::A`.
     *
     * Calls `MR_OverloadSuffix_A_Construct_1_int32_t()`.
     */
    constructor(_1: number);
    /**
     * Generated from constructor `MR::OverloadSuffix::A::A`.
     *
     * Calls `MR_OverloadSuffix_A_Construct_2()`.
     */
    constructor(_1: number, _2: number);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /**
     * Generated from constructor `MR::OverloadSuffix::A::A`.
     *
     * Calls `MR_OverloadSuffix_A_Construct_1_float()`.
     */
    static construct_1_float(_1: number): L.MR_OverloadSuffix_A;
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::OverloadSuffix::A::foo`.
     *
     * Calls `MR_OverloadSuffix_A_foo_1_int32_t()`.
     */
    foo(_1: number): void;
    /**
     * Generated from method `MR::OverloadSuffix::A::foo`.
     *
     * Calls `MR_OverloadSuffix_A_foo_2()`.
     */
    foo(_1: number, _2: number): void;
    /** The overloads of `foo` are resolved at runtime by the argument types; the first declared match wins. */
    /**
     * Generated from method `MR::OverloadSuffix::A::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_OverloadSuffix_A_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_OverloadSuffix_A): L.MR_OverloadSuffix_A;
    /**
     * Generated from method `MR::OverloadSuffix::A::foo`.
     *
     * Calls `MR_OverloadSuffix_A_foo_1_int32_t()`.
     */
    foo_1_int32_t(_1: number): void;
    /**
     * Generated from method `MR::OverloadSuffix::A::foo`.
     *
     * Calls `MR_OverloadSuffix_A_foo_1_float()`.
     */
    foo_1_float(_1: number): void;
    /**
     * Generated from method `MR::OverloadSuffix::A::foo`.
     *
     * Calls `MR_OverloadSuffix_A_foo_2()`.
     */
    foo_2(_1: number, _2: number): void;
    /**
     * Generated from method `MR::OverloadSuffix::A::operator-`.
     *
     * Calls `MR_C_sub_MR_OverloadSuffix_A_int32_t()`.
     */
    opSub(_1: number): void;
    /**
     * Generated from method `MR::OverloadSuffix::A::operator-`.
     *
     * Calls `MR_C_sub_MR_OverloadSuffix_A_float()`.
     */
    opSub_float(_1: number): void;
    /**
     * Generated from method `MR::OverloadSuffix::A::operator[]`.
     *
     * Calls `MR_OverloadSuffix_A_index_int32_t()`.
     */
    index_int32_t(_1: number): void;
    /**
     * Generated from method `MR::OverloadSuffix::A::operator[]`.
     *
     * Calls `MR_OverloadSuffix_A_index_float()`.
     */
    index_float(_1: number): void;
}

/**
 * Generated from class `MR::OverloadSuffix::B`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_OverloadSuffix_B extends ffi.CppObject
{
    /**
     * Generated from constructor `MR::OverloadSuffix::B::B`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_OverloadSuffix_B_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_OverloadSuffix_B);
    /**
     * Generated from constructor `MR::OverloadSuffix::B::B`.
     *
     * Calls `MR_OverloadSuffix_B_Construct()`.
     */
    constructor(_1: number);
    /**
     * Generated from constructor `MR::OverloadSuffix::B::B`.
     *
     * Calls `MR_OverloadSuffix_B_Construct_2()`.
     */
    constructor(_1: number, _2: number);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /**
     * Generated from constructor `MR::OverloadSuffix::B::B`.
     *
     * Calls `MR_OverloadSuffix_B_Construct_1()`.
     */
    static construct_1(_1: number): L.MR_OverloadSuffix_B;
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::OverloadSuffix::B::foo`.
     *
     * Calls `MR_OverloadSuffix_B_foo()`.
     */
    foo(_1: number): void;
    /**
     * Generated from method `MR::OverloadSuffix::B::foo`.
     *
     * Calls `MR_OverloadSuffix_B_foo_2()`.
     */
    foo(_1: number, _2: number): void;
    /** The overloads of `foo` are resolved at runtime by the argument types; the first declared match wins. */
    /**
     * Generated from method `MR::OverloadSuffix::B::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_OverloadSuffix_B_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_OverloadSuffix_B): L.MR_OverloadSuffix_B;
    /**
     * Generated from method `MR::OverloadSuffix::B::foo`.
     *
     * Calls `MR_OverloadSuffix_B_foo()`.
     */
    foo_2(_1: number): void;
    /**
     * Generated from method `MR::OverloadSuffix::B::foo`.
     *
     * Calls `MR_OverloadSuffix_B_foo_1()`.
     */
    foo_1(_1: number): void;
    /**
     * Generated from method `MR::OverloadSuffix::B::foo`.
     *
     * Calls `MR_OverloadSuffix_B_foo_2()`.
     */
    foo_2_2(_1: number, _2: number): void;
    /**
     * Currently has no effect on those.
     * Generated from method `MR::OverloadSuffix::B::operator-`.
     *
     * Calls `MR_C_sub_MR_OverloadSuffix_B_int32_t()`.
     */
    opSub(_1: number): void;
    /**
     * Generated from method `MR::OverloadSuffix::B::operator-`.
     *
     * Calls `MR_C_sub_MR_OverloadSuffix_B_float()`.
     */
    opSub_float(_1: number): void;
    /**
     * Works on those, though.
     * Generated from method `MR::OverloadSuffix::B::operator[]`.
     *
     * Calls `MR_OverloadSuffix_B_index()`.
     */
    index(_1: number): void;
    /**
     * Generated from method `MR::OverloadSuffix::B::operator[]`.
     *
     * Calls `MR_OverloadSuffix_B_index_float()`.
     */
    index_float(_1: number): void;
}

/**
 * Generated from class `MR::OverloadSuffix::C`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_OverloadSuffix_C extends ffi.CppObject
{
    /**
     * Generated from constructor `MR::OverloadSuffix::C::C`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_OverloadSuffix_C_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_OverloadSuffix_C);
    /**
     * Generated from constructor `MR::OverloadSuffix::C::C`.
     *
     * Calls `MR_OverloadSuffix_C_Construct_blah()`.
     */
    constructor(_1: number);
    /**
     * Generated from constructor `MR::OverloadSuffix::C::C`.
     *
     * Calls `MR_OverloadSuffix_C_Construct_2()`.
     */
    constructor(_1: number, _2: number);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /**
     * Generated from constructor `MR::OverloadSuffix::C::C`.
     *
     * Calls `MR_OverloadSuffix_C_Construct_1()`.
     */
    static construct_1(_1: number): L.MR_OverloadSuffix_C;
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::OverloadSuffix::C::foo`.
     *
     * Calls `MR_OverloadSuffix_C_foo_blah()`.
     */
    foo(_1: number): void;
    /**
     * Generated from method `MR::OverloadSuffix::C::foo`.
     *
     * Calls `MR_OverloadSuffix_C_foo_2()`.
     */
    foo(_1: number, _2: number): void;
    /** The overloads of `foo` are resolved at runtime by the argument types; the first declared match wins. */
    /**
     * Generated from method `MR::OverloadSuffix::C::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_OverloadSuffix_C_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_OverloadSuffix_C): L.MR_OverloadSuffix_C;
    /**
     * Generated from method `MR::OverloadSuffix::C::foo`.
     *
     * Calls `MR_OverloadSuffix_C_foo_blah()`.
     */
    foo_blah(_1: number): void;
    /**
     * Generated from method `MR::OverloadSuffix::C::foo`.
     *
     * Calls `MR_OverloadSuffix_C_foo_1()`.
     */
    foo_1(_1: number): void;
    /**
     * Generated from method `MR::OverloadSuffix::C::foo`.
     *
     * Calls `MR_OverloadSuffix_C_foo_2()`.
     */
    foo_2(_1: number, _2: number): void;
    /**
     * Currently has no effect on those.
     * Generated from method `MR::OverloadSuffix::C::operator-`.
     *
     * Calls `MR_C_sub_MR_OverloadSuffix_C_int32_t()`.
     */
    opSub(_1: number): void;
    /**
     * Generated from method `MR::OverloadSuffix::C::operator-`.
     *
     * Calls `MR_C_sub_MR_OverloadSuffix_C_float()`.
     */
    opSub_float(_1: number): void;
    /**
     * Works on those, though.
     * Generated from method `MR::OverloadSuffix::C::operator[]`.
     *
     * Calls `MR_OverloadSuffix_C_index_blah()`.
     */
    index_blah(_1: number): void;
    /**
     * Generated from method `MR::OverloadSuffix::C::operator[]`.
     *
     * Calls `MR_OverloadSuffix_C_index()`.
     */
    index(_1: number): void;
}

/**
 * Just normal stuff with no annotations:
 * Generated from function `MR::OverloadSuffix::foo_a`.
 *
 * Calls `MR_OverloadSuffix_foo_a_1_int32_t()`.
 */
export declare function MR_OverloadSuffix_foo_a_1_int32_t(_1: number): void;

/**
 * Generated from function `MR::OverloadSuffix::foo_a`.
 *
 * Calls `MR_OverloadSuffix_foo_a_1_float()`.
 */
export declare function MR_OverloadSuffix_foo_a_1_float(_1: number): void;

/**
 * Generated from function `MR::OverloadSuffix::foo_a`.
 *
 * Calls `MR_OverloadSuffix_foo_a_2()`.
 */
export declare function MR_OverloadSuffix_foo_a_2(_1: number, _2: number): void;

/**
 * Generated from function `MR::OverloadSuffix::bar_a`.
 *
 * Calls `MR_OverloadSuffix_bar_a_int32_t()`.
 */
export declare function MR_OverloadSuffix_bar_a_int32_t(_1: number): void;

/**
 * Generated from function `MR::OverloadSuffix::bar_a`.
 *
 * Calls `MR_OverloadSuffix_bar_a_float()`.
 */
export declare function MR_OverloadSuffix_bar_a_float(_1: number): void;

/**
 * Generated from function `MR::OverloadSuffix::baz_a`.
 *
 * Calls `MR_OverloadSuffix_baz_a_1()`.
 */
export declare function MR_OverloadSuffix_baz_a_1(_1: number): void;

/**
 * Generated from function `MR::OverloadSuffix::baz_a`.
 *
 * Calls `MR_OverloadSuffix_baz_a_2()`.
 */
export declare function MR_OverloadSuffix_baz_a_2(_1: number, _2: number): void;

/**
 * Generated from function `MR::OverloadSuffix::operator+`.
 *
 * Calls `MR_C_pos_MR_OverloadSuffix_A_ref()`.
 */
export declare function MR_C_pos_MR_OverloadSuffix_A_ref(_1: L.MR_OverloadSuffix_A): void;

/**
 * Generated from function `MR::OverloadSuffix::operator+`.
 *
 * Calls `MR_C_pos_const_MR_OverloadSuffix_A_ref()`.
 */
export declare function MR_C_pos_const_MR_OverloadSuffix_A_ref(_1: L.MR_OverloadSuffix_A): void;

/**
 * With empty suffix:
 * Generated from function `MR::OverloadSuffix::foo_b`.
 *
 * Calls `MR_OverloadSuffix_foo_b()`.
 */
export declare function MR_OverloadSuffix_foo_b(_1: number): void;

/**
 * Generated from function `MR::OverloadSuffix::foo_b`.
 *
 * Calls `MR_OverloadSuffix_foo_b_1()`.
 */
export declare function MR_OverloadSuffix_foo_b_1(_1: number): void;

/**
 * Generated from function `MR::OverloadSuffix::foo_b`.
 *
 * Calls `MR_OverloadSuffix_foo_b_2()`.
 */
export declare function MR_OverloadSuffix_foo_b_2(_1: number, _2: number): void;

/**
 * Generated from function `MR::OverloadSuffix::bar_b`.
 *
 * Calls `MR_OverloadSuffix_bar_b()`.
 */
export declare function MR_OverloadSuffix_bar_b(_1: number): void;

/**
 * Generated from function `MR::OverloadSuffix::bar_b`.
 *
 * Calls `MR_OverloadSuffix_bar_b_float()`.
 */
export declare function MR_OverloadSuffix_bar_b_float(_1: number): void;

/**
 * Generated from function `MR::OverloadSuffix::baz_b`.
 *
 * Calls `MR_OverloadSuffix_baz_b()`.
 */
export declare function MR_OverloadSuffix_baz_b(_1: number): void;

/**
 * Generated from function `MR::OverloadSuffix::baz_b`.
 *
 * Calls `MR_OverloadSuffix_baz_b_int32_t()`.
 */
export declare function MR_OverloadSuffix_baz_b_int32_t(_1: number, _2: number): void;

/**
 * Currently has no effect on those.
 * Generated from function `MR::OverloadSuffix::operator+`.
 *
 * Calls `MR_C_pos_MR_OverloadSuffix_B_ref()`.
 */
export declare function MR_C_pos_MR_OverloadSuffix_B_ref(_1: L.MR_OverloadSuffix_B): void;

/**
 * Generated from function `MR::OverloadSuffix::operator+`.
 *
 * Calls `MR_C_pos_const_MR_OverloadSuffix_B_ref()`.
 */
export declare function MR_C_pos_const_MR_OverloadSuffix_B_ref(_1: L.MR_OverloadSuffix_B): void;

/**
 * With custom suffix:
 * Generated from function `MR::OverloadSuffix::foo_c`.
 *
 * Calls `MR_OverloadSuffix_foo_c_blah()`.
 */
export declare function MR_OverloadSuffix_foo_c_blah(_1: number): void;

/**
 * Generated from function `MR::OverloadSuffix::foo_c`.
 *
 * Calls `MR_OverloadSuffix_foo_c_1()`.
 */
export declare function MR_OverloadSuffix_foo_c_1(_1: number): void;

/**
 * Generated from function `MR::OverloadSuffix::foo_c`.
 *
 * Calls `MR_OverloadSuffix_foo_c_2()`.
 */
export declare function MR_OverloadSuffix_foo_c_2(_1: number, _2: number): void;

/**
 * Generated from function `MR::OverloadSuffix::bar_c`.
 *
 * Calls `MR_OverloadSuffix_bar_c_blah()`.
 */
export declare function MR_OverloadSuffix_bar_c_blah(_1: number): void;

/**
 * Generated from function `MR::OverloadSuffix::bar_c`.
 *
 * Calls `MR_OverloadSuffix_bar_c()`.
 */
export declare function MR_OverloadSuffix_bar_c(_1: number): void;

/**
 * Generated from function `MR::OverloadSuffix::baz_c`.
 *
 * Calls `MR_OverloadSuffix_baz_c_blah()`.
 */
export declare function MR_OverloadSuffix_baz_c_blah(_1: number): void;

/**
 * Generated from function `MR::OverloadSuffix::baz_c`.
 *
 * Calls `MR_OverloadSuffix_baz_c()`.
 */
export declare function MR_OverloadSuffix_baz_c(_1: number, _2: number): void;

/**
 * Currently has no effect on those.
 * Generated from function `MR::OverloadSuffix::operator+`.
 *
 * Calls `MR_C_pos_MR_OverloadSuffix_C_ref()`.
 */
export declare function MR_C_pos_MR_OverloadSuffix_C_ref(_1: L.MR_OverloadSuffix_C): void;

/**
 * Generated from function `MR::OverloadSuffix::operator+`.
 *
 * Calls `MR_C_pos_const_MR_OverloadSuffix_C_ref()`.
 */
export declare function MR_C_pos_const_MR_OverloadSuffix_C_ref(_1: L.MR_OverloadSuffix_C): void;

