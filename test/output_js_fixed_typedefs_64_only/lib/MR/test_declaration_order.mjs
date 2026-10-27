// The wrappers of the C bindings file `MR/test_declaration_order`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export const MR_DeclOrder_A_E = Object.freeze({
});

/**
 * Here all classes are whitelisted using `--expose-as-struct`.
 * Generated from class `MR::DeclOrder::A`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export class MR_DeclOrder_A extends ffi.CppStruct
{
    static SIZE = 4;
    static ALIGNMENT = 4;

    get blah() {return ffi.M.HEAP32[(this.rawPointer() + 0) >>> 2];}
    set blah(value) {ffi.M.HEAPU32[(this.rawPointer() + 0) >>> 2] = value;}

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
        super(L.MR_DeclOrder_A.__ctor(args), true, null);
    }

    c()
    {
        try
        {
            const __sret = ffi.malloc(4);
            const __ret = ffi.C.MR_DeclOrder_A_c(this.rawPointer());
            ffi.check();
            return (ffi.M.HEAPU32[(__sret + 0) >>> 2] = __ret, new L.MR_DeclOrder_A_B(ffi.RAW, __sret, true, null));
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    d()
    {
        try
        {
            const __ret = ffi.C.MR_DeclOrder_A_d(this.rawPointer());
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
 * Generated from class `MR::DeclOrder::A::B`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export class MR_DeclOrder_A_B extends ffi.CppStruct
{
    static SIZE = 4;
    static ALIGNMENT = 4;

    get bleh() {return ffi.M.HEAP32[(this.rawPointer() + 0) >>> 2];}
    set bleh(value) {ffi.M.HEAPU32[(this.rawPointer() + 0) >>> 2] = value;}

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
        super(L.MR_DeclOrder_A_B.__ctor(args), true, null);
    }

    a()
    {
        try
        {
            const __sret = ffi.malloc(4);
            const __ret = ffi.C.MR_DeclOrder_A_B_a(this.rawPointer());
            ffi.check();
            return (ffi.M.HEAPU32[(__sret + 0) >>> 2] = __ret, new L.MR_DeclOrder_A(ffi.RAW, __sret, true, null));
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    b()
    {
        try
        {
            const __ret = ffi.C.MR_DeclOrder_A_B_b(this.rawPointer());
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
 * Generated from class `MR::DeclOrder::C<false>`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export class MR_DeclOrder_C_false extends ffi.CppStruct
{
    static SIZE = 4;
    static ALIGNMENT = 4;

    get bleh() {return ffi.M.HEAP32[(this.rawPointer() + 0) >>> 2];}
    set bleh(value) {ffi.M.HEAPU32[(this.rawPointer() + 0) >>> 2] = value;}

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
        super(L.MR_DeclOrder_C_false.__ctor(args), true, null);
    }

    blah()
    {
        try
        {
            const __sret = ffi.malloc(4);
            const __ret = ffi.C.MR_DeclOrder_C_false_blah(this.rawPointer());
            ffi.check();
            return (ffi.M.HEAPU32[(__sret + 0) >>> 2] = __ret, new L.MR_DeclOrder_C_true(ffi.RAW, __sret, true, null));
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

/**
 * Generated from class `MR::DeclOrder::C<true>`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export class MR_DeclOrder_C_true extends ffi.CppStruct
{
    static SIZE = 4;
    static ALIGNMENT = 4;

    get bleh() {return ffi.M.HEAP32[(this.rawPointer() + 0) >>> 2];}
    set bleh(value) {ffi.M.HEAPU32[(this.rawPointer() + 0) >>> 2] = value;}

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
        super(L.MR_DeclOrder_C_true.__ctor(args), true, null);
    }

    blah()
    {
        try
        {
            const __sret = ffi.malloc(4);
            const __ret = ffi.C.MR_DeclOrder_C_true_blah(this.rawPointer());
            ffi.check();
            return (ffi.M.HEAPU32[(__sret + 0) >>> 2] = __ret, new L.MR_DeclOrder_C_false(ffi.RAW, __sret, true, null));
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

