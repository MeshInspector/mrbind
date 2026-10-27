// The wrappers of the C bindings file `std_shared_ptr_MR_CSharp_SF`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Wraps a pointer to a single shared reference-counted heap-allocated `MR::CSharp::SF`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_shared_ptr_MR_CSharp_SF extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_shared_ptr_MR_CSharp_SF_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_shared_ptr_MR_CSharp_SF_DefaultConstruct();
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
            const __ret = ffi.C.MR_C_std_shared_ptr_MR_CSharp_SF_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_2(value)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_shared_ptr_MR_CSharp_SF_ConstructFromValue(ffi.PASS_BY_COPY, ffi.ptrNonNull(value, "value"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_4(ptr)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_shared_ptr_MR_CSharp_SF_ConstructNonOwning(ffi.ptr(ptr));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_5(ownership, ptr)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_shared_ptr_MR_CSharp_SF_ConstructAliasing(ffi.PASS_BY_COPY, ffi.ptrNonNull(ownership, "ownership"), ffi.ptr(ptr));
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
            return L.MR_C_std_shared_ptr_MR_CSharp_SF.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_shared_ptr_MR_CSharp_SF))
            return L.MR_C_std_shared_ptr_MR_CSharp_SF.__ctor_1(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_SF))
            return L.MR_C_std_shared_ptr_MR_CSharp_SF.__ctor_2(args[0]);
        if (__n === 1 && (__n <= 0 || (args[0] == null || args[0] instanceof L.MR_CSharp_SF)))
            return L.MR_C_std_shared_ptr_MR_CSharp_SF.__ctor_4(args[0]);
        if (__n === 2 && (args[0] instanceof L.MR_C_std_shared_ptr_const_void) && (__n <= 1 || (args[1] == null || args[1] instanceof L.MR_CSharp_SF)))
            return L.MR_C_std_shared_ptr_MR_CSharp_SF.__ctor_5(args[0], args[1]);
        if (__n >= 0 && __n < 1 && (__n <= 0 || (args[0] == null || args[0] instanceof L.MR_CSharp_SF)))
            return L.MR_C_std_shared_ptr_MR_CSharp_SF.__ctor_4(args[0]);
        if (__n >= 1 && __n < 2 && (args[0] instanceof L.MR_C_std_shared_ptr_const_void) && (__n <= 1 || (args[1] == null || args[1] instanceof L.MR_CSharp_SF)))
            return L.MR_C_std_shared_ptr_MR_CSharp_SF.__ctor_5(args[0], args[1]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    static construct(ptr)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_shared_ptr_MR_CSharp_SF_Construct(ffi.nonNull(ptr, "ptr").release());
            ffi.check();
            return new L.MR_C_std_shared_ptr_MR_CSharp_SF(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_shared_ptr_MR_CSharp_SF.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_shared_ptr_MR_CSharp_SF.__ctor(args), L.MR_C_std_shared_ptr_MR_CSharp_SF.__destroy, null);
    }

    assignFromAnother(other)
    {
        try
        {
            ffi.C.MR_C_std_shared_ptr_MR_CSharp_SF_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_shared_ptr_MR_CSharp_SF_get(this.rawPointer());
            ffi.check();
            const __owner = this;
            return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_SF(ffi.RAW, (__ret >>> 0), false, __owner));
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    has_value()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_shared_ptr_MR_CSharp_SF_has_value(this.rawPointer());
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    use_count()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_shared_ptr_MR_CSharp_SF_use_count(this.rawPointer());
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    reset()
    {
        try
        {
            ffi.C.MR_C_std_shared_ptr_MR_CSharp_SF_reset(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assign(ptr)
    {
        try
        {
            ffi.C.MR_C_std_shared_ptr_MR_CSharp_SF_Assign(this.rawPointer(), ffi.nonNull(ptr, "ptr").release());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assignNonOwning(ptr)
    {
        try
        {
            ffi.C.MR_C_std_shared_ptr_MR_CSharp_SF_AssignNonOwning(this.rawPointer(), ffi.ptr(ptr));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    AssignAliasing(ownership, ptr)
    {
        try
        {
            ffi.C.MR_C_std_shared_ptr_MR_CSharp_SF_AssignAliasing(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(ownership, "ownership"), ffi.ptr(ptr));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    convertTo_MR_C_std_shared_ptr_void()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_shared_ptr_MR_CSharp_SF_ConvertTo_MR_C_std_shared_ptr_void(this.rawPointer());
            ffi.check();
            return new L.MR_C_std_shared_ptr_void(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    AssignTo_MR_C_std_shared_ptr_void(_target)
    {
        try
        {
            ffi.C.MR_C_std_shared_ptr_MR_CSharp_SF_AssignTo_MR_C_std_shared_ptr_void(this.rawPointer(), ffi.ptrNonNull(_target, "_target"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

