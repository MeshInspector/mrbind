// The wrappers of the C bindings file `std_unique_ptr_MR_StdUniquePtr_A`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Wraps a pointer to a single heap-allocated `MR::StdUniquePtr::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_unique_ptr_MR_StdUniquePtr_A extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_unique_ptr_MR_StdUniquePtr_A_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_unique_ptr_MR_StdUniquePtr_A_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_unique_ptr_MR_StdUniquePtr_A_ConstructFromAnother(BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor_2(other)
    {
        const __ret = ffi.C.MR_C_std_unique_ptr_MR_StdUniquePtr_A_ConstructFrom(BigInt(ffi.nonNull(other, "other").release()));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_unique_ptr_MR_StdUniquePtr_A.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_unique_ptr_MR_StdUniquePtr_A))
            return L.MR_C_std_unique_ptr_MR_StdUniquePtr_A.__ctor_1(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_StdUniquePtr_A))
            return L.MR_C_std_unique_ptr_MR_StdUniquePtr_A.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_unique_ptr_MR_StdUniquePtr_A.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_unique_ptr_MR_StdUniquePtr_A.__ctor(args), L.MR_C_std_unique_ptr_MR_StdUniquePtr_A.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_unique_ptr_MR_StdUniquePtr_A_AssignFromAnother(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
    }

    assignFrom(other)
    {
        ffi.C.MR_C_std_unique_ptr_MR_StdUniquePtr_A_AssignFrom(BigInt(this.rawPointer()), BigInt(ffi.nonNull(other, "other").release()));
        ffi.check();
    }

    get()
    {
        const __ret = ffi.C.MR_C_std_unique_ptr_MR_StdUniquePtr_A_get(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return (Number(__ret) === 0 ? null : new L.MR_StdUniquePtr_A(ffi.RAW, Number(__ret), false, __owner));
    }

    release_2()
    {
        const __ret = ffi.C.MR_C_std_unique_ptr_MR_StdUniquePtr_A_release(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return (Number(__ret) === 0 ? null : new L.MR_StdUniquePtr_A(ffi.RAW, Number(__ret), false, __owner));
    }
}

