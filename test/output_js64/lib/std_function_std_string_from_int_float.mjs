// The wrappers of the C bindings file `std_function_std_string_from_int_float`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores a functor of type: `std::string(int, float)`. Possibly stateful.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_function_std_string_from_int_float extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_function_std_string_from_int_float_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_function_std_string_from_int_float_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(other)
    {
        let __fn_other = null;
        try
        {
            __fn_other = typeof other === "function" ? L.MR_C_std_function_std_string_from_int_float.of(other) : other;
            const __ret = ffi.C.MR_C_std_function_std_string_from_int_float_ConstructFromAnother(ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(__fn_other, "other")));
            ffi.check();
            return Number(__ret);
        }
        finally
        {
            if (__fn_other !== null && __fn_other !== other) __fn_other.delete();
        }
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_function_std_string_from_int_float.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_function_std_string_from_int_float || typeof args[0] === "function"))
            return L.MR_C_std_function_std_string_from_int_float.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_function_std_string_from_int_float.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_function_std_string_from_int_float.__ctor(args), L.MR_C_std_function_std_string_from_int_float.__destroy, null);
    }

    assignFromAnother(other)
    {
        let __fn_other = null;
        try
        {
            __fn_other = typeof other === "function" ? L.MR_C_std_function_std_string_from_int_float.of(other) : other;
            ffi.C.MR_C_std_function_std_string_from_int_float_AssignFromAnother(BigInt(this.rawPointer()), ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(__fn_other, "other")));
            ffi.check();
        }
        finally
        {
            if (__fn_other !== null && __fn_other !== other) __fn_other.delete();
        }
    }

    has_value()
    {
        const __ret = ffi.C.MR_C_std_function_std_string_from_int_float_has_value(BigInt(this.rawPointer()));
        ffi.check();
        return (__ret !== 0);
    }

    reset()
    {
        ffi.C.MR_C_std_function_std_string_from_int_float_reset(BigInt(this.rawPointer()));
        ffi.check();
    }

    call(_1, _2)
    {
        const __ret = ffi.C.MR_C_std_function_std_string_from_int_float_call(BigInt(this.rawPointer()), _1, _2);
        ffi.check();
        return ffi.takeString(Number(__ret));
    }

    static __stub = 0;
    static __trampoline(_return_pass_by, _1, _2, _userdata, _cleanup_value)
    {
        const func = ffi.callbackState(Number(_userdata));
        try
        {
            const __ret = func(_1, _2);
            ffi.M.HEAP32[Number(_return_pass_by) >>> 2] = ffi.PASS_BY_MOVE_AND_DESTROY;
            return BigInt(ffi.nonNull(__ret, "the callback result").release());
        }
        catch (__e)
        {
            ffi.callbackFailed(__e);
            return 0n;
        }
    }

    static of(func)
    {
        const __stub = L.MR_C_std_function_std_string_from_int_float.__stub || (L.MR_C_std_function_std_string_from_int_float.__stub = ffi.addFunction(L.MR_C_std_function_std_string_from_int_float.__trampoline, "ppifpp"));
        const __ret = Number(ffi.cppCall(() => ffi.C.MR_C_std_function_std_string_from_int_float_ConstructEx(BigInt(__stub), BigInt(ffi.newCallbackState(ffi.nonNullFunction(func, "func"))), BigInt(0), BigInt(ffi.callbackStateStub()))));
        ffi.check();
        return new L.MR_C_std_function_std_string_from_int_float(ffi.RAW, __ret, true, null);
    }

    assignFn(func)
    {
        const __stub = L.MR_C_std_function_std_string_from_int_float.__stub || (L.MR_C_std_function_std_string_from_int_float.__stub = ffi.addFunction(L.MR_C_std_function_std_string_from_int_float.__trampoline, "ppifpp"));
        ffi.cppCall(() => ffi.C.MR_C_std_function_std_string_from_int_float_AssignEx(BigInt(this.rawPointer()), BigInt(__stub), BigInt(ffi.newCallbackState(ffi.nonNullFunction(func, "func"))), BigInt(0), BigInt(ffi.callbackStateStub())));
        ffi.check();
    }
}

