// The wrappers of the C bindings file `std_shared_ptr_MR_CommonBaseAB`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Wraps a pointer to a single shared reference-counted heap-allocated `MR::CommonBaseAB`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_shared_ptr_MR_CommonBaseAB extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_shared_ptr_MR_CommonBaseAB_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_MR_CommonBaseAB_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_MR_CommonBaseAB_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_2(value)
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_MR_CommonBaseAB_ConstructFromValue(ffi.PASS_BY_COPY, ffi.ptrNonNull(value, "value"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_4(ptr)
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_MR_CommonBaseAB_ConstructNonOwning(ffi.ptr(ptr));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_5(ownership, ptr)
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_MR_CommonBaseAB_ConstructAliasing(ffi.PASS_BY_COPY, ffi.ptrNonNull(ownership, "ownership"), ffi.ptr(ptr));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_shared_ptr_MR_CommonBaseAB.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_shared_ptr_MR_CommonBaseAB))
            return L.MR_C_std_shared_ptr_MR_CommonBaseAB.__ctor_1(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_CommonBaseAB))
            return L.MR_C_std_shared_ptr_MR_CommonBaseAB.__ctor_2(args[0]);
        if (__n === 1 && (__n <= 0 || (args[0] == null || args[0] instanceof L.MR_CommonBaseAB)))
            return L.MR_C_std_shared_ptr_MR_CommonBaseAB.__ctor_4(args[0]);
        if (__n === 2 && (args[0] instanceof L.MR_C_std_shared_ptr_const_void) && (__n <= 1 || (args[1] == null || args[1] instanceof L.MR_CommonBaseAB)))
            return L.MR_C_std_shared_ptr_MR_CommonBaseAB.__ctor_5(args[0], args[1]);
        if (__n >= 0 && __n < 1 && (__n <= 0 || (args[0] == null || args[0] instanceof L.MR_CommonBaseAB)))
            return L.MR_C_std_shared_ptr_MR_CommonBaseAB.__ctor_4(args[0]);
        if (__n >= 1 && __n < 2 && (args[0] instanceof L.MR_C_std_shared_ptr_const_void) && (__n <= 1 || (args[1] == null || args[1] instanceof L.MR_CommonBaseAB)))
            return L.MR_C_std_shared_ptr_MR_CommonBaseAB.__ctor_5(args[0], args[1]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    static construct(ptr)
    {
        const __a0 = ffi.nonNull(ptr, "ptr").release();
        const __ret = ffi.C.MR_C_std_shared_ptr_MR_CommonBaseAB_Construct(__a0);
        ffi.check();
        return new L.MR_C_std_shared_ptr_MR_CommonBaseAB(ffi.RAW, (__ret >>> 0), true, null);
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_shared_ptr_MR_CommonBaseAB.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_shared_ptr_MR_CommonBaseAB.__ctor(args), L.MR_C_std_shared_ptr_MR_CommonBaseAB.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_shared_ptr_MR_CommonBaseAB_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
        ffi.check();
    }

    get()
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_MR_CommonBaseAB_get(this.rawPointer());
        ffi.check();
        const __owner = this;
        return ((__ret >>> 0) === 0 ? null : new L.MR_CommonBaseAB(ffi.RAW, (__ret >>> 0), false, __owner));
    }

    has_value()
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_MR_CommonBaseAB_has_value(this.rawPointer());
        ffi.check();
        return (__ret !== 0);
    }

    use_count()
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_MR_CommonBaseAB_use_count(this.rawPointer());
        ffi.check();
        return __ret;
    }

    reset()
    {
        ffi.C.MR_C_std_shared_ptr_MR_CommonBaseAB_reset(this.rawPointer());
        ffi.check();
    }

    assign(ptr)
    {
        const __a0 = this.rawPointer();
        const __a1 = ffi.nonNull(ptr, "ptr").release();
        ffi.C.MR_C_std_shared_ptr_MR_CommonBaseAB_Assign(__a0, __a1);
        ffi.check();
    }

    assignNonOwning(ptr)
    {
        ffi.C.MR_C_std_shared_ptr_MR_CommonBaseAB_AssignNonOwning(this.rawPointer(), ffi.ptr(ptr));
        ffi.check();
    }

    AssignAliasing(ownership, ptr)
    {
        ffi.C.MR_C_std_shared_ptr_MR_CommonBaseAB_AssignAliasing(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(ownership, "ownership"), ffi.ptr(ptr));
        ffi.check();
    }

    convertTo_MR_C_std_shared_ptr_void()
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_MR_CommonBaseAB_ConvertTo_MR_C_std_shared_ptr_void(this.rawPointer());
        ffi.check();
        return new L.MR_C_std_shared_ptr_void(ffi.RAW, (__ret >>> 0), true, null);
    }

    AssignTo_MR_C_std_shared_ptr_void(_target)
    {
        ffi.C.MR_C_std_shared_ptr_MR_CommonBaseAB_AssignTo_MR_C_std_shared_ptr_void(this.rawPointer(), ffi.ptrNonNull(_target, "_target"));
        ffi.check();
    }
}

