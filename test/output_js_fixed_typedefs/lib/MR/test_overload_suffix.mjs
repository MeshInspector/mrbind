// The wrappers of the C bindings file `MR/test_overload_suffix`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::OverloadSuffix::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_OverloadSuffix_A extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_OverloadSuffix_A_Destroy(ptr);}

    static __ctor_0(_other)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadSuffix_A_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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

    static __ctor_1(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadSuffix_A_Construct_1_int32_t(_1);
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

    static __ctor_3(_1, _2)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadSuffix_A_Construct_2(_1, _2);
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
        if (__n === 1 && (args[0] instanceof L.MR_OverloadSuffix_A))
            return L.MR_OverloadSuffix_A.__ctor_0(args[0]);
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_OverloadSuffix_A.__ctor_1(args[0]);
        if (__n === 2 && typeof args[0] === "number" && typeof args[1] === "number")
            return L.MR_OverloadSuffix_A.__ctor_3(args[0], args[1]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    static construct_1_float(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadSuffix_A_Construct_1_float(_1);
            ffi.check();
            return new L.MR_OverloadSuffix_A(ffi.RAW, (__ret >>> 0), true, null);
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

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_OverloadSuffix_A.__destroy : null, args[3]);
            return;
        }
        super(L.MR_OverloadSuffix_A.__ctor(args), L.MR_OverloadSuffix_A.__destroy, null);
    }

    foo(...args)
    {
        const __n = args.length;
        if (__n === 1 && typeof args[0] === "number")
            return this.foo_1_int32_t(args[0]);
        if (__n === 2 && typeof args[0] === "number" && typeof args[1] === "number")
            return this.foo_2(args[0], args[1]);
        throw new TypeError("No overload of `foo` accepts these arguments.");
    }

    assignFromAnother(_other)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadSuffix_A_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_OverloadSuffix_A(ffi.RAW, (__ret >>> 0), false, __owner);
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

    foo_1_int32_t(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_OverloadSuffix_A_foo_1_int32_t(this.rawPointer(), _1);
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

    foo_1_float(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_OverloadSuffix_A_foo_1_float(this.rawPointer(), _1);
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

    foo_2(_1, _2)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_OverloadSuffix_A_foo_2(this.rawPointer(), _1, _2);
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

    opSub(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_sub_MR_OverloadSuffix_A_int32_t(this.rawPointer(), _1);
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

    opSub_float(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_sub_MR_OverloadSuffix_A_float(this.rawPointer(), _1);
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

    index_int32_t(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_OverloadSuffix_A_index_int32_t(this.rawPointer(), _1);
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

    index_float(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_OverloadSuffix_A_index_float(this.rawPointer(), _1);
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
}

/**
 * Generated from class `MR::OverloadSuffix::B`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_OverloadSuffix_B extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_OverloadSuffix_B_Destroy(ptr);}

    static __ctor_0(_other)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadSuffix_B_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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

    static __ctor_1(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadSuffix_B_Construct(_1);
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

    static __ctor_3(_1, _2)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadSuffix_B_Construct_2(_1, _2);
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
        if (__n === 1 && (args[0] instanceof L.MR_OverloadSuffix_B))
            return L.MR_OverloadSuffix_B.__ctor_0(args[0]);
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_OverloadSuffix_B.__ctor_1(args[0]);
        if (__n === 2 && typeof args[0] === "number" && typeof args[1] === "number")
            return L.MR_OverloadSuffix_B.__ctor_3(args[0], args[1]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    static construct_1(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadSuffix_B_Construct_1(_1);
            ffi.check();
            return new L.MR_OverloadSuffix_B(ffi.RAW, (__ret >>> 0), true, null);
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

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_OverloadSuffix_B.__destroy : null, args[3]);
            return;
        }
        super(L.MR_OverloadSuffix_B.__ctor(args), L.MR_OverloadSuffix_B.__destroy, null);
    }

    foo(...args)
    {
        const __n = args.length;
        if (__n === 1 && typeof args[0] === "number")
            return this.foo_2(args[0]);
        if (__n === 2 && typeof args[0] === "number" && typeof args[1] === "number")
            return this.foo_2_2(args[0], args[1]);
        throw new TypeError("No overload of `foo` accepts these arguments.");
    }

    assignFromAnother(_other)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadSuffix_B_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_OverloadSuffix_B(ffi.RAW, (__ret >>> 0), false, __owner);
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

    foo_2(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_OverloadSuffix_B_foo(this.rawPointer(), _1);
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

    foo_1(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_OverloadSuffix_B_foo_1(this.rawPointer(), _1);
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

    foo_2_2(_1, _2)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_OverloadSuffix_B_foo_2(this.rawPointer(), _1, _2);
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

    opSub(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_sub_MR_OverloadSuffix_B_int32_t(this.rawPointer(), _1);
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

    opSub_float(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_sub_MR_OverloadSuffix_B_float(this.rawPointer(), _1);
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

    index(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_OverloadSuffix_B_index(this.rawPointer(), _1);
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

    index_float(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_OverloadSuffix_B_index_float(this.rawPointer(), _1);
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
}

/**
 * Generated from class `MR::OverloadSuffix::C`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_OverloadSuffix_C extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_OverloadSuffix_C_Destroy(ptr);}

    static __ctor_0(_other)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadSuffix_C_ConstructFromAnother(ffi.ptrNonNull(_other, "_other"));
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

    static __ctor_1(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadSuffix_C_Construct_blah(_1);
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

    static __ctor_3(_1, _2)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadSuffix_C_Construct_2(_1, _2);
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
        if (__n === 1 && (args[0] instanceof L.MR_OverloadSuffix_C))
            return L.MR_OverloadSuffix_C.__ctor_0(args[0]);
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_OverloadSuffix_C.__ctor_1(args[0]);
        if (__n === 2 && typeof args[0] === "number" && typeof args[1] === "number")
            return L.MR_OverloadSuffix_C.__ctor_3(args[0], args[1]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    static construct_1(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadSuffix_C_Construct_1(_1);
            ffi.check();
            return new L.MR_OverloadSuffix_C(ffi.RAW, (__ret >>> 0), true, null);
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

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_OverloadSuffix_C.__destroy : null, args[3]);
            return;
        }
        super(L.MR_OverloadSuffix_C.__ctor(args), L.MR_OverloadSuffix_C.__destroy, null);
    }

    foo(...args)
    {
        const __n = args.length;
        if (__n === 1 && typeof args[0] === "number")
            return this.foo_blah(args[0]);
        if (__n === 2 && typeof args[0] === "number" && typeof args[1] === "number")
            return this.foo_2(args[0], args[1]);
        throw new TypeError("No overload of `foo` accepts these arguments.");
    }

    assignFromAnother(_other)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_OverloadSuffix_C_AssignFromAnother(this.rawPointer(), ffi.ptrNonNull(_other, "_other"));
            ffi.check();
            const __owner = this;
            return new L.MR_OverloadSuffix_C(ffi.RAW, (__ret >>> 0), false, __owner);
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

    foo_blah(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_OverloadSuffix_C_foo_blah(this.rawPointer(), _1);
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

    foo_1(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_OverloadSuffix_C_foo_1(this.rawPointer(), _1);
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

    foo_2(_1, _2)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_OverloadSuffix_C_foo_2(this.rawPointer(), _1, _2);
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

    opSub(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_sub_MR_OverloadSuffix_C_int32_t(this.rawPointer(), _1);
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

    opSub_float(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_sub_MR_OverloadSuffix_C_float(this.rawPointer(), _1);
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

    index_blah(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_OverloadSuffix_C_index_blah(this.rawPointer(), _1);
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

    index(_1)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_OverloadSuffix_C_index(this.rawPointer(), _1);
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
}

export function MR_OverloadSuffix_foo_a_1_int32_t(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_OverloadSuffix_foo_a_1_int32_t(_1);
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

export function MR_OverloadSuffix_foo_a_1_float(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_OverloadSuffix_foo_a_1_float(_1);
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

export function MR_OverloadSuffix_foo_a_2(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_OverloadSuffix_foo_a_2(_1, _2);
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

export function MR_OverloadSuffix_bar_a_int32_t(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_OverloadSuffix_bar_a_int32_t(_1);
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

export function MR_OverloadSuffix_bar_a_float(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_OverloadSuffix_bar_a_float(_1);
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

export function MR_OverloadSuffix_baz_a_1(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_OverloadSuffix_baz_a_1(_1);
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

export function MR_OverloadSuffix_baz_a_2(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_OverloadSuffix_baz_a_2(_1, _2);
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

export function MR_C_pos_MR_OverloadSuffix_A_ref(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_C_pos_MR_OverloadSuffix_A_ref(ffi.ptrNonNull(_1, "_1"));
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

export function MR_C_pos_const_MR_OverloadSuffix_A_ref(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_C_pos_const_MR_OverloadSuffix_A_ref(ffi.ptrNonNull(_1, "_1"));
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

export function MR_OverloadSuffix_foo_b(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_OverloadSuffix_foo_b(_1);
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

export function MR_OverloadSuffix_foo_b_1(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_OverloadSuffix_foo_b_1(_1);
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

export function MR_OverloadSuffix_foo_b_2(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_OverloadSuffix_foo_b_2(_1, _2);
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

export function MR_OverloadSuffix_bar_b(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_OverloadSuffix_bar_b(_1);
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

export function MR_OverloadSuffix_bar_b_float(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_OverloadSuffix_bar_b_float(_1);
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

export function MR_OverloadSuffix_baz_b(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_OverloadSuffix_baz_b(_1);
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

export function MR_OverloadSuffix_baz_b_int32_t(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_OverloadSuffix_baz_b_int32_t(_1, _2);
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

export function MR_C_pos_MR_OverloadSuffix_B_ref(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_C_pos_MR_OverloadSuffix_B_ref(ffi.ptrNonNull(_1, "_1"));
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

export function MR_C_pos_const_MR_OverloadSuffix_B_ref(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_C_pos_const_MR_OverloadSuffix_B_ref(ffi.ptrNonNull(_1, "_1"));
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

export function MR_OverloadSuffix_foo_c_blah(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_OverloadSuffix_foo_c_blah(_1);
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

export function MR_OverloadSuffix_foo_c_1(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_OverloadSuffix_foo_c_1(_1);
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

export function MR_OverloadSuffix_foo_c_2(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_OverloadSuffix_foo_c_2(_1, _2);
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

export function MR_OverloadSuffix_bar_c_blah(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_OverloadSuffix_bar_c_blah(_1);
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

export function MR_OverloadSuffix_bar_c(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_OverloadSuffix_bar_c(_1);
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

export function MR_OverloadSuffix_baz_c_blah(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_OverloadSuffix_baz_c_blah(_1);
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

export function MR_OverloadSuffix_baz_c(_1, _2)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_OverloadSuffix_baz_c(_1, _2);
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

export function MR_C_pos_MR_OverloadSuffix_C_ref(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_C_pos_MR_OverloadSuffix_C_ref(ffi.ptrNonNull(_1, "_1"));
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

export function MR_C_pos_const_MR_OverloadSuffix_C_ref(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        ffi.C.MR_C_pos_const_MR_OverloadSuffix_C_ref(ffi.ptrNonNull(_1, "_1"));
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

