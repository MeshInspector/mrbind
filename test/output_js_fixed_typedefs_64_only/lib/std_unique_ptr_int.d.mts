// The wrappers of the C bindings file `std_unique_ptr_int`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Wraps a pointer to a single heap-allocated `int`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_unique_ptr_int extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_unique_ptr_int_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_unique_ptr_int_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_unique_ptr_int);
    /**
     * Constructs a new instance.
     *
     * Calls `MR_C_std_unique_ptr_int_ConstructFrom()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    constructor(other: number);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_unique_ptr_int_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_unique_ptr_int): void;
    /**
     * Assigns the contents.
     *
     * Calls `MR_C_std_unique_ptr_int_AssignFrom()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    assignFrom(other: number): void;
    /**
     * Returns the stored pointer, possibly null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_unique_ptr_int_get()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get(): number;
    /**
     * Releases the pointer ownership. Returns the stored pointer and zeroes the source. If the source is already null, returns null and does nothing.
     * The returned pointer is owning! It must be deallocated using `MR_C_Free()`.
     *
     * Calls `MR_C_std_unique_ptr_int_release()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    release_2(): number;
}

