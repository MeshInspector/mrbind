package mrbind_test.mr.csharp;

/**
 * Generated from class `MR::CSharp::LifetimesD`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class LifetimesD extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public LifetimesD(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? LifetimesD::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesD_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::LifetimesD::LifetimesD`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_LifetimesD_ConstructFromAnother()`.
     */
    public LifetimesD(mrbind_test.mr.csharp.LifetimesD _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.csharp.LifetimesD _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesD_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Store param references in this. The two annotation styles are equivalent for constructors.
     * Generated from constructor `MR::CSharp::LifetimesD::LifetimesD`.
     * The reference to the parameter `ref` might be preserved in the constructed object.
     * The reference to the parameter `other_ref` might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_LifetimesD_Construct_2()`.
     */
    public LifetimesD(mrbind_test.mr.csharp.LifetimesA ref, mrbind_test.mr.csharp.LifetimesB other_ref)
    {
        this(__ctor_construct_2(ref, other_ref), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct_2(mrbind_test.mr.csharp.LifetimesA ref, mrbind_test.mr.csharp.LifetimesB other_ref)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesD_Construct_2.invokeExact(mrbind_test.Ffi.ptrNonNull(ref, "ref"), mrbind_test.Ffi.ptrNonNull(other_ref, "other_ref"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(ref);
            java.lang.ref.Reference.reachabilityFence(other_ref);
        }
    }

    /**
     * `--infer-lifetime-constructors` should act on this.
     * Generated from constructor `MR::CSharp::LifetimesD::LifetimesD`.
     *
     * Calls `MR_CSharp_LifetimesD_Construct_1_MR_CSharp_LifetimesA()`.
     */
    public LifetimesD(mrbind_test.mr.csharp.LifetimesA ref)
    {
        this(__ctor_construct_1_MR_CSharp_LifetimesA(ref), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct_1_MR_CSharp_LifetimesA(mrbind_test.mr.csharp.LifetimesA ref)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesD_Construct_1_MR_CSharp_LifetimesA.invokeExact(mrbind_test.Ffi.ptrNonNull(ref, "ref"));
            mrbind_test.Ffi.checkException();
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
     * Store reference to this in param.
     * `--infer-lifetime-constructors` skips this, because we already have custom attributes.
     * Generated from constructor `MR::CSharp::LifetimesD::LifetimesD`.
     * The reference to the constructed object might be preserved in the parameter `ref`.
     *
     * Calls `MR_CSharp_LifetimesD_Construct_1_MR_CSharp_LifetimesB()`.
     */
    public LifetimesD(mrbind_test.mr.csharp.LifetimesB ref)
    {
        this(__ctor_construct_1_MR_CSharp_LifetimesB(ref), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct_1_MR_CSharp_LifetimesB(mrbind_test.mr.csharp.LifetimesB ref)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesD_Construct_1_MR_CSharp_LifetimesB.invokeExact(mrbind_test.Ffi.ptrNonNull(ref, "ref"));
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::LifetimesD::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_LifetimesD_AssignFromAnother()`.
     */
    public mrbind_test.mr.csharp.LifetimesD assignFromAnother(mrbind_test.mr.csharp.LifetimesD _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesD_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.LifetimesD(__ret, false, __owner);
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
     * Generated from method `MR::CSharp::LifetimesD::get`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_LifetimesD_get()`.
     */
    public mrbind_test.mr.csharp.LifetimesA get()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesD_get.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::LifetimesD::return_ref`.
     * The reference to the parameter `ref` might be preserved in the return value.
     *
     * Calls `MR_CSharp_LifetimesD_return_ref()`.
     */
    public mrbind_test.mr.csharp.LifetimesA return_ref(mrbind_test.mr.csharp.LifetimesA ref)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesD_return_ref.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(ref, "ref"));
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = ref;
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
     * Generated from method `MR::CSharp::LifetimesD::return_ref_static`.
     * The reference to the parameter `ref` might be preserved in the return value.
     *
     * Calls `MR_CSharp_LifetimesD_return_ref_static()`.
     */
    public static mrbind_test.mr.csharp.LifetimesA return_ref_static(mrbind_test.mr.csharp.LifetimesA ref)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesD_return_ref_static.invokeExact(mrbind_test.Ffi.ptrNonNull(ref, "ref"));
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = ref;
            return new mrbind_test.mr.csharp.LifetimesA(__ret, false, __owner);
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
     * Generated from method `MR::CSharp::LifetimesD::store_ref_in_this`.
     * The reference to the parameter `ref` might be preserved in this object.
     *
     * Calls `MR_CSharp_LifetimesD_store_ref_in_this()`.
     */
    public void store_ref_in_this(mrbind_test.mr.csharp.LifetimesA ref)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesD_store_ref_in_this.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(ref, "ref"));
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::LifetimesD::store_ref_in_param`.
     * The reference to the parameter `ref` might be preserved in the parameter `other_ref`.
     *
     * Calls `MR_CSharp_LifetimesD_store_ref_in_param()`.
     */
    public void store_ref_in_param(mrbind_test.mr.csharp.LifetimesA ref, mrbind_test.mr.csharp.LifetimesB other_ref)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesD_store_ref_in_param.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(ref, "ref"), mrbind_test.Ffi.ptrNonNull(other_ref, "other_ref"));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(ref);
            java.lang.ref.Reference.reachabilityFence(other_ref);
        }
    }

    /**
     * Generated from method `MR::CSharp::LifetimesD::store_this_in_param`.
     * The reference to this object might be preserved in the parameter `ref`.
     *
     * Calls `MR_CSharp_LifetimesD_store_this_in_param()`.
     */
    public void store_this_in_param(mrbind_test.mr.csharp.LifetimesA ref)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesD_store_this_in_param.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(ref, "ref"));
            mrbind_test.Ffi.checkException();
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
     * Returns a pointer to a member variable of class `MR::CSharp::LifetimesD` named `a`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_LifetimesD_Get_a()`.
     */
    public mrbind_test.mr.csharp.LifetimesA a()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesD_Get_a.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
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
     * Modifies a member variable of class `MR::CSharp::LifetimesD` named `a`.
     * The reference to the parameter `value` might be preserved in this object in element `a`.
     *
     * Calls `MR_CSharp_LifetimesD_Set_a()`.
     */
    public void setA(mrbind_test.mr.csharp.LifetimesA value)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_LifetimesD_Set_a.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(value, "value"));
            mrbind_test.Ffi.checkException();
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
