// The wrappers of the C bindings file `MR/1`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_A extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::A` named `x`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_A_Get_x()`.
     */
    x: L.MR_C_std_string;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_A_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::A::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_A_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_A);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::A::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_A_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_A): L.MR_A;
}

/**
 * Generated from function `MR::foo`.
 *
 * Calls `MR_foo()`.
 */
export declare function MR_foo(): L.MR_C_std_vector_MR_A;

/**
 * Generated from function `MR::bar`.
 *
 * Calls `MR_bar()`.
 */
export declare function MR_bar(_1: L.MR_C_std_vector_MR_A): void;

