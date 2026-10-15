package mrbind_test.mr.testsizet;

/** The free functions of this namespace. */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class Functions
{
    private Functions() {}

    /**
     * Generated from function `MR::TestSizeT::foo`.
     *
     * Calls `MR_TestSizeT_foo_uint64_t()`.
     */
    public static long foo_uint64_t(long _1)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.MR.test_size_t_ptrdiff_t.H0.MR_TestSizeT_foo_uint64_t.invokeExact(_1);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSizeT::foo`.
     *
     * Calls `MR_TestSizeT_foo_uint64_t_ptr()`. Some types are raw C types, see the C bindings for the details.
     */
    public static java.lang.foreign.MemorySegment foo_uint64_t_ptr(java.lang.foreign.MemorySegment _1)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_size_t_ptrdiff_t.H0.MR_TestSizeT_foo_uint64_t_ptr.invokeExact(_1);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSizeT::foo`.
     *
     * Calls `MR_TestSizeT_foo_std_vector_uint64_t()`.
     */
    public static mrbind_test.mr.cs.std_vector_uint64_t foo(mrbind_test.mr.cs.std_vector_uint64_t _1)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_size_t_ptrdiff_t.H0.MR_TestSizeT_foo_std_vector_uint64_t.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
            return new mrbind_test.mr.cs.std_vector_uint64_t(__ret, true, null);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Generated from function `MR::TestSizeT::foo`.
     *
     * Calls `MR_TestSizeT_foo_int64_t()`.
     */
    public static long foo_int64_t(long _1)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.MR.test_size_t_ptrdiff_t.H0.MR_TestSizeT_foo_int64_t.invokeExact(_1);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSizeT::foo`.
     *
     * Calls `MR_TestSizeT_foo_int64_t_ptr()`. Some types are raw C types, see the C bindings for the details.
     */
    public static java.lang.foreign.MemorySegment foo_int64_t_ptr(java.lang.foreign.MemorySegment _1)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_size_t_ptrdiff_t.H0.MR_TestSizeT_foo_int64_t_ptr.invokeExact(_1);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSizeT::foo`.
     *
     * Calls `MR_TestSizeT_foo_std_vector_int64_t()`.
     */
    public static mrbind_test.mr.cs.std_vector_int64_t foo(mrbind_test.mr.cs.std_vector_int64_t _1)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_size_t_ptrdiff_t.H0.MR_TestSizeT_foo_std_vector_int64_t.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
            return new mrbind_test.mr.cs.std_vector_int64_t(__ret, true, null);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }
}
