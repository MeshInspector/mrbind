package mrbind_test.mr.testsimpletypes;

/** The free functions of this namespace. */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class Functions
{
    private Functions() {}

    /**
     * Generated from function `MR::TestSimpleTypes::GetInt`.
     *
     * Calls `MR_TestSimpleTypes_GetInt()`.
     */
    public static int GetInt()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_GetInt.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::SetInt`.
     *
     * Calls `MR_TestSimpleTypes_SetInt()`.
     */
    public static void SetInt(int _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetInt.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::SetIntDef`.
     *
     * Calls `MR_TestSimpleTypes_SetIntDef()`.
     */
    public static void SetIntDef(java.lang.Integer _1)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetIntDef.invokeExact((java.lang.foreign.MemorySegment)(_1 == null ? java.lang.foreign.MemorySegment.NULL : mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_INT, _1)));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::GetIntPtr`.
     *
     * Calls `MR_TestSimpleTypes_GetIntPtr()`. Some types are raw C types, see the C bindings for the details.
     */
    public static java.lang.foreign.MemorySegment GetIntPtr()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_GetIntPtr.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::SetIntPtr`.
     *
     * Calls `MR_TestSimpleTypes_SetIntPtr()`.
     */
    public static void SetIntPtr(mrbind_test.int_output _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetIntPtr.invokeExact(mrbind_test.Ffi.ptr(_1));
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
     * Generated from function `MR::TestSimpleTypes::SetIntPtrDef`.
     *
     * Calls `MR_TestSimpleTypes_SetIntPtrDef()`. Some types are raw C types, see the C bindings for the details.
     */
    public static void SetIntPtrDef(java.lang.foreign.MemorySegment _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetIntPtrDef.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::SetIntPtrDefNull`.
     *
     * Calls `MR_TestSimpleTypes_SetIntPtrDefNull()`.
     */
    public static void SetIntPtrDefNull(mrbind_test.int_output _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetIntPtrDefNull.invokeExact(mrbind_test.Ffi.ptr(_1));
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
     * Generated from function `MR::TestSimpleTypes::GetIntRef`.
     *
     * Calls `MR_TestSimpleTypes_GetIntRef()`. Some types are raw C types, see the C bindings for the details.
     */
    public static java.lang.foreign.MemorySegment GetIntRef()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_GetIntRef.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::SetIntRef`.
     *
     * Calls `MR_TestSimpleTypes_SetIntRef()`.
     */
    public static void SetIntRef(mrbind_test.int_output _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetIntRef.invokeExact(mrbind_test.ScalarOutput.ref(_1, "_1"));
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
     * Generated from function `MR::TestSimpleTypes::SetIntRefDef`.
     *
     * Calls `MR_TestSimpleTypes_SetIntRefDef()`.
     */
    public static void SetIntRefDef(mrbind_test.int_output _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetIntRefDef.invokeExact((java.lang.foreign.MemorySegment)(_1 == null ? java.lang.foreign.MemorySegment.NULL : mrbind_test.ScalarOutput.ref(_1, "_1")));
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
     * Generated from function `MR::TestSimpleTypes::GetVoidPtr`.
     *
     * Calls `MR_TestSimpleTypes_GetVoidPtr()`. Some types are raw C types, see the C bindings for the details.
     */
    public static java.lang.foreign.MemorySegment GetVoidPtr()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_GetVoidPtr.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::SetVoidPtr`.
     *
     * Calls `MR_TestSimpleTypes_SetVoidPtr()`. Some types are raw C types, see the C bindings for the details.
     */
    public static void SetVoidPtr(java.lang.foreign.MemorySegment _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetVoidPtr.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::SetVoidPtrDef`.
     *
     * Calls `MR_TestSimpleTypes_SetVoidPtrDef()`. Some types are raw C types, see the C bindings for the details.
     */
    public static void SetVoidPtrDef(java.lang.foreign.MemorySegment _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetVoidPtrDef.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::SetVoidPtrDefNull`.
     *
     * Calls `MR_TestSimpleTypes_SetVoidPtrDefNull()`. Some types are raw C types, see the C bindings for the details.
     */
    public static void SetVoidPtrDefNull(java.lang.foreign.MemorySegment _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetVoidPtrDefNull.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::GetConstVoidPtr`.
     *
     * Calls `MR_TestSimpleTypes_GetConstVoidPtr()`. Some types are raw C types, see the C bindings for the details.
     */
    public static java.lang.foreign.MemorySegment GetConstVoidPtr()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_GetConstVoidPtr.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::SetConstVoidPtr`.
     *
     * Calls `MR_TestSimpleTypes_SetConstVoidPtr()`. Some types are raw C types, see the C bindings for the details.
     */
    public static void SetConstVoidPtr(java.lang.foreign.MemorySegment _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetConstVoidPtr.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::SetConstVoidPtrDef`.
     *
     * Calls `MR_TestSimpleTypes_SetConstVoidPtrDef()`. Some types are raw C types, see the C bindings for the details.
     */
    public static void SetConstVoidPtrDef(java.lang.foreign.MemorySegment _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetConstVoidPtrDef.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::SetConstVoidPtrDefNull`.
     *
     * Calls `MR_TestSimpleTypes_SetConstVoidPtrDefNull()`. Some types are raw C types, see the C bindings for the details.
     */
    public static void SetConstVoidPtrDefNull(java.lang.foreign.MemorySegment _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetConstVoidPtrDefNull.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::GetVoidPtrPtr`.
     *
     * Calls `MR_TestSimpleTypes_GetVoidPtrPtr()`. Some types are raw C types, see the C bindings for the details.
     */
    public static java.lang.foreign.MemorySegment GetVoidPtrPtr()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_GetVoidPtrPtr.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::SetVoidPtrPtr`.
     *
     * Calls `MR_TestSimpleTypes_SetVoidPtrPtr()`. Some types are raw C types, see the C bindings for the details.
     */
    public static void SetVoidPtrPtr(java.lang.foreign.MemorySegment _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetVoidPtrPtr.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::SetVoidPtrPtrDef`.
     *
     * Calls `MR_TestSimpleTypes_SetVoidPtrPtrDef()`. Some types are raw C types, see the C bindings for the details.
     */
    public static void SetVoidPtrPtrDef(java.lang.foreign.MemorySegment _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetVoidPtrPtrDef.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::SetVoidPtrPtrDefNull`.
     *
     * Calls `MR_TestSimpleTypes_SetVoidPtrPtrDefNull()`. Some types are raw C types, see the C bindings for the details.
     */
    public static void SetVoidPtrPtrDefNull(java.lang.foreign.MemorySegment _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetVoidPtrPtrDefNull.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::GetEnum`.
     *
     * Calls `MR_TestSimpleTypes_GetEnum()`.
     */
    public static int GetEnum()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_GetEnum.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::SetEnum`.
     *
     * Calls `MR_TestSimpleTypes_SetEnum()`.
     */
    public static void SetEnum(mrbind_test.mr.testsimpletypes.E _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetEnum.invokeExact(java.util.Objects.requireNonNull(_1, "_1").value);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::SetEnumDef`.
     *
     * Calls `MR_TestSimpleTypes_SetEnumDef()`.
     */
    public static void SetEnumDef(mrbind_test.mr.testsimpletypes.E _1)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetEnumDef.invokeExact((java.lang.foreign.MemorySegment)(_1 == null ? java.lang.foreign.MemorySegment.NULL : mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_INT, _1.value)));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::GetEnumPtr`.
     *
     * Calls `MR_TestSimpleTypes_GetEnumPtr()`. Some types are raw C types, see the C bindings for the details.
     */
    public static java.lang.foreign.MemorySegment GetEnumPtr()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_GetEnumPtr.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::SetEnumPtr`.
     *
     * Calls `MR_TestSimpleTypes_SetEnumPtr()`. Some types are raw C types, see the C bindings for the details.
     */
    public static void SetEnumPtr(java.lang.foreign.MemorySegment _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetEnumPtr.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::SetEnumPtrDef`.
     *
     * Calls `MR_TestSimpleTypes_SetEnumPtrDef()`. Some types are raw C types, see the C bindings for the details.
     */
    public static void SetEnumPtrDef(java.lang.foreign.MemorySegment _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetEnumPtrDef.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::SetEnumPtrDefNull`.
     *
     * Calls `MR_TestSimpleTypes_SetEnumPtrDefNull()`. Some types are raw C types, see the C bindings for the details.
     */
    public static void SetEnumPtrDefNull(java.lang.foreign.MemorySegment _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetEnumPtrDefNull.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::GetEnumRef`.
     *
     * Calls `MR_TestSimpleTypes_GetEnumRef()`. Some types are raw C types, see the C bindings for the details.
     */
    public static java.lang.foreign.MemorySegment GetEnumRef()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_GetEnumRef.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::SetEnumRef`.
     *
     * Calls `MR_TestSimpleTypes_SetEnumRef()`. Some types are raw C types, see the C bindings for the details.
     */
    public static void SetEnumRef(java.lang.foreign.MemorySegment _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetEnumRef.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::SetEnumRefDef`.
     *
     * Calls `MR_TestSimpleTypes_SetEnumRefDef()`. Some types are raw C types, see the C bindings for the details.
     */
    public static void SetEnumRefDef(java.lang.foreign.MemorySegment _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetEnumRefDef.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::GetEnum2`.
     *
     * Calls `MR_TestSimpleTypes_GetEnum2()`.
     */
    public static int GetEnum2()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_GetEnum2.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::SetEnum2`.
     *
     * Calls `MR_TestSimpleTypes_SetEnum2()`.
     */
    public static void SetEnum2(mrbind_test.mr.testsimpletypes.E2 _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetEnum2.invokeExact(java.util.Objects.requireNonNull(_1, "_1").value);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::SetEnum2Def`.
     *
     * Calls `MR_TestSimpleTypes_SetEnum2Def()`.
     */
    public static void SetEnum2Def(mrbind_test.mr.testsimpletypes.E2 _1)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetEnum2Def.invokeExact((java.lang.foreign.MemorySegment)(_1 == null ? java.lang.foreign.MemorySegment.NULL : mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_SHORT, _1.value)));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::GetEnum2Ptr`.
     *
     * Calls `MR_TestSimpleTypes_GetEnum2Ptr()`. Some types are raw C types, see the C bindings for the details.
     */
    public static java.lang.foreign.MemorySegment GetEnum2Ptr()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_GetEnum2Ptr.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::SetEnum2Ptr`.
     *
     * Calls `MR_TestSimpleTypes_SetEnum2Ptr()`. Some types are raw C types, see the C bindings for the details.
     */
    public static void SetEnum2Ptr(java.lang.foreign.MemorySegment _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetEnum2Ptr.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::SetEnum2PtrDef`.
     *
     * Calls `MR_TestSimpleTypes_SetEnum2PtrDef()`. Some types are raw C types, see the C bindings for the details.
     */
    public static void SetEnum2PtrDef(java.lang.foreign.MemorySegment _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetEnum2PtrDef.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::SetEnum2PtrDefNull`.
     *
     * Calls `MR_TestSimpleTypes_SetEnum2PtrDefNull()`. Some types are raw C types, see the C bindings for the details.
     */
    public static void SetEnum2PtrDefNull(java.lang.foreign.MemorySegment _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetEnum2PtrDefNull.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::GetEnum2Ref`.
     *
     * Calls `MR_TestSimpleTypes_GetEnum2Ref()`. Some types are raw C types, see the C bindings for the details.
     */
    public static java.lang.foreign.MemorySegment GetEnum2Ref()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_GetEnum2Ref.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::SetEnum2Ref`.
     *
     * Calls `MR_TestSimpleTypes_SetEnum2Ref()`. Some types are raw C types, see the C bindings for the details.
     */
    public static void SetEnum2Ref(java.lang.foreign.MemorySegment _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetEnum2Ref.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::SetEnum2RefDef`.
     *
     * Calls `MR_TestSimpleTypes_SetEnum2RefDef()`. Some types are raw C types, see the C bindings for the details.
     */
    public static void SetEnum2RefDef(java.lang.foreign.MemorySegment _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_SetEnum2RefDef.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Test all kinds of `char`.
     * Generated from function `MR::TestSimpleTypes::CheckCharMaybeUnsigned`.
     *
     * Calls `MR_TestSimpleTypes_CheckCharMaybeUnsigned()`.
     */
    public static void CheckCharMaybeUnsigned(mrbind_test.char_output _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_CheckCharMaybeUnsigned.invokeExact(mrbind_test.Ffi.ptr(_1));
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
     * Generated from function `MR::TestSimpleTypes::CheckChar`.
     *
     * Calls `MR_TestSimpleTypes_CheckChar_unsigned_char_ptr()`.
     */
    public static void CheckChar(mrbind_test.unsigned_char_output _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_CheckChar_unsigned_char_ptr.invokeExact(mrbind_test.Ffi.ptr(_1));
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
     * Generated from function `MR::TestSimpleTypes::CheckChar`.
     *
     * Calls `MR_TestSimpleTypes_CheckChar_signed_char_ptr()`.
     */
    public static void CheckChar(mrbind_test.signed_char_output _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_CheckChar_signed_char_ptr.invokeExact(mrbind_test.Ffi.ptr(_1));
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
     * Generated from function `MR::TestSimpleTypes::LongLong`.
     *
     * Calls `MR_TestSimpleTypes_LongLong()`.
     */
    public static long LongLong(long x)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_LongLong.invokeExact(x);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::blah`.
     *
     * Calls `MR_TestSimpleTypes_blah_unsigned_long()`.
     */
    public static long blah_unsigned_long(long x)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_blah_unsigned_long.invokeExact(x);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::TestSimpleTypes::blah`.
     *
     * Calls `MR_TestSimpleTypes_blah_long()`.
     */
    public static long blah_long(long x)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_blah_long.invokeExact(x);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Function templates.
     * Generated from function `MR::TestSimpleTypes::FuncTemplate<unsigned long>`.
     *
     * Calls `MR_TestSimpleTypes_FuncTemplate_unsigned_long()`.
     */
    public static long FuncTemplate(long _1)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_FuncTemplate_unsigned_long.invokeExact(_1);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Function templates.
     * Generated from function `MR::TestSimpleTypes::FuncTemplate<int>`.
     *
     * Calls `MR_TestSimpleTypes_FuncTemplate_int()`.
     */
    public static int FuncTemplate(int _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_FuncTemplate_int.invokeExact(_1);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }
}
