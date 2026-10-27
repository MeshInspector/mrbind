// The wrappers of the C bindings file `std_tuple_const_int_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores 4 objects: `const int &`, `const float &&`, `const std::string &`, `const std::string &&`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_tuple_const_int_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_tuple_const_int_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_Destroy(BigInt(ptr));}

    static __ctor_0(other)
    {
        const __ret = ffi.C.MR_C_std_tuple_const_int_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_ConstructFromAnother(BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(_0, _1, _2, _3)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr__0 = ffi.stackScalar(4, (p) => {ffi.HEAPU32()[(p) / 4] = _0;});
            const __ptr__1 = ffi.stackScalar(4, (p) => {ffi.HEAPF32()[(p) / 4] = _1;});
            const __str__2 = ffi.utf8(ffi.nonNullString(_2, "_2"));
            const __end__2 = ffi.utf8End();
            const __str__3 = ffi.utf8(ffi.nonNullString(_3, "_3"));
            const __end__3 = ffi.utf8End();
            const __ret = ffi.C.MR_C_std_tuple_const_int_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_Construct(BigInt(__ptr__0), BigInt(__ptr__1), BigInt(__str__2), BigInt(__end__2), BigInt(__str__3), BigInt(__end__3));
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
        if (__n === 1 && (args[0] instanceof L.MR_C_std_tuple_const_int_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref))
            return L.MR_C_std_tuple_const_int_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref.__ctor_0(args[0]);
        if (__n === 4 && typeof args[0] === "number" && typeof args[1] === "number" && typeof args[2] === "string" && typeof args[3] === "string")
            return L.MR_C_std_tuple_const_int_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref.__ctor_1(args[0], args[1], args[2], args[3]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_tuple_const_int_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_tuple_const_int_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref.__ctor(args), L.MR_C_std_tuple_const_int_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref.__destroy, null);
    }

    get_const_int_ref()
    {
        const __ret = ffi.C.MR_C_std_tuple_const_int_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_int_ref(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.HEAP32()[(Number(__ret)) / 4];
    }

    get_const_float_rvalue_ref()
    {
        const __ret = ffi.C.MR_C_std_tuple_const_int_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_float_rvalue_ref(BigInt(this.rawPointer()));
        ffi.check();
        return ffi.HEAPF32()[(Number(__ret)) / 4];
    }

    get_const_std_string_ref()
    {
        const __ret = ffi.C.MR_C_std_tuple_const_int_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_std_string_ref(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return new L.MR_C_std_string(ffi.RAW, Number(__ret), false, __owner);
    }

    get_const_std_string_rvalue_ref()
    {
        const __ret = ffi.C.MR_C_std_tuple_const_int_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_std_string_rvalue_ref(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return new L.MR_C_std_string(ffi.RAW, Number(__ret), false, __owner);
    }
}

