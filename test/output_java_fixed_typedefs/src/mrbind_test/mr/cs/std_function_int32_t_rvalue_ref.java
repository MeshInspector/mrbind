package mrbind_test.mr.cs;

/**
 * Stores a functor of type: `int32_t &&(void)`. Possibly stateful.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_function_int32_t_rvalue_ref extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_function_int32_t_rvalue_ref(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_function_int32_t_rvalue_ref::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.std_function_int32_t_rvalue_ref.H0.MR_C_std_function_int32_t_rvalue_ref_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_function_int32_t_rvalue_ref_DefaultConstruct()`.
     */
    public std_function_int32_t_rvalue_ref()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_function_int32_t_rvalue_ref.H0.MR_C_std_function_int32_t_rvalue_ref_DefaultConstruct.invokeExact();
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
     * Calls `MR_C_std_function_int32_t_rvalue_ref_ConstructFromAnother()`.
     */
    public std_function_int32_t_rvalue_ref(mrbind_test.mr.cs.std_function_int32_t_rvalue_ref other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.cs.std_function_int32_t_rvalue_ref other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_function_int32_t_rvalue_ref.H0.MR_C_std_function_int32_t_rvalue_ref_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_function_int32_t_rvalue_ref_AssignFromAnother()`.
     */
    public void assignFromAnother(mrbind_test.mr.cs.std_function_int32_t_rvalue_ref other)
    {
        try
        {
            mrbind_test.ffi.std_function_int32_t_rvalue_ref.H0.MR_C_std_function_int32_t_rvalue_ref_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_function_int32_t_rvalue_ref_has_value()`.
     */
    public boolean has_value()
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_function_int32_t_rvalue_ref.H0.MR_C_std_function_int32_t_rvalue_ref_has_value.invokeExact(rawPointer());
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
     * Calls `MR_C_std_function_int32_t_rvalue_ref_reset()`.
     */
    public void reset()
    {
        try
        {
            mrbind_test.ffi.std_function_int32_t_rvalue_ref.H0.MR_C_std_function_int32_t_rvalue_ref_reset.invokeExact(rawPointer());
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
     * Calls `MR_C_std_function_int32_t_rvalue_ref_call()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment call()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_function_int32_t_rvalue_ref.H0.MR_C_std_function_int32_t_rvalue_ref_call.invokeExact(rawPointer());
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

    /** A Java callable that an instance can hold, see `of()`. */
    @java.lang.FunctionalInterface
    public interface Fn
    {
        java.lang.foreign.MemorySegment call();
    }

    private static final java.lang.foreign.MemorySegment CALL_STUB = mrbind_test.Ffi.upcall(java.lang.invoke.MethodHandles.lookup(), std_function_int32_t_rvalue_ref.class, "__call", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));

    private static java.lang.foreign.MemorySegment __call(java.lang.foreign.MemorySegment _userdata, java.lang.foreign.MemorySegment _cleanup_value)
    {
        Fn func = (Fn)mrbind_test.Ffi.callbackState(_userdata);
        try
        {
            java.lang.foreign.MemorySegment __ret = func.call();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            mrbind_test.Ffi.callbackFailed(__e);
            return java.lang.foreign.MemorySegment.NULL;
        }
    }

    /** Constructs an instance holding a Java callable. The copies of the instance share it. An exception thrown by the callable is rethrown by the wrapper that called into C.
     *
     * Calls `MR_C_std_function_int32_t_rvalue_ref_ConstructEx()`. */
    public static mrbind_test.mr.cs.std_function_int32_t_rvalue_ref of(Fn func)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_function_int32_t_rvalue_ref.H0.MR_C_std_function_int32_t_rvalue_ref_ConstructEx.invokeExact(CALL_STUB, mrbind_test.Ffi.newCallbackState(java.util.Objects.requireNonNull(func, "func")), java.lang.foreign.MemorySegment.NULL, mrbind_test.Ffi.CALLBACK_STATE_STUB);
            mrbind_test.Ffi.checkException();
            return new mrbind_test.mr.cs.std_function_int32_t_rvalue_ref(__ret, true, null);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /** Replaces the stored callable with a Java one.
     *
     * Calls `MR_C_std_function_int32_t_rvalue_ref_AssignEx()`. */
    public void assignFn(Fn func)
    {
        try
        {
            mrbind_test.ffi.std_function_int32_t_rvalue_ref.H0.MR_C_std_function_int32_t_rvalue_ref_AssignEx.invokeExact(rawPointer(), CALL_STUB, mrbind_test.Ffi.newCallbackState(java.util.Objects.requireNonNull(func, "func")), java.lang.foreign.MemorySegment.NULL, mrbind_test.Ffi.CALLBACK_STATE_STUB);
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
