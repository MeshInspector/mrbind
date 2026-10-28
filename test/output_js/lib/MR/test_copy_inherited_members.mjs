// The wrappers of the C bindings file `MR/test_copy_inherited_members`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::CopyInheritedMembers::A`.
 * Derived classes:
 *   Virtual:
 *     `MR::CopyInheritedMembers::G`
 *     `MR::CopyInheritedMembers::H`
 *     `MR::CopyInheritedMembers::I`
 *   Non-virtual along a virtual path:
 *     `MR::CopyInheritedMembers::M`
 *     `MR::CopyInheritedMembers::N`
 *     `MR::CopyInheritedMembers::O`
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::C`
 *     `MR::CopyInheritedMembers::E`
 *     `MR::CopyInheritedMembers::F`
 *     `MR::CopyInheritedMembers::J`
 *   Ambiguous:
 *     `MR::CopyInheritedMembers::K`
 *     `MR::CopyInheritedMembers::L`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CopyInheritedMembers_A extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CopyInheritedMembers_A_Destroy(ptr);}

    static get StaticField()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_A_Get_StaticField();
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    static set StaticField(value)
    {
        ffi.C.MR_CopyInheritedMembers_A_Set_StaticField(value);
        ffi.check();
    }

    get Field()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_A_Get_Field(this.rawPointer());
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    set Field(value)
    {
        ffi.C.MR_CopyInheritedMembers_A_Set_Field(this.rawPointer(), value);
        ffi.check();
    }

    static __ctor_0()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_A_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(Field)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_A_ConstructFrom(Field);
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_2(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_A_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_CopyInheritedMembers_A.__ctor_0();
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_CopyInheritedMembers_A.__ctor_1(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_CopyInheritedMembers_A))
            return L.MR_CopyInheritedMembers_A.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CopyInheritedMembers_A.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CopyInheritedMembers_A.__ctor(args), L.MR_CopyInheritedMembers_A.__destroy, null);
    }

    static StaticFunc()
    {
        ffi.C.MR_CopyInheritedMembers_A_StaticFunc();
        ffi.check();
    }

    convertTo_int()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_A_ConvertTo_int(this.rawPointer());
        ffi.check();
        return __ret;
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_A_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_CopyInheritedMembers_A(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    Method()
    {
        ffi.C.MR_CopyInheritedMembers_A_Method(this.rawPointer());
        ffi.check();
    }
}

/**
 * Generated from class `MR::CopyInheritedMembers::B`.
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::C`
 *     `MR::CopyInheritedMembers::D`
 *   Indirect: (non-virtual)
 *     `MR::CopyInheritedMembers::E`
 *     `MR::CopyInheritedMembers::F`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CopyInheritedMembers_B extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CopyInheritedMembers_B_Destroy(ptr);}

    static get StaticField()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_B_Get_StaticField();
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    static set StaticField(value)
    {
        ffi.C.MR_CopyInheritedMembers_B_Set_StaticField(value);
        ffi.check();
    }

    get Field()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_B_Get_Field(this.rawPointer());
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    set Field(value)
    {
        ffi.C.MR_CopyInheritedMembers_B_Set_Field(this.rawPointer(), value);
        ffi.check();
    }

    static __ctor_0()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_B_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(Field)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_B_ConstructFrom(Field);
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_2(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_B_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_CopyInheritedMembers_B.__ctor_0();
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_CopyInheritedMembers_B.__ctor_1(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_CopyInheritedMembers_B))
            return L.MR_CopyInheritedMembers_B.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CopyInheritedMembers_B.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CopyInheritedMembers_B.__ctor(args), L.MR_CopyInheritedMembers_B.__destroy, null);
    }

    static StaticFunc()
    {
        ffi.C.MR_CopyInheritedMembers_B_StaticFunc();
        ffi.check();
    }

    convertTo_int()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_B_ConvertTo_int(this.rawPointer());
        ffi.check();
        return __ret;
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_B_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_CopyInheritedMembers_B(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    Method()
    {
        ffi.C.MR_CopyInheritedMembers_B_Method(this.rawPointer());
        ffi.check();
    }
}

