// The wrappers of the C bindings file `std_pair_int_std_string`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores two objects: `int` and `int`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_pair_int_std_string extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_pair_int_std_string_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_pair_int_std_string_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_pair_int_std_string);
    /**
     * Constructs the pair elementwise.
     * The reference to the parameter `second` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_pair_int_std_string_Construct()`.
     */
    constructor(first: number, second: string);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_pair_int_std_string_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_pair_int_std_string): void;
    /**
     * The first of the two elements, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_pair_int_std_string_first()`.
     */
    first(): number;
    /**
     * The first of the two elements, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_pair_int_std_string_first_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    first_mut(): number;
    /**
     * The second of the two elements, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_pair_int_std_string_second()`.
     */
    second(): L.MR_C_std_string;
    /**
     * The second of the two elements, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_pair_int_std_string_second_mut()`.
     */
    second_mut(): L.MR_C_std_string;
}

