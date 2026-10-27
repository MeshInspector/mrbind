// The wrappers of the C bindings file `std_array_int_43`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * A fixed-size array of `int` of size 43.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export declare class MR_C_std_array_int_43 extends ffi.CppStruct
{
    /** The size of the struct in bytes. */
    static readonly SIZE: number;
    static readonly ALIGNMENT: number;
    /** The element of the array field `elems[43]`. */
    getElems(i0: number): number;
    setElems(i0: number, value: number): void;
    /** Zero-initialized. */
    constructor();
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
}

