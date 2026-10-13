package mrbind_test.mr.testsizet;

/** The free functions of this namespace. */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class Functions
{
    private Functions() {}

    /**
     * Generated from function `MR::TestSizeT::foo`.
     *
     * Calls `MR_TestSizeT_foo_unsigned_long()`.
     */
    public static long foo_unsigned_long(long _1)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.MR.test_size_t_ptrdiff_t.H0.MR_TestSizeT_foo_unsigned_long.invokeExact(_1);
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
     * Calls `MR_TestSizeT_foo_unsigned_long_ptr()`. Some types are raw C types, see the C bindings for the details.
     */
    public static java.lang.foreign.MemorySegment foo_unsigned_long_ptr(java.lang.foreign.MemorySegment _1)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_size_t_ptrdiff_t.H0.MR_TestSizeT_foo_unsigned_long_ptr.invokeExact(_1);
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
     * Calls `MR_TestSizeT_foo_std_vector_unsigned_long()`.
     */
    public static mrbind_test.mr.cs.std_vector_unsigned_long foo(mrbind_test.mr.cs.std_vector_unsigned_long _1)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_size_t_ptrdiff_t.H0.MR_TestSizeT_foo_std_vector_unsigned_long.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
            return new mrbind_test.mr.cs.std_vector_unsigned_long(__ret, true, null);
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
     * Calls `MR_TestSizeT_foo_long()`.
     */
    public static long foo_long(long _1)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.MR.test_size_t_ptrdiff_t.H0.MR_TestSizeT_foo_long.invokeExact(_1);
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
     * Calls `MR_TestSizeT_foo_long_ptr()`. Some types are raw C types, see the C bindings for the details.
     */
    public static java.lang.foreign.MemorySegment foo_long_ptr(java.lang.foreign.MemorySegment _1)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_size_t_ptrdiff_t.H0.MR_TestSizeT_foo_long_ptr.invokeExact(_1);
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
     * Calls `MR_TestSizeT_foo_std_vector_long()`.
     */
    public static mrbind_test.mr.cs.std_vector_long foo(mrbind_test.mr.cs.std_vector_long _1)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_size_t_ptrdiff_t.H0.MR_TestSizeT_foo_std_vector_long.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
            return new mrbind_test.mr.cs.std_vector_long(__ret, true, null);
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
