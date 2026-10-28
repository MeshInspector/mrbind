// The wrappers of the C bindings file `std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores 4 objects: `int &`, `float &&`, `std::string &`, `std::string &&`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_Destroy(BigInt(ptr));}

    static __ctor_0(_0, _1, _2, _3)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr__1 = ffi.stackScalar(4, (p) => {ffi.HEAPF32()[(p) / 4] = _1;});
            const __str__3 = ffi.utf8(ffi.nonNullString(_3, "_3"));
            const __end__3 = ffi.utf8End();
            const __ret = ffi.C.MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_Construct(BigInt(ffi.ScalarOutput.ref(_0, "_0")), BigInt(__ptr__1), BigInt(ffi.ptrNonNull(_2, "_2")), BigInt(__str__3), BigInt(__end__3));
            ffi.check();
            return Number(__ret);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 4 && args[0] instanceof L.int_output && typeof args[1] === "number" && (args[2] instanceof L.MR_C_std_string) && typeof args[3] === "string")
            return L.MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref.__ctor_0(args[0], args[1], args[2], args[3]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref.__ctor(args), L.MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref.__destroy, null);
    }

    get_int_ref()
    {
        const __ret = ffi.C.MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_int_ref(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    get_float_rvalue_ref()
    {
        const __ret = ffi.C.MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_float_rvalue_ref(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    get_std_string_ref()
    {
        const __ret = ffi.C.MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_std_string_ref(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return new L.MR_C_std_string(ffi.RAW, Number(__ret), false, __owner);
    }

    get_std_string_rvalue_ref()
    {
        const __ret = ffi.C.MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_std_string_rvalue_ref(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return new L.MR_C_std_string(ffi.RAW, Number(__ret), false, __owner);
    }
}

