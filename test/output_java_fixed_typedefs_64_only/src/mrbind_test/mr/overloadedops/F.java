package mrbind_test.mr.overloadedops;

/**
 * Generated from class `MR::OverloadedOps::F`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class F extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public F(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? F::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_F_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_OverloadedOps_F_DefaultConstruct()`.
     */
    public F()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_F_DefaultConstruct.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Constructs `MR::OverloadedOps::F` elementwise.
     *
     * Calls `MR_OverloadedOps_F_ConstructFrom()`.
     */
    public F(int x)
    {
        this(__ctor_constructFrom(x), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFrom(int x)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_F_ConstructFrom.invokeExact(x);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::OverloadedOps::F::F`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_OverloadedOps_F_ConstructFromAnother()`.
     */
    public F(mrbind_test.mr.overloadedops.F _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.overloadedops.F _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_F_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::OverloadedOps::F::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_OverloadedOps_F_AssignFromAnother()`.
     */
    public mrbind_test.mr.overloadedops.F assignFromAnother(mrbind_test.mr.overloadedops.F _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_F_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.overloadedops.F(__ret, false, __owner);
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
     * Generated from method `MR::OverloadedOps::F::operator==`.
     *
     * Calls `MR_C_equal_MR_OverloadedOps_F()`.
     */
    public boolean opEqual(mrbind_test.mr.overloadedops.F _1)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_equal_MR_OverloadedOps_F.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Generated from method `MR::OverloadedOps::F::operator!=`.
     *
     * Calls `MR_C_not_equal_MR_OverloadedOps_F()`.
     */
    public boolean opNotEqual(mrbind_test.mr.overloadedops.F _1)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_not_equal_MR_OverloadedOps_F.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Generated from method `MR::OverloadedOps::F::operator>`.
     *
     * Calls `MR_C_greater_MR_OverloadedOps_F()`.
     */
    public boolean opGreater(mrbind_test.mr.overloadedops.F _1)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_greater_MR_OverloadedOps_F.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Generated from method `MR::OverloadedOps::F::operator<=`.
     *
     * Calls `MR_C_less_equal_MR_OverloadedOps_F()`.
     */
    public boolean opLessEqual(mrbind_test.mr.overloadedops.F _1)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_less_equal_MR_OverloadedOps_F.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Generated from method `MR::OverloadedOps::F::operator>=`.
     *
     * Calls `MR_C_greater_equal_MR_OverloadedOps_F()`.
     */
    public boolean opGreaterEqual(mrbind_test.mr.overloadedops.F _1)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_greater_equal_MR_OverloadedOps_F.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Declared, so it isn't added once more.
     * Generated from method `MR::OverloadedOps::F::operator<`.
     *
     * Calls `MR_C_less_MR_OverloadedOps_F()`.
     */
    public boolean opLess(mrbind_test.mr.overloadedops.F _1)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_less_MR_OverloadedOps_F.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::OverloadedOps::F` named `x`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_OverloadedOps_F_Get_x()`.
     */
    public int x()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_F_Get_x.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            return __ret.reinterpret(4).get(java.lang.foreign.ValueLayout.JAVA_INT, 0);
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
     * Modifies a member variable of class `MR::OverloadedOps::F` named `x`.
     *
     * Calls `MR_OverloadedOps_F_Set_x()`.
     */
    public void setX(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_F_Set_x.invokeExact(rawPointer(), value);
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
}
