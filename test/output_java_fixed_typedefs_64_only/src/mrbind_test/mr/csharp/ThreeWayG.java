package mrbind_test.mr.csharp;

/**
 * Generated from class `MR::CSharp::ThreeWayG`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class ThreeWayG extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public ThreeWayG(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? ThreeWayG::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_ThreeWayG_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_ThreeWayG_DefaultConstruct()`.
     */
    public ThreeWayG()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_ThreeWayG_DefaultConstruct.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::ThreeWayG::ThreeWayG`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_ThreeWayG_ConstructFromAnother()`.
     */
    public ThreeWayG(mrbind_test.mr.csharp.ThreeWayG _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.csharp.ThreeWayG _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_ThreeWayG_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::CSharp::ThreeWayG::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_ThreeWayG_AssignFromAnother()`.
     */
    public mrbind_test.mr.csharp.ThreeWayG assignFromAnother(mrbind_test.mr.csharp.ThreeWayG _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_ThreeWayG_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.ThreeWayG(__ret, false, __owner);
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
     * Generated from method `MR::CSharp::ThreeWayG::operator<=>`.
     *
     * Calls `MR_C_compare_three_way_MR_CSharp_ThreeWayG()`.
     */
    public int opCompareThreeWay(mrbind_test.mr.csharp.ThreeWayG _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H6.MR_C_compare_three_way_MR_CSharp_ThreeWayG.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Some random operators that should not be replaced.
     * Generated from method `MR::CSharp::ThreeWayG::operator!=`.
     *
     * Calls `MR_C_not_equal_MR_CSharp_ThreeWayG()`.
     */
    public boolean opNotEqual(mrbind_test.mr.csharp.ThreeWayG _1)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.MR.test_csharp.H6.MR_C_not_equal_MR_CSharp_ThreeWayG.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Generated from method `MR::CSharp::ThreeWayG::operator>`.
     *
     * Calls `MR_C_greater_MR_CSharp_ThreeWayG()`.
     */
    public boolean opGreater(mrbind_test.mr.csharp.ThreeWayG _1)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.MR.test_csharp.H6.MR_C_greater_MR_CSharp_ThreeWayG.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }
}
