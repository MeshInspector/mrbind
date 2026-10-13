package mrbind_test.mr.cs;

/**
 * Stores 4 objects: `float`, `double`, `int32_t`, `int32_t`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_tuple_float_double_int32_t_int32_t extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_tuple_float_double_int32_t_int32_t(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_tuple_float_double_int32_t_int32_t::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.std_tuple_float_double_int32_t_int32_t.H0.MR_C_std_tuple_float_double_int32_t_int32_t_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_tuple_float_double_int32_t_int32_t_DefaultConstruct()`.
     */
    public std_tuple_float_double_int32_t_int32_t()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_float_double_int32_t_int32_t.H0.MR_C_std_tuple_float_double_int32_t_int32_t_DefaultConstruct.invokeExact();
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
     * Calls `MR_C_std_tuple_float_double_int32_t_int32_t_ConstructFromAnother()`.
     */
    public std_tuple_float_double_int32_t_int32_t(mrbind_test.mr.cs.std_tuple_float_double_int32_t_int32_t other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.cs.std_tuple_float_double_int32_t_int32_t other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_float_double_int32_t_int32_t.H0.MR_C_std_tuple_float_double_int32_t_int32_t_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_tuple_float_double_int32_t_int32_t_AssignFromAnother()`.
     */
    public void assignFromAnother(mrbind_test.mr.cs.std_tuple_float_double_int32_t_int32_t other)
    {
        try
        {
            mrbind_test.ffi.std_tuple_float_double_int32_t_int32_t.H0.MR_C_std_tuple_float_double_int32_t_int32_t_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * The reference to the parameter `_2` might be preserved in the constructed object.
     * The reference to the parameter `_3` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_tuple_float_double_int32_t_int32_t_Construct()`.
     */
    public std_tuple_float_double_int32_t_int32_t(float _0, double _1, int _2, int _3)
    {
        this(__ctor_construct(_0, _1, _2, _3), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct(float _0, double _1, int _2, int _3)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_float_double_int32_t_int32_t.H0.MR_C_std_tuple_float_double_int32_t_int32_t_Construct.invokeExact(_0, _1, _2, _3);
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * The element 0, of type `float`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_float_double_int32_t_int32_t_get_float()`.
     */
    public float get_float()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_float_double_int32_t_int32_t.H0.MR_C_std_tuple_float_double_int32_t_int32_t_get_float.invokeExact(rawPointer());
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
     * The element 0, of type `float`, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_float_double_int32_t_int32_t_get_float_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment get_float_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_float_double_int32_t_int32_t.H0.MR_C_std_tuple_float_double_int32_t_int32_t_get_float_mut.invokeExact(rawPointer());
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
     * The element 1, of type `double`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_float_double_int32_t_int32_t_get_double()`.
     */
    public double get_double()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_float_double_int32_t_int32_t.H0.MR_C_std_tuple_float_double_int32_t_int32_t_get_double.invokeExact(rawPointer());
            return __ret.reinterpret(8).get(java.lang.foreign.ValueLayout.JAVA_DOUBLE, 0);
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
     * The element 1, of type `double`, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_float_double_int32_t_int32_t_get_double_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment get_double_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_float_double_int32_t_int32_t.H0.MR_C_std_tuple_float_double_int32_t_int32_t_get_double_mut.invokeExact(rawPointer());
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
     * The element 2, of type `int32_t`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_float_double_int32_t_int32_t_get_int32_t_2()`.
     */
    public int get_int32_t_2()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_float_double_int32_t_int32_t.H0.MR_C_std_tuple_float_double_int32_t_int32_t_get_int32_t_2.invokeExact(rawPointer());
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
     * The element 2, of type `int32_t`, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_float_double_int32_t_int32_t_get_int32_t_2_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment get_int32_t_2_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_float_double_int32_t_int32_t.H0.MR_C_std_tuple_float_double_int32_t_int32_t_get_int32_t_2_mut.invokeExact(rawPointer());
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
     * The element 3, of type `int32_t`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_float_double_int32_t_int32_t_get_int32_t_3()`.
     */
    public int get_int32_t_3()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_float_double_int32_t_int32_t.H0.MR_C_std_tuple_float_double_int32_t_int32_t_get_int32_t_3.invokeExact(rawPointer());
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
     * The element 3, of type `int32_t`, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_float_double_int32_t_int32_t_get_int32_t_3_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment get_int32_t_3_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_float_double_int32_t_int32_t.H0.MR_C_std_tuple_float_double_int32_t_int32_t_get_int32_t_3_mut.invokeExact(rawPointer());
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
