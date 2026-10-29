// The wrappers of the C bindings file `std_vector_uint64_t`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Generated from C++ container `std::vector<MR_C_uint64_t>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_vector_uint64_t extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_vector_uint64_t_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_vector_uint64_t_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_vector_uint64_t);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_vector_uint64_t_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_vector_uint64_t): void;
    /**
     * The number of elements.
     *
     * Calls `MR_C_std_vector_uint64_t_size()`.
     */
    size(): number;
    /**
     * Returns true if the size is zero.
     *
     * Calls `MR_C_std_vector_uint64_t_empty()`.
     */
    empty(): boolean;
    /**
     * Resizes the container. The new elements if any are zeroed.
     *
     * Calls `MR_C_std_vector_uint64_t_resize()`.
     */
    resize(new_size: number): void;
    /**
     * Removes all elements from the container.
     *
     * Calls `MR_C_std_vector_uint64_t_clear()`.
     */
    clear(): void;
    /**
     * Reserves memory for a certain number of elements. Never shrinks the memory.
     *
     * Calls `MR_C_std_vector_uint64_t_reserve()`.
     */
    reserve(new_capacity: number): void;
    /**
     * The element at a specific index, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_uint64_t_at()`.
     */
    at(i: number): bigint;
    /**
     * The element at a specific index, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_uint64_t_at_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    at_mut(i: number): number;
    /**
     * The first element or null if empty, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_uint64_t_front()`.
     */
    front(): bigint | null;
    /**
     * The first element or null if empty, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_uint64_t_front_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    front_mut(): number;
    /**
     * The last element or null if empty, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_uint64_t_back()`.
     */
    back(): bigint | null;
    /**
     * The last element or null if empty, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_uint64_t_back_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    back_mut(): number;
    /**
     * Returns a pointer to the continuous storage that holds all elements, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_uint64_t_data()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    data(): number;
    /**
     * Returns a pointer to the continuous storage that holds all elements, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_uint64_t_data_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    data_mut(): number;
    /**
     * Inserts a new element at the end.
     * The reference to the parameter `new_elem` might be preserved in this object.
     *
     * Calls `MR_C_std_vector_uint64_t_push_back()`.
     */
    push_back(new_elem: number | bigint): void;
    /**
     * Removes one element from the end.
     *
     * Calls `MR_C_std_vector_uint64_t_pop_back()`.
     */
    pop_back(): void;
    /**
     * Inserts a new element right before the specified position.
     * The reference to the parameter `new_elem` might be preserved in this object.
     *
     * Calls `MR_C_std_vector_uint64_t_insert()`.
     */
    insert(position: number, new_elem: number | bigint): void;
    /**
     * Erases the element at the specified position.
     *
     * Calls `MR_C_std_vector_uint64_t_erase()`.
     */
    erase(position: number): void;
    /** The elements as a new `BigUint64Array`, one scalar per element. */
    toArray(): BigUint64Array;
    /** A `BigUint64Array` over the wasm memory of the elements, one scalar per element, without a copy. It becomes invalid when the wasm memory grows (any allocation can do that) or the container changes, so use it right away. */
    view(): BigUint64Array;
    /** Resizes to `array.length / 1` elements and copies the scalars in. */
    setFromArray(array: ArrayLike<bigint>): void;
    /** A new container with `array.length / 1` elements, the scalars copied from `array`. */
    static fromArray(array: ArrayLike<bigint>): L.MR_C_std_vector_uint64_t;
}

