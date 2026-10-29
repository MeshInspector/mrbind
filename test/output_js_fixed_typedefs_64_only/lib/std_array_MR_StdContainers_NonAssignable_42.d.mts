// The wrappers of the C bindings file `std_array_MR_StdContainers_NonAssignable_42`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * A fixed-size array of `MR::StdContainers::NonAssignable` of size 42.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_array_MR_StdContainers_NonAssignable_42 extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_array_MR_StdContainers_NonAssignable_42_DefaultConstruct()`.
     */
    constructor();
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * The element at a specific index, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_array_MR_StdContainers_NonAssignable_42_at()`.
     */
    at(i: number): L.MR_StdContainers_NonAssignable;
    /**
     * The element at a specific index, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_array_MR_StdContainers_NonAssignable_42_at_mut()`.
     */
    at_mut(i: number): L.MR_StdContainers_NonAssignable;
    /**
     * Returns a pointer to the continuous storage that holds all elements, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_array_MR_StdContainers_NonAssignable_42_data()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    data(): number;
    /**
     * Returns a pointer to the continuous storage that holds all elements, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_array_MR_StdContainers_NonAssignable_42_data_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    data_mut(): number;
}