/**
 * Generated from class `MR::CopyInheritedMembers::C`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::A`
 *     `MR::CopyInheritedMembers::B`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CopyInheritedMembers_C extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CopyInheritedMembers_C_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_C_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_C_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_CopyInheritedMembers_C.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CopyInheritedMembers_C))
            return L.MR_CopyInheritedMembers_C.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CopyInheritedMembers_C.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CopyInheritedMembers_C.__ctor(args), L.MR_CopyInheritedMembers_C.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_C_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_CopyInheritedMembers_C(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    upcastToA()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_C_MutableUpcastTo_MR_CopyInheritedMembers_A(this.rawPointer())) >>> 0);
        return new L.MR_CopyInheritedMembers_A(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromA(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_C_MutableStaticDowncastFrom_MR_CopyInheritedMembers_A(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_CopyInheritedMembers_C(ffi.RAW, __ret, false, object);
    }

    upcastToB()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_C_MutableUpcastTo_MR_CopyInheritedMembers_B(this.rawPointer())) >>> 0);
        return new L.MR_CopyInheritedMembers_B(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromB(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_C_MutableStaticDowncastFrom_MR_CopyInheritedMembers_B(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_CopyInheritedMembers_C(ffi.RAW, __ret, false, object);
    }
}

/**
 * Generated from class `MR::CopyInheritedMembers::D`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::B`
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::E`
 *     `MR::CopyInheritedMembers::F`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CopyInheritedMembers_D extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CopyInheritedMembers_D_Destroy(ptr);}

    static get StaticField()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_D_Get_StaticField();
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    static set StaticField(value)
    {
        ffi.C.MR_CopyInheritedMembers_D_Set_StaticField(value);
        ffi.check();
    }

    get Field()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_D_Get_Field(this.rawPointer());
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    set Field(value)
    {
        ffi.C.MR_CopyInheritedMembers_D_Set_Field(this.rawPointer(), value);
        ffi.check();
    }

    static __ctor_0()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_D_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_D_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_CopyInheritedMembers_D.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CopyInheritedMembers_D))
            return L.MR_CopyInheritedMembers_D.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CopyInheritedMembers_D.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CopyInheritedMembers_D.__ctor(args), L.MR_CopyInheritedMembers_D.__destroy, null);
    }

    static StaticFunc()
    {
        ffi.C.MR_CopyInheritedMembers_D_StaticFunc();
        ffi.check();
    }

    convertTo_int()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_D_ConvertTo_int(this.rawPointer());
        ffi.check();
        return __ret;
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_D_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_CopyInheritedMembers_D(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    Method()
    {
        ffi.C.MR_CopyInheritedMembers_D_Method(this.rawPointer());
        ffi.check();
    }

    upcastToB()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_D_MutableUpcastTo_MR_CopyInheritedMembers_B(this.rawPointer())) >>> 0);
        return new L.MR_CopyInheritedMembers_B(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromB(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_D_MutableStaticDowncastFrom_MR_CopyInheritedMembers_B(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_CopyInheritedMembers_D(ffi.RAW, __ret, false, object);
    }
}

/**
 * Generated from class `MR::CopyInheritedMembers::E`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::A`
 *     `MR::CopyInheritedMembers::D`
 *   Indirect: (non-virtual)
 *     `MR::CopyInheritedMembers::B`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CopyInheritedMembers_E extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CopyInheritedMembers_E_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_E_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_E_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_CopyInheritedMembers_E.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CopyInheritedMembers_E))
            return L.MR_CopyInheritedMembers_E.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CopyInheritedMembers_E.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CopyInheritedMembers_E.__ctor(args), L.MR_CopyInheritedMembers_E.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_E_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_CopyInheritedMembers_E(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    upcastToA()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_E_MutableUpcastTo_MR_CopyInheritedMembers_A(this.rawPointer())) >>> 0);
        return new L.MR_CopyInheritedMembers_A(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromA(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_E_MutableStaticDowncastFrom_MR_CopyInheritedMembers_A(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_CopyInheritedMembers_E(ffi.RAW, __ret, false, object);
    }

    upcastToB()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_E_MutableUpcastTo_MR_CopyInheritedMembers_B(this.rawPointer())) >>> 0);
        return new L.MR_CopyInheritedMembers_B(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromB(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_E_MutableStaticDowncastFrom_MR_CopyInheritedMembers_B(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_CopyInheritedMembers_E(ffi.RAW, __ret, false, object);
    }

    upcastToD()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_E_MutableUpcastTo_MR_CopyInheritedMembers_D(this.rawPointer())) >>> 0);
        return new L.MR_CopyInheritedMembers_D(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromD(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_E_MutableStaticDowncastFrom_MR_CopyInheritedMembers_D(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_CopyInheritedMembers_E(ffi.RAW, __ret, false, object);
    }
}

/**
 * Generated from class `MR::CopyInheritedMembers::F`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::D`
 *     `MR::CopyInheritedMembers::A`
 *   Indirect: (non-virtual)
 *     `MR::CopyInheritedMembers::B`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CopyInheritedMembers_F extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CopyInheritedMembers_F_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_F_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_F_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_CopyInheritedMembers_F.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CopyInheritedMembers_F))
            return L.MR_CopyInheritedMembers_F.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CopyInheritedMembers_F.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CopyInheritedMembers_F.__ctor(args), L.MR_CopyInheritedMembers_F.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_F_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_CopyInheritedMembers_F(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    upcastToB()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_F_MutableUpcastTo_MR_CopyInheritedMembers_B(this.rawPointer())) >>> 0);
        return new L.MR_CopyInheritedMembers_B(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromB(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_F_MutableStaticDowncastFrom_MR_CopyInheritedMembers_B(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_CopyInheritedMembers_F(ffi.RAW, __ret, false, object);
    }

    upcastToD()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_F_MutableUpcastTo_MR_CopyInheritedMembers_D(this.rawPointer())) >>> 0);
        return new L.MR_CopyInheritedMembers_D(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromD(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_F_MutableStaticDowncastFrom_MR_CopyInheritedMembers_D(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_CopyInheritedMembers_F(ffi.RAW, __ret, false, object);
    }

    upcastToA()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_F_MutableUpcastTo_MR_CopyInheritedMembers_A(this.rawPointer())) >>> 0);
        return new L.MR_CopyInheritedMembers_A(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromA(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_F_MutableStaticDowncastFrom_MR_CopyInheritedMembers_A(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_CopyInheritedMembers_F(ffi.RAW, __ret, false, object);
    }
}

/**
 * Generated from class `MR::CopyInheritedMembers::G`.
 * Base classes:
 *   Virtual:
 *     `MR::CopyInheritedMembers::A`
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::H`
 *     `MR::CopyInheritedMembers::I`
 *     `MR::CopyInheritedMembers::K`
 *     `MR::CopyInheritedMembers::L`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CopyInheritedMembers_G extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CopyInheritedMembers_G_Destroy(ptr);}

    static get StaticField()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_G_Get_StaticField();
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    static set StaticField(value)
    {
        ffi.C.MR_CopyInheritedMembers_G_Set_StaticField(value);
        ffi.check();
    }

    get Field()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_G_Get_Field(this.rawPointer());
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    set Field(value)
    {
        ffi.C.MR_CopyInheritedMembers_G_Set_Field(this.rawPointer(), value);
        ffi.check();
    }

    static __ctor_0()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_G_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_G_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_CopyInheritedMembers_G.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CopyInheritedMembers_G))
            return L.MR_CopyInheritedMembers_G.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CopyInheritedMembers_G.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CopyInheritedMembers_G.__ctor(args), L.MR_CopyInheritedMembers_G.__destroy, null);
    }

    static StaticFunc()
    {
        ffi.C.MR_CopyInheritedMembers_G_StaticFunc();
        ffi.check();
    }

    convertTo_int()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_G_ConvertTo_int(this.rawPointer());
        ffi.check();
        return __ret;
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_G_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_CopyInheritedMembers_G(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    Method()
    {
        ffi.C.MR_CopyInheritedMembers_G_Method(this.rawPointer());
        ffi.check();
    }

    upcastToA()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_G_MutableUpcastTo_MR_CopyInheritedMembers_A(this.rawPointer())) >>> 0);
        return new L.MR_CopyInheritedMembers_A(ffi.RAW, __ret, false, this);
    }
}

/**
 * Generated from class `MR::CopyInheritedMembers::H`.
 * Base classes:
 *   Virtual:
 *     `MR::CopyInheritedMembers::A`
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::G`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CopyInheritedMembers_H extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CopyInheritedMembers_H_Destroy(ptr);}

    static get StaticField()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_H_Get_StaticField();
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    static set StaticField(value)
    {
        ffi.C.MR_CopyInheritedMembers_H_Set_StaticField(value);
        ffi.check();
    }

    get Field()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_H_Get_Field(this.rawPointer());
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    set Field(value)
    {
        ffi.C.MR_CopyInheritedMembers_H_Set_Field(this.rawPointer(), value);
        ffi.check();
    }

    static __ctor_0()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_H_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_H_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_CopyInheritedMembers_H.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CopyInheritedMembers_H))
            return L.MR_CopyInheritedMembers_H.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CopyInheritedMembers_H.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CopyInheritedMembers_H.__ctor(args), L.MR_CopyInheritedMembers_H.__destroy, null);
    }

    static StaticFunc()
    {
        ffi.C.MR_CopyInheritedMembers_H_StaticFunc();
        ffi.check();
    }

    convertTo_int()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_H_ConvertTo_int(this.rawPointer());
        ffi.check();
        return __ret;
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_H_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_CopyInheritedMembers_H(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    Method()
    {
        ffi.C.MR_CopyInheritedMembers_H_Method(this.rawPointer());
        ffi.check();
    }

    upcastToA()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_H_MutableUpcastTo_MR_CopyInheritedMembers_A(this.rawPointer())) >>> 0);
        return new L.MR_CopyInheritedMembers_A(ffi.RAW, __ret, false, this);
    }

    upcastToG()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_H_MutableUpcastTo_MR_CopyInheritedMembers_G(this.rawPointer())) >>> 0);
        return new L.MR_CopyInheritedMembers_G(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromG(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_H_MutableStaticDowncastFrom_MR_CopyInheritedMembers_G(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_CopyInheritedMembers_H(ffi.RAW, __ret, false, object);
    }
}

/**
 * Generated from class `MR::CopyInheritedMembers::I`.
 * Base classes:
 *   Virtual:
 *     `MR::CopyInheritedMembers::A`
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::G`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CopyInheritedMembers_I extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CopyInheritedMembers_I_Destroy(ptr);}

    static get StaticField()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_I_Get_StaticField();
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    static set StaticField(value)
    {
        ffi.C.MR_CopyInheritedMembers_I_Set_StaticField(value);
        ffi.check();
    }

    get Field()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_I_Get_Field(this.rawPointer());
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    set Field(value)
    {
        ffi.C.MR_CopyInheritedMembers_I_Set_Field(this.rawPointer(), value);
        ffi.check();
    }

    static __ctor_0()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_I_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_I_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_CopyInheritedMembers_I.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CopyInheritedMembers_I))
            return L.MR_CopyInheritedMembers_I.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CopyInheritedMembers_I.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CopyInheritedMembers_I.__ctor(args), L.MR_CopyInheritedMembers_I.__destroy, null);
    }

    static StaticFunc()
    {
        ffi.C.MR_CopyInheritedMembers_I_StaticFunc();
        ffi.check();
    }

    convertTo_int()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_I_ConvertTo_int(this.rawPointer());
        ffi.check();
        return __ret;
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_I_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_CopyInheritedMembers_I(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    Method()
    {
        ffi.C.MR_CopyInheritedMembers_I_Method(this.rawPointer());
        ffi.check();
    }

    upcastToA()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_I_MutableUpcastTo_MR_CopyInheritedMembers_A(this.rawPointer())) >>> 0);
        return new L.MR_CopyInheritedMembers_A(ffi.RAW, __ret, false, this);
    }

    upcastToG()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_I_MutableUpcastTo_MR_CopyInheritedMembers_G(this.rawPointer())) >>> 0);
        return new L.MR_CopyInheritedMembers_G(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromG(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_I_MutableStaticDowncastFrom_MR_CopyInheritedMembers_G(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_CopyInheritedMembers_I(ffi.RAW, __ret, false, object);
    }
}

/**
 * Generated from class `MR::CopyInheritedMembers::J`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::A`
 * Derived classes:
 *   Virtual:
 *     `MR::CopyInheritedMembers::M`
 *     `MR::CopyInheritedMembers::N`
 *     `MR::CopyInheritedMembers::O`
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::K`
 *     `MR::CopyInheritedMembers::L`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CopyInheritedMembers_J extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CopyInheritedMembers_J_Destroy(ptr);}

    static get StaticField()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_J_Get_StaticField();
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    static set StaticField(value)
    {
        ffi.C.MR_CopyInheritedMembers_J_Set_StaticField(value);
        ffi.check();
    }

    get Field()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_J_Get_Field(this.rawPointer());
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    set Field(value)
    {
        ffi.C.MR_CopyInheritedMembers_J_Set_Field(this.rawPointer(), value);
        ffi.check();
    }

    static __ctor_0()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_J_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_J_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_CopyInheritedMembers_J.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CopyInheritedMembers_J))
            return L.MR_CopyInheritedMembers_J.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CopyInheritedMembers_J.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CopyInheritedMembers_J.__ctor(args), L.MR_CopyInheritedMembers_J.__destroy, null);
    }

    static StaticFunc()
    {
        ffi.C.MR_CopyInheritedMembers_J_StaticFunc();
        ffi.check();
    }

    convertTo_int()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_J_ConvertTo_int(this.rawPointer());
        ffi.check();
        return __ret;
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_J_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_CopyInheritedMembers_J(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    Method()
    {
        ffi.C.MR_CopyInheritedMembers_J_Method(this.rawPointer());
        ffi.check();
    }

    upcastToA()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_J_MutableUpcastTo_MR_CopyInheritedMembers_A(this.rawPointer())) >>> 0);
        return new L.MR_CopyInheritedMembers_A(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromA(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_J_MutableStaticDowncastFrom_MR_CopyInheritedMembers_A(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_CopyInheritedMembers_J(ffi.RAW, __ret, false, object);
    }
}

/**
 * Generated from class `MR::CopyInheritedMembers::K`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::G`
 *     `MR::CopyInheritedMembers::J`
 *   Ambiguous:
 *     `MR::CopyInheritedMembers::A`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CopyInheritedMembers_K extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CopyInheritedMembers_K_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_K_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_K_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_CopyInheritedMembers_K.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CopyInheritedMembers_K))
            return L.MR_CopyInheritedMembers_K.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CopyInheritedMembers_K.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CopyInheritedMembers_K.__ctor(args), L.MR_CopyInheritedMembers_K.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_K_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_CopyInheritedMembers_K(ffi.RAW, (__ret >>> 0), false, __owner);
    }
}

/**
 * Generated from class `MR::CopyInheritedMembers::L`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::J`
 *     `MR::CopyInheritedMembers::G`
 *   Ambiguous:
 *     `MR::CopyInheritedMembers::A`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CopyInheritedMembers_L extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CopyInheritedMembers_L_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_L_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_L_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_CopyInheritedMembers_L.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CopyInheritedMembers_L))
            return L.MR_CopyInheritedMembers_L.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CopyInheritedMembers_L.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CopyInheritedMembers_L.__ctor(args), L.MR_CopyInheritedMembers_L.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_L_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_CopyInheritedMembers_L(ffi.RAW, (__ret >>> 0), false, __owner);
    }
}

/**
 * Now test that a non-virtual base of a virtual base gets treated as a virtual.
 * Generated from class `MR::CopyInheritedMembers::M`.
 * Base classes:
 *   Virtual:
 *     `MR::CopyInheritedMembers::J`
 *   Non-virtual along a virtual path:
 *     `MR::CopyInheritedMembers::A`
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::N`
 *   Indirect: (non-virtual)
 *     `MR::CopyInheritedMembers::O`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CopyInheritedMembers_M extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CopyInheritedMembers_M_Destroy(ptr);}

    static get StaticField()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_M_Get_StaticField();
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    static set StaticField(value)
    {
        ffi.C.MR_CopyInheritedMembers_M_Set_StaticField(value);
        ffi.check();
    }

    get Field()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_M_Get_Field(this.rawPointer());
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    set Field(value)
    {
        ffi.C.MR_CopyInheritedMembers_M_Set_Field(this.rawPointer(), value);
        ffi.check();
    }

    static __ctor_0()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_M_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_M_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_CopyInheritedMembers_M.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CopyInheritedMembers_M))
            return L.MR_CopyInheritedMembers_M.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CopyInheritedMembers_M.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CopyInheritedMembers_M.__ctor(args), L.MR_CopyInheritedMembers_M.__destroy, null);
    }

    static StaticFunc()
    {
        ffi.C.MR_CopyInheritedMembers_M_StaticFunc();
        ffi.check();
    }

    convertTo_int()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_M_ConvertTo_int(this.rawPointer());
        ffi.check();
        return __ret;
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_M_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_CopyInheritedMembers_M(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    Method()
    {
        ffi.C.MR_CopyInheritedMembers_M_Method(this.rawPointer());
        ffi.check();
    }

    upcastToA()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_M_MutableUpcastTo_MR_CopyInheritedMembers_A(this.rawPointer())) >>> 0);
        return new L.MR_CopyInheritedMembers_A(ffi.RAW, __ret, false, this);
    }

    upcastToJ()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_M_MutableUpcastTo_MR_CopyInheritedMembers_J(this.rawPointer())) >>> 0);
        return new L.MR_CopyInheritedMembers_J(ffi.RAW, __ret, false, this);
    }
}

/**
 * Generated from class `MR::CopyInheritedMembers::N`.
 * Base classes:
 *   Virtual:
 *     `MR::CopyInheritedMembers::J`
 *   Non-virtual along a virtual path:
 *     `MR::CopyInheritedMembers::A`
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::M`
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::O`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CopyInheritedMembers_N extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CopyInheritedMembers_N_Destroy(ptr);}

    static get StaticField()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_N_Get_StaticField();
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    static set StaticField(value)
    {
        ffi.C.MR_CopyInheritedMembers_N_Set_StaticField(value);
        ffi.check();
    }

    get Field()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_N_Get_Field(this.rawPointer());
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    set Field(value)
    {
        ffi.C.MR_CopyInheritedMembers_N_Set_Field(this.rawPointer(), value);
        ffi.check();
    }

    static __ctor_0()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_N_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_N_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_CopyInheritedMembers_N.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CopyInheritedMembers_N))
            return L.MR_CopyInheritedMembers_N.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CopyInheritedMembers_N.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CopyInheritedMembers_N.__ctor(args), L.MR_CopyInheritedMembers_N.__destroy, null);
    }

    static StaticFunc()
    {
        ffi.C.MR_CopyInheritedMembers_N_StaticFunc();
        ffi.check();
    }

    convertTo_int()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_N_ConvertTo_int(this.rawPointer());
        ffi.check();
        return __ret;
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_N_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_CopyInheritedMembers_N(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    Method()
    {
        ffi.C.MR_CopyInheritedMembers_N_Method(this.rawPointer());
        ffi.check();
    }

    upcastToA()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_N_MutableUpcastTo_MR_CopyInheritedMembers_A(this.rawPointer())) >>> 0);
        return new L.MR_CopyInheritedMembers_A(ffi.RAW, __ret, false, this);
    }

    upcastToJ()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_N_MutableUpcastTo_MR_CopyInheritedMembers_J(this.rawPointer())) >>> 0);
        return new L.MR_CopyInheritedMembers_J(ffi.RAW, __ret, false, this);
    }

    upcastToM()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_N_MutableUpcastTo_MR_CopyInheritedMembers_M(this.rawPointer())) >>> 0);
        return new L.MR_CopyInheritedMembers_M(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromM(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_N_MutableStaticDowncastFrom_MR_CopyInheritedMembers_M(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_CopyInheritedMembers_N(ffi.RAW, __ret, false, object);
    }
}

/**
 * Generated from class `MR::CopyInheritedMembers::O`.
 * Base classes:
 *   Virtual:
 *     `MR::CopyInheritedMembers::J`
 *   Non-virtual along a virtual path:
 *     `MR::CopyInheritedMembers::A`
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::N`
 *   Indirect: (non-virtual)
 *     `MR::CopyInheritedMembers::M`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CopyInheritedMembers_O extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CopyInheritedMembers_O_Destroy(ptr);}

    static get StaticField()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_O_Get_StaticField();
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    static set StaticField(value)
    {
        ffi.C.MR_CopyInheritedMembers_O_Set_StaticField(value);
        ffi.check();
    }

    get Field()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_O_Get_Field(this.rawPointer());
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    set Field(value)
    {
        ffi.C.MR_CopyInheritedMembers_O_Set_Field(this.rawPointer(), value);
        ffi.check();
    }

    static __ctor_0()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_O_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_O_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_CopyInheritedMembers_O.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CopyInheritedMembers_O))
            return L.MR_CopyInheritedMembers_O.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CopyInheritedMembers_O.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CopyInheritedMembers_O.__ctor(args), L.MR_CopyInheritedMembers_O.__destroy, null);
    }

    static StaticFunc()
    {
        ffi.C.MR_CopyInheritedMembers_O_StaticFunc();
        ffi.check();
    }

    convertTo_int()
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_O_ConvertTo_int(this.rawPointer());
        ffi.check();
        return __ret;
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_CopyInheritedMembers_O_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_CopyInheritedMembers_O(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    Method()
    {
        ffi.C.MR_CopyInheritedMembers_O_Method(this.rawPointer());
        ffi.check();
    }

    upcastToA()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_O_MutableUpcastTo_MR_CopyInheritedMembers_A(this.rawPointer())) >>> 0);
        return new L.MR_CopyInheritedMembers_A(ffi.RAW, __ret, false, this);
    }

    upcastToJ()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_O_MutableUpcastTo_MR_CopyInheritedMembers_J(this.rawPointer())) >>> 0);
        return new L.MR_CopyInheritedMembers_J(ffi.RAW, __ret, false, this);
    }

    upcastToM()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_O_MutableUpcastTo_MR_CopyInheritedMembers_M(this.rawPointer())) >>> 0);
        return new L.MR_CopyInheritedMembers_M(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromM(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_O_MutableStaticDowncastFrom_MR_CopyInheritedMembers_M(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_CopyInheritedMembers_O(ffi.RAW, __ret, false, object);
    }

    upcastToN()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_O_MutableUpcastTo_MR_CopyInheritedMembers_N(this.rawPointer())) >>> 0);
        return new L.MR_CopyInheritedMembers_N(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromN(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CopyInheritedMembers_O_MutableStaticDowncastFrom_MR_CopyInheritedMembers_N(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_CopyInheritedMembers_O(ffi.RAW, __ret, false, object);
    }
}

