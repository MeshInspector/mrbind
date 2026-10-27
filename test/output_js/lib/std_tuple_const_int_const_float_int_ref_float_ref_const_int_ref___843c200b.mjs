// The wrappers of the C bindings file `std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_flo__22dd`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores 10 objects: `const int`, `const float`, `int &`, `float &`, `const int &`, `const float &`, `int &&`, `float &&`, `const int &&`, `const float &&`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Destroy(ptr);}

    static __ctor_0(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr__4 = ffi.stackScalar(4, (p) => {ffi.HEAPU32()[(p) >>> 2] = _4;});
            const __ptr__5 = ffi.stackScalar(4, (p) => {ffi.HEAPF32()[(p) >>> 2] = _5;});
            const __ptr__8 = ffi.stackScalar(4, (p) => {ffi.HEAPU32()[(p) >>> 2] = _8;});
            const __ptr__9 = ffi.stackScalar(4, (p) => {ffi.HEAPF32()[(p) >>> 2] = _9;});
            const __ret = ffi.C.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Construct(_0, _1, _2, _3, __ptr__4, __ptr__5, _6, _7, __ptr__8, __ptr__9);
            ffi.check();
            return (__ret >>> 0);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 10 && typeof args[0] === "number" && typeof args[1] === "number" && typeof args[2] === "number" && typeof args[3] === "number" && typeof args[4] === "number" && typeof args[5] === "number" && typeof args[6] === "number" && typeof args[7] === "number" && typeof args[8] === "number" && typeof args[9] === "number")
            return L.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref.__ctor_0(args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7], args[8], args[9]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref.__ctor(args), L.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref.__destroy, null);
    }

    get_const_int()
    {
        const __ret = ffi.C.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_int(this.rawPointer());
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    get_const_float()
    {
        const __ret = ffi.C.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_float(this.rawPointer());
        ffi.check();
        return ffi.HEAPF32()[((__ret >>> 0)) >>> 2];
    }

    get_int_ref()
    {
        const __ret = ffi.C.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_int_ref(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    get_float_ref()
    {
        const __ret = ffi.C.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_float_ref(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    get_const_int_ref()
    {
        const __ret = ffi.C.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_int_ref(this.rawPointer());
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    get_const_float_ref()
    {
        const __ret = ffi.C.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_float_ref(this.rawPointer());
        ffi.check();
        return ffi.HEAPF32()[((__ret >>> 0)) >>> 2];
    }

    get_int_rvalue_ref()
    {
        const __ret = ffi.C.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_int_rvalue_ref(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    get_float_rvalue_ref()
    {
        const __ret = ffi.C.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_float_rvalue_ref(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    get_const_int_rvalue_ref()
    {
        const __ret = ffi.C.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_int_rvalue_ref(this.rawPointer());
        ffi.check();
        return ffi.HEAP32()[((__ret >>> 0)) >>> 2];
    }

    get_const_float_rvalue_ref()
    {
        const __ret = ffi.C.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_float_rvalue_ref(this.rawPointer());
        ffi.check();
        return ffi.HEAPF32()[((__ret >>> 0)) >>> 2];
    }
}

