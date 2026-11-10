package mrbind_test.mr.csharp;

/**
 * Generated from class `MR::CSharp::ThreeWayH`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class ThreeWayH extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public ThreeWayH(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? ThreeWayH::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_ThreeWayH_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_ThreeWayH_DefaultConstruct()`.
     */
    public ThreeWayH()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_ThreeWayH_DefaultConstruct.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::ThreeWayH::ThreeWayH`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_ThreeWayH_ConstructFromAnother()`.
     */
    public ThreeWayH(mrbind_test.mr.csharp.ThreeWayH _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.csharp.ThreeWayH _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_ThreeWayH_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::CSharp::ThreeWayH::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_ThreeWayH_AssignFromAnother()`.
     */
    public mrbind_test.mr.csharp.ThreeWayH assignFromAnother(mrbind_test.mr.csharp.ThreeWayH _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_ThreeWayH_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.ThreeWayH(__ret, false, __owner);
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
     * Generated from method `MR::CSharp::ThreeWayH::operator==`.
     *
     * Calls `MR_C_equal_MR_CSharp_ThreeWayH_int32_t()`.
     */
    public boolean opEqual(int _1)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.MR.test_csharp.H6.MR_C_equal_MR_CSharp_ThreeWayH_int32_t.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::CSharp::ThreeWayH::operator!=`.
     *
     * Calls `MR_C_not_equal_MR_CSharp_ThreeWayH_int32_t()`.
     */
    public boolean opNotEqual(int _1)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.MR.test_csharp.H6.MR_C_not_equal_MR_CSharp_ThreeWayH_int32_t.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::CSharp::ThreeWayH::operator<=>`.
     *
     * Calls `MR_C_compare_three_way_MR_CSharp_ThreeWayH()`.
     */
    public int opCompareThreeWay(mrbind_test.mr.csharp.ThreeWayH _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H6.MR_C_compare_three_way_MR_CSharp_ThreeWayH.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::ThreeWayH::operator<`.
     *
     * Calls `MR_C_less_MR_CSharp_ThreeWayH()`.
     */
    public boolean opLess(mrbind_test.mr.csharp.ThreeWayH _1)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.MR.test_csharp.H6.MR_C_less_MR_CSharp_ThreeWayH.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::ThreeWayH::operator>`.
     *
     * Calls `MR_C_greater_MR_CSharp_ThreeWayH()`.
     */
    public boolean opGreater(mrbind_test.mr.csharp.ThreeWayH _1)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.MR.test_csharp.H6.MR_C_greater_MR_CSharp_ThreeWayH.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::ThreeWayH::operator<=`.
     *
     * Calls `MR_C_less_equal_MR_CSharp_ThreeWayH()`.
     */
    public boolean opLessEqual(mrbind_test.mr.csharp.ThreeWayH _1)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.MR.test_csharp.H6.MR_C_less_equal_MR_CSharp_ThreeWayH.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::ThreeWayH::operator>=`.
     *
     * Calls `MR_C_greater_equal_MR_CSharp_ThreeWayH()`.
     */
    public boolean opGreaterEqual(mrbind_test.mr.csharp.ThreeWayH _1)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.MR.test_csharp.H6.MR_C_greater_equal_MR_CSharp_ThreeWayH.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
