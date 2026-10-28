// The wrappers of the C bindings file `std_tuple_float_double_int32_t_int32_t`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores 4 objects: `float`, `double`, `int32_t`, `int32_t`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_tuple_float_double_int32_t_int32_t extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_tuple_float_double_int32_t_int32_t_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_tuple_float_double_int32_t_int32_t_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_tuple_float_double_int32_t_int32_t);
    /**
     * Constructs the tuple elementwise.
     * The reference to the parameter `_2` might be preserved in the constructed object.
     * The reference to the parameter `_3` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_tuple_float_double_int32_t_int32_t_Construct()`.
     */
    constructor(_0: number, _1: number, _2: number, _3: number);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_tuple_float_double_int32_t_int32_t_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_tuple_float_double_int32_t_int32_t): void;
    /**
     * The element 0, of type `float`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_float_double_int32_t_int32_t_get_float()`.
     */
    get_float(): number;
    /**
     * The element 0, of type `float`, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_float_double_int32_t_int32_t_get_float_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get_float_mut(): number;
    /**
     * The element 1, of type `double`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_float_double_int32_t_int32_t_get_double()`.
     */
    get_double(): number;
    /**
     * The element 1, of type `double`, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_float_double_int32_t_int32_t_get_double_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get_double_mut(): number;
    /**
     * The element 2, of type `int32_t`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_float_double_int32_t_int32_t_get_int32_t_2()`.
     */
    get_int32_t_2(): number;
    /**
     * The element 2, of type `int32_t`, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_float_double_int32_t_int32_t_get_int32_t_2_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get_int32_t_2_mut(): number;
    /**
     * The element 3, of type `int32_t`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_float_double_int32_t_int32_t_get_int32_t_3()`.
     */
    get_int32_t_3(): number;
    /**
     * The element 3, of type `int32_t`, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_float_double_int32_t_int32_t_get_int32_t_3_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get_int32_t_3_mut(): number;
}

