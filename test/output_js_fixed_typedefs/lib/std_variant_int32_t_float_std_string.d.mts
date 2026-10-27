// The wrappers of the C bindings file `std_variant_int32_t_float_std_string`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores one of 3 objects: `int32_t`, `float`, `std::string`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_variant_int32_t_float_std_string extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_variant_int32_t_float_std_string_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_variant_int32_t_float_std_string_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_variant_int32_t_float_std_string);
    /**
     * Constructs the variant storing the element 0, of type `int32_t`.
     * The reference to the parameter `value` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_variant_int32_t_float_std_string_ConstructAs_int32_t()`.
     */
    constructor(value: number);
    /**
     * Constructs the variant storing the element 2, of type `std::string`.
     * The reference to the parameter `value` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_variant_int32_t_float_std_string_ConstructAs_std_string()`.
     */
    constructor(value: string);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /**
     * Constructs the variant storing the element 1, of type `float`.
     *
     * Calls `MR_C_std_variant_int32_t_float_std_string_ConstructAs_float()`.
     */
    static constructAs_float(value: number): L.MR_C_std_variant_int32_t_float_std_string;
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_variant_int32_t_float_std_string_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_variant_int32_t_float_std_string): void;
    /**
     * Returns the index of the stored element type. In rare cases may return -1 if this variant is "valueless by exception".
     *
     * Calls `MR_C_std_variant_int32_t_float_std_string_index()`.
     */
    index(): number;
    /**
     * Assigns to the variant, making it store the element 0, of type `int32_t`.
     * The reference to the parameter `value` might be preserved in this object.
     *
     * Calls `MR_C_std_variant_int32_t_float_std_string_AssignAs_int32_t()`.
     */
    AssignAs_int32_t(value: number): void;
    /**
     * Assigns to the variant, making it store the element 1, of type `float`.
     *
     * Calls `MR_C_std_variant_int32_t_float_std_string_AssignAs_float()`.
     */
    AssignAs_float(value: number): void;
    /**
     * Assigns to the variant, making it store the element 2, of type `std::string`.
     * The reference to the parameter `value` might be preserved in this object.
     *
     * Calls `MR_C_std_variant_int32_t_float_std_string_AssignAs_std_string()`.
     */
    AssignAs_std_string(value: string): void;
    /**
     * Returns the element 0, of type `int32_t`, read-only. If it's not the active element, returns null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_variant_int32_t_float_std_string_get_int32_t()`.
     */
    get_int32_t(): number | null;
    /**
     * Returns the element 0, of type `int32_t`, mutable. If it's not the active element, returns null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_variant_int32_t_float_std_string_get_int32_t_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get_int32_t_mut(): number;
    /**
     * Returns the element 1, of type `float`, read-only. If it's not the active element, returns null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_variant_int32_t_float_std_string_get_float()`.
     */
    get_float(): number | null;
    /**
     * Returns the element 1, of type `float`, mutable. If it's not the active element, returns null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_variant_int32_t_float_std_string_get_float_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get_float_mut(): number;
    /**
     * Returns the element 2, of type `std::string`, read-only. If it's not the active element, returns null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_variant_int32_t_float_std_string_get_std_string()`.
     */
    get_std_string(): L.MR_C_std_string | null;
    /**
     * Returns the element 2, of type `std::string`, mutable. If it's not the active element, returns null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_variant_int32_t_float_std_string_get_std_string_mut()`.
     */
    get_std_string_mut(): L.MR_C_std_string | null;
}

