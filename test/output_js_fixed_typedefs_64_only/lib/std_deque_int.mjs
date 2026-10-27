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
    static __destroy(ptr) {ffi.C.MR_C_std_deque_int_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_int_DefaultConstruct();
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
            const __ret = ffi.C.MR_C_std_deque_int_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_2(ptr, size)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_ptr = ptr == null ? 0 : ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = ptr;});
            const __ret = ffi.C.MR_C_std_deque_int_ConstructFromRange(__ptr_ptr, size);
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
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
        try
        {
            ffi.C.MR_C_std_deque_int_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assignFromRange(ptr, size)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_ptr = ptr == null ? 0 : ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = ptr;});
            ffi.C.MR_C_std_deque_int_AssignFromRange(this.rawPointer(), __ptr_ptr, size);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    size()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_int_size(this.rawPointer());
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
            const __ret = ffi.C.MR_C_std_deque_int_empty(this.rawPointer());
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
            ffi.C.MR_C_std_deque_int_resize(this.rawPointer(), new_size);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    resize_with_default_value(new_size, value)
    {
        try
        {
            ffi.C.MR_C_std_deque_int_resize_with_default_value(this.rawPointer(), new_size, value);
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
            ffi.C.MR_C_std_deque_int_clear(this.rawPointer());
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
            const __ret = ffi.C.MR_C_std_deque_int_at(this.rawPointer(), i);
            ffi.check();
            return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
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
            const __ret = ffi.C.MR_C_std_deque_int_at_mut(this.rawPointer(), i);
            ffi.check();
            return (__ret >>> 0);
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
            const __ret = ffi.C.MR_C_std_deque_int_front(this.rawPointer());
            ffi.check();
            return ((__ret >>> 0) === 0 ? null : ffi.M.HEAP32[((__ret >>> 0)) >>> 2]);
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
            const __ret = ffi.C.MR_C_std_deque_int_front_mut(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
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
            const __ret = ffi.C.MR_C_std_deque_int_back(this.rawPointer());
            ffi.check();
            return ((__ret >>> 0) === 0 ? null : ffi.M.HEAP32[((__ret >>> 0)) >>> 2]);
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
            const __ret = ffi.C.MR_C_std_deque_int_back_mut(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
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
            ffi.C.MR_C_std_deque_int_push_back(this.rawPointer(), new_elem);
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
            ffi.C.MR_C_std_deque_int_pop_back(this.rawPointer());
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
            ffi.C.MR_C_std_deque_int_push_front(this.rawPointer(), new_elem);
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
            ffi.C.MR_C_std_deque_int_pop_front(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    insert(position, new_elem)
    {
        try
        {
            ffi.C.MR_C_std_deque_int_insert(this.rawPointer(), position, new_elem);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    erase(position)
    {
        try
        {
            ffi.C.MR_C_std_deque_int_erase(this.rawPointer(), position);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    insert_at_mutable_iter(position, new_elem)
    {
        try
        {
            ffi.C.MR_C_std_deque_int_insert_at_mutable_iter(this.rawPointer(), ffi.ptrNonNull(position, "position"), new_elem);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    erase_at_mutable_iter(position)
    {
        try
        {
            ffi.C.MR_C_std_deque_int_erase_at_mutable_iter(this.rawPointer(), ffi.ptrNonNull(position, "position"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    insert_at_iter(position, new_elem)
    {
        try
        {
            ffi.C.MR_C_std_deque_int_insert_at_iter(this.rawPointer(), ffi.ptrNonNull(position, "position"), new_elem);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    erase_at_iter(position)
    {
        try
        {
            ffi.C.MR_C_std_deque_int_erase_at_iter(this.rawPointer(), ffi.ptrNonNull(position, "position"));
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
            const __ret = ffi.C.MR_C_std_deque_int_begin(this.rawPointer());
            ffi.check();
            return new L.MR_C_std_deque_int_const_iterator(ffi.RAW, (__ret >>> 0), true, null);
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
            const __ret = ffi.C.MR_C_std_deque_int_is_begin(this.rawPointer(), ffi.ptrNonNull(iter, "iter"));
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
            const __ret = ffi.C.MR_C_std_deque_int_begin_mut(this.rawPointer());
            ffi.check();
            return new L.MR_C_std_deque_int_iterator(ffi.RAW, (__ret >>> 0), true, null);
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
            const __ret = ffi.C.MR_C_std_deque_int_is_begin_mut(this.rawPointer(), ffi.ptrNonNull(iter, "iter"));
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
            const __ret = ffi.C.MR_C_std_deque_int_end(this.rawPointer());
            ffi.check();
            return new L.MR_C_std_deque_int_const_iterator(ffi.RAW, (__ret >>> 0), true, null);
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
            const __ret = ffi.C.MR_C_std_deque_int_is_end(this.rawPointer(), ffi.ptrNonNull(iter, "iter"));
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
            const __ret = ffi.C.MR_C_std_deque_int_end_mut(this.rawPointer());
            ffi.check();
            return new L.MR_C_std_deque_int_iterator(ffi.RAW, (__ret >>> 0), true, null);
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
            const __ret = ffi.C.MR_C_std_deque_int_is_end_mut(this.rawPointer(), ffi.ptrNonNull(iter, "iter"));
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
            const __ret = ffi.C.MR_C_std_deque_int_to_index(this.rawPointer(), ffi.ptrNonNull(iter, "iter"));
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
            const __ret = ffi.C.MR_C_std_deque_int_to_index_mut(this.rawPointer(), ffi.ptrNonNull(iter, "iter"));
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
 * Read-only iterator for `MR_C_std_deque_int`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_deque_int_const_iterator extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_deque_int_const_iterator_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_int_const_iterator_DefaultConstruct();
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
            const __ret = ffi.C.MR_C_std_deque_int_const_iterator_ConstructFromAnother(ffi.ptrNonNull(other, "other"));
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
            const __ret = ffi.C.MR_C_std_deque_int_const_iterator_from_mutable(ffi.ptrNonNull(iter, "iter"));
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
        try
        {
            ffi.C.MR_C_std_deque_int_const_iterator_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(other, "other"));
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
            const __ret = ffi.C.MR_C_std_deque_int_const_iterator_deref(this.rawPointer());
            ffi.check();
            return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
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
            ffi.C.MR_C_std_deque_int_const_iterator_incr(this.rawPointer());
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
            ffi.C.MR_C_std_deque_int_const_iterator_decr(this.rawPointer());
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
            ffi.C.MR_C_std_deque_int_const_iterator_add_assign(this.rawPointer(), delta);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Mutable iterator for `MR_C_std_deque_int`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_deque_int_iterator extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_deque_int_iterator_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_deque_int_iterator_DefaultConstruct();
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
            const __ret = ffi.C.MR_C_std_deque_int_iterator_ConstructFromAnother(ffi.ptrNonNull(other, "other"));
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
        try
        {
            ffi.C.MR_C_std_deque_int_iterator_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(other, "other"));
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
            const __ret = ffi.C.MR_C_std_deque_int_iterator_deref(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
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
            ffi.C.MR_C_std_deque_int_iterator_incr(this.rawPointer());
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
            ffi.C.MR_C_std_deque_int_iterator_decr(this.rawPointer());
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
            ffi.C.MR_C_std_deque_int_iterator_add_assign(this.rawPointer(), delta);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

export function MR_C_sub_MR_C_std_deque_int_const_iterator(a, b)
{
    try
    {
        const __ret = ffi.C.MR_C_sub_MR_C_std_deque_int_const_iterator(ffi.ptrNonNull(a, "a"), ffi.ptrNonNull(b, "b"));
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_equal_MR_C_std_deque_int_const_iterator(a, b)
{
    try
    {
        const __ret = ffi.C.MR_C_equal_MR_C_std_deque_int_const_iterator(ffi.ptrNonNull(a, "a"), ffi.ptrNonNull(b, "b"));
        ffi.check();
        return (__ret !== 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_sub_MR_C_std_deque_int_iterator(a, b)
{
    try
    {
        const __ret = ffi.C.MR_C_sub_MR_C_std_deque_int_iterator(ffi.ptrNonNull(a, "a"), ffi.ptrNonNull(b, "b"));
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_equal_MR_C_std_deque_int_iterator(a, b)
{
    try
    {
        const __ret = ffi.C.MR_C_equal_MR_C_std_deque_int_iterator(ffi.ptrNonNull(a, "a"), ffi.ptrNonNull(b, "b"));
        ffi.check();
        return (__ret !== 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

