package mrbind_test.mr.cs;

/**
 * Stores 4 objects: `const int32_t &`, `const float &&`, `const std::string &`, `const std::string &&`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_re__883b.H0.MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_Destroy.invokeExact(ptr);
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
     * Calls `MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_ConstructFromAnother()`.
     */
    public std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref(mrbind_test.mr.cs.std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.cs.std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_re__883b.H0.MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Constructs the tuple elementwise.
     * The reference to the parameter `_0` might be preserved in the constructed object.
     * The reference to the parameter `_1` might be preserved in the constructed object.
     * The reference to the parameter `_2` might be preserved in the constructed object.
     * The reference to the parameter `_3` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_Construct()`.
     */
    public std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref(int _0, float _1, java.lang.String _2, java.lang.String _3)
    {
        this(__ctor_construct(_0, _1, _2, _3), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct(int _0, float _1, java.lang.String _2, java.lang.String _3)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            java.lang.foreign.MemorySegment __str__2 = mrbind_test.Ffi.utf8(__arena, java.util.Objects.requireNonNull(_2, "_2"));
            java.lang.foreign.MemorySegment __str__3 = mrbind_test.Ffi.utf8(__arena, java.util.Objects.requireNonNull(_3, "_3"));
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_re__883b.H0.MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_Construct.invokeExact(mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_INT, _0), mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_FLOAT, _1), __str__2, mrbind_test.Ffi.end(__str__2), __str__3, mrbind_test.Ffi.end(__str__3));
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * The element 0, of type `const int32_t &`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_int32_t_ref()`.
     */
    public int get_const_int32_t_ref()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_re__883b.H0.MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_int32_t_ref.invokeExact(rawPointer());
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
     * The element 1, of type `const float &&`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_float_rvalue_ref()`.
     */
    public float get_const_float_rvalue_ref()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_re__883b.H0.MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_float_rvalue_ref.invokeExact(rawPointer());
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
     * The element 2, of type `const std::string &`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_std_string_ref()`.
     */
    public mrbind_test.mr.cs.std_string get_const_std_string_ref()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_re__883b.H0.MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_std_string_ref.invokeExact(rawPointer());
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
     * The element 3, of type `const std::string &&`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_std_string_rvalue_ref()`.
     */
    public mrbind_test.mr.cs.std_string get_const_std_string_rvalue_ref()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_re__883b.H0.MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_std_string_rvalue_ref.invokeExact(rawPointer());
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
