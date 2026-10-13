package mrbind_test.mr.cs;

/**
 * Stores 2 objects: `const int`, `std::string`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_tuple_const_int_std_string extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_tuple_const_int_std_string(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_tuple_const_int_std_string::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.std_tuple_const_int_std_string.H0.MR_C_std_tuple_const_int_std_string_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_tuple_const_int_std_string_DefaultConstruct()`.
     */
    public std_tuple_const_int_std_string()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_const_int_std_string.H0.MR_C_std_tuple_const_int_std_string_DefaultConstruct.invokeExact();
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
     * Calls `MR_C_std_tuple_const_int_std_string_ConstructFromAnother()`.
     */
    public std_tuple_const_int_std_string(mrbind_test.mr.cs.std_tuple_const_int_std_string other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.cs.std_tuple_const_int_std_string other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_const_int_std_string.H0.MR_C_std_tuple_const_int_std_string_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * The reference to the parameter `_1` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_tuple_const_int_std_string_Construct()`.
     */
    public std_tuple_const_int_std_string(int _0, java.lang.String _1)
    {
        this(__ctor_construct(_0, _1), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct(int _0, java.lang.String _1)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            java.lang.foreign.MemorySegment __str__1 = mrbind_test.Ffi.utf8(__arena, java.util.Objects.requireNonNull(_1, "_1"));
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_const_int_std_string.H0.MR_C_std_tuple_const_int_std_string_Construct.invokeExact(_0, __str__1, mrbind_test.Ffi.end(__str__1));
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
     * Calls `MR_C_std_tuple_const_int_std_string_get_const_int()`.
     */
    public int get_const_int()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_const_int_std_string.H0.MR_C_std_tuple_const_int_std_string_get_const_int.invokeExact(rawPointer());
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
     * The element 1, of type `std::string`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int_std_string_get_std_string()`.
     */
    public mrbind_test.mr.cs.std_string get_std_string()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_const_int_std_string.H0.MR_C_std_tuple_const_int_std_string_get_std_string.invokeExact(rawPointer());
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
     * The element 1, of type `std::string`, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_const_int_std_string_get_std_string_mut()`.
     */
    public mrbind_test.mr.cs.std_string get_std_string_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_tuple_const_int_std_string.H0.MR_C_std_tuple_const_int_std_string_get_std_string_mut.invokeExact(rawPointer());
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
