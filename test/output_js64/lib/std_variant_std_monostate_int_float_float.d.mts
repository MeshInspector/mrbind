// The wrappers of the C bindings file `std_variant_std_monostate_int_float_float`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores one of 4 objects: `std::monostate`, `int`, `float`, `float`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_variant_std_monostate_int_float_float extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_variant_std_monostate_int_float_float);
    /**
     * Constructs the variant storing the element 1, of type `int`.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_ConstructAs_int()`.
     */
    constructor(value: number);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /**
     * Constructs the variant storing the element 0, of type `std::monostate`.
     * The reference to the parameter `value` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_ConstructAs_std_monostate()`.
     */
    static constructAs_std_monostate(): L.MR_C_std_variant_std_monostate_int_float_float;
    /**
     * Constructs the variant storing the element 2, of type `float`.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_ConstructAs_float_2()`.
     */
    static constructAs_float_2(value: number): L.MR_C_std_variant_std_monostate_int_float_float;
    /**
     * Constructs the variant storing the element 3, of type `float`.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_ConstructAs_float_3()`.
     */
    static constructAs_float_3(value: number): L.MR_C_std_variant_std_monostate_int_float_float;
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_variant_std_monostate_int_float_float): void;
    /**
     * Returns the index of the stored element type. In rare cases may return -1 if this variant is "valueless by exception".
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_index()`.
     */
    index(): number;
    /**
     * Assigns to the variant, making it store the element 0, of type `std::monostate`.
     * The reference to the parameter `value` might be preserved in this object.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_AssignAs_std_monostate()`.
     */
    AssignAs_std_monostate(): void;
    /**
     * Assigns to the variant, making it store the element 1, of type `int`.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_AssignAs_int()`.
     */
    AssignAs_int(value: number): void;
    /**
     * Assigns to the variant, making it store the element 2, of type `float`.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_AssignAs_float_2()`.
     */
    AssignAs_float_2(value: number): void;
    /**
     * Assigns to the variant, making it store the element 3, of type `float`.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_AssignAs_float_3()`.
     */
    AssignAs_float_3(value: number): void;
    /**
     * Returns the element 0, of type `std::monostate`, read-only. If it's not the active element, returns null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_get_std_monostate()`.
     */
    get_std_monostate(): boolean;
    /**
     * Returns the element 1, of type `int`, read-only. If it's not the active element, returns null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_get_int()`.
     */
    get_int(): number | null;
    /**
     * Returns the element 1, of type `int`, mutable. If it's not the active element, returns null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_get_int_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get_int_mut(): number;
    /**
     * Returns the element 2, of type `float`, read-only. If it's not the active element, returns null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_get_float_2()`.
     */
    get_float_2(): number | null;
    /**
     * Returns the element 2, of type `float`, mutable. If it's not the active element, returns null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_get_float_2_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get_float_2_mut(): number;
    /**
     * Returns the element 3, of type `float`, read-only. If it's not the active element, returns null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_get_float_3()`.
     */
    get_float_3(): number | null;
    /**
     * Returns the element 3, of type `float`, mutable. If it's not the active element, returns null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_get_float_3_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get_float_3_mut(): number;
}

