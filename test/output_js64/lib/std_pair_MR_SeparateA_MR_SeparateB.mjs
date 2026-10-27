// The wrappers of the C bindings file `std_pair_MR_SeparateA_MR_SeparateB`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores two objects: `MR::SeparateA` and `MR::SeparateA`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_pair_MR_SeparateA_MR_SeparateB extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_pair_MR_SeparateA_MR_SeparateB_Destroy(BigInt(ptr));}

    static __ctor_0(other)
    {
        const __ret = ffi.C.MR_C_std_pair_MR_SeparateA_MR_SeparateB_ConstructFromAnother(ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(first, second)
    {
        const __ret = ffi.C.MR_C_std_pair_MR_SeparateA_MR_SeparateB_Construct(ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(first, "first")), ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(second, "second")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 1 && (args[0] instanceof L.MR_C_std_pair_MR_SeparateA_MR_SeparateB))
            return L.MR_C_std_pair_MR_SeparateA_MR_SeparateB.__ctor_0(args[0]);
        if (__n === 2 && (args[0] instanceof L.MR_SeparateA) && (args[1] instanceof L.MR_SeparateB))
            return L.MR_C_std_pair_MR_SeparateA_MR_SeparateB.__ctor_1(args[0], args[1]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_pair_MR_SeparateA_MR_SeparateB.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_pair_MR_SeparateA_MR_SeparateB.__ctor(args), L.MR_C_std_pair_MR_SeparateA_MR_SeparateB.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_pair_MR_SeparateA_MR_SeparateB_AssignFromAnother(BigInt(this.rawPointer()), ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
    }

    first()
    {
        const __ret = ffi.C.MR_C_std_pair_MR_SeparateA_MR_SeparateB_first(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return new L.MR_SeparateA(ffi.RAW, Number(__ret), false, __owner);
    }

    first_mut()
    {
        const __ret = ffi.C.MR_C_std_pair_MR_SeparateA_MR_SeparateB_first_mut(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return new L.MR_SeparateA(ffi.RAW, Number(__ret), false, __owner);
    }

    second()
    {
        const __ret = ffi.C.MR_C_std_pair_MR_SeparateA_MR_SeparateB_second(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return new L.MR_SeparateB(ffi.RAW, Number(__ret), false, __owner);
    }

    second_mut()
    {
        const __ret = ffi.C.MR_C_std_pair_MR_SeparateA_MR_SeparateB_second_mut(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return new L.MR_SeparateB(ffi.RAW, Number(__ret), false, __owner);
    }
}

