package mrbind_test.mr.csharp;

/**
 * Generated from class `MR::CSharp::IterableK::Sentinel`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class IterableK_Sentinel extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public IterableK_Sentinel(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? IterableK_Sentinel::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_IterableK_Sentinel_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IterableK_Sentinel_DefaultConstruct()`.
     */
    public IterableK_Sentinel()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_IterableK_Sentinel_DefaultConstruct.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Constructs `MR::CSharp::IterableK::Sentinel` elementwise.
     * The reference to the parameter `ptr` might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IterableK_Sentinel_ConstructFrom()`. Some types are raw C types, see the C bindings for the details.
     */
    public IterableK_Sentinel(java.lang.foreign.MemorySegment ptr)
    {
        this(__ctor_constructFrom(ptr), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFrom(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_IterableK_Sentinel_ConstructFrom.invokeExact(ptr);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::IterableK::Sentinel::Sentinel`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IterableK_Sentinel_ConstructFromAnother()`.
     */
    public IterableK_Sentinel(mrbind_test.mr.csharp.IterableK_Sentinel _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.csharp.IterableK_Sentinel _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_IterableK_Sentinel_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::CSharp::IterableK::Sentinel::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_IterableK_Sentinel_AssignFromAnother()`.
     */
    public mrbind_test.mr.csharp.IterableK_Sentinel assignFromAnother(mrbind_test.mr.csharp.IterableK_Sentinel _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_IterableK_Sentinel_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.IterableK_Sentinel(__ret, false, __owner);
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
     * Returns a pointer to a member variable of class `MR::CSharp::IterableK::Sentinel` named `ptr`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_IterableK_Sentinel_Get_ptr()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment ptr()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_IterableK_Sentinel_Get_ptr.invokeExact(rawPointer());
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
     * Modifies a member variable of class `MR::CSharp::IterableK::Sentinel` named `ptr`.
     * The reference to the parameter `value` might be preserved in this object in element `ptr`.
     *
     * Calls `MR_CSharp_IterableK_Sentinel_Set_ptr()`. Some types are raw C types, see the C bindings for the details.
     */
    public void setPtr(java.lang.foreign.MemorySegment value)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_IterableK_Sentinel_Set_ptr.invokeExact(rawPointer(), value);
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
