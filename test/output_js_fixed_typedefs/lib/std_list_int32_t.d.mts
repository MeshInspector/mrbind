// The wrappers of the C bindings file `std_list_int32_t`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Generated from C++ container `std::list<int32_t>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_list_int32_t extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_list_int32_t_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_list_int32_t_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_list_int32_t);
    /**
     * Construct from a range of elements.
     *
     * Calls `MR_C_std_list_int32_t_ConstructFromRange()`.
     */
    constructor(ptr: number | null | undefined, size: number);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Tests whether a const iterator is the begin iterator.
     *
     * Calls `MR_C_std_list_int32_t_is_begin()`.
     */
    is_begin(iter: L.MR_C_std_list_int32_t_const_iterator): boolean;
    /**
     * Tests whether a mutable iterator is the begin iterator.
     *
     * Calls `MR_C_std_list_int32_t_is_begin_mut()`.
     */
    is_begin(iter: L.MR_C_std_list_int32_t_iterator): boolean;
    /** The overloads of `is_begin` are resolved at runtime by the argument types; the first declared match wins. */
    /**
     * Tests whether a const iterator is the end iterator.
     *
     * Calls `MR_C_std_list_int32_t_is_end()`.
     */
    is_end(iter: L.MR_C_std_list_int32_t_const_iterator): boolean;
    /**
     * Tests whether a mutable iterator is the end iterator.
     *
     * Calls `MR_C_std_list_int32_t_is_end_mut()`.
     */
    is_end(iter: L.MR_C_std_list_int32_t_iterator): boolean;
    /** The overloads of `is_end` are resolved at runtime by the argument types; the first declared match wins. */
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_list_int32_t_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_list_int32_t): void;
    /**
     * Assign from a range of elements, overwriting previous contents.
     *
     * Calls `MR_C_std_list_int32_t_AssignFromRange()`.
     */
    assignFromRange(ptr: number | null | undefined, size: number): void;
    /**
     * The number of elements.
     *
     * Calls `MR_C_std_list_int32_t_size()`.
     */
    size(): number;
    /**
     * Returns true if the size is zero.
     *
     * Calls `MR_C_std_list_int32_t_empty()`.
     */
    empty(): boolean;
    /**
     * Resizes the container. The new elements if any are zeroed.
     *
     * Calls `MR_C_std_list_int32_t_resize()`.
     */
    resize(new_size: number): void;
    /**
     * Resizes the container. The new elements if any are set to the specified value.
     *
     * Calls `MR_C_std_list_int32_t_resize_with_default_value()`.
     */
    resize_with_default_value(new_size: number, value: number): void;
    /**
     * Removes all elements from the container.
     *
     * Calls `MR_C_std_list_int32_t_clear()`.
     */
    clear(): void;
    /**
     * The first element or null if empty, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_list_int32_t_front()`.
     */
    front(): number | null;
    /**
     * The first element or null if empty, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_list_int32_t_front_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    front_mut(): number;
    /**
     * The last element or null if empty, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_list_int32_t_back()`.
     */
    back(): number | null;
    /**
     * The last element or null if empty, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_list_int32_t_back_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    back_mut(): number;
    /**
     * Inserts a new element at the end.
     * The reference to the parameter `new_elem` might be preserved in this object.
     *
     * Calls `MR_C_std_list_int32_t_push_back()`.
     */
    push_back(new_elem: number): void;
    /**
     * Removes one element from the end.
     *
     * Calls `MR_C_std_list_int32_t_pop_back()`.
     */
    pop_back(): void;
    /**
     * Inserts a new element at the beginning.
     * The reference to the parameter `new_elem` might be preserved in this object.
     *
     * Calls `MR_C_std_list_int32_t_push_front()`.
     */
    push_front(new_elem: number): void;
    /**
     * Removes one element from the beginning.
     *
     * Calls `MR_C_std_list_int32_t_pop_front()`.
     */
    pop_front(): void;
    /**
     * Inserts a new element right before the specified position.
     * The reference to the parameter `new_elem` might be preserved in this object.
     *
     * Calls `MR_C_std_list_int32_t_insert_at_mutable_iter()`.
     */
    insert_at_mutable_iter(position: L.MR_C_std_list_int32_t_iterator, new_elem: number): void;
    /**
     * Erases the element at the specified position.
     *
     * Calls `MR_C_std_list_int32_t_erase_at_mutable_iter()`.
     */
    erase_at_mutable_iter(position: L.MR_C_std_list_int32_t_iterator): void;
    /**
     * Inserts a new element right before the specified position. This version takes the position in form of a const iterator, that's the only difference.
     * The reference to the parameter `new_elem` might be preserved in this object.
     *
     * Calls `MR_C_std_list_int32_t_insert_at_iter()`.
     */
    insert_at_iter(position: L.MR_C_std_list_int32_t_const_iterator, new_elem: number): void;
    /**
     * Erases the element at the specified position. This version takes the position in form of a const iterator, that's the only difference.
     *
     * Calls `MR_C_std_list_int32_t_erase_at_iter()`.
     */
    erase_at_iter(position: L.MR_C_std_list_int32_t_const_iterator): void;
    /**
     * The begin iterator, const.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_list_int32_t_begin()`.
     */
    begin(): L.MR_C_std_list_int32_t_const_iterator;
    /**
     * Tests whether a const iterator is the begin iterator.
     *
     * Calls `MR_C_std_list_int32_t_is_begin()`.
     */
    is_begin_2(iter: L.MR_C_std_list_int32_t_const_iterator): boolean;
    /**
     * The begin iterator, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_list_int32_t_begin_mut()`.
     */
    begin_mut(): L.MR_C_std_list_int32_t_iterator;
    /**
     * Tests whether a mutable iterator is the begin iterator.
     *
     * Calls `MR_C_std_list_int32_t_is_begin_mut()`.
     */
    is_begin_mut(iter: L.MR_C_std_list_int32_t_iterator): boolean;
    /**
     * The end iterator, const.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_list_int32_t_end()`.
     */
    end(): L.MR_C_std_list_int32_t_const_iterator;
    /**
     * Tests whether a const iterator is the end iterator.
     *
     * Calls `MR_C_std_list_int32_t_is_end()`.
     */
    is_end_2(iter: L.MR_C_std_list_int32_t_const_iterator): boolean;
    /**
     * The end iterator, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_list_int32_t_end_mut()`.
     */
    end_mut(): L.MR_C_std_list_int32_t_iterator;
    /**
     * Tests whether a mutable iterator is the end iterator.
     *
     * Calls `MR_C_std_list_int32_t_is_end_mut()`.
     */
    is_end_mut(iter: L.MR_C_std_list_int32_t_iterator): boolean;
}

