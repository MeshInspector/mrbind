// The wrappers of the C bindings file `MR/test_matching_layout`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::MatchingLayout::A`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export class MR_MatchingLayout_A extends ffi.CppStruct
{
    static SIZE = 120;
    static ALIGNMENT = 8;

    get a() {return ffi.M.HEAP32[(this.rawPointer() + 0) >>> 2];}
    set a(value) {ffi.M.HEAPU32[(this.rawPointer() + 0) >>> 2] = value;}

    get b() {return ffi.M.HEAP16[(this.rawPointer() + 4) >>> 1];}
    set b(value) {ffi.M.HEAPU16[(this.rawPointer() + 4) >>> 1] = ((value << 16) >> 16);}

    get c() {return ffi.M.HEAPF32[(this.rawPointer() + 8) >>> 2];}
    set c(value) {ffi.M.HEAPF32[(this.rawPointer() + 8) >>> 2] = value;}

    get ll() {return Number(ffi.M.HEAP64[(this.rawPointer() + 16) >>> 3]);}
    set ll(value) {ffi.M.HEAPU64[(this.rawPointer() + 16) >>> 3] = BigInt(BigInt(value));}

    getArr(i0) {return ffi.M.HEAP32[(this.rawPointer() + 24 + (i0) * 4) >>> 2];}
    setArr(i0, value) {ffi.M.HEAPU32[(this.rawPointer() + 24 + (i0) * 4) >>> 2] = value;}

    getArr2d(i0, i1) {return ffi.M.HEAP32[(this.rawPointer() + 36 + ((i0) * 5 + i1) * 4) >>> 2];}
    setArr2d(i0, i1, value) {ffi.M.HEAPU32[(this.rawPointer() + 36 + ((i0) * 5 + i1) * 4) >>> 2] = value;}

    static get x()
    {
        const __ret = ffi.C.MR_MatchingLayout_A_Get_x();
        ffi.check();
        return ffi.M.HEAP32[(Number(__ret)) >>> 2];
    }

    static set x(value)
    {
        ffi.C.MR_MatchingLayout_A_Set_x(value);
        ffi.check();
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return ffi.zeroStruct(120);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2], args[3]);
            return;
        }
        super(L.MR_MatchingLayout_A.__ctor(args), true, null);
    }
}

/**
 * Generated from class `MR::MatchingLayout::B`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export class MR_MatchingLayout_B extends ffi.CppStruct
{
    static SIZE = 136;
    static ALIGNMENT = 8;

    get x() {return ffi.M.HEAP16[(this.rawPointer() + 0) >>> 1];}
    set x(value) {ffi.M.HEAPU16[(this.rawPointer() + 0) >>> 1] = ((value << 16) >> 16);}

    get a() {return new L.MR_MatchingLayout_A(ffi.RAW, this.rawPointer() + 8, false, this);}
    set a(value) {ffi.M.HEAPU8.copyWithin(this.rawPointer() + 8, ffi.ptrNonNull(value, "value"), ffi.ptrNonNull(value, "value") + 120);}

    get y() {return ffi.M.HEAP8[this.rawPointer() + 128];}
    set y(value) {ffi.M.HEAPU8[this.rawPointer() + 128] = ((value << 24) >> 24);}

    static __ctor_0()
    {
        const __sret = ffi.malloc(136);
        ffi.C.MR_MatchingLayout_B_DefaultConstruct(BigInt(__sret));
        ffi.check();
        return __sret;
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_MatchingLayout_B.__ctor_0();
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2], args[3]);
            return;
        }
        super(L.MR_MatchingLayout_B.__ctor(args), true, null);
    }
}

export function MR_MatchingLayout_foo()
{
    const __sret = ffi.malloc(136);
    ffi.C.MR_MatchingLayout_foo(BigInt(__sret));
    ffi.check();
    return new L.MR_MatchingLayout_B(ffi.RAW, __sret, true, null);
}

export function MR_MatchingLayout_bar(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __copy__1 = ffi.stackCopy(ffi.ptrNonNull(_1, "_1"), 136);
        ffi.C.MR_MatchingLayout_bar(BigInt(__copy__1));
        ffi.check();
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_MatchingLayout_baz(_1)
{
    ffi.C.MR_MatchingLayout_baz(BigInt(ffi.ptr(_1)));
    ffi.check();
}

export function MR_MatchingLayout_bleh(_1)
{
    const __ret = ffi.C.MR_MatchingLayout_bleh(BigInt(ffi.ptr(_1)));
    ffi.check();
    const __owner = _1;
    return (Number(__ret) === 0 ? null : new L.MR_MatchingLayout_B(ffi.RAW, Number(__ret), false, __owner));
}

