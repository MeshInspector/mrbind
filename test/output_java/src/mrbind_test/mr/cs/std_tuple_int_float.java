package mrbind_test.mr.cs;

/**
 * Stores 2 objects: `int`, `float`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_tuple_int_float extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_tuple_int_float(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_tuple_int_float::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.std_tuple_int_float.H0.MR_C_std_tuple_int_float_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_tuple_int_float_DefaultConstruct()`.
     */
    public std_tuple_int_float()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_int_float.H0.MR_C_std_tuple_int_float_DefaultConstruct.invokeExact();
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
     * Calls `MR_C_std_tuple_int_float_ConstructFromAnother()`.
     */
    public std_tuple_int_float(mrbind_test.mr.cs.std_tuple_int_float other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.cs.std_tuple_int_float other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_int_float.H0.MR_C_std_tuple_int_float_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_tuple_int_float_AssignFromAnother()`.
     */
    public void assignFromAnother(mrbind_test.mr.cs.std_tuple_int_float other)
    {
        try
        {
            mrbind_test.ffi.std_tuple_int_float.H0.MR_C_std_tuple_int_float_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Constructs the tuple elementwise.
     *
     * Calls `MR_C_std_tuple_int_float_Construct()`.
     */
    public std_tuple_int_float(int _0, float _1)
    {
        this(__ctor_construct(_0, _1), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct(int _0, float _1)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_int_float.H0.MR_C_std_tuple_int_float_Construct.invokeExact(_0, _1);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * The element 0, of type `int`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_int_float_get_int()`.
     */
    public int get_int()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_int_float.H0.MR_C_std_tuple_int_float_get_int.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
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
     * The element 0, of type `int`, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_int_float_get_int_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment get_int_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_int_float.H0.MR_C_std_tuple_int_float_get_int_mut.invokeExact(rawPointer());
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
     * The element 1, of type `float`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_int_float_get_float()`.
     */
    public float get_float()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_int_float.H0.MR_C_std_tuple_int_float_get_float.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
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
     * The element 1, of type `float`, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_int_float_get_float_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment get_float_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_int_float.H0.MR_C_std_tuple_int_float_get_float_mut.invokeExact(rawPointer());
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
}
