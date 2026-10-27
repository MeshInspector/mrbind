// The wrappers of the C bindings file `std_tuple_int_std_string`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores 2 objects: `int`, `std::string`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_tuple_int_std_string extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_tuple_int_std_string_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_tuple_int_std_string_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_tuple_int_std_string);
    /**
     * Constructs the tuple elementwise.
     * The reference to the parameter `_1` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_tuple_int_std_string_Construct()`.
     */
    constructor(_0: number, _1: string);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_tuple_int_std_string_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_tuple_int_std_string): void;
    /**
     * The element 0, of type `int`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_int_std_string_get_int()`.
     */
    get_int(): number;
    /**
     * The element 0, of type `int`, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_int_std_string_get_int_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get_int_mut(): number;
    /**
     * The element 1, of type `std::string`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_int_std_string_get_std_string()`.
     */
    get_std_string(): L.MR_C_std_string;
    /**
     * The element 1, of type `std::string`, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_int_std_string_get_std_string_mut()`.
     */
    get_std_string_mut(): L.MR_C_std_string;
}

