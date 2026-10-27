// The wrappers of the C bindings file `std_deque_int`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Generated from C++ container `std::deque<int>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_deque_int extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_deque_int_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_deque_int_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_deque_int_ConstructFromAnother(ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor_2(ptr, size)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_ptr = ptr == null ? 0 : ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = ptr;});
            const __ret = ffi.C.MR_C_std_deque_int_ConstructFromRange(BigInt(__ptr_ptr), BigInt(size));
            ffi.check();
            return Number(__ret);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_deque_int.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_deque_int))
            return L.MR_C_std_deque_int.__ctor_1(args[0]);
        if (__n === 2 && (__n <= 0 || (args[0] == null || typeof args[0] === "number")) && typeof args[1] === "number")
            return L.MR_C_std_deque_int.__ctor_2(args[0], args[1]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_deque_int.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_deque_int.__ctor(args), L.MR_C_std_deque_int.__destroy, null);
    }

    is_begin(...args)
    {
        const __n = args.length;
        if (__n === 1 && (args[0] instanceof L.MR_C_std_deque_int_const_iterator))
            return this.is_begin_2(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_C_std_deque_int_iterator))
            return this.is_begin_mut(args[0]);
        throw new TypeError("No overload of `is_begin` accepts these arguments.");
    }

    is_end(...args)
    {
        const __n = args.length;
        if (__n === 1 && (args[0] instanceof L.MR_C_std_deque_int_const_iterator))
            return this.is_end_2(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_C_std_deque_int_iterator))
            return this.is_end_mut(args[0]);
        throw new TypeError("No overload of `is_end` accepts these arguments.");
    }

    to_index(...args)
    {
        const __n = args.length;
        if (__n === 1 && (args[0] instanceof L.MR_C_std_deque_int_const_iterator))
            return this.to_index_2(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_C_std_deque_int_iterator))
            return this.to_index_mut(args[0]);
        throw new TypeError("No overload of `to_index` accepts these arguments.");
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_deque_int_AssignFromAnother(BigInt(this.rawPointer()), ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
    }

    assignFromRange(ptr, size)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_ptr = ptr == null ? 0 : ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = ptr;});
            ffi.C.MR_C_std_deque_int_AssignFromRange(BigInt(this.rawPointer()), BigInt(__ptr_ptr), BigInt(size));
            ffi.check();
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    size()
    {
        const __ret = ffi.C.MR_C_std_deque_int_size(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    empty()
    {
        const __ret = ffi.C.MR_C_std_deque_int_empty(BigInt(this.rawPointer()));
        ffi.check();
        return (__ret !== 0);
    }

    resize(new_size)
    {
        ffi.C.MR_C_std_deque_int_resize(BigInt(this.rawPointer()), BigInt(new_size));
        ffi.check();
    }

    resize_with_default_value(new_size, value)
    {
        ffi.C.MR_C_std_deque_int_resize_with_default_value(BigInt(this.rawPointer()), BigInt(new_size), value);
        ffi.check();
    }

    clear()
    {
        ffi.C.MR_C_std_deque_int_clear(BigInt(this.rawPointer()));
        ffi.check();
    }

    at(i)
    {
        const __ret = ffi.C.MR_C_std_deque_int_at(BigInt(this.rawPointer()), BigInt(i));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    at_mut(i)
    {
        const __ret = ffi.C.MR_C_std_deque_int_at_mut(BigInt(this.rawPointer()), BigInt(i));
        ffi.check();
        return Number(__ret);
    }

    front()
    {
        const __ret = ffi.C.MR_C_std_deque_int_front(BigInt(this.rawPointer()));
        ffi.check();
        return (Number(__ret) === 0 ? null : ffi.M.HEAP32[(Number(__ret)) >>> 2]);
    }

    front_mut()
    {
        const __ret = ffi.C.MR_C_std_deque_int_front_mut(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    back()
    {
        const __ret = ffi.C.MR_C_std_deque_int_back(BigInt(this.rawPointer()));
        ffi.check();
        return (Number(__ret) === 0 ? null : ffi.M.HEAP32[(Number(__ret)) >>> 2]);
    }

    back_mut()
    {
        const __ret = ffi.C.MR_C_std_deque_int_back_mut(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    push_back(new_elem)
    {
        ffi.C.MR_C_std_deque_int_push_back(BigInt(this.rawPointer()), new_elem);
        ffi.check();
    }

    pop_back()
    {
        ffi.C.MR_C_std_deque_int_pop_back(BigInt(this.rawPointer()));
        ffi.check();
    }

    push_front(new_elem)
    {
        ffi.C.MR_C_std_deque_int_push_front(BigInt(this.rawPointer()), new_elem);
        ffi.check();
    }

    pop_front()
    {
        ffi.C.MR_C_std_deque_int_pop_front(BigInt(this.rawPointer()));
        ffi.check();
    }

    insert(position, new_elem)
    {
        ffi.C.MR_C_std_deque_int_insert(BigInt(this.rawPointer()), BigInt(position), new_elem);
        ffi.check();
    }

    erase(position)
    {
        ffi.C.MR_C_std_deque_int_erase(BigInt(this.rawPointer()), BigInt(position));
        ffi.check();
    }

    insert_at_mutable_iter(position, new_elem)
    {
        ffi.C.MR_C_std_deque_int_insert_at_mutable_iter(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(position, "position")), new_elem);
        ffi.check();
    }

    erase_at_mutable_iter(position)
    {
        ffi.C.MR_C_std_deque_int_erase_at_mutable_iter(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(position, "position")));
        ffi.check();
    }

    insert_at_iter(position, new_elem)
    {
        ffi.C.MR_C_std_deque_int_insert_at_iter(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(position, "position")), new_elem);
        ffi.check();
    }

    erase_at_iter(position)
    {
        ffi.C.MR_C_std_deque_int_erase_at_iter(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(position, "position")));
        ffi.check();
    }

    begin()
    {
        const __ret = ffi.C.MR_C_std_deque_int_begin(BigInt(this.rawPointer()));
        ffi.check();
        return new L.MR_C_std_deque_int_const_iterator(ffi.RAW, Number(__ret), true, null);
    }

    is_begin_2(iter)
    {
        const __ret = ffi.C.MR_C_std_deque_int_is_begin(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(iter, "iter")));
        ffi.check();
        return (__ret !== 0);
    }

    begin_mut()
    {
        const __ret = ffi.C.MR_C_std_deque_int_begin_mut(BigInt(this.rawPointer()));
        ffi.check();
        return new L.MR_C_std_deque_int_iterator(ffi.RAW, Number(__ret), true, null);
    }

    is_begin_mut(iter)
    {
        const __ret = ffi.C.MR_C_std_deque_int_is_begin_mut(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(iter, "iter")));
        ffi.check();
        return (__ret !== 0);
    }

    end()
    {
        const __ret = ffi.C.MR_C_std_deque_int_end(BigInt(this.rawPointer()));
        ffi.check();
        return new L.MR_C_std_deque_int_const_iterator(ffi.RAW, Number(__ret), true, null);
    }

    is_end_2(iter)
    {
        const __ret = ffi.C.MR_C_std_deque_int_is_end(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(iter, "iter")));
        ffi.check();
        return (__ret !== 0);
    }

    end_mut()
    {
        const __ret = ffi.C.MR_C_std_deque_int_end_mut(BigInt(this.rawPointer()));
        ffi.check();
        return new L.MR_C_std_deque_int_iterator(ffi.RAW, Number(__ret), true, null);
    }

    is_end_mut(iter)
    {
        const __ret = ffi.C.MR_C_std_deque_int_is_end_mut(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(iter, "iter")));
        ffi.check();
        return (__ret !== 0);
    }

    to_index_2(iter)
    {
        const __ret = ffi.C.MR_C_std_deque_int_to_index(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(iter, "iter")));
        ffi.check();
        return Number(__ret);
    }

    to_index_mut(iter)
    {
        const __ret = ffi.C.MR_C_std_deque_int_to_index_mut(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(iter, "iter")));
        ffi.check();
        return Number(__ret);
    }
}

