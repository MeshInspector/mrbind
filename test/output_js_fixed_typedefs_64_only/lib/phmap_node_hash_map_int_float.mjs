// The wrappers of the C bindings file `phmap_node_hash_map_int_float`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Generated from C++ container `phmap::node_hash_map<int, float>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_phmap_node_hash_map_int_float extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_phmap_node_hash_map_int_float_Destroy(ptr);}

    static __ctor_0()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_phmap_node_hash_map_int_float_DefaultConstruct();
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
            const __ret = ffi.C.MR_C_phmap_node_hash_map_int_float_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
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
            return L.MR_C_phmap_node_hash_map_int_float.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_phmap_node_hash_map_int_float))
            return L.MR_C_phmap_node_hash_map_int_float.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_phmap_node_hash_map_int_float.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_phmap_node_hash_map_int_float.__ctor(args), L.MR_C_phmap_node_hash_map_int_float.__destroy, null);
    }

    assignFromAnother(other)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_phmap_node_hash_map_int_float_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
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
            const __ret = ffi.C.MR_C_phmap_node_hash_map_int_float_size(this.rawPointer());
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
            const __ret = ffi.C.MR_C_phmap_node_hash_map_int_float_empty(this.rawPointer());
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
            ffi.C.MR_C_phmap_node_hash_map_int_float_clear(this.rawPointer());
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
            const __ptr_key = ffi.stackScalar(4, (p) => {ffi.HEAPU32()[(p) >>> 2] = key;});
            const __ret = ffi.C.MR_C_phmap_node_hash_map_int_float_find_or_construct_elem(this.rawPointer(), __ptr_key);
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
            const __ptr_key = ffi.stackScalar(4, (p) => {ffi.HEAPU32()[(p) >>> 2] = key;});
            const __ret = ffi.C.MR_C_phmap_node_hash_map_int_float_contains(this.rawPointer(), __ptr_key);
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
            const __ptr_key = ffi.stackScalar(4, (p) => {ffi.HEAPU32()[(p) >>> 2] = key;});
            const __ret = ffi.C.MR_C_phmap_node_hash_map_int_float_find(this.rawPointer(), __ptr_key);
            ffi.check();
            return new L.MR_C_phmap_node_hash_map_int_float_const_iterator(ffi.RAW, (__ret >>> 0), true, null);
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

    find_value(key)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_key = ffi.stackScalar(4, (p) => {ffi.HEAPU32()[(p) >>> 2] = key;});
            const __ret = ffi.C.MR_C_phmap_node_hash_map_int_float_find_value(this.rawPointer(), __ptr_key);
            ffi.check();
            return ((__ret >>> 0) === 0 ? null : ffi.HEAPF32()[((__ret >>> 0)) >>> 2]);
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

    find_value_mut(key)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_key = ffi.stackScalar(4, (p) => {ffi.HEAPU32()[(p) >>> 2] = key;});
            const __ret = ffi.C.MR_C_phmap_node_hash_map_int_float_find_value_mut(this.rawPointer(), __ptr_key);
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

    begin()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_phmap_node_hash_map_int_float_begin(this.rawPointer());
            ffi.check();
            return new L.MR_C_phmap_node_hash_map_int_float_const_iterator(ffi.RAW, (__ret >>> 0), true, null);
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
            const __ret = ffi.C.MR_C_phmap_node_hash_map_int_float_end(this.rawPointer());
            ffi.check();
            return new L.MR_C_phmap_node_hash_map_int_float_const_iterator(ffi.RAW, (__ret >>> 0), true, null);
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

    is_end(iter)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_phmap_node_hash_map_int_float_is_end(this.rawPointer(), ffi.ptrNonNull(iter, "iter"));
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
 * Read-only iterator for `MR_C_phmap_node_hash_map_int_float`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_phmap_node_hash_map_int_float_const_iterator extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_phmap_node_hash_map_int_float_const_iterator_Destroy(ptr);}

    static __ctor_0()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_phmap_node_hash_map_int_float_const_iterator_DefaultConstruct();
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
            const __ret = ffi.C.MR_C_phmap_node_hash_map_int_float_const_iterator_ConstructFromAnother(ffi.ptrNonNull(other, "other"));
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
            return L.MR_C_phmap_node_hash_map_int_float_const_iterator.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_phmap_node_hash_map_int_float_const_iterator))
            return L.MR_C_phmap_node_hash_map_int_float_const_iterator.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_phmap_node_hash_map_int_float_const_iterator.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_phmap_node_hash_map_int_float_const_iterator.__ctor(args), L.MR_C_phmap_node_hash_map_int_float_const_iterator.__destroy, null);
    }

    assignFromAnother(other)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_phmap_node_hash_map_int_float_const_iterator_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(other, "other"));
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
            const __ret = ffi.C.MR_C_phmap_node_hash_map_int_float_const_iterator_deref(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_pair_const_int_float(ffi.RAW, (__ret >>> 0), false, __owner);
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
            const __ret = ffi.C.MR_C_phmap_node_hash_map_int_float_const_iterator_deref_key(this.rawPointer());
            ffi.check();
            return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
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
            const __ret = ffi.C.MR_C_phmap_node_hash_map_int_float_const_iterator_deref_value(this.rawPointer());
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
            ffi.C.MR_C_phmap_node_hash_map_int_float_const_iterator_incr(this.rawPointer());
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

export function MR_C_equal_MR_C_phmap_node_hash_map_int_float_const_iterator(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ret = ffi.C.MR_C_equal_MR_C_phmap_node_hash_map_int_float_const_iterator(ffi.ptrNonNull(a, "a"), ffi.ptrNonNull(b, "b"));
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

