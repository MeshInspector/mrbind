// The wrappers of the C bindings file `A/a`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::SeparateA`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::CommonBaseAB`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_SeparateA extends ffi.CppObject
{
    /**
     * Generated from constructor `MR::SeparateA::SeparateA`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_SeparateA_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_SeparateA);
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::SeparateA::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_SeparateA_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_SeparateA): L.MR_SeparateA;
    /** Upcasts to the base class `MR::CommonBaseAB`. The result refers to this object.
     *
     * Calls `MR_SeparateA_MutableUpcastTo_MR_CommonBaseAB()`. */
    upcastToCommonBaseAB(): L.MR_CommonBaseAB;
    /** Static downcast from the base class `MR::CommonBaseAB`. Undefined behavior if the object isn't actually a `SeparateA`. The result refers to `object`.
     *
     * Calls `MR_SeparateA_MutableStaticDowncastFrom_MR_CommonBaseAB()`. */
    static staticDowncastFromCommonBaseAB(object: L.MR_CommonBaseAB): L.MR_SeparateA;
    /** Dynamic downcast from the base class `MR::CommonBaseAB`. Returns null if the object isn't actually a `SeparateA`. The result refers to `object`.
     *
     * Calls `MR_SeparateA_MutableDynamicDowncastFrom_MR_CommonBaseAB()`. */
    static dynamicDowncastFromCommonBaseAB(object: L.MR_CommonBaseAB): L.MR_SeparateA | null;
}

/**
 * Generated from function `MR::GetSeparateVecA`.
 *
 * Calls `MR_GetSeparateVecA()`.
 */
export declare function MR_GetSeparateVecA(): L.MR_C_std_vector_MR_SeparateA;

