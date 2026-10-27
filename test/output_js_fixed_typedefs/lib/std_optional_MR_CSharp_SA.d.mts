// The wrappers of the C bindings file `std_optional_MR_CSharp_SA`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores either a single `MR::CSharp::SA` or nothing.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_optional_MR_CSharp_SA extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_optional_MR_CSharp_SA_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_optional_MR_CSharp_SA_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_optional_MR_CSharp_SA);
    /**
     * Constructs a new instance.
     *
     * Calls `MR_C_std_optional_MR_CSharp_SA_ConstructFrom()`.
     */
    constructor(other: L.MR_CSharp_SA);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_optional_MR_CSharp_SA_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_optional_MR_CSharp_SA): void;
    /**
     * Assigns the contents.
     *
     * Calls `MR_C_std_optional_MR_CSharp_SA_AssignFrom()`.
     */
    assignFrom(other: L.MR_CSharp_SA): void;
    /**
     * Returns true if this instance stores an object, as opposed to being empty.
     *
     * Calls `MR_C_std_optional_MR_CSharp_SA_has_value()`.
     */
    has_value(): boolean;
    /**
     * The stored element or null if none, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_optional_MR_CSharp_SA_value()`.
     */
    value(): L.MR_CSharp_SA | null;
    /**
     * The stored element or null if none, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_optional_MR_CSharp_SA_value_mut()`.
     */
    value_mut(): L.MR_CSharp_SA | null;
}

