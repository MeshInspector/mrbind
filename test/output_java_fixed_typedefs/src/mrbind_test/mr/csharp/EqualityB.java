package mrbind_test.mr.csharp;

/**
 * Return type isn't `bool`.
 * Generated from class `MR::CSharp::EqualityB`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class EqualityB extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public EqualityB(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? EqualityB::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_EqualityB_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_EqualityB_DefaultConstruct()`.
     */
    public EqualityB()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_EqualityB_DefaultConstruct.invokeExact();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::EqualityB::EqualityB`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_EqualityB_ConstructFromAnother()`.
     */
    public EqualityB(mrbind_test.mr.csharp.EqualityB _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.csharp.EqualityB _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_EqualityB_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::CSharp::EqualityB::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_EqualityB_AssignFromAnother()`.
     */
    public mrbind_test.mr.csharp.EqualityB assignFromAnother(mrbind_test.mr.csharp.EqualityB _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_EqualityB_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.EqualityB(__ret, false, __owner);
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
     * Generated from method `MR::CSharp::EqualityB::operator==`.
     *
     * Calls `MR_C_equal_MR_CSharp_EqualityB_int32_t()`.
     */
    public int opEqual(int _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H2.MR_C_equal_MR_CSharp_EqualityB_int32_t.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::CSharp::EqualityB::operator!=`.
     *
     * Calls `MR_C_not_equal_MR_CSharp_EqualityB_int32_t()`.
     */
    public int opNotEqual(int _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H2.MR_C_not_equal_MR_CSharp_EqualityB_int32_t.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::CSharp::EqualityB::operator==`.
     *
     * Calls `MR_C_equal_MR_CSharp_EqualityB()`.
     */
    public int opEqual(mrbind_test.mr.csharp.EqualityB _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H2.MR_C_equal_MR_CSharp_EqualityB.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
}
