package mrbind_test.mr.cs;

/**
 * Stores two objects: `int32_t` and `int32_t`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_pair_int32_t_float extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_pair_int32_t_float(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_pair_int32_t_float::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.std_pair_int32_t_float.H0.MR_C_std_pair_int32_t_float_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_pair_int32_t_float_DefaultConstruct()`.
     */
    public std_pair_int32_t_float()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_pair_int32_t_float.H0.MR_C_std_pair_int32_t_float_DefaultConstruct.invokeExact();
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
     * Calls `MR_C_std_pair_int32_t_float_ConstructFromAnother()`.
     */
    public std_pair_int32_t_float(mrbind_test.mr.cs.std_pair_int32_t_float other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.cs.std_pair_int32_t_float other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_pair_int32_t_float.H0.MR_C_std_pair_int32_t_float_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_pair_int32_t_float_AssignFromAnother()`.
     */
    public void assignFromAnother(mrbind_test.mr.cs.std_pair_int32_t_float other)
    {
        try
        {
            mrbind_test.ffi.std_pair_int32_t_float.H0.MR_C_std_pair_int32_t_float_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Constructs the pair elementwise.
     * The reference to the parameter `first` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_pair_int32_t_float_Construct()`.
     */
    public std_pair_int32_t_float(int first, float second)
    {
        this(__ctor_construct(first, second), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct(int first, float second)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_pair_int32_t_float.H0.MR_C_std_pair_int32_t_float_Construct.invokeExact(first, second);
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * The first of the two elements, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_pair_int32_t_float_first()`.
     */
    public int first()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_pair_int32_t_float.H0.MR_C_std_pair_int32_t_float_first.invokeExact(rawPointer());
            return __ret.reinterpret(4).get(java.lang.foreign.ValueLayout.JAVA_INT, 0);
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
     * The first of the two elements, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_pair_int32_t_float_first_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment first_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_pair_int32_t_float.H0.MR_C_std_pair_int32_t_float_first_mut.invokeExact(rawPointer());
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
     * The second of the two elements, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_pair_int32_t_float_second()`.
     */
    public float second()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_pair_int32_t_float.H0.MR_C_std_pair_int32_t_float_second.invokeExact(rawPointer());
            return __ret.reinterpret(4).get(java.lang.foreign.ValueLayout.JAVA_FLOAT, 0);
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
     * The second of the two elements, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_pair_int32_t_float_second_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment second_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_pair_int32_t_float.H0.MR_C_std_pair_int32_t_float_second_mut.invokeExact(rawPointer());
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
