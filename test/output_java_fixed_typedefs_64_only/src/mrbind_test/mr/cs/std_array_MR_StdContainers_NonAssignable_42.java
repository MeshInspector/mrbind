package mrbind_test.mr.cs;

/**
 * A fixed-size array of `MR::StdContainers::NonAssignable` of size 42.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_array_MR_StdContainers_NonAssignable_42 extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_array_MR_StdContainers_NonAssignable_42(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_array_MR_StdContainers_NonAssignable_42::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.std_array_MR_StdContainers_NonAssignable_42.H0.MR_C_std_array_MR_StdContainers_NonAssignable_42_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_array_MR_StdContainers_NonAssignable_42_DefaultConstruct()`.
     */
    public std_array_MR_StdContainers_NonAssignable_42()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_array_MR_StdContainers_NonAssignable_42.H0.MR_C_std_array_MR_StdContainers_NonAssignable_42_DefaultConstruct.invokeExact();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * The element at a specific index, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_array_MR_StdContainers_NonAssignable_42_at()`.
     */
    public mrbind_test.mr.stdcontainers.NonAssignable at(long i)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_array_MR_StdContainers_NonAssignable_42.H0.MR_C_std_array_MR_StdContainers_NonAssignable_42_at.invokeExact(rawPointer(), i);
            java.lang.Object __owner = this;
            return new mrbind_test.mr.stdcontainers.NonAssignable(__ret, false, __owner);
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
     * The element at a specific index, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_array_MR_StdContainers_NonAssignable_42_at_mut()`.
     */
    public mrbind_test.mr.stdcontainers.NonAssignable at_mut(long i)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_array_MR_StdContainers_NonAssignable_42.H0.MR_C_std_array_MR_StdContainers_NonAssignable_42_at_mut.invokeExact(rawPointer(), i);
            java.lang.Object __owner = this;
            return new mrbind_test.mr.stdcontainers.NonAssignable(__ret, false, __owner);
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
     * Returns a pointer to the continuous storage that holds all elements, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_array_MR_StdContainers_NonAssignable_42_data()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment data()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_array_MR_StdContainers_NonAssignable_42.H0.MR_C_std_array_MR_StdContainers_NonAssignable_42_data.invokeExact(rawPointer());
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
     * Returns a pointer to the continuous storage that holds all elements, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_array_MR_StdContainers_NonAssignable_42_data_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment data_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_array_MR_StdContainers_NonAssignable_42.H0.MR_C_std_array_MR_StdContainers_NonAssignable_42_data_mut.invokeExact(rawPointer());
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
     * The begin iterator, const.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_array_MR_StdContainers_NonAssignable_42_begin()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment begin()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_array_MR_StdContainers_NonAssignable_42.H0.MR_C_std_array_MR_StdContainers_NonAssignable_42_begin.invokeExact(rawPointer());
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
     * The begin iterator, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_array_MR_StdContainers_NonAssignable_42_begin_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment begin_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_array_MR_StdContainers_NonAssignable_42.H0.MR_C_std_array_MR_StdContainers_NonAssignable_42_begin_mut.invokeExact(rawPointer());
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
     * The end iterator, const.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_array_MR_StdContainers_NonAssignable_42_end()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment end()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_array_MR_StdContainers_NonAssignable_42.H0.MR_C_std_array_MR_StdContainers_NonAssignable_42_end.invokeExact(rawPointer());
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
     * The end iterator, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_array_MR_StdContainers_NonAssignable_42_end_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment end_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_array_MR_StdContainers_NonAssignable_42.H0.MR_C_std_array_MR_StdContainers_NonAssignable_42_end_mut.invokeExact(rawPointer());
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
