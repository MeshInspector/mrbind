// The wrappers of the C bindings file `std_map_MR_StdContainers_NonAssignable_float`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Generated from C++ container `std::map<MR::StdContainers::NonAssignable, float>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_map_MR_StdContainers_NonAssignable_float extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_Destroy(ptr);}

    static __ctor_0()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_DefaultConstruct();
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

    static __ctor_1(other)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
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
            return L.MR_C_std_map_MR_StdContainers_NonAssignable_float.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_map_MR_StdContainers_NonAssignable_float))
            return L.MR_C_std_map_MR_StdContainers_NonAssignable_float.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_map_MR_StdContainers_NonAssignable_float.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_map_MR_StdContainers_NonAssignable_float.__ctor(args), L.MR_C_std_map_MR_StdContainers_NonAssignable_float.__destroy, null);
    }

    is_begin(...args)
    {
        const __n = args.length;
        if (__n === 1 && (args[0] instanceof L.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator))
            return this.is_begin_2(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator))
            return this.is_begin_mut(args[0]);
        throw new TypeError("No overload of `is_begin` accepts these arguments.");
    }

    is_end(...args)
    {
        const __n = args.length;
        if (__n === 1 && (args[0] instanceof L.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator))
            return this.is_end_2(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator))
            return this.is_end_mut(args[0]);
        throw new TypeError("No overload of `is_end` accepts these arguments.");
    }

    assignFromAnother(other)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
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
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_size(this.rawPointer());
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

    empty()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_empty(this.rawPointer());
            ffi.check();
            return (__ret !== 0);
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

    clear()
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_clear(this.rawPointer());
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

    find_or_construct_elem(key)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_find_or_construct_elem(this.rawPointer(), ffi.ptrNonNull(key, "key"));
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

    contains(key)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_contains(this.rawPointer(), ffi.ptrNonNull(key, "key"));
            ffi.check();
            return (__ret !== 0);
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

    find(key)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_find(this.rawPointer(), ffi.ptrNonNull(key, "key"));
            ffi.check();
            return new L.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator(ffi.RAW, (__ret >>> 0), true, null);
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

    find_mut(key)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_find_mut(this.rawPointer(), ffi.ptrNonNull(key, "key"));
            ffi.check();
            return new L.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator(ffi.RAW, (__ret >>> 0), true, null);
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

    begin()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_begin(this.rawPointer());
            ffi.check();
            return new L.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator(ffi.RAW, (__ret >>> 0), true, null);
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

    is_begin_2(iter)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_is_begin(this.rawPointer(), ffi.ptrNonNull(iter, "iter"));
            ffi.check();
            return (__ret !== 0);
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

    begin_mut()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_begin_mut(this.rawPointer());
            ffi.check();
            return new L.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator(ffi.RAW, (__ret >>> 0), true, null);
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

    is_begin_mut(iter)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_is_begin_mut(this.rawPointer(), ffi.ptrNonNull(iter, "iter"));
            ffi.check();
            return (__ret !== 0);
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

    end()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_end(this.rawPointer());
            ffi.check();
            return new L.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator(ffi.RAW, (__ret >>> 0), true, null);
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

    is_end_2(iter)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_is_end(this.rawPointer(), ffi.ptrNonNull(iter, "iter"));
            ffi.check();
            return (__ret !== 0);
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

    end_mut()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_end_mut(this.rawPointer());
            ffi.check();
            return new L.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator(ffi.RAW, (__ret >>> 0), true, null);
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

    is_end_mut(iter)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_is_end_mut(this.rawPointer(), ffi.ptrNonNull(iter, "iter"));
            ffi.check();
            return (__ret !== 0);
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
}

/**
 * Read-only iterator for `MR_C_std_map_MR_StdContainers_NonAssignable_float`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator_Destroy(ptr);}

    static __ctor_0()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator_DefaultConstruct();
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

    static __ctor_1(other)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator_ConstructFromAnother(ffi.ptrNonNull(other, "other"));
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

    static __ctor_2(iter)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator_from_mutable(ffi.ptrNonNull(iter, "iter"));
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
            return L.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator))
            return L.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator.__ctor_1(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator))
            return L.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator.__ctor(args), L.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator.__destroy, null);
    }

    assignFromAnother(other)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(other, "other"));
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

    deref()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator_deref(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_pair_const_MR_StdContainers_NonAssignable_float(ffi.RAW, (__ret >>> 0), false, __owner);
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

    deref_key()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator_deref_key(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_StdContainers_NonAssignable(ffi.RAW, (__ret >>> 0), false, __owner);
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

    deref_value()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator_deref_value(this.rawPointer());
            ffi.check();
            return ffi.HEAPF32()[((__ret >>> 0)) >>> 2];
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

    incr()
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator_incr(this.rawPointer());
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

    decr()
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator_decr(this.rawPointer());
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
}

/**
 * Mutable iterator for `MR_C_std_map_MR_StdContainers_NonAssignable_float`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator_Destroy(ptr);}

    static __ctor_0()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator_DefaultConstruct();
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

    static __ctor_1(other)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator_ConstructFromAnother(ffi.ptrNonNull(other, "other"));
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
            return L.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator))
            return L.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator.__ctor(args), L.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator.__destroy, null);
    }

    assignFromAnother(other)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(other, "other"));
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

    deref()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator_deref(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_pair_const_MR_StdContainers_NonAssignable_float(ffi.RAW, (__ret >>> 0), false, __owner);
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

    deref_key()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator_deref_key(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_StdContainers_NonAssignable(ffi.RAW, (__ret >>> 0), false, __owner);
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

    deref_value()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator_deref_value(this.rawPointer());
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

    incr()
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator_incr(this.rawPointer());
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

    decr()
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator_decr(this.rawPointer());
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
}

export function MR_C_equal_MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_equal_MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator(ffi.ptrNonNull(a, "a"), ffi.ptrNonNull(b, "b"));
        ffi.check();
        return (__ret !== 0);
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

export function MR_C_equal_MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_equal_MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator(ffi.ptrNonNull(a, "a"), ffi.ptrNonNull(b, "b"));
        ffi.check();
        return (__ret !== 0);
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

