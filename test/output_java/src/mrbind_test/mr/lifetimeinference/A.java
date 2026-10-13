package mrbind_test.mr.lifetimeinference;

/**
 * Generated from class `MR::LifetimeInference::A`.
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
            mrbind_test.ffi.MR.test_lifetime_inference.H0.MR_LifetimeInference_A_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_LifetimeInference_A_DefaultConstruct()`.
     */
    public A()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_lifetime_inference.H0.MR_LifetimeInference_A_DefaultConstruct.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Constructs `MR::LifetimeInference::A` elementwise.
     *
     * Calls `MR_LifetimeInference_A_ConstructFrom()`.
     */
    public A(int x)
    {
        this(__ctor_constructFrom(x), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFrom(int x)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_lifetime_inference.H0.MR_LifetimeInference_A_ConstructFrom.invokeExact(x);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::LifetimeInference::A::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_LifetimeInference_A_ConstructFromAnother()`.
     */
    public A(mrbind_test.mr.lifetimeinference.A _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.lifetimeinference.A _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_lifetime_inference.H0.MR_LifetimeInference_A_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::LifetimeInference::A::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_LifetimeInference_A_AssignFromAnother()`.
     */
    public mrbind_test.mr.lifetimeinference.A assignFromAnother(mrbind_test.mr.lifetimeinference.A _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_lifetime_inference.H0.MR_LifetimeInference_A_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.lifetimeinference.A(__ret, false, __owner);
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
     * Generated from method `MR::LifetimeInference::A::begin`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_LifetimeInference_A_begin()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment begin()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_lifetime_inference.H0.MR_LifetimeInference_A_begin.invokeExact(rawPointer());
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
        }
    }

    /**
     * Generated from method `MR::LifetimeInference::A::end`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_LifetimeInference_A_end()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment end()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_lifetime_inference.H0.MR_LifetimeInference_A_end.invokeExact(rawPointer());
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
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::LifetimeInference::A` named `x`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_LifetimeInference_A_Get_x()`.
     */
    public int x()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_lifetime_inference.H0.MR_LifetimeInference_A_Get_x.invokeExact(rawPointer());
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
     * Modifies a member variable of class `MR::LifetimeInference::A` named `x`.
     *
     * Calls `MR_LifetimeInference_A_Set_x()`.
     */
    public void setX(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_lifetime_inference.H0.MR_LifetimeInference_A_Set_x.invokeExact(rawPointer(), value);
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
