// The wrappers of the C bindings file `std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores 2 objects: `MR::CSharp::ExposedLayout &&`, `const MR::CSharp::ExposedLayout &&`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_Destroy(ptr);}

    static __ctor_0(other)
    {
        const __ret = ffi.C.MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_ConstructFromAnother(ffi.ptrNonNull(other, "other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_0, _1)
    {
        const __ret = ffi.C.MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_Construct(ffi.ptrNonNull(_0, "_0"), ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 1 && (args[0] instanceof L.MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref))
            return L.MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref.__ctor_0(args[0]);
        if (__n === 2 && (args[0] instanceof L.MR_CSharp_ExposedLayout) && (args[1] instanceof L.MR_CSharp_ExposedLayout))
            return L.MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref.__ctor_1(args[0], args[1]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref.__ctor(args), L.MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref.__destroy, null);
    }

    get_MR_CSharp_ExposedLayout_rvalue_ref()
    {
        const __ret = ffi.C.MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_get_MR_CSharp_ExposedLayout_rvalue_ref(this.rawPointer());
        ffi.check();
        const __owner = this;
        return new L.MR_CSharp_ExposedLayout(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    get_const_MR_CSharp_ExposedLayout_rvalue_ref()
    {
        const __ret = ffi.C.MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_get_const_MR_CSharp_ExposedLayout_rvalue_ref(this.rawPointer());
        ffi.check();
        const __owner = this;
        return new L.MR_CSharp_ExposedLayout(ffi.RAW, (__ret >>> 0), false, __owner);
    }
}

