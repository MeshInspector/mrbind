// The wrappers of the C bindings file `std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores 4 objects: `int &`, `float &&`, `std::string &`, `std::string &&`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref extends ffi.CppObject
{
    /**
     * Constructs the tuple elementwise.
     * The reference to the parameter `_0` might be preserved in the constructed object.
     * The reference to the parameter `_1` might be preserved in the constructed object.
     * The reference to the parameter `_2` might be preserved in the constructed object.
     * The reference to the parameter `_3` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_Construct()`.
     */
    constructor(_0: L.int_output, _1: number, _2: L.MR_C_std_string, _3: string);
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * The element 0, of type `int &`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_int_ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get_int_ref(): number;
    /**
     * The element 1, of type `float &&`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_float_rvalue_ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get_float_rvalue_ref(): number;
    /**
     * The element 2, of type `std::string &`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_std_string_ref()`.
     */
    get_std_string_ref(): L.MR_C_std_string;
    /**
     * The element 3, of type `std::string &&`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_std_string_rvalue_ref()`.
     */
    get_std_string_rvalue_ref(): L.MR_C_std_string;
}

