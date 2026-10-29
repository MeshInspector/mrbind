// The wrappers of the C bindings file `std_deque_MR_StdContainers_NonAssignable`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Generated from C++ container `std::deque<MR::StdContainers::NonAssignable>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_deque_MR_StdContainers_NonAssignable extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_deque_MR_StdContainers_NonAssignable);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_deque_MR_StdContainers_NonAssignable): void;
    /**
     * The number of elements.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_size()`.
     */
    size(): number;
    /**
     * Returns true if the size is zero.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_empty()`.
     */
    empty(): boolean;
    /**
     * Resizes the container. The new elements if any are zeroed.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_resize()`.
     */
    resize(new_size: number): void;
    /**
     * Removes all elements from the container.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_clear()`.
     */
    clear(): void;
    /**
     * The element at a specific index, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_at()`.
     */
    at(i: number): L.MR_StdContainers_NonAssignable;
    /**
     * The element at a specific index, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_at_mut()`.
     */
    at_mut(i: number): L.MR_StdContainers_NonAssignable;
    /**
     * The first element or null if empty, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_front()`.
     */
    front(): L.MR_StdContainers_NonAssignable | null;
    /**
     * The first element or null if empty, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_front_mut()`.
     */
    front_mut(): L.MR_StdContainers_NonAssignable | null;
    /**
     * The last element or null if empty, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_back()`.
     */
    back(): L.MR_StdContainers_NonAssignable | null;
    /**
     * The last element or null if empty, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_back_mut()`.
     */
    back_mut(): L.MR_StdContainers_NonAssignable | null;
    /**
     * Inserts a new element at the end.
     * The reference to the parameter `new_elem` might be preserved in this object.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_push_back()`.
     */
    push_back(new_elem: L.MR_StdContainers_NonAssignable): void;
    /**
     * Removes one element from the end.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_pop_back()`.
     */
    pop_back(): void;
    /**
     * Inserts a new element at the beginning.
     * The reference to the parameter `new_elem` might be preserved in this object.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_push_front()`.
     */
    push_front(new_elem: L.MR_StdContainers_NonAssignable): void;
    /**
     * Removes one element from the beginning.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_pop_front()`.
     */
    pop_front(): void;
}

