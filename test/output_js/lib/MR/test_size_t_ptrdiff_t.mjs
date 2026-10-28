// The wrappers of the C bindings file `MR/test_size_t_ptrdiff_t`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::TestSizeT::A<unsigned long>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_TestSizeT_A_unsigned_long extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_TestSizeT_A_unsigned_long_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_TestSizeT_A_unsigned_long_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_TestSizeT_A_unsigned_long_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_TestSizeT_A_unsigned_long.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_TestSizeT_A_unsigned_long))
            return L.MR_TestSizeT_A_unsigned_long.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_TestSizeT_A_unsigned_long.__destroy : null, args[3]);
            return;
        }
        super(L.MR_TestSizeT_A_unsigned_long.__ctor(args), L.MR_TestSizeT_A_unsigned_long.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_TestSizeT_A_unsigned_long_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_TestSizeT_A_unsigned_long(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    foo()
    {
        const __ret = ffi.C.MR_TestSizeT_A_unsigned_long_foo(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }
}

export function MR_TestSizeT_foo_unsigned_long(_1)
{
    const __ret = ffi.C.MR_TestSizeT_foo_unsigned_long(_1);
    ffi.check();
    return (__ret >>> 0);
}

export function MR_TestSizeT_foo_unsigned_long_ptr(_1)
{
    const __ret = ffi.C.MR_TestSizeT_foo_unsigned_long_ptr(_1);
    ffi.check();
    return (__ret >>> 0);
}

export function MR_TestSizeT_foo_std_vector_unsigned_long(_1)
{
    const __ret = ffi.C.MR_TestSizeT_foo_std_vector_unsigned_long(ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
    ffi.check();
    return new L.MR_C_std_vector_unsigned_long(ffi.RAW, (__ret >>> 0), true, null);
}

export function MR_TestSizeT_foo_long(_1)
{
    const __ret = ffi.C.MR_TestSizeT_foo_long(_1);
    ffi.check();
    return __ret;
}

export function MR_TestSizeT_foo_long_ptr(_1)
{
    const __ret = ffi.C.MR_TestSizeT_foo_long_ptr(_1);
    ffi.check();
    return (__ret >>> 0);
}

export function MR_TestSizeT_foo_std_vector_long(_1)
{
    const __ret = ffi.C.MR_TestSizeT_foo_std_vector_long(ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
    ffi.check();
    return new L.MR_C_std_vector_long(ffi.RAW, (__ret >>> 0), true, null);
}

