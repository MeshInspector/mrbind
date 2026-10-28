// The classes of the mutable scalar parameters, see `ffi.ScalarOutput`.
import * as ffi from "../ffi.mjs";

/** An array of `bool`, for the mutable parameters of this type. See `ffi.ScalarOutput`. */
export class bool_output extends ffi.ScalarOutput
{
    static SIZE = 1;
    static ZERO = false;
    static TYPE = "boolean";
    static check(v) {return typeof v === "boolean";}
    static read(p) {return (ffi.HEAPU8()[p] !== 0);}
    static write(p, v) {ffi.HEAPU8()[p] = v ? 1 : 0;}
}

/** An array of `char`, for the mutable parameters of this type. See `ffi.ScalarOutput`. */
export class char_output extends ffi.ScalarOutput
{
    static SIZE = 1;
    static ZERO = 0;
    static TYPE = "number";
    static check(v) {return typeof v === "number";}
    static read(p) {return ffi.HEAP8()[p];}
    static write(p, v) {ffi.HEAPU8()[p] = v;}
}

/** An array of `float`, for the mutable parameters of this type. See `ffi.ScalarOutput`. */
export class float_output extends ffi.ScalarOutput
{
    static SIZE = 4;
    static ZERO = 0;
    static TYPE = "number";
    static check(v) {return typeof v === "number";}
    static read(p) {return ffi.HEAPF32()[(p) >>> 2];}
    static write(p, v) {ffi.HEAPF32()[(p) >>> 2] = v;}
}

/** An array of `int`, for the mutable parameters of this type. See `ffi.ScalarOutput`. */
export class int_output extends ffi.ScalarOutput
{
    static SIZE = 4;
    static ZERO = 0;
    static TYPE = "number";
    static check(v) {return typeof v === "number";}
    static read(p) {return ffi.HEAP32()[(p) >>> 2];}
    static write(p, v) {ffi.HEAPU32()[(p) >>> 2] = v;}
}

/** An array of `signed_char`, for the mutable parameters of this type. See `ffi.ScalarOutput`. */
export class signed_char_output extends ffi.ScalarOutput
{
    static SIZE = 1;
    static ZERO = 0;
    static TYPE = "number";
    static check(v) {return typeof v === "number";}
    static read(p) {return ffi.HEAP8()[p];}
    static write(p, v) {ffi.HEAPU8()[p] = v;}
}

/** An array of `unsigned_char`, for the mutable parameters of this type. See `ffi.ScalarOutput`. */
export class unsigned_char_output extends ffi.ScalarOutput
{
    static SIZE = 1;
    static ZERO = 0;
    static TYPE = "number";
    static check(v) {return typeof v === "number";}
    static read(p) {return ffi.HEAPU8()[p];}
    static write(p, v) {ffi.HEAPU8()[p] = v;}
}

/** An array of `unsigned_short`, for the mutable parameters of this type. See `ffi.ScalarOutput`. */
export class unsigned_short_output extends ffi.ScalarOutput
{
    static SIZE = 2;
    static ZERO = 0;
    static TYPE = "number";
    static check(v) {return typeof v === "number";}
    static read(p) {return ffi.HEAPU16()[(p) >>> 1];}
    static write(p, v) {ffi.HEAPU16()[(p) >>> 1] = v;}
}

