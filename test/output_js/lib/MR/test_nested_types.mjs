// The wrappers of the C bindings file `MR/test_nested_types`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export const MR_NestedTypes_A_E = Object.freeze({
});

/**
 * Generated from class `MR::NestedTypes::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_NestedTypes_A extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_NestedTypes_A_Destroy(ptr);}

    get b()
    {
        const __ret = ffi.C.MR_NestedTypes_A_Get_b(this.rawPointer());
        ffi.check();
        const __owner = this;
        return new L.MR_NestedTypes_A_B(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    set b(value)
    {
        ffi.C.MR_NestedTypes_A_Set_b(this.rawPointer(), ffi.ptrNonNull(value, "value"));
        ffi.check();
    }

    get e()
    {
        const __ret = ffi.C.MR_NestedTypes_A_Get_e(this.rawPointer());
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    set e(value)
    {
        ffi.C.MR_NestedTypes_A_Set_e(this.rawPointer(), value);
        ffi.check();
    }

    static __ctor_0()
    {
        const __ret = ffi.C.MR_NestedTypes_A_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(b, e)
    {
        const __ret = ffi.C.MR_NestedTypes_A_ConstructFrom(ffi.ptrNonNull(b, "b"), e);
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_2(_other)
    {
        const __ret = ffi.C.MR_NestedTypes_A_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_NestedTypes_A.__ctor_0();
        if (__n === 2 && (args[0] instanceof L.MR_NestedTypes_A_B) && typeof args[1] === "number")
            return L.MR_NestedTypes_A.__ctor_1(args[0], args[1]);
        if (__n === 1 && (args[0] instanceof L.MR_NestedTypes_A))
            return L.MR_NestedTypes_A.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_NestedTypes_A.__destroy : null, args[3]);
            return;
        }
        super(L.MR_NestedTypes_A.__ctor(args), L.MR_NestedTypes_A.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_NestedTypes_A_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_NestedTypes_A(ffi.RAW, (__ret >>> 0), false, __owner);
    }
}

/**
 * Generated from class `MR::NestedTypes::A::B`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_NestedTypes_A_B extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_NestedTypes_A_B_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_NestedTypes_A_B_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_NestedTypes_A_B_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_NestedTypes_A_B.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_NestedTypes_A_B))
            return L.MR_NestedTypes_A_B.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_NestedTypes_A_B.__destroy : null, args[3]);
            return;
        }
        super(L.MR_NestedTypes_A_B.__ctor(args), L.MR_NestedTypes_A_B.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_NestedTypes_A_B_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_NestedTypes_A_B(ffi.RAW, (__ret >>> 0), false, __owner);
    }
}

