// The wrappers of the C bindings file `std_vector_long`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Generated from C++ container `std::vector<long>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_vector_long extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_vector_long_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_vector_long_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_vector_long);
    /**
     * Construct from a range of elements.
     *
     * Calls `MR_C_std_vector_long_ConstructFromRange()`.
     */
    constructor(ptr: number | null | undefined, size: number);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_vector_long_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_vector_long): void;
    /**
     * Assign from a range of elements, overwriting previous contents.
     *
     * Calls `MR_C_std_vector_long_AssignFromRange()`.
     */
    assignFromRange(ptr: number | null | undefined, size: number): void;
    /**
     * The number of elements.
     *
     * Calls `MR_C_std_vector_long_size()`.
     */
    size(): number;
    /**
     * Returns true if the size is zero.
     *
     * Calls `MR_C_std_vector_long_empty()`.
     */
    empty(): boolean;
    /**
     * Resizes the container. The new elements if any are zeroed.
     *
     * Calls `MR_C_std_vector_long_resize()`.
     */
    resize(new_size: number): void;
    /**
     * Resizes the container. The new elements if any are set to the specified value.
     *
     * Calls `MR_C_std_vector_long_resize_with_default_value()`.
     */
    resize_with_default_value(new_size: number, value: number): void;
    /**
     * Removes all elements from the container.
     *
     * Calls `MR_C_std_vector_long_clear()`.
     */
    clear(): void;
    /**
     * The memory capacity, measued in the number of elements.
     *
     * Calls `MR_C_std_vector_long_capacity()`.
     */
    capacity(): number;
    /**
     * Reserves memory for a certain number of elements. Never shrinks the memory.
     *
     * Calls `MR_C_std_vector_long_reserve()`.
     */
    reserve(new_capacity: number): void;
    /**
     * Shrinks the capacity to match the size.
     *
     * Calls `MR_C_std_vector_long_shrink_to_fit()`.
     */
    shrink_to_fit(): void;
    /**
     * The element at a specific index, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_long_at()`.
     */
    at(i: number): number;
    /**
     * The element at a specific index, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_long_at_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    at_mut(i: number): number;
    /**
     * The first element or null if empty, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_long_front()`.
     */
    front(): number | null;
    /**
     * The first element or null if empty, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_long_front_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    front_mut(): number;
    /**
     * The last element or null if empty, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_long_back()`.
     */
    back(): number | null;
    /**
     * The last element or null if empty, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_long_back_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    back_mut(): number;
    /**
     * Returns a pointer to the continuous storage that holds all elements, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_long_data()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    data(): number;
    /**
     * Returns a pointer to the continuous storage that holds all elements, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_long_data_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    data_mut(): number;
    /**
     * Inserts a new element at the end.
     *
     * Calls `MR_C_std_vector_long_push_back()`.
     */
    push_back(new_elem: number): void;
    /**
     * Removes one element from the end.
     *
     * Calls `MR_C_std_vector_long_pop_back()`.
     */
    pop_back(): void;
    /**
     * Inserts a new element right before the specified position.
     *
     * Calls `MR_C_std_vector_long_insert()`.
     */
    insert(position: number, new_elem: number): void;
    /**
     * Erases the element at the specified position.
     *
     * Calls `MR_C_std_vector_long_erase()`.
     */
    erase(position: number): void;
    /**
     * The begin iterator, const. Iterators of this container are plain pointers.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_long_begin()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    begin(): number;
    /**
     * The begin iterator, mutable. Iterators of this container are plain pointers.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_long_begin_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    begin_mut(): number;
    /**
     * The end iterator, const. Iterators of this container are plain pointers.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_long_end()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    end(): number;
    /**
     * The end iterator, mutable. Iterators of this container are plain pointers.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_long_end_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    end_mut(): number;
    /** The elements as a new `BigInt64Array`, one scalar per element. */
    toArray(): BigInt64Array;
    /** A `BigInt64Array` over the wasm memory of the elements, one scalar per element, without a copy. It becomes invalid when the wasm memory grows (any allocation can do that) or the container changes, so use it right away. */
    view(): BigInt64Array;
    /** Resizes to `array.length / 1` elements and copies the scalars in. */
    setFromArray(array: ArrayLike<bigint>): void;
    /** A new container with `array.length / 1` elements, the scalars copied from `array`. */
    static fromArray(array: ArrayLike<bigint>): L.MR_C_std_vector_long;
}

