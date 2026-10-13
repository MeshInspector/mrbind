package mrbind_test.mr.cs;

/**
 * Stores 10 objects: `const int`, `const float`, `int &`, `float &`, `const int &`, `const float &`, `int &&`, `float &&`, `const int &&`, `const float &&`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float__e0da444a extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float__e0da444a(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float__e0da444a::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_flo__22dd.H0.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs the tuple elementwise.
     * The reference to the parameter `_2` might be preserved in the constructed object.
     * The reference to the parameter `_3` might be preserved in the constructed object.
     * The reference to the parameter `_4` might be preserved in the constructed object.
     * The reference to the parameter `_5` might be preserved in the constructed object.
     * The reference to the parameter `_6` might be preserved in the constructed object.
     * The reference to the parameter `_7` might be preserved in the constructed object.
     * The reference to the parameter `_8` might be preserved in the constructed object.
     * The reference to the parameter `_9` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Construct()`. Some types are raw C types, see the C bindings for the details.
     */
    public std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float__e0da444a(int _0, float _1, java.lang.foreign.MemorySegment _2, java.lang.foreign.MemorySegment _3, int _4, float _5, java.lang.foreign.MemorySegment _6, java.lang.foreign.MemorySegment _7, int _8, float _9)
    {
        this(__ctor_construct(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct(int _0, float _1, java.lang.foreign.MemorySegment _2, java.lang.foreign.MemorySegment _3, int _4, float _5, java.lang.foreign.MemorySegment _6, java.lang.foreign.MemorySegment _7, int _8, float _9)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_flo__22dd.H0.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Construct.invokeExact(_0, _1, _2, _3, mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_INT, _4), mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_FLOAT, _5), _6, _7, mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_INT, _8), mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_FLOAT, _9));
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * The element 0, of type `const int`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_int()`.
     */
    public int get_const_int()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_flo__22dd.H0.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_int.invokeExact(rawPointer());
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
     * The element 1, of type `const float`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_float()`.
     */
    public float get_const_float()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_flo__22dd.H0.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_float.invokeExact(rawPointer());
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
     * The element 2, of type `int &`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_int_ref()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment get_int_ref()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_flo__22dd.H0.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_int_ref.invokeExact(rawPointer());
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
     * The element 3, of type `float &`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_float_ref()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment get_float_ref()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_flo__22dd.H0.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_float_ref.invokeExact(rawPointer());
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
     * The element 4, of type `const int &`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_int_ref()`.
     */
    public int get_const_int_ref()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_flo__22dd.H0.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_int_ref.invokeExact(rawPointer());
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
     * The element 5, of type `const float &`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_float_ref()`.
     */
    public float get_const_float_ref()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_flo__22dd.H0.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_float_ref.invokeExact(rawPointer());
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
     * The element 6, of type `int &&`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_int_rvalue_ref()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment get_int_rvalue_ref()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_flo__22dd.H0.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_int_rvalue_ref.invokeExact(rawPointer());
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
     * The element 7, of type `float &&`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_float_rvalue_ref()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment get_float_rvalue_ref()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_flo__22dd.H0.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_float_rvalue_ref.invokeExact(rawPointer());
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
     * The element 8, of type `const int &&`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_int_rvalue_ref()`.
     */
    public int get_const_int_rvalue_ref()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_flo__22dd.H0.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_int_rvalue_ref.invokeExact(rawPointer());
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
     * The element 9, of type `const float &&`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_float_rvalue_ref()`.
     */
    public float get_const_float_rvalue_ref()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_flo__22dd.H0.MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_float_rvalue_ref.invokeExact(rawPointer());
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
}
