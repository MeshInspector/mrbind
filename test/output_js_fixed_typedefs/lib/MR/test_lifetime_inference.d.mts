// The wrappers of the C bindings file `MR/test_lifetime_inference`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::LifetimeInference::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_LifetimeInference_A extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::LifetimeInference::A` named `x`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_LifetimeInference_A_Get_x()`.
     */
    x: number;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_LifetimeInference_A_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs `MR::LifetimeInference::A` elementwise.
     * The reference to the parameter `x` might be preserved in the constructed object.
     *
     * Calls `MR_LifetimeInference_A_ConstructFrom()`.
     */
    constructor(x: number);
    /**
     * Generated from constructor `MR::LifetimeInference::A::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_LifetimeInference_A_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_LifetimeInference_A);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::LifetimeInference::A::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_LifetimeInference_A_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_LifetimeInference_A): L.MR_LifetimeInference_A;
    /**
     * Generated from method `MR::LifetimeInference::A::begin`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_LifetimeInference_A_begin()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    begin(): number;
    /**
     * Generated from method `MR::LifetimeInference::A::end`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_LifetimeInference_A_end()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    end(): number;
}

/**
 * Generated from class `MR::LifetimeInference::B`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_LifetimeInference_B extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::LifetimeInference::B` named `x`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_LifetimeInference_B_Get_x()`.
     */
    x: number;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_LifetimeInference_B_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs `MR::LifetimeInference::B` elementwise.
     * The reference to the parameter `x` might be preserved in the constructed object.
     *
     * Calls `MR_LifetimeInference_B_ConstructFrom()`.
     */
    constructor(x: number);
    /**
     * Generated from constructor `MR::LifetimeInference::B::B`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_LifetimeInference_B_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_LifetimeInference_B);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::LifetimeInference::B::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_LifetimeInference_B_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_LifetimeInference_B): L.MR_LifetimeInference_B;
}

/**
 * Generated from class `MR::LifetimeInference::C`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_LifetimeInference_C extends ffi.CppObject
{
    /**
     * Generated from constructor `MR::LifetimeInference::C::C`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_LifetimeInference_C_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_LifetimeInference_C);
    /**
     * Generated from constructor `MR::LifetimeInference::C::C`.
     *
     * Calls `MR_LifetimeInference_C_Construct()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    constructor(_1: L.MR_LifetimeInference_A, _2: number, _3: number);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::LifetimeInference::C::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_LifetimeInference_C_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_LifetimeInference_C): L.MR_LifetimeInference_C;
}

/**
 * Generated from function `MR::LifetimeInference::begin`.
 * The reference to the parameter `a` might be preserved in the return value.
 *
 * Calls `MR_LifetimeInference_begin_MR_LifetimeInference_A()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_LifetimeInference_begin_MR_LifetimeInference_A(a: L.MR_LifetimeInference_A): number;

/**
 * Generated from function `MR::LifetimeInference::end`.
 * The reference to the parameter `a` might be preserved in the return value.
 *
 * Calls `MR_LifetimeInference_end_MR_LifetimeInference_A()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_LifetimeInference_end_MR_LifetimeInference_A(a: L.MR_LifetimeInference_A): number;

/**
 * Generated from function `MR::LifetimeInference::begin`.
 * The reference to the parameter `b` might be preserved in the return value.
 *
 * Calls `MR_LifetimeInference_begin_MR_LifetimeInference_B()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_LifetimeInference_begin_MR_LifetimeInference_B(b: L.MR_LifetimeInference_B): number;

/**
 * Generated from function `MR::LifetimeInference::end`.
 * The reference to the parameter `b` might be preserved in the return value.
 *
 * Calls `MR_LifetimeInference_end_MR_LifetimeInference_B()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_LifetimeInference_end_MR_LifetimeInference_B(b: L.MR_LifetimeInference_B): number;

