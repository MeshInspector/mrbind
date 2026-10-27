// The wrappers of the C bindings file `std_unique_ptr_MR_StdUniquePtr_A`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Wraps a pointer to a single heap-allocated `MR::StdUniquePtr::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_unique_ptr_MR_StdUniquePtr_A extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_unique_ptr_MR_StdUniquePtr_A);
    /**
     * Constructs a new instance.
     *
     * Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_ConstructFrom()`.
     */
    constructor(other: L.MR_StdUniquePtr_A);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_unique_ptr_MR_StdUniquePtr_A): void;
    /**
     * Assigns the contents.
     *
     * Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_AssignFrom()`.
     */
    assignFrom(other: L.MR_StdUniquePtr_A): void;
    /**
     * Returns the stored pointer, possibly null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_get()`.
     */
    get(): L.MR_StdUniquePtr_A | null;
    /**
     * Releases the pointer ownership. Returns the stored pointer and zeroes the source. If the source is already null, returns null and does nothing.
     * The returned pointer is owning! It must be deallocated using `MR_StdUniquePtr_A_Destroy()`.
     *
     * Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_release()`.
     */
    release_2(): L.MR_StdUniquePtr_A | null;
}

