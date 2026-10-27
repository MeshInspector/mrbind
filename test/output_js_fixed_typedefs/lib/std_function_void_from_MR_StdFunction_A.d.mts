// The wrappers of the C bindings file `std_function_void_from_MR_StdFunction_A`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores a functor of type: `void(MR::StdFunction::A)`. Possibly stateful.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_function_void_from_MR_StdFunction_A extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_function_void_from_MR_StdFunction_A_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_function_void_from_MR_StdFunction_A_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_function_void_from_MR_StdFunction_A | L.MR_C_std_function_void_from_MR_StdFunction_A.Fn);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_function_void_from_MR_StdFunction_A_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_function_void_from_MR_StdFunction_A | L.MR_C_std_function_void_from_MR_StdFunction_A.Fn): void;
    /**
     * Returns true if this instance stores a callable, as opposed to being null.
     *
     * Calls `MR_C_std_function_void_from_MR_StdFunction_A_has_value()`.
     */
    has_value(): boolean;
    /**
     * Destroys the stored callable, making this instance null.
     *
     * Calls `MR_C_std_function_void_from_MR_StdFunction_A_reset()`.
     */
    reset(): void;
    /**
     * Calls the stored callable.
     *
     * Calls `MR_C_std_function_void_from_MR_StdFunction_A_call()`.
     */
    call(_1: L.MR_StdFunction_A): void;
    /** Constructs an instance holding a JS function. The copies of the instance share it. An exception thrown by the function is rethrown by the wrapper that called into C.
     *
     * Calls `MR_C_std_function_void_from_MR_StdFunction_A_ConstructEx()`. */
    static of(func: L.MR_C_std_function_void_from_MR_StdFunction_A.Fn): L.MR_C_std_function_void_from_MR_StdFunction_A;
    /** Replaces the stored callable with a JS function.
     *
     * Calls `MR_C_std_function_void_from_MR_StdFunction_A_AssignEx()`. */
    assignFn(func: L.MR_C_std_function_void_from_MR_StdFunction_A.Fn): void;
}

export declare namespace MR_C_std_function_void_from_MR_StdFunction_A
{
    /** The JS function an instance can hold. */
    type Fn = (_1: L.MR_StdFunction_A | null) => void;
}

