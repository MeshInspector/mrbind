package mrbind_test.mr.overloadsuffix;

/**
 * Generated from class `MR::OverloadSuffix::C`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class C extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public C(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? C::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_C_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Generated from constructor `MR::OverloadSuffix::C::C`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_OverloadSuffix_C_ConstructFromAnother()`.
     */
    public C(mrbind_test.mr.overloadsuffix.C _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.overloadsuffix.C _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_C_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from constructor `MR::OverloadSuffix::C::C`.
     *
     * Calls `MR_OverloadSuffix_C_Construct_blah()`.
     */
    public C(int _1)
    {
        this(__ctor_construct_blah(_1), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct_blah(int _1)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_C_Construct_blah.invokeExact(_1);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::OverloadSuffix::C::C`.
     *
     * Calls `MR_OverloadSuffix_C_Construct_1()`.
     */
    public C(float _1)
    {
        this(__ctor_construct_1(_1), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct_1(float _1)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_C_Construct_1.invokeExact(_1);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::OverloadSuffix::C::C`.
     *
     * Calls `MR_OverloadSuffix_C_Construct_2()`.
     */
    public C(int _1, int _2)
    {
        this(__ctor_construct_2(_1, _2), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct_2(int _1, int _2)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_C_Construct_2.invokeExact(_1, _2);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from method `MR::OverloadSuffix::C::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_OverloadSuffix_C_AssignFromAnother()`.
     */
    public mrbind_test.mr.overloadsuffix.C assignFromAnother(mrbind_test.mr.overloadsuffix.C _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_C_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.overloadsuffix.C(__ret, false, __owner);
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
     * Generated from method `MR::OverloadSuffix::C::foo`.
     *
     * Calls `MR_OverloadSuffix_C_foo_blah()`.
     */
    public void foo(int _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_C_foo_blah.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::OverloadSuffix::C::foo`.
     *
     * Calls `MR_OverloadSuffix_C_foo_1()`.
     */
    public void foo(float _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_C_foo_1.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::OverloadSuffix::C::foo`.
     *
     * Calls `MR_OverloadSuffix_C_foo_2()`.
     */
    public void foo(int _1, int _2)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_C_foo_2.invokeExact(rawPointer(), _1, _2);
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
     * Generated from method `MR::OverloadSuffix::C::operator-`.
     *
     * Calls `MR_C_sub_MR_OverloadSuffix_C_int32_t()`.
     */
    public void opSub(int _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_C_sub_MR_OverloadSuffix_C_int32_t.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::OverloadSuffix::C::operator-`.
     *
     * Calls `MR_C_sub_MR_OverloadSuffix_C_float()`.
     */
    public void opSub(float _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_C_sub_MR_OverloadSuffix_C_float.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::OverloadSuffix::C::operator[]`.
     *
     * Calls `MR_OverloadSuffix_C_index_blah()`.
     */
    public void index_blah(int _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_C_index_blah.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::OverloadSuffix::C::operator[]`.
     *
     * Calls `MR_OverloadSuffix_C_index()`.
     */
    public void index(float _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_C_index.invokeExact(rawPointer(), _1);
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
