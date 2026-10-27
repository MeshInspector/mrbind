// The wrappers of the C bindings file `std_shared_ptr_int_array_42`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Wraps a pointer to a shared reference-counted heap-allocated array of type `int`, of size 42.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_shared_ptr_int_array_42 extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_shared_ptr_int_array_42_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_int_array_42_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_int_array_42_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_2(ptr)
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_int_array_42_Construct(ptr);
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_4(ownership, ptr)
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_int_array_42_ConstructAliasing(ffi.PASS_BY_COPY, ffi.ptrNonNull(ownership, "ownership"), ptr);
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_shared_ptr_int_array_42.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_shared_ptr_int_array_42))
            return L.MR_C_std_shared_ptr_int_array_42.__ctor_1(args[0]);
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_C_std_shared_ptr_int_array_42.__ctor_2(args[0]);
        if (__n === 2 && (args[0] instanceof L.MR_C_std_shared_ptr_const_void) && typeof args[1] === "number")
            return L.MR_C_std_shared_ptr_int_array_42.__ctor_4(args[0], args[1]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    static constructNonOwning(ptr)
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_int_array_42_ConstructNonOwning(ptr);
        ffi.check();
        return new L.MR_C_std_shared_ptr_int_array_42(ffi.RAW, (__ret >>> 0), true, null);
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_shared_ptr_int_array_42.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_shared_ptr_int_array_42.__ctor(args), L.MR_C_std_shared_ptr_int_array_42.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_shared_ptr_int_array_42_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
        ffi.check();
    }

    get()
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_int_array_42_get(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    has_value()
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_int_array_42_has_value(this.rawPointer());
        ffi.check();
        return (__ret !== 0);
    }

    use_count()
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_int_array_42_use_count(this.rawPointer());
        ffi.check();
        return __ret;
    }

    reset()
    {
        ffi.C.MR_C_std_shared_ptr_int_array_42_reset(this.rawPointer());
        ffi.check();
    }

    assign(ptr)
    {
        ffi.C.MR_C_std_shared_ptr_int_array_42_Assign(this.rawPointer(), ptr);
        ffi.check();
    }

    assignNonOwning(ptr)
    {
        ffi.C.MR_C_std_shared_ptr_int_array_42_AssignNonOwning(this.rawPointer(), ptr);
        ffi.check();
    }

    AssignAliasing(ownership, ptr)
    {
        ffi.C.MR_C_std_shared_ptr_int_array_42_AssignAliasing(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(ownership, "ownership"), ptr);
        ffi.check();
    }

    convertTo_MR_C_std_shared_ptr_void()
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_int_array_42_ConvertTo_MR_C_std_shared_ptr_void(this.rawPointer());
        ffi.check();
        return new L.MR_C_std_shared_ptr_void(ffi.RAW, (__ret >>> 0), true, null);
    }

    AssignTo_MR_C_std_shared_ptr_void(_target)
    {
        ffi.C.MR_C_std_shared_ptr_int_array_42_AssignTo_MR_C_std_shared_ptr_void(this.rawPointer(), ffi.ptrNonNull(_target, "_target"));
        ffi.check();
    }
}

