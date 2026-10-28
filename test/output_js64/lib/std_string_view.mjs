// The wrappers of the C bindings file `std_string_view`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * A non-owning string view. Not necessarily null-terminated.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_string_view extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_string_view_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_string_view_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_string_view_ConstructFromAnother(BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor_2(other)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __str_other = ffi.utf8(ffi.nonNullString(other, "other"));
            const __end_other = ffi.utf8End();
            const __ret = ffi.C.MR_C_std_string_view_ConstructFrom(BigInt(__str_other), BigInt(__end_other));
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
        if (__n === 0)
            return L.MR_C_std_string_view.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_string_view))
            return L.MR_C_std_string_view.__ctor_1(args[0]);
        if (__n === 1 && typeof args[0] === "string")
            return L.MR_C_std_string_view.__ctor_2(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_string_view.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_string_view.__ctor(args), L.MR_C_std_string_view.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_string_view_AssignFromAnother(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
    }

    assignFrom(other)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __str_other = ffi.utf8(ffi.nonNullString(other, "other"));
            const __end_other = ffi.utf8End();
            ffi.C.MR_C_std_string_view_AssignFrom(BigInt(this.rawPointer()), BigInt(__str_other), BigInt(__end_other));
            ffi.check();
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    size()
    {
        const __ret = ffi.C.MR_C_std_string_view_size(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    data()
    {
        const __ret = ffi.C.MR_C_std_string_view_data(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    data_end()
    {
        const __ret = ffi.C.MR_C_std_string_view_data_end(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    toArray()
    {
        const __n = Number(ffi.cppCall(() => ffi.C.MR_C_std_string_view_size(BigInt(this.rawPointer()))));
        const __p = Number(ffi.cppCall(() => ffi.C.MR_C_std_string_view_data(BigInt(this.rawPointer()))));
        return ffi.typedArrayCopy(Int8Array, __p, __n * 1);
    }

    view()
    {
        const __n = Number(ffi.cppCall(() => ffi.C.MR_C_std_string_view_size(BigInt(this.rawPointer()))));
        const __p = Number(ffi.cppCall(() => ffi.C.MR_C_std_string_view_data(BigInt(this.rawPointer()))));
        return ffi.typedArrayAt(Int8Array, __p, __n * 1);
    }
}

