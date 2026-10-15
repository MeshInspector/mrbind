package mrbind_test.mr.iostream;

/** The free functions of this namespace. */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class Functions
{
    private Functions() {}

    /**
     * Generated from function `MR::IOStream::operator<<`.
     *
     * Calls `MR_C_print_MR_IOStream_A()`.
     */
    public static void opLshift(mrbind_test.mr.cs.std_ostream _1, mrbind_test.mr.iostream.A _2)
    {
        try
        {
            mrbind_test.ffi.MR.test_iostream.H0.MR_C_print_MR_IOStream_A.invokeExact(mrbind_test.Ffi.ptrNonNull(_1, "_1"), mrbind_test.Ffi.ptrNonNull(_2, "_2"));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(_1);
            java.lang.ref.Reference.reachabilityFence(_2);
        }
    }

    /**
     * Generated from function `MR::IOStream::operator>>`.
     *
     * Calls `MR_C_input_MR_IOStream_A()`.
     */
    public static void opRshift(mrbind_test.mr.cs.std_istream _1, mrbind_test.mr.iostream.A _2)
    {
        try
        {
            mrbind_test.ffi.MR.test_iostream.H0.MR_C_input_MR_IOStream_A.invokeExact(mrbind_test.Ffi.ptrNonNull(_1, "_1"), mrbind_test.Ffi.ptrNonNull(_2, "_2"));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(_1);
            java.lang.ref.Reference.reachabilityFence(_2);
        }
    }
}
