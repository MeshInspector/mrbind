// The wrappers of the C bindings file `std_deque_MR_StdContainers_NonAssignable`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Generated from C++ container `std::deque<MR::StdContainers::NonAssignable>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_deque_MR_StdContainers_NonAssignable extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_ConstructFromAnother(ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_deque_MR_StdContainers_NonAssignable.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_deque_MR_StdContainers_NonAssignable))
            return L.MR_C_std_deque_MR_StdContainers_NonAssignable.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_deque_MR_StdContainers_NonAssignable.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_deque_MR_StdContainers_NonAssignable.__ctor(args), L.MR_C_std_deque_MR_StdContainers_NonAssignable.__destroy, null);
    }

    is_begin(...args)
    {
        const __n = args.length;
        if (__n === 1 && (args[0] instanceof L.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator))
            return this.is_begin_2(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator))
            return this.is_begin_mut(args[0]);
        throw new TypeError("No overload of `is_begin` accepts these arguments.");
    }

    is_end(...args)
    {
        const __n = args.length;
        if (__n === 1 && (args[0] instanceof L.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator))
            return this.is_end_2(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator))
            return this.is_end_mut(args[0]);
        throw new TypeError("No overload of `is_end` accepts these arguments.");
    }

    to_index(...args)
    {
        const __n = args.length;
        if (__n === 1 && (args[0] instanceof L.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator))
            return this.to_index_2(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator))
            return this.to_index_mut(args[0]);
        throw new TypeError("No overload of `to_index` accepts these arguments.");
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_AssignFromAnother(BigInt(this.rawPointer()), ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
    }

    size()
    {
        const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_size(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    empty()
    {
        const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_empty(BigInt(this.rawPointer()));
        ffi.check();
        return (__ret !== 0);
    }

    resize(new_size)
    {
        ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_resize(BigInt(this.rawPointer()), ffi.toI64(new_size));
        ffi.check();
    }

    clear()
    {
        ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_clear(BigInt(this.rawPointer()));
        ffi.check();
    }

    at(i)
    {
        const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_at(BigInt(this.rawPointer()), ffi.toI64(i));
        ffi.check();
        const __owner = this;
        return new L.MR_StdContainers_NonAssignable(ffi.RAW, Number(__ret), false, __owner);
    }

    at_mut(i)
    {
        const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_at_mut(BigInt(this.rawPointer()), ffi.toI64(i));
        ffi.check();
        const __owner = this;
        return new L.MR_StdContainers_NonAssignable(ffi.RAW, Number(__ret), false, __owner);
    }

    front()
    {
        const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_front(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return (Number(__ret) === 0 ? null : new L.MR_StdContainers_NonAssignable(ffi.RAW, Number(__ret), false, __owner));
    }

    front_mut()
    {
        const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_front_mut(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return (Number(__ret) === 0 ? null : new L.MR_StdContainers_NonAssignable(ffi.RAW, Number(__ret), false, __owner));
    }

    back()
    {
        const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_back(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return (Number(__ret) === 0 ? null : new L.MR_StdContainers_NonAssignable(ffi.RAW, Number(__ret), false, __owner));
    }

    back_mut()
    {
        const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_back_mut(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return (Number(__ret) === 0 ? null : new L.MR_StdContainers_NonAssignable(ffi.RAW, Number(__ret), false, __owner));
    }

    push_back(new_elem)
    {
        ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_push_back(BigInt(this.rawPointer()), ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(new_elem, "new_elem")));
        ffi.check();
    }

    pop_back()
    {
        ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_pop_back(BigInt(this.rawPointer()));
        ffi.check();
    }

    push_front(new_elem)
    {
        ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_push_front(BigInt(this.rawPointer()), ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(new_elem, "new_elem")));
        ffi.check();
    }

    pop_front()
    {
        ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_pop_front(BigInt(this.rawPointer()));
        ffi.check();
    }

    begin()
    {
        const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_begin(BigInt(this.rawPointer()));
        ffi.check();
        return new L.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator(ffi.RAW, Number(__ret), true, null);
    }

    is_begin_2(iter)
    {
        const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_is_begin(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(iter, "iter")));
        ffi.check();
        return (__ret !== 0);
    }

    begin_mut()
    {
        const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_begin_mut(BigInt(this.rawPointer()));
        ffi.check();
        return new L.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator(ffi.RAW, Number(__ret), true, null);
    }

    is_begin_mut(iter)
    {
        const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_is_begin_mut(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(iter, "iter")));
        ffi.check();
        return (__ret !== 0);
    }

    end()
    {
        const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_end(BigInt(this.rawPointer()));
        ffi.check();
        return new L.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator(ffi.RAW, Number(__ret), true, null);
    }

    is_end_2(iter)
    {
        const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_is_end(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(iter, "iter")));
        ffi.check();
        return (__ret !== 0);
    }

    end_mut()
    {
        const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_end_mut(BigInt(this.rawPointer()));
        ffi.check();
        return new L.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator(ffi.RAW, Number(__ret), true, null);
    }

    is_end_mut(iter)
    {
        const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_is_end_mut(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(iter, "iter")));
        ffi.check();
        return (__ret !== 0);
    }

    to_index_2(iter)
    {
        const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_to_index(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(iter, "iter")));
        ffi.check();
        return Number(__ret);
    }

    to_index_mut(iter)
    {
        const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_to_index_mut(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(iter, "iter")));
        ffi.check();
        return Number(__ret);
    }
}

