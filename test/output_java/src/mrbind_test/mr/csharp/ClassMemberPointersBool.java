package mrbind_test.mr.csharp;

/**
 * Generated from class `MR::CSharp::ClassMemberPointersBool`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class ClassMemberPointersBool extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public ClassMemberPointersBool(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? ClassMemberPointersBool::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersBool_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::ClassMemberPointersBool::ClassMemberPointersBool`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_ClassMemberPointersBool_ConstructFromAnother()`.
     */
    public ClassMemberPointersBool(mrbind_test.mr.csharp.ClassMemberPointersBool _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.csharp.ClassMemberPointersBool _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersBool_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Constructs `MR::CSharp::ClassMemberPointersBool` elementwise.
     * The reference to the parameter `a` might be preserved in the constructed object.
     * The reference to the parameter `b` might be preserved in the constructed object.
     * The reference to the parameter `c` might be preserved in the constructed object.
     * The reference to the parameter `d` might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_ClassMemberPointersBool_ConstructFrom()`. Some types are raw C types, see the C bindings for the details.
     */
    public ClassMemberPointersBool(java.lang.foreign.MemorySegment a, java.lang.Boolean b, java.lang.foreign.MemorySegment c, boolean d)
    {
        this(__ctor_constructFrom(a, b, c, d), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFrom(java.lang.foreign.MemorySegment a, java.lang.Boolean b, java.lang.foreign.MemorySegment c, boolean d)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersBool_ConstructFrom.invokeExact(a, (java.lang.foreign.MemorySegment)(b == null ? java.lang.foreign.MemorySegment.NULL : mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_BOOLEAN, b)), c, mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_BOOLEAN, d));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `sa`.
     *
     * Calls `MR_CSharp_ClassMemberPointersBool_Get_sa()`. Some types are raw C types, see the C bindings for the details.
     */
    public static java.lang.foreign.MemorySegment sa()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersBool_Get_sa.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Modifies a member variable of class `MR::CSharp::ClassMemberPointersBool` named `sa`.
     * The reference to the parameter `value` might be preserved in this object in element `sa`.
     *
     * Calls `MR_CSharp_ClassMemberPointersBool_Set_sa()`. Some types are raw C types, see the C bindings for the details.
     */
    public static void setSa(java.lang.foreign.MemorySegment value)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersBool_Set_sa.invokeExact(value);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `sb`.
     *
     * Calls `MR_CSharp_ClassMemberPointersBool_Get_sb()`. Some types are raw C types, see the C bindings for the details.
     */
    public static java.lang.foreign.MemorySegment sb()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersBool_Get_sb.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Modifies a member variable of class `MR::CSharp::ClassMemberPointersBool` named `sb`.
     * The reference to the parameter `value` might be preserved in this object in element `sb`.
     *
     * Calls `MR_CSharp_ClassMemberPointersBool_Set_sb()`.
     */
    public static void setSb(java.lang.Boolean value)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersBool_Set_sb.invokeExact((java.lang.foreign.MemorySegment)(value == null ? java.lang.foreign.MemorySegment.NULL : mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_BOOLEAN, value)));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `sc`.
     *
     * Calls `MR_CSharp_ClassMemberPointersBool_Get_sc()`. Some types are raw C types, see the C bindings for the details.
     */
    public static java.lang.foreign.MemorySegment sc()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersBool_Get_sc.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `sd`.
     *
     * Calls `MR_CSharp_ClassMemberPointersBool_Get_sd()`.
     */
    public static boolean sd()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersBool_Get_sd.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret.reinterpret(1).get(java.lang.foreign.ValueLayout.JAVA_BOOLEAN, 0);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `a`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ClassMemberPointersBool_Get_a()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment a()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersBool_Get_a.invokeExact(rawPointer());
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
     * Modifies a member variable of class `MR::CSharp::ClassMemberPointersBool` named `a`.
     * The reference to the parameter `value` might be preserved in this object in element `a`.
     *
     * Calls `MR_CSharp_ClassMemberPointersBool_Set_a()`. Some types are raw C types, see the C bindings for the details.
     */
    public void setA(java.lang.foreign.MemorySegment value)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersBool_Set_a.invokeExact(rawPointer(), value);
            mrbind_test.Ffi.checkException();
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
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `b`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ClassMemberPointersBool_Get_b()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment b()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersBool_Get_b.invokeExact(rawPointer());
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
     * Modifies a member variable of class `MR::CSharp::ClassMemberPointersBool` named `b`.
     * The reference to the parameter `value` might be preserved in this object in element `b`.
     *
     * Calls `MR_CSharp_ClassMemberPointersBool_Set_b()`.
     */
    public void setB(java.lang.Boolean value)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersBool_Set_b.invokeExact(rawPointer(), (java.lang.foreign.MemorySegment)(value == null ? java.lang.foreign.MemorySegment.NULL : mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_BOOLEAN, value)));
            mrbind_test.Ffi.checkException();
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
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `c`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ClassMemberPointersBool_Get_c()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment c()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersBool_Get_c.invokeExact(rawPointer());
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
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `d`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ClassMemberPointersBool_Get_d()`.
     */
    public boolean d()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ClassMemberPointersBool_Get_d.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            return __ret.reinterpret(1).get(java.lang.foreign.ValueLayout.JAVA_BOOLEAN, 0);
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
