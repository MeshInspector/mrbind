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
    /**
     * Construct from a range of elements.
     *
     * Calls `MR_C_std_deque_int_ConstructFromRange()`.
     */
    constructor(ptr: number | null | undefined, size: number);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Tests whether a const iterator is the begin iterator.
     *
     * Calls `MR_C_std_deque_int_is_begin()`.
     */
    is_begin(iter: L.MR_C_std_deque_int_const_iterator): boolean;
    /**
     * Tests whether a mutable iterator is the begin iterator.
     *
     * Calls `MR_C_std_deque_int_is_begin_mut()`.
     */
    is_begin(iter: L.MR_C_std_deque_int_iterator): boolean;
    /** The overloads of `is_begin` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /**
     * Tests whether a const iterator is the end iterator.
     *
     * Calls `MR_C_std_deque_int_is_end()`.
     */
    is_end(iter: L.MR_C_std_deque_int_const_iterator): boolean;
    /**
     * Tests whether a mutable iterator is the end iterator.
     *
     * Calls `MR_C_std_deque_int_is_end_mut()`.
     */
    is_end(iter: L.MR_C_std_deque_int_iterator): boolean;
    /** The overloads of `is_end` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /**
     * Convert a const iterator to an index.
     *
     * Calls `MR_C_std_deque_int_to_index()`.
     */
    to_index(iter: L.MR_C_std_deque_int_const_iterator): number;
    /**
     * Convert a mutable iterator to an index.
     *
     * Calls `MR_C_std_deque_int_to_index_mut()`.
     */
    to_index(iter: L.MR_C_std_deque_int_iterator): number;
    /** The overloads of `to_index` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_deque_int_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_deque_int): void;
    /**
     * Assign from a range of elements, overwriting previous contents.
     *
     * Calls `MR_C_std_deque_int_AssignFromRange()`.
     */
    assignFromRange(ptr: number | null | undefined, size: number): void;
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
     * Resizes the container. The new elements if any are set to the specified value.
     *
     * Calls `MR_C_std_deque_int_resize_with_default_value()`.
     */
    resize_with_default_value(new_size: number, value: number): void;
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
    /**
     * Inserts a new element right before the specified position.
     *
     * Calls `MR_C_std_deque_int_insert_at_mutable_iter()`.
     */
    insert_at_mutable_iter(position: L.MR_C_std_deque_int_iterator, new_elem: number): void;
    /**
     * Erases the element at the specified position.
     *
     * Calls `MR_C_std_deque_int_erase_at_mutable_iter()`.
     */
    erase_at_mutable_iter(position: L.MR_C_std_deque_int_iterator): void;
    /**
     * Inserts a new element right before the specified position. This version takes the position in form of a const iterator, that's the only difference.
     *
     * Calls `MR_C_std_deque_int_insert_at_iter()`.
     */
    insert_at_iter(position: L.MR_C_std_deque_int_const_iterator, new_elem: number): void;
    /**
     * Erases the element at the specified position. This version takes the position in form of a const iterator, that's the only difference.
     *
     * Calls `MR_C_std_deque_int_erase_at_iter()`.
     */
    erase_at_iter(position: L.MR_C_std_deque_int_const_iterator): void;
    /**
     * The begin iterator, const.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_int_begin()`.
     */
    begin(): L.MR_C_std_deque_int_const_iterator;
    /**
     * Tests whether a const iterator is the begin iterator.
     *
     * Calls `MR_C_std_deque_int_is_begin()`.
     */
    is_begin_2(iter: L.MR_C_std_deque_int_const_iterator): boolean;
    /**
     * The begin iterator, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_int_begin_mut()`.
     */
    begin_mut(): L.MR_C_std_deque_int_iterator;
    /**
     * Tests whether a mutable iterator is the begin iterator.
     *
     * Calls `MR_C_std_deque_int_is_begin_mut()`.
     */
    is_begin_mut(iter: L.MR_C_std_deque_int_iterator): boolean;
    /**
     * The end iterator, const.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_int_end()`.
     */
    end(): L.MR_C_std_deque_int_const_iterator;
    /**
     * Tests whether a const iterator is the end iterator.
     *
     * Calls `MR_C_std_deque_int_is_end()`.
     */
    is_end_2(iter: L.MR_C_std_deque_int_const_iterator): boolean;
    /**
     * The end iterator, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_int_end_mut()`.
     */
    end_mut(): L.MR_C_std_deque_int_iterator;
    /**
     * Tests whether a mutable iterator is the end iterator.
     *
     * Calls `MR_C_std_deque_int_is_end_mut()`.
     */
    is_end_mut(iter: L.MR_C_std_deque_int_iterator): boolean;
    /**
     * Convert a const iterator to an index.
     *
     * Calls `MR_C_std_deque_int_to_index()`.
     */
    to_index_2(iter: L.MR_C_std_deque_int_const_iterator): number;
    /**
     * Convert a mutable iterator to an index.
     *
     * Calls `MR_C_std_deque_int_to_index_mut()`.
     */
    to_index_mut(iter: L.MR_C_std_deque_int_iterator): number;
}

