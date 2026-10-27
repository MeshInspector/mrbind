// The wrappers of the C bindings file `std_string_view`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * A non-owning string view. Not necessarily null-terminated.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_string_view extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_string_view_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_string_view_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_string_view);
    /**
     * Constructs a new instance.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_string_view_ConstructFrom()`.
     */
    constructor(other: string);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_string_view_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_string_view): void;
    /**
     * Assigns the contents.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_string_view_AssignFrom()`.
     */
    assignFrom(other: string): void;
    /**
     * The number of characters in the string.
     *
     * Calls `MR_C_std_string_view_size()`.
     */
    size(): number;
    /**
     * Returns the string contents, NOT necessarily null-terminated.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_string_view_data()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    data(): number;
    /**
     * Returns a pointer to the end of string. Not dereferencable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_string_view_data_end()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    data_end(): number;
    /** The elements as a new `Int8Array`, one scalar per element. */
    toArray(): Int8Array;
    /** A `Int8Array` over the wasm memory of the elements, one scalar per element, without a copy. It becomes invalid when the wasm memory grows (any allocation can do that) or the container changes, so use it right away. */
    view(): Int8Array;
}

