// The wrappers of the C bindings file `std_multimap_MR_StdContainers_NonAssignable_float`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Generated from C++ container `std::multimap<MR::StdContainers::NonAssignable, float>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_multimap_MR_StdContainers_NonAssignable_float extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_multimap_MR_StdContainers_NonAssignable_float);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Tests whether a const iterator is the begin iterator.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_is_begin()`.
     */
    is_begin(iter: L.MR_C_std_multimap_MR_StdContainers_NonAssignable_float_const_iterator): boolean;
    /**
     * Tests whether a mutable iterator is the begin iterator.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_is_begin_mut()`.
     */
    is_begin(iter: L.MR_C_std_multimap_MR_StdContainers_NonAssignable_float_iterator): boolean;
    /** The overloads of `is_begin` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /**
     * Tests whether a const iterator is the end iterator.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_is_end()`.
     */
    is_end(iter: L.MR_C_std_multimap_MR_StdContainers_NonAssignable_float_const_iterator): boolean;
    /**
     * Tests whether a mutable iterator is the end iterator.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_is_end_mut()`.
     */
    is_end(iter: L.MR_C_std_multimap_MR_StdContainers_NonAssignable_float_iterator): boolean;
    /** The overloads of `is_end` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_multimap_MR_StdContainers_NonAssignable_float): void;
    /**
     * The number of elements.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_size()`.
     */
    size(): number;
    /**
     * Returns true if the size is zero.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_empty()`.
     */
    empty(): boolean;
    /**
     * Removes all elements from the container.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_clear()`.
     */
    clear(): void;
    /**
     * Checks if the contain contains this key.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_count()`.
     */
    count(key: L.MR_StdContainers_NonAssignable): number;
    /**
     * Finds the element by key, or returns the end iterator if no such key. Returns a read-only iterator.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_find()`.
     */
    find(key: L.MR_StdContainers_NonAssignable): L.MR_C_std_multimap_MR_StdContainers_NonAssignable_float_const_iterator;
    /**
     * Finds the element by key, or returns the end iterator if no such key. Returns a mutable iterator.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_find_mut()`.
     */
    find_mut(key: L.MR_StdContainers_NonAssignable): L.MR_C_std_multimap_MR_StdContainers_NonAssignable_float_iterator;
    /**
     * Finds the element by key and returns its mapped value, read-only, or null if no such key.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_find_value()`.
     */
    find_value(key: L.MR_StdContainers_NonAssignable): number | null;
    /**
     * Finds the element by key and returns its mapped value, mutable, or null if no such key.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_find_value_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    find_value_mut(key: L.MR_StdContainers_NonAssignable): number;
    /**
     * The begin iterator, const.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_begin()`.
     */
    begin(): L.MR_C_std_multimap_MR_StdContainers_NonAssignable_float_const_iterator;
    /**
     * Tests whether a const iterator is the begin iterator.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_is_begin()`.
     */
    is_begin_2(iter: L.MR_C_std_multimap_MR_StdContainers_NonAssignable_float_const_iterator): boolean;
    /**
     * The begin iterator, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_begin_mut()`.
     */
    begin_mut(): L.MR_C_std_multimap_MR_StdContainers_NonAssignable_float_iterator;
    /**
     * Tests whether a mutable iterator is the begin iterator.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_is_begin_mut()`.
     */
    is_begin_mut(iter: L.MR_C_std_multimap_MR_StdContainers_NonAssignable_float_iterator): boolean;
    /**
     * The end iterator, const.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_end()`.
     */
    end(): L.MR_C_std_multimap_MR_StdContainers_NonAssignable_float_const_iterator;
    /**
     * Tests whether a const iterator is the end iterator.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_is_end()`.
     */
    is_end_2(iter: L.MR_C_std_multimap_MR_StdContainers_NonAssignable_float_const_iterator): boolean;
    /**
     * The end iterator, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_end_mut()`.
     */
    end_mut(): L.MR_C_std_multimap_MR_StdContainers_NonAssignable_float_iterator;
    /**
     * Tests whether a mutable iterator is the end iterator.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_is_end_mut()`.
     */
    is_end_mut(iter: L.MR_C_std_multimap_MR_StdContainers_NonAssignable_float_iterator): boolean;
}

