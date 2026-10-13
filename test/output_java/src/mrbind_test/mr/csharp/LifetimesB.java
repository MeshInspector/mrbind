package mrbind_test.mr.csharp;

/**
 * Generated from class `MR::CSharp::LifetimesB`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class LifetimesB extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public LifetimesB(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? LifetimesB::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesB_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_LifetimesB_DefaultConstruct()`.
     */
    public LifetimesB()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesB_DefaultConstruct.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Constructs `MR::CSharp::LifetimesB` elementwise.
     * The reference to the parameter `a` might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_LifetimesB_ConstructFrom()`.
     */
    public LifetimesB(mrbind_test.mr.csharp.LifetimesA a)
    {
        this(__ctor_constructFrom(a), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFrom(mrbind_test.mr.csharp.LifetimesA a)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesB_ConstructFrom.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::LifetimesB::LifetimesB`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_LifetimesB_ConstructFromAnother()`.
     */
    public LifetimesB(mrbind_test.mr.csharp.LifetimesB _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.csharp.LifetimesB _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesB_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::CSharp::LifetimesB::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_LifetimesB_AssignFromAnother()`.
     */
    public mrbind_test.mr.csharp.LifetimesB assignFromAnother(mrbind_test.mr.csharp.LifetimesB _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesB_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.LifetimesB(__ret, false, __owner);
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
     * `--infer-lifetime-iterators` should act on those:
     * Generated from method `MR::CSharp::LifetimesB::begin`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_LifetimesB_begin()`.
     */
    public mrbind_test.mr.csharp.LifetimesA begin()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesB_begin.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return __ret.address() == 0 ? null : new mrbind_test.mr.csharp.LifetimesA(__ret, false, __owner);
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
     * Generated from method `MR::CSharp::LifetimesB::end`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_LifetimesB_end()`.
     */
    public mrbind_test.mr.csharp.LifetimesA end()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesB_end.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return __ret.address() == 0 ? null : new mrbind_test.mr.csharp.LifetimesA(__ret, false, __owner);
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
     * Generated from method `MR::CSharp::LifetimesB::operator*`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_C_deref_MR_CSharp_LifetimesB_ref()`.
     */
    public mrbind_test.mr.csharp.LifetimesA opMul()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_C_deref_MR_CSharp_LifetimesB_ref.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.LifetimesA(__ret, false, __owner);
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
     * Returns a pointer to a member variable of class `MR::CSharp::LifetimesB` named `a`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_LifetimesB_Get_a()`.
     */
    public mrbind_test.mr.csharp.LifetimesA a()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesB_Get_a.invokeExact(rawPointer());
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.LifetimesA(__ret, false, __owner);
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
     * Modifies a member variable of class `MR::CSharp::LifetimesB` named `a`.
     * The reference to the parameter `value` might be preserved in this object in element `a`.
     *
     * Calls `MR_CSharp_LifetimesB_Set_a()`.
     */
    public void setA(mrbind_test.mr.csharp.LifetimesA value)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesB_Set_a.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(value, "value"));
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
