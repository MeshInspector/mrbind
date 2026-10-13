package mrbind_test.mr.cs;

/**
 * Stores a functor of type: `int32_t(std::string)`. Possibly stateful.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_function_int32_t_from_std_string extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_function_int32_t_from_std_string(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_function_int32_t_from_std_string::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.std_function_int32_t_from_std_string.H0.MR_C_std_function_int32_t_from_std_string_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_function_int32_t_from_std_string_DefaultConstruct()`.
     */
    public std_function_int32_t_from_std_string()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_function_int32_t_from_std_string.H0.MR_C_std_function_int32_t_from_std_string_DefaultConstruct.invokeExact();
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
     * Calls `MR_C_std_function_int32_t_from_std_string_ConstructFromAnother()`.
     */
    public std_function_int32_t_from_std_string(mrbind_test.mr.cs.std_function_int32_t_from_std_string other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.cs.std_function_int32_t_from_std_string other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_function_int32_t_from_std_string.H0.MR_C_std_function_int32_t_from_std_string_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_function_int32_t_from_std_string_AssignFromAnother()`.
     */
    public void assignFromAnother(mrbind_test.mr.cs.std_function_int32_t_from_std_string other)
    {
        try
        {
            mrbind_test.ffi.std_function_int32_t_from_std_string.H0.MR_C_std_function_int32_t_from_std_string_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_function_int32_t_from_std_string_has_value()`.
     */
    public boolean has_value()
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_function_int32_t_from_std_string.H0.MR_C_std_function_int32_t_from_std_string_has_value.invokeExact(rawPointer());
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
     * Calls `MR_C_std_function_int32_t_from_std_string_reset()`.
     */
    public void reset()
    {
        try
        {
            mrbind_test.ffi.std_function_int32_t_from_std_string.H0.MR_C_std_function_int32_t_from_std_string_reset.invokeExact(rawPointer());
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
     * Calls `MR_C_std_function_int32_t_from_std_string_call()`.
     */
    public int call(java.lang.String _1)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            java.lang.foreign.MemorySegment __str__1 = mrbind_test.Ffi.utf8(__arena, java.util.Objects.requireNonNull(_1, "_1"));
            int __ret = (int)mrbind_test.ffi.std_function_int32_t_from_std_string.H0.MR_C_std_function_int32_t_from_std_string_call.invokeExact(rawPointer(), __str__1, mrbind_test.Ffi.end(__str__1));
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
}
