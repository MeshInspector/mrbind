// The wrappers of the C bindings file `MR/test_bases`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::Bases::A`.
 * Derived classes:
 *   Virtual:
 *     `MR::Bases::I`
 *   Direct: (non-virtual)
 *     `MR::Bases::B`
 *     `MR::Bases::C`
 *     `MR::Bases::H`
 *   Indirect: (non-virtual)
 *     `MR::Bases::B2`
 *   Ambiguous:
 *     `MR::Bases::D`
 *     `MR::Bases::D2`
 *     `MR::Bases::D3`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_Bases_A extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_Bases_A_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_Bases_A_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_Bases_A_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_Bases_A.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_Bases_A))
            return L.MR_Bases_A.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_Bases_A.__destroy : null, args[3]);
            return;
        }
        super(L.MR_Bases_A.__ctor(args), L.MR_Bases_A.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_Bases_A_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_Bases_A(ffi.RAW, (__ret >>> 0), false, __owner);
    }
}

/**
 * Generated from class `MR::Bases::B`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::Bases::A`
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::Bases::B2`
 *     `MR::Bases::D`
 *     `MR::Bases::D2`
 *     `MR::Bases::D3`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_Bases_B extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_Bases_B_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_Bases_B_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_Bases_B_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_Bases_B.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_Bases_B))
            return L.MR_Bases_B.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_Bases_B.__destroy : null, args[3]);
            return;
        }
        super(L.MR_Bases_B.__ctor(args), L.MR_Bases_B.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_Bases_B_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_Bases_B(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    upcastToA()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_Bases_B_MutableUpcastTo_MR_Bases_A(this.rawPointer())) >>> 0);
        return new L.MR_Bases_A(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromA(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_Bases_B_MutableStaticDowncastFrom_MR_Bases_A(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_Bases_B(ffi.RAW, __ret, false, object);
    }
}

/**
 * Generated from class `MR::Bases::B2`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::Bases::B`
 *   Indirect: (non-virtual)
 *     `MR::Bases::A`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_Bases_B2 extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_Bases_B2_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_Bases_B2_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_Bases_B2_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_Bases_B2.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_Bases_B2))
            return L.MR_Bases_B2.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_Bases_B2.__destroy : null, args[3]);
            return;
        }
        super(L.MR_Bases_B2.__ctor(args), L.MR_Bases_B2.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_Bases_B2_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_Bases_B2(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    upcastToA()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_Bases_B2_MutableUpcastTo_MR_Bases_A(this.rawPointer())) >>> 0);
        return new L.MR_Bases_A(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromA(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_Bases_B2_MutableStaticDowncastFrom_MR_Bases_A(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_Bases_B2(ffi.RAW, __ret, false, object);
    }

    upcastToB()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_Bases_B2_MutableUpcastTo_MR_Bases_B(this.rawPointer())) >>> 0);
        return new L.MR_Bases_B(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromB(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_Bases_B2_MutableStaticDowncastFrom_MR_Bases_B(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_Bases_B2(ffi.RAW, __ret, false, object);
    }
}

/**
 * Generated from class `MR::Bases::C`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::Bases::A`
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::Bases::D`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_Bases_C extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_Bases_C_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_Bases_C_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_Bases_C_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_Bases_C.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_Bases_C))
            return L.MR_Bases_C.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_Bases_C.__destroy : null, args[3]);
            return;
        }
        super(L.MR_Bases_C.__ctor(args), L.MR_Bases_C.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_Bases_C_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_Bases_C(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    upcastToA()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_Bases_C_MutableUpcastTo_MR_Bases_A(this.rawPointer())) >>> 0);
        return new L.MR_Bases_A(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromA(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_Bases_C_MutableStaticDowncastFrom_MR_Bases_A(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_Bases_C(ffi.RAW, __ret, false, object);
    }
}

/**
 * Generated from class `MR::Bases::D`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::Bases::B`
 *     `MR::Bases::C`
 *   Ambiguous:
 *     `MR::Bases::A`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_Bases_D extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_Bases_D_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_Bases_D_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_Bases_D_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_Bases_D.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_Bases_D))
            return L.MR_Bases_D.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_Bases_D.__destroy : null, args[3]);
            return;
        }
        super(L.MR_Bases_D.__ctor(args), L.MR_Bases_D.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_Bases_D_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_Bases_D(ffi.RAW, (__ret >>> 0), false, __owner);
    }
}

/**
 * Generated from class `MR::Bases::D2`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::Bases::B`
 *   Ambiguous:
 *     `MR::Bases::A`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_Bases_D2 extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_Bases_D2_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_Bases_D2_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_Bases_D2_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_Bases_D2.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_Bases_D2))
            return L.MR_Bases_D2.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_Bases_D2.__destroy : null, args[3]);
            return;
        }
        super(L.MR_Bases_D2.__ctor(args), L.MR_Bases_D2.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_Bases_D2_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_Bases_D2(ffi.RAW, (__ret >>> 0), false, __owner);
    }
}

/**
 * Generated from class `MR::Bases::D3`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::Bases::B`
 *   Ambiguous:
 *     `MR::Bases::A`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_Bases_D3 extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_Bases_D3_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_Bases_D3_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_Bases_D3_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_Bases_D3.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_Bases_D3))
            return L.MR_Bases_D3.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_Bases_D3.__destroy : null, args[3]);
            return;
        }
        super(L.MR_Bases_D3.__ctor(args), L.MR_Bases_D3.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_Bases_D3_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_Bases_D3(ffi.RAW, (__ret >>> 0), false, __owner);
    }
}

/**
 * Generated from class `MR::Bases::E`.
 * Derived classes:
 *   Non-virtual along a virtual path:
 *     `MR::Bases::G`
 *     `MR::Bases::H`
 *     `MR::Bases::I`
 *   Direct: (non-virtual)
 *     `MR::Bases::F`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_Bases_E extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_Bases_E_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_Bases_E_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_Bases_E_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_Bases_E.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_Bases_E))
            return L.MR_Bases_E.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_Bases_E.__destroy : null, args[3]);
            return;
        }
        super(L.MR_Bases_E.__ctor(args), L.MR_Bases_E.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_Bases_E_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_Bases_E(ffi.RAW, (__ret >>> 0), false, __owner);
    }
}

/**
 * Generated from class `MR::Bases::F`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::Bases::E`
 * Derived classes:
 *   Virtual:
 *     `MR::Bases::G`
 *     `MR::Bases::H`
 *     `MR::Bases::I`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_Bases_F extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_Bases_F_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_Bases_F_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_Bases_F_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_Bases_F.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_Bases_F))
            return L.MR_Bases_F.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_Bases_F.__destroy : null, args[3]);
            return;
        }
        super(L.MR_Bases_F.__ctor(args), L.MR_Bases_F.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_Bases_F_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_Bases_F(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    upcastToE()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_Bases_F_MutableUpcastTo_MR_Bases_E(this.rawPointer())) >>> 0);
        return new L.MR_Bases_E(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromE(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_Bases_F_MutableStaticDowncastFrom_MR_Bases_E(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_Bases_F(ffi.RAW, __ret, false, object);
    }
}

/**
 * Generated from class `MR::Bases::G`.
 * Base classes:
 *   Virtual:
 *     `MR::Bases::F`
 *   Non-virtual along a virtual path:
 *     `MR::Bases::E`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_Bases_G extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_Bases_G_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_Bases_G_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_Bases_G_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_Bases_G.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_Bases_G))
            return L.MR_Bases_G.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_Bases_G.__destroy : null, args[3]);
            return;
        }
        super(L.MR_Bases_G.__ctor(args), L.MR_Bases_G.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_Bases_G_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_Bases_G(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    upcastToE()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_Bases_G_MutableUpcastTo_MR_Bases_E(this.rawPointer())) >>> 0);
        return new L.MR_Bases_E(ffi.RAW, __ret, false, this);
    }

    upcastToF()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_Bases_G_MutableUpcastTo_MR_Bases_F(this.rawPointer())) >>> 0);
        return new L.MR_Bases_F(ffi.RAW, __ret, false, this);
    }
}

/**
 * Generated from class `MR::Bases::H`.
 * Base classes:
 *   Virtual:
 *     `MR::Bases::F`
 *   Non-virtual along a virtual path:
 *     `MR::Bases::E`
 *   Direct: (non-virtual)
 *     `MR::Bases::A`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_Bases_H extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_Bases_H_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_Bases_H_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_Bases_H_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_Bases_H.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_Bases_H))
            return L.MR_Bases_H.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_Bases_H.__destroy : null, args[3]);
            return;
        }
        super(L.MR_Bases_H.__ctor(args), L.MR_Bases_H.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_Bases_H_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_Bases_H(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    upcastToE()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_Bases_H_MutableUpcastTo_MR_Bases_E(this.rawPointer())) >>> 0);
        return new L.MR_Bases_E(ffi.RAW, __ret, false, this);
    }

    upcastToF()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_Bases_H_MutableUpcastTo_MR_Bases_F(this.rawPointer())) >>> 0);
        return new L.MR_Bases_F(ffi.RAW, __ret, false, this);
    }

    upcastToA()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_Bases_H_MutableUpcastTo_MR_Bases_A(this.rawPointer())) >>> 0);
        return new L.MR_Bases_A(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromA(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_Bases_H_MutableStaticDowncastFrom_MR_Bases_A(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_Bases_H(ffi.RAW, __ret, false, object);
    }
}

/**
 * Generated from class `MR::Bases::I`.
 * Base classes:
 *   Virtual:
 *     `MR::Bases::F`
 *     `MR::Bases::A`
 *   Non-virtual along a virtual path:
 *     `MR::Bases::E`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_Bases_I extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_Bases_I_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_Bases_I_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_Bases_I_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_Bases_I.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_Bases_I))
            return L.MR_Bases_I.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_Bases_I.__destroy : null, args[3]);
            return;
        }
        super(L.MR_Bases_I.__ctor(args), L.MR_Bases_I.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_Bases_I_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_Bases_I(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    upcastToE()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_Bases_I_MutableUpcastTo_MR_Bases_E(this.rawPointer())) >>> 0);
        return new L.MR_Bases_E(ffi.RAW, __ret, false, this);
    }

    upcastToF()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_Bases_I_MutableUpcastTo_MR_Bases_F(this.rawPointer())) >>> 0);
        return new L.MR_Bases_F(ffi.RAW, __ret, false, this);
    }

    upcastToA()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_Bases_I_MutableUpcastTo_MR_Bases_A(this.rawPointer())) >>> 0);
        return new L.MR_Bases_A(ffi.RAW, __ret, false, this);
    }
}

