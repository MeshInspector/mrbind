// The wrappers of the C bindings file `MR/test_mention_blacklists`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::SignatureFilters::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_SignatureFilters_A extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_SignatureFilters_A_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::SignatureFilters::A::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_SignatureFilters_A_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_SignatureFilters_A);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::SignatureFilters::A::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_SignatureFilters_A_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_SignatureFilters_A): L.MR_SignatureFilters_A;
}

/**
 * Generated from class `MR::SignatureFilters::Blah`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_SignatureFilters_Blah extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::SignatureFilters::Blah` named `a`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_SignatureFilters_Blah_Get_a()`.
     */
    a: L.MR_SignatureFilters_A;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_SignatureFilters_Blah_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::SignatureFilters::Blah::Blah`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_SignatureFilters_Blah_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_SignatureFilters_Blah);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::SignatureFilters::Blah::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_SignatureFilters_Blah_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_SignatureFilters_Blah): L.MR_SignatureFilters_Blah;
}

/**
 * Generated from function `MR::SignatureFilters::foo`.
 *
 * Calls `MR_SignatureFilters_foo_1()`.
 */
export declare function MR_SignatureFilters_foo_1(_1: L.MR_SignatureFilters_A): void;

/**
 * Generated from function `MR::SignatureFilters::foo`.
 *
 * Calls `MR_SignatureFilters_foo_0()`.
 */
export declare function MR_SignatureFilters_foo_0(): L.MR_SignatureFilters_A;

/**
 * Generated from function `MR::SignatureFilters::foo2`.
 *
 * Calls `MR_SignatureFilters_foo2_1()`.
 */
export declare function MR_SignatureFilters_foo2_1(_1: L.MR_SignatureFilters_A): void;

/**
 * Generated from function `MR::SignatureFilters::foo2`.
 *
 * Calls `MR_SignatureFilters_foo2_0()`.
 */
export declare function MR_SignatureFilters_foo2_0(): L.MR_SignatureFilters_A;

/**
 * Generated from function `MR::SignatureFilters::foo3`.
 *
 * Calls `MR_SignatureFilters_foo3_1()`.
 */
export declare function MR_SignatureFilters_foo3_1(_1: L.MR_SignatureFilters_A): void;

/**
 * Generated from function `MR::SignatureFilters::foo3`.
 *
 * Calls `MR_SignatureFilters_foo3_0()`.
 */
export declare function MR_SignatureFilters_foo3_0(): L.MR_SignatureFilters_A;

/**
 * Generated from function `MR::SignatureFilters::foo4`.
 *
 * Calls `MR_SignatureFilters_foo4_1()`.
 */
export declare function MR_SignatureFilters_foo4_1(_1: L.MR_SignatureFilters_A): void;

/**
 * Generated from function `MR::SignatureFilters::foo4`.
 *
 * Calls `MR_SignatureFilters_foo4_0()`.
 */
export declare function MR_SignatureFilters_foo4_0(): L.MR_SignatureFilters_A;

/**
 * Generated from function `MR::SignatureFilters::foo5`.
 *
 * Calls `MR_SignatureFilters_foo5_1()`.
 */
export declare function MR_SignatureFilters_foo5_1(_1: L.MR_SignatureFilters_A): void;

/**
 * Generated from function `MR::SignatureFilters::foo5`.
 *
 * Calls `MR_SignatureFilters_foo5_0()`.
 */
export declare function MR_SignatureFilters_foo5_0(): L.MR_SignatureFilters_A;

