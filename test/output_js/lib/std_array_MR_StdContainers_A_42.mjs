// The wrappers of the C bindings file `std_array_MR_StdContainers_A_42`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * A fixed-size array of `MR::StdContainers::A` of size 42.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_array_MR_StdContainers_A_42 extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_array_MR_StdContainers_A_42_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_array_MR_StdContainers_A_42_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_array_MR_StdContainers_A_42_ConstructFromAnother(ffi.ptrNonNull(other, "other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_array_MR_StdContainers_A_42.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_array_MR_StdContainers_A_42))
            return L.MR_C_std_array_MR_StdContainers_A_42.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_array_MR_StdContainers_A_42.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_array_MR_StdContainers_A_42.__ctor(args), L.MR_C_std_array_MR_StdContainers_A_42.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_array_MR_StdContainers_A_42_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(other, "other"));
        ffi.check();
    }

    at(i)
    {
        const __ret = ffi.C.MR_C_std_array_MR_StdContainers_A_42_at(this.rawPointer(), i);
        ffi.check();
        const __owner = this;
        return new L.MR_StdContainers_A(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    at_mut(i)
    {
        const __ret = ffi.C.MR_C_std_array_MR_StdContainers_A_42_at_mut(this.rawPointer(), i);
        ffi.check();
        const __owner = this;
        return new L.MR_StdContainers_A(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    data()
    {
        const __ret = ffi.C.MR_C_std_array_MR_StdContainers_A_42_data(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    data_mut()
    {
        const __ret = ffi.C.MR_C_std_array_MR_StdContainers_A_42_data_mut(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    begin()
    {
        const __ret = ffi.C.MR_C_std_array_MR_StdContainers_A_42_begin(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    begin_mut()
    {
        const __ret = ffi.C.MR_C_std_array_MR_StdContainers_A_42_begin_mut(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    end()
    {
        const __ret = ffi.C.MR_C_std_array_MR_StdContainers_A_42_end(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    end_mut()
    {
        const __ret = ffi.C.MR_C_std_array_MR_StdContainers_A_42_end_mut(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }
}

