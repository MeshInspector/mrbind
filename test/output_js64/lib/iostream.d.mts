// The wrappers of the C bindings file `iostream`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * A C++ input stream.
 *
 * Can't be created from JS, only references to it are used (`new X(ffi.RAW, pointer, false, owner)`).
 */
export declare class MR_C_std_istream extends ffi.CppObject
{
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
}

/**
 * A C++ output stream.
 *
 * Can't be created from JS, only references to it are used (`new X(ffi.RAW, pointer, false, owner)`).
 */
export declare class MR_C_std_ostream extends ffi.CppObject
{
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
}

/**
 * Returns the `stdout` stream.
 *
 * Calls `MR_C_GetStdCout()`.
 */
export declare function MR_C_GetStdCout(): L.MR_C_std_ostream;

/**
 * Returns the `stderr` stream, buffered.
 *
 * Calls `MR_C_GetStdCerr()`.
 */
export declare function MR_C_GetStdCerr(): L.MR_C_std_ostream;

/**
 * Returns the `stderr` stream, unbuffered.
 *
 * Calls `MR_C_GetStdClog()`.
 */
export declare function MR_C_GetStdClog(): L.MR_C_std_ostream;

/**
 * Returns the `stdin` stream.
 *
 * Calls `MR_C_GetStdCin()`.
 */
export declare function MR_C_GetStdCin(): L.MR_C_std_istream;

