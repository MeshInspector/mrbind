// The wrappers of the C bindings file `std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_re__883b`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores 4 objects: `const int32_t &`, `const float &&`, `const std::string &`, `const std::string &&`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref extends ffi.CppObject
{
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref);
    /**
     * Constructs the tuple elementwise.
     * The reference to the parameter `_0` might be preserved in the constructed object.
     * The reference to the parameter `_1` might be preserved in the constructed object.
     * The reference to the parameter `_2` might be preserved in the constructed object.
     * The reference to the parameter `_3` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_Construct()`.
     */
    constructor(_0: number, _1: number, _2: string, _3: string);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * The element 0, of type `const int32_t &`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_int32_t_ref()`.
     */
    get_const_int32_t_ref(): number;
    /**
     * The element 1, of type `const float &&`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_float_rvalue_ref()`.
     */
    get_const_float_rvalue_ref(): number;
    /**
     * The element 2, of type `const std::string &`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_std_string_ref()`.
     */
    get_const_std_string_ref(): L.MR_C_std_string;
    /**
     * The element 3, of type `const std::string &&`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_std_string_rvalue_ref()`.
     */
    get_const_std_string_rvalue_ref(): L.MR_C_std_string;
}

