// The wrappers of the C bindings file `MR/test_nested_types`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * A C++ enum: the constants are numbers, so this also holds values that aren't named constants.
 */
export declare enum MR_NestedTypes_A_E
{
}

/**
 * Generated from class `MR::NestedTypes::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_NestedTypes_A extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::NestedTypes::A` named `b`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_NestedTypes_A_Get_b()`.
     */
    b: L.MR_NestedTypes_A_B;
    /**
     * Returns a pointer to a member variable of class `MR::NestedTypes::A` named `e`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_NestedTypes_A_Get_e()`.
     */
    e: L.MR_NestedTypes_A_E;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_NestedTypes_A_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs `MR::NestedTypes::A` elementwise.
     * The reference to the parameter `b` might be preserved in the constructed object.
     * The reference to the parameter `e` might be preserved in the constructed object.
     *
     * Calls `MR_NestedTypes_A_ConstructFrom()`.
     */
    constructor(b: L.MR_NestedTypes_A_B, e: L.MR_NestedTypes_A_E);
    /**
     * Generated from constructor `MR::NestedTypes::A::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_NestedTypes_A_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_NestedTypes_A);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::NestedTypes::A::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_NestedTypes_A_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_NestedTypes_A): L.MR_NestedTypes_A;
}

/**
 * Generated from class `MR::NestedTypes::A::B`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_NestedTypes_A_B extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_NestedTypes_A_B_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::NestedTypes::A::B::B`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_NestedTypes_A_B_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_NestedTypes_A_B);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::NestedTypes::A::B::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_NestedTypes_A_B_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_NestedTypes_A_B): L.MR_NestedTypes_A_B;
}

