package mrbind_test.mr.deprecation;

/** The free functions of this namespace. */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class Functions
{
    private Functions() {}

    /**
     * Generated from function `MR::Deprecation::foo`.
     *
     * Calls `MR_Deprecation_foo()`.
     */
    @java.lang.Deprecated
    public static void foo()
    {
        try
        {
            mrbind_test.ffi.MR.test_deprecation.H0.MR_Deprecation_foo.invokeExact();
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::Deprecation::bar`.
     *
     * Calls `MR_Deprecation_bar()`.
     */
    @java.lang.Deprecated
    public static void bar()
    {
        try
        {
            mrbind_test.ffi.MR.test_deprecation.H0.MR_Deprecation_bar.invokeExact();
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }
}
