// The wrappers of the C bindings file `MR/test_conv_ops`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::ConvOps::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_ConvOps_A extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_ConvOps_A_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::ConvOps::A::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_ConvOps_A_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_ConvOps_A);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from conversion operator `MR::ConvOps::A::operator bool`.
     *
     * Calls `MR_ConvOps_A_ConvertTo_bool()`.
     */
    convertTo_bool(): boolean;
    /**
     * Generated from method `MR::ConvOps::A::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_ConvOps_A_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_ConvOps_A): L.MR_ConvOps_A;
}

