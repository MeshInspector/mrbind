// The wrappers of the C bindings file `std_variant_int_float_std_string`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores one of 3 objects: `int`, `float`, `std::string`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_variant_int_float_std_string extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_variant_int_float_std_string_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_variant_int_float_std_string_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_variant_int_float_std_string_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_2(value)
    {
        const __ret = ffi.C.MR_C_std_variant_int_float_std_string_ConstructAs_int(value);
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_4(value)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __str_value = ffi.utf8(ffi.nonNullString(value, "value"));
            const __end_value = ffi.utf8End();
            const __ret = ffi.C.MR_C_std_variant_int_float_std_string_ConstructAs_std_string(__str_value, __end_value);
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
        if (__n === 0)
            return L.MR_C_std_variant_int_float_std_string.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_variant_int_float_std_string))
            return L.MR_C_std_variant_int_float_std_string.__ctor_1(args[0]);
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_C_std_variant_int_float_std_string.__ctor_2(args[0]);
        if (__n === 1 && typeof args[0] === "string")
            return L.MR_C_std_variant_int_float_std_string.__ctor_4(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    static constructAs_float(value)
    {
        const __ret = ffi.C.MR_C_std_variant_int_float_std_string_ConstructAs_float(value);
        ffi.check();
        return new L.MR_C_std_variant_int_float_std_string(ffi.RAW, (__ret >>> 0), true, null);
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_variant_int_float_std_string.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_variant_int_float_std_string.__ctor(args), L.MR_C_std_variant_int_float_std_string.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_variant_int_float_std_string_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
        ffi.check();
    }

    index()
    {
        const __ret = ffi.C.MR_C_std_variant_int_float_std_string_index(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    AssignAs_int(value)
    {
        ffi.C.MR_C_std_variant_int_float_std_string_AssignAs_int(this.rawPointer(), value);
        ffi.check();
    }

    AssignAs_float(value)
    {
        ffi.C.MR_C_std_variant_int_float_std_string_AssignAs_float(this.rawPointer(), value);
        ffi.check();
    }

    AssignAs_std_string(value)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __str_value = ffi.utf8(ffi.nonNullString(value, "value"));
            const __end_value = ffi.utf8End();
            ffi.C.MR_C_std_variant_int_float_std_string_AssignAs_std_string(this.rawPointer(), __str_value, __end_value);
            ffi.check();
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    get_int()
    {
        const __ret = ffi.C.MR_C_std_variant_int_float_std_string_get_int(this.rawPointer());
        ffi.check();
        return ((__ret >>> 0) === 0 ? null : ffi.M.HEAP32[((__ret >>> 0)) >>> 2]);
    }

    get_int_mut()
    {
        const __ret = ffi.C.MR_C_std_variant_int_float_std_string_get_int_mut(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    get_float()
    {
        const __ret = ffi.C.MR_C_std_variant_int_float_std_string_get_float(this.rawPointer());
        ffi.check();
        return ((__ret >>> 0) === 0 ? null : ffi.M.HEAPF32[((__ret >>> 0)) >>> 2]);
    }

    get_float_mut()
    {
        const __ret = ffi.C.MR_C_std_variant_int_float_std_string_get_float_mut(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    get_std_string()
    {
        const __ret = ffi.C.MR_C_std_variant_int_float_std_string_get_std_string(this.rawPointer());
        ffi.check();
        const __owner = this;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner));
    }

    get_std_string_mut()
    {
        const __ret = ffi.C.MR_C_std_variant_int_float_std_string_get_std_string_mut(this.rawPointer());
        ffi.check();
        const __owner = this;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_string(ffi.RAW, (__ret >>> 0), false, __owner));
    }
}

