// The wrappers of the C bindings file `std_optional_MR_CSharp_NonTrivial`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores either a single `MR::CSharp::NonTrivial` or nothing.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_optional_MR_CSharp_NonTrivial extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_optional_MR_CSharp_NonTrivial_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_optional_MR_CSharp_NonTrivial_ConstructFromAnother()`.
     */
    constructor(other?: L.MR_C_std_optional_MR_CSharp_NonTrivial | null);
    /**
     * Constructs a new instance.
     *
     * Calls `MR_C_std_optional_MR_CSharp_NonTrivial_ConstructFrom()`.
     */
    constructor(other?: L.MR_CSharp_NonTrivial | null);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_optional_MR_CSharp_NonTrivial_AssignFromAnother()`.
     */
    assignFromAnother(other?: L.MR_C_std_optional_MR_CSharp_NonTrivial | null): void;
    /**
     * Assigns the contents.
     *
     * Calls `MR_C_std_optional_MR_CSharp_NonTrivial_AssignFrom()`.
     */
    assignFrom(other?: L.MR_CSharp_NonTrivial | null): void;
    /**
     * Returns true if this instance stores an object, as opposed to being empty.
     *
     * Calls `MR_C_std_optional_MR_CSharp_NonTrivial_has_value()`.
     */
    has_value(): boolean;
    /**
     * The stored element or null if none, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_optional_MR_CSharp_NonTrivial_value()`.
     */
    value(): L.MR_CSharp_NonTrivial | null;
    /**
     * The stored element or null if none, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_optional_MR_CSharp_NonTrivial_value_mut()`.
     */
    value_mut(): L.MR_CSharp_NonTrivial | null;
}

