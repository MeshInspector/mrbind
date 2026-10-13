package mrbind_test.mr.cs;

/**
 * Stores a functor of type: `MR::StdFunction::E(int32_t, MR::StdFunction::E)`. Possibly stateful.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E.H0.MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_DefaultConstruct()`.
     */
    public std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E.H0.MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_DefaultConstruct.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_ConstructFromAnother()`.
     */
    public std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E(mrbind_test.mr.cs.std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.cs.std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E.H0.MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(other);
        }
    }

    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_AssignFromAnother()`.
     */
    public void assignFromAnother(mrbind_test.mr.cs.std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E other)
    {
        try
        {
            mrbind_test.ffi.std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E.H0.MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(other);
        }
    }

    /**
     * Returns true if this instance stores a callable, as opposed to being null.
     *
     * Calls `MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_has_value()`.
     */
    public boolean has_value()
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E.H0.MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_has_value.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
        }
    }

    /**
     * Destroys the stored callable, making this instance null.
     *
     * Calls `MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_reset()`.
     */
    public void reset()
    {
        try
        {
            mrbind_test.ffi.std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E.H0.MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_reset.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
        }
    }

    /**
     * Calls the stored callable.
     *
     * Calls `MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_call()`.
     */
    public mrbind_test.mr.stdfunction.E call(int _1, mrbind_test.mr.stdfunction.E _2)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E.H0.MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_call.invokeExact(rawPointer(), _1, java.util.Objects.requireNonNull(_2, "_2").value);
            mrbind_test.Ffi.checkException();
            return mrbind_test.mr.stdfunction.E.of(__ret);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
        }
    }

    /** A Java callable that an instance can hold, see `of()`. */
    @java.lang.FunctionalInterface
    public interface Fn
    {
        mrbind_test.mr.stdfunction.E call(int _1, mrbind_test.mr.stdfunction.E _2);
    }

    private static final java.lang.foreign.MemorySegment CALL_STUB = mrbind_test.Ffi.upcall(java.lang.invoke.MethodHandles.lookup(), std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E.class, "__call", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));

    private static int __call(int _1, int _2, java.lang.foreign.MemorySegment _userdata, java.lang.foreign.MemorySegment _cleanup_value)
    {
        Fn func = (Fn)mrbind_test.Ffi.callbackState(_userdata);
        try
        {
            mrbind_test.mr.stdfunction.E __ret = func.call(_1, mrbind_test.mr.stdfunction.E.of(_2));
            return java.util.Objects.requireNonNull(__ret, "The callback returned null.").value;
        }
        catch (java.lang.Throwable __e)
        {
            mrbind_test.Ffi.callbackFailed(__e);
            return 0;
        }
    }

    /** Constructs an instance holding a Java callable. The copies of the instance share it. An exception thrown by the callable is rethrown by the wrapper that called into C.
     *
     * Calls `MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_ConstructEx()`. */
    public static mrbind_test.mr.cs.std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E of(Fn func)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E.H0.MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_ConstructEx.invokeExact(CALL_STUB, mrbind_test.Ffi.newCallbackState(java.util.Objects.requireNonNull(func, "func")), java.lang.foreign.MemorySegment.NULL, mrbind_test.Ffi.CALLBACK_STATE_STUB);
            mrbind_test.Ffi.checkException();
            return new mrbind_test.mr.cs.std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E(__ret, true, null);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /** Replaces the stored callable with a Java one.
     *
     * Calls `MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_AssignEx()`. */
    public void assignFn(Fn func)
    {
        try
        {
            mrbind_test.ffi.std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E.H0.MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_AssignEx.invokeExact(rawPointer(), CALL_STUB, mrbind_test.Ffi.newCallbackState(java.util.Objects.requireNonNull(func, "func")), java.lang.foreign.MemorySegment.NULL, mrbind_test.Ffi.CALLBACK_STATE_STUB);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
        }
    }
}
