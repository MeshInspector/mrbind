// The wrappers of the C bindings file `std_multiset_MR_StdContainers_NonAssignable`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Generated from C++ container `std::multiset<MR::StdContainers::NonAssignable>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_multiset_MR_StdContainers_NonAssignable extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_multiset_MR_StdContainers_NonAssignable_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_multiset_MR_StdContainers_NonAssignable_DefaultConstruct();
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
            const __ret = ffi.C.MR_C_std_multiset_MR_StdContainers_NonAssignable_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
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
            return L.MR_C_std_multiset_MR_StdContainers_NonAssignable.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_multiset_MR_StdContainers_NonAssignable))
            return L.MR_C_std_multiset_MR_StdContainers_NonAssignable.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_multiset_MR_StdContainers_NonAssignable.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_multiset_MR_StdContainers_NonAssignable.__ctor(args), L.MR_C_std_multiset_MR_StdContainers_NonAssignable.__destroy, null);
    }

    assignFromAnother(other)
    {
        try
        {
            ffi.C.MR_C_std_multiset_MR_StdContainers_NonAssignable_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
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
            const __ret = ffi.C.MR_C_std_multiset_MR_StdContainers_NonAssignable_size(this.rawPointer());
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
            const __ret = ffi.C.MR_C_std_multiset_MR_StdContainers_NonAssignable_empty(this.rawPointer());
            ffi.check();
            return (__ret !== 0);
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
            ffi.C.MR_C_std_multiset_MR_StdContainers_NonAssignable_clear(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    count(key)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_multiset_MR_StdContainers_NonAssignable_count(this.rawPointer(), ffi.ptrNonNull(key, "key"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    find(key)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_multiset_MR_StdContainers_NonAssignable_find(this.rawPointer(), ffi.ptrNonNull(key, "key"));
            ffi.check();
            return new L.MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    insert(new_elem)
    {
        try
        {
            ffi.C.MR_C_std_multiset_MR_StdContainers_NonAssignable_insert(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(new_elem, "new_elem"));
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
            const __ret = ffi.C.MR_C_std_multiset_MR_StdContainers_NonAssignable_begin(this.rawPointer());
            ffi.check();
            return new L.MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    is_begin(iter)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_multiset_MR_StdContainers_NonAssignable_is_begin(this.rawPointer(), ffi.ptrNonNull(iter, "iter"));
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
            const __ret = ffi.C.MR_C_std_multiset_MR_StdContainers_NonAssignable_end(this.rawPointer());
            ffi.check();
            return new L.MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    is_end(iter)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_multiset_MR_StdContainers_NonAssignable_is_end(this.rawPointer(), ffi.ptrNonNull(iter, "iter"));
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Read-only iterator for `MR_C_std_multiset_MR_StdContainers_NonAssignable`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
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
            const __ret = ffi.C.MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(ffi.ptrNonNull(other, "other"));
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
            return L.MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator))
            return L.MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator.__ctor(args), L.MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator.__destroy, null);
    }

    assignFromAnother(other)
    {
        try
        {
            ffi.C.MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(other, "other"));
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
            const __ret = ffi.C.MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_deref(this.rawPointer());
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
            ffi.C.MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_incr(this.rawPointer());
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
            ffi.C.MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_decr(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

export function MR_C_equal_MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator(a, b)
{
    try
    {
        const __ret = ffi.C.MR_C_equal_MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator(ffi.ptrNonNull(a, "a"), ffi.ptrNonNull(b, "b"));
        ffi.check();
        return (__ret !== 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

