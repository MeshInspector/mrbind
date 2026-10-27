// The wrappers of the C bindings file `MR/test_abstract_classes`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::AbstractClasses::A`.
 *
 * Can't be created from JS, only references to it are used (`new X(ffi.RAW, pointer, false, owner)`).
 */
export class MR_AbstractClasses_A extends ffi.CppObject
{
    static __ctor(args)
    {
        throw new TypeError("`A` can't be constructed from JS.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], null, args[3]);
            return;
        }
        super(L.MR_AbstractClasses_A.__ctor(args), null, null);
    }

    foo()
    {
        try
        {
            ffi.C.MR_AbstractClasses_A_foo(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::AbstractClasses::B`.
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::AbstractClasses::C`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_AbstractClasses_B extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_AbstractClasses_B_Destroy(ptr);}

    static __ctor(args)
    {
        throw new TypeError("`B` can't be constructed from JS.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_AbstractClasses_B.__destroy : null, args[3]);
            return;
        }
        super(L.MR_AbstractClasses_B.__ctor(args), L.MR_AbstractClasses_B.__destroy, null);
    }

    foo()
    {
        try
        {
            ffi.C.MR_AbstractClasses_B_foo(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::AbstractClasses::C`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::AbstractClasses::B`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_AbstractClasses_C extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_AbstractClasses_C_Destroy(ptr);}

    static __ctor(args)
    {
        throw new TypeError("`C` can't be constructed from JS.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_AbstractClasses_C.__destroy : null, args[3]);
            return;
        }
        super(L.MR_AbstractClasses_C.__ctor(args), L.MR_AbstractClasses_C.__destroy, null);
    }

    foo()
    {
        try
        {
            ffi.C.MR_AbstractClasses_C_foo(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    upcastToB()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_AbstractClasses_C_MutableUpcastTo_MR_AbstractClasses_B(this.rawPointer())) >>> 0);
        return new L.MR_AbstractClasses_B(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromB(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_AbstractClasses_C_MutableStaticDowncastFrom_MR_AbstractClasses_B(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_AbstractClasses_C(ffi.RAW, __ret, false, object);
    }

    static dynamicDowncastFromB(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_AbstractClasses_C_MutableDynamicDowncastFrom_MR_AbstractClasses_B(ffi.ptrNonNull(object, "object"))) >>> 0);
        return __ret === 0 ? null : new L.MR_AbstractClasses_C(ffi.RAW, __ret, false, object);
    }
}

