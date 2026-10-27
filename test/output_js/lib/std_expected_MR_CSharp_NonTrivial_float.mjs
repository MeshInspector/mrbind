// The wrappers of the C bindings file `std_expected_MR_CSharp_NonTrivial_float`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores either a `MR::CSharp::NonTrivial` that represents success or a `float` that represents an error.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_expected_MR_CSharp_NonTrivial_float extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_expected_MR_CSharp_NonTrivial_float_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_expected_MR_CSharp_NonTrivial_float_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_expected_MR_CSharp_NonTrivial_float_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_expected_MR_CSharp_NonTrivial_float.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_expected_MR_CSharp_NonTrivial_float))
            return L.MR_C_std_expected_MR_CSharp_NonTrivial_float.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_expected_MR_CSharp_NonTrivial_float.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_expected_MR_CSharp_NonTrivial_float.__ctor(args), L.MR_C_std_expected_MR_CSharp_NonTrivial_float.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_expected_MR_CSharp_NonTrivial_float_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
        ffi.check();
    }

    success()
    {
        const __ret = ffi.C.MR_C_std_expected_MR_CSharp_NonTrivial_float_success(this.rawPointer());
        ffi.check();
        return (__ret !== 0);
    }

    value()
    {
        const __ret = ffi.C.MR_C_std_expected_MR_CSharp_NonTrivial_float_value(this.rawPointer());
        ffi.check();
        const __owner = this;
        return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_NonTrivial(ffi.RAW, (__ret >>> 0), false, __owner));
    }

    error()
    {
        const __ret = ffi.C.MR_C_std_expected_MR_CSharp_NonTrivial_float_error(this.rawPointer());
        ffi.check();
        return ((__ret >>> 0) === 0 ? null : ffi.M.HEAPF32[((__ret >>> 0)) >>> 2]);
    }

    value_mut()
    {
        const __ret = ffi.C.MR_C_std_expected_MR_CSharp_NonTrivial_float_value_mut(this.rawPointer());
        ffi.check();
        const __owner = this;
        return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_NonTrivial(ffi.RAW, (__ret >>> 0), false, __owner));
    }

    error_mut()
    {
        const __ret = ffi.C.MR_C_std_expected_MR_CSharp_NonTrivial_float_error_mut(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    valueOrThrow()
    {
        const __owner = this;
        if (!(ffi.cppCall(() => ffi.C.MR_C_std_expected_MR_CSharp_NonTrivial_float_success(this.rawPointer())) !== 0))
        {
            const __ret = ffi.cppCall(() => ffi.C.MR_C_std_expected_MR_CSharp_NonTrivial_float_error(this.rawPointer()));
            ffi.check();
            throw new ffi.UnexpectedResultException(String(ffi.M.HEAPF32[((__ret >>> 0)) >>> 2]));
        }
        const __ret = ffi.cppCall(() => ffi.C.MR_C_std_expected_MR_CSharp_NonTrivial_float_value(this.rawPointer()));
        ffi.check();
        return new L.MR_CSharp_NonTrivial(ffi.RAW, (__ret >>> 0), false, __owner);
    }
}

