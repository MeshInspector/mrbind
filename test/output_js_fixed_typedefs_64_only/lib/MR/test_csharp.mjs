// The wrappers of the C bindings file `MR/test_csharp`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export const MR_CSharp_E1 = Object.freeze({
    a: 10,
    [10]: "a",
    b: 20,
    [20]: "b",
    c: 30,
    [30]: "c",
});

export const MR_CSharp_E2 = Object.freeze({
    a: 0,
    [0]: "a",
    b: 1,
    [1]: "b",
});

export const MR_CSharp_StaticOpsEnum = Object.freeze({
});

/**
 * Generated from class `MR::CSharp::A`.
 * Derived classes:
 *   Virtual:
 *     `MR::CSharp::C`
 *   Direct: (non-virtual)
 *     `MR::CSharp::B`
 *     `MR::CSharp::F`
 *     `MR::CSharp::G`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_A extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_A_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_A_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_A_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_A.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_A))
            return L.MR_CSharp_A.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_A.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_A.__ctor(args), L.MR_CSharp_A.__destroy, null);
    }

    static static_foo()
    {
        try
        {
            ffi.C.MR_CSharp_A_static_foo();
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static static_bar(_1, _2)
    {
        try
        {
            ffi.C.MR_CSharp_A_static_bar(_1, _2);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_A_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_A(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    foo()
    {
        try
        {
            ffi.C.MR_CSharp_A_foo(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    bar(_1, _2)
    {
        try
        {
            ffi.C.MR_CSharp_A_bar(this.rawPointer(), _1, _2);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    virtual_foo()
    {
        try
        {
            ffi.C.MR_CSharp_A_virtual_foo(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    virtual_bar(_1, _2)
    {
        try
        {
            ffi.C.MR_CSharp_A_virtual_bar(this.rawPointer(), _1, _2);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    refs(x, _2)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_A_refs(this.rawPointer(), x, _2);
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::AmbiguousTemplates`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_AmbiguousTemplates extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_AmbiguousTemplates_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_AmbiguousTemplates_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_AmbiguousTemplates_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_AmbiguousTemplates.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_AmbiguousTemplates))
            return L.MR_CSharp_AmbiguousTemplates.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_AmbiguousTemplates.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_AmbiguousTemplates.__ctor(args), L.MR_CSharp_AmbiguousTemplates.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_AmbiguousTemplates_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_AmbiguousTemplates(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    template_a(_1)
    {
        try
        {
            ffi.C.MR_CSharp_AmbiguousTemplates_template_a_int(this.rawPointer(), _1);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    template_a_float(_1)
    {
        try
        {
            ffi.C.MR_CSharp_AmbiguousTemplates_template_a_float(this.rawPointer(), _1);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    template_b()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_AmbiguousTemplates_template_b_int(this.rawPointer());
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    template_b_float()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_AmbiguousTemplates_template_b_float(this.rawPointer());
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    template_c()
    {
        try
        {
            ffi.C.MR_CSharp_AmbiguousTemplates_template_c_int(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    template_c_float()
    {
        try
        {
            ffi.C.MR_CSharp_AmbiguousTemplates_template_c_float(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    instantiate()
    {
        try
        {
            ffi.C.MR_CSharp_AmbiguousTemplates_instantiate(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Test various array members.
 * Generated from class `MR::CSharp::ArrayMembers`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_ArrayMembers extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_ArrayMembers_Destroy(ptr);}

    get i()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ArrayMembers_Get_i(this.rawPointer());
            ffi.check();
            return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set i(value)
    {
        try
        {
            ffi.C.MR_CSharp_ArrayMembers_Set_i(this.rawPointer(), value);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get ia()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ArrayMembers_Get_ia(this.rawPointer());
            ffi.check();
            return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get iaa()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ArrayMembers_Get_iaa(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get ci()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ArrayMembers_Get_ci(this.rawPointer());
            ffi.check();
            return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get cia()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ArrayMembers_Get_cia(this.rawPointer());
            ffi.check();
            return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get ciaa()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ArrayMembers_Get_ciaa(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get s()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ArrayMembers_Get_s(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set s(value)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __str_value = ffi.utf8(ffi.nonNullString(value, "value"));
            const __end_value = ffi.utf8End();
            ffi.C.MR_CSharp_ArrayMembers_Set_s(this.rawPointer(), __str_value, __end_value);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    get sa()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ArrayMembers_Get_sa(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get cs()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ArrayMembers_Get_cs(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get csa()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ArrayMembers_Get_csa(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ArrayMembers_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ArrayMembers_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_ArrayMembers.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_ArrayMembers))
            return L.MR_CSharp_ArrayMembers.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_ArrayMembers.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_ArrayMembers.__ctor(args), L.MR_CSharp_ArrayMembers.__destroy, null);
    }

    static iaSize()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ArrayMembers_GetSize_ia();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static iaaSize()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ArrayMembers_GetSize_iaa();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static ciaSize()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ArrayMembers_GetSize_cia();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static ciaaSize()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ArrayMembers_GetSize_ciaa();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static saSize()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ArrayMembers_GetSize_sa();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static csaSize()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ArrayMembers_GetSize_csa();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::B`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::CSharp::A`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_B extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_B_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_B_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_B_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_2(a, b)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_B_Construct(a, b);
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
        if (__n === 0)
            return L.MR_CSharp_B.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_B))
            return L.MR_CSharp_B.__ctor_1(args[0]);
        if (__n === 2 && typeof args[0] === "number" && typeof args[1] === "number")
            return L.MR_CSharp_B.__ctor_2(args[0], args[1]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_B.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_B.__ctor(args), L.MR_CSharp_B.__destroy, null);
    }

    static static_foo()
    {
        try
        {
            ffi.C.MR_CSharp_B_static_foo();
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static static_bar(_1, _2)
    {
        try
        {
            ffi.C.MR_CSharp_B_static_bar(_1, _2);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_B_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_B(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    foo()
    {
        try
        {
            ffi.C.MR_CSharp_B_foo(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    bar(_1, _2)
    {
        try
        {
            ffi.C.MR_CSharp_B_bar(this.rawPointer(), _1, _2);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    virtual_foo()
    {
        try
        {
            ffi.C.MR_CSharp_B_virtual_foo(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    virtual_bar(_1, _2)
    {
        try
        {
            ffi.C.MR_CSharp_B_virtual_bar(this.rawPointer(), _1, _2);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    refs(x, _2)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_B_refs(this.rawPointer(), x, _2);
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    upcastToA()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CSharp_B_MutableUpcastTo_MR_CSharp_A(this.rawPointer())) >>> 0);
        return new L.MR_CSharp_A(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromA(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CSharp_B_MutableStaticDowncastFrom_MR_CSharp_A(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_CSharp_B(ffi.RAW, __ret, false, object);
    }

    static dynamicDowncastFromA(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CSharp_B_MutableDynamicDowncastFrom_MR_CSharp_A(ffi.ptrNonNull(object, "object"))) >>> 0);
        return __ret === 0 ? null : new L.MR_CSharp_B(ffi.RAW, __ret, false, object);
    }
}

/**
 * Generated from class `MR::CSharp::C`.
 * Base classes:
 *   Virtual:
 *     `MR::CSharp::A`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_C extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_C_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_C_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_C_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_C.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_C))
            return L.MR_CSharp_C.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_C.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_C.__ctor(args), L.MR_CSharp_C.__destroy, null);
    }

    static static_foo()
    {
        try
        {
            ffi.C.MR_CSharp_C_static_foo();
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static static_bar(_1, _2)
    {
        try
        {
            ffi.C.MR_CSharp_C_static_bar(_1, _2);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_C_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_C(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    foo()
    {
        try
        {
            ffi.C.MR_CSharp_C_foo(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    bar(_1, _2)
    {
        try
        {
            ffi.C.MR_CSharp_C_bar(this.rawPointer(), _1, _2);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    virtual_foo()
    {
        try
        {
            ffi.C.MR_CSharp_C_virtual_foo(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    virtual_bar(_1, _2)
    {
        try
        {
            ffi.C.MR_CSharp_C_virtual_bar(this.rawPointer(), _1, _2);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    refs(x, _2)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_C_refs(this.rawPointer(), x, _2);
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    upcastToA()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CSharp_C_MutableUpcastTo_MR_CSharp_A(this.rawPointer())) >>> 0);
        return new L.MR_CSharp_A(ffi.RAW, __ret, false, this);
    }

    static dynamicDowncastFromA(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CSharp_C_MutableDynamicDowncastFrom_MR_CSharp_A(ffi.ptrNonNull(object, "object"))) >>> 0);
        return __ret === 0 ? null : new L.MR_CSharp_C(ffi.RAW, __ret, false, object);
    }
}

/**
 * Test the call operator, since it can have an unusual amount of arguments.
 * Not testing `[]` here to be able to run the tests on older C++.
 * Generated from class `MR::CSharp::CallOp`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_CallOp extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_CallOp_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_CallOp_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_CallOp_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_CallOp.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_CallOp))
            return L.MR_CSharp_CallOp.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_CallOp.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_CallOp.__ctor(args), L.MR_CSharp_CallOp.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_CallOp_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_CallOp(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    call_0()
    {
        try
        {
            ffi.C.MR_CSharp_CallOp_call_0(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    call_3(_1, _2, _3)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_CallOp_call_3(this.rawPointer(), _1, _2, _3);
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::ClassMemberPointersBool`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_ClassMemberPointersBool extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_ClassMemberPointersBool_Destroy(ptr);}

    static get sa()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersBool_Get_sa();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static set sa(value)
    {
        try
        {
            ffi.C.MR_CSharp_ClassMemberPointersBool_Set_sa(value);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static get sb()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersBool_Get_sb();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static set sb(value)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_value = value == null ? 0 : ffi.stackScalar(1, (p) => {ffi.M.HEAPU8[p] = (value ? 1 : 0) ? 1 : 0;});
            ffi.C.MR_CSharp_ClassMemberPointersBool_Set_sb(__ptr_value);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    static get sc()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersBool_Get_sc();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static get sd()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersBool_Get_sd();
            ffi.check();
            return (ffi.M.HEAPU8[(__ret >>> 0)] !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get a()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersBool_Get_a(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set a(value)
    {
        try
        {
            ffi.C.MR_CSharp_ClassMemberPointersBool_Set_a(this.rawPointer(), value);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get b()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersBool_Get_b(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set b(value)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_value = value == null ? 0 : ffi.stackScalar(1, (p) => {ffi.M.HEAPU8[p] = (value ? 1 : 0) ? 1 : 0;});
            ffi.C.MR_CSharp_ClassMemberPointersBool_Set_b(this.rawPointer(), __ptr_value);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    get c()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersBool_Get_c(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get d()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersBool_Get_d(this.rawPointer());
            ffi.check();
            return (ffi.M.HEAPU8[(__ret >>> 0)] !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_0(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersBool_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(a, b, c, d)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_b = b == null ? 0 : ffi.stackScalar(1, (p) => {ffi.M.HEAPU8[p] = (b ? 1 : 0) ? 1 : 0;});
            const __ptr_d = ffi.stackScalar(1, (p) => {ffi.M.HEAPU8[p] = (d ? 1 : 0) ? 1 : 0;});
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersBool_ConstructFrom(a, __ptr_b, c, __ptr_d);
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_ClassMemberPointersBool))
            return L.MR_CSharp_ClassMemberPointersBool.__ctor_0(args[0]);
        if (__n === 4 && typeof args[0] === "number" && (__n <= 1 || (args[1] == null || typeof args[1] === "boolean")) && typeof args[2] === "number" && typeof args[3] === "boolean")
            return L.MR_CSharp_ClassMemberPointersBool.__ctor_1(args[0], args[1], args[2], args[3]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_ClassMemberPointersBool.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_ClassMemberPointersBool.__ctor(args), L.MR_CSharp_ClassMemberPointersBool.__destroy, null);
    }
}

/**
 * Class fields of pointer types:
 * Generated from class `MR::CSharp::ClassMemberPointersClass`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_ClassMemberPointersClass extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_ClassMemberPointersClass_Destroy(ptr);}

    static get sa()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersClass_Get_sa();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static set sa(value)
    {
        try
        {
            ffi.C.MR_CSharp_ClassMemberPointersClass_Set_sa(ffi.ptr(value));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static get sb()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersClass_Get_sb();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static set sb(value)
    {
        try
        {
            ffi.C.MR_CSharp_ClassMemberPointersClass_Set_sb(ffi.ptr(value));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static get sc()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersClass_Get_sc();
            ffi.check();
            const __owner = null;
            return new L.MR_CSharp_A(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static get sd()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersClass_Get_sd();
            ffi.check();
            const __owner = null;
            return new L.MR_CSharp_A(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get a()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersClass_Get_a(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set a(value)
    {
        try
        {
            ffi.C.MR_CSharp_ClassMemberPointersClass_Set_a(this.rawPointer(), ffi.ptr(value));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get b()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersClass_Get_b(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set b(value)
    {
        try
        {
            ffi.C.MR_CSharp_ClassMemberPointersClass_Set_b(this.rawPointer(), ffi.ptr(value));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get c()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersClass_Get_c(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_A(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get d()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersClass_Get_d(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_A(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_0(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersClass_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(a, b, c, d)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersClass_ConstructFrom(ffi.ptr(a), ffi.ptr(b), ffi.ptrNonNull(c, "c"), ffi.ptrNonNull(d, "d"));
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
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_ClassMemberPointersClass))
            return L.MR_CSharp_ClassMemberPointersClass.__ctor_0(args[0]);
        if (__n === 4 && (__n <= 0 || (args[0] == null || args[0] instanceof L.MR_CSharp_A)) && (__n <= 1 || (args[1] == null || args[1] instanceof L.MR_CSharp_A)) && (args[2] instanceof L.MR_CSharp_A) && (args[3] instanceof L.MR_CSharp_A))
            return L.MR_CSharp_ClassMemberPointersClass.__ctor_1(args[0], args[1], args[2], args[3]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_ClassMemberPointersClass.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_ClassMemberPointersClass.__ctor(args), L.MR_CSharp_ClassMemberPointersClass.__destroy, null);
    }
}

/**
 * Generated from class `MR::CSharp::ClassMemberPointersExposed`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_ClassMemberPointersExposed extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_ClassMemberPointersExposed_Destroy(ptr);}

    static get sa()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersExposed_Get_sa();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static set sa(value)
    {
        try
        {
            ffi.C.MR_CSharp_ClassMemberPointersExposed_Set_sa(ffi.ptr(value));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static get sb()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersExposed_Get_sb();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static set sb(value)
    {
        try
        {
            ffi.C.MR_CSharp_ClassMemberPointersExposed_Set_sb(ffi.ptr(value));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static get sc()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersExposed_Get_sc();
            ffi.check();
            const __owner = null;
            return new L.MR_CSharp_ExposedLayout(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static get sd()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersExposed_Get_sd();
            ffi.check();
            const __owner = null;
            return new L.MR_CSharp_ExposedLayout(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get a()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersExposed_Get_a(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set a(value)
    {
        try
        {
            ffi.C.MR_CSharp_ClassMemberPointersExposed_Set_a(this.rawPointer(), ffi.ptr(value));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get b()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersExposed_Get_b(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set b(value)
    {
        try
        {
            ffi.C.MR_CSharp_ClassMemberPointersExposed_Set_b(this.rawPointer(), ffi.ptr(value));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get c()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersExposed_Get_c(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_ExposedLayout(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get d()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersExposed_Get_d(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_ExposedLayout(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_0(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersExposed_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(a, b, c, d)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersExposed_ConstructFrom(ffi.ptr(a), ffi.ptr(b), ffi.ptrNonNull(c, "c"), ffi.ptrNonNull(d, "d"));
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
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_ClassMemberPointersExposed))
            return L.MR_CSharp_ClassMemberPointersExposed.__ctor_0(args[0]);
        if (__n === 4 && (__n <= 0 || (args[0] == null || args[0] instanceof L.MR_CSharp_ExposedLayout)) && (__n <= 1 || (args[1] == null || args[1] instanceof L.MR_CSharp_ExposedLayout)) && (args[2] instanceof L.MR_CSharp_ExposedLayout) && (args[3] instanceof L.MR_CSharp_ExposedLayout))
            return L.MR_CSharp_ClassMemberPointersExposed.__ctor_1(args[0], args[1], args[2], args[3]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_ClassMemberPointersExposed.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_ClassMemberPointersExposed.__ctor(args), L.MR_CSharp_ClassMemberPointersExposed.__destroy, null);
    }
}

/**
 * Generated from class `MR::CSharp::ClassMemberPointersUshort`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_ClassMemberPointersUshort extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_ClassMemberPointersUshort_Destroy(ptr);}

    static get sa()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersUshort_Get_sa();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static set sa(value)
    {
        try
        {
            ffi.C.MR_CSharp_ClassMemberPointersUshort_Set_sa(value);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static get sb()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersUshort_Get_sb();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static set sb(value)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_value = value == null ? 0 : ffi.stackScalar(2, (p) => {ffi.M.HEAPU16[(p) >>> 1] = (value & 65535);});
            ffi.C.MR_CSharp_ClassMemberPointersUshort_Set_sb(__ptr_value);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    static get sc()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersUshort_Get_sc();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static get sd()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersUshort_Get_sd();
            ffi.check();
            return ffi.M.HEAPU16[((__ret >>> 0)) >>> 1];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get a()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersUshort_Get_a(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set a(value)
    {
        try
        {
            ffi.C.MR_CSharp_ClassMemberPointersUshort_Set_a(this.rawPointer(), value);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get b()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersUshort_Get_b(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set b(value)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_value = value == null ? 0 : ffi.stackScalar(2, (p) => {ffi.M.HEAPU16[(p) >>> 1] = (value & 65535);});
            ffi.C.MR_CSharp_ClassMemberPointersUshort_Set_b(this.rawPointer(), __ptr_value);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    get c()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersUshort_Get_c(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get d()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersUshort_Get_d(this.rawPointer());
            ffi.check();
            return ffi.M.HEAPU16[((__ret >>> 0)) >>> 1];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_0(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersUshort_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(a, b, c, d)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_b = b == null ? 0 : ffi.stackScalar(2, (p) => {ffi.M.HEAPU16[(p) >>> 1] = (b & 65535);});
            const __ptr_d = ffi.stackScalar(2, (p) => {ffi.M.HEAPU16[(p) >>> 1] = (d & 65535);});
            const __ret = ffi.C.MR_CSharp_ClassMemberPointersUshort_ConstructFrom(a, __ptr_b, c, __ptr_d);
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_ClassMemberPointersUshort))
            return L.MR_CSharp_ClassMemberPointersUshort.__ctor_0(args[0]);
        if (__n === 4 && typeof args[0] === "number" && (__n <= 1 || (args[1] == null || typeof args[1] === "number")) && typeof args[2] === "number" && typeof args[3] === "number")
            return L.MR_CSharp_ClassMemberPointersUshort.__ctor_1(args[0], args[1], args[2], args[3]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_ClassMemberPointersUshort.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_ClassMemberPointersUshort.__ctor(args), L.MR_CSharp_ClassMemberPointersUshort.__destroy, null);
    }
}

/**
 * Test that we don't produce the const and non-const overloads of the same function under the same name in C#, as that would be a compilation error in C#.
 * Generated from class `MR::CSharp::ConstNonconstConflicts`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export class MR_CSharp_ConstNonconstConflicts extends ffi.CppStruct
{
    static SIZE = 4;
    static ALIGNMENT = 4;

    get x() {return ffi.M.HEAP32[(this.rawPointer() + 0) >>> 2];}
    set x(value) {ffi.M.HEAPU32[(this.rawPointer() + 0) >>> 2] = value;}

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return ffi.zeroStruct(4);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2], args[3]);
            return;
        }
        super(L.MR_CSharp_ConstNonconstConflicts.__ctor(args), true, null);
    }

    foo(_1)
    {
        try
        {
            ffi.C.MR_CSharp_ConstNonconstConflicts_foo_mut_int(this.rawPointer(), _1);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    foo_float(_1)
    {
        try
        {
            ffi.C.MR_CSharp_ConstNonconstConflicts_foo_float(this.rawPointer(), _1);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    foo_mut_char(_1)
    {
        try
        {
            ffi.C.MR_CSharp_ConstNonconstConflicts_foo_mut_char(this.rawPointer(), ((_1 << 24) >> 24));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    foo_char(_1)
    {
        try
        {
            ffi.C.MR_CSharp_ConstNonconstConflicts_foo_char(this.rawPointer(), ((_1 << 24) >> 24));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opAdd()
    {
        try
        {
            const __ret = ffi.C.MR_C_pos_MR_CSharp_ConstNonconstConflicts_ref(this.rawPointer());
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opPos_const_ref()
    {
        try
        {
            const __ret = ffi.C.MR_C_pos_const_MR_CSharp_ConstNonconstConflicts_ref(this.rawPointer());
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opCompl()
    {
        try
        {
            ffi.C.MR_C_compl_MR_CSharp_ConstNonconstConflicts_ref(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opCompl_const_ref()
    {
        try
        {
            ffi.C.MR_C_compl_const_MR_CSharp_ConstNonconstConflicts_ref(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opDiv(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_div_MR_CSharp_ConstNonconstConflicts_ref_int(this.rawPointer(), _1);
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opDiv_const_ref_int(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_div_const_MR_CSharp_ConstNonconstConflicts_ref_int(this.rawPointer(), _1);
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Conversion constructors. Right now we only provide conversion operators for implicit ones,
 *   because I have no idea when the explicit ones could be useful.
 * Generated from class `MR::CSharp::ConvCtor`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_ConvCtor extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_ConvCtor_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvCtor_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvCtor_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_2(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvCtor_Construct_1_int(_1);
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_3(_1, _2)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvCtor_Construct_2_int(_1, _2);
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_4(_1, _2)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr__2 = _2 == null ? 0 : ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = _2;});
            const __ret = ffi.C.MR_CSharp_ConvCtor_Construct_2_short(((_1 << 16) >> 16), __ptr__2);
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_CSharp_ConvCtor.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_ConvCtor))
            return L.MR_CSharp_ConvCtor.__ctor_1(args[0]);
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_CSharp_ConvCtor.__ctor_2(args[0]);
        if (__n === 2 && typeof args[0] === "number" && typeof args[1] === "number")
            return L.MR_CSharp_ConvCtor.__ctor_3(args[0], args[1]);
        if (__n === 2 && typeof args[0] === "number" && (__n <= 1 || (args[1] == null || typeof args[1] === "number")))
            return L.MR_CSharp_ConvCtor.__ctor_4(args[0], args[1]);
        if (__n >= 1 && __n < 2 && typeof args[0] === "number" && (__n <= 1 || (args[1] == null || typeof args[1] === "number")))
            return L.MR_CSharp_ConvCtor.__ctor_4(args[0], args[1]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    static construct_1_float(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvCtor_Construct_1_float(_1);
            ffi.check();
            return new L.MR_CSharp_ConvCtor(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static construct_2_float(_1, _2)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvCtor_Construct_2_float(_1, _2);
            ffi.check();
            return new L.MR_CSharp_ConvCtor(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_ConvCtor.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_ConvCtor.__ctor(args), L.MR_CSharp_ConvCtor.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvCtor_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_ConvCtor(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * A sad class that's copyable but not movable.
 * This can often happen if you have a user-provided destructor.
 * Generated from class `MR::CSharp::ConvCtorCopyButNoMove`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_ConvCtorCopyButNoMove extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_ConvCtorCopyButNoMove_Destroy(ptr);}

    static __ctor_0(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvCtorCopyButNoMove_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvCtorCopyButNoMove_Construct(_1);
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
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_ConvCtorCopyButNoMove))
            return L.MR_CSharp_ConvCtorCopyButNoMove.__ctor_0(args[0]);
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_CSharp_ConvCtorCopyButNoMove.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_ConvCtorCopyButNoMove.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_ConvCtorCopyButNoMove.__ctor(args), L.MR_CSharp_ConvCtorCopyButNoMove.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvCtorCopyButNoMove_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_ConvCtorCopyButNoMove(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * A converting ctor in an exposed struct.
 * Generated from class `MR::CSharp::ConvCtorExposed`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export class MR_CSharp_ConvCtorExposed extends ffi.CppStruct
{
    static SIZE = 4;
    static ALIGNMENT = 4;

    get x() {return ffi.M.HEAP32[(this.rawPointer() + 0) >>> 2];}
    set x(value) {ffi.M.HEAPU32[(this.rawPointer() + 0) >>> 2] = value;}

    static __ctor_0(_1)
    {
        try
        {
            const __sret = ffi.malloc(4);
            const __ret = ffi.C.MR_CSharp_ConvCtorExposed_Construct(_1);
            ffi.check();
            ffi.M.HEAPU32[(__sret + 0) >>> 2] = __ret;
            return __sret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_CSharp_ConvCtorExposed.__ctor_0(args[0]);
        if (__n === 0)
            return ffi.zeroStruct(4);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2], args[3]);
            return;
        }
        super(L.MR_CSharp_ConvCtorExposed.__ctor(args), true, null);
    }
}

/**
 * Test how a non-trivial class with a converting constructor gets the additional conversion operators in its parameter passing helpers.
 * Generated from class `MR::CSharp::ConvCtorNonTrivial`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_ConvCtorNonTrivial extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_ConvCtorNonTrivial_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvCtorNonTrivial_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvCtorNonTrivial_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_2(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvCtorNonTrivial_Construct(_1);
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
        if (__n === 0)
            return L.MR_CSharp_ConvCtorNonTrivial.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_ConvCtorNonTrivial))
            return L.MR_CSharp_ConvCtorNonTrivial.__ctor_1(args[0]);
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_CSharp_ConvCtorNonTrivial.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_ConvCtorNonTrivial.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_ConvCtorNonTrivial.__ctor(args), L.MR_CSharp_ConvCtorNonTrivial.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvCtorNonTrivial_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_ConvCtorNonTrivial(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * A non-trivial move-only class with a converting ctor.
 * Here we test that our converting constructors injected into `_ByValue_...` don't attempt to copy the class.
 * Generated from class `MR::CSharp::ConvCtorNonTrivialRestricted`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_ConvCtorNonTrivialRestricted extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_ConvCtorNonTrivialRestricted_Destroy(ptr);}

    static __ctor_0(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvCtorNonTrivialRestricted_ConstructFromAnother(ffi.PASS_BY_MOVE_AND_DESTROY, ffi.nonNull(_other, "_other").release());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvCtorNonTrivialRestricted_Construct(_1);
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
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_ConvCtorNonTrivialRestricted))
            return L.MR_CSharp_ConvCtorNonTrivialRestricted.__ctor_0(args[0]);
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_CSharp_ConvCtorNonTrivialRestricted.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_ConvCtorNonTrivialRestricted.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_ConvCtorNonTrivialRestricted.__ctor(args), L.MR_CSharp_ConvCtorNonTrivialRestricted.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvCtorNonTrivialRestricted_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_MOVE_AND_DESTROY, ffi.nonNull(_other, "_other").release());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_ConvCtorNonTrivialRestricted(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Test how a trivial class with a converting constructor gets the additional conversion operators in its parameter passing helpers.
 * Generated from class `MR::CSharp::ConvCtorTrivial`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_ConvCtorTrivial extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_ConvCtorTrivial_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvCtorTrivial_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvCtorTrivial_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_2(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvCtorTrivial_Construct(_1);
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
        if (__n === 0)
            return L.MR_CSharp_ConvCtorTrivial.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_ConvCtorTrivial))
            return L.MR_CSharp_ConvCtorTrivial.__ctor_1(args[0]);
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_CSharp_ConvCtorTrivial.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_ConvCtorTrivial.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_ConvCtorTrivial.__ctor(args), L.MR_CSharp_ConvCtorTrivial.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvCtorTrivial_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_ConvCtorTrivial(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Test that the default argument of the parameter of a converting constructor is stripped when rewriting it as a conversion operator.
 * Generated from class `MR::CSharp::ConvCtorWithDefArg`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_ConvCtorWithDefArg extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_ConvCtorWithDefArg_Destroy(ptr);}

    static __ctor_0(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr__1 = _1 == null ? 0 : ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = _1;});
            const __ret = ffi.C.MR_CSharp_ConvCtorWithDefArg_Construct(__ptr__1);
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvCtorWithDefArg_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 1 && (__n <= 0 || (args[0] == null || typeof args[0] === "number")))
            return L.MR_CSharp_ConvCtorWithDefArg.__ctor_0(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_ConvCtorWithDefArg))
            return L.MR_CSharp_ConvCtorWithDefArg.__ctor_1(args[0]);
        if (__n >= 0 && __n < 1 && (__n <= 0 || (args[0] == null || typeof args[0] === "number")))
            return L.MR_CSharp_ConvCtorWithDefArg.__ctor_0(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_ConvCtorWithDefArg.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_ConvCtorWithDefArg.__ctor(args), L.MR_CSharp_ConvCtorWithDefArg.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvCtorWithDefArg_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_ConvCtorWithDefArg(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Conversion operators. We preserve explicit-ness.
 * Generated from class `MR::CSharp::ConvOp`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_ConvOp extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_ConvOp_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvOp_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvOp_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_ConvOp.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_ConvOp))
            return L.MR_CSharp_ConvOp.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_ConvOp.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_ConvOp.__ctor(args), L.MR_CSharp_ConvOp.__destroy, null);
    }

    convertTo_int()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvOp_ConvertTo_int(this.rawPointer());
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    convertTo_float()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvOp_ConvertTo_float(this.rawPointer());
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvOp_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_ConvOp(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Conversion operators to references.
 * Generated from class `MR::CSharp::ConvOpToRef`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_ConvOpToRef extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_ConvOpToRef_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvOpToRef_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvOpToRef_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_ConvOpToRef.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_ConvOpToRef))
            return L.MR_CSharp_ConvOpToRef.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_ConvOpToRef.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_ConvOpToRef.__ctor(args), L.MR_CSharp_ConvOpToRef.__destroy, null);
    }

    convertTo_int()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvOpToRef_ConvertTo_int(this.rawPointer());
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    convertTo_float_ref()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvOpToRef_ConvertTo_float_ref(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    convertTo_unsigned_short_ref()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvOpToRef_ConvertTo_unsigned_short_ref(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_ConvOpToRef_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_ConvOpToRef(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::D`.
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::CSharp::F`
 *     `MR::CSharp::G`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_D extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_D_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_D_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_D_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_D.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_D))
            return L.MR_CSharp_D.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_D.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_D.__ctor(args), L.MR_CSharp_D.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_D_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_D(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    d1()
    {
        try
        {
            ffi.C.MR_CSharp_D_d1(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    d2()
    {
        try
        {
            ffi.C.MR_CSharp_D_d2(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::E`.
 * Derived classes:
 *   Virtual:
 *     `MR::CSharp::G`
 *   Direct: (non-virtual)
 *     `MR::CSharp::F`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_E extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_E_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_E_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_E_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_E.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_E))
            return L.MR_CSharp_E.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_E.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_E.__ctor(args), L.MR_CSharp_E.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_E_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_E(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    e1()
    {
        try
        {
            ffi.C.MR_CSharp_E_e1(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    e2()
    {
        try
        {
            ffi.C.MR_CSharp_E_e2(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Test equality comparison.
 * Generated from class `MR::CSharp::EqualityA`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_EqualityA extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_EqualityA_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_EqualityA_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_EqualityA_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_EqualityA.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_EqualityA))
            return L.MR_CSharp_EqualityA.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_EqualityA.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_EqualityA.__ctor(args), L.MR_CSharp_EqualityA.__destroy, null);
    }

    opEqual(...args)
    {
        const __n = args.length;
        if (__n === 1 && typeof args[0] === "number")
            return this.opEqual_int(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_EqualityA))
            return this.opEqual_2(args[0]);
        throw new TypeError("No overload of `opEqual` accepts these arguments.");
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_EqualityA_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_EqualityA(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opEqual_int(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_equal_MR_CSharp_EqualityA_int(this.rawPointer(), _1);
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opNotEqual(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_not_equal_MR_CSharp_EqualityA_int(this.rawPointer(), _1);
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opEqual_2(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_equal_MR_CSharp_EqualityA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Return type isn't `bool`.
 * Generated from class `MR::CSharp::EqualityB`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_EqualityB extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_EqualityB_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_EqualityB_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_EqualityB_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_EqualityB.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_EqualityB))
            return L.MR_CSharp_EqualityB.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_EqualityB.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_EqualityB.__ctor(args), L.MR_CSharp_EqualityB.__destroy, null);
    }

    opEqual(...args)
    {
        const __n = args.length;
        if (__n === 1 && typeof args[0] === "number")
            return this.opEqual_int(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_EqualityB))
            return this.opEqual_2(args[0]);
        throw new TypeError("No overload of `opEqual` accepts these arguments.");
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_EqualityB_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_EqualityB(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opEqual_int(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_equal_MR_CSharp_EqualityB_int(this.rawPointer(), _1);
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opNotEqual(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_not_equal_MR_CSharp_EqualityB_int(this.rawPointer(), _1);
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opEqual_2(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_equal_MR_CSharp_EqualityB(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Return type is `void`.
 * Generated from class `MR::CSharp::EqualityC`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_EqualityC extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_EqualityC_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_EqualityC_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_EqualityC_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_EqualityC.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_EqualityC))
            return L.MR_CSharp_EqualityC.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_EqualityC.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_EqualityC.__ctor(args), L.MR_CSharp_EqualityC.__destroy, null);
    }

    opEqual(...args)
    {
        const __n = args.length;
        if (__n === 1 && typeof args[0] === "number")
            return this.opEqual_int(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_EqualityC))
            return this.opEqual_2(args[0]);
        throw new TypeError("No overload of `opEqual` accepts these arguments.");
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_EqualityC_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_EqualityC(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opEqual_int(_1)
    {
        try
        {
            ffi.C.MR_C_equal_MR_CSharp_EqualityC_int(this.rawPointer(), _1);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opNotEqual(_1)
    {
        try
        {
            ffi.C.MR_C_not_equal_MR_CSharp_EqualityC_int(this.rawPointer(), _1);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opEqual_2(_1)
    {
        try
        {
            ffi.C.MR_C_equal_MR_CSharp_EqualityC(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * The C# parameter type ends with `?`, and isn't a managed type.
 * Generated from class `MR::CSharp::EqualityD`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_EqualityD extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_EqualityD_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_EqualityD_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_EqualityD_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_EqualityD.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_EqualityD))
            return L.MR_CSharp_EqualityD.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_EqualityD.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_EqualityD.__ctor(args), L.MR_CSharp_EqualityD.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_EqualityD_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_EqualityD(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opEqual(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr__1 = _1 == null ? 0 : ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = _1;});
            const __ret = ffi.C.MR_C_equal_MR_CSharp_EqualityD_const_int_ptr(this.rawPointer(), __ptr__1);
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }
}

/**
 * The C# parameter type ends with `?`, and is a managed type.
 * Generated from class `MR::CSharp::EqualityE`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_EqualityE extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_EqualityE_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_EqualityE_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_EqualityE_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_EqualityE.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_EqualityE))
            return L.MR_CSharp_EqualityE.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_EqualityE.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_EqualityE.__ctor(args), L.MR_CSharp_EqualityE.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_EqualityE_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_EqualityE(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opEqual(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_equal_MR_CSharp_EqualityE_MR_CSharp_EqualityD_ptr(this.rawPointer(), ffi.ptr(_1));
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Exposed structs:
 * Generated from class `MR::CSharp::ExposedLayout`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export class MR_CSharp_ExposedLayout extends ffi.CppStruct
{
    static SIZE = 56;
    static ALIGNMENT = 8;

    get x() {return ffi.M.HEAPU16[(this.rawPointer() + 0) >>> 1];}
    set x(value) {ffi.M.HEAPU16[(this.rawPointer() + 0) >>> 1] = (value & 65535);}

    get y() {return ffi.M.HEAP32[(this.rawPointer() + 4) >>> 2];}
    set y(value) {ffi.M.HEAPU32[(this.rawPointer() + 4) >>> 2] = value;}

    get z() {return ffi.M.HEAPF64[(this.rawPointer() + 8) >>> 3];}
    set z(value) {ffi.M.HEAPF64[(this.rawPointer() + 8) >>> 3] = value;}

    getArr(i0) {return ffi.M.HEAP32[(this.rawPointer() + 16 + (i0) * 4) >>> 2];}
    setArr(i0, value) {ffi.M.HEAPU32[(this.rawPointer() + 16 + (i0) * 4) >>> 2] = value;}

    get b() {return (ffi.M.HEAPU8[this.rawPointer() + 28] !== 0);}
    set b(value) {ffi.M.HEAPU8[this.rawPointer() + 28] = (value ? 1 : 0) ? 1 : 0;}

    getBa(i0, i1) {return (ffi.M.HEAPU8[this.rawPointer() + 29 + ((i0) * 5 + i1) * 1] !== 0);}
    setBa(i0, i1, value) {ffi.M.HEAPU8[this.rawPointer() + 29 + ((i0) * 5 + i1) * 1] = (value ? 1 : 0) ? 1 : 0;}

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return ffi.zeroStruct(56);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2], args[3]);
            return;
        }
        super(L.MR_CSharp_ExposedLayout.__ctor(args), true, null);
    }

    static blah()
    {
        try
        {
            ffi.C.MR_CSharp_ExposedLayout_blah();
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opLess(...args)
    {
        const __n = args.length;
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_ExposedLayout))
            return this.opLess_2(args[0]);
        if (__n === 1 && typeof args[0] === "number")
            return this.opLess_char(args[0]);
        throw new TypeError("No overload of `opLess` accepts these arguments.");
    }

    foo()
    {
        try
        {
            ffi.C.MR_CSharp_ExposedLayout_foo(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    bar()
    {
        try
        {
            ffi.C.MR_CSharp_ExposedLayout_bar(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opIncr()
    {
        try
        {
            ffi.C.MR_C_incr_MR_CSharp_ExposedLayout(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opAdd(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_add_MR_CSharp_ExposedLayout_ref_int(this.rawPointer(), _1);
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opMul(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_mul_MR_CSharp_ExposedLayout_int(this.rawPointer(), _1);
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_ExposedLayout(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opAdd_const_ref_int(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_add_const_MR_CSharp_ExposedLayout_ref_int(this.rawPointer(), _1);
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_ExposedLayout(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opLess_2(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_less_MR_CSharp_ExposedLayout(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opEqual(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_equal_MR_CSharp_ExposedLayout_float(this.rawPointer(), _1);
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opLess_char(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_less_MR_CSharp_ExposedLayout_char(this.rawPointer(), ((_1 << 24) >> 24));
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::ExposedLayoutB`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export class MR_CSharp_ExposedLayoutB extends ffi.CppStruct
{
    static SIZE = 4;
    static ALIGNMENT = 4;

    get x() {return ffi.M.HEAP32[(this.rawPointer() + 0) >>> 2];}
    set x(value) {ffi.M.HEAPU32[(this.rawPointer() + 0) >>> 2] = value;}

    static __ctor_0(_1, _2)
    {
        try
        {
            const __sret = ffi.malloc(4);
            const __ret = ffi.C.MR_CSharp_ExposedLayoutB_Construct_2(_1, _2);
            ffi.check();
            ffi.M.HEAPU32[(__sret + 0) >>> 2] = __ret;
            return __sret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_1)
    {
        try
        {
            const __sret = ffi.malloc(4);
            const __ret = ffi.C.MR_CSharp_ExposedLayoutB_Construct_1(ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            ffi.M.HEAPU32[(__sret + 0) >>> 2] = __ret;
            return __sret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 2 && typeof args[0] === "number" && typeof args[1] === "number")
            return L.MR_CSharp_ExposedLayoutB.__ctor_0(args[0], args[1]);
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_A))
            return L.MR_CSharp_ExposedLayoutB.__ctor_1(args[0]);
        if (__n === 0)
            return ffi.zeroStruct(4);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2], args[3]);
            return;
        }
        super(L.MR_CSharp_ExposedLayoutB.__ctor(args), true, null);
    }
}

/**
 * Just a simple exposed struct to test other things.
 * Generated from class `MR::CSharp::ExposedLayoutC`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export class MR_CSharp_ExposedLayoutC extends ffi.CppStruct
{
    static SIZE = 4;
    static ALIGNMENT = 4;

    get x() {return ffi.M.HEAP32[(this.rawPointer() + 0) >>> 2];}
    set x(value) {ffi.M.HEAPU32[(this.rawPointer() + 0) >>> 2] = value;}

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return ffi.zeroStruct(4);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2], args[3]);
            return;
        }
        super(L.MR_CSharp_ExposedLayoutC.__ctor(args), true, null);
    }
}

/**
 * This one is backed by a shared pointer.
 * Generated from class `MR::CSharp::ExposedLayoutSh`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export class MR_CSharp_ExposedLayoutSh extends ffi.CppStruct
{
    static SIZE = 56;
    static ALIGNMENT = 8;

    get x() {return ffi.M.HEAPU16[(this.rawPointer() + 0) >>> 1];}
    set x(value) {ffi.M.HEAPU16[(this.rawPointer() + 0) >>> 1] = (value & 65535);}

    get y() {return ffi.M.HEAP32[(this.rawPointer() + 4) >>> 2];}
    set y(value) {ffi.M.HEAPU32[(this.rawPointer() + 4) >>> 2] = value;}

    get z() {return ffi.M.HEAPF64[(this.rawPointer() + 8) >>> 3];}
    set z(value) {ffi.M.HEAPF64[(this.rawPointer() + 8) >>> 3] = value;}

    getArr(i0) {return ffi.M.HEAP32[(this.rawPointer() + 16 + (i0) * 4) >>> 2];}
    setArr(i0, value) {ffi.M.HEAPU32[(this.rawPointer() + 16 + (i0) * 4) >>> 2] = value;}

    get b() {return (ffi.M.HEAPU8[this.rawPointer() + 28] !== 0);}
    set b(value) {ffi.M.HEAPU8[this.rawPointer() + 28] = (value ? 1 : 0) ? 1 : 0;}

    getBa(i0, i1) {return (ffi.M.HEAPU8[this.rawPointer() + 29 + ((i0) * 5 + i1) * 1] !== 0);}
    setBa(i0, i1, value) {ffi.M.HEAPU8[this.rawPointer() + 29 + ((i0) * 5 + i1) * 1] = (value ? 1 : 0) ? 1 : 0;}

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return ffi.zeroStruct(56);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2], args[3]);
            return;
        }
        super(L.MR_CSharp_ExposedLayoutSh.__ctor(args), true, null);
    }

    static blah()
    {
        try
        {
            ffi.C.MR_CSharp_ExposedLayoutSh_blah();
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opLess(...args)
    {
        const __n = args.length;
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_ExposedLayoutSh))
            return this.opLess_2(args[0]);
        if (__n === 1 && typeof args[0] === "number")
            return this.opLess_char(args[0]);
        throw new TypeError("No overload of `opLess` accepts these arguments.");
    }

    opEqual(...args)
    {
        const __n = args.length;
        if (__n === 1 && typeof args[0] === "number")
            return this.opEqual_float(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_ExposedLayout))
            return this.opEqual_MR_CSharp_ExposedLayout(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_ExposedLayoutSh))
            return this.opEqual_2(args[0]);
        throw new TypeError("No overload of `opEqual` accepts these arguments.");
    }

    foo()
    {
        try
        {
            ffi.C.MR_CSharp_ExposedLayoutSh_foo(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    bar()
    {
        try
        {
            ffi.C.MR_CSharp_ExposedLayoutSh_bar(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opIncr()
    {
        try
        {
            ffi.C.MR_C_incr_MR_CSharp_ExposedLayoutSh(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opAdd(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_add_MR_CSharp_ExposedLayoutSh_int(this.rawPointer(), _1);
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opMul(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_mul_MR_CSharp_ExposedLayoutSh_int(this.rawPointer(), _1);
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opLess_2(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_less_MR_CSharp_ExposedLayoutSh(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opEqual_float(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_equal_MR_CSharp_ExposedLayoutSh_float(this.rawPointer(), _1);
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opLess_char(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_less_MR_CSharp_ExposedLayoutSh_char(this.rawPointer(), ((_1 << 24) >> 24));
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opEqual_MR_CSharp_ExposedLayout(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_equal_MR_CSharp_ExposedLayoutSh_MR_CSharp_ExposedLayout(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opEqual_2(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_equal_MR_CSharp_ExposedLayoutSh(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::F`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::CSharp::A`
 *     `MR::CSharp::D`
 *     `MR::CSharp::E`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_F extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_F_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_F_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_F_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_F.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_F))
            return L.MR_CSharp_F.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_F.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_F.__ctor(args), L.MR_CSharp_F.__destroy, null);
    }

    static static_foo()
    {
        try
        {
            ffi.C.MR_CSharp_F_static_foo();
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static static_bar(_1, _2)
    {
        try
        {
            ffi.C.MR_CSharp_F_static_bar(_1, _2);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_F_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_F(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    foo()
    {
        try
        {
            ffi.C.MR_CSharp_F_foo(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    bar(_1, _2)
    {
        try
        {
            ffi.C.MR_CSharp_F_bar(this.rawPointer(), _1, _2);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    virtual_foo()
    {
        try
        {
            ffi.C.MR_CSharp_F_virtual_foo(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    virtual_bar(_1, _2)
    {
        try
        {
            ffi.C.MR_CSharp_F_virtual_bar(this.rawPointer(), _1, _2);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    refs(x, _2)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_F_refs(this.rawPointer(), x, _2);
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    d1()
    {
        try
        {
            ffi.C.MR_CSharp_F_d1(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    d2()
    {
        try
        {
            ffi.C.MR_CSharp_F_d2(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    e1()
    {
        try
        {
            ffi.C.MR_CSharp_F_e1(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    e2()
    {
        try
        {
            ffi.C.MR_CSharp_F_e2(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    upcastToA()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CSharp_F_MutableUpcastTo_MR_CSharp_A(this.rawPointer())) >>> 0);
        return new L.MR_CSharp_A(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromA(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CSharp_F_MutableStaticDowncastFrom_MR_CSharp_A(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_CSharp_F(ffi.RAW, __ret, false, object);
    }

    static dynamicDowncastFromA(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CSharp_F_MutableDynamicDowncastFrom_MR_CSharp_A(ffi.ptrNonNull(object, "object"))) >>> 0);
        return __ret === 0 ? null : new L.MR_CSharp_F(ffi.RAW, __ret, false, object);
    }

    upcastToD()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CSharp_F_MutableUpcastTo_MR_CSharp_D(this.rawPointer())) >>> 0);
        return new L.MR_CSharp_D(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromD(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CSharp_F_MutableStaticDowncastFrom_MR_CSharp_D(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_CSharp_F(ffi.RAW, __ret, false, object);
    }

    upcastToE()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CSharp_F_MutableUpcastTo_MR_CSharp_E(this.rawPointer())) >>> 0);
        return new L.MR_CSharp_E(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromE(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CSharp_F_MutableStaticDowncastFrom_MR_CSharp_E(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_CSharp_F(ffi.RAW, __ret, false, object);
    }
}

/**
 * Even if the secondary bases are virtual, this doesn't affect anything.
 * Generated from class `MR::CSharp::G`.
 * Base classes:
 *   Virtual:
 *     `MR::CSharp::E`
 *   Direct: (non-virtual)
 *     `MR::CSharp::A`
 *     `MR::CSharp::D`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_G extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_G_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_G_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_G_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_G.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_G))
            return L.MR_CSharp_G.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_G.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_G.__ctor(args), L.MR_CSharp_G.__destroy, null);
    }

    static static_foo()
    {
        try
        {
            ffi.C.MR_CSharp_G_static_foo();
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static static_bar(_1, _2)
    {
        try
        {
            ffi.C.MR_CSharp_G_static_bar(_1, _2);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_G_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_G(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    foo()
    {
        try
        {
            ffi.C.MR_CSharp_G_foo(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    bar(_1, _2)
    {
        try
        {
            ffi.C.MR_CSharp_G_bar(this.rawPointer(), _1, _2);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    virtual_foo()
    {
        try
        {
            ffi.C.MR_CSharp_G_virtual_foo(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    virtual_bar(_1, _2)
    {
        try
        {
            ffi.C.MR_CSharp_G_virtual_bar(this.rawPointer(), _1, _2);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    refs(x, _2)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_G_refs(this.rawPointer(), x, _2);
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    d1()
    {
        try
        {
            ffi.C.MR_CSharp_G_d1(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    d2()
    {
        try
        {
            ffi.C.MR_CSharp_G_d2(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    e1()
    {
        try
        {
            ffi.C.MR_CSharp_G_e1(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    e2()
    {
        try
        {
            ffi.C.MR_CSharp_G_e2(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    upcastToA()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CSharp_G_MutableUpcastTo_MR_CSharp_A(this.rawPointer())) >>> 0);
        return new L.MR_CSharp_A(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromA(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CSharp_G_MutableStaticDowncastFrom_MR_CSharp_A(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_CSharp_G(ffi.RAW, __ret, false, object);
    }

    static dynamicDowncastFromA(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CSharp_G_MutableDynamicDowncastFrom_MR_CSharp_A(ffi.ptrNonNull(object, "object"))) >>> 0);
        return __ret === 0 ? null : new L.MR_CSharp_G(ffi.RAW, __ret, false, object);
    }

    upcastToD()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CSharp_G_MutableUpcastTo_MR_CSharp_D(this.rawPointer())) >>> 0);
        return new L.MR_CSharp_D(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromD(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CSharp_G_MutableStaticDowncastFrom_MR_CSharp_D(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_CSharp_G(ffi.RAW, __ret, false, object);
    }

    upcastToE()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CSharp_G_MutableUpcastTo_MR_CSharp_E(this.rawPointer())) >>> 0);
        return new L.MR_CSharp_E(ffi.RAW, __ret, false, this);
    }
}

/**
 * This is the happy path.
 * This emits static operators in the const half, and non-static operators (or functions pre C# 14) in the non-const half.
 * Generated from class `MR::CSharp::IncrDecrA`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_IncrDecrA extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_IncrDecrA_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IncrDecrA_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IncrDecrA_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_IncrDecrA.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_IncrDecrA))
            return L.MR_CSharp_IncrDecrA.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_IncrDecrA.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_IncrDecrA.__ctor(args), L.MR_CSharp_IncrDecrA.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IncrDecrA_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IncrDecrA(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opIncr()
    {
        try
        {
            const __ret = ffi.C.MR_C_incr_MR_CSharp_IncrDecrA(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IncrDecrA(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opPostIncr()
    {
        try
        {
            const __ret = ffi.C.MR_C_post_incr_MR_CSharp_IncrDecrA(this.rawPointer());
            ffi.check();
            return new L.MR_CSharp_IncrDecrA(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opDecr()
    {
        try
        {
            const __ret = ffi.C.MR_C_decr_MR_CSharp_IncrDecrA(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IncrDecrA(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opPostDecr()
    {
        try
        {
            const __ret = ffi.C.MR_C_post_decr_MR_CSharp_IncrDecrA(this.rawPointer());
            ffi.check();
            return new L.MR_CSharp_IncrDecrA(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * This is a somewhat happy path. Same as above, but everything gets emitted in the const half.
 * Generated from class `MR::CSharp::IncrDecrB`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_IncrDecrB extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_IncrDecrB_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IncrDecrB_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IncrDecrB_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_IncrDecrB.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_IncrDecrB))
            return L.MR_CSharp_IncrDecrB.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_IncrDecrB.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_IncrDecrB.__ctor(args), L.MR_CSharp_IncrDecrB.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IncrDecrB_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IncrDecrB(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opIncr()
    {
        try
        {
            const __ret = ffi.C.MR_C_incr_MR_CSharp_IncrDecrB(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IncrDecrB(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opPostIncr()
    {
        try
        {
            const __ret = ffi.C.MR_C_post_incr_MR_CSharp_IncrDecrB(this.rawPointer());
            ffi.check();
            return new L.MR_CSharp_IncrDecrB(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opDecr()
    {
        try
        {
            const __ret = ffi.C.MR_C_decr_MR_CSharp_IncrDecrB(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IncrDecrB(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opPostDecr()
    {
        try
        {
            const __ret = ffi.C.MR_C_post_decr_MR_CSharp_IncrDecrB(this.rawPointer());
            ffi.check();
            return new L.MR_CSharp_IncrDecrB(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * This is a somewhat happy path. Since here the copy ctor takes a non-const reference, the static operators get added to the non-const half.
 * The non-static ones are not marked const, so they're also in the non-const half.
 * Generated from class `MR::CSharp::IncrDecrC`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_IncrDecrC extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_IncrDecrC_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IncrDecrC_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IncrDecrC_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_IncrDecrC.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_IncrDecrC))
            return L.MR_CSharp_IncrDecrC.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_IncrDecrC.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_IncrDecrC.__ctor(args), L.MR_CSharp_IncrDecrC.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IncrDecrC_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IncrDecrC(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opIncr()
    {
        try
        {
            const __ret = ffi.C.MR_C_incr_MR_CSharp_IncrDecrC(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IncrDecrC(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opPostIncr()
    {
        try
        {
            const __ret = ffi.C.MR_C_post_incr_MR_CSharp_IncrDecrC(this.rawPointer());
            ffi.check();
            return new L.MR_CSharp_IncrDecrC(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opDecr()
    {
        try
        {
            const __ret = ffi.C.MR_C_decr_MR_CSharp_IncrDecrC(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IncrDecrC(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opPostDecr()
    {
        try
        {
            const __ret = ffi.C.MR_C_post_decr_MR_CSharp_IncrDecrC(this.rawPointer());
            ffi.check();
            return new L.MR_CSharp_IncrDecrC(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * This is a somewhat happy path. Since here the copy ctor takes a non-const reference, the static operators get added to the non-const half.
 * The non-static ones are in the const half due to being marked const.
 * Generated from class `MR::CSharp::IncrDecrD`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_IncrDecrD extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_IncrDecrD_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IncrDecrD_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IncrDecrD_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_IncrDecrD.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_IncrDecrD))
            return L.MR_CSharp_IncrDecrD.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_IncrDecrD.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_IncrDecrD.__ctor(args), L.MR_CSharp_IncrDecrD.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IncrDecrD_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IncrDecrD(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opIncr()
    {
        try
        {
            const __ret = ffi.C.MR_C_incr_MR_CSharp_IncrDecrD(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IncrDecrD(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opPostIncr()
    {
        try
        {
            const __ret = ffi.C.MR_C_post_incr_MR_CSharp_IncrDecrD(this.rawPointer());
            ffi.check();
            return new L.MR_CSharp_IncrDecrD(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opDecr()
    {
        try
        {
            const __ret = ffi.C.MR_C_decr_MR_CSharp_IncrDecrD(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IncrDecrD(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opPostDecr()
    {
        try
        {
            const __ret = ffi.C.MR_C_post_decr_MR_CSharp_IncrDecrD(this.rawPointer());
            ffi.check();
            return new L.MR_CSharp_IncrDecrD(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Here we don't special-case those operators due to the class being non-copyable (and not trivially movable). They get spawned as functions as usual, in the non-const half.
 * Generated from class `MR::CSharp::IncrDecrE`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_IncrDecrE extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_IncrDecrE_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IncrDecrE_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IncrDecrE_ConstructFromAnother(ffi.PASS_BY_MOVE_AND_DESTROY, ffi.nonNull(_other, "_other").release());
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
        if (__n === 0)
            return L.MR_CSharp_IncrDecrE.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_IncrDecrE))
            return L.MR_CSharp_IncrDecrE.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_IncrDecrE.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_IncrDecrE.__ctor(args), L.MR_CSharp_IncrDecrE.__destroy, null);
    }

    opIncr()
    {
        try
        {
            const __ret = ffi.C.MR_C_incr_MR_CSharp_IncrDecrE(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IncrDecrE(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opPostIncr()
    {
        try
        {
            const __ret = ffi.C.MR_C_post_incr_MR_CSharp_IncrDecrE(this.rawPointer());
            ffi.check();
            return new L.MR_CSharp_IncrDecrE(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opDecr()
    {
        try
        {
            const __ret = ffi.C.MR_C_decr_MR_CSharp_IncrDecrE(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IncrDecrE(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opPostDecr()
    {
        try
        {
            const __ret = ffi.C.MR_C_post_decr_MR_CSharp_IncrDecrE(this.rawPointer());
            ffi.check();
            return new L.MR_CSharp_IncrDecrE(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Here we don't special-case those operators due to the class being non-copyable (and not trivially movable). They get spawned as functions as usual, in the const half.
 * Generated from class `MR::CSharp::IncrDecrF`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_IncrDecrF extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_IncrDecrF_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IncrDecrF_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IncrDecrF_ConstructFromAnother(ffi.PASS_BY_MOVE_AND_DESTROY, ffi.nonNull(_other, "_other").release());
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
        if (__n === 0)
            return L.MR_CSharp_IncrDecrF.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_IncrDecrF))
            return L.MR_CSharp_IncrDecrF.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_IncrDecrF.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_IncrDecrF.__ctor(args), L.MR_CSharp_IncrDecrF.__destroy, null);
    }

    opIncr()
    {
        try
        {
            const __ret = ffi.C.MR_C_incr_MR_CSharp_IncrDecrF(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IncrDecrF(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opPostIncr()
    {
        try
        {
            const __ret = ffi.C.MR_C_post_incr_MR_CSharp_IncrDecrF(this.rawPointer());
            ffi.check();
            return new L.MR_CSharp_IncrDecrF(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opDecr()
    {
        try
        {
            const __ret = ffi.C.MR_C_decr_MR_CSharp_IncrDecrF(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IncrDecrF(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opPostDecr()
    {
        try
        {
            const __ret = ffi.C.MR_C_post_decr_MR_CSharp_IncrDecrF(this.rawPointer());
            ffi.check();
            return new L.MR_CSharp_IncrDecrF(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * This class is non-copyable, but is trivially movable, so we treat it as if it was copyable.
 * Generated from class `MR::CSharp::IncrDecrG`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_IncrDecrG extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_IncrDecrG_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IncrDecrG_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IncrDecrG_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_IncrDecrG.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_IncrDecrG))
            return L.MR_CSharp_IncrDecrG.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_IncrDecrG.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_IncrDecrG.__ctor(args), L.MR_CSharp_IncrDecrG.__destroy, null);
    }

    opIncr()
    {
        try
        {
            const __ret = ffi.C.MR_C_incr_MR_CSharp_IncrDecrG(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IncrDecrG(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opPostIncr()
    {
        try
        {
            const __ret = ffi.C.MR_C_post_incr_MR_CSharp_IncrDecrG(this.rawPointer());
            ffi.check();
            return new L.MR_CSharp_IncrDecrG(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opDecr()
    {
        try
        {
            const __ret = ffi.C.MR_C_decr_MR_CSharp_IncrDecrG(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IncrDecrG(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opPostDecr()
    {
        try
        {
            const __ret = ffi.C.MR_C_post_decr_MR_CSharp_IncrDecrG(this.rawPointer());
            ffi.check();
            return new L.MR_CSharp_IncrDecrG(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * This class is non-copyable, but is trivially movable, so we treat it as if it was copyable.
 * Generated from class `MR::CSharp::IncrDecrH`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_IncrDecrH extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_IncrDecrH_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IncrDecrH_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IncrDecrH_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_IncrDecrH.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_IncrDecrH))
            return L.MR_CSharp_IncrDecrH.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_IncrDecrH.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_IncrDecrH.__ctor(args), L.MR_CSharp_IncrDecrH.__destroy, null);
    }

    opIncr()
    {
        try
        {
            const __ret = ffi.C.MR_C_incr_MR_CSharp_IncrDecrH(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IncrDecrH(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opPostIncr()
    {
        try
        {
            const __ret = ffi.C.MR_C_post_incr_MR_CSharp_IncrDecrH(this.rawPointer());
            ffi.check();
            return new L.MR_CSharp_IncrDecrH(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opDecr()
    {
        try
        {
            const __ret = ffi.C.MR_C_decr_MR_CSharp_IncrDecrH(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IncrDecrH(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opPostDecr()
    {
        try
        {
            const __ret = ffi.C.MR_C_post_decr_MR_CSharp_IncrDecrH(this.rawPointer());
            ffi.check();
            return new L.MR_CSharp_IncrDecrH(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Friend functions.
 * Generated from class `MR::CSharp::IncrDecrI`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_IncrDecrI extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_IncrDecrI_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IncrDecrI_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IncrDecrI_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_IncrDecrI.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_IncrDecrI))
            return L.MR_CSharp_IncrDecrI.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_IncrDecrI.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_IncrDecrI.__ctor(args), L.MR_CSharp_IncrDecrI.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IncrDecrI_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IncrDecrI(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Subscription operator.
 * Generated from class `MR::CSharp::IndexerA`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_IndexerA extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_IndexerA_Destroy(ptr);}

    get x()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IndexerA_Get_x(this.rawPointer());
            ffi.check();
            return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set x(value)
    {
        try
        {
            ffi.C.MR_CSharp_IndexerA_Set_x(this.rawPointer(), value);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IndexerA_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(x)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IndexerA_ConstructFrom(x);
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_2(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IndexerA_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_IndexerA.__ctor_0();
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_CSharp_IndexerA.__ctor_1(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_IndexerA))
            return L.MR_CSharp_IndexerA.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_IndexerA.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_IndexerA.__ctor(args), L.MR_CSharp_IndexerA.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IndexerA_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IndexerA(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    index(i)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IndexerA_index(this.rawPointer(), i);
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::IndexerB`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_IndexerB extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_IndexerB_Destroy(ptr);}

    get a()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IndexerB_Get_a(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IndexerA(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set a(value)
    {
        try
        {
            ffi.C.MR_CSharp_IndexerB_Set_a(this.rawPointer(), ffi.ptrNonNull(value, "value"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IndexerB_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(a)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IndexerB_ConstructFrom(ffi.ptrNonNull(a, "a"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_2(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IndexerB_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_IndexerB.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_IndexerA))
            return L.MR_CSharp_IndexerB.__ctor_1(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_IndexerB))
            return L.MR_CSharp_IndexerB.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_IndexerB.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_IndexerB.__ctor(args), L.MR_CSharp_IndexerB.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IndexerB_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IndexerB(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    index_1(i)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IndexerB_index_1(this.rawPointer(), i);
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IndexerA(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    index_2(i, j)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IndexerB_index_2(this.rawPointer(), i, j);
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IndexerA(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    index_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IndexerB_index_0(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IndexerA(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::IndexerC`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_IndexerC extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_IndexerC_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IndexerC_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IndexerC_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_IndexerC.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_IndexerC))
            return L.MR_CSharp_IndexerC.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_IndexerC.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_IndexerC.__ctor(args), L.MR_CSharp_IndexerC.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IndexerC_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IndexerC(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    index_mut(i)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IndexerC_index_mut(this.rawPointer(), i);
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    index(i)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IndexerC_index(this.rawPointer(), i);
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Const member functions.
 * Generated from class `MR::CSharp::IterableA`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_IterableA extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_IterableA_Destroy(ptr);}

    get arr()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableA_Get_arr(this.rawPointer());
            ffi.check();
            return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableA_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableA_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_IterableA.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_IterableA))
            return L.MR_CSharp_IterableA.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_IterableA.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_IterableA.__ctor(args), L.MR_CSharp_IterableA.__destroy, null);
    }

    static arrSize()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableA_GetSize_arr();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableA_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IterableA(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    begin()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableA_begin(this.rawPointer());
            ffi.check();
            return ((__ret >>> 0) === 0 ? null : ffi.M.HEAP32[((__ret >>> 0)) >>> 2]);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    end()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableA_end(this.rawPointer());
            ffi.check();
            return ((__ret >>> 0) === 0 ? null : ffi.M.HEAP32[((__ret >>> 0)) >>> 2]);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Mutable member functions.
 * Generated from class `MR::CSharp::IterableB`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_IterableB extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_IterableB_Destroy(ptr);}

    get arr()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableB_Get_arr(this.rawPointer());
            ffi.check();
            return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableB_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableB_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_IterableB.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_IterableB))
            return L.MR_CSharp_IterableB.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_IterableB.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_IterableB.__ctor(args), L.MR_CSharp_IterableB.__destroy, null);
    }

    static arrSize()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableB_GetSize_arr();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableB_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IterableB(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    begin()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableB_begin(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    end()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableB_end(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Both const and mutable member functions.
 * Generated from class `MR::CSharp::IterableC`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_IterableC extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_IterableC_Destroy(ptr);}

    get arr()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableC_Get_arr(this.rawPointer());
            ffi.check();
            return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableC_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableC_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_IterableC.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_IterableC))
            return L.MR_CSharp_IterableC.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_IterableC.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_IterableC.__ctor(args), L.MR_CSharp_IterableC.__destroy, null);
    }

    static arrSize()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableC_GetSize_arr();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableC_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IterableC(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    begin()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableC_begin_mut(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    end()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableC_end_mut(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    begin_2()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableC_begin(this.rawPointer());
            ffi.check();
            return ((__ret >>> 0) === 0 ? null : ffi.M.HEAP32[((__ret >>> 0)) >>> 2]);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    end_2()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableC_end(this.rawPointer());
            ffi.check();
            return ((__ret >>> 0) === 0 ? null : ffi.M.HEAP32[((__ret >>> 0)) >>> 2]);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Const free functions.
 * Generated from class `MR::CSharp::IterableD`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_IterableD extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_IterableD_Destroy(ptr);}

    get arr()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableD_Get_arr(this.rawPointer());
            ffi.check();
            return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableD_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableD_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_IterableD.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_IterableD))
            return L.MR_CSharp_IterableD.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_IterableD.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_IterableD.__ctor(args), L.MR_CSharp_IterableD.__destroy, null);
    }

    static arrSize()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableD_GetSize_arr();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableD_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IterableD(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Mutable free functions.
 * Generated from class `MR::CSharp::IterableE`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_IterableE extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_IterableE_Destroy(ptr);}

    get arr()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableE_Get_arr(this.rawPointer());
            ffi.check();
            return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableE_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableE_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_IterableE.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_IterableE))
            return L.MR_CSharp_IterableE.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_IterableE.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_IterableE.__ctor(args), L.MR_CSharp_IterableE.__destroy, null);
    }

    static arrSize()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableE_GetSize_arr();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableE_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IterableE(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Both const and mutable free functions.
 * Generated from class `MR::CSharp::IterableF`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_IterableF extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_IterableF_Destroy(ptr);}

    get arr()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableF_Get_arr(this.rawPointer());
            ffi.check();
            return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableF_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableF_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_IterableF.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_IterableF))
            return L.MR_CSharp_IterableF.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_IterableF.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_IterableF.__ctor(args), L.MR_CSharp_IterableF.__destroy, null);
    }

    static arrSize()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableF_GetSize_arr();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableF_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IterableF(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Returning mutable class instances.
 * Generated from class `MR::CSharp::IterableG`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_IterableG extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_IterableG_Destroy(ptr);}

    get arr()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableG_Get_arr(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableG_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableG_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_IterableG.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_IterableG))
            return L.MR_CSharp_IterableG.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_IterableG.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_IterableG.__ctor(args), L.MR_CSharp_IterableG.__destroy, null);
    }

    static arrSize()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableG_GetSize_arr();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableG_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IterableG(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    begin()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableG_begin(this.rawPointer());
            ffi.check();
            const __owner = this;
            return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner));
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    end()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableG_end(this.rawPointer());
            ffi.check();
            const __owner = this;
            return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner));
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Returning const class instances.
 * Generated from class `MR::CSharp::IterableH`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_IterableH extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_IterableH_Destroy(ptr);}

    get arr()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableH_Get_arr(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableH_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableH_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_IterableH.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_IterableH))
            return L.MR_CSharp_IterableH.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_IterableH.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_IterableH.__ctor(args), L.MR_CSharp_IterableH.__destroy, null);
    }

    static arrSize()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableH_GetSize_arr();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableH_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IterableH(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    begin()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableH_begin(this.rawPointer());
            ffi.check();
            const __owner = this;
            return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner));
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    end()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableH_end(this.rawPointer());
            ffi.check();
            const __owner = this;
            return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner));
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Returning mutable exposed struct instances.
 * Generated from class `MR::CSharp::IterableI`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_IterableI extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_IterableI_Destroy(ptr);}

    get arr()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableI_Get_arr(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_ExposedLayout(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableI_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableI_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_IterableI.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_IterableI))
            return L.MR_CSharp_IterableI.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_IterableI.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_IterableI.__ctor(args), L.MR_CSharp_IterableI.__destroy, null);
    }

    static arrSize()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableI_GetSize_arr();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableI_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IterableI(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    begin()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableI_begin(this.rawPointer());
            ffi.check();
            const __owner = this;
            return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_ExposedLayout(ffi.RAW, (__ret >>> 0), false, __owner));
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    end()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableI_end(this.rawPointer());
            ffi.check();
            const __owner = this;
            return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_ExposedLayout(ffi.RAW, (__ret >>> 0), false, __owner));
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Returning const exposed struct instances.
 * Generated from class `MR::CSharp::IterableJ`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_IterableJ extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_IterableJ_Destroy(ptr);}

    get arr()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableJ_Get_arr(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_ExposedLayout(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableJ_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableJ_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_IterableJ.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_IterableJ))
            return L.MR_CSharp_IterableJ.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_IterableJ.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_IterableJ.__ctor(args), L.MR_CSharp_IterableJ.__destroy, null);
    }

    static arrSize()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableJ_GetSize_arr();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableJ_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IterableJ(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    begin()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableJ_begin(this.rawPointer());
            ffi.check();
            const __owner = this;
            return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_ExposedLayout(ffi.RAW, (__ret >>> 0), false, __owner));
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    end()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableJ_end(this.rawPointer());
            ffi.check();
            const __owner = this;
            return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_ExposedLayout(ffi.RAW, (__ret >>> 0), false, __owner));
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * The sentinel having a different type.
 * Generated from class `MR::CSharp::IterableK`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_IterableK extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_IterableK_Destroy(ptr);}

    get arr()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableK_Get_arr(this.rawPointer());
            ffi.check();
            return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableK_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableK_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_IterableK.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_IterableK))
            return L.MR_CSharp_IterableK.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_IterableK.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_IterableK.__ctor(args), L.MR_CSharp_IterableK.__destroy, null);
    }

    static arrSize()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableK_GetSize_arr();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableK_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IterableK(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    begin()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableK_begin(this.rawPointer());
            ffi.check();
            return new L.MR_CSharp_IterableK_Iter(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    end()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableK_end(this.rawPointer());
            ffi.check();
            return new L.MR_CSharp_IterableK_Sentinel(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::IterableK::Iter`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_IterableK_Iter extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_IterableK_Iter_Destroy(ptr);}

    get ptr()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableK_Iter_Get_ptr(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set ptr(value)
    {
        try
        {
            ffi.C.MR_CSharp_IterableK_Iter_Set_ptr(this.rawPointer(), value);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableK_Iter_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(ptr)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableK_Iter_ConstructFrom(ptr);
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_2(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableK_Iter_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_IterableK_Iter.__ctor_0();
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_CSharp_IterableK_Iter.__ctor_1(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_IterableK_Iter))
            return L.MR_CSharp_IterableK_Iter.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_IterableK_Iter.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_IterableK_Iter.__ctor(args), L.MR_CSharp_IterableK_Iter.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableK_Iter_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IterableK_Iter(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opMul()
    {
        try
        {
            const __ret = ffi.C.MR_C_deref_MR_CSharp_IterableK_Iter(this.rawPointer());
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opIncr()
    {
        try
        {
            ffi.C.MR_C_incr_MR_CSharp_IterableK_Iter(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opEqual(s)
    {
        try
        {
            const __ret = ffi.C.MR_C_equal_MR_CSharp_IterableK_Iter_MR_CSharp_IterableK_Sentinel(this.rawPointer(), ffi.ptrNonNull(s, "s"));
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::IterableK::Sentinel`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_IterableK_Sentinel extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_IterableK_Sentinel_Destroy(ptr);}

    get ptr()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableK_Sentinel_Get_ptr(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set ptr(value)
    {
        try
        {
            ffi.C.MR_CSharp_IterableK_Sentinel_Set_ptr(this.rawPointer(), value);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableK_Sentinel_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(ptr)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableK_Sentinel_ConstructFrom(ptr);
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_2(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableK_Sentinel_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_IterableK_Sentinel.__ctor_0();
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_CSharp_IterableK_Sentinel.__ctor_1(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_IterableK_Sentinel))
            return L.MR_CSharp_IterableK_Sentinel.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_IterableK_Sentinel.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_IterableK_Sentinel.__ctor(args), L.MR_CSharp_IterableK_Sentinel.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableK_Sentinel_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IterableK_Sentinel(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Templated free functions.
 * Generated from class `MR::CSharp::IterableL<int>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_IterableL_int extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_IterableL_int_Destroy(ptr);}

    get arr()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableL_int_Get_arr(this.rawPointer());
            ffi.check();
            return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableL_int_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableL_int_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_IterableL_int.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_IterableL_int))
            return L.MR_CSharp_IterableL_int.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_IterableL_int.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_IterableL_int.__ctor(args), L.MR_CSharp_IterableL_int.__destroy, null);
    }

    static arrSize()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableL_int_GetSize_arr();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableL_int_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_IterableL_int(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    begin()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableL_int_begin(this.rawPointer());
            ffi.check();
            return ((__ret >>> 0) === 0 ? null : ffi.M.HEAP32[((__ret >>> 0)) >>> 2]);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    end()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_IterableL_int_end(this.rawPointer());
            ffi.check();
            return ((__ret >>> 0) === 0 ? null : ffi.M.HEAP32[((__ret >>> 0)) >>> 2]);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Keep-alive sorcery:
 * Generated from class `MR::CSharp::LifetimesA`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_LifetimesA extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_LifetimesA_Destroy(ptr);}

    get x()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesA_Get_x(this.rawPointer());
            ffi.check();
            return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set x(value)
    {
        try
        {
            ffi.C.MR_CSharp_LifetimesA_Set_x(this.rawPointer(), value);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesA_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(x)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesA_ConstructFrom(x);
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_2(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesA_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_LifetimesA.__ctor_0();
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_CSharp_LifetimesA.__ctor_1(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_LifetimesA))
            return L.MR_CSharp_LifetimesA.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_LifetimesA.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_LifetimesA.__ctor(args), L.MR_CSharp_LifetimesA.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesA_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_LifetimesA(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    foo()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesA_foo(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    bar(ref)
    {
        try
        {
            ffi.C.MR_CSharp_LifetimesA_bar(this.rawPointer(), ref);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::LifetimesB`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_LifetimesB extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_LifetimesB_Destroy(ptr);}

    get a()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesB_Get_a(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_LifetimesA(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set a(value)
    {
        try
        {
            ffi.C.MR_CSharp_LifetimesB_Set_a(this.rawPointer(), ffi.ptrNonNull(value, "value"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesB_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(a)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesB_ConstructFrom(ffi.ptrNonNull(a, "a"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_2(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesB_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_LifetimesB.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_LifetimesA))
            return L.MR_CSharp_LifetimesB.__ctor_1(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_LifetimesB))
            return L.MR_CSharp_LifetimesB.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_LifetimesB.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_LifetimesB.__ctor(args), L.MR_CSharp_LifetimesB.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesB_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_LifetimesB(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    begin()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesB_begin(this.rawPointer());
            ffi.check();
            const __owner = this;
            return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_LifetimesA(ffi.RAW, (__ret >>> 0), false, __owner));
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    end()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesB_end(this.rawPointer());
            ffi.check();
            const __owner = this;
            return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_LifetimesA(ffi.RAW, (__ret >>> 0), false, __owner));
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opMul()
    {
        try
        {
            const __ret = ffi.C.MR_C_deref_MR_CSharp_LifetimesB_ref(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_LifetimesA(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::LifetimesC`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_LifetimesC extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_LifetimesC_Destroy(ptr);}

    get a()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesC_Get_a(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_LifetimesA(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set a(value)
    {
        try
        {
            ffi.C.MR_CSharp_LifetimesC_Set_a(this.rawPointer(), ffi.ptrNonNull(value, "value"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesC_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(a)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesC_ConstructFrom(ffi.ptrNonNull(a, "a"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_2(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesC_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_LifetimesC.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_LifetimesA))
            return L.MR_CSharp_LifetimesC.__ctor_1(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_LifetimesC))
            return L.MR_CSharp_LifetimesC.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_LifetimesC.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_LifetimesC.__ctor(args), L.MR_CSharp_LifetimesC.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesC_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_LifetimesC(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::LifetimesD`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_LifetimesD extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_LifetimesD_Destroy(ptr);}

    get a()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesD_Get_a(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_LifetimesA(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set a(value)
    {
        try
        {
            ffi.C.MR_CSharp_LifetimesD_Set_a(this.rawPointer(), ffi.ptrNonNull(value, "value"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_0(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesD_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(ref, other_ref)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesD_Construct_2(ffi.ptrNonNull(ref, "ref"), ffi.ptrNonNull(other_ref, "other_ref"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_2(ref)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesD_Construct_1_MR_CSharp_LifetimesA(ffi.ptrNonNull(ref, "ref"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_3(ref)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesD_Construct_1_MR_CSharp_LifetimesB(ffi.ptrNonNull(ref, "ref"));
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
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_LifetimesD))
            return L.MR_CSharp_LifetimesD.__ctor_0(args[0]);
        if (__n === 2 && (args[0] instanceof L.MR_CSharp_LifetimesA) && (args[1] instanceof L.MR_CSharp_LifetimesB))
            return L.MR_CSharp_LifetimesD.__ctor_1(args[0], args[1]);
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_LifetimesA))
            return L.MR_CSharp_LifetimesD.__ctor_2(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_LifetimesB))
            return L.MR_CSharp_LifetimesD.__ctor_3(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_LifetimesD.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_LifetimesD.__ctor(args), L.MR_CSharp_LifetimesD.__destroy, null);
    }

    static return_ref_static(ref)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesD_return_ref_static(ffi.ptrNonNull(ref, "ref"));
            ffi.check();
            const __owner = ref;
            return new L.MR_CSharp_LifetimesA(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesD_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_LifetimesD(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesD_get(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_LifetimesA(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    return_ref(ref)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesD_return_ref(this.rawPointer(), ffi.ptrNonNull(ref, "ref"));
            ffi.check();
            const __owner = ref;
            return new L.MR_CSharp_LifetimesA(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    store_ref_in_this(ref)
    {
        try
        {
            ffi.C.MR_CSharp_LifetimesD_store_ref_in_this(this.rawPointer(), ffi.ptrNonNull(ref, "ref"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    store_ref_in_param(ref, other_ref)
    {
        try
        {
            ffi.C.MR_CSharp_LifetimesD_store_ref_in_param(this.rawPointer(), ffi.ptrNonNull(ref, "ref"), ffi.ptrNonNull(other_ref, "other_ref"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    store_this_in_param(ref)
    {
        try
        {
            ffi.C.MR_CSharp_LifetimesD_store_this_in_param(this.rawPointer(), ffi.ptrNonNull(ref, "ref"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Nested attributes.
 * Generated from class `MR::CSharp::LifetimesE`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_LifetimesE extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_LifetimesE_Destroy(ptr);}

    get a()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesE_Get_a(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_LifetimesA(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set a(value)
    {
        try
        {
            ffi.C.MR_CSharp_LifetimesE_Set_a(this.rawPointer(), ffi.ptrNonNull(value, "value"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_0(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesE_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(ref)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesE_Construct(ffi.ptrNonNull(ref, "ref"));
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
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_LifetimesE))
            return L.MR_CSharp_LifetimesE.__ctor_0(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_LifetimesB))
            return L.MR_CSharp_LifetimesE.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_LifetimesE.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_LifetimesE.__ctor(args), L.MR_CSharp_LifetimesE.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesE_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_LifetimesE(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesE_get(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_LifetimesA(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    return_ref(ref)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_LifetimesE_return_ref(this.rawPointer(), ffi.ptrNonNull(ref, "ref"));
            ffi.check();
            const __owner = ref;
            return new L.MR_CSharp_LifetimesA(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    store_ref_in_this(ref)
    {
        try
        {
            ffi.C.MR_CSharp_LifetimesE_store_ref_in_this(this.rawPointer(), ffi.ptrNonNull(ref, "ref"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Members having the same name as the exposed class, after rewriting.
 * Generated from class `MR::CSharp::NameConflicts`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_NameConflicts extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_NameConflicts_Destroy(ptr);}

    get name_conflicts()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_NameConflicts_Get_name_conflicts(this.rawPointer());
            ffi.check();
            return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set name_conflicts(value)
    {
        try
        {
            ffi.C.MR_CSharp_NameConflicts_Set_name_conflicts(this.rawPointer(), value);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get a()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_NameConflicts_Get_a(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_NameConflicts_A(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set a(value)
    {
        try
        {
            ffi.C.MR_CSharp_NameConflicts_Set_a(this.rawPointer(), ffi.ptrNonNull(value, "value"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_NameConflicts_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(name_conflicts, a)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_NameConflicts_ConstructFrom(name_conflicts, ffi.ptrNonNull(a, "a"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_2(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_NameConflicts_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_NameConflicts.__ctor_0();
        if (__n === 2 && typeof args[0] === "number" && (args[1] instanceof L.MR_CSharp_NameConflicts_A))
            return L.MR_CSharp_NameConflicts.__ctor_1(args[0], args[1]);
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_NameConflicts))
            return L.MR_CSharp_NameConflicts.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_NameConflicts.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_NameConflicts.__ctor(args), L.MR_CSharp_NameConflicts.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_NameConflicts_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_NameConflicts(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    name_Conflicts()
    {
        try
        {
            ffi.C.MR_CSharp_NameConflicts_name_Conflicts(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::NameConflicts::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_NameConflicts_A extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_NameConflicts_A_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_NameConflicts_A_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_NameConflicts_A_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_NameConflicts_A.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_NameConflicts_A))
            return L.MR_CSharp_NameConflicts_A.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_NameConflicts_A.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_NameConflicts_A.__ctor(args), L.MR_CSharp_NameConflicts_A.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_NameConflicts_A_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_NameConflicts_A(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::NameConflictsExposed`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export class MR_CSharp_NameConflictsExposed extends ffi.CppStruct
{
    static SIZE = 8;
    static ALIGNMENT = 4;

    get name_conflicts_exposed() {return ffi.M.HEAP32[(this.rawPointer() + 0) >>> 2];}
    set name_conflicts_exposed(value) {ffi.M.HEAPU32[(this.rawPointer() + 0) >>> 2] = value;}

    get a() {return new L.MR_CSharp_NameConflictsExposed_A(ffi.RAW, this.rawPointer() + 4, false, this);}
    set a(value) {ffi.M.HEAPU8.copyWithin(this.rawPointer() + 4, ffi.ptrNonNull(value, "value"), ffi.ptrNonNull(value, "value") + 4);}

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return ffi.zeroStruct(8);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2], args[3]);
            return;
        }
        super(L.MR_CSharp_NameConflictsExposed.__ctor(args), true, null);
    }

    name_Conflicts_exposed()
    {
        try
        {
            ffi.C.MR_CSharp_NameConflictsExposed_name_Conflicts_exposed(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::NameConflictsExposed::A`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export class MR_CSharp_NameConflictsExposed_A extends ffi.CppStruct
{
    static SIZE = 4;
    static ALIGNMENT = 4;

    get x() {return ffi.M.HEAP32[(this.rawPointer() + 0) >>> 2];}
    set x(value) {ffi.M.HEAPU32[(this.rawPointer() + 0) >>> 2] = value;}

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return ffi.zeroStruct(4);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2], args[3]);
            return;
        }
        super(L.MR_CSharp_NameConflictsExposed_A.__ctor(args), true, null);
    }
}

/**
 * The class is non-copyable, so operators with by-value parameters fail to inject.
 * Generated from class `MR::CSharp::NonCopyableClassByValueOps`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_NonCopyableClassByValueOps extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_NonCopyableClassByValueOps_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_NonCopyableClassByValueOps_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_NonCopyableClassByValueOps_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_NonCopyableClassByValueOps.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_NonCopyableClassByValueOps))
            return L.MR_CSharp_NonCopyableClassByValueOps.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_NonCopyableClassByValueOps.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_NonCopyableClassByValueOps.__ctor(args), L.MR_CSharp_NonCopyableClassByValueOps.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_NonCopyableClassByValueOps_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_NonCopyableClassByValueOps(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::NonTrivial`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_NonTrivial extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_NonTrivial_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_NonTrivial_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_NonTrivial_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_NonTrivial.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_NonTrivial))
            return L.MR_CSharp_NonTrivial.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_NonTrivial.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_NonTrivial.__ctor(args), L.MR_CSharp_NonTrivial.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_NonTrivial_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_NonTrivial(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Check how non-trivial class types are passed by value into operators.
 * Generated from class `MR::CSharp::NonTrivialClassOps`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_NonTrivialClassOps extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_NonTrivialClassOps_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_NonTrivialClassOps_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_NonTrivialClassOps_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_NonTrivialClassOps.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_NonTrivialClassOps))
            return L.MR_CSharp_NonTrivialClassOps.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_NonTrivialClassOps.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_NonTrivialClassOps.__ctor(args), L.MR_CSharp_NonTrivialClassOps.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_NonTrivialClassOps_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_NonTrivialClassOps(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opAdd(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_add_MR_CSharp_NonTrivialClassOps_int(this.rawPointer(), _1);
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::NonTrivialDerived`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_NonTrivialDerived extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_NonTrivialDerived_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_NonTrivialDerived_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_NonTrivialDerived_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_NonTrivialDerived.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_NonTrivialDerived))
            return L.MR_CSharp_NonTrivialDerived.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_NonTrivialDerived.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_NonTrivialDerived.__ctor(args), L.MR_CSharp_NonTrivialDerived.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_NonTrivialDerived_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_NonTrivialDerived(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Nested classes.
 * Generated from class `MR::CSharp::Outer`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_Outer extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_Outer_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_Outer_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_Outer_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_Outer.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_Outer))
            return L.MR_CSharp_Outer.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_Outer.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_Outer.__ctor(args), L.MR_CSharp_Outer.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_Outer_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_Outer(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    foo()
    {
        try
        {
            ffi.C.MR_CSharp_Outer_foo(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::Outer::Inner`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_Outer_Inner extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_Outer_Inner_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_Outer_Inner_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_Outer_Inner_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_Outer_Inner.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_Outer_Inner))
            return L.MR_CSharp_Outer_Inner.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_Outer_Inner.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_Outer_Inner.__ctor(args), L.MR_CSharp_Outer_Inner.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_Outer_Inner_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_Outer_Inner(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    bar()
    {
        try
        {
            ffi.C.MR_CSharp_Outer_Inner_bar(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * The happy path, the operator is const.
 * Generated from class `MR::CSharp::RelationalA`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_RelationalA extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_RelationalA_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_RelationalA_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_RelationalA_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_RelationalA.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_RelationalA))
            return L.MR_CSharp_RelationalA.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_RelationalA.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_RelationalA.__ctor(args), L.MR_CSharp_RelationalA.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_RelationalA_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_RelationalA(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opLess(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_less_MR_CSharp_RelationalA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opGreater(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_greater_MR_CSharp_RelationalA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opLessEqual(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_less_equal_MR_CSharp_RelationalA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opGreaterEqual(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_greater_equal_MR_CSharp_RelationalA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * The happy path, the operator is non-const.
 * Generated from class `MR::CSharp::RelationalB`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_RelationalB extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_RelationalB_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_RelationalB_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_RelationalB_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_RelationalB.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_RelationalB))
            return L.MR_CSharp_RelationalB.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_RelationalB.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_RelationalB.__ctor(args), L.MR_CSharp_RelationalB.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_RelationalB_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_RelationalB(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opLess(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_less_MR_CSharp_RelationalB(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opGreater(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_greater_MR_CSharp_RelationalB(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opLessEqual(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_less_equal_MR_CSharp_RelationalB(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opGreaterEqual(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_greater_equal_MR_CSharp_RelationalB(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * The operators have mixed constness, which causes them to be demoted to functions.
 * Generated from class `MR::CSharp::RelationalC`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_RelationalC extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_RelationalC_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_RelationalC_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_RelationalC_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_RelationalC.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_RelationalC))
            return L.MR_CSharp_RelationalC.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_RelationalC.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_RelationalC.__ctor(args), L.MR_CSharp_RelationalC.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_RelationalC_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_RelationalC(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opLess(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_less_MR_CSharp_RelationalC(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opGreater(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_greater_MR_CSharp_RelationalC(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opGreaterEqual(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_greater_equal_MR_CSharp_RelationalC(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * The operators have operands of different types, causing them to be demoted to functions.
 * Generated from class `MR::CSharp::RelationalD`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_RelationalD extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_RelationalD_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_RelationalD_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_RelationalD_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_RelationalD.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_RelationalD))
            return L.MR_CSharp_RelationalD.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_RelationalD.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_RelationalD.__ctor(args), L.MR_CSharp_RelationalD.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_RelationalD_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_RelationalD(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opLess(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_less_MR_CSharp_RelationalD_MR_CSharp_RelationalC(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opGreater(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_greater_MR_CSharp_RelationalD_MR_CSharp_RelationalC(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opLessEqual(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_less_equal_MR_CSharp_RelationalD_MR_CSharp_RelationalC(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opGreaterEqual(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_greater_equal_MR_CSharp_RelationalD_MR_CSharp_RelationalC(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * The operators have a weird return type.
 * Generated from class `MR::CSharp::RelationalE`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_RelationalE extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_RelationalE_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_RelationalE_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_RelationalE_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_RelationalE.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_RelationalE))
            return L.MR_CSharp_RelationalE.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_RelationalE.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_RelationalE.__ctor(args), L.MR_CSharp_RelationalE.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_RelationalE_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_RelationalE(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opLess(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_less_MR_CSharp_RelationalE_MR_CSharp_RelationalC(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opGreater(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_greater_MR_CSharp_RelationalE_MR_CSharp_RelationalC(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opLessEqual(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_less_equal_MR_CSharp_RelationalE_MR_CSharp_RelationalC(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opGreaterEqual(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_greater_equal_MR_CSharp_RelationalE_MR_CSharp_RelationalC(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * The operators return void.
 * Generated from class `MR::CSharp::RelationalF`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_RelationalF extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_RelationalF_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_RelationalF_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_RelationalF_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_RelationalF.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_RelationalF))
            return L.MR_CSharp_RelationalF.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_RelationalF.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_RelationalF.__ctor(args), L.MR_CSharp_RelationalF.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_RelationalF_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_RelationalF(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opLess(_1)
    {
        try
        {
            ffi.C.MR_C_less_MR_CSharp_RelationalF_MR_CSharp_RelationalC(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opGreater(_1)
    {
        try
        {
            ffi.C.MR_C_greater_MR_CSharp_RelationalF_MR_CSharp_RelationalC(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opLessEqual(_1)
    {
        try
        {
            ffi.C.MR_C_less_equal_MR_CSharp_RelationalF_MR_CSharp_RelationalC(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opGreaterEqual(_1)
    {
        try
        {
            ffi.C.MR_C_greater_equal_MR_CSharp_RelationalF_MR_CSharp_RelationalC(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::SA`.
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::CSharp::SC`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_SA extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_SA_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_SA_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_SA_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_SA.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_SA))
            return L.MR_CSharp_SA.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_SA.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_SA.__ctor(args), L.MR_CSharp_SA.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_SA_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_SA(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::SB`.
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::CSharp::SC`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_SB extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_SB_Destroy(ptr);}

    get s()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_SB_Get_s(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set s(value)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __str_value = ffi.utf8(ffi.nonNullString(value, "value"));
            const __end_value = ffi.utf8End();
            ffi.C.MR_CSharp_SB_Set_s(this.rawPointer(), __str_value, __end_value);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_SB_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(s)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __str_s = ffi.utf8(ffi.nonNullString(s, "s"));
            const __end_s = ffi.utf8End();
            const __ret = ffi.C.MR_CSharp_SB_ConstructFrom(__str_s, __end_s);
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    static __ctor_2(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_SB_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_SB.__ctor_0();
        if (__n === 1 && typeof args[0] === "string")
            return L.MR_CSharp_SB.__ctor_1(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_SB))
            return L.MR_CSharp_SB.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_SB.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_SB.__ctor(args), L.MR_CSharp_SB.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_SB_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_SB(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::SC`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::CSharp::SA`
 *     `MR::CSharp::SB`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_SC extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_SC_Destroy(ptr);}

    get s()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_SC_Get_s(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set s(value)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __str_value = ffi.utf8(ffi.nonNullString(value, "value"));
            const __end_value = ffi.utf8End();
            ffi.C.MR_CSharp_SC_Set_s(this.rawPointer(), __str_value, __end_value);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_SC_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_SC_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_SC.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_SC))
            return L.MR_CSharp_SC.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_SC.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_SC.__ctor(args), L.MR_CSharp_SC.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_SC_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_SC(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    upcastToSA()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CSharp_SC_MutableUpcastTo_MR_CSharp_SA(this.rawPointer())) >>> 0);
        return new L.MR_CSharp_SA(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromSA(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CSharp_SC_MutableStaticDowncastFrom_MR_CSharp_SA(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_CSharp_SC(ffi.RAW, __ret, false, object);
    }

    upcastToSB()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CSharp_SC_MutableUpcastTo_MR_CSharp_SB(this.rawPointer())) >>> 0);
        return new L.MR_CSharp_SB(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromSB(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CSharp_SC_MutableStaticDowncastFrom_MR_CSharp_SB(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_CSharp_SC(ffi.RAW, __ret, false, object);
    }
}

/**
 * Generated from class `MR::CSharp::SD`.
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::CSharp::SF`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_SD extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_SD_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_SD_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_SD_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_SD.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_SD))
            return L.MR_CSharp_SD.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_SD.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_SD.__ctor(args), L.MR_CSharp_SD.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_SD_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_SD(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::SE`.
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::CSharp::SF`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_SE extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_SE_Destroy(ptr);}

    get s()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_SE_Get_s(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set s(value)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __str_value = ffi.utf8(ffi.nonNullString(value, "value"));
            const __end_value = ffi.utf8End();
            ffi.C.MR_CSharp_SE_Set_s(this.rawPointer(), __str_value, __end_value);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_SE_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(s)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __str_s = ffi.utf8(ffi.nonNullString(s, "s"));
            const __end_s = ffi.utf8End();
            const __ret = ffi.C.MR_CSharp_SE_ConstructFrom(__str_s, __end_s);
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    static __ctor_2(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_SE_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_SE.__ctor_0();
        if (__n === 1 && typeof args[0] === "string")
            return L.MR_CSharp_SE.__ctor_1(args[0]);
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_SE))
            return L.MR_CSharp_SE.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_SE.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_SE.__ctor(args), L.MR_CSharp_SE.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_SE_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_SE(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::SF`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::CSharp::SD`
 *     `MR::CSharp::SE`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_SF extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_SF_Destroy(ptr);}

    get s()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_SF_Get_s(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set s(value)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __str_value = ffi.utf8(ffi.nonNullString(value, "value"));
            const __end_value = ffi.utf8End();
            ffi.C.MR_CSharp_SF_Set_s(this.rawPointer(), __str_value, __end_value);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_SF_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_SF_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_SF.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_SF))
            return L.MR_CSharp_SF.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_SF.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_SF.__ctor(args), L.MR_CSharp_SF.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_SF_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_SF(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    upcastToSD()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CSharp_SF_MutableUpcastTo_MR_CSharp_SD(this.rawPointer())) >>> 0);
        return new L.MR_CSharp_SD(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromSD(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CSharp_SF_MutableStaticDowncastFrom_MR_CSharp_SD(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_CSharp_SF(ffi.RAW, __ret, false, object);
    }

    static dynamicDowncastFromSD(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CSharp_SF_MutableDynamicDowncastFrom_MR_CSharp_SD(ffi.ptrNonNull(object, "object"))) >>> 0);
        return __ret === 0 ? null : new L.MR_CSharp_SF(ffi.RAW, __ret, false, object);
    }

    upcastToSE()
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CSharp_SF_MutableUpcastTo_MR_CSharp_SE(this.rawPointer())) >>> 0);
        return new L.MR_CSharp_SE(ffi.RAW, __ret, false, this);
    }

    static staticDowncastFromSE(object)
    {
        const __ret = (ffi.cppCall(() => ffi.C.MR_CSharp_SF_MutableStaticDowncastFrom_MR_CSharp_SE(ffi.ptrNonNull(object, "object"))) >>> 0);
        return new L.MR_CSharp_SF(ffi.RAW, __ret, false, object);
    }
}

/**
 * Make sure non-passable classes work fine as `std::shared_ptr` template arguments.
 * Generated from class `MR::CSharp::SG`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_SG extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_SG_Destroy(ptr);}

    static __ctor(args)
    {
        throw new TypeError("`SG` can't be constructed from JS.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_SG.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_SG.__ctor(args), L.MR_CSharp_SG.__destroy, null);
    }
}

/**
 * The operator is injected correctly.
 * Generated from class `MR::CSharp::StaticOpsLhsA`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_StaticOpsLhsA extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_StaticOpsLhsA_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsLhsA_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsLhsA_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_StaticOpsLhsA.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_StaticOpsLhsA))
            return L.MR_CSharp_StaticOpsLhsA.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_StaticOpsLhsA.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_StaticOpsLhsA.__ctor(args), L.MR_CSharp_StaticOpsLhsA.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsLhsA_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_StaticOpsLhsA(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * The operator injects but becomes a function, because it returns void.
 * Generated from class `MR::CSharp::StaticOpsLhsB`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_StaticOpsLhsB extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_StaticOpsLhsB_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsLhsB_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsLhsB_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_StaticOpsLhsB.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_StaticOpsLhsB))
            return L.MR_CSharp_StaticOpsLhsB.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_StaticOpsLhsB.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_StaticOpsLhsB.__ctor(args), L.MR_CSharp_StaticOpsLhsB.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsLhsB_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_StaticOpsLhsB(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * The operator fails to inject because the class isn't copyable (and isn't trivially movable), and the operator takes it by value.
 * Generated from class `MR::CSharp::StaticOpsLhsC`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_StaticOpsLhsC extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_StaticOpsLhsC_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsLhsC_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsLhsC_ConstructFromAnother(ffi.PASS_BY_MOVE_AND_DESTROY, ffi.nonNull(_other, "_other").release());
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
        if (__n === 0)
            return L.MR_CSharp_StaticOpsLhsC.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_StaticOpsLhsC))
            return L.MR_CSharp_StaticOpsLhsC.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_StaticOpsLhsC.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_StaticOpsLhsC.__ctor(args), L.MR_CSharp_StaticOpsLhsC.__destroy, null);
    }
}

/**
 * The class is non-copyable, but is trivially movable, so the by-value operator injects fine.
 * Generated from class `MR::CSharp::StaticOpsLhsD`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_StaticOpsLhsD extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_StaticOpsLhsD_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsLhsD_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsLhsD_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_StaticOpsLhsD.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_StaticOpsLhsD))
            return L.MR_CSharp_StaticOpsLhsD.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_StaticOpsLhsD.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_StaticOpsLhsD.__ctor(args), L.MR_CSharp_StaticOpsLhsD.__destroy, null);
    }
}

/**
 * The class isn't copyable, but the operator takes it by reference, so it injects fine.
 * Generated from class `MR::CSharp::StaticOpsLhsE`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_StaticOpsLhsE extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_StaticOpsLhsE_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsLhsE_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsLhsE_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_StaticOpsLhsE.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_StaticOpsLhsE))
            return L.MR_CSharp_StaticOpsLhsE.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_StaticOpsLhsE.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_StaticOpsLhsE.__ctor(args), L.MR_CSharp_StaticOpsLhsE.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsLhsE_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_StaticOpsLhsE(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * The class isn't copyable, but the operator takes it by const reference, so it injects fine.
 * Generated from class `MR::CSharp::StaticOpsLhsF`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_StaticOpsLhsF extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_StaticOpsLhsF_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsLhsF_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsLhsF_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_StaticOpsLhsF.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_StaticOpsLhsF))
            return L.MR_CSharp_StaticOpsLhsF.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_StaticOpsLhsF.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_StaticOpsLhsF.__ctor(args), L.MR_CSharp_StaticOpsLhsF.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsLhsF_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_StaticOpsLhsF(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * The copy ctor uses a non-const reference, so an operator with a by-value parameter gets injected into the non-const half.
 * Generated from class `MR::CSharp::StaticOpsLhsG`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_StaticOpsLhsG extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_StaticOpsLhsG_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsLhsG_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsLhsG_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_StaticOpsLhsG.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_StaticOpsLhsG))
            return L.MR_CSharp_StaticOpsLhsG.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_StaticOpsLhsG.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_StaticOpsLhsG.__ctor(args), L.MR_CSharp_StaticOpsLhsG.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsLhsG_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_StaticOpsLhsG(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * The copy ctor uses a non-const reference, but it doesn't matter because the operator takes the parameter by const reference,
 *   so the operator gets injected into the const half.
 * Generated from class `MR::CSharp::StaticOpsLhsH`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_StaticOpsLhsH extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_StaticOpsLhsH_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsLhsH_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsLhsH_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_StaticOpsLhsH.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_StaticOpsLhsH))
            return L.MR_CSharp_StaticOpsLhsH.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_StaticOpsLhsH.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_StaticOpsLhsH.__ctor(args), L.MR_CSharp_StaticOpsLhsH.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsLhsH_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_StaticOpsLhsH(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::StaticOpsMixedLhs`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_StaticOpsMixedLhs extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_StaticOpsMixedLhs_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsMixedLhs_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsMixedLhs_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_StaticOpsMixedLhs.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_StaticOpsMixedLhs))
            return L.MR_CSharp_StaticOpsMixedLhs.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_StaticOpsMixedLhs.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_StaticOpsMixedLhs.__ctor(args), L.MR_CSharp_StaticOpsMixedLhs.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsMixedLhs_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_StaticOpsMixedLhs(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::StaticOpsMixedRhs`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_StaticOpsMixedRhs extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_StaticOpsMixedRhs_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsMixedRhs_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsMixedRhs_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_StaticOpsMixedRhs.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_StaticOpsMixedRhs))
            return L.MR_CSharp_StaticOpsMixedRhs.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_StaticOpsMixedRhs.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_StaticOpsMixedRhs.__ctor(args), L.MR_CSharp_StaticOpsMixedRhs.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsMixedRhs_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_StaticOpsMixedRhs(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * The operator is injected correctly.
 * Generated from class `MR::CSharp::StaticOpsRhsA`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_StaticOpsRhsA extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_StaticOpsRhsA_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsRhsA_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsRhsA_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_StaticOpsRhsA.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_StaticOpsRhsA))
            return L.MR_CSharp_StaticOpsRhsA.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_StaticOpsRhsA.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_StaticOpsRhsA.__ctor(args), L.MR_CSharp_StaticOpsRhsA.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsRhsA_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_StaticOpsRhsA(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * The operator injects but becomes a function, because it returns void.
 * Generated from class `MR::CSharp::StaticOpsRhsB`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_StaticOpsRhsB extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_StaticOpsRhsB_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsRhsB_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsRhsB_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_StaticOpsRhsB.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_StaticOpsRhsB))
            return L.MR_CSharp_StaticOpsRhsB.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_StaticOpsRhsB.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_StaticOpsRhsB.__ctor(args), L.MR_CSharp_StaticOpsRhsB.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsRhsB_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_StaticOpsRhsB(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * The operator fails to inject because the class isn't copyable (and isn't trivially movable), and the operator takes it by value.
 * Generated from class `MR::CSharp::StaticOpsRhsC`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_StaticOpsRhsC extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_StaticOpsRhsC_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsRhsC_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsRhsC_ConstructFromAnother(ffi.PASS_BY_MOVE_AND_DESTROY, ffi.nonNull(_other, "_other").release());
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
        if (__n === 0)
            return L.MR_CSharp_StaticOpsRhsC.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_StaticOpsRhsC))
            return L.MR_CSharp_StaticOpsRhsC.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_StaticOpsRhsC.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_StaticOpsRhsC.__ctor(args), L.MR_CSharp_StaticOpsRhsC.__destroy, null);
    }
}

/**
 * The class is non-copyable, but is trivially movable, so the by-value operator injects fine.
 * Generated from class `MR::CSharp::StaticOpsRhsD`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_StaticOpsRhsD extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_StaticOpsRhsD_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsRhsD_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsRhsD_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_StaticOpsRhsD.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_StaticOpsRhsD))
            return L.MR_CSharp_StaticOpsRhsD.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_StaticOpsRhsD.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_StaticOpsRhsD.__ctor(args), L.MR_CSharp_StaticOpsRhsD.__destroy, null);
    }
}

/**
 * The class isn't copyable, but the operator takes it by reference, so it injects fine.
 * Generated from class `MR::CSharp::StaticOpsRhsE`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_StaticOpsRhsE extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_StaticOpsRhsE_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsRhsE_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsRhsE_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_StaticOpsRhsE.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_StaticOpsRhsE))
            return L.MR_CSharp_StaticOpsRhsE.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_StaticOpsRhsE.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_StaticOpsRhsE.__ctor(args), L.MR_CSharp_StaticOpsRhsE.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsRhsE_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_StaticOpsRhsE(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * The class isn't copyable, but the operator takes it by const reference, so it injects fine.
 * Generated from class `MR::CSharp::StaticOpsRhsF`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_StaticOpsRhsF extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_StaticOpsRhsF_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsRhsF_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsRhsF_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_StaticOpsRhsF.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_StaticOpsRhsF))
            return L.MR_CSharp_StaticOpsRhsF.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_StaticOpsRhsF.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_StaticOpsRhsF.__ctor(args), L.MR_CSharp_StaticOpsRhsF.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsRhsF_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_StaticOpsRhsF(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * The copy ctor uses a non-const reference, so an operator with a by-value parameter gets injected into the non-const half.
 * Generated from class `MR::CSharp::StaticOpsRhsG`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_StaticOpsRhsG extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_StaticOpsRhsG_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsRhsG_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsRhsG_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_StaticOpsRhsG.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_StaticOpsRhsG))
            return L.MR_CSharp_StaticOpsRhsG.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_StaticOpsRhsG.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_StaticOpsRhsG.__ctor(args), L.MR_CSharp_StaticOpsRhsG.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsRhsG_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_StaticOpsRhsG(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * The copy ctor uses a non-const reference, but it doesn't matter because the operator takes the parameter by const reference,
 *   so the operator gets injected into the const half.
 * Generated from class `MR::CSharp::StaticOpsRhsH`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_StaticOpsRhsH extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_StaticOpsRhsH_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsRhsH_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsRhsH_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_StaticOpsRhsH.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_StaticOpsRhsH))
            return L.MR_CSharp_StaticOpsRhsH.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_StaticOpsRhsH.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_StaticOpsRhsH.__ctor(args), L.MR_CSharp_StaticOpsRhsH.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StaticOpsRhsH_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_StaticOpsRhsH(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::StringConvFsPath`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_StringConvFsPath extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_StringConvFsPath_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StringConvFsPath_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StringConvFsPath_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_StringConvFsPath.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_StringConvFsPath))
            return L.MR_CSharp_StringConvFsPath.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_StringConvFsPath.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_StringConvFsPath.__ctor(args), L.MR_CSharp_StringConvFsPath.__destroy, null);
    }

    convertTo_std_filesystem_path()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StringConvFsPath_ConvertTo_std_filesystem_path(this.rawPointer());
            ffi.check();
            return new L.MR_C_std_filesystem_path(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StringConvFsPath_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_StringConvFsPath(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Conversions to string-like types.
 * Those create the additional `operator string` to convert directly to a C# string, and `override string ToString()` to override the method of the implicit base `object`.
 * Generated from class `MR::CSharp::StringConvString`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_StringConvString extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_StringConvString_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StringConvString_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StringConvString_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_StringConvString.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_StringConvString))
            return L.MR_CSharp_StringConvString.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_StringConvString.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_StringConvString.__ctor(args), L.MR_CSharp_StringConvString.__destroy, null);
    }

    convertTo_std_string()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StringConvString_ConvertTo_std_string(this.rawPointer());
            ffi.check();
            return ffi.takeString((__ret >>> 0));
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StringConvString_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_StringConvString(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::StringConvStringView`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_StringConvStringView extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_StringConvStringView_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StringConvStringView_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StringConvStringView_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_StringConvStringView.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_StringConvStringView))
            return L.MR_CSharp_StringConvStringView.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_StringConvStringView.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_StringConvStringView.__ctor(args), L.MR_CSharp_StringConvStringView.__destroy, null);
    }

    convertTo_std_string_view()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StringConvStringView_ConvertTo_std_string_view(this.rawPointer());
            ffi.check();
            return new L.MR_C_std_string_view(ffi.RAW, (__ret >>> 0), true, null);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_StringConvStringView_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_StringConvStringView(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::TestConstness`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_TestConstness extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_TestConstness_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestConstness_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestConstness_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_TestConstness.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_TestConstness))
            return L.MR_CSharp_TestConstness.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_TestConstness.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_TestConstness.__ctor(args), L.MR_CSharp_TestConstness.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestConstness_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_TestConstness(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    foo()
    {
        try
        {
            ffi.C.MR_CSharp_TestConstness_foo_mut(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    foo_2()
    {
        try
        {
            ffi.C.MR_CSharp_TestConstness_foo(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::TestFields`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_TestFields extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_TestFields_Destroy(ptr);}

    static get static_i()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestFields_Get_static_i();
            ffi.check();
            return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static set static_i(value)
    {
        try
        {
            ffi.C.MR_CSharp_TestFields_Set_static_i(value);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static get static_const_i()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestFields_Get_static_const_i();
            ffi.check();
            return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static get static_i_ref()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestFields_Get_static_i_ref();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static get static_const_i_ref()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestFields_Get_static_const_i_ref();
            ffi.check();
            return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static get static_s()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestFields_Get_static_s();
            ffi.check();
            const __owner = null;
            return new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static set static_s(value)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __str_value = ffi.utf8(ffi.nonNullString(value, "value"));
            const __end_value = ffi.utf8End();
            ffi.C.MR_CSharp_TestFields_Set_static_s(__str_value, __end_value);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    static get static_const_s()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestFields_Get_static_const_s();
            ffi.check();
            const __owner = null;
            return new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static get static_s_ref()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestFields_Get_static_s_ref();
            ffi.check();
            const __owner = null;
            return new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static get static_const_s_ref()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestFields_Get_static_const_s_ref();
            ffi.check();
            const __owner = null;
            return new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get i()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestFields_Get_i(this.rawPointer());
            ffi.check();
            return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set i(value)
    {
        try
        {
            ffi.C.MR_CSharp_TestFields_Set_i(this.rawPointer(), value);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get const_i()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestFields_Get_const_i(this.rawPointer());
            ffi.check();
            return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get i_ref()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestFields_Get_i_ref(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get const_i_ref()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestFields_Get_const_i_ref(this.rawPointer());
            ffi.check();
            return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get s()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestFields_Get_s(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set s(value)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __str_value = ffi.utf8(ffi.nonNullString(value, "value"));
            const __end_value = ffi.utf8End();
            ffi.C.MR_CSharp_TestFields_Set_s(this.rawPointer(), __str_value, __end_value);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    get const_s()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestFields_Get_const_s(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get s_ref()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestFields_Get_s_ref(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    get const_s_ref()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestFields_Get_const_s_ref(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_0(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestFields_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(i, const_i, i_ref, const_i_ref, s, const_s, s_ref, const_s_ref)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_const_i_ref = ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = const_i_ref;});
            const __str_s = ffi.utf8(ffi.nonNullString(s, "s"));
            const __end_s = ffi.utf8End();
            const __str_const_s = ffi.utf8(ffi.nonNullString(const_s, "const_s"));
            const __end_const_s = ffi.utf8End();
            const __str_const_s_ref = ffi.utf8(ffi.nonNullString(const_s_ref, "const_s_ref"));
            const __end_const_s_ref = ffi.utf8End();
            const __ret = ffi.C.MR_CSharp_TestFields_ConstructFrom(i, const_i, i_ref, __ptr_const_i_ref, __str_s, __end_s, __str_const_s, __end_const_s, ffi.ptrNonNull(s_ref, "s_ref"), __str_const_s_ref, __end_const_s_ref);
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_TestFields))
            return L.MR_CSharp_TestFields.__ctor_0(args[0]);
        if (__n === 8 && typeof args[0] === "number" && typeof args[1] === "number" && typeof args[2] === "number" && typeof args[3] === "number" && typeof args[4] === "string" && typeof args[5] === "string" && (args[6] instanceof L.MR_C_std_string) && typeof args[7] === "string")
            return L.MR_CSharp_TestFields.__ctor_1(args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_TestFields.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_TestFields.__ctor(args), L.MR_CSharp_TestFields.__destroy, null);
    }
}

/**
 * Generated from class `MR::CSharp::TestOpsA`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_TestOpsA extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_TestOpsA_Destroy(ptr);}

    static __ctor_0(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsA_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_TestOpsA))
            return L.MR_CSharp_TestOpsA.__ctor_0(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_TestOpsA.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_TestOpsA.__ctor(args), L.MR_CSharp_TestOpsA.__destroy, null);
    }

    opAdd(...args)
    {
        const __n = args.length;
        if (__n === 0)
            return this.opPos();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_TestOpsA))
            return this.opAdd_2(args[0]);
        throw new TypeError("No overload of `opAdd` accepts these arguments.");
    }

    opSub(...args)
    {
        const __n = args.length;
        if (__n === 0)
            return this.opNeg();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_TestOpsA))
            return this.opSub_2(args[0]);
        throw new TypeError("No overload of `opSub` accepts these arguments.");
    }

    opMul(...args)
    {
        const __n = args.length;
        if (__n === 0)
            return this.opDeref();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_TestOpsA))
            return this.opMul_2(args[0]);
        throw new TypeError("No overload of `opMul` accepts these arguments.");
    }

    opBitand(...args)
    {
        const __n = args.length;
        if (__n === 0)
            return this.opAddressof();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_TestOpsA))
            return this.opBitand_2(args[0]);
        throw new TypeError("No overload of `opBitand` accepts these arguments.");
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsA_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opPos()
    {
        try
        {
            const __ret = ffi.C.MR_C_pos_MR_CSharp_TestOpsA(this.rawPointer());
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opAdd_2(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_add_MR_CSharp_TestOpsA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opNeg()
    {
        try
        {
            const __ret = ffi.C.MR_C_neg_MR_CSharp_TestOpsA(this.rawPointer());
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opSub_2(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_sub_MR_CSharp_TestOpsA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opDeref()
    {
        try
        {
            const __ret = ffi.C.MR_C_deref_MR_CSharp_TestOpsA(this.rawPointer());
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opMul_2(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_mul_MR_CSharp_TestOpsA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opDiv(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_div_MR_CSharp_TestOpsA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opMod(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_mod_MR_CSharp_TestOpsA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opXor(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_xor_MR_CSharp_TestOpsA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opAddressof()
    {
        try
        {
            const __ret = ffi.C.MR_C_addressof_MR_CSharp_TestOpsA(this.rawPointer());
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opBitand_2(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_bitand_MR_CSharp_TestOpsA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opBitor(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_bitor_MR_CSharp_TestOpsA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opCompl()
    {
        try
        {
            const __ret = ffi.C.MR_C_compl_MR_CSharp_TestOpsA(this.rawPointer());
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opNot()
    {
        try
        {
            const __ret = ffi.C.MR_C_not_MR_CSharp_TestOpsA(this.rawPointer());
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    add_assign(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsA_add_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    sub_assign(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsA_sub_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    mul_assign(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsA_mul_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    div_assign(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsA_div_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    mod_assign(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsA_mod_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    xor_assign(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsA_xor_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    bitand_assign(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsA_bitand_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    bitor_assign(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsA_bitor_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opLshift(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_lshift_MR_CSharp_TestOpsA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opRshift(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_rshift_MR_CSharp_TestOpsA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    lshift_assign(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsA_lshift_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    rshift_assign(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsA_rshift_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opCompareThreeWay(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_compare_three_way_MR_CSharp_TestOpsA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opAnd(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_and_MR_CSharp_TestOpsA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opOr(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_or_MR_CSharp_TestOpsA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opComma(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_comma_MR_CSharp_TestOpsA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    arrow_star(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsA_arrow_star(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    arrow()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsA_arrow(this.rawPointer());
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    call(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsA_call(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    index(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsA_index(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::TestOpsB`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_TestOpsB extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_TestOpsB_Destroy(ptr);}

    static __ctor_0(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsB_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_TestOpsB))
            return L.MR_CSharp_TestOpsB.__ctor_0(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_TestOpsB.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_TestOpsB.__ctor(args), L.MR_CSharp_TestOpsB.__destroy, null);
    }

    opAdd(...args)
    {
        const __n = args.length;
        if (__n === 0)
            return this.opPos();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_TestOpsB))
            return this.opAdd_2(args[0]);
        throw new TypeError("No overload of `opAdd` accepts these arguments.");
    }

    opSub(...args)
    {
        const __n = args.length;
        if (__n === 0)
            return this.opNeg();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_TestOpsB))
            return this.opSub_2(args[0]);
        throw new TypeError("No overload of `opSub` accepts these arguments.");
    }

    opMul(...args)
    {
        const __n = args.length;
        if (__n === 0)
            return this.opDeref();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_TestOpsB))
            return this.opMul_2(args[0]);
        throw new TypeError("No overload of `opMul` accepts these arguments.");
    }

    opBitand(...args)
    {
        const __n = args.length;
        if (__n === 0)
            return this.opAddressof();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_TestOpsB))
            return this.opBitand_2(args[0]);
        throw new TypeError("No overload of `opBitand` accepts these arguments.");
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsB_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opPos()
    {
        try
        {
            const __ret = ffi.C.MR_C_pos_MR_CSharp_TestOpsB(this.rawPointer());
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opAdd_2(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_add_MR_CSharp_TestOpsB(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opNeg()
    {
        try
        {
            const __ret = ffi.C.MR_C_neg_MR_CSharp_TestOpsB(this.rawPointer());
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opSub_2(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_sub_MR_CSharp_TestOpsB(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opDeref()
    {
        try
        {
            const __ret = ffi.C.MR_C_deref_MR_CSharp_TestOpsB(this.rawPointer());
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opMul_2(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_mul_MR_CSharp_TestOpsB(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opDiv(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_div_MR_CSharp_TestOpsB(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opMod(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_mod_MR_CSharp_TestOpsB(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opXor(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_xor_MR_CSharp_TestOpsB(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opAddressof()
    {
        try
        {
            const __ret = ffi.C.MR_C_addressof_MR_CSharp_TestOpsB(this.rawPointer());
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opBitand_2(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_bitand_MR_CSharp_TestOpsB(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opBitor(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_bitor_MR_CSharp_TestOpsB(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opCompl()
    {
        try
        {
            const __ret = ffi.C.MR_C_compl_MR_CSharp_TestOpsB(this.rawPointer());
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opNot()
    {
        try
        {
            const __ret = ffi.C.MR_C_not_MR_CSharp_TestOpsB(this.rawPointer());
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    add_assign(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsB_add_assign(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    sub_assign(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsB_sub_assign(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    mul_assign(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsB_mul_assign(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    div_assign(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsB_div_assign(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    mod_assign(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsB_mod_assign(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    xor_assign(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsB_xor_assign(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    bitand_assign(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsB_bitand_assign(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    bitor_assign(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsB_bitor_assign(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opLshift(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_lshift_MR_CSharp_TestOpsB(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opRshift(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_rshift_MR_CSharp_TestOpsB(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    lshift_assign(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsB_lshift_assign(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    rshift_assign(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsB_rshift_assign(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opCompareThreeWay(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_compare_three_way_MR_CSharp_TestOpsB(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opAnd(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_and_MR_CSharp_TestOpsB(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opOr(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_or_MR_CSharp_TestOpsB(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opComma(_1)
    {
        try
        {
            const __ret = ffi.C.MR_C_comma_MR_CSharp_TestOpsB(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    arrow_star(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsB_arrow_star(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    arrow()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsB_arrow(this.rawPointer());
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    call(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsB_call(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    index(_1)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsB_index(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"));
            ffi.check();
            return __ret;
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::TestOpsC`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_TestOpsC extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_TestOpsC_Destroy(ptr);}

    static __ctor_0(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsC_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_TestOpsC))
            return L.MR_CSharp_TestOpsC.__ctor_0(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_TestOpsC.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_TestOpsC.__ctor(args), L.MR_CSharp_TestOpsC.__destroy, null);
    }

    opAdd(...args)
    {
        const __n = args.length;
        if (__n === 0)
            return this.opPos();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_TestOpsA))
            return this.opAdd_MR_CSharp_TestOpsA(args[0]);
        throw new TypeError("No overload of `opAdd` accepts these arguments.");
    }

    opSub(...args)
    {
        const __n = args.length;
        if (__n === 0)
            return this.opNeg();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_TestOpsA))
            return this.opSub_MR_CSharp_TestOpsA(args[0]);
        throw new TypeError("No overload of `opSub` accepts these arguments.");
    }

    opMul(...args)
    {
        const __n = args.length;
        if (__n === 0)
            return this.opDeref();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_TestOpsA))
            return this.opMul_MR_CSharp_TestOpsA(args[0]);
        throw new TypeError("No overload of `opMul` accepts these arguments.");
    }

    opBitand(...args)
    {
        const __n = args.length;
        if (__n === 0)
            return this.opAddressof();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_TestOpsA))
            return this.opBitand_MR_CSharp_TestOpsA(args[0]);
        throw new TypeError("No overload of `opBitand` accepts these arguments.");
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestOpsC_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_TestOpsC(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opPos()
    {
        try
        {
            ffi.C.MR_C_pos_MR_CSharp_TestOpsC(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opAdd_MR_CSharp_TestOpsA(_1)
    {
        try
        {
            ffi.C.MR_C_add_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opNeg()
    {
        try
        {
            ffi.C.MR_C_neg_MR_CSharp_TestOpsC(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opSub_MR_CSharp_TestOpsA(_1)
    {
        try
        {
            ffi.C.MR_C_sub_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opDeref()
    {
        try
        {
            ffi.C.MR_C_deref_MR_CSharp_TestOpsC(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opMul_MR_CSharp_TestOpsA(_1)
    {
        try
        {
            ffi.C.MR_C_mul_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opDiv(_1)
    {
        try
        {
            ffi.C.MR_C_div_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opMod(_1)
    {
        try
        {
            ffi.C.MR_C_mod_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opXor(_1)
    {
        try
        {
            ffi.C.MR_C_xor_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opAddressof()
    {
        try
        {
            ffi.C.MR_C_addressof_MR_CSharp_TestOpsC(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opBitand_MR_CSharp_TestOpsA(_1)
    {
        try
        {
            ffi.C.MR_C_bitand_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opBitor(_1)
    {
        try
        {
            ffi.C.MR_C_bitor_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opCompl()
    {
        try
        {
            ffi.C.MR_C_compl_MR_CSharp_TestOpsC(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opNot()
    {
        try
        {
            ffi.C.MR_C_not_MR_CSharp_TestOpsC(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assign(_1)
    {
        try
        {
            ffi.C.MR_CSharp_TestOpsC_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    add_assign(_1)
    {
        try
        {
            ffi.C.MR_CSharp_TestOpsC_add_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    sub_assign(_1)
    {
        try
        {
            ffi.C.MR_CSharp_TestOpsC_sub_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    mul_assign(_1)
    {
        try
        {
            ffi.C.MR_CSharp_TestOpsC_mul_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    div_assign(_1)
    {
        try
        {
            ffi.C.MR_CSharp_TestOpsC_div_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    mod_assign(_1)
    {
        try
        {
            ffi.C.MR_CSharp_TestOpsC_mod_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    xor_assign(_1)
    {
        try
        {
            ffi.C.MR_CSharp_TestOpsC_xor_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    bitand_assign(_1)
    {
        try
        {
            ffi.C.MR_CSharp_TestOpsC_bitand_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    bitor_assign(_1)
    {
        try
        {
            ffi.C.MR_CSharp_TestOpsC_bitor_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opLshift(_1)
    {
        try
        {
            ffi.C.MR_C_lshift_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opRshift(_1)
    {
        try
        {
            ffi.C.MR_C_rshift_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    lshift_assign(_1)
    {
        try
        {
            ffi.C.MR_CSharp_TestOpsC_lshift_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    rshift_assign(_1)
    {
        try
        {
            ffi.C.MR_CSharp_TestOpsC_rshift_assign(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opCompareThreeWay(_1)
    {
        try
        {
            ffi.C.MR_C_compare_three_way_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opAnd(_1)
    {
        try
        {
            ffi.C.MR_C_and_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opOr(_1)
    {
        try
        {
            ffi.C.MR_C_or_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    opComma(_1)
    {
        try
        {
            ffi.C.MR_C_comma_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    arrow_star(_1)
    {
        try
        {
            ffi.C.MR_CSharp_TestOpsC_arrow_star(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    arrow()
    {
        try
        {
            ffi.C.MR_CSharp_TestOpsC_arrow(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    call(_1)
    {
        try
        {
            ffi.C.MR_CSharp_TestOpsC_call(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    index(_1)
    {
        try
        {
            ffi.C.MR_CSharp_TestOpsC_index(this.rawPointer(), ffi.ptrNonNull(_1, "_1"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Test `std::function`.
 * Generated from class `MR::CSharp::TestStdFunction`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_TestStdFunction extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_TestStdFunction_Destroy(ptr);}

    get f1()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestStdFunction_Get_f1(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_function_int_from_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set f1(value)
    {
        let __fn_value = null;
        try
        {
            __fn_value = typeof value === "function" ? L.MR_C_std_function_int_from_std_string.of(value) : value;
            ffi.C.MR_CSharp_TestStdFunction_Set_f1(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(__fn_value, "value"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            if (__fn_value !== null && __fn_value !== value) __fn_value.delete();
        }
    }

    get f2()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestStdFunction_Get_f2(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_function_std_string_from_int_int(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set f2(value)
    {
        let __fn_value = null;
        try
        {
            __fn_value = typeof value === "function" ? L.MR_C_std_function_std_string_from_int_int.of(value) : value;
            ffi.C.MR_CSharp_TestStdFunction_Set_f2(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(__fn_value, "value"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            if (__fn_value !== null && __fn_value !== value) __fn_value.delete();
        }
    }

    get f3()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestStdFunction_Get_f3(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set f3(value)
    {
        let __fn_value = null;
        try
        {
            __fn_value = typeof value === "function" ? L.MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1.of(value) : value;
            ffi.C.MR_CSharp_TestStdFunction_Set_f3(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(__fn_value, "value"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            if (__fn_value !== null && __fn_value !== value) __fn_value.delete();
        }
    }

    get f4()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestStdFunction_Get_f4(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set f4(value)
    {
        let __fn_value = null;
        try
        {
            __fn_value = typeof value === "function" ? L.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC.of(value) : value;
            ffi.C.MR_CSharp_TestStdFunction_Set_f4(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(__fn_value, "value"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            if (__fn_value !== null && __fn_value !== value) __fn_value.delete();
        }
    }

    get f5()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestStdFunction_Get_f5(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set f5(value)
    {
        let __fn_value = null;
        try
        {
            __fn_value = typeof value === "function" ? L.MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref.of(value) : value;
            ffi.C.MR_CSharp_TestStdFunction_Set_f5(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(__fn_value, "value"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            if (__fn_value !== null && __fn_value !== value) __fn_value.delete();
        }
    }

    get f6()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestStdFunction_Get_f6(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_function_int_rvalue_ref(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set f6(value)
    {
        let __fn_value = null;
        try
        {
            __fn_value = typeof value === "function" ? L.MR_C_std_function_int_rvalue_ref.of(value) : value;
            ffi.C.MR_CSharp_TestStdFunction_Set_f6(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(__fn_value, "value"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            if (__fn_value !== null && __fn_value !== value) __fn_value.delete();
        }
    }

    get f7()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestStdFunction_Get_f7(this.rawPointer());
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_function_void(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    set f7(value)
    {
        let __fn_value = null;
        try
        {
            __fn_value = typeof value === "function" ? L.MR_C_std_function_void.of(value) : value;
            ffi.C.MR_CSharp_TestStdFunction_Set_f7(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(__fn_value, "value"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            if (__fn_value !== null && __fn_value !== value) __fn_value.delete();
        }
    }

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestStdFunction_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(f1, f2, f3, f4, f5, f6, f7)
    {
        let __fn_f1 = null;
        let __fn_f2 = null;
        let __fn_f3 = null;
        let __fn_f4 = null;
        let __fn_f5 = null;
        let __fn_f6 = null;
        let __fn_f7 = null;
        try
        {
            __fn_f1 = typeof f1 === "function" ? L.MR_C_std_function_int_from_std_string.of(f1) : f1;
            __fn_f2 = typeof f2 === "function" ? L.MR_C_std_function_std_string_from_int_int.of(f2) : f2;
            __fn_f3 = typeof f3 === "function" ? L.MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1.of(f3) : f3;
            __fn_f4 = typeof f4 === "function" ? L.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC.of(f4) : f4;
            __fn_f5 = typeof f5 === "function" ? L.MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref.of(f5) : f5;
            __fn_f6 = typeof f6 === "function" ? L.MR_C_std_function_int_rvalue_ref.of(f6) : f6;
            __fn_f7 = typeof f7 === "function" ? L.MR_C_std_function_void.of(f7) : f7;
            const __ret = ffi.C.MR_CSharp_TestStdFunction_ConstructFrom(ffi.PASS_BY_COPY, ffi.ptrNonNull(__fn_f1, "f1"), ffi.PASS_BY_COPY, ffi.ptrNonNull(__fn_f2, "f2"), ffi.PASS_BY_COPY, ffi.ptrNonNull(__fn_f3, "f3"), ffi.PASS_BY_COPY, ffi.ptrNonNull(__fn_f4, "f4"), ffi.PASS_BY_COPY, ffi.ptrNonNull(__fn_f5, "f5"), ffi.PASS_BY_COPY, ffi.ptrNonNull(__fn_f6, "f6"), ffi.PASS_BY_COPY, ffi.ptrNonNull(__fn_f7, "f7"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            if (__fn_f1 !== null && __fn_f1 !== f1) __fn_f1.delete();
            if (__fn_f2 !== null && __fn_f2 !== f2) __fn_f2.delete();
            if (__fn_f3 !== null && __fn_f3 !== f3) __fn_f3.delete();
            if (__fn_f4 !== null && __fn_f4 !== f4) __fn_f4.delete();
            if (__fn_f5 !== null && __fn_f5 !== f5) __fn_f5.delete();
            if (__fn_f6 !== null && __fn_f6 !== f6) __fn_f6.delete();
            if (__fn_f7 !== null && __fn_f7 !== f7) __fn_f7.delete();
        }
    }

    static __ctor_2(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestStdFunction_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_TestStdFunction.__ctor_0();
        if (__n === 7 && (args[0] instanceof L.MR_C_std_function_int_from_std_string || typeof args[0] === "function") && (args[1] instanceof L.MR_C_std_function_std_string_from_int_int || typeof args[1] === "function") && (args[2] instanceof L.MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 || typeof args[2] === "function") && (args[3] instanceof L.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC || typeof args[3] === "function") && (args[4] instanceof L.MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref || typeof args[4] === "function") && (args[5] instanceof L.MR_C_std_function_int_rvalue_ref || typeof args[5] === "function") && (args[6] instanceof L.MR_C_std_function_void || typeof args[6] === "function"))
            return L.MR_CSharp_TestStdFunction.__ctor_1(args[0], args[1], args[2], args[3], args[4], args[5], args[6]);
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_TestStdFunction))
            return L.MR_CSharp_TestStdFunction.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_TestStdFunction.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_TestStdFunction.__ctor(args), L.MR_CSharp_TestStdFunction.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TestStdFunction_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_TestStdFunction(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    Call()
    {
        try
        {
            ffi.C.MR_CSharp_TestStdFunction_Call(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::Trivial`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_Trivial extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_Trivial_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_Trivial_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_Trivial_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_Trivial.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_Trivial))
            return L.MR_CSharp_Trivial.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_Trivial.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_Trivial.__ctor(args), L.MR_CSharp_Trivial.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_Trivial_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_Trivial(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::CSharp::TrivialDerived`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_CSharp_TrivialDerived extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_CSharp_TrivialDerived_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TrivialDerived_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TrivialDerived_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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
        if (__n === 0)
            return L.MR_CSharp_TrivialDerived.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_CSharp_TrivialDerived))
            return L.MR_CSharp_TrivialDerived.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_CSharp_TrivialDerived.__destroy : null, args[3]);
            return;
        }
        super(L.MR_CSharp_TrivialDerived.__ctor(args), L.MR_CSharp_TrivialDerived.__destroy, null);
    }

    assignFromAnother(_other)
    {
        try
        {
            const __ret = ffi.C.MR_CSharp_TrivialDerived_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_TrivialDerived(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

export function MR_CSharp_foo()
{
    try
    {
        ffi.C.MR_CSharp_foo();
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_int(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr_b = b == null ? 0 : ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = b;});
        const __ret = ffi.C.MR_CSharp_test_int(a, __ptr_b);
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_bool(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr_b = b == null ? 0 : ffi.stackScalar(1, (p) => {ffi.M.HEAPU8[p] = (b ? 1 : 0) ? 1 : 0;});
        const __ret = ffi.C.MR_CSharp_test_bool((a ? 1 : 0), __ptr_b);
        ffi.check();
        return (__ret !== 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_bool_ref(a, b)
{
    try
    {
        ffi.C.MR_CSharp_test_bool_ref(a, b);
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_bool_ref2(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_bool_ref2(a, b);
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_get_bool_ref()
{
    try
    {
        const __ret = ffi.C.MR_CSharp_get_bool_ref();
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_print_bool_ref()
{
    try
    {
        ffi.C.MR_CSharp_print_bool_ref();
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_bool_cref(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr__1 = ffi.stackScalar(1, (p) => {ffi.M.HEAPU8[p] = (_1 ? 1 : 0) ? 1 : 0;});
        const __ptr__2 = _2 == null ? 0 : ffi.stackScalar(1, (p) => {ffi.M.HEAPU8[p] = (_2 ? 1 : 0) ? 1 : 0;});
        const __ret = ffi.C.MR_CSharp_test_bool_cref(__ptr__1, __ptr__2);
        ffi.check();
        return (ffi.M.HEAPU8[(__ret >>> 0)] !== 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_int_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_int_ref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_int_cref(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr_a = ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = a;});
        const __ptr_b = b == null ? 0 : ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = b;});
        const __ret = ffi.C.MR_CSharp_test_int_cref(__ptr_a, __ptr_b);
        ffi.check();
        return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_int_rref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_int_rref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_int_crref(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr_a = ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = a;});
        const __ptr_b = b == null ? 0 : ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = b;});
        const __ret = ffi.C.MR_CSharp_test_int_crref(__ptr_a, __ptr_b);
        ffi.check();
        return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_int_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_int_ptr(a, b, c);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_int_cptr(a, b, c)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr_a = a == null ? 0 : ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = a;});
        const __ptr_b = b == null ? 0 : ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = b;});
        const __ret = ffi.C.MR_CSharp_test_int_cptr(__ptr_a, __ptr_b, c);
        ffi.check();
        return ((__ret >>> 0) === 0 ? null : ffi.M.HEAP32[((__ret >>> 0)) >>> 2]);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_ushort(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr_b = b == null ? 0 : ffi.stackScalar(2, (p) => {ffi.M.HEAPU16[(p) >>> 1] = (b & 65535);});
        const __ret = ffi.C.MR_CSharp_test_ushort((a & 65535), __ptr_b);
        ffi.check();
        return (__ret & 65535);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_ushort_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_ushort_ref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_ushort_cref(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr_a = ffi.stackScalar(2, (p) => {ffi.M.HEAPU16[(p) >>> 1] = (a & 65535);});
        const __ptr_b = b == null ? 0 : ffi.stackScalar(2, (p) => {ffi.M.HEAPU16[(p) >>> 1] = (b & 65535);});
        const __ret = ffi.C.MR_CSharp_test_ushort_cref(__ptr_a, __ptr_b);
        ffi.check();
        return ffi.M.HEAPU16[((__ret >>> 0)) >>> 1];
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_ushort_rref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_ushort_rref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_ushort_crref(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr_a = ffi.stackScalar(2, (p) => {ffi.M.HEAPU16[(p) >>> 1] = (a & 65535);});
        const __ptr_b = b == null ? 0 : ffi.stackScalar(2, (p) => {ffi.M.HEAPU16[(p) >>> 1] = (b & 65535);});
        const __ret = ffi.C.MR_CSharp_test_ushort_crref(__ptr_a, __ptr_b);
        ffi.check();
        return ffi.M.HEAPU16[((__ret >>> 0)) >>> 1];
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_ushort_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_ushort_ptr(a, b, c);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_ushort_cptr(a, b, c)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr_a = a == null ? 0 : ffi.stackScalar(2, (p) => {ffi.M.HEAPU16[(p) >>> 1] = (a & 65535);});
        const __ptr_b = b == null ? 0 : ffi.stackScalar(2, (p) => {ffi.M.HEAPU16[(p) >>> 1] = (b & 65535);});
        const __ret = ffi.C.MR_CSharp_test_ushort_cptr(__ptr_a, __ptr_b, c);
        ffi.check();
        return ((__ret >>> 0) === 0 ? null : ffi.M.HEAPU16[((__ret >>> 0)) >>> 1]);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_constness_int(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr__2 = _2 == null ? 0 : ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = _2;});
        const __ret = ffi.C.MR_CSharp_test_constness_int(_1, __ptr__2);
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_constness_str(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __str__1 = ffi.utf8(ffi.nonNullString(_1, "_1"));
        const __end__1 = ffi.utf8End();
        const __str__2 = _2 == null ? 0 : ffi.utf8(_2);
        const __end__2 = ffi.utf8End();
        const __ret = ffi.C.MR_CSharp_test_constness_str(__str__1, __end__1, __str__2, __end__2);
        ffi.check();
        return ffi.takeString((__ret >>> 0));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_keyword_in_param_name(params)
{
    try
    {
        ffi.C.MR_CSharp_test_keyword_in_param_name(params);
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_enum_MR_CSharp_E1(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr_b = b == null ? 0 : ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = b;});
        const __ret = ffi.C.MR_CSharp_test_enum_MR_CSharp_E1(a, __ptr_b);
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_enum_ref_MR_CSharp_E1(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_enum_ref_MR_CSharp_E1(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_enum_cref_MR_CSharp_E1(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr_a = ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = a;});
        const __ptr_b = b == null ? 0 : ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = b;});
        const __ret = ffi.C.MR_CSharp_test_enum_cref_MR_CSharp_E1(__ptr_a, __ptr_b);
        ffi.check();
        return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_enum_rref_MR_CSharp_E1(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_enum_rref_MR_CSharp_E1(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_enum_crref_MR_CSharp_E1(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr_a = ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = a;});
        const __ptr_b = b == null ? 0 : ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = b;});
        const __ret = ffi.C.MR_CSharp_test_enum_crref_MR_CSharp_E1(__ptr_a, __ptr_b);
        ffi.check();
        return ffi.M.HEAP32[((__ret >>> 0)) >>> 2];
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_enum_ptr_MR_CSharp_E1_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_enum_ptr_MR_CSharp_E1_ptr(a, b, c);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_enum_cptr_const_MR_CSharp_E1_ptr(a, b, c)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr_a = a == null ? 0 : ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = a;});
        const __ptr_b = b == null ? 0 : ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = b;});
        const __ret = ffi.C.MR_CSharp_test_enum_cptr_const_MR_CSharp_E1_ptr(__ptr_a, __ptr_b, c);
        ffi.check();
        return ((__ret >>> 0) === 0 ? null : ffi.M.HEAP32[((__ret >>> 0)) >>> 2]);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_enum_MR_CSharp_E2(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr_b = b == null ? 0 : ffi.stackScalar(1, (p) => {ffi.M.HEAPU8[p] = (b ? 1 : 0) ? 1 : 0;});
        const __ret = ffi.C.MR_CSharp_test_enum_MR_CSharp_E2((a ? 1 : 0), __ptr_b);
        ffi.check();
        return (__ret !== 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_enum_ref_MR_CSharp_E2(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_enum_ref_MR_CSharp_E2(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_enum_cref_MR_CSharp_E2(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr_a = ffi.stackScalar(1, (p) => {ffi.M.HEAPU8[p] = (a ? 1 : 0) ? 1 : 0;});
        const __ptr_b = b == null ? 0 : ffi.stackScalar(1, (p) => {ffi.M.HEAPU8[p] = (b ? 1 : 0) ? 1 : 0;});
        const __ret = ffi.C.MR_CSharp_test_enum_cref_MR_CSharp_E2(__ptr_a, __ptr_b);
        ffi.check();
        return (ffi.M.HEAPU8[(__ret >>> 0)] !== 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_enum_rref_MR_CSharp_E2(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_enum_rref_MR_CSharp_E2(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_enum_crref_MR_CSharp_E2(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr_a = ffi.stackScalar(1, (p) => {ffi.M.HEAPU8[p] = (a ? 1 : 0) ? 1 : 0;});
        const __ptr_b = b == null ? 0 : ffi.stackScalar(1, (p) => {ffi.M.HEAPU8[p] = (b ? 1 : 0) ? 1 : 0;});
        const __ret = ffi.C.MR_CSharp_test_enum_crref_MR_CSharp_E2(__ptr_a, __ptr_b);
        ffi.check();
        return (ffi.M.HEAPU8[(__ret >>> 0)] !== 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_enum_ptr_MR_CSharp_E2_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_enum_ptr_MR_CSharp_E2_ptr(a, b, c);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_enum_cptr_const_MR_CSharp_E2_ptr(a, b, c)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr_a = a == null ? 0 : ffi.stackScalar(1, (p) => {ffi.M.HEAPU8[p] = (a ? 1 : 0) ? 1 : 0;});
        const __ptr_b = b == null ? 0 : ffi.stackScalar(1, (p) => {ffi.M.HEAPU8[p] = (b ? 1 : 0) ? 1 : 0;});
        const __ret = ffi.C.MR_CSharp_test_enum_cptr_const_MR_CSharp_E2_ptr(__ptr_a, __ptr_b, c);
        ffi.check();
        return ((__ret >>> 0) === 0 ? null : (ffi.M.HEAPU8[(__ret >>> 0)] !== 0));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_class_trivial(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_class_trivial(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        return new L.MR_CSharp_Trivial(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_class_trivial_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_class_trivial_ref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_CSharp_Trivial(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_class_trivial_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_class_trivial_cref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_CSharp_Trivial(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_class_trivial_rref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_class_trivial_rref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_CSharp_Trivial(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_class_trivial_crref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_class_trivial_crref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_CSharp_Trivial(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_class_trivial_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_class_trivial_ptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_Trivial(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_class_trivial_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_class_trivial_cptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_Trivial(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_class_nontrivial(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_class_nontrivial(ffi.PASS_BY_COPY, ffi.ptrNonNull(a, "a"), (b == null ? ffi.PASS_BY_DEFAULT_ARGUMENT : ffi.PASS_BY_COPY), ffi.ptr(b));
        ffi.check();
        return new L.MR_CSharp_NonTrivial(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_class_nontrivial_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_class_nontrivial_ref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_CSharp_NonTrivial(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_class_nontrivial_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_class_nontrivial_cref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_CSharp_NonTrivial(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_class_nontrivial_rref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_class_nontrivial_rref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_CSharp_NonTrivial(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_class_nontrivial_crref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_class_nontrivial_crref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_CSharp_NonTrivial(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_class_nontrivial_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_class_nontrivial_ptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_NonTrivial(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_class_nontrivial_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_class_nontrivial_cptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_NonTrivial(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_void_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_void_ptr(a, b, c);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_void_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_void_cptr(a, b, c);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_mark_se_as_shared()
{
    try
    {
        const __ret = ffi.C.MR_CSharp_mark_se_as_shared();
        ffi.check();
        return new L.MR_C_std_shared_ptr_MR_CSharp_SE(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_shptr(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_shptr(ffi.PASS_BY_COPY, ffi.ptrNonNull(a, "a"), (b == null ? ffi.PASS_BY_DEFAULT_ARGUMENT : ffi.PASS_BY_COPY), ffi.ptr(b));
        ffi.check();
        return new L.MR_C_std_shared_ptr_MR_CSharp_SA(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_shptr_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_shptr_ref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_shared_ptr_MR_CSharp_SA(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_shptr_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_shptr_cref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_shared_ptr_MR_CSharp_SA(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_shptr_rref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_shptr_rref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_shared_ptr_MR_CSharp_SA(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_shptr_crref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_shptr_crref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_shared_ptr_MR_CSharp_SA(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_shptr_ptr(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_shptr_ptr(ffi.ptr(a), b);
        ffi.check();
        const __owner = a;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_shared_ptr_MR_CSharp_SA(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_shptr_cptr(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_shptr_cptr(ffi.ptr(a), b);
        ffi.check();
        const __owner = a;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_shared_ptr_MR_CSharp_SA(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_shcptr(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_shcptr(ffi.PASS_BY_COPY, ffi.ptrNonNull(a, "a"), (b == null ? ffi.PASS_BY_DEFAULT_ARGUMENT : ffi.PASS_BY_COPY), ffi.ptr(b));
        ffi.check();
        return new L.MR_C_std_shared_ptr_const_MR_CSharp_SA(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_shcptr_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_shcptr_ref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_shared_ptr_const_MR_CSharp_SA(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_shcptr_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_shcptr_cref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_shared_ptr_const_MR_CSharp_SA(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_shcptr_rref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_shcptr_rref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_shared_ptr_const_MR_CSharp_SA(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_shcptr_crref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_shcptr_crref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_shared_ptr_const_MR_CSharp_SA(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_shcptr_ptr(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_shcptr_ptr(ffi.ptr(a), b);
        ffi.check();
        const __owner = a;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_shared_ptr_const_MR_CSharp_SA(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_shcptr_cptr(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_shcptr_cptr(ffi.ptr(a), b);
        ffi.check();
        const __owner = a;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_shared_ptr_const_MR_CSharp_SA(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_mark_sg_as_shared()
{
    try
    {
        const __ret = ffi.C.MR_CSharp_mark_sg_as_shared();
        ffi.check();
        return new L.MR_C_std_shared_ptr_MR_CSharp_SG(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_string(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __str_a = ffi.utf8(ffi.nonNullString(a, "a"));
        const __end_a = ffi.utf8End();
        const __str_b = b == null ? 0 : ffi.utf8(b);
        const __end_b = ffi.utf8End();
        const __ret = ffi.C.MR_CSharp_test_string(__str_a, __end_a, __str_b, __end_b);
        ffi.check();
        return ffi.takeString((__ret >>> 0));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_string_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_string_ref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_string_cref(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __str_a = ffi.utf8(ffi.nonNullString(a, "a"));
        const __end_a = ffi.utf8End();
        const __str_b = b == null ? 0 : ffi.utf8(b);
        const __end_b = ffi.utf8End();
        const __ret = ffi.C.MR_CSharp_test_string_cref(__str_a, __end_a, __str_b, __end_b);
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_string_rref(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __str_a = ffi.utf8(ffi.nonNullString(a, "a"));
        const __end_a = ffi.utf8End();
        const __str_b = b == null ? 0 : ffi.utf8(b);
        const __end_b = ffi.utf8End();
        const __ret = ffi.C.MR_CSharp_test_string_rref(__str_a, __end_a, __str_b, __end_b);
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_string_crref(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __str_a = ffi.utf8(ffi.nonNullString(a, "a"));
        const __end_a = ffi.utf8End();
        const __str_b = b == null ? 0 : ffi.utf8(b);
        const __end_b = ffi.utf8End();
        const __ret = ffi.C.MR_CSharp_test_string_crref(__str_a, __end_a, __str_b, __end_b);
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_string_ptr(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_string_ptr(ffi.ptr(a), b);
        ffi.check();
        const __owner = a;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_string_cptr(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_string_cptr(ffi.ptr(a), b);
        ffi.check();
        const __owner = a;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_stringview(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __str_a = ffi.utf8(ffi.nonNullString(a, "a"));
        const __end_a = ffi.utf8End();
        const __str_b = b == null ? 0 : ffi.utf8(b);
        const __end_b = ffi.utf8End();
        const __ret = ffi.C.MR_CSharp_test_stringview(__str_a, __end_a, __str_b, __end_b);
        ffi.check();
        return new L.MR_C_std_string_view(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_stringview_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_stringview_ref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_string_view(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_stringview_cref(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __str_a = ffi.utf8(ffi.nonNullString(a, "a"));
        const __end_a = ffi.utf8End();
        const __str_b = b == null ? 0 : ffi.utf8(b);
        const __end_b = ffi.utf8End();
        const __ret = ffi.C.MR_CSharp_test_stringview_cref(__str_a, __end_a, __str_b, __end_b);
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_string_view(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_stringview_rref(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __str_a = ffi.utf8(ffi.nonNullString(a, "a"));
        const __end_a = ffi.utf8End();
        const __str_b = b == null ? 0 : ffi.utf8(b);
        const __end_b = ffi.utf8End();
        const __ret = ffi.C.MR_CSharp_test_stringview_rref(__str_a, __end_a, __str_b, __end_b);
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_string_view(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_stringview_crref(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __str_a = ffi.utf8(ffi.nonNullString(a, "a"));
        const __end_a = ffi.utf8End();
        const __str_b = b == null ? 0 : ffi.utf8(b);
        const __end_b = ffi.utf8End();
        const __ret = ffi.C.MR_CSharp_test_stringview_crref(__str_a, __end_a, __str_b, __end_b);
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_string_view(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_stringview_ptr(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_stringview_ptr(ffi.ptr(a), b);
        ffi.check();
        const __owner = a;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_string_view(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_stringview_cptr(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_stringview_cptr(ffi.ptr(a), b);
        ffi.check();
        const __owner = a;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_string_view(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_fspath(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __str_a = ffi.utf8(ffi.nonNullString(a, "a"));
        const __end_a = ffi.utf8End();
        const __str_b = b == null ? 0 : ffi.utf8(b);
        const __end_b = ffi.utf8End();
        const __ret = ffi.C.MR_CSharp_test_fspath(__str_a, __end_a, __str_b, __end_b);
        ffi.check();
        return new L.MR_C_std_filesystem_path(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_fspath_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_fspath_ref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_filesystem_path(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_fspath_cref(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __str_a = ffi.utf8(ffi.nonNullString(a, "a"));
        const __end_a = ffi.utf8End();
        const __str_b = b == null ? 0 : ffi.utf8(b);
        const __end_b = ffi.utf8End();
        const __ret = ffi.C.MR_CSharp_test_fspath_cref(__str_a, __end_a, __str_b, __end_b);
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_filesystem_path(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_fspath_rref(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __str_a = ffi.utf8(ffi.nonNullString(a, "a"));
        const __end_a = ffi.utf8End();
        const __str_b = b == null ? 0 : ffi.utf8(b);
        const __end_b = ffi.utf8End();
        const __ret = ffi.C.MR_CSharp_test_fspath_rref(__str_a, __end_a, __str_b, __end_b);
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_filesystem_path(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_fspath_crref(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __str_a = ffi.utf8(ffi.nonNullString(a, "a"));
        const __end_a = ffi.utf8End();
        const __str_b = b == null ? 0 : ffi.utf8(b);
        const __end_b = ffi.utf8End();
        const __ret = ffi.C.MR_CSharp_test_fspath_crref(__str_a, __end_a, __str_b, __end_b);
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_filesystem_path(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_fspath_ptr(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_fspath_ptr(ffi.ptr(a), b);
        ffi.check();
        const __owner = a;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_filesystem_path(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_fspath_cptr(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_fspath_cptr(ffi.ptr(a), b);
        ffi.check();
        const __owner = a;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_filesystem_path(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_incr_MR_CSharp_IncrDecrI(_1)
{
    try
    {
        const __ret = ffi.C.MR_C_incr_MR_CSharp_IncrDecrI(ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_post_incr_MR_CSharp_IncrDecrI(_1)
{
    try
    {
        const __ret = ffi.C.MR_C_post_incr_MR_CSharp_IncrDecrI(ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_decr_MR_CSharp_IncrDecrI(_1)
{
    try
    {
        const __ret = ffi.C.MR_C_decr_MR_CSharp_IncrDecrI(ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_post_decr_MR_CSharp_IncrDecrI(_1)
{
    try
    {
        const __ret = ffi.C.MR_C_post_decr_MR_CSharp_IncrDecrI(ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_add_MR_CSharp_StaticOpsLhsA_int(_1, _2)
{
    try
    {
        const __ret = ffi.C.MR_C_add_MR_CSharp_StaticOpsLhsA_int(ffi.ptrNonNull(_1, "_1"), _2);
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_add_MR_CSharp_StaticOpsLhsB_int(_1, _2)
{
    try
    {
        ffi.C.MR_C_add_MR_CSharp_StaticOpsLhsB_int(ffi.ptrNonNull(_1, "_1"), _2);
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_add_MR_CSharp_StaticOpsLhsC_int(_1, _2)
{
    try
    {
        const __ret = ffi.C.MR_C_add_MR_CSharp_StaticOpsLhsC_int(ffi.PASS_BY_MOVE_AND_DESTROY, ffi.nonNull(_1, "_1").release(), _2);
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_add_MR_CSharp_StaticOpsLhsD_int(_1, _2)
{
    try
    {
        const __ret = ffi.C.MR_C_add_MR_CSharp_StaticOpsLhsD_int(ffi.ptrNonNull(_1, "_1"), _2);
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_add_MR_CSharp_StaticOpsLhsE_int(_1, _2)
{
    try
    {
        const __ret = ffi.C.MR_C_add_MR_CSharp_StaticOpsLhsE_int(ffi.ptrNonNull(_1, "_1"), _2);
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_add_MR_CSharp_StaticOpsLhsF_int(_1, _2)
{
    try
    {
        const __ret = ffi.C.MR_C_add_MR_CSharp_StaticOpsLhsF_int(ffi.ptrNonNull(_1, "_1"), _2);
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_add_MR_CSharp_StaticOpsLhsG_int(_1, _2)
{
    try
    {
        const __ret = ffi.C.MR_C_add_MR_CSharp_StaticOpsLhsG_int(ffi.ptrNonNull(_1, "_1"), _2);
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_add_MR_CSharp_StaticOpsLhsH_int(_1, _2)
{
    try
    {
        const __ret = ffi.C.MR_C_add_MR_CSharp_StaticOpsLhsH_int(ffi.ptrNonNull(_1, "_1"), _2);
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_add_int_MR_CSharp_StaticOpsRhsA(_1, _2)
{
    try
    {
        const __ret = ffi.C.MR_C_add_int_MR_CSharp_StaticOpsRhsA(_1, ffi.ptrNonNull(_2, "_2"));
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_add_int_MR_CSharp_StaticOpsRhsB(_1, _2)
{
    try
    {
        ffi.C.MR_C_add_int_MR_CSharp_StaticOpsRhsB(_1, ffi.ptrNonNull(_2, "_2"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_add_int_MR_CSharp_StaticOpsRhsC(_1, _2)
{
    try
    {
        const __ret = ffi.C.MR_C_add_int_MR_CSharp_StaticOpsRhsC(_1, ffi.PASS_BY_MOVE_AND_DESTROY, ffi.nonNull(_2, "_2").release());
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_add_int_MR_CSharp_StaticOpsRhsD(_1, _2)
{
    try
    {
        const __ret = ffi.C.MR_C_add_int_MR_CSharp_StaticOpsRhsD(_1, ffi.ptrNonNull(_2, "_2"));
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_add_int_MR_CSharp_StaticOpsRhsE(_1, _2)
{
    try
    {
        const __ret = ffi.C.MR_C_add_int_MR_CSharp_StaticOpsRhsE(_1, ffi.ptrNonNull(_2, "_2"));
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_add_int_MR_CSharp_StaticOpsRhsF(_1, _2)
{
    try
    {
        const __ret = ffi.C.MR_C_add_int_MR_CSharp_StaticOpsRhsF(_1, ffi.ptrNonNull(_2, "_2"));
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_add_int_MR_CSharp_StaticOpsRhsG(_1, _2)
{
    try
    {
        const __ret = ffi.C.MR_C_add_int_MR_CSharp_StaticOpsRhsG(_1, ffi.ptrNonNull(_2, "_2"));
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_add_int_MR_CSharp_StaticOpsRhsH(_1, _2)
{
    try
    {
        const __ret = ffi.C.MR_C_add_int_MR_CSharp_StaticOpsRhsH(_1, ffi.ptrNonNull(_2, "_2"));
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_add_MR_CSharp_StaticOpsEnum_int(_1, _2)
{
    try
    {
        const __ret = ffi.C.MR_C_add_MR_CSharp_StaticOpsEnum_int(_1, _2);
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_add_MR_CSharp_StaticOpsMixedLhs_MR_CSharp_StaticOpsMixedRhs(_1, _2)
{
    try
    {
        const __ret = ffi.C.MR_C_add_MR_CSharp_StaticOpsMixedLhs_MR_CSharp_StaticOpsMixedRhs(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_add_MR_CSharp_NonTrivialClassOps_float(_1, _2)
{
    try
    {
        const __ret = ffi.C.MR_C_add_MR_CSharp_NonTrivialClassOps_float(ffi.PASS_BY_COPY, ffi.ptrNonNull(_1, "_1"), _2);
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_add_float_MR_CSharp_NonTrivialClassOps(_1, _2)
{
    try
    {
        const __ret = ffi.C.MR_C_add_float_MR_CSharp_NonTrivialClassOps(_1, ffi.PASS_BY_COPY, ffi.ptrNonNull(_2, "_2"));
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_add_MR_CSharp_NonCopyableClassByValueOps_int(_1, _2)
{
    try
    {
        const __ret = ffi.C.MR_C_add_MR_CSharp_NonCopyableClassByValueOps_int(ffi.ptrNonNull(_1, "_1"), _2);
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_add_int_MR_CSharp_NonCopyableClassByValueOps(_1, _2)
{
    try
    {
        const __ret = ffi.C.MR_C_add_int_MR_CSharp_NonCopyableClassByValueOps(_1, ffi.ptrNonNull(_2, "_2"));
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_class_convtrivial(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_class_convtrivial(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        return new L.MR_CSharp_ConvCtorTrivial(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_class_convtrivial_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_class_convtrivial_ref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_CSharp_ConvCtorTrivial(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_class_convtrivial_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_class_convtrivial_cref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_CSharp_ConvCtorTrivial(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_class_convtrivial_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_class_convtrivial_ptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_ConvCtorTrivial(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_class_convtrivial_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_class_convtrivial_cptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_ConvCtorTrivial(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_class_convnontrivial(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_class_convnontrivial(ffi.PASS_BY_COPY, ffi.ptrNonNull(a, "a"), (b == null ? ffi.PASS_BY_DEFAULT_ARGUMENT : ffi.PASS_BY_COPY), ffi.ptr(b));
        ffi.check();
        return new L.MR_CSharp_ConvCtorNonTrivial(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_class_convnontrivial_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_class_convnontrivial_ref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_CSharp_ConvCtorNonTrivial(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_class_convnontrivial_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_class_convnontrivial_cref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_CSharp_ConvCtorNonTrivial(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_class_convnontrivial_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_class_convnontrivial_ptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_ConvCtorNonTrivial(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_class_convnontrivial_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_class_convnontrivial_cptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_ConvCtorNonTrivial(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_sub_int_MR_CSharp_ExposedLayout(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __copy__2 = ffi.stackCopy(ffi.ptrNonNull(_2, "_2"), 56);
        const __ret = ffi.C.MR_C_sub_int_MR_CSharp_ExposedLayout(_1, __copy__2);
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_C_div_int_MR_CSharp_ExposedLayout(_1, _2)
{
    try
    {
        const __ret = ffi.C.MR_C_div_int_MR_CSharp_ExposedLayout(_1, ffi.ptrNonNull(_2, "_2"));
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_mod_int_MR_CSharp_ExposedLayout(_1, _2)
{
    try
    {
        const __ret = ffi.C.MR_C_mod_int_MR_CSharp_ExposedLayout(_1, ffi.ptrNonNull(_2, "_2"));
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_decr_MR_CSharp_ExposedLayout(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __copy__1 = ffi.stackCopy(ffi.ptrNonNull(_1, "_1"), 56);
        ffi.C.MR_C_decr_MR_CSharp_ExposedLayout(__copy__1);
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_exposed_MR_CSharp_ExposedLayout(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __copy_a = ffi.stackCopy(ffi.ptrNonNull(a, "a"), 56);
        const __sret = ffi.malloc(56);
        ffi.C.MR_CSharp_test_exposed_MR_CSharp_ExposedLayout(__sret, __copy_a, ffi.ptr(b));
        ffi.check();
        return new L.MR_CSharp_ExposedLayout(ffi.RAW, __sret, true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_exposed_ref_MR_CSharp_ExposedLayout(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_exposed_ref_MR_CSharp_ExposedLayout(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_CSharp_ExposedLayout(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_exposed_cref_MR_CSharp_ExposedLayout(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_exposed_cref_MR_CSharp_ExposedLayout(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_CSharp_ExposedLayout(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_exposed_rref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_exposed_rref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_CSharp_ExposedLayout(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_exposed_crref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_exposed_crref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_CSharp_ExposedLayout(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_exposed_ptr_MR_CSharp_ExposedLayout_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_exposed_ptr_MR_CSharp_ExposedLayout_ptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_ExposedLayout(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_exposed_cptr_const_MR_CSharp_ExposedLayout_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_exposed_cptr_const_MR_CSharp_ExposedLayout_ptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_ExposedLayout(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_exposed_vec()
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_exposed_vec();
        ffi.check();
        return new L.MR_C_std_vector_MR_CSharp_ExposedLayout(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_asave_ref_in_exposed_layout(ref)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_asave_ref_in_exposed_layout(ffi.ptrNonNull(ref, "ref"));
        ffi.check();
        const __owner = ref;
        return new L.MR_CSharp_NonTrivial(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_sub_int_MR_CSharp_ExposedLayoutSh(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        const __copy__2 = ffi.stackCopy(ffi.ptrNonNull(_2, "_2"), 56);
        const __ret = ffi.C.MR_C_sub_int_MR_CSharp_ExposedLayoutSh(_1, __copy__2);
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_C_div_int_MR_CSharp_ExposedLayoutSh(_1, _2)
{
    try
    {
        const __ret = ffi.C.MR_C_div_int_MR_CSharp_ExposedLayoutSh(_1, ffi.ptrNonNull(_2, "_2"));
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_mod_int_MR_CSharp_ExposedLayoutSh(_1, _2)
{
    try
    {
        const __ret = ffi.C.MR_C_mod_int_MR_CSharp_ExposedLayoutSh(_1, ffi.ptrNonNull(_2, "_2"));
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_decr_MR_CSharp_ExposedLayoutSh(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __copy__1 = ffi.stackCopy(ffi.ptrNonNull(_1, "_1"), 56);
        ffi.C.MR_C_decr_MR_CSharp_ExposedLayoutSh(__copy__1);
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_make_exposed_sh()
{
    try
    {
        const __ret = ffi.C.MR_CSharp_make_exposed_sh();
        ffi.check();
        return new L.MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_exposed_MR_CSharp_ExposedLayoutSh(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __copy_a = ffi.stackCopy(ffi.ptrNonNull(a, "a"), 56);
        const __sret = ffi.malloc(56);
        ffi.C.MR_CSharp_test_exposed_MR_CSharp_ExposedLayoutSh(__sret, __copy_a, ffi.ptr(b));
        ffi.check();
        return new L.MR_CSharp_ExposedLayoutSh(ffi.RAW, __sret, true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_exposed_ref_MR_CSharp_ExposedLayoutSh(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_exposed_ref_MR_CSharp_ExposedLayoutSh(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_CSharp_ExposedLayoutSh(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_exposed_cref_MR_CSharp_ExposedLayoutSh(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_exposed_cref_MR_CSharp_ExposedLayoutSh(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_CSharp_ExposedLayoutSh(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_exposed_ptr_MR_CSharp_ExposedLayoutSh_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_exposed_ptr_MR_CSharp_ExposedLayoutSh_ptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_ExposedLayoutSh(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_exposed_cptr_const_MR_CSharp_ExposedLayoutSh_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_exposed_cptr_const_MR_CSharp_ExposedLayoutSh_ptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_ExposedLayoutSh(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_equal_MR_CSharp_ExposedLayoutB(_1, _2)
{
    try
    {
        const __ret = ffi.C.MR_C_equal_MR_CSharp_ExposedLayoutB(ffi.ptrNonNull(_1, "_1"), ffi.ptrNonNull(_2, "_2"));
        ffi.check();
        return (__ret !== 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_optint(a, b, c)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr_a = ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = a;});
        const __ret = ffi.C.MR_CSharp_test_optint(__ptr_a, ffi.ptr(b), ffi.ptr(c));
        ffi.check();
        return new L.MR_C_std_optional_int(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_optint_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_optint_ref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_optional_int(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_optint_cref(a, b)
{
    const __sp = ffi.stackSave();
    try
    {
        const __ptr_a = ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = a;});
        const __ret = ffi.C.MR_CSharp_test_optint_cref(__ptr_a, ffi.ptr(b));
        ffi.check();
        const __owner = b;
        return new L.MR_C_std_optional_int(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_CSharp_test_optint_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_optint_ptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_optional_int(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_optint_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_optint_cptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_optional_int(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_optstr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_optstr(a[0], a[1], (b == null ? ffi.PASS_BY_NO_OBJECT : ffi.PASS_BY_COPY), ffi.ptr(b), (c == null ? ffi.PASS_BY_NO_OBJECT : ffi.PASS_BY_COPY), ffi.ptr(c));
        ffi.check();
        return new L.MR_C_std_optional_std_string(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_optstr_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_optstr_ref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_optional_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_optstr_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_optstr_cref(a[0], a[1], (b == null ? ffi.PASS_BY_NO_OBJECT : ffi.PASS_BY_COPY), ffi.ptr(b));
        ffi.check();
        const __owner = b;
        return new L.MR_C_std_optional_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_optstr_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_optstr_ptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_optional_std_string(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_optstr_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_optstr_cptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_optional_std_string(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_opttriv(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_opttriv(ffi.ptrNonNull(a, "a"), ffi.ptr(b), ffi.ptr(c));
        ffi.check();
        return new L.MR_C_std_optional_MR_CSharp_Trivial(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_opttriv_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_opttriv_ref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_optional_MR_CSharp_Trivial(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_opttriv_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_opttriv_cref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_optional_MR_CSharp_Trivial(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_opttriv_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_opttriv_ptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_optional_MR_CSharp_Trivial(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_opttriv_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_opttriv_cptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_optional_MR_CSharp_Trivial(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_optnontriv(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_optnontriv((a == null ? ffi.PASS_BY_NO_OBJECT : ffi.PASS_BY_COPY), ffi.ptr(a), (b == null ? ffi.PASS_BY_NO_OBJECT : ffi.PASS_BY_COPY), ffi.ptr(b), (c == null ? ffi.PASS_BY_NO_OBJECT : ffi.PASS_BY_COPY), ffi.ptr(c));
        ffi.check();
        return new L.MR_C_std_optional_MR_CSharp_NonTrivial(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_optnontriv_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_optnontriv_ref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_optional_MR_CSharp_NonTrivial(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_optnontriv_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_optnontriv_cref((a == null ? ffi.PASS_BY_NO_OBJECT : ffi.PASS_BY_COPY), ffi.ptr(a), (b == null ? ffi.PASS_BY_NO_OBJECT : ffi.PASS_BY_COPY), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_optional_MR_CSharp_NonTrivial(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_optnontriv_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_optnontriv_ptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_optional_MR_CSharp_NonTrivial(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_optnontriv_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_optnontriv_cptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_optional_MR_CSharp_NonTrivial(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_optshexp(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_optshexp(ffi.ptrNonNull(a, "a"), ffi.ptr(b), ffi.ptr(c));
        ffi.check();
        return new L.MR_C_std_optional_MR_CSharp_ExposedLayoutSh(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_optshexp_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_optshexp_ref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_optional_MR_CSharp_ExposedLayoutSh(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_optshexp_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_optshexp_cref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_optional_MR_CSharp_ExposedLayoutSh(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_optshexp_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_optshexp_ptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_optional_MR_CSharp_ExposedLayoutSh(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_optshexp_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_optshexp_cptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_optional_MR_CSharp_ExposedLayoutSh(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_optshtriv(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_optshtriv(ffi.ptrNonNull(a, "a"), ffi.ptr(b), ffi.ptr(c));
        ffi.check();
        return new L.MR_C_std_optional_MR_CSharp_SA(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_optshtriv_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_optshtriv_ref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_optional_MR_CSharp_SA(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_optshtriv_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_optshtriv_cref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_optional_MR_CSharp_SA(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_optshtriv_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_optshtriv_ptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_optional_MR_CSharp_SA(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_optshtriv_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_optshtriv_cptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_optional_MR_CSharp_SA(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_tag()
{
    try
    {
        ffi.C.MR_CSharp_test_tag();
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_tag_cref()
{
    try
    {
        ffi.C.MR_CSharp_test_tag_cref();
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_tag_ptr()
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_tag_ptr();
        ffi.check();
        return (__ret !== 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_tag_cptr()
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_tag_cptr();
        ffi.check();
        return (__ret !== 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_variant(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_variant(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        return new L.MR_C_std_variant_std_monostate_int_float(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_variant_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_variant_ref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_variant_std_monostate_int_float(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_variant_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_variant_cref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_variant_std_monostate_int_float(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_variant_ptr(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_variant_ptr(ffi.ptr(a), b);
        ffi.check();
        const __owner = a;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_variant_std_monostate_int_float(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_variant_cptr(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_variant_cptr(ffi.ptr(a), b);
        ffi.check();
        const __owner = a;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_variant_std_monostate_int_float(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_variant_with_repeated_types()
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_variant_with_repeated_types();
        ffi.check();
        return new L.MR_C_std_variant_std_monostate_int_float_float(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_iostreams_ref(_1)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_iostreams_ref(ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        const __owner = _1;
        return new L.MR_C_std_ostream(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_iostreams_ptr(_1)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_iostreams_ptr(ffi.ptr(_1));
        ffi.check();
        const __owner = _1;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_ostream(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_iostreams_cref(_1)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_iostreams_cref(ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        const __owner = _1;
        return new L.MR_C_std_ostream(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_iostreams_cptr(_1)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_iostreams_cptr(ffi.ptr(_1));
        ffi.check();
        const __owner = _1;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_ostream(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_uniqueptr(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_uniqueptr(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_uniqueptr_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_uniqueptr_ref(ffi.nonNull(a, "a").release(), ffi.nonNull(b, "b").release());
        ffi.check();
        return new L.MR_C_std_unique_ptr_int(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_uniqueptr_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_uniqueptr_cref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_unique_ptr_int(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_uniqueptr_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_uniqueptr_ptr(ffi.nonNull(a, "a").release(), ffi.nonNull(b, "b").release(), c);
        ffi.check();
        return new L.MR_C_std_unique_ptr_int(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_uniqueptr_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_uniqueptr_cptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_unique_ptr_int(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_plainarr_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_plainarr_ref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_plainarr_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_plainarr_cref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_plainarr_rref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_plainarr_rref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_plainarr_crref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_plainarr_crref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_plainarr_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_plainarr_ptr(a, b, c);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_plainarr_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_plainarr_cptr(a, b, c);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_plainarr2_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_plainarr2_ref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_plainarr2_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_plainarr2_cref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_plainarr2_rref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_plainarr2_rref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_plainarr2_crref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_plainarr2_crref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_plainarr2_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_plainarr2_ptr(a, b, c);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_plainarr2_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_plainarr2_cptr(a, b, c);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_plainarrenum_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_plainarrenum_ref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_plainarrenum_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_plainarrenum_cref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_plainarrenum_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_plainarrenum_ptr(a, b, c);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_plainarrenum_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_plainarrenum_cptr(a, b, c);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_plainarrenum2_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_plainarrenum2_ref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_plainarrenum2_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_plainarrenum2_cref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_plainarrenum2_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_plainarrenum2_ptr(a, b, c);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_plainarrenum2_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_plainarrenum2_cptr(a, b, c);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_ptrs1(ptr, ref)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_ptrs1(ptr, ref);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_ptrs2(ptr, ref)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_ptrs2(ptr, ref);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_intptr_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_intptr_ref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_intptr_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_intptr_cref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_intptr_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_intptr_ptr(a, b, c);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_intptr_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_intptr_cptr(a, b, c);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_intcptr_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_intcptr_ref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_intcptr_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_intcptr_cref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_intcptr_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_intcptr_ptr(a, b, c);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_intcptr_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_intcptr_cptr(a, b, c);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_intptrptr_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_intptrptr_ref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_intptrptr_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_intptrptr_cref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_intptrptr_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_intptrptr_ptr(a, b, c);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_intptrptr_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_intptrptr_cptr(a, b, c);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_voidptr_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_voidptr_ref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_voidptr_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_voidptr_cref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_voidptr_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_voidptr_ptr(a, b, c);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_voidptr_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_voidptr_cptr(a, b, c);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_voidptrptr_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_voidptrptr_ref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_voidptrptr_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_voidptrptr_cref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_voidptrptr_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_voidptrptr_ptr(a, b, c);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_voidptrptr_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_voidptrptr_cptr(a, b, c);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_arrptr_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_arrptr_ref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_arrptr_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_arrptr_cref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_arrptr_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_arrptr_ptr(a, b, c);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_arrptr_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_arrptr_cptr(a, b, c);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_arrcptr_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_arrcptr_ref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_arrcptr_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_arrcptr_cref(a, b);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_arrcptr_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_arrcptr_ptr(a, b, c);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_arrcptr_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_arrcptr_cptr(a, b, c);
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_nameConflicts()
{
    try
    {
        ffi.C.MR_CSharp_nameConflicts();
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_nameConflictsExposed()
{
    try
    {
        ffi.C.MR_CSharp_nameConflictsExposed();
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_template_a_int(_1)
{
    try
    {
        ffi.C.MR_CSharp_template_a_int(_1);
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_template_a_float(_1)
{
    try
    {
        ffi.C.MR_CSharp_template_a_float(_1);
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_template_b_int()
{
    try
    {
        const __ret = ffi.C.MR_CSharp_template_b_int();
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_template_b_float()
{
    try
    {
        const __ret = ffi.C.MR_CSharp_template_b_float();
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_template_c_int()
{
    try
    {
        ffi.C.MR_CSharp_template_c_int();
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_template_c_float()
{
    try
    {
        ffi.C.MR_CSharp_template_c_float();
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_instantiate()
{
    try
    {
        ffi.C.MR_CSharp_instantiate();
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_neg_MR_CSharp_ConstNonconstConflicts_ref(_1)
{
    try
    {
        const __ret = ffi.C.MR_C_neg_MR_CSharp_ConstNonconstConflicts_ref(ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_neg_const_MR_CSharp_ConstNonconstConflicts_ref(_1)
{
    try
    {
        const __ret = ffi.C.MR_C_neg_const_MR_CSharp_ConstNonconstConflicts_ref(ffi.ptrNonNull(_1, "_1"));
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_not_MR_CSharp_ConstNonconstConflicts_ref(_1)
{
    try
    {
        ffi.C.MR_C_not_MR_CSharp_ConstNonconstConflicts_ref(ffi.ptrNonNull(_1, "_1"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_not_const_MR_CSharp_ConstNonconstConflicts_ref(_1)
{
    try
    {
        ffi.C.MR_C_not_const_MR_CSharp_ConstNonconstConflicts_ref(ffi.ptrNonNull(_1, "_1"));
        ffi.check();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_bitand_int_MR_CSharp_ConstNonconstConflicts_ref(_1, _2)
{
    try
    {
        const __ret = ffi.C.MR_C_bitand_int_MR_CSharp_ConstNonconstConflicts_ref(_1, ffi.ptrNonNull(_2, "_2"));
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_bitand_int_const_MR_CSharp_ConstNonconstConflicts_ref(_1, _2)
{
    try
    {
        const __ret = ffi.C.MR_C_bitand_int_const_MR_CSharp_ConstNonconstConflicts_ref(_1, ffi.ptrNonNull(_2, "_2"));
        ffi.check();
        return __ret;
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_begin_const_MR_CSharp_LifetimesB_ref(b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_begin_const_MR_CSharp_LifetimesB_ref(ffi.ptrNonNull(b, "b"));
        ffi.check();
        const __owner = b;
        return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_LifetimesA(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_end_const_MR_CSharp_LifetimesB_ref(b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_end_const_MR_CSharp_LifetimesB_ref(ffi.ptrNonNull(b, "b"));
        ffi.check();
        const __owner = b;
        return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_LifetimesA(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_deref_const_MR_CSharp_LifetimesB_ref(b)
{
    try
    {
        const __ret = ffi.C.MR_C_deref_const_MR_CSharp_LifetimesB_ref(ffi.ptrNonNull(b, "b"));
        ffi.check();
        const __owner = b;
        return new L.MR_CSharp_LifetimesA(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_begin_const_MR_CSharp_LifetimesC_ref(c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_begin_const_MR_CSharp_LifetimesC_ref(ffi.ptrNonNull(c, "c"));
        ffi.check();
        const __owner = c;
        return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_LifetimesA(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_end_const_MR_CSharp_LifetimesC_ref(c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_end_const_MR_CSharp_LifetimesC_ref(ffi.ptrNonNull(c, "c"));
        ffi.check();
        const __owner = c;
        return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_LifetimesA(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_C_deref_MR_CSharp_LifetimesC(c)
{
    try
    {
        const __ret = ffi.C.MR_C_deref_MR_CSharp_LifetimesC(ffi.ptrNonNull(c, "c"));
        ffi.check();
        const __owner = c;
        return new L.MR_CSharp_LifetimesA(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_begin_const_MR_CSharp_IterableD_ref(self)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_begin_const_MR_CSharp_IterableD_ref(ffi.ptrNonNull(self, "self"));
        ffi.check();
        return ((__ret >>> 0) === 0 ? null : ffi.M.HEAP32[((__ret >>> 0)) >>> 2]);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_end_const_MR_CSharp_IterableD_ref(self)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_end_const_MR_CSharp_IterableD_ref(ffi.ptrNonNull(self, "self"));
        ffi.check();
        return ((__ret >>> 0) === 0 ? null : ffi.M.HEAP32[((__ret >>> 0)) >>> 2]);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_begin_MR_CSharp_IterableE_ref(self)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_begin_MR_CSharp_IterableE_ref(ffi.ptrNonNull(self, "self"));
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_end_MR_CSharp_IterableE_ref(self)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_end_MR_CSharp_IterableE_ref(ffi.ptrNonNull(self, "self"));
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_begin_const_MR_CSharp_IterableF_ref(self)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_begin_const_MR_CSharp_IterableF_ref(ffi.ptrNonNull(self, "self"));
        ffi.check();
        return ((__ret >>> 0) === 0 ? null : ffi.M.HEAP32[((__ret >>> 0)) >>> 2]);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_end_const_MR_CSharp_IterableF_ref(self)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_end_const_MR_CSharp_IterableF_ref(ffi.ptrNonNull(self, "self"));
        ffi.check();
        return ((__ret >>> 0) === 0 ? null : ffi.M.HEAP32[((__ret >>> 0)) >>> 2]);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_begin_MR_CSharp_IterableF_ref(self)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_begin_MR_CSharp_IterableF_ref(ffi.ptrNonNull(self, "self"));
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_end_MR_CSharp_IterableF_ref(self)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_end_MR_CSharp_IterableF_ref(ffi.ptrNonNull(self, "self"));
        ffi.check();
        return (__ret >>> 0);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_begin_int(self)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_begin_int(ffi.ptrNonNull(self, "self"));
        ffi.check();
        return ((__ret >>> 0) === 0 ? null : ffi.M.HEAP32[((__ret >>> 0)) >>> 2]);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_end_int(self)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_end_int(ffi.ptrNonNull(self, "self"));
        ffi.check();
        return ((__ret >>> 0) === 0 ? null : ffi.M.HEAP32[((__ret >>> 0)) >>> 2]);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_vec_of_mut_ptr_to_class()
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_vec_of_mut_ptr_to_class();
        ffi.check();
        return new L.MR_C_std_vector_MR_CSharp_A_ptr(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_vec_of_const_ptr_to_class()
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_vec_of_const_ptr_to_class();
        ffi.check();
        return new L.MR_C_std_vector_const_MR_CSharp_A_ptr(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_get_tuple0()
{
    try
    {
        const __ret = ffi.C.MR_CSharp_get_tuple0();
        ffi.check();
        return new L.MR_C_std_tuple(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_get_tuple1()
{
    try
    {
        const __ret = ffi.C.MR_CSharp_get_tuple1();
        ffi.check();
        return new L.MR_C_std_tuple_int(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_get_tuple2()
{
    try
    {
        const __ret = ffi.C.MR_CSharp_get_tuple2();
        ffi.check();
        return new L.MR_C_std_tuple_int_std_string(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_get_pair2()
{
    try
    {
        const __ret = ffi.C.MR_CSharp_get_pair2();
        ffi.check();
        return new L.MR_C_std_pair_int_std_string(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_get_tuple_const()
{
    try
    {
        const __ret = ffi.C.MR_CSharp_get_tuple_const();
        ffi.check();
        return new L.MR_C_std_tuple_const_int_std_string(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_get_tuple_refs()
{
    try
    {
        const __ret = ffi.C.MR_CSharp_get_tuple_refs();
        ffi.check();
        return new L.MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_get_tuple_crefs()
{
    try
    {
        const __ret = ffi.C.MR_CSharp_get_tuple_crefs();
        ffi.check();
        return new L.MR_C_std_tuple_const_int_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_get_tuple_exposed_value()
{
    try
    {
        const __ret = ffi.C.MR_CSharp_get_tuple_exposed_value();
        ffi.check();
        return new L.MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_get_tuple_exposed_lvalue_ref()
{
    try
    {
        const __ret = ffi.C.MR_CSharp_get_tuple_exposed_lvalue_ref();
        ffi.check();
        return new L.MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_get_tuple_exposed_rvalue_ref()
{
    try
    {
        const __ret = ffi.C.MR_CSharp_get_tuple_exposed_rvalue_ref();
        ffi.check();
        return new L.MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref(ffi.RAW, (__ret >>> 0), true, null);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_int(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_int(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        return (new L.MR_C_std_expected_int_float(ffi.RAW, (__ret >>> 0), true, null)).valueOrThrow();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_int_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_int_ref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_expected_int_float(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_int_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_int_cref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_expected_int_float(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_int_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_int_ptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_expected_int_float(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_int_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_int_cptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_expected_int_float(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_void(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_void(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        (new L.MR_C_std_expected_void_float(ffi.RAW, (__ret >>> 0), true, null)).valueOrThrow();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_void_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_void_ref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_expected_void_float(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_void_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_void_cref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_expected_void_float(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_void_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_void_ptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_expected_void_float(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_void_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_void_cptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_expected_void_float(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_enum(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_enum(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        return (new L.MR_C_std_expected_MR_CSharp_E1_float(ffi.RAW, (__ret >>> 0), true, null)).valueOrThrow();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_enum_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_enum_ref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_expected_MR_CSharp_E1_float(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_enum_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_enum_cref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_expected_MR_CSharp_E1_float(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_enum_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_enum_ptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_expected_MR_CSharp_E1_float(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_enum_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_enum_cptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_expected_MR_CSharp_E1_float(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_triv(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_triv(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        return (new L.MR_C_std_expected_MR_CSharp_Trivial_float(ffi.RAW, (__ret >>> 0), true, null)).valueOrThrow();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_triv_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_triv_ref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_expected_MR_CSharp_Trivial_float(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_triv_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_triv_cref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_expected_MR_CSharp_Trivial_float(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_triv_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_triv_ptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_expected_MR_CSharp_Trivial_float(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_triv_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_triv_cptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_expected_MR_CSharp_Trivial_float(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_nontriv(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_nontriv(ffi.PASS_BY_COPY, ffi.ptrNonNull(a, "a"), (b == null ? ffi.PASS_BY_DEFAULT_ARGUMENT : ffi.PASS_BY_COPY), ffi.ptr(b));
        ffi.check();
        return (new L.MR_C_std_expected_MR_CSharp_NonTrivial_float(ffi.RAW, (__ret >>> 0), true, null)).valueOrThrow();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_nontriv_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_nontriv_ref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_expected_MR_CSharp_NonTrivial_float(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_nontriv_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_nontriv_cref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_expected_MR_CSharp_NonTrivial_float(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_nontriv_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_nontriv_ptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_expected_MR_CSharp_NonTrivial_float(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_nontriv_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_nontriv_cptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_expected_MR_CSharp_NonTrivial_float(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_shared(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_shared(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        return (new L.MR_C_std_expected_MR_CSharp_SA_float(ffi.RAW, (__ret >>> 0), true, null)).valueOrThrow();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_shared_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_shared_ref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_expected_MR_CSharp_SA_float(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_shared_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_shared_cref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_expected_MR_CSharp_SA_float(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_shared_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_shared_ptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_expected_MR_CSharp_SA_float(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_shared_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_shared_cptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_expected_MR_CSharp_SA_float(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_exposed(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_exposed(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        return (new L.MR_C_std_expected_MR_CSharp_ExposedLayout_float(ffi.RAW, (__ret >>> 0), true, null)).valueOrThrow();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_exposed_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_exposed_ref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_expected_MR_CSharp_ExposedLayout_float(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_exposed_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_exposed_cref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_expected_MR_CSharp_ExposedLayout_float(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_exposed_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_exposed_ptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_expected_MR_CSharp_ExposedLayout_float(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_exposed_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_exposed_cptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_expected_MR_CSharp_ExposedLayout_float(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_exposed_shared(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_exposed_shared(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        return (new L.MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float(ffi.RAW, (__ret >>> 0), true, null)).valueOrThrow();
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_exposed_shared_ref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_exposed_shared_ref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_exposed_shared_cref(a, b)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_exposed_shared_cref(ffi.ptrNonNull(a, "a"), ffi.ptr(b));
        ffi.check();
        const __owner = null;
        return new L.MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float(ffi.RAW, (__ret >>> 0), false, __owner);
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_exposed_shared_ptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_exposed_shared_ptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

export function MR_CSharp_test_expected_exposed_shared_cptr(a, b, c)
{
    try
    {
        const __ret = ffi.C.MR_CSharp_test_expected_exposed_shared_cptr(ffi.ptr(a), ffi.ptr(b), c);
        ffi.check();
        const __owner = null;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float(ffi.RAW, (__ret >>> 0), false, __owner));
    }
    catch (__e)
    {
        throw ffi.cppError(__e);
    }
}

