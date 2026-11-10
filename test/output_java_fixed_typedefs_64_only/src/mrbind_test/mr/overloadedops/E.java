package mrbind_test.mr.overloadedops;

/**
 * Generated from class `MR::OverloadedOps::E`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class E extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public E(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? E::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_E_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_OverloadedOps_E_DefaultConstruct()`.
     */
    public E()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_E_DefaultConstruct.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Constructs `MR::OverloadedOps::E` elementwise.
     *
     * Calls `MR_OverloadedOps_E_ConstructFrom()`.
     */
    public E(int x)
    {
        this(__ctor_constructFrom(x), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFrom(int x)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_E_ConstructFrom.invokeExact(x);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::OverloadedOps::E::E`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_OverloadedOps_E_ConstructFromAnother()`.
     */
    public E(mrbind_test.mr.overloadedops.E _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.overloadedops.E _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_E_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::OverloadedOps::E::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_OverloadedOps_E_AssignFromAnother()`.
     */
    public mrbind_test.mr.overloadedops.E assignFromAnother(mrbind_test.mr.overloadedops.E _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_E_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.overloadedops.E(__ret, false, __owner);
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
     * Implicitly declares a defaulted `operator==` too. That and the `<=>` give `!=`, `<`, `>`, `<=` and `>=`.
     * Generated from method `MR::OverloadedOps::E::operator<=>`.
     *
     * Calls `MR_C_compare_three_way_MR_OverloadedOps_E()`.
     */
    public int opCompareThreeWay(mrbind_test.mr.overloadedops.E _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_compare_three_way_MR_OverloadedOps_E.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Returns a pointer to a member variable of class `MR::OverloadedOps::E` named `x`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_OverloadedOps_E_Get_x()`.
     */
    public int x()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_E_Get_x.invokeExact(rawPointer());
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
     * Modifies a member variable of class `MR::OverloadedOps::E` named `x`.
     *
     * Calls `MR_OverloadedOps_E_Set_x()`.
     */
    public void setX(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_E_Set_x.invokeExact(rawPointer(), value);
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
