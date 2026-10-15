package mrbind_test.mr.stdoptional;

/** The free functions of this namespace. */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class Functions
{
    private Functions() {}

    /**
     * Generated from function `MR::StdOptional::GetInt`.
     *
     * Calls `MR_StdOptional_GetInt()`.
     */
    public static mrbind_test.mr.cs.std_optional_int GetInt()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_std_optional.H0.MR_StdOptional_GetInt.invokeExact();
            mrbind_test.Ffi.checkException();
            return new mrbind_test.mr.cs.std_optional_int(__ret, true, null);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::StdOptional::SetInt`.
     *
     * Calls `MR_StdOptional_SetInt()`.
     */
    public static void SetInt(int _1)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            mrbind_test.ffi.MR.test_std_optional.H0.MR_StdOptional_SetInt.invokeExact(mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_INT, _1));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::StdOptional::SetIntConstRef`.
     *
     * Calls `MR_StdOptional_SetIntConstRef()`.
     */
    public static void SetIntConstRef(int _1)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            mrbind_test.ffi.MR.test_std_optional.H0.MR_StdOptional_SetIntConstRef.invokeExact(mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_INT, _1));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::StdOptional::SetIntDefTrivial`.
     *
     * Calls `MR_StdOptional_SetIntDefTrivial()`.
     */
    public static void SetIntDefTrivial(int _1)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            mrbind_test.ffi.MR.test_std_optional.H0.MR_StdOptional_SetIntDefTrivial.invokeExact(mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_INT, _1));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::StdOptional::SetIntDef`.
     *
     * Calls `MR_StdOptional_SetIntDef()`.
     */
    public static void SetIntDef(mrbind_test.mr.cs.std_optional_int _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_std_optional.H0.MR_StdOptional_SetIntDef.invokeExact(mrbind_test.Ffi.ptr(_1));
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
     * Generated from function `MR::StdOptional::GetEnum`.
     *
     * Calls `MR_StdOptional_GetEnum()`.
     */
    public static mrbind_test.mr.cs.std_optional_MR_StdOptional_E GetEnum()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_std_optional.H0.MR_StdOptional_GetEnum.invokeExact();
            mrbind_test.Ffi.checkException();
            return new mrbind_test.mr.cs.std_optional_MR_StdOptional_E(__ret, true, null);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::StdOptional::SetEnum`.
     *
     * Calls `MR_StdOptional_SetEnum()`.
     */
    public static void SetEnum(mrbind_test.mr.stdoptional.E _1)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            mrbind_test.ffi.MR.test_std_optional.H0.MR_StdOptional_SetEnum.invokeExact(mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_INT, java.util.Objects.requireNonNull(_1, "_1").value));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::StdOptional::SetEnumConstRef`.
     *
     * Calls `MR_StdOptional_SetEnumConstRef()`.
     */
    public static void SetEnumConstRef(mrbind_test.mr.stdoptional.E _1)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            mrbind_test.ffi.MR.test_std_optional.H0.MR_StdOptional_SetEnumConstRef.invokeExact(mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_INT, java.util.Objects.requireNonNull(_1, "_1").value));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::StdOptional::SetEnumDefTrivial`.
     *
     * Calls `MR_StdOptional_SetEnumDefTrivial()`.
     */
    public static void SetEnumDefTrivial(mrbind_test.mr.stdoptional.E _1)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            mrbind_test.ffi.MR.test_std_optional.H0.MR_StdOptional_SetEnumDefTrivial.invokeExact(mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_INT, java.util.Objects.requireNonNull(_1, "_1").value));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::StdOptional::SetEnumDef`.
     *
     * Calls `MR_StdOptional_SetEnumDef()`.
     */
    public static void SetEnumDef(mrbind_test.mr.cs.std_optional_MR_StdOptional_E _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_std_optional.H0.MR_StdOptional_SetEnumDef.invokeExact(mrbind_test.Ffi.ptr(_1));
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
     * Generated from function `MR::StdOptional::GetClass`.
     *
     * Calls `MR_StdOptional_GetClass()`.
     */
    public static mrbind_test.mr.cs.std_optional_MR_StdOptional_A GetClass()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_std_optional.H0.MR_StdOptional_GetClass.invokeExact();
            mrbind_test.Ffi.checkException();
            return new mrbind_test.mr.cs.std_optional_MR_StdOptional_A(__ret, true, null);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::StdOptional::SetClass`.
     *
     * Calls `MR_StdOptional_SetClass()`.
     */
    public static void SetClass(mrbind_test.mr.stdoptional.A _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_std_optional.H0.MR_StdOptional_SetClass.invokeExact(mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from function `MR::StdOptional::SetClassConstRef`.
     *
     * Calls `MR_StdOptional_SetClassConstRef()`.
     */
    public static void SetClassConstRef(mrbind_test.mr.stdoptional.A _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_std_optional.H0.MR_StdOptional_SetClassConstRef.invokeExact(mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from function `MR::StdOptional::SetClassDefTrivial`.
     *
     * Calls `MR_StdOptional_SetClassDefTrivial()`.
     */
    public static void SetClassDefTrivial(mrbind_test.mr.stdoptional.A _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_std_optional.H0.MR_StdOptional_SetClassDefTrivial.invokeExact(mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from function `MR::StdOptional::SetClassDef`.
     *
     * Calls `MR_StdOptional_SetClassDef()`.
     */
    public static void SetClassDef(mrbind_test.mr.cs.std_optional_MR_StdOptional_A _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_std_optional.H0.MR_StdOptional_SetClassDef.invokeExact(mrbind_test.Ffi.ptr(_1));
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
     * Generated from function `MR::StdOptional::GetClass2`.
     *
     * Calls `MR_StdOptional_GetClass2()`.
     */
    public static mrbind_test.mr.cs.std_optional_MR_StdOptional_B GetClass2()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_std_optional.H0.MR_StdOptional_GetClass2.invokeExact();
            mrbind_test.Ffi.checkException();
            return new mrbind_test.mr.cs.std_optional_MR_StdOptional_B(__ret, true, null);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::StdOptional::SetClass2`.
     *
     * Calls `MR_StdOptional_SetClass2()`.
     */
    public static void SetClass2(mrbind_test.mr.stdoptional.B _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_std_optional.H0.MR_StdOptional_SetClass2.invokeExact((int)(_1 == null ? mrbind_test.Ffi.PASS_BY_NO_OBJECT : mrbind_test.Ffi.PASS_BY_COPY), mrbind_test.Ffi.ptr(_1));
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
     * Generated from function `MR::StdOptional::SetClass2ConstRef`.
     *
     * Calls `MR_StdOptional_SetClass2ConstRef()`.
     */
    public static void SetClass2ConstRef(mrbind_test.mr.stdoptional.B _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_std_optional.H0.MR_StdOptional_SetClass2ConstRef.invokeExact((int)(_1 == null ? mrbind_test.Ffi.PASS_BY_NO_OBJECT : mrbind_test.Ffi.PASS_BY_COPY), mrbind_test.Ffi.ptr(_1));
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
     * Generated from function `MR::StdOptional::SetClass2DefTrivial`.
     *
     * Calls `MR_StdOptional_SetClass2DefTrivial()`.
     */
    public static void SetClass2DefTrivial(mrbind_test.mr.stdoptional.B _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_std_optional.H0.MR_StdOptional_SetClass2DefTrivial.invokeExact((int)(_1 == null ? mrbind_test.Ffi.PASS_BY_NO_OBJECT : mrbind_test.Ffi.PASS_BY_COPY), mrbind_test.Ffi.ptr(_1));
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
     * Generated from function `MR::StdOptional::SetClass2Def`.
     *
     * Calls `MR_StdOptional_SetClass2Def()`.
     */
    public static void SetClass2Def(mrbind_test.mr.stdoptional.B _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_std_optional.H0.MR_StdOptional_SetClass2Def.invokeExact((int)(_1 == null ? mrbind_test.Ffi.PASS_BY_NO_OBJECT : mrbind_test.Ffi.PASS_BY_COPY), mrbind_test.Ffi.ptr(_1));
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
}
