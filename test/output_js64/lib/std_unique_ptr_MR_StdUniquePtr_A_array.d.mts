// The wrappers of the C bindings file `std_unique_ptr_MR_StdUniquePtr_A_array`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Wraps a pointer to a heap-allocated array of type `MR::StdUniquePtr::A`, of an unspecified size.
 * Doesn't store the size, it has to be obtained separately.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_unique_ptr_MR_StdUniquePtr_A_array extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_unique_ptr_MR_StdUniquePtr_A_array);
    /**
     * Constructs a new instance.
     *
     * Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFrom()`.
     */
    constructor(other: L.MR_StdUniquePtr_A);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_unique_ptr_MR_StdUniquePtr_A_array): void;
    /**
     * Assigns the contents.
     *
     * Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_AssignFrom()`.
     */
    assignFrom(other: L.MR_StdUniquePtr_A): void;
    /**
     * Returns the stored pointer, possibly null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_get()`.
     */
    get(): L.MR_StdUniquePtr_A | null;
    /**
     * Returns an element from the stored array. The stored pointer must not be null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_at()`.
     */
    at(i: number): L.MR_StdUniquePtr_A;
    /**
     * Releases the pointer ownership. Returns the stored pointer and zeroes the source. If the source is already null, returns null and does nothing.
     * The returned pointer is owning! It must be deallocated using `MR_StdUniquePtr_A_DestroyArray()`.
     *
     * Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_release()`.
     */
    release_2(): L.MR_StdUniquePtr_A | null;
}

