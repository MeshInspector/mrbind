// The wrappers of the C bindings file `AB/common/std_vector_std_pair_MR_SeparateA_MR_SeparateB`.
import * as ffi from "../../../ffi.mjs";
import * as L from "../../../lib/_all.mjs";

/**
 * Generated from C++ container `std::vector<std::pair<MR::SeparateA, MR::SeparateB>>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB): void;
    /**
     * The number of elements.
     *
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_size()`.
     */
    size(): number;
    /**
     * Returns true if the size is zero.
     *
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_empty()`.
     */
    empty(): boolean;
    /**
     * Resizes the container. The new elements if any are set to the specified value.
     *
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_resize_with_default_value()`.
     */
    resize_with_default_value(new_size: number, value: L.MR_C_std_pair_MR_SeparateA_MR_SeparateB): void;
    /**
     * Removes all elements from the container.
     *
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_clear()`.
     */
    clear(): void;
    /**
     * The memory capacity, measued in the number of elements.
     *
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_capacity()`.
     */
    capacity(): number;
    /**
     * Reserves memory for a certain number of elements. Never shrinks the memory.
     *
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_reserve()`.
     */
    reserve(new_capacity: number): void;
    /**
     * Shrinks the capacity to match the size.
     *
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_shrink_to_fit()`.
     */
    shrink_to_fit(): void;
    /**
     * The element at a specific index, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_at()`.
     */
    at(i: number): L.MR_C_std_pair_MR_SeparateA_MR_SeparateB;
    /**
     * The element at a specific index, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_at_mut()`.
     */
    at_mut(i: number): L.MR_C_std_pair_MR_SeparateA_MR_SeparateB;
    /**
     * The first element or null if empty, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_front()`.
     */
    front(): L.MR_C_std_pair_MR_SeparateA_MR_SeparateB | null;
    /**
     * The first element or null if empty, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_front_mut()`.
     */
    front_mut(): L.MR_C_std_pair_MR_SeparateA_MR_SeparateB | null;
    /**
     * The last element or null if empty, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_back()`.
     */
    back(): L.MR_C_std_pair_MR_SeparateA_MR_SeparateB | null;
    /**
     * The last element or null if empty, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_back_mut()`.
     */
    back_mut(): L.MR_C_std_pair_MR_SeparateA_MR_SeparateB | null;
    /**
     * Inserts a new element at the end.
     * The reference to the parameter `new_elem` might be preserved in this object.
     *
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_push_back()`.
     */
    push_back(new_elem: L.MR_C_std_pair_MR_SeparateA_MR_SeparateB): void;
    /**
     * Removes one element from the end.
     *
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_pop_back()`.
     */
    pop_back(): void;
    /**
     * Inserts a new element right before the specified position.
     * The reference to the parameter `new_elem` might be preserved in this object.
     *
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_insert()`.
     */
    insert(position: number, new_elem: L.MR_C_std_pair_MR_SeparateA_MR_SeparateB): void;
    /**
     * Erases the element at the specified position.
     *
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_erase()`.
     */
    erase(position: number): void;
    /**
     * The begin iterator, const. Iterators of this container are plain pointers.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_begin()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    begin(): number;
    /**
     * The begin iterator, mutable. Iterators of this container are plain pointers.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_begin_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    begin_mut(): number;
    /**
     * The end iterator, const. Iterators of this container are plain pointers.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_end()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    end(): number;
    /**
     * The end iterator, mutable. Iterators of this container are plain pointers.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_end_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    end_mut(): number;
}

