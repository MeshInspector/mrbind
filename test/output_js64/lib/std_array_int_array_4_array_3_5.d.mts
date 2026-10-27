// The wrappers of the C bindings file `std_array_int_array_4_array_3_5`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * A fixed-size array of `int[3][4]` of size 5.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export declare class MR_C_std_array_int_array_4_array_3_5 extends ffi.CppStruct
{
    /** The size of the struct in bytes. */
    static readonly SIZE: number;
    static readonly ALIGNMENT: number;
    /** The element of the array field `elems[5][3][4]`. */
    getElems(i0: number, i1: number, i2: number): number;
    setElems(i0: number, i1: number, i2: number, value: number): void;
    /** Zero-initialized. */
    constructor();
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
}

