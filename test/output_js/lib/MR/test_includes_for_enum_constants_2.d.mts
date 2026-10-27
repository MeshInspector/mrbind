// The wrappers of the C bindings file `MR/test_includes_for_enum_constants_2`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1): L.MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1;
}

