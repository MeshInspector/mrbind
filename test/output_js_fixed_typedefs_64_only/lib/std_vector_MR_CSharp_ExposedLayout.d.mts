// The wrappers of the C bindings file `std_vector_MR_CSharp_ExposedLayout`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Generated from C++ container `std::vector<MR::CSharp::ExposedLayout>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_vector_MR_CSharp_ExposedLayout extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_vector_MR_CSharp_ExposedLayout);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_vector_MR_CSharp_ExposedLayout): void;
    /**
     * The number of elements.
     *
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_size()`.
     */
    size(): number;
    /**
     * Returns true if the size is zero.
     *
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_empty()`.
     */
    empty(): boolean;
    /**
     * Resizes the container. The new elements if any are zeroed.
     *
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_resize()`.
     */
    resize(new_size: number): void;
    /**
     * Removes all elements from the container.
     *
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_clear()`.
     */
    clear(): void;
    /**
     * Reserves memory for a certain number of elements. Never shrinks the memory.
     *
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_reserve()`.
     */
    reserve(new_capacity: number): void;
    /**
     * The element at a specific index, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_at()`.
     */
    at(i: number): L.MR_CSharp_ExposedLayout;
    /**
     * The element at a specific index, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_at_mut()`.
     */
    at_mut(i: number): L.MR_CSharp_ExposedLayout;
    /**
     * The first element or null if empty, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_front()`.
     */
    front(): L.MR_CSharp_ExposedLayout | null;
    /**
     * The first element or null if empty, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_front_mut()`.
     */
    front_mut(): L.MR_CSharp_ExposedLayout | null;
    /**
     * The last element or null if empty, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_back()`.
     */
    back(): L.MR_CSharp_ExposedLayout | null;
    /**
     * The last element or null if empty, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_back_mut()`.
     */
    back_mut(): L.MR_CSharp_ExposedLayout | null;
    /**
     * Returns a pointer to the continuous storage that holds all elements, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_data()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    data(): number;
    /**
     * Returns a pointer to the continuous storage that holds all elements, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_data_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    data_mut(): number;
    /**
     * Inserts a new element at the end.
     * The reference to the parameter `new_elem` might be preserved in this object.
     *
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_push_back()`.
     */
    push_back(new_elem: L.MR_CSharp_ExposedLayout): void;
    /**
     * Removes one element from the end.
     *
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_pop_back()`.
     */
    pop_back(): void;
    /**
     * Inserts a new element right before the specified position.
     * The reference to the parameter `new_elem` might be preserved in this object.
     *
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_insert()`.
     */
    insert(position: number, new_elem: L.MR_CSharp_ExposedLayout): void;
    /**
     * Erases the element at the specified position.
     *
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_erase()`.
     */
    erase(position: number): void;
}

