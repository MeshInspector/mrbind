// The wrappers of the C bindings file `MR/test_static_memberr`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::StaticFuncs::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_StaticFuncs_A extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::StaticFuncs::A` named `x`.
     *
     * Calls `MR_StaticFuncs_A_Get_x()`.
     */
    static x: number;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_StaticFuncs_A_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::StaticFuncs::A::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_StaticFuncs_A_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_StaticFuncs_A);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::StaticFuncs::A::blah`.
     *
     * Calls `MR_StaticFuncs_A_blah()`.
     */
    static blah(): void;
    /**
     * Generated from method `MR::StaticFuncs::A::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_StaticFuncs_A_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_StaticFuncs_A): L.MR_StaticFuncs_A;
}

