package mrbind_test.mr.csharp;

/**
 * Nested attributes.
 * Generated from class `MR::CSharp::LifetimesE`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class LifetimesE extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public LifetimesE(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? LifetimesE::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesE_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::LifetimesE::LifetimesE`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_LifetimesE_ConstructFromAnother()`.
     */
    public LifetimesE(mrbind_test.mr.csharp.LifetimesE _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.csharp.LifetimesE _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesE_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from constructor `MR::CSharp::LifetimesE::LifetimesE`.
     * The reference to things referred to by the constructed object (if any) might be preserved in the parameter `ref`.
     *
     * Calls `MR_CSharp_LifetimesE_Construct()`.
     */
    public LifetimesE(mrbind_test.mr.csharp.LifetimesB ref)
    {
        this(__ctor_construct(ref), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct(mrbind_test.mr.csharp.LifetimesB ref)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesE_Construct.invokeExact(mrbind_test.Ffi.ptrNonNull(ref, "ref"));
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(ref);
        }
    }

    /**
     * Generated from method `MR::CSharp::LifetimesE::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_LifetimesE_AssignFromAnother()`.
     */
    public mrbind_test.mr.csharp.LifetimesE assignFromAnother(mrbind_test.mr.csharp.LifetimesE _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesE_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.LifetimesE(__ret, false, __owner);
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
     * Generated from method `MR::CSharp::LifetimesE::get`.
     * The reference to things referred to by this object (if any) might be preserved in the return value.
     *
     * Calls `MR_CSharp_LifetimesE_get()`.
     */
    public mrbind_test.mr.csharp.LifetimesA get()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesE_get.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::LifetimesE::return_ref`.
     * The reference to things referred to by the parameter `ref` (if any) might be preserved in the return value.
     *
     * Calls `MR_CSharp_LifetimesE_return_ref()`.
     */
    public mrbind_test.mr.csharp.LifetimesA return_ref(mrbind_test.mr.csharp.LifetimesA ref)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesE_return_ref.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(ref, "ref"));
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
            java.lang.ref.Reference.reachabilityFence(ref);
        }
    }

    /**
     * Generated from method `MR::CSharp::LifetimesE::store_ref_in_this`.
     * The reference to things referred to by the parameter `ref` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_LifetimesE_store_ref_in_this()`.
     */
    public void store_ref_in_this(mrbind_test.mr.csharp.LifetimesA ref)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesE_store_ref_in_this.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(ref, "ref"));
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(ref);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::LifetimesE` named `a`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_LifetimesE_Get_a()`.
     */
    public mrbind_test.mr.csharp.LifetimesA a()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesE_Get_a.invokeExact(rawPointer());
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
     * Modifies a member variable of class `MR::CSharp::LifetimesE` named `a`.
     * The reference to the parameter `value` might be preserved in this object in element `a`.
     *
     * Calls `MR_CSharp_LifetimesE_Set_a()`.
     */
    public void setA(mrbind_test.mr.csharp.LifetimesA value)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesE_Set_a.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(value, "value"));
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
