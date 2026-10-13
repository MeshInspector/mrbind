package mrbind_test.mr.stdstring;

/** The free functions of this namespace. */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class Functions
{
    private Functions() {}

    /**
     * Generated from function `MR::StdString::Set`.
     *
     * Calls `MR_StdString_Set()`.
     */
    public static void Set(java.lang.String s)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            java.lang.foreign.MemorySegment __str_s = mrbind_test.Ffi.utf8(__arena, java.util.Objects.requireNonNull(s, "s"));
            mrbind_test.ffi.MR.test_std_string.H0.MR_StdString_Set.invokeExact(__str_s, mrbind_test.Ffi.end(__str_s));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::StdString::SetWithDefault`.
     *
     * Calls `MR_StdString_SetWithDefault()`.
     */
    public static void SetWithDefault(java.lang.String s)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            java.lang.foreign.MemorySegment __str_s = mrbind_test.Ffi.utf8(__arena, s);
            mrbind_test.ffi.MR.test_std_string.H0.MR_StdString_SetWithDefault.invokeExact(__str_s, mrbind_test.Ffi.end(__str_s));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::StdString::Get`.
     *
     * Calls `MR_StdString_Get()`.
     */
    public static mrbind_test.mr.cs.std_string Get()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_std_string.H0.MR_StdString_Get.invokeExact();
            mrbind_test.Ffi.checkException();
            return new mrbind_test.mr.cs.std_string(__ret, true, null);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::StdString::WriteToRef`.
     *
     * Calls `MR_StdString_WriteToRef()`.
     */
    public static void WriteToRef(mrbind_test.mr.cs.std_string ref)
    {
        try
        {
            mrbind_test.ffi.MR.test_std_string.H0.MR_StdString_WriteToRef.invokeExact(mrbind_test.Ffi.ptrNonNull(ref, "ref"));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(ref);
        }
    }

    /**
     * Generated from function `MR::StdString::WriteToPtr`.
     *
     * Calls `MR_StdString_WriteToPtr()`.
     */
    public static void WriteToPtr(mrbind_test.mr.cs.std_string ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_std_string.H0.MR_StdString_WriteToPtr.invokeExact(mrbind_test.Ffi.ptr(ptr));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(ptr);
        }
    }

    /**
     * Generated from function `MR::StdString::ConstRef`.
     *
     * Calls `MR_StdString_ConstRef()`.
     */
    public static void ConstRef(java.lang.String s)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            java.lang.foreign.MemorySegment __str_s = mrbind_test.Ffi.utf8(__arena, java.util.Objects.requireNonNull(s, "s"));
            mrbind_test.ffi.MR.test_std_string.H0.MR_StdString_ConstRef.invokeExact(__str_s, mrbind_test.Ffi.end(__str_s));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::StdString::RvalueRef`.
     *
     * Calls `MR_StdString_RvalueRef()`.
     */
    public static void RvalueRef(java.lang.String s)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            java.lang.foreign.MemorySegment __str_s = mrbind_test.Ffi.utf8(__arena, java.util.Objects.requireNonNull(s, "s"));
            mrbind_test.ffi.MR.test_std_string.H0.MR_StdString_RvalueRef.invokeExact(__str_s, mrbind_test.Ffi.end(__str_s));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::StdString::ConstRvalueRef`.
     *
     * Calls `MR_StdString_ConstRvalueRef()`.
     */
    public static void ConstRvalueRef(java.lang.String s)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            java.lang.foreign.MemorySegment __str_s = mrbind_test.Ffi.utf8(__arena, java.util.Objects.requireNonNull(s, "s"));
            mrbind_test.ffi.MR.test_std_string.H0.MR_StdString_ConstRvalueRef.invokeExact(__str_s, mrbind_test.Ffi.end(__str_s));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }
}
