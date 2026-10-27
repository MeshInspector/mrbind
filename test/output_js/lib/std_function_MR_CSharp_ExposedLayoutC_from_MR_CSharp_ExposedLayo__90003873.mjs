// The wrappers of the C bindings file `std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores a functor of type: `MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)`. Possibly stateful.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(other)
    {
        let __fn_other = null;
        try
        {
            __fn_other = typeof other === "function" ? L.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC.of(other) : other;
            const __ret = ffi.C.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(__fn_other, "other"));
            ffi.check();
            return (__ret >>> 0);
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
            return L.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC || typeof args[0] === "function"))
            return L.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC.__ctor(args), L.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC.__destroy, null);
    }

    assignFromAnother(other)
    {
        let __fn_other = null;
        try
        {
            __fn_other = typeof other === "function" ? L.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC.of(other) : other;
            ffi.C.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(__fn_other, "other"));
            ffi.check();
        }
        finally
        {
            if (__fn_other !== null && __fn_other !== other) __fn_other.delete();
        }
    }

    has_value()
    {
        const __ret = ffi.C.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_has_value(this.rawPointer());
        ffi.check();
        return (__ret !== 0);
    }

    reset()
    {
        ffi.C.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_reset(this.rawPointer());
        ffi.check();
    }

    call(_1)
    {
        const __sret = ffi.malloc(4);
        const __ret = ffi.C.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_call(this.rawPointer(), ffi.M.HEAP32[(ffi.ptrNonNull(_1, "_1") + 0) >>> 2]);
        ffi.check();
        return (ffi.M.HEAPU32[(__sret + 0) >>> 2] = __ret, new L.MR_CSharp_ExposedLayoutC(ffi.RAW, __sret, true, null));
    }

    static __stub = 0;
    static __trampoline(_1, _userdata, _cleanup_value)
    {
        const func = ffi.callbackState((_userdata >>> 0));
        try
        {
            const __ret = func((_1 >>> 0) === 0 ? null : new L.MR_CSharp_ExposedLayoutC(ffi.RAW, (_1 >>> 0), false, null));
            return ffi.M.HEAP32[(ffi.ptrNonNull(__ret, "the callback result") + 0) >>> 2];
        }
        catch (__e)
        {
            ffi.callbackFailed(__e);
            return 0;
        }
    }

    static of(func)
    {
        const __stub = L.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC.__stub || (L.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC.__stub = ffi.addFunction(L.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC.__trampoline, "ippp"));
        const __ret = (ffi.cppCall(() => ffi.C.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_ConstructEx(__stub, ffi.newCallbackState(ffi.nonNullFunction(func, "func")), 0, ffi.callbackStateStub())) >>> 0);
        ffi.check();
        return new L.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC(ffi.RAW, __ret, true, null);
    }

    assignFn(func)
    {
        const __stub = L.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC.__stub || (L.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC.__stub = ffi.addFunction(L.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC.__trampoline, "ippp"));
        ffi.cppCall(() => ffi.C.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_AssignEx(this.rawPointer(), __stub, ffi.newCallbackState(ffi.nonNullFunction(func, "func")), 0, ffi.callbackStateStub()));
        ffi.check();
    }
}

