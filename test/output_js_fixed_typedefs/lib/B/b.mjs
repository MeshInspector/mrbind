// The wrappers of the C bindings file `B/b`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::SeparateB`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::CommonBaseAB`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_SeparateB extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_SeparateB_Destroy(ptr);}

    static __ctor_0(_other)
    {
        try
        {
            const __ret = ffi.C.MR_SeparateB_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 1 && (args[0] instanceof L.MR_SeparateB))
            return L.MR_SeparateB.__ctor_0(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_SeparateB.__destroy : null, args[3]);
            return;
        }
        super(L.MR_SeparateB.__ctor(args), L.MR_SeparateB.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_SeparateB_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_SeparateB(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    upcastToCommonBaseAB()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_SeparateB_MutableUpcastTo_MR_CommonBaseAB(this.rawPointer())) >>> 0);
        return new L.MR_CommonBaseAB(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromCommonBaseAB(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_SeparateB_MutableStaticDowncastFrom_MR_CommonBaseAB(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_SeparateB(ffi.RAW, __ret, false, object);
    }

    static dynamicDowncastFromCommonBaseAB(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_SeparateB_MutableDynamicDowncastFrom_MR_CommonBaseAB(ffi.ptrNonNull(object, "object"))) >>> 0);
        return __ret === 0 ? null : new L.MR_SeparateB(ffi.RAW, __ret, false, object);
    }
}

export function MR_GetSeparateVecB()
{
    try
    {
        const __ret = ffi.C.MR_GetSeparateVecB();
        ffi.check();
        return new L.MR_C_std_vector_MR_SeparateB(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

