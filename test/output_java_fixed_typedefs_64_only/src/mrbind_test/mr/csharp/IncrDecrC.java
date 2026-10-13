package mrbind_test.mr.csharp;

/**
 * This is a somewhat happy path. Since here the copy ctor takes a non-const reference, the static operators get added to the non-const half.
 * The non-static ones are not marked const, so they're also in the non-const half.
 * Generated from class `MR::CSharp::IncrDecrC`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class IncrDecrC extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public IncrDecrC(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? IncrDecrC::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_IncrDecrC_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IncrDecrC_DefaultConstruct()`.
     */
    public IncrDecrC()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_IncrDecrC_DefaultConstruct.invokeExact();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::IncrDecrC::IncrDecrC`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IncrDecrC_ConstructFromAnother()`.
     */
    public IncrDecrC(mrbind_test.mr.csharp.IncrDecrC _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.csharp.IncrDecrC _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_IncrDecrC_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::CSharp::IncrDecrC::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_IncrDecrC_AssignFromAnother()`.
     */
    public mrbind_test.mr.csharp.IncrDecrC assignFromAnother(mrbind_test.mr.csharp.IncrDecrC _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_IncrDecrC_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.IncrDecrC(__ret, false, __owner);
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
     * Generated from method `MR::CSharp::IncrDecrC::operator++`.
     *
     * Calls `MR_C_incr_MR_CSharp_IncrDecrC()`.
     */
    public mrbind_test.mr.csharp.IncrDecrC opIncr()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_C_incr_MR_CSharp_IncrDecrC.invokeExact(rawPointer());
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.IncrDecrC(__ret, false, __owner);
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
     * Generated from method `MR::CSharp::IncrDecrC::operator++`.
     *
     * Calls `MR_C_post_incr_MR_CSharp_IncrDecrC()`.
     */
    public mrbind_test.mr.csharp.IncrDecrC opPostIncr()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_C_post_incr_MR_CSharp_IncrDecrC.invokeExact(rawPointer());
            return new mrbind_test.mr.csharp.IncrDecrC(__ret, true, null);
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
     * Generated from method `MR::CSharp::IncrDecrC::operator--`.
     *
     * Calls `MR_C_decr_MR_CSharp_IncrDecrC()`.
     */
    public mrbind_test.mr.csharp.IncrDecrC opDecr()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_C_decr_MR_CSharp_IncrDecrC.invokeExact(rawPointer());
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.IncrDecrC(__ret, false, __owner);
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
     * Generated from method `MR::CSharp::IncrDecrC::operator--`.
     *
     * Calls `MR_C_post_decr_MR_CSharp_IncrDecrC()`.
     */
    public mrbind_test.mr.csharp.IncrDecrC opPostDecr()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_C_post_decr_MR_CSharp_IncrDecrC.invokeExact(rawPointer());
            return new mrbind_test.mr.csharp.IncrDecrC(__ret, true, null);
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
