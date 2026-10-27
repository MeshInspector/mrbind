// The wrappers of the C bindings file `std_pair_const_MR_StdContainers_NonAssignable_float`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores two objects: `const MR::StdContainers::NonAssignable` and `const MR::StdContainers::NonAssignable`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_pair_const_MR_StdContainers_NonAssignable_float extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs the pair elementwise.
     * The reference to the parameter `first` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_Construct()`.
     */
    constructor(first: L.MR_StdContainers_NonAssignable, second: number);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * The first of the two elements, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_first()`.
     */
    first(): L.MR_StdContainers_NonAssignable;
    /**
     * The second of the two elements, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_second()`.
     */
    second(): number;
    /**
     * The second of the two elements, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_second_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    second_mut(): number;
}