/**
 * Read-only iterator for `MR_C_std_deque_int`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_deque_int_const_iterator extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_deque_int_const_iterator_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_deque_int_const_iterator_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_deque_int_const_iterator);
    /**
     * Makes a const iterator from a mutable one.
     *
     * Calls `MR_C_std_deque_int_const_iterator_from_mutable()`.
     */
    constructor(iter: L.MR_C_std_deque_int_iterator);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_deque_int_const_iterator_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_deque_int_const_iterator): void;
    /**
     * Dereferences a const iterator.
     * The reference to things referred to by this object (if any) might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_int_const_iterator_deref()`.
     */
    deref(): number;
    /**
     * Increments a const iterator.
     *
     * Calls `MR_C_std_deque_int_const_iterator_incr()`.
     */
    incr(): void;
    /**
     * Decrements a const iterator.
     *
     * Calls `MR_C_std_deque_int_const_iterator_decr()`.
     */
    decr(): void;
    /**
     * Increments or decrements a const iterator by the specific amount. Completes in constant time.
     *
     * Calls `MR_C_std_deque_int_const_iterator_add_assign()`.
     */
    add_assign(delta: number): void;
}

/**
 * Mutable iterator for `MR_C_std_deque_int`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_deque_int_iterator extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_deque_int_iterator_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_deque_int_iterator_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_deque_int_iterator);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_deque_int_iterator_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_deque_int_iterator): void;
    /**
     * Dereferences a mutable iterator.
     * The reference to things referred to by this object (if any) might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_int_iterator_deref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    deref(): number;
    /**
     * Increments a mutable iterator.
     *
     * Calls `MR_C_std_deque_int_iterator_incr()`.
     */
    incr(): void;
    /**
     * Decrements a mutable iterator.
     *
     * Calls `MR_C_std_deque_int_iterator_decr()`.
     */
    decr(): void;
    /**
     * Increments or decrements a mutable iterator by the specific amount. Completes in constant time.
     *
     * Calls `MR_C_std_deque_int_iterator_add_assign()`.
     */
    add_assign(delta: number): void;
}

/**
 * Computes the signed difference between two const iterators. Completes in constant time.
 *
 * Calls `MR_C_sub_MR_C_std_deque_int_const_iterator()`.
 */
export declare function MR_C_sub_MR_C_std_deque_int_const_iterator(a: L.MR_C_std_deque_int_const_iterator, b: L.MR_C_std_deque_int_const_iterator): number;

/**
 * Compares two const iterators for equality.
 *
 * Calls `MR_C_equal_MR_C_std_deque_int_const_iterator()`.
 */
export declare function MR_C_equal_MR_C_std_deque_int_const_iterator(a: L.MR_C_std_deque_int_const_iterator, b: L.MR_C_std_deque_int_const_iterator): boolean;

/**
 * Computes the signed difference between two mutable iterators. Completes in constant time.
 *
 * Calls `MR_C_sub_MR_C_std_deque_int_iterator()`.
 */
export declare function MR_C_sub_MR_C_std_deque_int_iterator(a: L.MR_C_std_deque_int_iterator, b: L.MR_C_std_deque_int_iterator): number;

/**
 * Compares two mutable iterators for equality.
 *
 * Calls `MR_C_equal_MR_C_std_deque_int_iterator()`.
 */
export declare function MR_C_equal_MR_C_std_deque_int_iterator(a: L.MR_C_std_deque_int_iterator, b: L.MR_C_std_deque_int_iterator): boolean;

