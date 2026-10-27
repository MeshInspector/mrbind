// The wrappers of the C bindings file `MR/test_std_function`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * A C++ enum: the constants are numbers, so this also holds values that aren't named constants.
 */
export declare enum MR_StdFunction_E
{
}

/**
 * Generated from class `MR::StdFunction::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_StdFunction_A extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::StdFunction::A` named `a`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_StdFunction_A_Get_a()`.
     */
    a: L.MR_C_std_string;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_StdFunction_A_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs `MR::StdFunction::A` elementwise.
     * The reference to the parameter `a` might be preserved in the constructed object.
     *
     * Calls `MR_StdFunction_A_ConstructFrom()`.
     */
    constructor(a: string);
    /**
     * Generated from constructor `MR::StdFunction::A::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_StdFunction_A_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_StdFunction_A);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::StdFunction::A::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_StdFunction_A_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_StdFunction_A): L.MR_StdFunction_A;
}

/**
 * Generated from function `MR::StdFunction::foo`.
 *
 * Calls `MR_StdFunction_foo_std_function_int_func()`.
 */
export declare function MR_StdFunction_foo_std_function_int_func(_1: L.MR_C_std_function_int | L.MR_C_std_function_int.Fn): void;

/**
 * Generated from function `MR::StdFunction::foo`.
 *
 * Calls `MR_StdFunction_foo_std_function_void_func_from_int_int()`.
 */
export declare function MR_StdFunction_foo_std_function_void_func_from_int_int(_1: L.MR_C_std_function_void_from_int_int | L.MR_C_std_function_void_from_int_int.Fn): void;

/**
 * Generated from function `MR::StdFunction::foo`.
 *
 * Calls `MR_StdFunction_foo_std_function_int_func_from_int_int()`.
 */
export declare function MR_StdFunction_foo_std_function_int_func_from_int_int(_1: L.MR_C_std_function_int_from_int_int | L.MR_C_std_function_int_from_int_int.Fn): void;

/**
 * Generated from function `MR::StdFunction::foo`.
 *
 * Calls `MR_StdFunction_foo_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E()`.
 */
export declare function MR_StdFunction_foo_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E(_1: L.MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E | L.MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E.Fn): void;

/**
 * Generated from function `MR::StdFunction::foo`.
 *
 * Calls `MR_StdFunction_foo_std_function_std_string_func_from_int_float()`.
 */
export declare function MR_StdFunction_foo_std_function_std_string_func_from_int_float(_1: L.MR_C_std_function_std_string_from_int_float | L.MR_C_std_function_std_string_from_int_float.Fn): void;

/**
 * Generated from function `MR::StdFunction::foo`.
 *
 * Calls `MR_StdFunction_foo_std_function_void_func_from_std_string()`.
 */
export declare function MR_StdFunction_foo_std_function_void_func_from_std_string(_1: L.MR_C_std_function_void_from_std_string | L.MR_C_std_function_void_from_std_string.Fn): void;

/**
 * Generated from function `MR::StdFunction::foo`.
 *
 * Calls `MR_StdFunction_foo_std_function_void_func_from_MR_StdFunction_A()`.
 */
export declare function MR_StdFunction_foo_std_function_void_func_from_MR_StdFunction_A(_1: L.MR_C_std_function_void_from_MR_StdFunction_A | L.MR_C_std_function_void_from_MR_StdFunction_A.Fn): void;

/**
 * Generated from function `MR::StdFunction::foo`.
 *
 * Calls `MR_StdFunction_foo_std_function_MR_StdFunction_A_func()`.
 */
export declare function MR_StdFunction_foo_std_function_MR_StdFunction_A_func(_1: L.MR_C_std_function_MR_StdFunction_A | L.MR_C_std_function_MR_StdFunction_A.Fn): void;