/**
 * Read-only iterator for `MR_C_std_multimap_MR_StdContainers_NonAssignable_float`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_multimap_MR_StdContainers_NonAssignable_float_const_iterator extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_const_iterator_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_const_iterator_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_multimap_MR_StdContainers_NonAssignable_float_const_iterator);
    /**
     * Makes a const iterator from a mutable one.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_const_iterator_from_mutable()`.
     */
    constructor(iter: L.MR_C_std_multimap_MR_StdContainers_NonAssignable_float_iterator);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_const_iterator_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_multimap_MR_StdContainers_NonAssignable_float_const_iterator): void;
    /**
     * Dereferences a const iterator.
     * The reference to things referred to by this object (if any) might be preserved as the return value.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_const_iterator_deref()`.
     */
    deref(): L.MR_C_std_pair_const_MR_StdContainers_NonAssignable_float;
    /**
     * Dereferences a const iterator, returning the key.
     * The reference to things referred to by this object (if any) might be preserved as the return value.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_const_iterator_deref_key()`.
     */
    deref_key(): L.MR_StdContainers_NonAssignable;
    /**
     * Dereferences a const iterator, returning the mapped value.
     * The reference to things referred to by this object (if any) might be preserved as the return value.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_const_iterator_deref_value()`.
     */
    deref_value(): number;
    /**
     * Increments a const iterator.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_const_iterator_incr()`.
     */
    incr(): void;
    /**
     * Decrements a const iterator.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_const_iterator_decr()`.
     */
    decr(): void;
}

/**
 * Mutable iterator for `MR_C_std_multimap_MR_StdContainers_NonAssignable_float`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_multimap_MR_StdContainers_NonAssignable_float_iterator extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_iterator_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_iterator_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_multimap_MR_StdContainers_NonAssignable_float_iterator);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_iterator_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_multimap_MR_StdContainers_NonAssignable_float_iterator): void;
    /**
     * Dereferences a mutable iterator.
     * The reference to things referred to by this object (if any) might be preserved as the return value.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_iterator_deref()`.
     */
    deref(): L.MR_C_std_pair_const_MR_StdContainers_NonAssignable_float;
    /**
     * Dereferences a mutable iterator, returning the key.
     * The reference to things referred to by this object (if any) might be preserved as the return value.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_iterator_deref_key()`.
     */
    deref_key(): L.MR_StdContainers_NonAssignable;
    /**
     * Dereferences a mutable iterator, returning the mapped value.
     * The reference to things referred to by this object (if any) might be preserved as the return value.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_iterator_deref_value()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    deref_value(): number;
    /**
     * Increments a mutable iterator.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_iterator_incr()`.
     */
    incr(): void;
    /**
     * Decrements a mutable iterator.
     *
     * Calls `MR_C_std_multimap_MR_StdContainers_NonAssignable_float_iterator_decr()`.
     */
    decr(): void;
}

/**
 * Compares two const iterators for equality.
 *
 * Calls `MR_C_equal_MR_C_std_multimap_MR_StdContainers_NonAssignable_float_const_iterator()`.
 */
export declare function MR_C_equal_MR_C_std_multimap_MR_StdContainers_NonAssignable_float_const_iterator(a: L.MR_C_std_multimap_MR_StdContainers_NonAssignable_float_const_iterator, b: L.MR_C_std_multimap_MR_StdContainers_NonAssignable_float_const_iterator): boolean;

/**
 * Compares two mutable iterators for equality.
 *
 * Calls `MR_C_equal_MR_C_std_multimap_MR_StdContainers_NonAssignable_float_iterator()`.
 */
export declare function MR_C_equal_MR_C_std_multimap_MR_StdContainers_NonAssignable_float_iterator(a: L.MR_C_std_multimap_MR_StdContainers_NonAssignable_float_iterator, b: L.MR_C_std_multimap_MR_StdContainers_NonAssignable_float_iterator): boolean;

