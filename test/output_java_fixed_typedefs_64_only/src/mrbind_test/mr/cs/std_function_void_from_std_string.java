package mrbind_test.mr.cs;

/**
 * Stores a functor of type: `void(std::string)`. Possibly stateful.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_function_void_from_std_string extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_function_void_from_std_string(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_function_void_from_std_string::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.std_function_void_from_std_string.H0.MR_C_std_function_void_from_std_string_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_function_void_from_std_string_DefaultConstruct()`.
     */
    public std_function_void_from_std_string()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_function_void_from_std_string.H0.MR_C_std_function_void_from_std_string_DefaultConstruct.invokeExact();
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
     * Calls `MR_C_std_function_void_from_std_string_ConstructFromAnother()`.
     */
    public std_function_void_from_std_string(mrbind_test.mr.cs.std_function_void_from_std_string other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.cs.std_function_void_from_std_string other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_function_void_from_std_string.H0.MR_C_std_function_void_from_std_string_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_function_void_from_std_string_AssignFromAnother()`.
     */
    public void assignFromAnother(mrbind_test.mr.cs.std_function_void_from_std_string other)
    {
        try
        {
            mrbind_test.ffi.std_function_void_from_std_string.H0.MR_C_std_function_void_from_std_string_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_function_void_from_std_string_has_value()`.
     */
    public boolean has_value()
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_function_void_from_std_string.H0.MR_C_std_function_void_from_std_string_has_value.invokeExact(rawPointer());
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
     * Calls `MR_C_std_function_void_from_std_string_reset()`.
     */
    public void reset()
    {
        try
        {
            mrbind_test.ffi.std_function_void_from_std_string.H0.MR_C_std_function_void_from_std_string_reset.invokeExact(rawPointer());
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
     * Calls `MR_C_std_function_void_from_std_string_call()`.
     */
    public void call(java.lang.String _1)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            java.lang.foreign.MemorySegment __str__1 = mrbind_test.Ffi.utf8(__arena, java.util.Objects.requireNonNull(_1, "_1"));
            mrbind_test.ffi.std_function_void_from_std_string.H0.MR_C_std_function_void_from_std_string_call.invokeExact(rawPointer(), __str__1, mrbind_test.Ffi.end(__str__1));
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

    /** A Java callable that an instance can hold, see `of()`. */
    @java.lang.FunctionalInterface
    public interface Fn
    {
        void call(mrbind_test.mr.cs.std_string _1);
    }

    private static final java.lang.foreign.MemorySegment CALL_STUB = mrbind_test.Ffi.upcall(java.lang.invoke.MethodHandles.lookup(), std_function_void_from_std_string.class, "__call", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));

    private static void __call(java.lang.foreign.MemorySegment _1, java.lang.foreign.MemorySegment _userdata, java.lang.foreign.MemorySegment _cleanup_value)
    {
        Fn func = (Fn)mrbind_test.Ffi.callbackState(_userdata);
        try
        {
            func.call(_1.address() == 0 ? null : new mrbind_test.mr.cs.std_string(_1, false, null));
        }
        catch (java.lang.Throwable __e)
        {
            mrbind_test.Ffi.callbackFailed(__e);
        }
    }

    /** Constructs an instance holding a Java callable. The copies of the instance share it. An exception thrown by the callable is rethrown by the wrapper that called into C.
     *
     * Calls `MR_C_std_function_void_from_std_string_ConstructEx()`. */
    public static mrbind_test.mr.cs.std_function_void_from_std_string of(Fn func)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_function_void_from_std_string.H0.MR_C_std_function_void_from_std_string_ConstructEx.invokeExact(CALL_STUB, mrbind_test.Ffi.newCallbackState(java.util.Objects.requireNonNull(func, "func")), java.lang.foreign.MemorySegment.NULL, mrbind_test.Ffi.CALLBACK_STATE_STUB);
            mrbind_test.Ffi.checkException();
            return new mrbind_test.mr.cs.std_function_void_from_std_string(__ret, true, null);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /** Replaces the stored callable with a Java one.
     *
     * Calls `MR_C_std_function_void_from_std_string_AssignEx()`. */
    public void assignFn(Fn func)
    {
        try
        {
            mrbind_test.ffi.std_function_void_from_std_string.H0.MR_C_std_function_void_from_std_string_AssignEx.invokeExact(rawPointer(), CALL_STUB, mrbind_test.Ffi.newCallbackState(java.util.Objects.requireNonNull(func, "func")), java.lang.foreign.MemorySegment.NULL, mrbind_test.Ffi.CALLBACK_STATE_STUB);
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
