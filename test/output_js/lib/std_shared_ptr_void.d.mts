// The wrappers of the C bindings file `std_shared_ptr_void`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Wraps a pointer to a single shared reference-counted heap-allocated `void`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_shared_ptr_void extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_shared_ptr_void_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_shared_ptr_void_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_shared_ptr_void);
    /**
     * Create a new instance, storing a non-owning pointer.
     * The reference to the parameter `ptr` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_shared_ptr_void_ConstructNonOwning()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    constructor(ptr: number);
    /**
     * The aliasing constructor. Create a new instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
     * The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
     * The reference to the parameter `ptr` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_shared_ptr_void_ConstructAliasing()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    constructor(ownership: L.MR_C_std_shared_ptr_const_void, ptr: number);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_shared_ptr_void_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_shared_ptr_void): void;
    /**
     * Returns the stored pointer, possibly null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_shared_ptr_void_get()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get(): number;
    /**
     * Returns true if non-null.
     *
     * Calls `MR_C_std_shared_ptr_void_has_value()`.
     */
    has_value(): boolean;
    /**
     * How many shared pointers share the managed object. Zero if no object is being managed.
     * This being zero usually conincides with `MR_C_std_shared_ptr_void_get()` returning null, but is ultimately orthogonal.
     * Note that in multithreaded environments, the only safe way to use this number is comparing it with zero. Positive values might change by the time you get to use them.
     *
     * Calls `MR_C_std_shared_ptr_void_use_count()`.
     */
    use_count(): number;
    /**
     * Resets the pointer to null.
     *
     * Calls `MR_C_std_shared_ptr_void_reset()`.
     */
    reset(): void;
    /**
     * Overwrite the existing instance with a non-owning pointer. The previously owned object, if any, has its reference count decremented.
     * The reference to the parameter `ptr` might be preserved in this object.
     *
     * Calls `MR_C_std_shared_ptr_void_AssignNonOwning()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    assignNonOwning(ptr: number): void;
    /**
     * The aliasing assignment. Overwrite an existing instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
     * The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
     * The reference to the parameter `ptr` might be preserved in this object.
     *
     * Calls `MR_C_std_shared_ptr_void_AssignAliasing()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    AssignAliasing(ownership: L.MR_C_std_shared_ptr_const_void, ptr: number): void;
}

