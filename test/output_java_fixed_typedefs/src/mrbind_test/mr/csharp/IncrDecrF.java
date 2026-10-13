package mrbind_test.mr.csharp;

/**
 * Here we don't special-case those operators due to the class being non-copyable (and not trivially movable). They get spawned as functions as usual, in the const half.
 * Generated from class `MR::CSharp::IncrDecrF`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class IncrDecrF extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public IncrDecrF(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? IncrDecrF::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_IncrDecrF_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IncrDecrF_DefaultConstruct()`.
     */
    public IncrDecrF()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_IncrDecrF_DefaultConstruct.invokeExact();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::IncrDecrF::IncrDecrF`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IncrDecrF_ConstructFromAnother()`.
     */
    public IncrDecrF(mrbind_test.mr.csharp.IncrDecrF _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.csharp.IncrDecrF _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_IncrDecrF_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_MOVE_AND_DESTROY, java.util.Objects.requireNonNull(_other, "_other").release());
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
     * Generated from method `MR::CSharp::IncrDecrF::operator++`.
     *
     * Calls `MR_C_incr_MR_CSharp_IncrDecrF()`.
     */
    public mrbind_test.mr.csharp.IncrDecrF opIncr()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_C_incr_MR_CSharp_IncrDecrF.invokeExact(rawPointer());
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.IncrDecrF(__ret, false, __owner);
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
     * Generated from method `MR::CSharp::IncrDecrF::operator++`.
     *
     * Calls `MR_C_post_incr_MR_CSharp_IncrDecrF()`.
     */
    public mrbind_test.mr.csharp.IncrDecrF opPostIncr()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_C_post_incr_MR_CSharp_IncrDecrF.invokeExact(rawPointer());
            return new mrbind_test.mr.csharp.IncrDecrF(__ret, true, null);
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
     * Generated from method `MR::CSharp::IncrDecrF::operator--`.
     *
     * Calls `MR_C_decr_MR_CSharp_IncrDecrF()`.
     */
    public mrbind_test.mr.csharp.IncrDecrF opDecr()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_C_decr_MR_CSharp_IncrDecrF.invokeExact(rawPointer());
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.IncrDecrF(__ret, false, __owner);
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
     * Generated from method `MR::CSharp::IncrDecrF::operator--`.
     *
     * Calls `MR_C_post_decr_MR_CSharp_IncrDecrF()`.
     */
    public mrbind_test.mr.csharp.IncrDecrF opPostDecr()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_C_post_decr_MR_CSharp_IncrDecrF.invokeExact(rawPointer());
            return new mrbind_test.mr.csharp.IncrDecrF(__ret, true, null);
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
