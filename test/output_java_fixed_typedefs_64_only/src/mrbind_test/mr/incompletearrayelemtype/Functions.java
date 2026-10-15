package mrbind_test.mr.incompletearrayelemtype;

/** The free functions of this namespace. */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class Functions
{
    private Functions() {}

    /**
     * Generated from function `MR::IncompleteArrayElemType::bar`.
     *
     * Calls `MR_IncompleteArrayElemType_bar()`. Some types are raw C types, see the C bindings for the details.
     */
    public static void bar(java.lang.foreign.MemorySegment _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_arrays_of_incomplete_types_2.H0.MR_IncompleteArrayElemType_bar.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::IncompleteArrayElemType::foo`.
     *
     * Calls `MR_IncompleteArrayElemType_foo()`. Some types are raw C types, see the C bindings for the details.
     */
    public static void foo(java.lang.foreign.MemorySegment _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_arrays_of_incomplete_types.H0.MR_IncompleteArrayElemType_foo.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }
}
