// The wrappers of the C bindings file `phmap_node_hash_set_int`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Generated from C++ container `phmap::node_hash_set<int>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_phmap_node_hash_set_int extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_phmap_node_hash_set_int_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_phmap_node_hash_set_int_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_phmap_node_hash_set_int_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_2(ptr, size)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_ptr = ptr == null ? 0 : ffi.stackScalar(4, (p) => {ffi.HEAPU32()[(p) >>> 2] = ptr;});
            const __ret = ffi.C.MR_C_phmap_node_hash_set_int_ConstructFromRange(__ptr_ptr, size);
            ffi.check();
            return (__ret >>> 0);
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
            return L.MR_C_phmap_node_hash_set_int.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_phmap_node_hash_set_int))
            return L.MR_C_phmap_node_hash_set_int.__ctor_1(args[0]);
        if (__n === 2 && (__n <= 0 || (args[0] == null || typeof args[0] === "number")) && typeof args[1] === "number")
            return L.MR_C_phmap_node_hash_set_int.__ctor_2(args[0], args[1]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_phmap_node_hash_set_int.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_phmap_node_hash_set_int.__ctor(args), L.MR_C_phmap_node_hash_set_int.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_phmap_node_hash_set_int_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
        ffi.check();
    }

    assignFromRange(ptr, size)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_ptr = ptr == null ? 0 : ffi.stackScalar(4, (p) => {ffi.HEAPU32()[(p) >>> 2] = ptr;});
            ffi.C.MR_C_phmap_node_hash_set_int_AssignFromRange(this.rawPointer(), __ptr_ptr, size);
            ffi.check();
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    size()
    {
        const __ret = ffi.C.MR_C_phmap_node_hash_set_int_size(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    empty()
    {
        const __ret = ffi.C.MR_C_phmap_node_hash_set_int_empty(this.rawPointer());
        ffi.check();
        return (__ret !== 0);
    }

    clear()
    {
        ffi.C.MR_C_phmap_node_hash_set_int_clear(this.rawPointer());
        ffi.check();
    }

    contains(key)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_key = ffi.stackScalar(4, (p) => {ffi.HEAPU32()[(p) >>> 2] = key;});
            const __ret = ffi.C.MR_C_phmap_node_hash_set_int_contains(this.rawPointer(), __ptr_key);
            ffi.check();
            return (__ret !== 0);
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
            const __ret = ffi.C.MR_C_phmap_node_hash_set_int_find(this.rawPointer(), __ptr_key);
            ffi.check();
            return new L.MR_C_phmap_node_hash_set_int_const_iterator(ffi.RAW, (__ret >>> 0), true, null);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    insert(new_elem)
    {
        ffi.C.MR_C_phmap_node_hash_set_int_insert(this.rawPointer(), new_elem);
        ffi.check();
    }

    begin()
    {
        const __ret = ffi.C.MR_C_phmap_node_hash_set_int_begin(this.rawPointer());
        ffi.check();
        return new L.MR_C_phmap_node_hash_set_int_const_iterator(ffi.RAW, (__ret >>> 0), true, null);
    }

    is_begin(iter)
    {
        const __ret = ffi.C.MR_C_phmap_node_hash_set_int_is_begin(this.rawPointer(), ffi.ptrNonNull(iter, "iter"));
        ffi.check();
        return (__ret !== 0);
    }

    end()
    {
        const __ret = ffi.C.MR_C_phmap_node_hash_set_int_end(this.rawPointer());
        ffi.check();
        return new L.MR_C_phmap_node_hash_set_int_const_iterator(ffi.RAW, (__ret >>> 0), true, null);
    }

    is_end(iter)
    {
        const __ret = ffi.C.MR_C_phmap_node_hash_set_int_is_end(this.rawPointer(), ffi.ptrNonNull(iter, "iter"));
        ffi.check();
        return (__ret !== 0);
    }
}

/**
 * Read-only iterator for `MR_C_phmap_node_hash_set_int`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_phmap_node_hash_set_int_const_iterator extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_phmap_node_hash_set_int_const_iterator_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_phmap_node_hash_set_int_const_iterator_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_phmap_node_hash_set_int_const_iterator_ConstructFromAnother(ffi.ptrNonNull(other, "other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_phmap_node_hash_set_int_const_iterator.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_phmap_node_hash_set_int_const_iterator))
            return L.MR_C_phmap_node_hash_set_int_const_iterator.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_phmap_node_hash_set_int_const_iterator.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_phmap_node_hash_set_int_const_iterator.__ctor(args), L.MR_C_phmap_node_hash_set_int_const_iterator.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_phmap_node_hash_set_int_const_iterator_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(other, "other"));
        ffi.check();
    }

    deref()
    {
        const __ret = ffi.C.MR_C_phmap_node_hash_set_int_const_iterator_deref(this.rawPointer());
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    incr()
    {
        ffi.C.MR_C_phmap_node_hash_set_int_const_iterator_incr(this.rawPointer());
        ffi.check();
    }
}

export function MR_C_equal_MR_C_phmap_node_hash_set_int_const_iterator(a, b)
{
    const __ret = ffi.C.MR_C_equal_MR_C_phmap_node_hash_set_int_const_iterator(ffi.ptrNonNull(a, "a"), ffi.ptrNonNull(b, "b"));
    ffi.check();
    return (__ret !== 0);
}

