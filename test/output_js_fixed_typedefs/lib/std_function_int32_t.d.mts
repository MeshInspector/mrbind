// The wrappers of the C bindings file `std_function_int32_t`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores a functor of type: `int32_t(void)`. Possibly stateful.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_function_int32_t extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_function_int32_t_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_function_int32_t_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_function_int32_t | L.MR_C_std_function_int32_t.Fn);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_function_int32_t_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_function_int32_t | L.MR_C_std_function_int32_t.Fn): void;
    /**
     * Returns true if this instance stores a callable, as opposed to being null.
     *
     * Calls `MR_C_std_function_int32_t_has_value()`.
     */
    has_value(): boolean;
    /**
     * Destroys the stored callable, making this instance null.
     *
     * Calls `MR_C_std_function_int32_t_reset()`.
     */
    reset(): void;
    /**
     * Calls the stored callable.
     *
     * Calls `MR_C_std_function_int32_t_call()`.
     */
    call(): number;
    /** Constructs an instance holding a JS function. The copies of the instance share it. An exception thrown by the function is rethrown by the wrapper that called into C.
     *
     * Calls `MR_C_std_function_int32_t_ConstructEx()`. */
    static of(func: L.MR_C_std_function_int32_t.Fn): L.MR_C_std_function_int32_t;
    /** Replaces the stored callable with a JS function.
     *
     * Calls `MR_C_std_function_int32_t_AssignEx()`. */
    assignFn(func: L.MR_C_std_function_int32_t.Fn): void;
}

export declare namespace MR_C_std_function_int32_t
{
    /** The JS function an instance can hold. */
    type Fn = () => number;
}

