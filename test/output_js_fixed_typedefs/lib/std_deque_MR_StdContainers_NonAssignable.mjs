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
    static __destroy(ptr) {ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(other)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
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
        try
        {
            ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    size()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_size(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    empty()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_empty(this.rawPointer());
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    resize(new_size)
    {
        try
        {
            ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_resize(this.rawPointer(), new_size);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    clear()
    {
        try
        {
            ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_clear(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    at(i)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_at(this.rawPointer(), i);
            ffi.check();
            const __owner = this;
            return new L.MR_StdContainers_NonAssignable(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    at_mut(i)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_at_mut(this.rawPointer(), i);
            ffi.check();
            const __owner = this;
            return new L.MR_StdContainers_NonAssignable(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    front()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_front(this.rawPointer());
            ffi.check();
            const __owner = this;
            return ((__ret >>> 0) === 0 ? null : new L.MR_StdContainers_NonAssignable(ffi.RAW, (__ret >>> 0), false, __owner));
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    front_mut()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_front_mut(this.rawPointer());
            ffi.check();
            const __owner = this;
            return ((__ret >>> 0) === 0 ? null : new L.MR_StdContainers_NonAssignable(ffi.RAW, (__ret >>> 0), false, __owner));
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    back()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_back(this.rawPointer());
            ffi.check();
            const __owner = this;
            return ((__ret >>> 0) === 0 ? null : new L.MR_StdContainers_NonAssignable(ffi.RAW, (__ret >>> 0), false, __owner));
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    back_mut()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_back_mut(this.rawPointer());
            ffi.check();
            const __owner = this;
            return ((__ret >>> 0) === 0 ? null : new L.MR_StdContainers_NonAssignable(ffi.RAW, (__ret >>> 0), false, __owner));
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    push_back(new_elem)
    {
        try
        {
            ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_push_back(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(new_elem, "new_elem"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    pop_back()
    {
        try
        {
            ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_pop_back(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    push_front(new_elem)
    {
        try
        {
            ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_push_front(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(new_elem, "new_elem"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    pop_front()
    {
        try
        {
            ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_pop_front(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    begin()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_begin(this.rawPointer());
            ffi.check();
            return new L.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    is_begin_2(iter)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_is_begin(this.rawPointer(), ffi.ptrNonNull(iter, "iter"));
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    begin_mut()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_begin_mut(this.rawPointer());
            ffi.check();
            return new L.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    is_begin_mut(iter)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_is_begin_mut(this.rawPointer(), ffi.ptrNonNull(iter, "iter"));
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    end()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_end(this.rawPointer());
            ffi.check();
            return new L.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    is_end_2(iter)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_is_end(this.rawPointer(), ffi.ptrNonNull(iter, "iter"));
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    end_mut()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_end_mut(this.rawPointer());
            ffi.check();
            return new L.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    is_end_mut(iter)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_is_end_mut(this.rawPointer(), ffi.ptrNonNull(iter, "iter"));
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    to_index_2(iter)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_to_index(this.rawPointer(), ffi.ptrNonNull(iter, "iter"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    to_index_mut(iter)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_to_index_mut(this.rawPointer(), ffi.ptrNonNull(iter, "iter"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Read-only iterator for `MR_C_std_deque_MR_StdContainers_NonAssignable`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(other)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(ffi.ptrNonNull(other, "other"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_2(iter)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_from_mutable(ffi.ptrNonNull(iter, "iter"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
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
        try
        {
            ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(other, "other"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    deref()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_deref(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_StdContainers_NonAssignable(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    incr()
    {
        try
        {
            ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_incr(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    decr()
    {
        try
        {
            ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_decr(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    add_assign(delta)
    {
        try
        {
            ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_add_assign(this.rawPointer(), delta);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Mutable iterator for `MR_C_std_deque_MR_StdContainers_NonAssignable`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_deque_MR_StdContainers_NonAssignable_iterator extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(other)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_ConstructFromAnother(ffi.ptrNonNull(other, "other"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
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
        try
        {
            ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(other, "other"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    deref()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_deref(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_StdContainers_NonAssignable(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    incr()
    {
        try
        {
            ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_incr(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    decr()
    {
        try
        {
            ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_decr(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    add_assign(delta)
    {
        try
        {
            ffi.C.MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_add_assign(this.rawPointer(), delta);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

export function MR_C_sub_MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator(a, b)
{
    try
    {
        const __ret = ffi.C.MR_C_sub_MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator(ffi.ptrNonNull(a, "a"), ffi.ptrNonNull(b, "b"));
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_equal_MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator(a, b)
{
    try
    {
        const __ret = ffi.C.MR_C_equal_MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator(ffi.ptrNonNull(a, "a"), ffi.ptrNonNull(b, "b"));
        ffi.check();
        return (__ret !== 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_sub_MR_C_std_deque_MR_StdContainers_NonAssignable_iterator(a, b)
{
    try
    {
        const __ret = ffi.C.MR_C_sub_MR_C_std_deque_MR_StdContainers_NonAssignable_iterator(ffi.ptrNonNull(a, "a"), ffi.ptrNonNull(b, "b"));
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_equal_MR_C_std_deque_MR_StdContainers_NonAssignable_iterator(a, b)
{
    try
    {
        const __ret = ffi.C.MR_C_equal_MR_C_std_deque_MR_StdContainers_NonAssignable_iterator(ffi.ptrNonNull(a, "a"), ffi.ptrNonNull(b, "b"));
        ffi.check();
        return (__ret !== 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

