// The wrappers of the C bindings file `std_pair_int32_t_ref_float_ref`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores two objects: `int32_t &` and `int32_t &`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_pair_int32_t_ref_float_ref extends ffi.CppObject
{
    /**
     * Constructs the pair elementwise.
     * The reference to the parameter `first` might be preserved in the constructed object.
     * The reference to the parameter `second` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_pair_int32_t_ref_float_ref_Construct()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    constructor(first: number, second: number);
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * The first of the two elements, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_pair_int32_t_ref_float_ref_first()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    first(): number;
    /**
     * The second of the two elements, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_pair_int32_t_ref_float_ref_second()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    second(): number;
}

