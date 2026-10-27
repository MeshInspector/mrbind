// The wrappers of the C bindings file `std_expected_int_std_string`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores either a `int` that represents success or a `std::string` that represents an error.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_expected_int_std_string extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_expected_int_std_string_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_expected_int_std_string_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_expected_int_std_string);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_expected_int_std_string_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_expected_int_std_string): void;
    /**
     * Returns true if this instance represents success, or false if it represents an error.
     *
     * Calls `MR_C_std_expected_int_std_string_success()`.
     */
    success(): boolean;
    /**
     * If this instance represents success, returns the stored `int`. Otherwise null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_expected_int_std_string_value()`.
     */
    value(): number | null;
    /**
     * If this instance represents an error, returns the stored `std::string`. Otherwise null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_expected_int_std_string_error()`.
     */
    error(): L.MR_C_std_string | null;
    /**
     * If this instance represents success, returns the stored `int`. Otherwise null. This version returns a mutable pointer.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_expected_int_std_string_value_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    value_mut(): number;
    /**
     * If this instance represents an error, returns the stored `std::string`. Otherwise null. This version returns a mutable pointer.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_expected_int_std_string_error_mut()`.
     */
    error_mut(): L.MR_C_std_string | null;
    /** The value, or throws `UnexpectedResultException` with the error. The returned reference keeps this object alive. The wrappers of the functions returning this type do this automatically. */
    valueOrThrow(): number;
}

