// The wrappers of the C bindings file `MR/test_nested_class_template_inst`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::NestedTemplateInst::A<int32_t>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_NestedTemplateInst_A_int32_t extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_NestedTemplateInst_A_int32_t_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::NestedTemplateInst::A<int32_t>::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_NestedTemplateInst_A_int32_t_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_NestedTemplateInst_A_int32_t);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::NestedTemplateInst::A<int32_t>::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_NestedTemplateInst_A_int32_t_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_NestedTemplateInst_A_int32_t): L.MR_NestedTemplateInst_A_int32_t;
}

/**
 * This struct needs special care to be instantiated, even with the typedef below. Hmm.
 * Generated from class `MR::NestedTemplateInst::A<int32_t>::AA<float>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_NestedTemplateInst_A_int32_t_AA_float extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_NestedTemplateInst_A_int32_t_AA_float_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::NestedTemplateInst::A<int32_t>::AA<float>::AA`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_NestedTemplateInst_A_int32_t_AA_float_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_NestedTemplateInst_A_int32_t_AA_float);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::NestedTemplateInst::A<int32_t>::AA<float>::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_NestedTemplateInst_A_int32_t_AA_float_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_NestedTemplateInst_A_int32_t_AA_float): L.MR_NestedTemplateInst_A_int32_t_AA_float;
}

