package mrbind_test.mr.overloadsuffix;

/**
 * Generated from class `MR::OverloadSuffix::B`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class B extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public B(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? B::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_B_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Generated from constructor `MR::OverloadSuffix::B::B`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_OverloadSuffix_B_ConstructFromAnother()`.
     */
    public B(mrbind_test.mr.overloadsuffix.B _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.overloadsuffix.B _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_B_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from constructor `MR::OverloadSuffix::B::B`.
     *
     * Calls `MR_OverloadSuffix_B_Construct()`.
     */
    public B(int _1)
    {
        this(__ctor_construct(_1), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct(int _1)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_B_Construct.invokeExact(_1);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::OverloadSuffix::B::B`.
     *
     * Calls `MR_OverloadSuffix_B_Construct_1()`.
     */
    public B(float _1)
    {
        this(__ctor_construct_1(_1), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct_1(float _1)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_B_Construct_1.invokeExact(_1);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::OverloadSuffix::B::B`.
     *
     * Calls `MR_OverloadSuffix_B_Construct_2()`.
     */
    public B(int _1, int _2)
    {
        this(__ctor_construct_2(_1, _2), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct_2(int _1, int _2)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_B_Construct_2.invokeExact(_1, _2);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from method `MR::OverloadSuffix::B::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_OverloadSuffix_B_AssignFromAnother()`.
     */
    public mrbind_test.mr.overloadsuffix.B assignFromAnother(mrbind_test.mr.overloadsuffix.B _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_B_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.overloadsuffix.B(__ret, false, __owner);
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
     * Generated from method `MR::OverloadSuffix::B::foo`.
     *
     * Calls `MR_OverloadSuffix_B_foo()`.
     */
    public void foo(int _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_B_foo.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::OverloadSuffix::B::foo`.
     *
     * Calls `MR_OverloadSuffix_B_foo_1()`.
     */
    public void foo(float _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_B_foo_1.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::OverloadSuffix::B::foo`.
     *
     * Calls `MR_OverloadSuffix_B_foo_2()`.
     */
    public void foo(int _1, int _2)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_B_foo_2.invokeExact(rawPointer(), _1, _2);
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
     * Currently has no effect on those.
     * Generated from method `MR::OverloadSuffix::B::operator-`.
     *
     * Calls `MR_C_sub_MR_OverloadSuffix_B_int32_t()`.
     */
    public void opSub(int _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_C_sub_MR_OverloadSuffix_B_int32_t.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::OverloadSuffix::B::operator-`.
     *
     * Calls `MR_C_sub_MR_OverloadSuffix_B_float()`.
     */
    public void opSub(float _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_C_sub_MR_OverloadSuffix_B_float.invokeExact(rawPointer(), _1);
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
     * Works on those, though.
     * Generated from method `MR::OverloadSuffix::B::operator[]`.
     *
     * Calls `MR_OverloadSuffix_B_index()`.
     */
    public void index(int _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_B_index.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::OverloadSuffix::B::operator[]`.
     *
     * Calls `MR_OverloadSuffix_B_index_float()`.
     */
    public void index_float(float _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_B_index_float.invokeExact(rawPointer(), _1);
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
