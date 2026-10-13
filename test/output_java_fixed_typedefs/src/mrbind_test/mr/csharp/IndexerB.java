package mrbind_test.mr.csharp;

/**
 * Generated from class `MR::CSharp::IndexerB`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class IndexerB extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public IndexerB(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? IndexerB::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_IndexerB_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IndexerB_DefaultConstruct()`.
     */
    public IndexerB()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_IndexerB_DefaultConstruct.invokeExact();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Constructs `MR::CSharp::IndexerB` elementwise.
     * The reference to the parameter `a` might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IndexerB_ConstructFrom()`.
     */
    public IndexerB(mrbind_test.mr.csharp.IndexerA a)
    {
        this(__ctor_constructFrom(a), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFrom(mrbind_test.mr.csharp.IndexerA a)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_IndexerB_ConstructFrom.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"));
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
     * Generated from constructor `MR::CSharp::IndexerB::IndexerB`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IndexerB_ConstructFromAnother()`.
     */
    public IndexerB(mrbind_test.mr.csharp.IndexerB _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.csharp.IndexerB _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_IndexerB_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::CSharp::IndexerB::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_IndexerB_AssignFromAnother()`.
     */
    public mrbind_test.mr.csharp.IndexerB assignFromAnother(mrbind_test.mr.csharp.IndexerB _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_IndexerB_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.IndexerB(__ret, false, __owner);
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
     * Generated from method `MR::CSharp::IndexerB::operator[]`.
     *
     * Calls `MR_CSharp_IndexerB_index_1()`.
     */
    public mrbind_test.mr.csharp.IndexerA index_1(int i)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_IndexerB_index_1.invokeExact(rawPointer(), i);
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.IndexerA(__ret, false, __owner);
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
     * Generated from method `MR::CSharp::IndexerB::operator[]`.
     *
     * Calls `MR_CSharp_IndexerB_index_2()`.
     */
    public mrbind_test.mr.csharp.IndexerA index_2(int i, int j)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_IndexerB_index_2.invokeExact(rawPointer(), i, j);
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.IndexerA(__ret, false, __owner);
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
     * Generated from method `MR::CSharp::IndexerB::operator[]`.
     *
     * Calls `MR_CSharp_IndexerB_index_0()`.
     */
    public mrbind_test.mr.csharp.IndexerA index_0()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_IndexerB_index_0.invokeExact(rawPointer());
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.IndexerA(__ret, false, __owner);
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
     * Returns a pointer to a member variable of class `MR::CSharp::IndexerB` named `a`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_IndexerB_Get_a()`.
     */
    public mrbind_test.mr.csharp.IndexerA a()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_IndexerB_Get_a.invokeExact(rawPointer());
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.IndexerA(__ret, false, __owner);
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
     * Modifies a member variable of class `MR::CSharp::IndexerB` named `a`.
     * The reference to the parameter `value` might be preserved in this object in element `a`.
     *
     * Calls `MR_CSharp_IndexerB_Set_a()`.
     */
    public void setA(mrbind_test.mr.csharp.IndexerA value)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_IndexerB_Set_a.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(value, "value"));
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
