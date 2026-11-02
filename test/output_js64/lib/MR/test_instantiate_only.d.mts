// The wrappers of the C bindings file `MR/test_instantiate_only`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::InstantiateOnly::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_InstantiateOnly_A extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_InstantiateOnly_A_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::InstantiateOnly::A::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_InstantiateOnly_A_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_InstantiateOnly_A);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::InstantiateOnly::A::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_InstantiateOnly_A_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_InstantiateOnly_A): L.MR_InstantiateOnly_A;
}

