// The wrappers of the C bindings file `std_shared_ptr_void`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Wraps a pointer to a single shared reference-counted heap-allocated `void`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_shared_ptr_void extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_shared_ptr_void_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_void_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_void_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_2(ptr)
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_void_ConstructNonOwning(ptr);
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_3(ownership, ptr)
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_void_ConstructAliasing(ffi.PASS_BY_COPY, ffi.ptrNonNull(ownership, "ownership"), ptr);
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_shared_ptr_void.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_shared_ptr_void))
            return L.MR_C_std_shared_ptr_void.__ctor_1(args[0]);
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_C_std_shared_ptr_void.__ctor_2(args[0]);
        if (__n === 2 && (args[0] instanceof L.MR_C_std_shared_ptr_const_void) && typeof args[1] === "number")
            return L.MR_C_std_shared_ptr_void.__ctor_3(args[0], args[1]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_shared_ptr_void.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_shared_ptr_void.__ctor(args), L.MR_C_std_shared_ptr_void.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_shared_ptr_void_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
        ffi.check();
    }

    get()
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_void_get(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    has_value()
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_void_has_value(this.rawPointer());
        ffi.check();
        return (__ret !== 0);
    }

    use_count()
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_void_use_count(this.rawPointer());
        ffi.check();
        return __ret;
    }

    reset()
    {
        ffi.C.MR_C_std_shared_ptr_void_reset(this.rawPointer());
        ffi.check();
    }

    assignNonOwning(ptr)
    {
        ffi.C.MR_C_std_shared_ptr_void_AssignNonOwning(this.rawPointer(), ptr);
        ffi.check();
    }

    AssignAliasing(ownership, ptr)
    {
        ffi.C.MR_C_std_shared_ptr_void_AssignAliasing(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(ownership, "ownership"), ptr);
        ffi.check();
    }
}

