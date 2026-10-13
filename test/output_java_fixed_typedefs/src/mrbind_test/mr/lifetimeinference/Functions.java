package mrbind_test.mr.lifetimeinference;

/** The free functions of this namespace. */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class Functions
{
    private Functions() {}

    /**
     * Generated from function `MR::LifetimeInference::begin`.
     * The reference to the parameter `a` might be preserved in the return value.
     *
     * Calls `MR_LifetimeInference_begin_MR_LifetimeInference_A()`. Some types are raw C types, see the C bindings for the details.
     */
    public static java.lang.foreign.MemorySegment begin(mrbind_test.mr.lifetimeinference.A a)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_lifetime_inference.H0.MR_LifetimeInference_begin_MR_LifetimeInference_A.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
        }
    }

    /**
     * Generated from function `MR::LifetimeInference::end`.
     * The reference to the parameter `a` might be preserved in the return value.
     *
     * Calls `MR_LifetimeInference_end_MR_LifetimeInference_A()`. Some types are raw C types, see the C bindings for the details.
     */
    public static java.lang.foreign.MemorySegment end(mrbind_test.mr.lifetimeinference.A a)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_lifetime_inference.H0.MR_LifetimeInference_end_MR_LifetimeInference_A.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
        }
    }

    /**
     * Generated from function `MR::LifetimeInference::begin`.
     * The reference to the parameter `b` might be preserved in the return value.
     *
     * Calls `MR_LifetimeInference_begin_MR_LifetimeInference_B()`. Some types are raw C types, see the C bindings for the details.
     */
    public static java.lang.foreign.MemorySegment begin(mrbind_test.mr.lifetimeinference.B b)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_lifetime_inference.H0.MR_LifetimeInference_begin_MR_LifetimeInference_B.invokeExact(mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Generated from function `MR::LifetimeInference::end`.
     * The reference to the parameter `b` might be preserved in the return value.
     *
     * Calls `MR_LifetimeInference_end_MR_LifetimeInference_B()`. Some types are raw C types, see the C bindings for the details.
     */
    public static java.lang.foreign.MemorySegment end(mrbind_test.mr.lifetimeinference.B b)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_lifetime_inference.H0.MR_LifetimeInference_end_MR_LifetimeInference_B.invokeExact(mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }
}
