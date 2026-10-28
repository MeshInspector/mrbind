// The wrappers of the C bindings file `MR/test_lifetime_inference`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::LifetimeInference::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_LifetimeInference_A extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_LifetimeInference_A_Destroy(ptr);}

    get x()
    {
        const __ret = ffi.C.MR_LifetimeInference_A_Get_x(this.rawPointer());
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    set x(value)
    {
        ffi.C.MR_LifetimeInference_A_Set_x(this.rawPointer(), value);
        ffi.check();
    }

    static __ctor_0()
    {
        const __ret = ffi.C.MR_LifetimeInference_A_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(x)
    {
        const __ret = ffi.C.MR_LifetimeInference_A_ConstructFrom(x);
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_2(_other)
    {
        const __ret = ffi.C.MR_LifetimeInference_A_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_LifetimeInference_A.__ctor_0();
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_LifetimeInference_A.__ctor_1(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_LifetimeInference_A))
            return L.MR_LifetimeInference_A.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_LifetimeInference_A.__destroy : null, args[3]);
            return;
        }
        super(L.MR_LifetimeInference_A.__ctor(args), L.MR_LifetimeInference_A.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_LifetimeInference_A_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_LifetimeInference_A(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    begin()
    {
        const __ret = ffi.C.MR_LifetimeInference_A_begin(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    end()
    {
        const __ret = ffi.C.MR_LifetimeInference_A_end(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }
}

/**
 * Generated from class `MR::LifetimeInference::B`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_LifetimeInference_B extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_LifetimeInference_B_Destroy(ptr);}

    get x()
    {
        const __ret = ffi.C.MR_LifetimeInference_B_Get_x(this.rawPointer());
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    set x(value)
    {
        ffi.C.MR_LifetimeInference_B_Set_x(this.rawPointer(), value);
        ffi.check();
    }

    static __ctor_0()
    {
        const __ret = ffi.C.MR_LifetimeInference_B_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(x)
    {
        const __ret = ffi.C.MR_LifetimeInference_B_ConstructFrom(x);
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_2(_other)
    {
        const __ret = ffi.C.MR_LifetimeInference_B_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_LifetimeInference_B.__ctor_0();
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_LifetimeInference_B.__ctor_1(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_LifetimeInference_B))
            return L.MR_LifetimeInference_B.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_LifetimeInference_B.__destroy : null, args[3]);
            return;
        }
        super(L.MR_LifetimeInference_B.__ctor(args), L.MR_LifetimeInference_B.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_LifetimeInference_B_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_LifetimeInference_B(ffi.RAW, (__ret >>> 0), false, __owner);
    }
}

/**
 * Generated from class `MR::LifetimeInference::C`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_LifetimeInference_C extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_LifetimeInference_C_Destroy(ptr);}

    static __ctor_0(_other)
    {
        const __ret = ffi.C.MR_LifetimeInference_C_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_1, _2, _3)
    {
        const __ret = ffi.C.MR_LifetimeInference_C_Construct(ffi.ptrNonNull(_1, "_1"), ffi.ScalarOutput.ref(_2, "_2"), _3);
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 1 && (args[0] instanceof L.MR_LifetimeInference_C))
            return L.MR_LifetimeInference_C.__ctor_0(args[0]);
        if (__n === 3 && (args[0] instanceof L.MR_LifetimeInference_A) && args[1] instanceof L.int_output && typeof args[2] === "number")
            return L.MR_LifetimeInference_C.__ctor_1(args[0], args[1], args[2]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_LifetimeInference_C.__destroy : null, args[3]);
            return;
        }
        super(L.MR_LifetimeInference_C.__ctor(args), L.MR_LifetimeInference_C.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_LifetimeInference_C_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_LifetimeInference_C(ffi.RAW, (__ret >>> 0), false, __owner);
    }
}

export function MR_LifetimeInference_begin_MR_LifetimeInference_A(a)
{
    const __ret = ffi.C.MR_LifetimeInference_begin_MR_LifetimeInference_A(ffi.ptrNonNull(a, "a"));
    ffi.check();
    return (__ret >>> 0);
}

export function MR_LifetimeInference_end_MR_LifetimeInference_A(a)
{
    const __ret = ffi.C.MR_LifetimeInference_end_MR_LifetimeInference_A(ffi.ptrNonNull(a, "a"));
    ffi.check();
    return (__ret >>> 0);
}

export function MR_LifetimeInference_begin_MR_LifetimeInference_B(b)
{
    const __ret = ffi.C.MR_LifetimeInference_begin_MR_LifetimeInference_B(ffi.ptrNonNull(b, "b"));
    ffi.check();
    return (__ret >>> 0);
}

export function MR_LifetimeInference_end_MR_LifetimeInference_B(b)
{
    const __ret = ffi.C.MR_LifetimeInference_end_MR_LifetimeInference_B(ffi.ptrNonNull(b, "b"));
    ffi.check();
    return (__ret >>> 0);
}

