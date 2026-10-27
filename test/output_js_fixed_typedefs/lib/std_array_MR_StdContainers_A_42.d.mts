// The wrappers of the C bindings file `std_array_MR_StdContainers_A_42`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * A fixed-size array of `MR::StdContainers::A` of size 42.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_array_MR_StdContainers_A_42 extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_array_MR_StdContainers_A_42_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_array_MR_StdContainers_A_42_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_array_MR_StdContainers_A_42);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_array_MR_StdContainers_A_42_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_array_MR_StdContainers_A_42): void;
    /**
     * The element at a specific index, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_array_MR_StdContainers_A_42_at()`.
     */
    at(i: number): L.MR_StdContainers_A;
    /**
     * The element at a specific index, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_array_MR_StdContainers_A_42_at_mut()`.
     */
    at_mut(i: number): L.MR_StdContainers_A;
    /**
     * Returns a pointer to the continuous storage that holds all elements, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_array_MR_StdContainers_A_42_data()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    data(): number;
    /**
     * Returns a pointer to the continuous storage that holds all elements, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_array_MR_StdContainers_A_42_data_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    data_mut(): number;
    /**
     * The begin iterator, const.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_array_MR_StdContainers_A_42_begin()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    begin(): number;
    /**
     * The begin iterator, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_array_MR_StdContainers_A_42_begin_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    begin_mut(): number;
    /**
     * The end iterator, const.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_array_MR_StdContainers_A_42_end()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    end(): number;
    /**
     * The end iterator, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_array_MR_StdContainers_A_42_end_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    end_mut(): number;
}

