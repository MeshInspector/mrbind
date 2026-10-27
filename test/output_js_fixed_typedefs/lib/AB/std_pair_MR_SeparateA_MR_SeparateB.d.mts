// The wrappers of the C bindings file `AB/std_pair_MR_SeparateA_MR_SeparateB`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Stores two objects: `MR::SeparateA` and `MR::SeparateA`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_pair_MR_SeparateA_MR_SeparateB extends ffi.CppObject
{
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_pair_MR_SeparateA_MR_SeparateB_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_pair_MR_SeparateA_MR_SeparateB);
    /**
     * Constructs the pair elementwise.
     * The reference to the parameter `first` might be preserved in the constructed object.
     * The reference to the parameter `second` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_pair_MR_SeparateA_MR_SeparateB_Construct()`.
     */
    constructor(first: L.MR_SeparateA, second: L.MR_SeparateB);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_pair_MR_SeparateA_MR_SeparateB_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_pair_MR_SeparateA_MR_SeparateB): void;
    /**
     * The first of the two elements, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_pair_MR_SeparateA_MR_SeparateB_first()`.
     */
    first(): L.MR_SeparateA;
    /**
     * The first of the two elements, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_pair_MR_SeparateA_MR_SeparateB_first_mut()`.
     */
    first_mut(): L.MR_SeparateA;
    /**
     * The second of the two elements, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_pair_MR_SeparateA_MR_SeparateB_second()`.
     */
    second(): L.MR_SeparateB;
    /**
     * The second of the two elements, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_pair_MR_SeparateA_MR_SeparateB_second_mut()`.
     */
    second_mut(): L.MR_SeparateB;
}

