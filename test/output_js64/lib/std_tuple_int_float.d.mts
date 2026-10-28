// The wrappers of the C bindings file `std_tuple_int_float`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores 2 objects: `int`, `float`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_tuple_int_float extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_tuple_int_float_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_tuple_int_float_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_tuple_int_float);
    /**
     * Constructs the tuple elementwise.
     *
     * Calls `MR_C_std_tuple_int_float_Construct()`.
     */
    constructor(_0: number, _1: number);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_tuple_int_float_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_tuple_int_float): void;
    /**
     * The element 0, of type `int`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_int_float_get_int()`.
     */
    get_int(): number;
    /**
     * The element 0, of type `int`, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_int_float_get_int_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get_int_mut(): number;
    /**
     * The element 1, of type `float`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_int_float_get_float()`.
     */
    get_float(): number;
    /**
     * The element 1, of type `float`, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_int_float_get_float_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get_float_mut(): number;
}

