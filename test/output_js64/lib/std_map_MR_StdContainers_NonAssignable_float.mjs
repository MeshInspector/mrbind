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
    static __destroy(ptr) {ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_ConstructFromAnother(ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
        return Number(__ret);
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
        ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_AssignFromAnother(BigInt(this.rawPointer()), ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
    }

    size()
    {
        const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_size(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    empty()
    {
        const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_empty(BigInt(this.rawPointer()));
        ffi.check();
        return (__ret !== 0);
    }

    clear()
    {
        ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_clear(BigInt(this.rawPointer()));
        ffi.check();
    }

    find_or_construct_elem(key)
    {
        const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_find_or_construct_elem(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(key, "key")));
        ffi.check();
        return Number(__ret);
    }

    contains(key)
    {
        const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_contains(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(key, "key")));
        ffi.check();
        return (__ret !== 0);
    }

    find(key)
    {
        const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_find(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(key, "key")));
        ffi.check();
        return new L.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator(ffi.RAW, Number(__ret), true, null);
    }

    find_mut(key)
    {
        const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_find_mut(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(key, "key")));
        ffi.check();
        return new L.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator(ffi.RAW, Number(__ret), true, null);
    }

    begin()
    {
        const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_begin(BigInt(this.rawPointer()));
        ffi.check();
        return new L.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator(ffi.RAW, Number(__ret), true, null);
    }

    is_begin_2(iter)
    {
        const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_is_begin(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(iter, "iter")));
        ffi.check();
        return (__ret !== 0);
    }

    begin_mut()
    {
        const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_begin_mut(BigInt(this.rawPointer()));
        ffi.check();
        return new L.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator(ffi.RAW, Number(__ret), true, null);
    }

    is_begin_mut(iter)
    {
        const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_is_begin_mut(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(iter, "iter")));
        ffi.check();
        return (__ret !== 0);
    }

    end()
    {
        const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_end(BigInt(this.rawPointer()));
        ffi.check();
        return new L.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator(ffi.RAW, Number(__ret), true, null);
    }

    is_end_2(iter)
    {
        const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_is_end(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(iter, "iter")));
        ffi.check();
        return (__ret !== 0);
    }

    end_mut()
    {
        const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_end_mut(BigInt(this.rawPointer()));
        ffi.check();
        return new L.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator(ffi.RAW, Number(__ret), true, null);
    }

    is_end_mut(iter)
    {
        const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_is_end_mut(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(iter, "iter")));
        ffi.check();
        return (__ret !== 0);
    }
}

/**
 * Read-only iterator for `MR_C_std_map_MR_StdContainers_NonAssignable_float`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator_ConstructFromAnother(BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor_2(iter)
    {
        const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator_from_mutable(BigInt(ffi.ptrNonNull(iter, "iter")));
        ffi.check();
        return Number(__ret);
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
        ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator_AssignFromAnother(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
    }

    deref()
    {
        const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator_deref(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return new L.MR_C_std_pair_const_MR_StdContainers_NonAssignable_float(ffi.RAW, Number(__ret), false, __owner);
    }

    deref_key()
    {
        const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator_deref_key(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return new L.MR_StdContainers_NonAssignable(ffi.RAW, Number(__ret), false, __owner);
    }

    deref_value()
    {
        const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator_deref_value(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.HEAPF32()[(Number(__ret)) / 4];
    }

    incr()
    {
        ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator_incr(BigInt(this.rawPointer()));
        ffi.check();
    }

    decr()
    {
        ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator_decr(BigInt(this.rawPointer()));
        ffi.check();
    }
}

/**
 * Mutable iterator for `MR_C_std_map_MR_StdContainers_NonAssignable_float`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator_ConstructFromAnother(BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
        return Number(__ret);
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
        ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator_AssignFromAnother(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
    }

    deref()
    {
        const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator_deref(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return new L.MR_C_std_pair_const_MR_StdContainers_NonAssignable_float(ffi.RAW, Number(__ret), false, __owner);
    }

    deref_key()
    {
        const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator_deref_key(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return new L.MR_StdContainers_NonAssignable(ffi.RAW, Number(__ret), false, __owner);
    }

    deref_value()
    {
        const __ret = ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator_deref_value(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    incr()
    {
        ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator_incr(BigInt(this.rawPointer()));
        ffi.check();
    }

    decr()
    {
        ffi.C.MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator_decr(BigInt(this.rawPointer()));
        ffi.check();
    }
}

export function MR_C_equal_MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator(a, b)
{
    const __ret = ffi.C.MR_C_equal_MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator(BigInt(ffi.ptrNonNull(a, "a")), BigInt(ffi.ptrNonNull(b, "b")));
    ffi.check();
    return (__ret !== 0);
}

export function MR_C_equal_MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator(a, b)
{
    const __ret = ffi.C.MR_C_equal_MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator(BigInt(ffi.ptrNonNull(a, "a")), BigInt(ffi.ptrNonNull(b, "b")));
    ffi.check();
    return (__ret !== 0);
}

