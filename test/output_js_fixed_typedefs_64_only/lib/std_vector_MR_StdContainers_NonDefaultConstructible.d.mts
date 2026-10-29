// The wrappers of the C bindings file `std_vector_MR_StdContainers_NonDefaultConstructible`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Generated from C++ container `std::vector<MR::StdContainers::NonDefaultConstructible>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_vector_MR_StdContainers_NonDefaultConstructible extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible): void;
    /**
     * The number of elements.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_size()`.
     */
    size(): number;
    /**
     * Returns true if the size is zero.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_empty()`.
     */
    empty(): boolean;
    /**
     * Removes all elements from the container.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_clear()`.
     */
    clear(): void;
    /**
     * Reserves memory for a certain number of elements. Never shrinks the memory.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_reserve()`.
     */
    reserve(new_capacity: number): void;
    /**
     * The element at a specific index, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at()`.
     */
    at(i: number): L.MR_StdContainers_NonDefaultConstructible;
    /**
     * The element at a specific index, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at_mut()`.
     */
    at_mut(i: number): L.MR_StdContainers_NonDefaultConstructible;
    /**
     * The first element or null if empty, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front()`.
     */
    front(): L.MR_StdContainers_NonDefaultConstructible | null;
    /**
     * The first element or null if empty, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front_mut()`.
     */
    front_mut(): L.MR_StdContainers_NonDefaultConstructible | null;
    /**
     * The last element or null if empty, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back()`.
     */
    back(): L.MR_StdContainers_NonDefaultConstructible | null;
    /**
     * The last element or null if empty, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back_mut()`.
     */
    back_mut(): L.MR_StdContainers_NonDefaultConstructible | null;
    /**
     * Inserts a new element at the end.
     * The reference to the parameter `new_elem` might be preserved in this object.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_push_back()`.
     */
    push_back(new_elem: L.MR_StdContainers_NonDefaultConstructible): void;
    /**
     * Removes one element from the end.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_pop_back()`.
     */
    pop_back(): void;
    /**
     * Inserts a new element right before the specified position.
     * The reference to the parameter `new_elem` might be preserved in this object.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert()`.
     */
    insert(position: number, new_elem: L.MR_StdContainers_NonDefaultConstructible): void;
    /**
     * Erases the element at the specified position.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase()`.
     */
    erase(position: number): void;
}

