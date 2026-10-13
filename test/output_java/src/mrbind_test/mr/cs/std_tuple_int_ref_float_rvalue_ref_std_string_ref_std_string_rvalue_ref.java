package mrbind_test.mr.cs;

/**
 * Stores 4 objects: `int &`, `float &&`, `std::string &`, `std::string &&`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref.H0.MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs the tuple elementwise.
     * The reference to the parameter `_0` might be preserved in the constructed object.
     * The reference to the parameter `_1` might be preserved in the constructed object.
     * The reference to the parameter `_2` might be preserved in the constructed object.
     * The reference to the parameter `_3` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_Construct()`. Some types are raw C types, see the C bindings for the details.
     */
    public std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref(java.lang.foreign.MemorySegment _0, java.lang.foreign.MemorySegment _1, mrbind_test.mr.cs.std_string _2, java.lang.String _3)
    {
        this(__ctor_construct(_0, _1, _2, _3), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct(java.lang.foreign.MemorySegment _0, java.lang.foreign.MemorySegment _1, mrbind_test.mr.cs.std_string _2, java.lang.String _3)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            java.lang.foreign.MemorySegment __str__3 = mrbind_test.Ffi.utf8(__arena, java.util.Objects.requireNonNull(_3, "_3"));
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref.H0.MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_Construct.invokeExact(_0, _1, mrbind_test.Ffi.ptrNonNull(_2, "_2"), __str__3, mrbind_test.Ffi.end(__str__3));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(_2);
        }
    }

    /**
     * The element 0, of type `int &`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_int_ref()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment get_int_ref()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref.H0.MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_int_ref.invokeExact(rawPointer());
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
     * The element 1, of type `float &&`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_float_rvalue_ref()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment get_float_rvalue_ref()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref.H0.MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_float_rvalue_ref.invokeExact(rawPointer());
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
     * The element 2, of type `std::string &`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_std_string_ref()`.
     */
    public mrbind_test.mr.cs.std_string get_std_string_ref()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref.H0.MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_std_string_ref.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
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
     * The element 3, of type `std::string &&`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_std_string_rvalue_ref()`.
     */
    public mrbind_test.mr.cs.std_string get_std_string_rvalue_ref()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref.H0.MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_std_string_rvalue_ref.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
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
