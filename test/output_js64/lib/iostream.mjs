// The wrappers of the C bindings file `iostream`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * A C++ input stream.
 *
 * Can't be created from JS, only references to it are used (`new X(ffi.RAW, pointer, false, owner)`).
 */
export class MR_C_std_istream extends ffi.CppObject
{
    static __ctor(args)
    {
        throw new TypeError("`std_istream` can't be constructed from JS.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], null, args[3]);
            return;
        }
        super(L.MR_C_std_istream.__ctor(args), null, null);
    }
}

/**
 * A C++ output stream.
 *
 * Can't be created from JS, only references to it are used (`new X(ffi.RAW, pointer, false, owner)`).
 */
export class MR_C_std_ostream extends ffi.CppObject
{
    static __ctor(args)
    {
        throw new TypeError("`std_ostream` can't be constructed from JS.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], null, args[3]);
            return;
        }
        super(L.MR_C_std_ostream.__ctor(args), null, null);
    }
}

export function MR_C_GetStdCout()
{
    const __ret = ffi.C.MR_C_GetStdCout();
    ffi.check();
    const __owner = null;
    return new L.MR_C_std_ostream(ffi.RAW, Number(__ret), false, __owner);
}

export function MR_C_GetStdCerr()
{
    const __ret = ffi.C.MR_C_GetStdCerr();
    ffi.check();
    const __owner = null;
    return new L.MR_C_std_ostream(ffi.RAW, Number(__ret), false, __owner);
}

export function MR_C_GetStdClog()
{
    const __ret = ffi.C.MR_C_GetStdClog();
    ffi.check();
    const __owner = null;
    return new L.MR_C_std_ostream(ffi.RAW, Number(__ret), false, __owner);
}

export function MR_C_GetStdCin()
{
    const __ret = ffi.C.MR_C_GetStdCin();
    ffi.check();
    const __owner = null;
    return new L.MR_C_std_istream(ffi.RAW, Number(__ret), false, __owner);
}

