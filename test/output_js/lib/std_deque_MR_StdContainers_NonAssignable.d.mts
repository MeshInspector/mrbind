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
     * Tests whether a const iterator is the begin iterator.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_is_begin()`.
     */
    is_begin(iter: L.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator): boolean;
    /**
     * Tests whether a mutable iterator is the begin iterator.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_is_begin_mut()`.
     */
    is_begin(iter: L.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator): boolean;
    /** The overloads of `is_begin` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /**
     * Tests whether a const iterator is the end iterator.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_is_end()`.
     */
    is_end(iter: L.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator): boolean;
    /**
     * Tests whether a mutable iterator is the end iterator.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_is_end_mut()`.
     */
    is_end(iter: L.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator): boolean;
    /** The overloads of `is_end` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /**
     * Convert a const iterator to an index.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_to_index()`.
     */
    to_index(iter: L.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator): number;
    /**
     * Convert a mutable iterator to an index.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_to_index_mut()`.
     */
    to_index(iter: L.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator): number;
    /** The overloads of `to_index` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
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
    /**
     * The begin iterator, const.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_begin()`.
     */
    begin(): L.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator;
    /**
     * Tests whether a const iterator is the begin iterator.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_is_begin()`.
     */
    is_begin_2(iter: L.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator): boolean;
    /**
     * The begin iterator, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_begin_mut()`.
     */
    begin_mut(): L.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator;
    /**
     * Tests whether a mutable iterator is the begin iterator.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_is_begin_mut()`.
     */
    is_begin_mut(iter: L.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator): boolean;
    /**
     * The end iterator, const.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_end()`.
     */
    end(): L.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator;
    /**
     * Tests whether a const iterator is the end iterator.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_is_end()`.
     */
    is_end_2(iter: L.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator): boolean;
    /**
     * The end iterator, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_end_mut()`.
     */
    end_mut(): L.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator;
    /**
     * Tests whether a mutable iterator is the end iterator.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_is_end_mut()`.
     */
    is_end_mut(iter: L.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator): boolean;
    /**
     * Convert a const iterator to an index.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_to_index()`.
     */
    to_index_2(iter: L.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator): number;
    /**
     * Convert a mutable iterator to an index.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_to_index_mut()`.
     */
    to_index_mut(iter: L.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator): number;
}

/**
 * Read-only iterator for `MR_C_std_deque_MR_StdContainers_NonAssignable`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator);
    /**
     * Makes a const iterator from a mutable one.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_from_mutable()`.
     */
    constructor(iter: L.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator): void;
    /**
     * Dereferences a const iterator.
     * The reference to things referred to by this object (if any) might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_deref()`.
     */
    deref(): L.MR_StdContainers_NonAssignable;
    /**
     * Increments a const iterator.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_incr()`.
     */
    incr(): void;
    /**
     * Decrements a const iterator.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_decr()`.
     */
    decr(): void;
    /**
     * Increments or decrements a const iterator by the specific amount. Completes in constant time.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_add_assign()`.
     */
    add_assign(delta: number): void;
}

/**
 * Mutable iterator for `MR_C_std_deque_MR_StdContainers_NonAssignable`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_deque_MR_StdContainers_NonAssignable_iterator extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator): void;
    /**
     * Dereferences a mutable iterator.
     * The reference to things referred to by this object (if any) might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_deref()`.
     */
    deref(): L.MR_StdContainers_NonAssignable;
    /**
     * Increments a mutable iterator.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_incr()`.
     */
    incr(): void;
    /**
     * Decrements a mutable iterator.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_decr()`.
     */
    decr(): void;
    /**
     * Increments or decrements a mutable iterator by the specific amount. Completes in constant time.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_add_assign()`.
     */
    add_assign(delta: number): void;
}

/**
 * Computes the signed difference between two const iterators. Completes in constant time.
 *
 * Calls `MR_C_sub_MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator()`.
 */
export declare function MR_C_sub_MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator(a: L.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator, b: L.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator): number;

/**
 * Compares two const iterators for equality.
 *
 * Calls `MR_C_equal_MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator()`.
 */
export declare function MR_C_equal_MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator(a: L.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator, b: L.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator): boolean;

/**
 * Computes the signed difference between two mutable iterators. Completes in constant time.
 *
 * Calls `MR_C_sub_MR_C_std_deque_MR_StdContainers_NonAssignable_iterator()`.
 */
export declare function MR_C_sub_MR_C_std_deque_MR_StdContainers_NonAssignable_iterator(a: L.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator, b: L.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator): number;

/**
 * Compares two mutable iterators for equality.
 *
 * Calls `MR_C_equal_MR_C_std_deque_MR_StdContainers_NonAssignable_iterator()`.
 */
export declare function MR_C_equal_MR_C_std_deque_MR_StdContainers_NonAssignable_iterator(a: L.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator, b: L.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator): boolean;

