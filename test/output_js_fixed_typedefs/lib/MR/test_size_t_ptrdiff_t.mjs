// The wrappers of the C bindings file `MR/test_size_t_ptrdiff_t`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::TestSizeT::A<MR_C_uint64_t>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_TestSizeT_A_uint64_t extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_TestSizeT_A_uint64_t_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_TestSizeT_A_uint64_t_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_TestSizeT_A_uint64_t_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
            return L.MR_TestSizeT_A_uint64_t.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_TestSizeT_A_uint64_t))
            return L.MR_TestSizeT_A_uint64_t.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_TestSizeT_A_uint64_t.__destroy : null, args[3]);
            return;
        }
        super(L.MR_TestSizeT_A_uint64_t.__ctor(args), L.MR_TestSizeT_A_uint64_t.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_TestSizeT_A_uint64_t_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_TestSizeT_A_uint64_t(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    foo()
    {
        try
        {
            const __ret = ffi.C.MR_TestSizeT_A_uint64_t_foo(this.rawPointer());
            ffi.check();
            return BigInt.asUintN(64, __ret);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

export function MR_TestSizeT_foo_uint64_t(_1)
{
    try
    {
        const __ret = ffi.C.MR_TestSizeT_foo_uint64_t(ffi.toI64(_1));
        ffi.check();
        return BigInt.asUintN(64, __ret);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_TestSizeT_foo_uint64_t_ptr(_1)
{
    try
    {
        const __ret = ffi.C.MR_TestSizeT_foo_uint64_t_ptr(_1);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_TestSizeT_foo_std_vector_uint64_t(_1)
{
    try
    {
        const __ret = ffi.C.MR_TestSizeT_foo_std_vector_uint64_t(ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return new L.MR_C_std_vector_uint64_t(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_TestSizeT_foo_int64_t(_1)
{
    try
    {
        const __ret = ffi.C.MR_TestSizeT_foo_int64_t(ffi.toI64(_1));
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_TestSizeT_foo_int64_t_ptr(_1)
{
    try
    {
        const __ret = ffi.C.MR_TestSizeT_foo_int64_t_ptr(_1);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_TestSizeT_foo_std_vector_int64_t(_1)
{
    try
    {
        const __ret = ffi.C.MR_TestSizeT_foo_std_vector_int64_t(ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return new L.MR_C_std_vector_int64_t(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

