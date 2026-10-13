package mrbind_test.mr.csharp;

/**
 * Generated from class `MR::CSharp::AmbiguousTemplates`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class AmbiguousTemplates extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public AmbiguousTemplates(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? AmbiguousTemplates::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_AmbiguousTemplates_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_AmbiguousTemplates_DefaultConstruct()`.
     */
    public AmbiguousTemplates()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_AmbiguousTemplates_DefaultConstruct.invokeExact();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::AmbiguousTemplates::AmbiguousTemplates`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_AmbiguousTemplates_ConstructFromAnother()`.
     */
    public AmbiguousTemplates(mrbind_test.mr.csharp.AmbiguousTemplates _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.csharp.AmbiguousTemplates _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_AmbiguousTemplates_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::CSharp::AmbiguousTemplates::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_AmbiguousTemplates_AssignFromAnother()`.
     */
    public mrbind_test.mr.csharp.AmbiguousTemplates assignFromAnother(mrbind_test.mr.csharp.AmbiguousTemplates _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_AmbiguousTemplates_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.AmbiguousTemplates(__ret, false, __owner);
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
     * Generated from method `MR::CSharp::AmbiguousTemplates::template_a<int32_t>`.
     *
     * Calls `MR_CSharp_AmbiguousTemplates_template_a_int32_t()`.
     */
    public void template_a(int _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_AmbiguousTemplates_template_a_int32_t.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::CSharp::AmbiguousTemplates::template_a<float>`.
     *
     * Calls `MR_CSharp_AmbiguousTemplates_template_a_float()`.
     */
    public void template_a(float _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_AmbiguousTemplates_template_a_float.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::CSharp::AmbiguousTemplates::template_b<int32_t>`.
     *
     * Calls `MR_CSharp_AmbiguousTemplates_template_b_int32_t()`.
     */
    public int template_b_int32_t()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_AmbiguousTemplates_template_b_int32_t.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::AmbiguousTemplates::template_b<float>`.
     *
     * Calls `MR_CSharp_AmbiguousTemplates_template_b_float()`.
     */
    public float template_b_float()
    {
        try
        {
            float __ret = (float)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_AmbiguousTemplates_template_b_float.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::AmbiguousTemplates::template_c<int32_t>`.
     *
     * Calls `MR_CSharp_AmbiguousTemplates_template_c_int32_t()`.
     */
    public void template_c_int32_t()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_AmbiguousTemplates_template_c_int32_t.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::AmbiguousTemplates::template_c<float>`.
     *
     * Calls `MR_CSharp_AmbiguousTemplates_template_c_float()`.
     */
    public void template_c_float()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_AmbiguousTemplates_template_c_float.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::AmbiguousTemplates::instantiate`.
     *
     * Calls `MR_CSharp_AmbiguousTemplates_instantiate()`.
     */
    public void instantiate()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_AmbiguousTemplates_instantiate.invokeExact(rawPointer());
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
