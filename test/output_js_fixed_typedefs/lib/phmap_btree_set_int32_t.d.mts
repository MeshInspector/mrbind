// The wrappers of the C bindings file `phmap_btree_set_int32_t`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Generated from C++ container `phmap::btree_set<int32_t>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_phmap_btree_set_int32_t extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_phmap_btree_set_int32_t_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_phmap_btree_set_int32_t_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_phmap_btree_set_int32_t);
    /**
     * Construct from a range of elements.
     *
     * Calls `MR_C_phmap_btree_set_int32_t_ConstructFromRange()`.
     */
    constructor(ptr: number | null | undefined, size: number);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_phmap_btree_set_int32_t_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_phmap_btree_set_int32_t): void;
    /**
     * Assign from a range of elements, overwriting previous contents.
     *
     * Calls `MR_C_phmap_btree_set_int32_t_AssignFromRange()`.
     */
    assignFromRange(ptr: number | null | undefined, size: number): void;
    /**
     * The number of elements.
     *
     * Calls `MR_C_phmap_btree_set_int32_t_size()`.
     */
    size(): number;
    /**
     * Returns true if the size is zero.
     *
     * Calls `MR_C_phmap_btree_set_int32_t_empty()`.
     */
    empty(): boolean;
    /**
     * Removes all elements from the container.
     *
     * Calls `MR_C_phmap_btree_set_int32_t_clear()`.
     */
    clear(): void;
    /**
     * Checks if the contain contains this key.
     *
     * Calls `MR_C_phmap_btree_set_int32_t_contains()`.
     */
    contains(key: number): boolean;
    /**
     * Finds the element by key, or returns the end iterator if no such key. Returns a read-only iterator.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_phmap_btree_set_int32_t_find()`.
     */
    find(key: number): L.MR_C_phmap_btree_set_int32_t_const_iterator;
    /**
     * Inserts a new element.
     * The reference to the parameter `new_elem` might be preserved in this object.
     *
     * Calls `MR_C_phmap_btree_set_int32_t_insert()`.
     */
    insert(new_elem: number): void;
    /**
     * The begin iterator, const.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_phmap_btree_set_int32_t_begin()`.
     */
    begin(): L.MR_C_phmap_btree_set_int32_t_const_iterator;
    /**
     * Tests whether a const iterator is the begin iterator.
     *
     * Calls `MR_C_phmap_btree_set_int32_t_is_begin()`.
     */
    is_begin(iter: L.MR_C_phmap_btree_set_int32_t_const_iterator): boolean;
    /**
     * The end iterator, const.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_phmap_btree_set_int32_t_end()`.
     */
    end(): L.MR_C_phmap_btree_set_int32_t_const_iterator;
    /**
     * Tests whether a const iterator is the end iterator.
     *
     * Calls `MR_C_phmap_btree_set_int32_t_is_end()`.
     */
    is_end(iter: L.MR_C_phmap_btree_set_int32_t_const_iterator): boolean;
}

/**
 * Read-only iterator for `MR_C_phmap_btree_set_int32_t`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_phmap_btree_set_int32_t_const_iterator extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_phmap_btree_set_int32_t_const_iterator_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_phmap_btree_set_int32_t_const_iterator_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_phmap_btree_set_int32_t_const_iterator);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_phmap_btree_set_int32_t_const_iterator_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_phmap_btree_set_int32_t_const_iterator): void;
    /**
     * Dereferences a const iterator.
     * The reference to things referred to by this object (if any) might be preserved as the return value.
     *
     * Calls `MR_C_phmap_btree_set_int32_t_const_iterator_deref()`.
     */
    deref(): number;
    /**
     * Increments a const iterator.
     *
     * Calls `MR_C_phmap_btree_set_int32_t_const_iterator_incr()`.
     */
    incr(): void;
    /**
     * Decrements a const iterator.
     *
     * Calls `MR_C_phmap_btree_set_int32_t_const_iterator_decr()`.
     */
    decr(): void;
}

/**
 * Compares two const iterators for equality.
 *
 * Calls `MR_C_equal_MR_C_phmap_btree_set_int32_t_const_iterator()`.
 */
export declare function MR_C_equal_MR_C_phmap_btree_set_int32_t_const_iterator(a: L.MR_C_phmap_btree_set_int32_t_const_iterator, b: L.MR_C_phmap_btree_set_int32_t_const_iterator): boolean;

