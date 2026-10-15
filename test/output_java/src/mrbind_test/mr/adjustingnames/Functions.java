package mrbind_test.mr.adjustingnames;

/** The free functions of this namespace. */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class Functions
{
    private Functions() {}

    /**
     * When we're gonna call `foo<MR_C_uint64_t>()` in the source file, we must include the header for our typedef (and for the template arguments in general).
     * And we must make sure that the typedef gets applied to the name correctly.
     * Generated from function `MR::AdjustingNames::foo<unsigned long>`.
     *
     * Calls `MR_AdjustingNames_foo()`.
     */
    public static void foo()
    {
        try
        {
            mrbind_test.ffi.MR.test_adjusting_names.H0.MR_AdjustingNames_foo.invokeExact();
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::AdjustingNames::bar`.
     *
     * Calls `MR_AdjustingNames_bar()`.
     */
    public static void bar()
    {
        try
        {
            mrbind_test.ffi.MR.test_adjusting_names.H0.MR_AdjustingNames_bar.invokeExact();
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }
}
