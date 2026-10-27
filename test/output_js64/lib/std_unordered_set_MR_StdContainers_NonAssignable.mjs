// The wrappers of the C bindings file `std_unordered_set_MR_StdContainers_NonAssignable`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Generated from C++ container `std::unordered_set<MR::StdContainers::NonAssignable>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_unordered_set_MR_StdContainers_NonAssignable extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_unordered_set_MR_StdContainers_NonAssignable_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_unordered_set_MR_StdContainers_NonAssignable_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_unordered_set_MR_StdContainers_NonAssignable_ConstructFromAnother(ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_unordered_set_MR_StdContainers_NonAssignable.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_unordered_set_MR_StdContainers_NonAssignable))
            return L.MR_C_std_unordered_set_MR_StdContainers_NonAssignable.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_unordered_set_MR_StdContainers_NonAssignable.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_unordered_set_MR_StdContainers_NonAssignable.__ctor(args), L.MR_C_std_unordered_set_MR_StdContainers_NonAssignable.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_unordered_set_MR_StdContainers_NonAssignable_AssignFromAnother(BigInt(this.rawPointer()), ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
    }

    size()
    {
        const __ret = ffi.C.MR_C_std_unordered_set_MR_StdContainers_NonAssignable_size(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    empty()
    {
        const __ret = ffi.C.MR_C_std_unordered_set_MR_StdContainers_NonAssignable_empty(BigInt(this.rawPointer()));
        ffi.check();
        return (__ret !== 0);
    }

    clear()
    {
        ffi.C.MR_C_std_unordered_set_MR_StdContainers_NonAssignable_clear(BigInt(this.rawPointer()));
        ffi.check();
    }

    contains(key)
    {
        const __ret = ffi.C.MR_C_std_unordered_set_MR_StdContainers_NonAssignable_contains(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(key, "key")));
        ffi.check();
        return (__ret !== 0);
    }

    find(key)
    {
        const __ret = ffi.C.MR_C_std_unordered_set_MR_StdContainers_NonAssignable_find(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(key, "key")));
        ffi.check();
        return new L.MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator(ffi.RAW, Number(__ret), true, null);
    }

    begin()
    {
        const __ret = ffi.C.MR_C_std_unordered_set_MR_StdContainers_NonAssignable_begin(BigInt(this.rawPointer()));
        ffi.check();
        return new L.MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator(ffi.RAW, Number(__ret), true, null);
    }

    is_begin(iter)
    {
        const __ret = ffi.C.MR_C_std_unordered_set_MR_StdContainers_NonAssignable_is_begin(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(iter, "iter")));
        ffi.check();
        return (__ret !== 0);
    }

    end()
    {
        const __ret = ffi.C.MR_C_std_unordered_set_MR_StdContainers_NonAssignable_end(BigInt(this.rawPointer()));
        ffi.check();
        return new L.MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator(ffi.RAW, Number(__ret), true, null);
    }

    is_end(iter)
    {
        const __ret = ffi.C.MR_C_std_unordered_set_MR_StdContainers_NonAssignable_is_end(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(iter, "iter")));
        ffi.check();
        return (__ret !== 0);
    }
}

/**
 * Read-only iterator for `MR_C_std_unordered_set_MR_StdContainers_NonAssignable`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator))
            return L.MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator.__ctor(args), L.MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
    }

    deref()
    {
        const __ret = ffi.C.MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_deref(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return new L.MR_StdContainers_NonAssignable(ffi.RAW, Number(__ret), false, __owner);
    }

    incr()
    {
        ffi.C.MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_incr(BigInt(this.rawPointer()));
        ffi.check();
    }
}

export function MR_C_equal_MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator(a, b)
{
    const __ret = ffi.C.MR_C_equal_MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator(BigInt(ffi.ptrNonNull(a, "a")), BigInt(ffi.ptrNonNull(b, "b")));
    ffi.check();
    return (__ret !== 0);
}

