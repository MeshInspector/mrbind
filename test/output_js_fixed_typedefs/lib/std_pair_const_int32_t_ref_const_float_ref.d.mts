// The wrappers of the C bindings file `std_pair_const_int32_t_ref_const_float_ref`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores two objects: `const int32_t &` and `const int32_t &`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_pair_const_int32_t_ref_const_float_ref extends ffi.CppObject
{
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_pair_const_int32_t_ref_const_float_ref_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_pair_const_int32_t_ref_const_float_ref);
    /**
     * Constructs the pair elementwise.
     * The reference to the parameter `first` might be preserved in the constructed object.
     * The reference to the parameter `second` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_pair_const_int32_t_ref_const_float_ref_Construct()`.
     */
    constructor(first: number, second: number);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * The first of the two elements, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_pair_const_int32_t_ref_const_float_ref_first()`.
     */
    first(): number;
    /**
     * The second of the two elements, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_pair_const_int32_t_ref_const_float_ref_second()`.
     */
    second(): number;
}

