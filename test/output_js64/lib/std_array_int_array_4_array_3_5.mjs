// The wrappers of the C bindings file `std_array_int_array_4_array_3_5`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * A fixed-size array of `int[3][4]` of size 5.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export class MR_C_std_array_int_array_4_array_3_5 extends ffi.CppStruct
{
    static SIZE = 240;
    static ALIGNMENT = 4;

    getElems(i0, i1, i2) {return ffi.HEAP32()[(this.rawPointer() + 0 + (((i0) * 3 + i1) * 4 + i2) * 4) / 4];}
    setElems(i0, i1, i2, value) {ffi.HEAPU32()[(this.rawPointer() + 0 + (((i0) * 3 + i1) * 4 + i2) * 4) / 4] = value;}

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return ffi.zeroStruct(240);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2], args[3]);
            return;
        }
        super(L.MR_C_std_array_int_array_4_array_3_5.__ctor(args), true, null);
    }
}

