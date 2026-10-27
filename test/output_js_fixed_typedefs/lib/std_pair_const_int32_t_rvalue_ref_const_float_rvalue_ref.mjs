// The wrappers of the C bindings file `std_pair_const_int32_t_rvalue_ref_const_float_rvalue_ref`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores two objects: `const int32_t &&` and `const int32_t &&`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_pair_const_int32_t_rvalue_ref_const_float_rvalue_ref extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_pair_const_int32_t_rvalue_ref_const_float_rvalue_ref_Destroy(ptr);}

    static __ctor_0(other)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_pair_const_int32_t_rvalue_ref_const_float_rvalue_ref_ConstructFromAnother(ffi.ptrNonNull(other, "other"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(first, second)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_first = ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = first;});
            const __ptr_second = ffi.stackScalar(4, (p) => {ffi.M.HEAPF32[(p) >>> 2] = second;});
            const __ret = ffi.C.MR_C_std_pair_const_int32_t_rvalue_ref_const_float_rvalue_ref_Construct(__ptr_first, __ptr_second);
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 1 && (args[0] instanceof L.MR_C_std_pair_const_int32_t_rvalue_ref_const_float_rvalue_ref))
            return L.MR_C_std_pair_const_int32_t_rvalue_ref_const_float_rvalue_ref.__ctor_0(args[0]);
        if (__n === 2 && typeof args[0] === "number" && typeof args[1] === "number")
            return L.MR_C_std_pair_const_int32_t_rvalue_ref_const_float_rvalue_ref.__ctor_1(args[0], args[1]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_pair_const_int32_t_rvalue_ref_const_float_rvalue_ref.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_pair_const_int32_t_rvalue_ref_const_float_rvalue_ref.__ctor(args), L.MR_C_std_pair_const_int32_t_rvalue_ref_const_float_rvalue_ref.__destroy, null);
    }

    first()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_pair_const_int32_t_rvalue_ref_const_float_rvalue_ref_first(this.rawPointer());
            ffi.check();
            return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    second()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_pair_const_int32_t_rvalue_ref_const_float_rvalue_ref_second(this.rawPointer());
            ffi.check();
            return ffi.M.HEAPF32[((__ret >>> 0)) >>> 2];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

