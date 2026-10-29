// The wrappers of the C bindings file `std_list_int`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Generated from C++ container `std::list<int>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_list_int extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_list_int_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_list_int_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_list_int);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_list_int_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_list_int): void;
    /**
     * The number of elements.
     *
     * Calls `MR_C_std_list_int_size()`.
     */
    size(): number;
    /**
     * Returns true if the size is zero.
     *
     * Calls `MR_C_std_list_int_empty()`.
     */
    empty(): boolean;
    /**
     * Resizes the container. The new elements if any are zeroed.
     *
     * Calls `MR_C_std_list_int_resize()`.
     */
    resize(new_size: number): void;
    /**
     * Removes all elements from the container.
     *
     * Calls `MR_C_std_list_int_clear()`.
     */
    clear(): void;
    /**
     * The first element or null if empty, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_list_int_front()`.
     */
    front(): number | null;
    /**
     * The first element or null if empty, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_list_int_front_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    front_mut(): number;
    /**
     * The last element or null if empty, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_list_int_back()`.
     */
    back(): number | null;
    /**
     * The last element or null if empty, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_list_int_back_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    back_mut(): number;
    /**
     * Inserts a new element at the end.
     *
     * Calls `MR_C_std_list_int_push_back()`.
     */
    push_back(new_elem: number): void;
    /**
     * Removes one element from the end.
     *
     * Calls `MR_C_std_list_int_pop_back()`.
     */
    pop_back(): void;
    /**
     * Inserts a new element at the beginning.
     *
     * Calls `MR_C_std_list_int_push_front()`.
     */
    push_front(new_elem: number): void;
    /**
     * Removes one element from the beginning.
     *
     * Calls `MR_C_std_list_int_pop_front()`.
     */
    pop_front(): void;
    /**
     * The begin iterator, const.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_list_int_begin()`.
     */
    begin(): L.MR_C_std_list_int_const_iterator;
    /**
     * The end iterator, const.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_list_int_end()`.
     */
    end(): L.MR_C_std_list_int_const_iterator;
    /**
     * Tests whether a const iterator is the end iterator.
     *
     * Calls `MR_C_std_list_int_is_end()`.
     */
    is_end(iter: L.MR_C_std_list_int_const_iterator): boolean;
}

/**
 * Read-only iterator for `MR_C_std_list_int`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_list_int_const_iterator extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_list_int_const_iterator_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_list_int_const_iterator_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_list_int_const_iterator);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_list_int_const_iterator_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_list_int_const_iterator): void;
    /**
     * Dereferences a const iterator.
     * The reference to things referred to by this object (if any) might be preserved as the return value.
     *
     * Calls `MR_C_std_list_int_const_iterator_deref()`.
     */
    deref(): number;
    /**
     * Increments a const iterator.
     *
     * Calls `MR_C_std_list_int_const_iterator_incr()`.
     */
    incr(): void;
}

/**
 * Compares two const iterators for equality.
 *
 * Calls `MR_C_equal_MR_C_std_list_int_const_iterator()`.
 */
export declare function MR_C_equal_MR_C_std_list_int_const_iterator(a: L.MR_C_std_list_int_const_iterator, b: L.MR_C_std_list_int_const_iterator): boolean;

