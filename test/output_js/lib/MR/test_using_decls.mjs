// The wrappers of the C bindings file `MR/test_using_decls`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export const MR_UsingDecls_A_E = Object.freeze({
});

/**
 * Test how `using` declarations import things.
 * Generated from class `MR::UsingDecls::A`.
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::UsingDecls::B`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_UsingDecls_A extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_UsingDecls_A_Destroy(ptr);}

    static get StaticVar()
    {
        const __ret = ffi.C.MR_UsingDecls_A_Get_StaticVar();
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    static set StaticVar(value)
    {
        ffi.C.MR_UsingDecls_A_Set_StaticVar(value);
        ffi.check();
    }

    get Field()
    {
        const __ret = ffi.C.MR_UsingDecls_A_Get_Field(this.rawPointer());
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    set Field(value)
    {
        ffi.C.MR_UsingDecls_A_Set_Field(this.rawPointer(), value);
        ffi.check();
    }

    static __ctor_0(_other)
    {
        const __ret = ffi.C.MR_UsingDecls_A_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_1)
    {
        const __ret = ffi.C.MR_UsingDecls_A_Construct(_1);
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 1 && (args[0] instanceof L.MR_UsingDecls_A))
            return L.MR_UsingDecls_A.__ctor_0(args[0]);
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_UsingDecls_A.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_UsingDecls_A.__destroy : null, args[3]);
            return;
        }
        super(L.MR_UsingDecls_A.__ctor(args), L.MR_UsingDecls_A.__destroy, null);
    }

    static StaticFunc()
    {
        ffi.C.MR_UsingDecls_A_StaticFunc();
        ffi.check();
    }

    convertTo_int()
    {
        const __ret = ffi.C.MR_UsingDecls_A_ConvertTo_int(this.rawPointer());
        ffi.check();
        return __ret;
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_UsingDecls_A_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_UsingDecls_A(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    assign(_1)
    {
        ffi.C.MR_UsingDecls_A_assign(this.rawPointer(), _1);
        ffi.check();
    }

    Method()
    {
        ffi.C.MR_UsingDecls_A_Method(this.rawPointer());
        ffi.check();
    }
}

/**
 * Generated from class `MR::UsingDecls::B`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::UsingDecls::A`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_UsingDecls_B extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_UsingDecls_B_Destroy(ptr);}

    get Field()
    {
        const __ret = ffi.C.MR_UsingDecls_B_Get_Field(this.rawPointer());
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    set Field(value)
    {
        ffi.C.MR_UsingDecls_B_Set_Field(this.rawPointer(), value);
        ffi.check();
    }

    static get StaticVar()
    {
        const __ret = ffi.C.MR_UsingDecls_B_Get_StaticVar();
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    static set StaticVar(value)
    {
        ffi.C.MR_UsingDecls_B_Set_StaticVar(value);
        ffi.check();
    }

    static __ctor_0(_other)
    {
        const __ret = ffi.C.MR_UsingDecls_B_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 1 && (args[0] instanceof L.MR_UsingDecls_B))
            return L.MR_UsingDecls_B.__ctor_0(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_UsingDecls_B.__destroy : null, args[3]);
            return;
        }
        super(L.MR_UsingDecls_B.__ctor(args), L.MR_UsingDecls_B.__destroy, null);
    }

    static StaticFunc()
    {
        ffi.C.MR_UsingDecls_B_StaticFunc();
        ffi.check();
    }

    convertTo_int()
    {
        const __ret = ffi.C.MR_UsingDecls_B_ConvertTo_int(this.rawPointer());
        ffi.check();
        return __ret;
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_UsingDecls_B_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_UsingDecls_B(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    assign(_1)
    {
        ffi.C.MR_UsingDecls_B_assign(this.rawPointer(), _1);
        ffi.check();
    }

    Method()
    {
        ffi.C.MR_UsingDecls_B_Method(this.rawPointer());
        ffi.check();
    }

    upcastToA()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_UsingDecls_B_MutableUpcastTo_MR_UsingDecls_A(this.rawPointer())) >>> 0);
        return new L.MR_UsingDecls_A(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromA(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_UsingDecls_B_MutableStaticDowncastFrom_MR_UsingDecls_A(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_UsingDecls_B(ffi.RAW, __ret, false, object);
    }
}