/**
 * Read-only iterator for `MR_C_std_deque_MR_StdContainers_NonAssignable`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor_2(iter)
    {
        const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_from_mutable(BigInt(ffi.ptrNonNull(iter, "iter")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator))
            return L.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator.__ctor_1(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator))
            return L.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator.__ctor(args), L.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
    }

    deref()
    {
        const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_deref(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return new L.MR_StdContainers_NonAssignable(ffi.RAW, Number(__ret), false, __owner);
    }

    incr()
    {
        ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_incr(BigInt(this.rawPointer()));
        ffi.check();
    }

    decr()
    {
        ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_decr(BigInt(this.rawPointer()));
        ffi.check();
    }

    add_assign(delta)
    {
        ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_add_assign(BigInt(this.rawPointer()), ffi.toI64(delta));
        ffi.check();
    }
}

/**
 * Mutable iterator for `MR_C_std_deque_MR_StdContainers_NonAssignable`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_deque_MR_StdContainers_NonAssignable_iterator extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_ConstructFromAnother(BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator))
            return L.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator.__ctor(args), L.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_AssignFromAnother(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
    }

    deref()
    {
        const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_deref(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return new L.MR_StdContainers_NonAssignable(ffi.RAW, Number(__ret), false, __owner);
    }

    incr()
    {
        ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_incr(BigInt(this.rawPointer()));
        ffi.check();
    }

    decr()
    {
        ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_decr(BigInt(this.rawPointer()));
        ffi.check();
    }

    add_assign(delta)
    {
        ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_add_assign(BigInt(this.rawPointer()), ffi.toI64(delta));
        ffi.check();
    }
}

export function MR_C_sub_MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator(a, b)
{
    const __ret = ffi.C.MR_C_sub_MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator(BigInt(ffi.ptrNonNull(a, "a")), BigInt(ffi.ptrNonNull(b, "b")));
    ffi.check();
    return Number(__ret);
}

export function MR_C_equal_MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator(a, b)
{
    const __ret = ffi.C.MR_C_equal_MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator(BigInt(ffi.ptrNonNull(a, "a")), BigInt(ffi.ptrNonNull(b, "b")));
    ffi.check();
    return (__ret !== 0);
}

export function MR_C_sub_MR_C_std_deque_MR_StdContainers_NonAssignable_iterator(a, b)
{
    const __ret = ffi.C.MR_C_sub_MR_C_std_deque_MR_StdContainers_NonAssignable_iterator(BigInt(ffi.ptrNonNull(a, "a")), BigInt(ffi.ptrNonNull(b, "b")));
    ffi.check();
    return Number(__ret);
}

export function MR_C_equal_MR_C_std_deque_MR_StdContainers_NonAssignable_iterator(a, b)
{
    const __ret = ffi.C.MR_C_equal_MR_C_std_deque_MR_StdContainers_NonAssignable_iterator(BigInt(ffi.ptrNonNull(a, "a")), BigInt(ffi.ptrNonNull(b, "b")));
    ffi.check();
    return (__ret !== 0);
}

