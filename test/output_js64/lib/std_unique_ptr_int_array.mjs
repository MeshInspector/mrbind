// The wrappers of the C bindings file `std_unique_ptr_int_array`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Wraps a pointer to a heap-allocated array of type `int`, of an unspecified size.
 * Doesn't store the size, it has to be obtained separately.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_unique_ptr_int_array extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_unique_ptr_int_array_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_unique_ptr_int_array_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_unique_ptr_int_array_ConstructFromAnother(BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor_2(other)
    {
        const __ret = ffi.C.MR_C_std_unique_ptr_int_array_ConstructFrom(BigInt(other));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_unique_ptr_int_array.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_unique_ptr_int_array))
            return L.MR_C_std_unique_ptr_int_array.__ctor_1(args[0]);
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_C_std_unique_ptr_int_array.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_unique_ptr_int_array.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_unique_ptr_int_array.__ctor(args), L.MR_C_std_unique_ptr_int_array.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_unique_ptr_int_array_AssignFromAnother(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
    }

    assignFrom(other)
    {
        ffi.C.MR_C_std_unique_ptr_int_array_AssignFrom(BigInt(this.rawPointer()), BigInt(other));
        ffi.check();
    }

    get()
    {
        const __ret = ffi.C.MR_C_std_unique_ptr_int_array_get(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    at(i)
    {
        const __ret = ffi.C.MR_C_std_unique_ptr_int_array_at(BigInt(this.rawPointer()), ffi.toI64(i));
        ffi.check();
        return Number(__ret);
    }

    release_2()
    {
        const __ret = ffi.C.MR_C_std_unique_ptr_int_array_release(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }
}

