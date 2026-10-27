// The wrappers of the C bindings file `std_optional_std_string`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores either a single `std::string` or nothing.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_optional_std_string extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_optional_std_string_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_optional_std_string_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_optional_std_string_ConstructFromAnother((other == null ? ffi.PASS_BY_NO_OBJECT : ffi.PASS_BY_COPY), BigInt(ffi.ptr(other)));
        ffi.check();
        return Number(__ret);
    }

    static __ctor_2(other)
    {
        const __ret = ffi.C.MR_C_std_optional_std_string_ConstructFrom(BigInt(other[0]), BigInt(other[1]));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_optional_std_string.__ctor_0();
        if (__n === 1 && (__n <= 0 || (args[0] == null || args[0] instanceof L.MR_C_std_optional_std_string)))
            return L.MR_C_std_optional_std_string.__ctor_1(args[0]);
        if (__n === 1 && Array.isArray(args[0]))
            return L.MR_C_std_optional_std_string.__ctor_2(args[0]);
        if (__n >= 0 && __n < 1 && (__n <= 0 || (args[0] == null || args[0] instanceof L.MR_C_std_optional_std_string)))
            return L.MR_C_std_optional_std_string.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_optional_std_string.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_optional_std_string.__ctor(args), L.MR_C_std_optional_std_string.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_optional_std_string_AssignFromAnother(BigInt(this.rawPointer()), (other == null ? ffi.PASS_BY_NO_OBJECT : ffi.PASS_BY_COPY), BigInt(ffi.ptr(other)));
        ffi.check();
    }

    assignFrom(other)
    {
        ffi.C.MR_C_std_optional_std_string_AssignFrom(BigInt(this.rawPointer()), BigInt(other[0]), BigInt(other[1]));
        ffi.check();
    }

    has_value()
    {
        const __ret = ffi.C.MR_C_std_optional_std_string_has_value(BigInt(this.rawPointer()));
        ffi.check();
        return (__ret !== 0);
    }

    value()
    {
        const __ret = ffi.C.MR_C_std_optional_std_string_value(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return (Number(__ret) === 0 ? null : new L.MR_C_std_string(ffi.RAW, Number(__ret), false, __owner));
    }

    value_mut()
    {
        const __ret = ffi.C.MR_C_std_optional_std_string_value_mut(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return (Number(__ret) === 0 ? null : new L.MR_C_std_string(ffi.RAW, Number(__ret), false, __owner));
    }
}

