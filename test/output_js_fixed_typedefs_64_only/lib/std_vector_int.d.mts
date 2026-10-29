// The wrappers of the C bindings file `std_vector_int`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Generated from C++ container `std::vector<int>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_vector_int extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_vector_int_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_vector_int_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_vector_int);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_vector_int_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_vector_int): void;
    /**
     * The number of elements.
     *
     * Calls `MR_C_std_vector_int_size()`.
     */
    size(): number;
    /**
     * Returns true if the size is zero.
     *
     * Calls `MR_C_std_vector_int_empty()`.
     */
    empty(): boolean;
    /**
     * Resizes the container. The new elements if any are zeroed.
     *
     * Calls `MR_C_std_vector_int_resize()`.
     */
    resize(new_size: number): void;
    /**
     * Removes all elements from the container.
     *
     * Calls `MR_C_std_vector_int_clear()`.
     */
    clear(): void;
    /**
     * Reserves memory for a certain number of elements. Never shrinks the memory.
     *
     * Calls `MR_C_std_vector_int_reserve()`.
     */
    reserve(new_capacity: number): void;
    /**
     * The element at a specific index, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_int_at()`.
     */
    at(i: number): number;
    /**
     * The element at a specific index, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_int_at_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    at_mut(i: number): number;
    /**
     * The first element or null if empty, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_int_front()`.
     */
    front(): number | null;
    /**
     * The first element or null if empty, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_int_front_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    front_mut(): number;
    /**
     * The last element or null if empty, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_int_back()`.
     */
    back(): number | null;
    /**
     * The last element or null if empty, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_int_back_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    back_mut(): number;
    /**
     * Returns a pointer to the continuous storage that holds all elements, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_int_data()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    data(): number;
    /**
     * Returns a pointer to the continuous storage that holds all elements, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_int_data_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    data_mut(): number;
    /**
     * Inserts a new element at the end.
     *
     * Calls `MR_C_std_vector_int_push_back()`.
     */
    push_back(new_elem: number): void;
    /**
     * Removes one element from the end.
     *
     * Calls `MR_C_std_vector_int_pop_back()`.
     */
    pop_back(): void;
    /**
     * Inserts a new element right before the specified position.
     *
     * Calls `MR_C_std_vector_int_insert()`.
     */
    insert(position: number, new_elem: number): void;
    /**
     * Erases the element at the specified position.
     *
     * Calls `MR_C_std_vector_int_erase()`.
     */
    erase(position: number): void;
    /** The elements as a new `Int32Array`, one scalar per element. */
    toArray(): Int32Array;
    /** A `Int32Array` over the wasm memory of the elements, one scalar per element, without a copy. It becomes invalid when the wasm memory grows (any allocation can do that) or the container changes, so use it right away. */
    view(): Int32Array;
    /** Resizes to `array.length / 1` elements and copies the scalars in. */
    setFromArray(array: ArrayLike<number>): void;
    /** A new container with `array.length / 1` elements, the scalars copied from `array`. */
    static fromArray(array: ArrayLike<number>): L.MR_C_std_vector_int;
}