/**
 * Read-only iterator for `MR_C_std_deque_int`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_deque_int_const_iterator extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_deque_int_const_iterator_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_deque_int_const_iterator_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_deque_int_const_iterator_ConstructFromAnother(BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor_2(iter)
    {
        const __ret = ffi.C.MR_C_std_deque_int_const_iterator_from_mutable(BigInt(ffi.ptrNonNull(iter, "iter")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_deque_int_const_iterator.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_deque_int_const_iterator))
            return L.MR_C_std_deque_int_const_iterator.__ctor_1(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_C_std_deque_int_iterator))
            return L.MR_C_std_deque_int_const_iterator.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_deque_int_const_iterator.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_deque_int_const_iterator.__ctor(args), L.MR_C_std_deque_int_const_iterator.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_deque_int_const_iterator_AssignFromAnother(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
    }

    deref()
    {
        const __ret = ffi.C.MR_C_std_deque_int_const_iterator_deref(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    incr()
    {
        ffi.C.MR_C_std_deque_int_const_iterator_incr(BigInt(this.rawPointer()));
        ffi.check();
    }

    decr()
    {
        ffi.C.MR_C_std_deque_int_const_iterator_decr(BigInt(this.rawPointer()));
        ffi.check();
    }

    add_assign(delta)
    {
        ffi.C.MR_C_std_deque_int_const_iterator_add_assign(BigInt(this.rawPointer()), BigInt(delta));
        ffi.check();
    }
}

/**
 * Mutable iterator for `MR_C_std_deque_int`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_deque_int_iterator extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_deque_int_iterator_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_deque_int_iterator_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_deque_int_iterator_ConstructFromAnother(BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_deque_int_iterator.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_deque_int_iterator))
            return L.MR_C_std_deque_int_iterator.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_deque_int_iterator.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_deque_int_iterator.__ctor(args), L.MR_C_std_deque_int_iterator.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_deque_int_iterator_AssignFromAnother(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
    }

    deref()
    {
        const __ret = ffi.C.MR_C_std_deque_int_iterator_deref(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    incr()
    {
        ffi.C.MR_C_std_deque_int_iterator_incr(BigInt(this.rawPointer()));
        ffi.check();
    }

    decr()
    {
        ffi.C.MR_C_std_deque_int_iterator_decr(BigInt(this.rawPointer()));
        ffi.check();
    }

    add_assign(delta)
    {
        ffi.C.MR_C_std_deque_int_iterator_add_assign(BigInt(this.rawPointer()), BigInt(delta));
        ffi.check();
    }
}

export function MR_C_sub_MR_C_std_deque_int_const_iterator(a, b)
{
    const __ret = ffi.C.MR_C_sub_MR_C_std_deque_int_const_iterator(BigInt(ffi.ptrNonNull(a, "a")), BigInt(ffi.ptrNonNull(b, "b")));
    ffi.check();
    return Number(__ret);
}

export function MR_C_equal_MR_C_std_deque_int_const_iterator(a, b)
{
    const __ret = ffi.C.MR_C_equal_MR_C_std_deque_int_const_iterator(BigInt(ffi.ptrNonNull(a, "a")), BigInt(ffi.ptrNonNull(b, "b")));
    ffi.check();
    return (__ret !== 0);
}

export function MR_C_sub_MR_C_std_deque_int_iterator(a, b)
{
    const __ret = ffi.C.MR_C_sub_MR_C_std_deque_int_iterator(BigInt(ffi.ptrNonNull(a, "a")), BigInt(ffi.ptrNonNull(b, "b")));
    ffi.check();
    return Number(__ret);
}

export function MR_C_equal_MR_C_std_deque_int_iterator(a, b)
{
    const __ret = ffi.C.MR_C_equal_MR_C_std_deque_int_iterator(BigInt(ffi.ptrNonNull(a, "a")), BigInt(ffi.ptrNonNull(b, "b")));
    ffi.check();
    return (__ret !== 0);
}

