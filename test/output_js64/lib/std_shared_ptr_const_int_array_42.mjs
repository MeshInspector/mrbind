// The wrappers of the C bindings file `std_shared_ptr_const_int_array_42`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Wraps a pointer to a shared reference-counted heap-allocated array of type `const int`, of size 42.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_shared_ptr_const_int_array_42 extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_shared_ptr_const_int_array_42_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_const_int_array_42_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_const_int_array_42_ConstructFromAnother(ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor_2(ptr)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_ptr = ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = ptr;});
            const __ret = ffi.C.MR_C_std_shared_ptr_const_int_array_42_Construct(BigInt(__ptr_ptr));
            ffi.check();
            return Number(__ret);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    static __ctor_3(ptr)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_ptr = ptr == null ? 0 : ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = ptr;});
            const __ret = ffi.C.MR_C_std_shared_ptr_const_int_array_42_ConstructNonOwning(BigInt(__ptr_ptr));
            ffi.check();
            return Number(__ret);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    static __ctor_4(ptr)
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_const_int_array_42_ConstructFromMutable(ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(ptr, "ptr")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor_5(ownership, ptr)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_ptr = ptr == null ? 0 : ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = ptr;});
            const __ret = ffi.C.MR_C_std_shared_ptr_const_int_array_42_ConstructAliasing(ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(ownership, "ownership")), BigInt(__ptr_ptr));
            ffi.check();
            return Number(__ret);
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
            return L.MR_C_std_shared_ptr_const_int_array_42.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_shared_ptr_const_int_array_42))
            return L.MR_C_std_shared_ptr_const_int_array_42.__ctor_1(args[0]);
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_C_std_shared_ptr_const_int_array_42.__ctor_2(args[0]);
        if (__n === 1 && (__n <= 0 || (args[0] == null || typeof args[0] === "number")))
            return L.MR_C_std_shared_ptr_const_int_array_42.__ctor_3(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_C_std_shared_ptr_int_array_42))
            return L.MR_C_std_shared_ptr_const_int_array_42.__ctor_4(args[0]);
        if (__n === 2 && (args[0] instanceof L.MR_C_std_shared_ptr_const_void) && (__n <= 1 || (args[1] == null || typeof args[1] === "number")))
            return L.MR_C_std_shared_ptr_const_int_array_42.__ctor_5(args[0], args[1]);
        if (__n >= 0 && __n < 1 && (__n <= 0 || (args[0] == null || typeof args[0] === "number")))
            return L.MR_C_std_shared_ptr_const_int_array_42.__ctor_3(args[0]);
        if (__n >= 1 && __n < 2 && (args[0] instanceof L.MR_C_std_shared_ptr_const_void) && (__n <= 1 || (args[1] == null || typeof args[1] === "number")))
            return L.MR_C_std_shared_ptr_const_int_array_42.__ctor_5(args[0], args[1]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_shared_ptr_const_int_array_42.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_shared_ptr_const_int_array_42.__ctor(args), L.MR_C_std_shared_ptr_const_int_array_42.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_shared_ptr_const_int_array_42_AssignFromAnother(BigInt(this.rawPointer()), ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
    }

    get()
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_const_int_array_42_get(BigInt(this.rawPointer()));
        ffi.check();
        return (Number(__ret) === 0 ? null : ffi.M.HEAP32[(Number(__ret)) >>> 2]);
    }

    has_value()
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_const_int_array_42_has_value(BigInt(this.rawPointer()));
        ffi.check();
        return (__ret !== 0);
    }

    use_count()
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_const_int_array_42_use_count(BigInt(this.rawPointer()));
        ffi.check();
        return __ret;
    }

    reset()
    {
        ffi.C.MR_C_std_shared_ptr_const_int_array_42_reset(BigInt(this.rawPointer()));
        ffi.check();
    }

    assign(ptr)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_ptr = ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = ptr;});
            ffi.C.MR_C_std_shared_ptr_const_int_array_42_Assign(BigInt(this.rawPointer()), BigInt(__ptr_ptr));
            ffi.check();
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    assignNonOwning(ptr)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_ptr = ptr == null ? 0 : ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = ptr;});
            ffi.C.MR_C_std_shared_ptr_const_int_array_42_AssignNonOwning(BigInt(this.rawPointer()), BigInt(__ptr_ptr));
            ffi.check();
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    assignFromMutable(ptr)
    {
        ffi.C.MR_C_std_shared_ptr_const_int_array_42_AssignFromMutable(BigInt(this.rawPointer()), ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(ptr, "ptr")));
        ffi.check();
    }

    AssignAliasing(ownership, ptr)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_ptr = ptr == null ? 0 : ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = ptr;});
            ffi.C.MR_C_std_shared_ptr_const_int_array_42_AssignAliasing(BigInt(this.rawPointer()), ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(ownership, "ownership")), BigInt(__ptr_ptr));
            ffi.check();
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    convertTo_MR_C_std_shared_ptr_const_void()
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_const_int_array_42_ConvertTo_MR_C_std_shared_ptr_const_void(BigInt(this.rawPointer()));
        ffi.check();
        return new L.MR_C_std_shared_ptr_const_void(ffi.RAW, Number(__ret), true, null);
    }

    AssignTo_MR_C_std_shared_ptr_const_void(_target)
    {
        ffi.C.MR_C_std_shared_ptr_const_int_array_42_AssignTo_MR_C_std_shared_ptr_const_void(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(_target, "_target")));
        ffi.check();
    }
}

