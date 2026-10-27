// The wrappers of the C bindings file `std_array_int_43`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * A fixed-size array of `int` of size 43.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export class MR_C_std_array_int_43 extends ffi.CppStruct
{
    static SIZE = 172;
    static ALIGNMENT = 4;

    getElems(i0) {return ffi.HEAP32()[(this.rawPointer() + 0 + (i0) * 4) / 4];}
    setElems(i0, value) {ffi.HEAPU32()[(this.rawPointer() + 0 + (i0) * 4) / 4] = value;}

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return ffi.zeroStruct(172);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2], args[3]);
            return;
        }
        super(L.MR_C_std_array_int_43.__ctor(args), true, null);
    }
}

