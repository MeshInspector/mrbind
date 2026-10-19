package mrbind_test.mr.overloadsuffix;

/**
 * Generated from class `MR::OverloadSuffix::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class A extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public A(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? A::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_A_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Generated from constructor `MR::OverloadSuffix::A::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_OverloadSuffix_A_ConstructFromAnother()`.
     */
    public A(mrbind_test.mr.overloadsuffix.A _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.overloadsuffix.A _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_A_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from constructor `MR::OverloadSuffix::A::A`.
     *
     * Calls `MR_OverloadSuffix_A_Construct_1_int()`.
     */
    public A(int _1)
    {
        this(__ctor_construct_1_int(_1), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct_1_int(int _1)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_A_Construct_1_int.invokeExact(_1);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::OverloadSuffix::A::A`.
     *
     * Calls `MR_OverloadSuffix_A_Construct_1_float()`.
     */
    public A(float _1)
    {
        this(__ctor_construct_1_float(_1), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct_1_float(float _1)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_A_Construct_1_float.invokeExact(_1);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::OverloadSuffix::A::A`.
     *
     * Calls `MR_OverloadSuffix_A_Construct_2()`.
     */
    public A(int _1, int _2)
    {
        this(__ctor_construct_2(_1, _2), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct_2(int _1, int _2)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_A_Construct_2.invokeExact(_1, _2);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from method `MR::OverloadSuffix::A::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_OverloadSuffix_A_AssignFromAnother()`.
     */
    public mrbind_test.mr.overloadsuffix.A assignFromAnother(mrbind_test.mr.overloadsuffix.A _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_A_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.overloadsuffix.A(__ret, false, __owner);
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
     * Generated from method `MR::OverloadSuffix::A::foo`.
     *
     * Calls `MR_OverloadSuffix_A_foo_1_int()`.
     */
    public void foo(int _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_A_foo_1_int.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::OverloadSuffix::A::foo`.
     *
     * Calls `MR_OverloadSuffix_A_foo_1_float()`.
     */
    public void foo(float _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_A_foo_1_float.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::OverloadSuffix::A::foo`.
     *
     * Calls `MR_OverloadSuffix_A_foo_2()`.
     */
    public void foo(int _1, int _2)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_A_foo_2.invokeExact(rawPointer(), _1, _2);
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
     * Generated from method `MR::OverloadSuffix::A::operator-`.
     *
     * Calls `MR_C_sub_MR_OverloadSuffix_A_int()`.
     */
    public void opSub(int _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_C_sub_MR_OverloadSuffix_A_int.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::OverloadSuffix::A::operator-`.
     *
     * Calls `MR_C_sub_MR_OverloadSuffix_A_float()`.
     */
    public void opSub(float _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_C_sub_MR_OverloadSuffix_A_float.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::OverloadSuffix::A::operator[]`.
     *
     * Calls `MR_OverloadSuffix_A_index_int()`.
     */
    public void index_int(int _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_A_index_int.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::OverloadSuffix::A::operator[]`.
     *
     * Calls `MR_OverloadSuffix_A_index_float()`.
     */
    public void index_float(float _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_A_index_float.invokeExact(rawPointer(), _1);
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
