package mrbind_test.mr.cs;

/**
 * Stores two objects: `int &&` and `int &&`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_pair_int_rvalue_ref_float_rvalue_ref extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_pair_int_rvalue_ref_float_rvalue_ref(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_pair_int_rvalue_ref_float_rvalue_ref::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.std_pair_int_rvalue_ref_float_rvalue_ref.H0.MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_ConstructFromAnother()`.
     */
    public std_pair_int_rvalue_ref_float_rvalue_ref(mrbind_test.mr.cs.std_pair_int_rvalue_ref_float_rvalue_ref other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.cs.std_pair_int_rvalue_ref_float_rvalue_ref other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_pair_int_rvalue_ref_float_rvalue_ref.H0.MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Constructs the pair elementwise.
     * The reference to the parameter `first` might be preserved in the constructed object.
     * The reference to the parameter `second` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_Construct()`. Some types are raw C types, see the C bindings for the details.
     */
    public std_pair_int_rvalue_ref_float_rvalue_ref(java.lang.foreign.MemorySegment first, java.lang.foreign.MemorySegment second)
    {
        this(__ctor_construct(first, second), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct(java.lang.foreign.MemorySegment first, java.lang.foreign.MemorySegment second)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_pair_int_rvalue_ref_float_rvalue_ref.H0.MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_Construct.invokeExact(first, second);
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
     * Calls `MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_first()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment first()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_pair_int_rvalue_ref_float_rvalue_ref.H0.MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_first.invokeExact(rawPointer());
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
     * Calls `MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_second()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment second()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_pair_int_rvalue_ref_float_rvalue_ref.H0.MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_second.invokeExact(rawPointer());
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
