// The wrappers of the C bindings file `MR/test_typedefs_in_templates`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * This tests a specific Clang bug/quirk.
 * Certain typedefs in templates get their names printed without the template arguments of the enclosing class template, breaking our code generation.
 * Generated from class `MR::TypedefsInTemplates::A<int32_t>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_TypedefsInTemplates_A_int32_t extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_TypedefsInTemplates_A_int32_t_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::TypedefsInTemplates::A<int32_t>::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_TypedefsInTemplates_A_int32_t_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_TypedefsInTemplates_A_int32_t);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::TypedefsInTemplates::A<int32_t>::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_TypedefsInTemplates_A_int32_t_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_TypedefsInTemplates_A_int32_t): L.MR_TypedefsInTemplates_A_int32_t;
    /**
     * Generated from method `MR::TypedefsInTemplates::A<int32_t>::foo`.
     *
     * Calls `MR_TypedefsInTemplates_A_int32_t_foo()`.
     */
    foo(): number;
}

/**
 * Generated from class `MR::TypedefsInTemplates::B<int32_t>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_TypedefsInTemplates_B_int32_t extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_TypedefsInTemplates_B_int32_t_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::TypedefsInTemplates::B<int32_t>::B`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_TypedefsInTemplates_B_int32_t_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_TypedefsInTemplates_B_int32_t);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::TypedefsInTemplates::B<int32_t>::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_TypedefsInTemplates_B_int32_t_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_TypedefsInTemplates_B_int32_t): L.MR_TypedefsInTemplates_B_int32_t;
}

/**
 * Generated from class `MR::TypedefsInTemplates::B<int32_t>::BB<float>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_TypedefsInTemplates_B_int32_t_BB_float extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_TypedefsInTemplates_B_int32_t_BB_float_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::TypedefsInTemplates::B<int32_t>::BB<float>::BB`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_TypedefsInTemplates_B_int32_t_BB_float_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_TypedefsInTemplates_B_int32_t_BB_float);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::TypedefsInTemplates::B<int32_t>::BB<float>::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_TypedefsInTemplates_B_int32_t_BB_float_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_TypedefsInTemplates_B_int32_t_BB_float): L.MR_TypedefsInTemplates_B_int32_t_BB_float;
    /**
     * Generated from method `MR::TypedefsInTemplates::B<int32_t>::BB<float>::foo`.
     *
     * Calls `MR_TypedefsInTemplates_B_int32_t_BB_float_foo()`.
     */
    foo(): number;
    /**
     * Generated from method `MR::TypedefsInTemplates::B<int32_t>::BB<float>::foo2`.
     *
     * Calls `MR_TypedefsInTemplates_B_int32_t_BB_float_foo2()`.
     */
    foo2(): number;
}

/**
 * Generated from function `MR::TypedefsInTemplates::bar`.
 *
 * Calls `MR_TypedefsInTemplates_bar()`.
 */
export declare function MR_TypedefsInTemplates_bar(_1: number): void;

