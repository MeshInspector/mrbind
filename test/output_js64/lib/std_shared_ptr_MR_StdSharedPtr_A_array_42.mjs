// The wrappers of the C bindings file `std_shared_ptr_MR_StdSharedPtr_A_array_42`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Wraps a pointer to a shared reference-counted heap-allocated array of type `MR::StdSharedPtr::A`, of size 42.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42 extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42_ConstructFromAnother(ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor_2(ptr)
    {
        const __a0 = BigInt(ffi.nonNull(ptr, "ptr").release());
        const __ret = ffi.C.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42_Construct(__a0);
        ffi.check();
        return Number(__ret);
    }

    static __ctor_3(ptr)
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42_ConstructNonOwning(BigInt(ffi.ptr(ptr)));
        ffi.check();
        return Number(__ret);
    }

    static __ctor_4(ownership, ptr)
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42_ConstructAliasing(ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(ownership, "ownership")), BigInt(ffi.ptr(ptr)));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42))
            return L.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42.__ctor_1(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_StdSharedPtr_A))
            return L.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42.__ctor_2(args[0]);
        if (__n === 1 && (__n <= 0 || (args[0] == null || args[0] instanceof L.MR_StdSharedPtr_A)))
            return L.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42.__ctor_3(args[0]);
        if (__n === 2 && (args[0] instanceof L.MR_C_std_shared_ptr_const_void) && (__n <= 1 || (args[1] == null || args[1] instanceof L.MR_StdSharedPtr_A)))
            return L.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42.__ctor_4(args[0], args[1]);
        if (__n >= 0 && __n < 1 && (__n <= 0 || (args[0] == null || args[0] instanceof L.MR_StdSharedPtr_A)))
            return L.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42.__ctor_3(args[0]);
        if (__n >= 1 && __n < 2 && (args[0] instanceof L.MR_C_std_shared_ptr_const_void) && (__n <= 1 || (args[1] == null || args[1] instanceof L.MR_StdSharedPtr_A)))
            return L.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42.__ctor_4(args[0], args[1]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42.__ctor(args), L.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42_AssignFromAnother(BigInt(this.rawPointer()), ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
    }

    get()
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42_get(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return (Number(__ret) === 0 ? null : new L.MR_StdSharedPtr_A(ffi.RAW, Number(__ret), false, __owner));
    }

    has_value()
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42_has_value(BigInt(this.rawPointer()));
        ffi.check();
        return (__ret !== 0);
    }

    use_count()
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42_use_count(BigInt(this.rawPointer()));
        ffi.check();
        return __ret;
    }

    reset()
    {
        ffi.C.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42_reset(BigInt(this.rawPointer()));
        ffi.check();
    }

    assign(ptr)
    {
        const __a0 = BigInt(this.rawPointer());
        const __a1 = BigInt(ffi.nonNull(ptr, "ptr").release());
        ffi.C.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42_Assign(__a0, __a1);
        ffi.check();
    }

    assignNonOwning(ptr)
    {
        ffi.C.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42_AssignNonOwning(BigInt(this.rawPointer()), BigInt(ffi.ptr(ptr)));
        ffi.check();
    }

    AssignAliasing(ownership, ptr)
    {
        ffi.C.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42_AssignAliasing(BigInt(this.rawPointer()), ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(ownership, "ownership")), BigInt(ffi.ptr(ptr)));
        ffi.check();
    }

    convertTo_MR_C_std_shared_ptr_void()
    {
        const __ret = ffi.C.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42_ConvertTo_MR_C_std_shared_ptr_void(BigInt(this.rawPointer()));
        ffi.check();
        return new L.MR_C_std_shared_ptr_void(ffi.RAW, Number(__ret), true, null);
    }

    AssignTo_MR_C_std_shared_ptr_void(_target)
    {
        ffi.C.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42_AssignTo_MR_C_std_shared_ptr_void(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(_target, "_target")));
        ffi.check();
    }
}