/**
 * Read-only iterator for `MR_C_std_list_int32_t`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_list_int32_t_const_iterator extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_list_int32_t_const_iterator_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_list_int32_t_const_iterator_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_list_int32_t_const_iterator);
    /**
     * Makes a const iterator from a mutable one.
     *
     * Calls `MR_C_std_list_int32_t_const_iterator_from_mutable()`.
     */
    constructor(iter: L.MR_C_std_list_int32_t_iterator);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_list_int32_t_const_iterator_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_list_int32_t_const_iterator): void;
    /**
     * Dereferences a const iterator.
     * The reference to things referred to by this object (if any) might be preserved as the return value.
     *
     * Calls `MR_C_std_list_int32_t_const_iterator_deref()`.
     */
    deref(): number;
    /**
     * Increments a const iterator.
     *
     * Calls `MR_C_std_list_int32_t_const_iterator_incr()`.
     */
    incr(): void;
    /**
     * Decrements a const iterator.
     *
     * Calls `MR_C_std_list_int32_t_const_iterator_decr()`.
     */
    decr(): void;
}

/**
 * Mutable iterator for `MR_C_std_list_int32_t`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_list_int32_t_iterator extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_list_int32_t_iterator_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_list_int32_t_iterator_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_list_int32_t_iterator);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_list_int32_t_iterator_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_list_int32_t_iterator): void;
    /**
     * Dereferences a mutable iterator.
     * The reference to things referred to by this object (if any) might be preserved as the return value.
     *
     * Calls `MR_C_std_list_int32_t_iterator_deref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    deref(): number;
    /**
     * Increments a mutable iterator.
     *
     * Calls `MR_C_std_list_int32_t_iterator_incr()`.
     */
    incr(): void;
    /**
     * Decrements a mutable iterator.
     *
     * Calls `MR_C_std_list_int32_t_iterator_decr()`.
     */
    decr(): void;
}

/**
 * Compares two const iterators for equality.
 *
 * Calls `MR_C_equal_MR_C_std_list_int32_t_const_iterator()`.
 */
export declare function MR_C_equal_MR_C_std_list_int32_t_const_iterator(a: L.MR_C_std_list_int32_t_const_iterator, b: L.MR_C_std_list_int32_t_const_iterator): boolean;

/**
 * Compares two mutable iterators for equality.
 *
 * Calls `MR_C_equal_MR_C_std_list_int32_t_iterator()`.
 */
export declare function MR_C_equal_MR_C_std_list_int32_t_iterator(a: L.MR_C_std_list_int32_t_iterator, b: L.MR_C_std_list_int32_t_iterator): boolean;

