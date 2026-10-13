package mrbind_test.mr.csharp;

/**
 * Generated from class `MR::CSharp::ClassMemberPointersUshort`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class ClassMemberPointersUshort extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public ClassMemberPointersUshort(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? ClassMemberPointersUshort::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersUshort_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::ClassMemberPointersUshort::ClassMemberPointersUshort`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_ClassMemberPointersUshort_ConstructFromAnother()`.
     */
    public ClassMemberPointersUshort(mrbind_test.mr.csharp.ClassMemberPointersUshort _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.csharp.ClassMemberPointersUshort _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersUshort_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Constructs `MR::CSharp::ClassMemberPointersUshort` elementwise.
     * The reference to the parameter `a` might be preserved in the constructed object.
     * The reference to the parameter `b` might be preserved in the constructed object.
     * The reference to the parameter `c` might be preserved in the constructed object.
     * The reference to the parameter `d` might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_ClassMemberPointersUshort_ConstructFrom()`. Some types are raw C types, see the C bindings for the details.
     */
    public ClassMemberPointersUshort(java.lang.foreign.MemorySegment a, java.lang.Short b, java.lang.foreign.MemorySegment c, short d)
    {
        this(__ctor_constructFrom(a, b, c, d), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFrom(java.lang.foreign.MemorySegment a, java.lang.Short b, java.lang.foreign.MemorySegment c, short d)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersUshort_ConstructFrom.invokeExact(a, (java.lang.foreign.MemorySegment)(b == null ? java.lang.foreign.MemorySegment.NULL : mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_SHORT, b)), c, mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_SHORT, d));
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `sa`.
     *
     * Calls `MR_CSharp_ClassMemberPointersUshort_Get_sa()`. Some types are raw C types, see the C bindings for the details.
     */
    public static java.lang.foreign.MemorySegment sa()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersUshort_Get_sa.invokeExact();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Modifies a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `sa`.
     * The reference to the parameter `value` might be preserved in this object in element `sa`.
     *
     * Calls `MR_CSharp_ClassMemberPointersUshort_Set_sa()`. Some types are raw C types, see the C bindings for the details.
     */
    public static void setSa(java.lang.foreign.MemorySegment value)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersUshort_Set_sa.invokeExact(value);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `sb`.
     *
     * Calls `MR_CSharp_ClassMemberPointersUshort_Get_sb()`. Some types are raw C types, see the C bindings for the details.
     */
    public static java.lang.foreign.MemorySegment sb()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersUshort_Get_sb.invokeExact();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Modifies a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `sb`.
     * The reference to the parameter `value` might be preserved in this object in element `sb`.
     *
     * Calls `MR_CSharp_ClassMemberPointersUshort_Set_sb()`.
     */
    public static void setSb(java.lang.Short value)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersUshort_Set_sb.invokeExact((java.lang.foreign.MemorySegment)(value == null ? java.lang.foreign.MemorySegment.NULL : mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_SHORT, value)));
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `sc`.
     *
     * Calls `MR_CSharp_ClassMemberPointersUshort_Get_sc()`. Some types are raw C types, see the C bindings for the details.
     */
    public static java.lang.foreign.MemorySegment sc()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersUshort_Get_sc.invokeExact();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `sd`.
     *
     * Calls `MR_CSharp_ClassMemberPointersUshort_Get_sd()`.
     */
    public static short sd()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersUshort_Get_sd.invokeExact();
            return __ret.reinterpret(2).get(java.lang.foreign.ValueLayout.JAVA_SHORT, 0);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `a`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ClassMemberPointersUshort_Get_a()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment a()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersUshort_Get_a.invokeExact(rawPointer());
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
     * Modifies a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `a`.
     * The reference to the parameter `value` might be preserved in this object in element `a`.
     *
     * Calls `MR_CSharp_ClassMemberPointersUshort_Set_a()`. Some types are raw C types, see the C bindings for the details.
     */
    public void setA(java.lang.foreign.MemorySegment value)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersUshort_Set_a.invokeExact(rawPointer(), value);
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
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `b`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ClassMemberPointersUshort_Get_b()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment b()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersUshort_Get_b.invokeExact(rawPointer());
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
     * Modifies a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `b`.
     * The reference to the parameter `value` might be preserved in this object in element `b`.
     *
     * Calls `MR_CSharp_ClassMemberPointersUshort_Set_b()`.
     */
    public void setB(java.lang.Short value)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersUshort_Set_b.invokeExact(rawPointer(), (java.lang.foreign.MemorySegment)(value == null ? java.lang.foreign.MemorySegment.NULL : mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_SHORT, value)));
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
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `c`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ClassMemberPointersUshort_Get_c()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment c()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersUshort_Get_c.invokeExact(rawPointer());
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
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `d`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ClassMemberPointersUshort_Get_d()`.
     */
    public short d()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersUshort_Get_d.invokeExact(rawPointer());
            return __ret.reinterpret(2).get(java.lang.foreign.ValueLayout.JAVA_SHORT, 0);
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
