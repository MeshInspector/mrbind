// The wrappers of the C bindings file `MR/test_adjusting_names`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * And test that `uint64_t` is correctly adjusted in some other kinds of names.
 * Though here we don't really test that each of them brings its own includes.
 * Generated from class `MR::AdjustingNames::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_AdjustingNames_A extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_AdjustingNames_A_Destroy(ptr);}

    static get var()
    {
        const __ret = ffi.C.MR_AdjustingNames_A_Get_var_unsigned_long();
        ffi.check();
        return ffi.HEAPU32()[((__ret >>> 0)) >>> 2];
    }

    static set var(value)
    {
        ffi.C.MR_AdjustingNames_A_Set_var_unsigned_long(value);
        ffi.check();
    }

    static __ctor_0()
    {
        const __ret = ffi.C.MR_AdjustingNames_A_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_AdjustingNames_A_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_AdjustingNames_A.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_AdjustingNames_A))
            return L.MR_AdjustingNames_A.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_AdjustingNames_A.__destroy : null, args[3]);
            return;
        }
        super(L.MR_AdjustingNames_A.__ctor(args), L.MR_AdjustingNames_A.__destroy, null);
    }

    convertTo_unsigned_long()
    {
        const __ret = ffi.C.MR_AdjustingNames_A_ConvertTo_unsigned_long(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_AdjustingNames_A_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
        ffi.check();
        const __owner = this;
        return new L.MR_AdjustingNames_A(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    foo()
    {
        ffi.C.MR_AdjustingNames_A_foo(this.rawPointer());
        ffi.check();
    }

    bar()
    {
        ffi.C.MR_AdjustingNames_A_bar(this.rawPointer());
        ffi.check();
    }
}

export function MR_AdjustingNames_foo()
{
    ffi.C.MR_AdjustingNames_foo();
    ffi.check();
}

export function MR_AdjustingNames_bar()
{
    ffi.C.MR_AdjustingNames_bar();
    ffi.check();
}

