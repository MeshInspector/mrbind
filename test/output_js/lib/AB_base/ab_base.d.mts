// The wrappers of the C bindings file `AB_base/ab_base`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::CommonBaseAB`.
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::SeparateA`
 *     `MR::SeparateB`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CommonBaseAB extends ffi.CppObject
{
    /**
     * Generated from constructor `MR::CommonBaseAB::CommonBaseAB`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CommonBaseAB_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CommonBaseAB);
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CommonBaseAB::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CommonBaseAB_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CommonBaseAB): L.MR_CommonBaseAB;
}

/**
 * Generate a `shared_ptr` for this as well, to test how that gets separated.
 * Generated from function `MR::mark_shared_common_base_ab`.
 *
 * Calls `MR_mark_shared_common_base_ab()`.
 */
export declare function MR_mark_shared_common_base_ab(): L.MR_C_std_shared_ptr_MR_CommonBaseAB;

