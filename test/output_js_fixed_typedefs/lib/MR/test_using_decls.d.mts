// The wrappers of the C bindings file `MR/test_using_decls`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * A C++ enum: the constants are numbers, so this also holds values that aren't named constants.
 */
export declare enum MR_UsingDecls_A_E
{
}

/**
 * Test how `using` declarations import things.
 * Generated from class `MR::UsingDecls::A`.
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::UsingDecls::B`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_UsingDecls_A extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::UsingDecls::A` named `StaticVar`.
     *
     * Calls `MR_UsingDecls_A_Get_StaticVar()`.
     */
    static StaticVar: number;
    /**
     * Returns a pointer to a member variable of class `MR::UsingDecls::A` named `Field`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_UsingDecls_A_Get_Field()`.
     */
    Field: number;
    /**
     * Generated from constructor `MR::UsingDecls::A::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_UsingDecls_A_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_UsingDecls_A);
    /**
     * Generated from constructor `MR::UsingDecls::A::A`.
     *
     * Calls `MR_UsingDecls_A_Construct()`.
     */
    constructor(_1: number);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::UsingDecls::A::StaticFunc`.
     *
     * Calls `MR_UsingDecls_A_StaticFunc()`.
     */
    static StaticFunc(): void;
    /**
     * Generated from conversion operator `MR::UsingDecls::A::operator int32_t`.
     *
     * Calls `MR_UsingDecls_A_ConvertTo_int32_t()`.
     */
    convertTo_int32_t(): number;
    /**
     * Generated from method `MR::UsingDecls::A::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_UsingDecls_A_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_UsingDecls_A): L.MR_UsingDecls_A;
    /**
     * Generated from method `MR::UsingDecls::A::operator=`.
     *
     * Calls `MR_UsingDecls_A_assign()`.
     */
    assign(_1: number): void;
    /**
     * Generated from method `MR::UsingDecls::A::Method`.
     *
     * Calls `MR_UsingDecls_A_Method()`.
     */
    Method(): void;
}

/**
 * Generated from class `MR::UsingDecls::B`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::UsingDecls::A`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_UsingDecls_B extends ffi.CppObject
{
    /**
     * Generated from constructor `MR::UsingDecls::B::B`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_UsingDecls_B_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_UsingDecls_B);
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::UsingDecls::B::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_UsingDecls_B_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_UsingDecls_B): L.MR_UsingDecls_B;
    /** Upcasts to the base class `MR::UsingDecls::A`. The result refers to this object.
     *
     * Calls `MR_UsingDecls_B_MutableUpcastTo_MR_UsingDecls_A()`. */
    upcastToA(): L.MR_UsingDecls_A;
    /** Static downcast from the base class `MR::UsingDecls::A`. Undefined behavior if the object isn't actually a `B`. The result refers to `object`.
     *
     * Calls `MR_UsingDecls_B_MutableStaticDowncastFrom_MR_UsingDecls_A()`. */
    static staticDowncastFromA(object: L.MR_UsingDecls_A): L.MR_UsingDecls_B;
}

