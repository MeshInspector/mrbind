package mrbind_test.mr.csharp;

/**
 * Test `std::function`.
 * Generated from class `MR::CSharp::TestStdFunction`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class TestStdFunction extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public TestStdFunction(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? TestStdFunction::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestStdFunction_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_TestStdFunction_DefaultConstruct()`.
     */
    public TestStdFunction()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestStdFunction_DefaultConstruct.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Constructs `MR::CSharp::TestStdFunction` elementwise.
     * The reference to the parameter `f1` might be preserved in the constructed object.
     * The reference to the parameter `f2` might be preserved in the constructed object.
     * The reference to the parameter `f3` might be preserved in the constructed object.
     * The reference to the parameter `f4` might be preserved in the constructed object.
     * The reference to the parameter `f5` might be preserved in the constructed object.
     * The reference to the parameter `f6` might be preserved in the constructed object.
     * The reference to the parameter `f7` might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_TestStdFunction_ConstructFrom()`.
     */
    public TestStdFunction(mrbind_test.mr.cs.std_function_int32_t_from_std_string f1, mrbind_test.mr.cs.std_function_std_string_from_int32_t_int32_t f2, mrbind_test.mr.cs.std_function_MR_CSharp_E1_from_MR_CSharp_E1 f3, mrbind_test.mr.cs.std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayo__90003873 f4, mrbind_test.mr.cs.std_function_int32_t_ref_from_int32_t_ref_int32_t_rvalue_ref f5, mrbind_test.mr.cs.std_function_int32_t_rvalue_ref f6, mrbind_test.mr.cs.std_function_void f7)
    {
        this(__ctor_constructFrom(f1, f2, f3, f4, f5, f6, f7), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFrom(mrbind_test.mr.cs.std_function_int32_t_from_std_string f1, mrbind_test.mr.cs.std_function_std_string_from_int32_t_int32_t f2, mrbind_test.mr.cs.std_function_MR_CSharp_E1_from_MR_CSharp_E1 f3, mrbind_test.mr.cs.std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayo__90003873 f4, mrbind_test.mr.cs.std_function_int32_t_ref_from_int32_t_ref_int32_t_rvalue_ref f5, mrbind_test.mr.cs.std_function_int32_t_rvalue_ref f6, mrbind_test.mr.cs.std_function_void f7)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestStdFunction_ConstructFrom.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(f1, "f1"), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(f2, "f2"), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(f3, "f3"), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(f4, "f4"), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(f5, "f5"), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(f6, "f6"), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(f7, "f7"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(f1);
            java.lang.ref.Reference.reachabilityFence(f2);
            java.lang.ref.Reference.reachabilityFence(f3);
            java.lang.ref.Reference.reachabilityFence(f4);
            java.lang.ref.Reference.reachabilityFence(f5);
            java.lang.ref.Reference.reachabilityFence(f6);
            java.lang.ref.Reference.reachabilityFence(f7);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::TestStdFunction::TestStdFunction`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_TestStdFunction_ConstructFromAnother()`.
     */
    public TestStdFunction(mrbind_test.mr.csharp.TestStdFunction _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.csharp.TestStdFunction _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestStdFunction_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(_other);
        }
    }

    /**
     * Generated from method `MR::CSharp::TestStdFunction::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_TestStdFunction_AssignFromAnother()`.
     */
    public mrbind_test.mr.csharp.TestStdFunction assignFromAnother(mrbind_test.mr.csharp.TestStdFunction _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestStdFunction_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.TestStdFunction(__ret, false, __owner);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(_other);
        }
    }

    /**
     * Generated from method `MR::CSharp::TestStdFunction::Call`.
     *
     * Calls `MR_CSharp_TestStdFunction_Call()`.
     */
    public void Call()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestStdFunction_Call.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestStdFunction` named `f1`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestStdFunction_Get_f1()`.
     */
    public mrbind_test.mr.cs.std_function_int32_t_from_std_string f1()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestStdFunction_Get_f1.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.cs.std_function_int32_t_from_std_string(__ret, false, __owner);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
        }
    }

    /**
     * Modifies a member variable of class `MR::CSharp::TestStdFunction` named `f1`.
     * The reference to the parameter `value` might be preserved in this object in element `f1`.
     *
     * Calls `MR_CSharp_TestStdFunction_Set_f1()`.
     */
    public void setF1(mrbind_test.mr.cs.std_function_int32_t_from_std_string value)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestStdFunction_Set_f1.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(value, "value"));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(value);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestStdFunction` named `f2`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestStdFunction_Get_f2()`.
     */
    public mrbind_test.mr.cs.std_function_std_string_from_int32_t_int32_t f2()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestStdFunction_Get_f2.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.cs.std_function_std_string_from_int32_t_int32_t(__ret, false, __owner);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
        }
    }

    /**
     * Modifies a member variable of class `MR::CSharp::TestStdFunction` named `f2`.
     * The reference to the parameter `value` might be preserved in this object in element `f2`.
     *
     * Calls `MR_CSharp_TestStdFunction_Set_f2()`.
     */
    public void setF2(mrbind_test.mr.cs.std_function_std_string_from_int32_t_int32_t value)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestStdFunction_Set_f2.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(value, "value"));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(value);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestStdFunction` named `f3`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestStdFunction_Get_f3()`.
     */
    public mrbind_test.mr.cs.std_function_MR_CSharp_E1_from_MR_CSharp_E1 f3()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestStdFunction_Get_f3.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.cs.std_function_MR_CSharp_E1_from_MR_CSharp_E1(__ret, false, __owner);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
        }
    }

    /**
     * Modifies a member variable of class `MR::CSharp::TestStdFunction` named `f3`.
     * The reference to the parameter `value` might be preserved in this object in element `f3`.
     *
     * Calls `MR_CSharp_TestStdFunction_Set_f3()`.
     */
    public void setF3(mrbind_test.mr.cs.std_function_MR_CSharp_E1_from_MR_CSharp_E1 value)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestStdFunction_Set_f3.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(value, "value"));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(value);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestStdFunction` named `f4`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestStdFunction_Get_f4()`.
     */
    public mrbind_test.mr.cs.std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayo__90003873 f4()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestStdFunction_Get_f4.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.cs.std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayo__90003873(__ret, false, __owner);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
        }
    }

    /**
     * Modifies a member variable of class `MR::CSharp::TestStdFunction` named `f4`.
     * The reference to the parameter `value` might be preserved in this object in element `f4`.
     *
     * Calls `MR_CSharp_TestStdFunction_Set_f4()`.
     */
    public void setF4(mrbind_test.mr.cs.std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayo__90003873 value)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestStdFunction_Set_f4.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(value, "value"));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(value);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestStdFunction` named `f5`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestStdFunction_Get_f5()`.
     */
    public mrbind_test.mr.cs.std_function_int32_t_ref_from_int32_t_ref_int32_t_rvalue_ref f5()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestStdFunction_Get_f5.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.cs.std_function_int32_t_ref_from_int32_t_ref_int32_t_rvalue_ref(__ret, false, __owner);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
        }
    }

    /**
     * Modifies a member variable of class `MR::CSharp::TestStdFunction` named `f5`.
     * The reference to the parameter `value` might be preserved in this object in element `f5`.
     *
     * Calls `MR_CSharp_TestStdFunction_Set_f5()`.
     */
    public void setF5(mrbind_test.mr.cs.std_function_int32_t_ref_from_int32_t_ref_int32_t_rvalue_ref value)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestStdFunction_Set_f5.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(value, "value"));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(value);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestStdFunction` named `f6`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestStdFunction_Get_f6()`.
     */
    public mrbind_test.mr.cs.std_function_int32_t_rvalue_ref f6()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestStdFunction_Get_f6.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.cs.std_function_int32_t_rvalue_ref(__ret, false, __owner);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
        }
    }

    /**
     * Modifies a member variable of class `MR::CSharp::TestStdFunction` named `f6`.
     * The reference to the parameter `value` might be preserved in this object in element `f6`.
     *
     * Calls `MR_CSharp_TestStdFunction_Set_f6()`.
     */
    public void setF6(mrbind_test.mr.cs.std_function_int32_t_rvalue_ref value)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestStdFunction_Set_f6.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(value, "value"));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(value);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestStdFunction` named `f7`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestStdFunction_Get_f7()`.
     */
    public mrbind_test.mr.cs.std_function_void f7()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestStdFunction_Get_f7.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.cs.std_function_void(__ret, false, __owner);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
        }
    }

    /**
     * Modifies a member variable of class `MR::CSharp::TestStdFunction` named `f7`.
     * The reference to the parameter `value` might be preserved in this object in element `f7`.
     *
     * Calls `MR_CSharp_TestStdFunction_Set_f7()`.
     */
    public void setF7(mrbind_test.mr.cs.std_function_void value)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestStdFunction_Set_f7.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(value, "value"));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(value);
        }
    }
}
