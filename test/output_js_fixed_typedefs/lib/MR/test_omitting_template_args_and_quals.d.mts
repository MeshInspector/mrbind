// The wrappers of the C bindings file `MR/test_omitting_template_args_and_quals`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Here the generated code will omit the template arguments for operators (to avoid unwanted instantiations),
 *   and omit qualifiers for friend functions (since they are normally only accessible via ADL).
 * Generated from class `MR::OmittingTargsAndQuals::A<float>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_OmittingTargsAndQuals_A_float extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_OmittingTargsAndQuals_A_float_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::OmittingTargsAndQuals::A<float>::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_OmittingTargsAndQuals_A_float_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_OmittingTargsAndQuals_A_float);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::OmittingTargsAndQuals::A<float>::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_OmittingTargsAndQuals_A_float_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_OmittingTargsAndQuals_A_float): L.MR_OmittingTargsAndQuals_A_float;
    /**
     * Generated from method `MR::OmittingTargsAndQuals::A<float>::operator+`.
     *
     * Calls `MR_C_pos_MR_OmittingTargsAndQuals_A_float()`.
     */
    opAdd(): void;
}

/**
 * Here the generated code will omit the template arguments for operators (to avoid unwanted instantiations),
 *   and omit qualifiers for friend functions (since they are normally only accessible via ADL).
 * Generated from class `MR::OmittingTargsAndQuals::A<int32_t>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_OmittingTargsAndQuals_A_int32_t extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_OmittingTargsAndQuals_A_int32_t_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::OmittingTargsAndQuals::A<int32_t>::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_OmittingTargsAndQuals_A_int32_t_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_OmittingTargsAndQuals_A_int32_t);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::OmittingTargsAndQuals::A<int32_t>::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_OmittingTargsAndQuals_A_int32_t_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_OmittingTargsAndQuals_A_int32_t): L.MR_OmittingTargsAndQuals_A_int32_t;
    /**
     * Generated from method `MR::OmittingTargsAndQuals::A<int32_t>::operator+`.
     *
     * Calls `MR_C_pos_MR_OmittingTargsAndQuals_A_int32_t()`.
     */
    opAdd(): void;
    /**
     * Generated from method `MR::OmittingTargsAndQuals::A<int32_t>::operator-<float>`.
     *
     * Calls `MR_C_sub_MR_OmittingTargsAndQuals_A_int32_t_MR_OmittingTargsAndQuals_A_float()`.
     */
    opSub(_1: L.MR_OmittingTargsAndQuals_A_float): void;
}

/**
 * Generated from function `MR::OmittingTargsAndQuals::a`.
 *
 * Calls `MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_int32_t()`.
 */
export declare function MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_int32_t(_1: L.MR_OmittingTargsAndQuals_A_int32_t): void;

/**
 * Generated from function `MR::OmittingTargsAndQuals::b<float>`.
 *
 * Calls `MR_OmittingTargsAndQuals_b()`.
 */
export declare function MR_OmittingTargsAndQuals_b(_1: L.MR_OmittingTargsAndQuals_A_int32_t, _2: L.MR_OmittingTargsAndQuals_A_float): void;

/**
 * Generated from function `MR::OmittingTargsAndQuals::a`.
 *
 * Calls `MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_float()`.
 */
export declare function MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_float(_1: L.MR_OmittingTargsAndQuals_A_float): void;

/**
 * Generated from function `MR::OmittingTargsAndQuals::operator*`.
 *
 * Calls `MR_C_deref_MR_OmittingTargsAndQuals_A_int32_t()`.
 */
export declare function MR_C_deref_MR_OmittingTargsAndQuals_A_int32_t(_1: L.MR_OmittingTargsAndQuals_A_int32_t): void;

/**
 * Generated from function `MR::OmittingTargsAndQuals::operator~<int32_t>`.
 *
 * Calls `MR_C_compl_MR_OmittingTargsAndQuals_A_int32_t()`.
 */
export declare function MR_C_compl_MR_OmittingTargsAndQuals_A_int32_t(_1: L.MR_OmittingTargsAndQuals_A_int32_t): void;

/**
 * Generated from function `MR::OmittingTargsAndQuals::c`.
 *
 * Calls `MR_OmittingTargsAndQuals_c()`.
 */
export declare function MR_OmittingTargsAndQuals_c(_1: L.MR_OmittingTargsAndQuals_A_int32_t): void;

/**
 * Generated from function `MR::OmittingTargsAndQuals::d<int32_t>`.
 *
 * Calls `MR_OmittingTargsAndQuals_d()`.
 */
export declare function MR_OmittingTargsAndQuals_d(_1: L.MR_OmittingTargsAndQuals_A_int32_t): void;

/**
 * Generated from function `MR::OmittingTargsAndQuals::inst`.
 *
 * Calls `MR_OmittingTargsAndQuals_inst()`.
 */
export declare function MR_OmittingTargsAndQuals_inst(): void;

