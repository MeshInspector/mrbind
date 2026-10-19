package mrbind_test.mr.stdexpected;

/** The free functions of this namespace. */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class Functions
{
    private Functions() {}

    /**
     * Generated from function `MR::StdExpected::GetExp`.
     *
     * Calls `MR_StdExpected_GetExp()`. The C++ function returns `expected<int32_t, std::string>`: the value is returned and an error is thrown as `UnexpectedResultException`.
     */
    public static int GetExp()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_std_expected.H0.MR_StdExpected_GetExp.invokeExact();
            mrbind_test.Ffi.checkException();
            return (new mrbind_test.mr.cs.expected_int32_t_std_string(__ret, true, null)).valueOrThrow();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::StdExpected::SetExp`.
     *
     * Calls `MR_StdExpected_SetExp()`.
     */
    public static void SetExp(mrbind_test.mr.cs.expected_int32_t_std_string _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_std_expected.H0.MR_StdExpected_SetExp.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from function `MR::StdExpected::SetExpConstRef`.
     *
     * Calls `MR_StdExpected_SetExpConstRef()`.
     */
    public static void SetExpConstRef(mrbind_test.mr.cs.expected_int32_t_std_string _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_std_expected.H0.MR_StdExpected_SetExpConstRef.invokeExact(mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from function `MR::StdExpected::SetExpDefTrivial`.
     *
     * Calls `MR_StdExpected_SetExpDefTrivial()`.
     */
    public static void SetExpDefTrivial(mrbind_test.mr.cs.expected_int32_t_std_string _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_std_expected.H0.MR_StdExpected_SetExpDefTrivial.invokeExact((int)(_1 == null ? mrbind_test.Ffi.PASS_BY_DEFAULT_ARGUMENT : mrbind_test.Ffi.PASS_BY_COPY), mrbind_test.Ffi.ptr(_1));
            mrbind_test.Ffi.checkException();
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
     * Generated from function `MR::StdExpected::SetExpDef`.
     *
     * Calls `MR_StdExpected_SetExpDef()`.
     */
    public static void SetExpDef(mrbind_test.mr.cs.expected_int32_t_std_string _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_std_expected.H0.MR_StdExpected_SetExpDef.invokeExact((int)(_1 == null ? mrbind_test.Ffi.PASS_BY_DEFAULT_ARGUMENT : mrbind_test.Ffi.PASS_BY_COPY), mrbind_test.Ffi.ptr(_1));
            mrbind_test.Ffi.checkException();
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
     * Generated from function `MR::StdExpected::GetExpVoid`.
     *
     * Calls `MR_StdExpected_GetExpVoid()`. The C++ function returns `expected<void, float>`: the value is returned and an error is thrown as `UnexpectedResultException`.
     */
    public static void GetExpVoid()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_std_expected.H0.MR_StdExpected_GetExpVoid.invokeExact();
            mrbind_test.Ffi.checkException();
            (new mrbind_test.mr.cs.expected_void_float(__ret, true, null)).valueOrThrow();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::StdExpected::SetExpVoid`.
     *
     * Calls `MR_StdExpected_SetExpVoid()`.
     */
    public static void SetExpVoid(mrbind_test.mr.cs.expected_void_float _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_std_expected.H0.MR_StdExpected_SetExpVoid.invokeExact(mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from function `MR::StdExpected::SetExpVoidConstRef`.
     *
     * Calls `MR_StdExpected_SetExpVoidConstRef()`.
     */
    public static void SetExpVoidConstRef(mrbind_test.mr.cs.expected_void_float _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_std_expected.H0.MR_StdExpected_SetExpVoidConstRef.invokeExact(mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from function `MR::StdExpected::SetExpVoidDefTrivial`.
     *
     * Calls `MR_StdExpected_SetExpVoidDefTrivial()`.
     */
    public static void SetExpVoidDefTrivial(mrbind_test.mr.cs.expected_void_float _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_std_expected.H0.MR_StdExpected_SetExpVoidDefTrivial.invokeExact(mrbind_test.Ffi.ptr(_1));
            mrbind_test.Ffi.checkException();
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
     * Generated from function `MR::StdExpected::SetExpVoidDef`.
     *
     * Calls `MR_StdExpected_SetExpVoidDef()`.
     */
    public static void SetExpVoidDef(mrbind_test.mr.cs.expected_void_float _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_std_expected.H0.MR_StdExpected_SetExpVoidDef.invokeExact(mrbind_test.Ffi.ptr(_1));
            mrbind_test.Ffi.checkException();
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
     * Generated from function `MR::StdExpected::GetExpVec`.
     *
     * Calls `MR_StdExpected_GetExpVec()`.
     */
    public static mrbind_test.mr.cs.std_vector_expected_int32_t_std_string GetExpVec()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_std_expected.H0.MR_StdExpected_GetExpVec.invokeExact();
            mrbind_test.Ffi.checkException();
            return new mrbind_test.mr.cs.std_vector_expected_int32_t_std_string(__ret, true, null);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }
}
