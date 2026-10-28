// The wrappers of the C bindings file `MR/test_adjusting_names`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * And test that `uint64_t` is correctly adjusted in some other kinds of names.
 * Though here we don't really test that each of them brings its own includes.
 * Generated from class `MR::AdjustingNames::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_AdjustingNames_A extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::AdjustingNames::A` named `var<MR_C_uint64_t>`.
     *
     * Calls `MR_AdjustingNames_A_Get_var_uint64_t()`.
     */
    static get var(): bigint;
    static set var(value: number | bigint);
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_AdjustingNames_A_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::AdjustingNames::A::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_AdjustingNames_A_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_AdjustingNames_A);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from conversion operator `MR::AdjustingNames::A::operator MR_C_uint64_t`.
     *
     * Calls `MR_AdjustingNames_A_ConvertTo_uint64_t()`.
     */
    convertTo_uint64_t(): bigint;
    /**
     * Generated from method `MR::AdjustingNames::A::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_AdjustingNames_A_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_AdjustingNames_A): L.MR_AdjustingNames_A;
    /**
     * Generated from method `MR::AdjustingNames::A::foo<MR_C_uint64_t>`.
     *
     * Calls `MR_AdjustingNames_A_foo()`.
     */
    foo(): void;
    /**
     * Generated from method `MR::AdjustingNames::A::bar`.
     *
     * Calls `MR_AdjustingNames_A_bar()`.
     */
    bar(): void;
}

/**
 * When we're gonna call `foo<MR_C_uint64_t>()` in the source file, we must include the header for our typedef (and for the template arguments in general).
 * And we must make sure that the typedef gets applied to the name correctly.
 * Generated from function `MR::AdjustingNames::foo<MR_C_uint64_t>`.
 *
 * Calls `MR_AdjustingNames_foo()`.
 */
export declare function MR_AdjustingNames_foo(): void;

/**
 * Generated from function `MR::AdjustingNames::bar`.
 *
 * Calls `MR_AdjustingNames_bar()`.
 */
export declare function MR_AdjustingNames_bar(): void;

