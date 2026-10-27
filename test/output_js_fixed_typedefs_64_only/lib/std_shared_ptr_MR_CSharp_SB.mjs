// The wrappers of the C bindings file `std_shared_ptr_MR_CSharp_SB`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Wraps a pointer to a single shared reference-counted heap-allocated `MR::CSharp::SB`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_shared_ptr_MR_CSharp_SB extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_shared_ptr_MR_CSharp_SB_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_shared_ptr_MR_CSharp_SB_DefaultConstruct();
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
            const __ret = ffi.C.MR_C_std_shared_ptr_MR_CSharp_SB_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
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
            const __ret = ffi.C.MR_C_std_shared_ptr_MR_CSharp_SB_ConstructFromValue(ffi.PASS_BY_COPY, ffi.ptrNonNull(value, "value"));
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
            const __ret = ffi.C.MR_C_std_shared_ptr_MR_CSharp_SB_ConstructNonOwning(ffi.ptr(ptr));
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
            const __ret = ffi.C.MR_C_std_shared_ptr_MR_CSharp_SB_ConstructAliasing(ffi.PASS_BY_COPY, ffi.ptrNonNull(ownership, "ownership"), ffi.ptr(ptr));
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
            return L.MR_C_std_shared_ptr_MR_CSharp_SB.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_shared_ptr_MR_CSharp_SB))
            return L.MR_C_std_shared_ptr_MR_CSharp_SB.__ctor_1(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_SB))
            return L.MR_C_std_shared_ptr_MR_CSharp_SB.__ctor_2(args[0]);
        if (__n === 1 && (__n <= 0 || (args[0] == null || args[0] instanceof L.MR_CSharp_SB)))
            return L.MR_C_std_shared_ptr_MR_CSharp_SB.__ctor_4(args[0]);
        if (__n === 2 && (args[0] instanceof L.MR_C_std_shared_ptr_const_void) && (__n <= 1 || (args[1] == null || args[1] instanceof L.MR_CSharp_SB)))
            return L.MR_C_std_shared_ptr_MR_CSharp_SB.__ctor_5(args[0], args[1]);
        if (__n >= 0 && __n < 1 && (__n <= 0 || (args[0] == null || args[0] instanceof L.MR_CSharp_SB)))
            return L.MR_C_std_shared_ptr_MR_CSharp_SB.__ctor_4(args[0]);
        if (__n >= 1 && __n < 2 && (args[0] instanceof L.MR_C_std_shared_ptr_const_void) && (__n <= 1 || (args[1] == null || args[1] instanceof L.MR_CSharp_SB)))
            return L.MR_C_std_shared_ptr_MR_CSharp_SB.__ctor_5(args[0], args[1]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    static construct(ptr)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_shared_ptr_MR_CSharp_SB_Construct(ffi.nonNull(ptr, "ptr").release());
            ffi.check();
            return new L.MR_C_std_shared_ptr_MR_CSharp_SB(ffi.RAW, (__ret >>> 0), true, null);
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
            super(args[1], args[2] ? L.MR_C_std_shared_ptr_MR_CSharp_SB.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_shared_ptr_MR_CSharp_SB.__ctor(args), L.MR_C_std_shared_ptr_MR_CSharp_SB.__destroy, null);
    }

    assignFromAnother(other)
    {
        try
        {
            ffi.C.MR_C_std_shared_ptr_MR_CSharp_SB_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
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
            const __ret = ffi.C.MR_C_std_shared_ptr_MR_CSharp_SB_get(this.rawPointer());
            ffi.check();
            const __owner = this;
            return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_SB(ffi.RAW, (__ret >>> 0), false, __owner));
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
            const __ret = ffi.C.MR_C_std_shared_ptr_MR_CSharp_SB_has_value(this.rawPointer());
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
            const __ret = ffi.C.MR_C_std_shared_ptr_MR_CSharp_SB_use_count(this.rawPointer());
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
            ffi.C.MR_C_std_shared_ptr_MR_CSharp_SB_reset(this.rawPointer());
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
            ffi.C.MR_C_std_shared_ptr_MR_CSharp_SB_Assign(this.rawPointer(), ffi.nonNull(ptr, "ptr").release());
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
            ffi.C.MR_C_std_shared_ptr_MR_CSharp_SB_AssignNonOwning(this.rawPointer(), ffi.ptr(ptr));
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
            ffi.C.MR_C_std_shared_ptr_MR_CSharp_SB_AssignAliasing(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(ownership, "ownership"), ffi.ptr(ptr));
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
            const __ret = ffi.C.MR_C_std_shared_ptr_MR_CSharp_SB_ConvertTo_MR_C_std_shared_ptr_void(this.rawPointer());
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
            ffi.C.MR_C_std_shared_ptr_MR_CSharp_SB_AssignTo_MR_C_std_shared_ptr_void(this.rawPointer(), ffi.ptrNonNull(_target, "_target"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

