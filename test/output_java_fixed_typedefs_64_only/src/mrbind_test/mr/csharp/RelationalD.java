package mrbind_test.mr.csharp;

/**
 * The operators have operands of different types, causing them to be demoted to functions.
 * Generated from class `MR::CSharp::RelationalD`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class RelationalD extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public RelationalD(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? RelationalD::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_RelationalD_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_RelationalD_DefaultConstruct()`.
     */
    public RelationalD()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_RelationalD_DefaultConstruct.invokeExact();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::RelationalD::RelationalD`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_RelationalD_ConstructFromAnother()`.
     */
    public RelationalD(mrbind_test.mr.csharp.RelationalD _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.csharp.RelationalD _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_RelationalD_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::CSharp::RelationalD::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_RelationalD_AssignFromAnother()`.
     */
    public mrbind_test.mr.csharp.RelationalD assignFromAnother(mrbind_test.mr.csharp.RelationalD _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_RelationalD_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.RelationalD(__ret, false, __owner);
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
     * Generated from method `MR::CSharp::RelationalD::operator<`.
     *
     * Calls `MR_C_less_MR_CSharp_RelationalD_MR_CSharp_RelationalC()`.
     */
    public boolean opLess(mrbind_test.mr.csharp.RelationalC _1)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.MR.test_csharp.H4.MR_C_less_MR_CSharp_RelationalD_MR_CSharp_RelationalC.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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

    /**
     * Generated from method `MR::CSharp::RelationalD::operator>`.
     *
     * Calls `MR_C_greater_MR_CSharp_RelationalD_MR_CSharp_RelationalC()`.
     */
    public boolean opGreater(mrbind_test.mr.csharp.RelationalC _1)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.MR.test_csharp.H4.MR_C_greater_MR_CSharp_RelationalD_MR_CSharp_RelationalC.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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

    /**
     * Generated from method `MR::CSharp::RelationalD::operator<=`.
     *
     * Calls `MR_C_less_equal_MR_CSharp_RelationalD_MR_CSharp_RelationalC()`.
     */
    public boolean opLessEqual(mrbind_test.mr.csharp.RelationalC _1)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.MR.test_csharp.H4.MR_C_less_equal_MR_CSharp_RelationalD_MR_CSharp_RelationalC.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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

    /**
     * Generated from method `MR::CSharp::RelationalD::operator>=`.
     *
     * Calls `MR_C_greater_equal_MR_CSharp_RelationalD_MR_CSharp_RelationalC()`.
     */
    public boolean opGreaterEqual(mrbind_test.mr.csharp.RelationalC _1)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.MR.test_csharp.H4.MR_C_greater_equal_MR_CSharp_RelationalD_MR_CSharp_RelationalC.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
