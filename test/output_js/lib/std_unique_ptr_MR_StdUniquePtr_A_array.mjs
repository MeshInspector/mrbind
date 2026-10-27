// The wrappers of the C bindings file `std_unique_ptr_MR_StdUniquePtr_A_array`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Wraps a pointer to a heap-allocated array of type `MR::StdUniquePtr::A`, of an unspecified size.
 * Doesn't store the size, it has to be obtained separately.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_unique_ptr_MR_StdUniquePtr_A_array extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFromAnother(ffi.ptrNonNull(other, "other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_2(other)
    {
        const __ret = ffi.C.MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFrom(ffi.nonNull(other, "other").release());
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_unique_ptr_MR_StdUniquePtr_A_array.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_unique_ptr_MR_StdUniquePtr_A_array))
            return L.MR_C_std_unique_ptr_MR_StdUniquePtr_A_array.__ctor_1(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_StdUniquePtr_A))
            return L.MR_C_std_unique_ptr_MR_StdUniquePtr_A_array.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_unique_ptr_MR_StdUniquePtr_A_array.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_unique_ptr_MR_StdUniquePtr_A_array.__ctor(args), L.MR_C_std_unique_ptr_MR_StdUniquePtr_A_array.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(other, "other"));
        ffi.check();
    }

    assignFrom(other)
    {
        ffi.C.MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_AssignFrom(this.rawPointer(), ffi.nonNull(other, "other").release());
        ffi.check();
    }

    get()
    {
        const __ret = ffi.C.MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_get(this.rawPointer());
        ffi.check();
        const __owner = this;
        return ((__ret >>> 0) === 0 ? null : new L.MR_StdUniquePtr_A(ffi.RAW, (__ret >>> 0), false, __owner));
    }

    at(i)
    {
        const __ret = ffi.C.MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_at(this.rawPointer(), i);
        ffi.check();
        const __owner = this;
        return new L.MR_StdUniquePtr_A(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    release_2()
    {
        const __ret = ffi.C.MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_release(this.rawPointer());
        ffi.check();
        const __owner = this;
        return ((__ret >>> 0) === 0 ? null : new L.MR_StdUniquePtr_A(ffi.RAW, (__ret >>> 0), false, __owner));
    }
}

