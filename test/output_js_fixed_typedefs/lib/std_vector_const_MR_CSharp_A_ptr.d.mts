// The wrappers of the C bindings file `std_vector_const_MR_CSharp_A_ptr`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Generated from C++ container `std::vector<const MR::CSharp::A *>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_vector_const_MR_CSharp_A_ptr extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_vector_const_MR_CSharp_A_ptr);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_vector_const_MR_CSharp_A_ptr): void;
    /**
     * The number of elements.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_size()`.
     */
    size(): number;
    /**
     * Returns true if the size is zero.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_empty()`.
     */
    empty(): boolean;
    /**
     * Resizes the container. The new elements if any are zeroed.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_resize()`.
     */
    resize(new_size: number): void;
    /**
     * Resizes the container. The new elements if any are set to the specified value.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_resize_with_default_value()`.
     */
    resize_with_default_value(new_size: number, value?: L.MR_CSharp_A | null): void;
    /**
     * Removes all elements from the container.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_clear()`.
     */
    clear(): void;
    /**
     * The memory capacity, measued in the number of elements.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_capacity()`.
     */
    capacity(): number;
    /**
     * Reserves memory for a certain number of elements. Never shrinks the memory.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_reserve()`.
     */
    reserve(new_capacity: number): void;
    /**
     * Shrinks the capacity to match the size.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_shrink_to_fit()`.
     */
    shrink_to_fit(): void;
    /**
     * The element at a specific index, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_at()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    at(i: number): number;
    /**
     * The element at a specific index, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_at_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    at_mut(i: number): number;
    /**
     * The first element or null if empty, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_front()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    front(): number;
    /**
     * The first element or null if empty, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_front_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    front_mut(): number;
    /**
     * The last element or null if empty, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_back()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    back(): number;
    /**
     * The last element or null if empty, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_back_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    back_mut(): number;
    /**
     * Inserts a new element at the end.
     * The reference to the parameter `new_elem` might be preserved in this object.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_push_back()`.
     */
    push_back(new_elem?: L.MR_CSharp_A | null): void;
    /**
     * Removes one element from the end.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_pop_back()`.
     */
    pop_back(): void;
    /**
     * Inserts a new element right before the specified position.
     * The reference to the parameter `new_elem` might be preserved in this object.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_insert()`.
     */
    insert(position: number, new_elem?: L.MR_CSharp_A | null): void;
    /**
     * Erases the element at the specified position.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_erase()`.
     */
    erase(position: number): void;
    /**
     * The begin iterator, const. Iterators of this container are plain pointers.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_begin()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    begin(): number;
    /**
     * The begin iterator, mutable. Iterators of this container are plain pointers.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_begin_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    begin_mut(): number;
    /**
     * The end iterator, const. Iterators of this container are plain pointers.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_end()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    end(): number;
    /**
     * The end iterator, mutable. Iterators of this container are plain pointers.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_end_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    end_mut(): number;
}

