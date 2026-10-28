// The wrappers of the C bindings file `std_string`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * A heap-allocated null-terminated string.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_string extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_string_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_string_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_string_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_2(other)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __str_other = ffi.utf8(ffi.nonNullString(other, "other"));
            const __end_other = ffi.utf8End();
            const __ret = ffi.C.MR_C_std_string_ConstructFrom(__str_other, __end_other);
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
            return L.MR_C_std_string.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_string))
            return L.MR_C_std_string.__ctor_1(args[0]);
        if (__n === 1 && typeof args[0] === "string")
            return L.MR_C_std_string.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_string.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_string.__ctor(args), L.MR_C_std_string.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_string_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
        ffi.check();
    }

    assignFrom(other)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __str_other = ffi.utf8(ffi.nonNullString(other, "other"));
            const __end_other = ffi.utf8End();
            ffi.C.MR_C_std_string_AssignFrom(this.rawPointer(), __str_other, __end_other);
            ffi.check();
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    size()
    {
        const __ret = ffi.C.MR_C_std_string_size(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    data()
    {
        const __ret = ffi.C.MR_C_std_string_data(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    data_mut()
    {
        const __ret = ffi.C.MR_C_std_string_data_mut(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    data_end()
    {
        const __ret = ffi.C.MR_C_std_string_data_end(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    data_end_mut()
    {
        const __ret = ffi.C.MR_C_std_string_data_end_mut(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    toArray()
    {
        const __n = (ffi.cppCall(() => ffi.C.MR_C_std_string_size(this.rawPointer())) >>> 0);
        const __p = (ffi.cppCall(() => ffi.C.MR_C_std_string_data(this.rawPointer())) >>> 0);
        return ffi.typedArrayCopy(Int8Array, __p, __n * 1);
    }

    view()
    {
        const __n = (ffi.cppCall(() => ffi.C.MR_C_std_string_size(this.rawPointer())) >>> 0);
        const __p = (ffi.cppCall(() => ffi.C.MR_C_std_string_data(this.rawPointer())) >>> 0);
        return ffi.typedArrayAt(Int8Array, __p, __n * 1);
    }

    toString()
    {
        return ffi.string((ffi.cppCall(() => ffi.C.MR_C_std_string_data(this.rawPointer())) >>> 0), (ffi.cppCall(() => ffi.C.MR_C_std_string_size(this.rawPointer())) >>> 0));
    }
}

