// The wrappers of the C bindings file `std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32___98db`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores 10 objects: `const int32_t`, `const float`, `int32_t &`, `float &`, `const int32_t &`, `const float &`, `int32_t &&`, `float &&`, `const int32_t &&`, `const float &&`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref extends ffi.CppObject
{
    /**
     * Constructs the tuple elementwise.
     * The reference to the parameter `_0` might be preserved in the constructed object.
     * The reference to the parameter `_2` might be preserved in the constructed object.
     * The reference to the parameter `_3` might be preserved in the constructed object.
     * The reference to the parameter `_4` might be preserved in the constructed object.
     * The reference to the parameter `_5` might be preserved in the constructed object.
     * The reference to the parameter `_6` might be preserved in the constructed object.
     * The reference to the parameter `_7` might be preserved in the constructed object.
     * The reference to the parameter `_8` might be preserved in the constructed object.
     * The reference to the parameter `_9` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_Construct()`.
     */
    constructor(_0: number, _1: number, _2: L.int32_t_output, _3: L.float_output, _4: number, _5: number, _6: number, _7: number, _8: number, _9: number);
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * The element 0, of type `const int32_t`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_const_int32_t()`.
     */
    get_const_int32_t(): number;
    /**
     * The element 1, of type `const float`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_const_float()`.
     */
    get_const_float(): number;
    /**
     * The element 2, of type `int32_t &`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_int32_t_ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get_int32_t_ref(): number;
    /**
     * The element 3, of type `float &`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_float_ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get_float_ref(): number;
    /**
     * The element 4, of type `const int32_t &`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_const_int32_t_ref()`.
     */
    get_const_int32_t_ref(): number;
    /**
     * The element 5, of type `const float &`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_const_float_ref()`.
     */
    get_const_float_ref(): number;
    /**
     * The element 6, of type `int32_t &&`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_int32_t_rvalue_ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get_int32_t_rvalue_ref(): number;
    /**
     * The element 7, of type `float &&`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_float_rvalue_ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get_float_rvalue_ref(): number;
    /**
     * The element 8, of type `const int32_t &&`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_const_int32_t_rvalue_ref()`.
     */
    get_const_int32_t_rvalue_ref(): number;
    /**
     * The element 9, of type `const float &&`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_const_float_rvalue_ref()`.
     */
    get_const_float_rvalue_ref(): number;
}

