package mrbind_test.mr.cs;

/**
 * Stores two objects: `int` and `int`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_pair_int_std_string extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_pair_int_std_string(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_pair_int_std_string::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.std_pair_int_std_string.H0.MR_C_std_pair_int_std_string_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_pair_int_std_string_DefaultConstruct()`.
     */
    public std_pair_int_std_string()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_pair_int_std_string.H0.MR_C_std_pair_int_std_string_DefaultConstruct.invokeExact();
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
     * Calls `MR_C_std_pair_int_std_string_ConstructFromAnother()`.
     */
    public std_pair_int_std_string(mrbind_test.mr.cs.std_pair_int_std_string other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.cs.std_pair_int_std_string other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_pair_int_std_string.H0.MR_C_std_pair_int_std_string_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_pair_int_std_string_AssignFromAnother()`.
     */
    public void assignFromAnother(mrbind_test.mr.cs.std_pair_int_std_string other)
    {
        try
        {
            mrbind_test.ffi.std_pair_int_std_string.H0.MR_C_std_pair_int_std_string_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * The reference to the parameter `second` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_pair_int_std_string_Construct()`.
     */
    public std_pair_int_std_string(int first, java.lang.String second)
    {
        this(__ctor_construct(first, second), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct(int first, java.lang.String second)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            java.lang.foreign.MemorySegment __str_second = mrbind_test.Ffi.utf8(__arena, java.util.Objects.requireNonNull(second, "second"));
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_pair_int_std_string.H0.MR_C_std_pair_int_std_string_Construct.invokeExact(first, __str_second, mrbind_test.Ffi.end(__str_second));
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
     * Calls `MR_C_std_pair_int_std_string_first()`.
     */
    public int first()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_pair_int_std_string.H0.MR_C_std_pair_int_std_string_first.invokeExact(rawPointer());
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
     * Calls `MR_C_std_pair_int_std_string_first_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment first_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_pair_int_std_string.H0.MR_C_std_pair_int_std_string_first_mut.invokeExact(rawPointer());
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
     * Calls `MR_C_std_pair_int_std_string_second()`.
     */
    public mrbind_test.mr.cs.std_string second()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_pair_int_std_string.H0.MR_C_std_pair_int_std_string_second.invokeExact(rawPointer());
            java.lang.Object __owner = this;
            return new mrbind_test.mr.cs.std_string(__ret, false, __owner);
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
     * Calls `MR_C_std_pair_int_std_string_second_mut()`.
     */
    public mrbind_test.mr.cs.std_string second_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_pair_int_std_string.H0.MR_C_std_pair_int_std_string_second_mut.invokeExact(rawPointer());
            java.lang.Object __owner = this;
            return new mrbind_test.mr.cs.std_string(__ret, false, __owner);
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
