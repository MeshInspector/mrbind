package mrbind_test.mr.csharp;

/**
 * Generated from class `MR::CSharp::ClassMemberPointersExposed`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class ClassMemberPointersExposed extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public ClassMemberPointersExposed(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? ClassMemberPointersExposed::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersExposed_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::ClassMemberPointersExposed::ClassMemberPointersExposed`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_ClassMemberPointersExposed_ConstructFromAnother()`.
     */
    public ClassMemberPointersExposed(mrbind_test.mr.csharp.ClassMemberPointersExposed _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.csharp.ClassMemberPointersExposed _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersExposed_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Constructs `MR::CSharp::ClassMemberPointersExposed` elementwise.
     * The reference to the parameter `a` might be preserved in the constructed object.
     * The reference to the parameter `b` might be preserved in the constructed object.
     * The reference to the parameter `c` might be preserved in the constructed object.
     * The reference to the parameter `d` might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_ClassMemberPointersExposed_ConstructFrom()`.
     */
    public ClassMemberPointersExposed(mrbind_test.mr.csharp.ExposedLayout a, mrbind_test.mr.csharp.ExposedLayout b, mrbind_test.mr.csharp.ExposedLayout c, mrbind_test.mr.csharp.ExposedLayout d)
    {
        this(__ctor_constructFrom(a, b, c, d), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFrom(mrbind_test.mr.csharp.ExposedLayout a, mrbind_test.mr.csharp.ExposedLayout b, mrbind_test.mr.csharp.ExposedLayout c, mrbind_test.mr.csharp.ExposedLayout d)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersExposed_ConstructFrom.invokeExact(mrbind_test.Ffi.ptr(a), mrbind_test.Ffi.ptr(b), mrbind_test.Ffi.ptrNonNull(c, "c"), mrbind_test.Ffi.ptrNonNull(d, "d"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
            java.lang.ref.Reference.reachabilityFence(c);
            java.lang.ref.Reference.reachabilityFence(d);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `sa`.
     *
     * Calls `MR_CSharp_ClassMemberPointersExposed_Get_sa()`. Some types are raw C types, see the C bindings for the details.
     */
    public static java.lang.foreign.MemorySegment sa()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersExposed_Get_sa.invokeExact();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Modifies a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `sa`.
     * The reference to the parameter `value` might be preserved in this object in element `sa`.
     *
     * Calls `MR_CSharp_ClassMemberPointersExposed_Set_sa()`.
     */
    public static void setSa(mrbind_test.mr.csharp.ExposedLayout value)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersExposed_Set_sa.invokeExact(mrbind_test.Ffi.ptr(value));
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(value);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `sb`.
     *
     * Calls `MR_CSharp_ClassMemberPointersExposed_Get_sb()`. Some types are raw C types, see the C bindings for the details.
     */
    public static java.lang.foreign.MemorySegment sb()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersExposed_Get_sb.invokeExact();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Modifies a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `sb`.
     * The reference to the parameter `value` might be preserved in this object in element `sb`.
     *
     * Calls `MR_CSharp_ClassMemberPointersExposed_Set_sb()`.
     */
    public static void setSb(mrbind_test.mr.csharp.ExposedLayout value)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersExposed_Set_sb.invokeExact(mrbind_test.Ffi.ptr(value));
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(value);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `sc`.
     *
     * Calls `MR_CSharp_ClassMemberPointersExposed_Get_sc()`.
     */
    public static mrbind_test.mr.csharp.ExposedLayout sc()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersExposed_Get_sc.invokeExact();
            java.lang.Object __owner = null;
            return new mrbind_test.mr.csharp.ExposedLayout(__ret.reinterpret(mrbind_test.mr.csharp.ExposedLayout.LAYOUT.byteSize()), __owner);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `sd`.
     *
     * Calls `MR_CSharp_ClassMemberPointersExposed_Get_sd()`.
     */
    public static mrbind_test.mr.csharp.ExposedLayout sd()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersExposed_Get_sd.invokeExact();
            java.lang.Object __owner = null;
            return new mrbind_test.mr.csharp.ExposedLayout(__ret.reinterpret(mrbind_test.mr.csharp.ExposedLayout.LAYOUT.byteSize()), __owner);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `a`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ClassMemberPointersExposed_Get_a()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment a()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersExposed_Get_a.invokeExact(rawPointer());
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
     * Modifies a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `a`.
     * The reference to the parameter `value` might be preserved in this object in element `a`.
     *
     * Calls `MR_CSharp_ClassMemberPointersExposed_Set_a()`.
     */
    public void setA(mrbind_test.mr.csharp.ExposedLayout value)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersExposed_Set_a.invokeExact(rawPointer(), mrbind_test.Ffi.ptr(value));
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

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `b`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ClassMemberPointersExposed_Get_b()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment b()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersExposed_Get_b.invokeExact(rawPointer());
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
     * Modifies a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `b`.
     * The reference to the parameter `value` might be preserved in this object in element `b`.
     *
     * Calls `MR_CSharp_ClassMemberPointersExposed_Set_b()`.
     */
    public void setB(mrbind_test.mr.csharp.ExposedLayout value)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersExposed_Set_b.invokeExact(rawPointer(), mrbind_test.Ffi.ptr(value));
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

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `c`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ClassMemberPointersExposed_Get_c()`.
     */
    public mrbind_test.mr.csharp.ExposedLayout c()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersExposed_Get_c.invokeExact(rawPointer());
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.ExposedLayout(__ret.reinterpret(mrbind_test.mr.csharp.ExposedLayout.LAYOUT.byteSize()), __owner);
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
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `d`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ClassMemberPointersExposed_Get_d()`.
     */
    public mrbind_test.mr.csharp.ExposedLayout d()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersExposed_Get_d.invokeExact(rawPointer());
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.ExposedLayout(__ret.reinterpret(mrbind_test.mr.csharp.ExposedLayout.LAYOUT.byteSize()), __owner);
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
