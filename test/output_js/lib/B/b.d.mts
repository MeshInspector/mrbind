// The wrappers of the C bindings file `B/b`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::SeparateB`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::CommonBaseAB`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_SeparateB extends ffi.CppObject
{
    /**
     * Generated from constructor `MR::SeparateB::SeparateB`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_SeparateB_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_SeparateB);
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::SeparateB::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_SeparateB_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_SeparateB): L.MR_SeparateB;
    /** Upcasts to the base class `MR::CommonBaseAB`. The result refers to this object.
     *
     * Calls `MR_SeparateB_MutableUpcastTo_MR_CommonBaseAB()`. */
    upcastToCommonBaseAB(): L.MR_CommonBaseAB;
    /** Static downcast from the base class `MR::CommonBaseAB`. Undefined behavior if the object isn't actually a `SeparateB`. The result refers to `object`.
     *
     * Calls `MR_SeparateB_MutableStaticDowncastFrom_MR_CommonBaseAB()`. */
    static staticDowncastFromCommonBaseAB(object: L.MR_CommonBaseAB): L.MR_SeparateB;
    /** Dynamic downcast from the base class `MR::CommonBaseAB`. Returns null if the object isn't actually a `SeparateB`. The result refers to `object`.
     *
     * Calls `MR_SeparateB_MutableDynamicDowncastFrom_MR_CommonBaseAB()`. */
    static dynamicDowncastFromCommonBaseAB(object: L.MR_CommonBaseAB): L.MR_SeparateB | null;
}

/**
 * Generated from function `MR::GetSeparateVecB`.
 *
 * Calls `MR_GetSeparateVecB()`.
 */
export declare function MR_GetSeparateVecB(): L.MR_C_std_vector_MR_SeparateB;

