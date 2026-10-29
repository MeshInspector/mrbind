// The wrappers of the C bindings file `std_deque_int`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Generated from C++ container `std::deque<int>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_deque_int extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_deque_int_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_deque_int_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_deque_int);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_deque_int_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_deque_int): void;
    /**
     * The number of elements.
     *
     * Calls `MR_C_std_deque_int_size()`.
     */
    size(): number;
    /**
     * Returns true if the size is zero.
     *
     * Calls `MR_C_std_deque_int_empty()`.
     */
    empty(): boolean;
    /**
     * Resizes the container. The new elements if any are zeroed.
     *
     * Calls `MR_C_std_deque_int_resize()`.
     */
    resize(new_size: number): void;
    /**
     * Removes all elements from the container.
     *
     * Calls `MR_C_std_deque_int_clear()`.
     */
    clear(): void;
    /**
     * The element at a specific index, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_int_at()`.
     */
    at(i: number): number;
    /**
     * The element at a specific index, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_int_at_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    at_mut(i: number): number;
    /**
     * The first element or null if empty, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_int_front()`.
     */
    front(): number | null;
    /**
     * The first element or null if empty, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_int_front_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    front_mut(): number;
    /**
     * The last element or null if empty, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_int_back()`.
     */
    back(): number | null;
    /**
     * The last element or null if empty, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_int_back_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    back_mut(): number;
    /**
     * Inserts a new element at the end.
     *
     * Calls `MR_C_std_deque_int_push_back()`.
     */
    push_back(new_elem: number): void;
    /**
     * Removes one element from the end.
     *
     * Calls `MR_C_std_deque_int_pop_back()`.
     */
    pop_back(): void;
    /**
     * Inserts a new element at the beginning.
     *
     * Calls `MR_C_std_deque_int_push_front()`.
     */
    push_front(new_elem: number): void;
    /**
     * Removes one element from the beginning.
     *
     * Calls `MR_C_std_deque_int_pop_front()`.
     */
    pop_front(): void;
    /**
     * Inserts a new element right before the specified position.
     *
     * Calls `MR_C_std_deque_int_insert()`.
     */
    insert(position: number, new_elem: number): void;
    /**
     * Erases the element at the specified position.
     *
     * Calls `MR_C_std_deque_int_erase()`.
     */
    erase(position: number): void;
}

