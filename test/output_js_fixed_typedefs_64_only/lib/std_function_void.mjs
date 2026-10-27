// The wrappers of the C bindings file `std_function_void`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores a functor of type: `void(void)`. Possibly stateful.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_function_void extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_function_void_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_function_void_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(other)
    {
        let __fn_other = null;
        try
        {
            __fn_other = typeof other === "function" ? L.MR_C_std_function_void.of(other) : other;
            const __ret = ffi.C.MR_C_std_function_void_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(__fn_other, "other"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
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
            return L.MR_C_std_function_void.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_function_void || typeof args[0] === "function"))
            return L.MR_C_std_function_void.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_function_void.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_function_void.__ctor(args), L.MR_C_std_function_void.__destroy, null);
    }

    assignFromAnother(other)
    {
        let __fn_other = null;
        try
        {
            __fn_other = typeof other === "function" ? L.MR_C_std_function_void.of(other) : other;
            ffi.C.MR_C_std_function_void_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(__fn_other, "other"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            if (__fn_other !== null && __fn_other !== other) __fn_other.delete();
        }
    }

    has_value()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_function_void_has_value(this.rawPointer());
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    reset()
    {
        try
        {
            ffi.C.MR_C_std_function_void_reset(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    call()
    {
        try
        {
            ffi.C.MR_C_std_function_void_call(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __stub = 0;
    static __trampoline(_userdata, _cleanup_value)
    {
        const func = ffi.callbackState((_userdata >>> 0));
        try
        {
            func();
        }
        catch (__e)
        {
            ffi.callbackFailed(__e);
        }
    }

    static of(func)
    {
        const __stub = L.MR_C_std_function_void.__stub || (L.MR_C_std_function_void.__stub = ffi.addFunction(L.MR_C_std_function_void.__trampoline, "vpp"));
        const __ret = (ffi.cppCall(() => ffi.C.MR_C_std_function_void_ConstructEx(__stub, ffi.newCallbackState(ffi.nonNullFunction(func, "func")), 0, ffi.callbackStateStub())) >>> 0);
        ffi.check();
        return new L.MR_C_std_function_void(ffi.RAW, __ret, true, null);
    }

    assignFn(func)
    {
        const __stub = L.MR_C_std_function_void.__stub || (L.MR_C_std_function_void.__stub = ffi.addFunction(L.MR_C_std_function_void.__trampoline, "vpp"));
        ffi.cppCall(() => ffi.C.MR_C_std_function_void_AssignEx(this.rawPointer(), __stub, ffi.newCallbackState(ffi.nonNullFunction(func, "func")), 0, ffi.callbackStateStub()));
        ffi.check();
    }
}

