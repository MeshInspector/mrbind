// The wrappers of the C bindings file `std_pair_const_MR_StdContainers_NonAssignable_float`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores two objects: `const MR::StdContainers::NonAssignable` and `const MR::StdContainers::NonAssignable`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_pair_const_MR_StdContainers_NonAssignable_float extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(first, second)
    {
        const __ret = ffi.C.MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_Construct(ffi.PASS_BY_COPY, ffi.ptrNonNull(first, "first"), second);
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_pair_const_MR_StdContainers_NonAssignable_float.__ctor_0();
        if (__n === 2 && (args[0] instanceof L.MR_StdContainers_NonAssignable) && typeof args[1] === "number")
            return L.MR_C_std_pair_const_MR_StdContainers_NonAssignable_float.__ctor_1(args[0], args[1]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_pair_const_MR_StdContainers_NonAssignable_float.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_pair_const_MR_StdContainers_NonAssignable_float.__ctor(args), L.MR_C_std_pair_const_MR_StdContainers_NonAssignable_float.__destroy, null);
    }

    first()
    {
        const __ret = ffi.C.MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_first(this.rawPointer());
        ffi.check();
        const __owner = this;
        return new L.MR_StdContainers_NonAssignable(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    second()
    {
        const __ret = ffi.C.MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_second(this.rawPointer());
        ffi.check();
        return ffi.M.HEAPF32[((__ret >>> 0)) >>> 2];
    }

    second_mut()
    {
        const __ret = ffi.C.MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_second_mut(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }
}

