// The wrappers of the C bindings file `MR/test_mention_blacklists`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::SignatureFilters::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_SignatureFilters_A extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_SignatureFilters_A_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_SignatureFilters_A_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_SignatureFilters_A_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_SignatureFilters_A.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_SignatureFilters_A))
            return L.MR_SignatureFilters_A.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_SignatureFilters_A.__destroy : null, args[3]);
            return;
        }
        super(L.MR_SignatureFilters_A.__ctor(args), L.MR_SignatureFilters_A.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_SignatureFilters_A_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_SignatureFilters_A(ffi.RAW, (__ret >>> 0), false, __owner);
    }
}

/**
 * Generated from class `MR::SignatureFilters::Blah`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_SignatureFilters_Blah extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_SignatureFilters_Blah_Destroy(ptr);}

    get a()
    {
        const __ret = ffi.C.MR_SignatureFilters_Blah_Get_a(this.rawPointer());
        ffi.check();
        const __owner = this;
        return new L.MR_SignatureFilters_A(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    set a(value)
    {
        ffi.C.MR_SignatureFilters_Blah_Set_a(this.rawPointer(), ffi.ptrNonNull(value, "value"));
        ffi.check();
    }

    static __ctor_0()
    {
        const __ret = ffi.C.MR_SignatureFilters_Blah_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_SignatureFilters_Blah_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_SignatureFilters_Blah.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_SignatureFilters_Blah))
            return L.MR_SignatureFilters_Blah.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_SignatureFilters_Blah.__destroy : null, args[3]);
            return;
        }
        super(L.MR_SignatureFilters_Blah.__ctor(args), L.MR_SignatureFilters_Blah.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_SignatureFilters_Blah_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_SignatureFilters_Blah(ffi.RAW, (__ret >>> 0), false, __owner);
    }
}

export function MR_SignatureFilters_foo_1(_1)
{
    ffi.C.MR_SignatureFilters_foo_1(ffi.ptrNonNull(_1, "_1"));
    ffi.check();
}

export function MR_SignatureFilters_foo_0()
{
    const __ret = ffi.C.MR_SignatureFilters_foo_0();
    ffi.check();
    return new L.MR_SignatureFilters_A(ffi.RAW, (__ret >>> 0), true, null);
}

export function MR_SignatureFilters_foo2_1(_1)
{
    ffi.C.MR_SignatureFilters_foo2_1(ffi.ptrNonNull(_1, "_1"));
    ffi.check();
}

export function MR_SignatureFilters_foo2_0()
{
    const __ret = ffi.C.MR_SignatureFilters_foo2_0();
    ffi.check();
    const __owner = null;
    return new L.MR_SignatureFilters_A(ffi.RAW, (__ret >>> 0), false, __owner);
}

export function MR_SignatureFilters_foo3_1(_1)
{
    ffi.C.MR_SignatureFilters_foo3_1(ffi.ptrNonNull(_1, "_1"));
    ffi.check();
}

export function MR_SignatureFilters_foo3_0()
{
    const __ret = ffi.C.MR_SignatureFilters_foo3_0();
    ffi.check();
    const __owner = null;
    return new L.MR_SignatureFilters_A(ffi.RAW, (__ret >>> 0), false, __owner);
}

export function MR_SignatureFilters_foo4_1(_1)
{
    ffi.C.MR_SignatureFilters_foo4_1(ffi.ptrNonNull(_1, "_1"));
    ffi.check();
}

export function MR_SignatureFilters_foo4_0()
{
    const __ret = ffi.C.MR_SignatureFilters_foo4_0();
    ffi.check();
    const __owner = null;
    return new L.MR_SignatureFilters_A(ffi.RAW, (__ret >>> 0), false, __owner);
}

export function MR_SignatureFilters_foo5_1(_1)
{
    ffi.C.MR_SignatureFilters_foo5_1(ffi.ptrNonNull(_1, "_1"));
    ffi.check();
}

export function MR_SignatureFilters_foo5_0()
{
    const __ret = ffi.C.MR_SignatureFilters_foo5_0();
    ffi.check();
    const __owner = null;
    return new L.MR_SignatureFilters_A(ffi.RAW, (__ret >>> 0), false, __owner);
}

