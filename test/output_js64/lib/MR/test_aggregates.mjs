// The wrappers of the C bindings file `MR/test_aggregates`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Aggregates get elementwise constructors. This is necessary if their elements are not default-constructible,
 *   because otherwise there would be no way to construct them.
 * Generated from class `MR::Aggregates::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_Aggregates_A extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_Aggregates_A_Destroy(BigInt(ptr));}

    get x()
    {
        const __ret = ffi.C.MR_Aggregates_A_Get_x(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    set x(value)
    {
        ffi.C.MR_Aggregates_A_Set_x(BigInt(this.rawPointer()), value);
        ffi.check();
    }

    get y()
    {
        const __ret = ffi.C.MR_Aggregates_A_Get_y(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return new L.MR_C_std_string(ffi.RAW, Number(__ret), false, __owner);
    }

    set y(value)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __str_value = ffi.utf8(ffi.nonNullString(value, "value"));
            const __end_value = ffi.utf8End();
            ffi.C.MR_Aggregates_A_Set_y(BigInt(this.rawPointer()), BigInt(__str_value), BigInt(__end_value));
            ffi.check();
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    static __ctor_0()
    {
        const __ret = ffi.C.MR_Aggregates_A_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(x, y)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __str_y = ffi.utf8(ffi.nonNullString(y, "y"));
            const __end_y = ffi.utf8End();
            const __ret = ffi.C.MR_Aggregates_A_ConstructFrom(x, BigInt(__str_y), BigInt(__end_y));
            ffi.check();
            return Number(__ret);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    static __ctor_2(_other)
    {
        const __ret = ffi.C.MR_Aggregates_A_ConstructFromAnother(ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_Aggregates_A.__ctor_0();
        if (__n === 2 && typeof args[0] === "number" && typeof args[1] === "string")
            return L.MR_Aggregates_A.__ctor_1(args[0], args[1]);
        if (__n === 1 && (args[0] instanceof L.MR_Aggregates_A))
            return L.MR_Aggregates_A.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_Aggregates_A.__destroy : null, args[3]);
            return;
        }
        super(L.MR_Aggregates_A.__ctor(args), L.MR_Aggregates_A.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_Aggregates_A_AssignFromAnother(BigInt(this.rawPointer()), ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        const __owner = this;
        return new L.MR_Aggregates_A(ffi.RAW, Number(__ret), false, __owner);
    }
}

/**
 * This is an empty aggregate, it doesn't need an elementwise constructor.
 * Generated from class `MR::Aggregates::B`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_Aggregates_B extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_Aggregates_B_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_Aggregates_B_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_Aggregates_B_ConstructFromAnother(BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_Aggregates_B.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_Aggregates_B))
            return L.MR_Aggregates_B.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_Aggregates_B.__destroy : null, args[3]);
            return;
        }
        super(L.MR_Aggregates_B.__ctor(args), L.MR_Aggregates_B.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_Aggregates_B_AssignFromAnother(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        const __owner = this;
        return new L.MR_Aggregates_B(ffi.RAW, Number(__ret), false, __owner);
    }
}

/**
 * Test the optional limit on the number of fields that we aggregate-initialize.
 * Generated from class `MR::Aggregates::C`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_Aggregates_C extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_Aggregates_C_Destroy(BigInt(ptr));}

    get a()
    {
        const __ret = ffi.C.MR_Aggregates_C_Get_a(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    set a(value)
    {
        ffi.C.MR_Aggregates_C_Set_a(BigInt(this.rawPointer()), value);
        ffi.check();
    }

    get b()
    {
        const __ret = ffi.C.MR_Aggregates_C_Get_b(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    set b(value)
    {
        ffi.C.MR_Aggregates_C_Set_b(BigInt(this.rawPointer()), value);
        ffi.check();
    }

    get c()
    {
        const __ret = ffi.C.MR_Aggregates_C_Get_c(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    set c(value)
    {
        ffi.C.MR_Aggregates_C_Set_c(BigInt(this.rawPointer()), value);
        ffi.check();
    }

    get d()
    {
        const __ret = ffi.C.MR_Aggregates_C_Get_d(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    set d(value)
    {
        ffi.C.MR_Aggregates_C_Set_d(BigInt(this.rawPointer()), value);
        ffi.check();
    }

    get e()
    {
        const __ret = ffi.C.MR_Aggregates_C_Get_e(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    set e(value)
    {
        ffi.C.MR_Aggregates_C_Set_e(BigInt(this.rawPointer()), value);
        ffi.check();
    }

    get f()
    {
        const __ret = ffi.C.MR_Aggregates_C_Get_f(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    set f(value)
    {
        ffi.C.MR_Aggregates_C_Set_f(BigInt(this.rawPointer()), value);
        ffi.check();
    }

    get g()
    {
        const __ret = ffi.C.MR_Aggregates_C_Get_g(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    set g(value)
    {
        ffi.C.MR_Aggregates_C_Set_g(BigInt(this.rawPointer()), value);
        ffi.check();
    }

    get h()
    {
        const __ret = ffi.C.MR_Aggregates_C_Get_h(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    set h(value)
    {
        ffi.C.MR_Aggregates_C_Set_h(BigInt(this.rawPointer()), value);
        ffi.check();
    }

    static __ctor_0()
    {
        const __ret = ffi.C.MR_Aggregates_C_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(a, b, c, d, e, f, g, h)
    {
        const __ret = ffi.C.MR_Aggregates_C_ConstructFrom(a, b, c, d, e, f, g, h);
        ffi.check();
        return Number(__ret);
    }

    static __ctor_2(_other)
    {
        const __ret = ffi.C.MR_Aggregates_C_ConstructFromAnother(BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_Aggregates_C.__ctor_0();
        if (__n === 8 && typeof args[0] === "number" && typeof args[1] === "number" && typeof args[2] === "number" && typeof args[3] === "number" && typeof args[4] === "number" && typeof args[5] === "number" && typeof args[6] === "number" && typeof args[7] === "number")
            return L.MR_Aggregates_C.__ctor_1(args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7]);
        if (__n === 1 && (args[0] instanceof L.MR_Aggregates_C))
            return L.MR_Aggregates_C.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_Aggregates_C.__destroy : null, args[3]);
            return;
        }
        super(L.MR_Aggregates_C.__ctor(args), L.MR_Aggregates_C.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_Aggregates_C_AssignFromAnother(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        const __owner = this;
        return new L.MR_Aggregates_C(ffi.RAW, Number(__ret), false, __owner);
    }
}

/**
 * Generated from class `MR::Aggregates::D`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_Aggregates_D extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_Aggregates_D_Destroy(BigInt(ptr));}

    get a()
    {
        const __ret = ffi.C.MR_Aggregates_D_Get_a(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    set a(value)
    {
        ffi.C.MR_Aggregates_D_Set_a(BigInt(this.rawPointer()), value);
        ffi.check();
    }

    get b()
    {
        const __ret = ffi.C.MR_Aggregates_D_Get_b(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    set b(value)
    {
        ffi.C.MR_Aggregates_D_Set_b(BigInt(this.rawPointer()), value);
        ffi.check();
    }

    get c()
    {
        const __ret = ffi.C.MR_Aggregates_D_Get_c(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    set c(value)
    {
        ffi.C.MR_Aggregates_D_Set_c(BigInt(this.rawPointer()), value);
        ffi.check();
    }

    get d()
    {
        const __ret = ffi.C.MR_Aggregates_D_Get_d(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    set d(value)
    {
        ffi.C.MR_Aggregates_D_Set_d(BigInt(this.rawPointer()), value);
        ffi.check();
    }

    get e()
    {
        const __ret = ffi.C.MR_Aggregates_D_Get_e(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    set e(value)
    {
        ffi.C.MR_Aggregates_D_Set_e(BigInt(this.rawPointer()), value);
        ffi.check();
    }

    get f()
    {
        const __ret = ffi.C.MR_Aggregates_D_Get_f(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    set f(value)
    {
        ffi.C.MR_Aggregates_D_Set_f(BigInt(this.rawPointer()), value);
        ffi.check();
    }

    get g()
    {
        const __ret = ffi.C.MR_Aggregates_D_Get_g(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    set g(value)
    {
        ffi.C.MR_Aggregates_D_Set_g(BigInt(this.rawPointer()), value);
        ffi.check();
    }

    get h()
    {
        const __ret = ffi.C.MR_Aggregates_D_Get_h(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    set h(value)
    {
        ffi.C.MR_Aggregates_D_Set_h(BigInt(this.rawPointer()), value);
        ffi.check();
    }

    get i()
    {
        const __ret = ffi.C.MR_Aggregates_D_Get_i(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    set i(value)
    {
        ffi.C.MR_Aggregates_D_Set_i(BigInt(this.rawPointer()), value);
        ffi.check();
    }

    static __ctor_0()
    {
        const __ret = ffi.C.MR_Aggregates_D_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(a, b, c, d, e, f, g, h, i)
    {
        const __ret = ffi.C.MR_Aggregates_D_ConstructFrom(a, b, c, d, e, f, g, h, i);
        ffi.check();
        return Number(__ret);
    }

    static __ctor_2(_other)
    {
        const __ret = ffi.C.MR_Aggregates_D_ConstructFromAnother(BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_Aggregates_D.__ctor_0();
        if (__n === 9 && typeof args[0] === "number" && typeof args[1] === "number" && typeof args[2] === "number" && typeof args[3] === "number" && typeof args[4] === "number" && typeof args[5] === "number" && typeof args[6] === "number" && typeof args[7] === "number" && typeof args[8] === "number")
            return L.MR_Aggregates_D.__ctor_1(args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7], args[8]);
        if (__n === 1 && (args[0] instanceof L.MR_Aggregates_D))
            return L.MR_Aggregates_D.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_Aggregates_D.__destroy : null, args[3]);
            return;
        }
        super(L.MR_Aggregates_D.__ctor(args), L.MR_Aggregates_D.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_Aggregates_D_AssignFromAnother(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        const __owner = this;
        return new L.MR_Aggregates_D(ffi.RAW, Number(__ret), false, __owner);
    }
}

/**
 * Generated from class `MR::Aggregates::E`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_Aggregates_E extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_Aggregates_E_Destroy(BigInt(ptr));}

    get a()
    {
        const __ret = ffi.C.MR_Aggregates_E_Get_a(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    set a(value)
    {
        ffi.C.MR_Aggregates_E_Set_a(BigInt(this.rawPointer()), value);
        ffi.check();
    }

    get b()
    {
        const __ret = ffi.C.MR_Aggregates_E_Get_b(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    set b(value)
    {
        ffi.C.MR_Aggregates_E_Set_b(BigInt(this.rawPointer()), value);
        ffi.check();
    }

    get c()
    {
        const __ret = ffi.C.MR_Aggregates_E_Get_c(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    set c(value)
    {
        ffi.C.MR_Aggregates_E_Set_c(BigInt(this.rawPointer()), value);
        ffi.check();
    }

    get d()
    {
        const __ret = ffi.C.MR_Aggregates_E_Get_d(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    set d(value)
    {
        ffi.C.MR_Aggregates_E_Set_d(BigInt(this.rawPointer()), value);
        ffi.check();
    }

    get e()
    {
        const __ret = ffi.C.MR_Aggregates_E_Get_e(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    set e(value)
    {
        ffi.C.MR_Aggregates_E_Set_e(BigInt(this.rawPointer()), value);
        ffi.check();
    }

    get f()
    {
        const __ret = ffi.C.MR_Aggregates_E_Get_f(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    set f(value)
    {
        ffi.C.MR_Aggregates_E_Set_f(BigInt(this.rawPointer()), value);
        ffi.check();
    }

    get g()
    {
        const __ret = ffi.C.MR_Aggregates_E_Get_g(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    set g(value)
    {
        ffi.C.MR_Aggregates_E_Set_g(BigInt(this.rawPointer()), value);
        ffi.check();
    }

    get h()
    {
        const __ret = ffi.C.MR_Aggregates_E_Get_h(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    set h(value)
    {
        ffi.C.MR_Aggregates_E_Set_h(BigInt(this.rawPointer()), value);
        ffi.check();
    }

    get i()
    {
        const __ret = ffi.C.MR_Aggregates_E_Get_i(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    set i(value)
    {
        ffi.C.MR_Aggregates_E_Set_i(BigInt(this.rawPointer()), value);
        ffi.check();
    }

    get j()
    {
        const __ret = ffi.C.MR_Aggregates_E_Get_j(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return new L.MR_Aggregates_NonDefaultConstructible(ffi.RAW, Number(__ret), false, __owner);
    }

    set j(value)
    {
        ffi.C.MR_Aggregates_E_Set_j(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(value, "value")));
        ffi.check();
    }

    static __ctor_0(_other)
    {
        const __ret = ffi.C.MR_Aggregates_E_ConstructFromAnother(BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(a, b, c, d, e, f, g, h, i, j)
    {
        const __ret = ffi.C.MR_Aggregates_E_ConstructFrom(a, b, c, d, e, f, g, h, i, BigInt(ffi.ptrNonNull(j, "j")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 1 && (args[0] instanceof L.MR_Aggregates_E))
            return L.MR_Aggregates_E.__ctor_0(args[0]);
        if (__n === 10 && typeof args[0] === "number" && typeof args[1] === "number" && typeof args[2] === "number" && typeof args[3] === "number" && typeof args[4] === "number" && typeof args[5] === "number" && typeof args[6] === "number" && typeof args[7] === "number" && typeof args[8] === "number" && (args[9] instanceof L.MR_Aggregates_NonDefaultConstructible))
            return L.MR_Aggregates_E.__ctor_1(args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7], args[8], args[9]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_Aggregates_E.__destroy : null, args[3]);
            return;
        }
        super(L.MR_Aggregates_E.__ctor(args), L.MR_Aggregates_E.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_Aggregates_E_AssignFromAnother(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        const __owner = this;
        return new L.MR_Aggregates_E(ffi.RAW, Number(__ret), false, __owner);
    }
}

/**
 * Generated from class `MR::Aggregates::NonDefaultConstructible`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_Aggregates_NonDefaultConstructible extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_Aggregates_NonDefaultConstructible_Destroy(BigInt(ptr));}

    static __ctor_0(_other)
    {
        const __ret = ffi.C.MR_Aggregates_NonDefaultConstructible_ConstructFromAnother(BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 1 && (args[0] instanceof L.MR_Aggregates_NonDefaultConstructible))
            return L.MR_Aggregates_NonDefaultConstructible.__ctor_0(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_Aggregates_NonDefaultConstructible.__destroy : null, args[3]);
            return;
        }
        super(L.MR_Aggregates_NonDefaultConstructible.__ctor(args), L.MR_Aggregates_NonDefaultConstructible.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_Aggregates_NonDefaultConstructible_AssignFromAnother(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        const __owner = this;
        return new L.MR_Aggregates_NonDefaultConstructible(ffi.RAW, Number(__ret), false, __owner);
    }
}

