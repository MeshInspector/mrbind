// The wrappers of the C bindings file `MR/test_member_vars`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::MemberVars::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_MemberVars_A extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::MemberVars::A` named `z`.
     *
     * Calls `MR_MemberVars_A_Get_z()`.
     */
    static z: number;
    /**
     * Returns a pointer to a member variable of class `MR::MemberVars::A` named `w`.
     *
     * Calls `MR_MemberVars_A_Get_w()`.
     */
    static readonly w: number;
    /**
     * Returns a pointer to a member variable of class `MR::MemberVars::A` named `x`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_MemberVars_A_Get_x()`.
     */
    x: number;
    /**
     * Returns a pointer to a member variable of class `MR::MemberVars::A` named `y`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_MemberVars_A_Get_y()`.
     */
    readonly y: number;
    /**
     * Those don't get setters, and also get only one (non-const-propagating) getter.
     * Returns a pointer to a member variable of class `MR::MemberVars::A` named `ref`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_MemberVars_A_Get_ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    readonly ref: number;
    /**
     * Arrays don't get setters, because they aren't assignable. But they still get mutable getters
     * Returns a pointer to a member variable of class `MR::MemberVars::A` named `arr`. This is a pointer to the first element of an array.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_MemberVars_A_Get_arr()`.
     */
    readonly arr: number;
    /**
     * Generated from constructor `MR::MemberVars::A::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_MemberVars_A_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_MemberVars_A);
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Returns the size of the array member of class `MR::MemberVars::A` named `arr`. The size is `4`.
     *
     * Calls `MR_MemberVars_A_GetSize_arr()`.
     */
    static arrSize(): number;
}

