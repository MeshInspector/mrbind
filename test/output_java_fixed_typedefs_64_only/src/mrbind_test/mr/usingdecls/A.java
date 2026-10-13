package mrbind_test.mr.usingdecls;

/**
 * Test how `using` declarations import things.
 * Generated from class `MR::UsingDecls::A`.
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::UsingDecls::B`
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class A extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public A(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? A::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_using_decls.H0.MR_UsingDecls_A_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Generated from constructor `MR::UsingDecls::A::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_UsingDecls_A_ConstructFromAnother()`.
     */
    public A(mrbind_test.mr.usingdecls.A _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.usingdecls.A _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_using_decls.H0.MR_UsingDecls_A_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from constructor `MR::UsingDecls::A::A`.
     *
     * Calls `MR_UsingDecls_A_Construct()`.
     */
    public A(int _1)
    {
        this(__ctor_construct(_1), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct(int _1)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_using_decls.H0.MR_UsingDecls_A_Construct.invokeExact(_1);
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from conversion operator `MR::UsingDecls::A::operator int`.
     *
     * Calls `MR_UsingDecls_A_ConvertTo_int()`.
     */
    public int convertTo_int()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_using_decls.H0.MR_UsingDecls_A_ConvertTo_int.invokeExact(rawPointer());
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
     * Generated from method `MR::UsingDecls::A::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_UsingDecls_A_AssignFromAnother()`.
     */
    public mrbind_test.mr.usingdecls.A assignFromAnother(mrbind_test.mr.usingdecls.A _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_using_decls.H0.MR_UsingDecls_A_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            java.lang.Object __owner = this;
            return new mrbind_test.mr.usingdecls.A(__ret, false, __owner);
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
     * Generated from method `MR::UsingDecls::A::operator=`.
     *
     * Calls `MR_UsingDecls_A_assign()`.
     */
    public void assign(int _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_using_decls.H0.MR_UsingDecls_A_assign.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::UsingDecls::A::Method`.
     *
     * Calls `MR_UsingDecls_A_Method()`.
     */
    public void Method()
    {
        try
        {
            mrbind_test.ffi.MR.test_using_decls.H0.MR_UsingDecls_A_Method.invokeExact(rawPointer());
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
     * Generated from method `MR::UsingDecls::A::StaticFunc`.
     *
     * Calls `MR_UsingDecls_A_StaticFunc()`.
     */
    public static void StaticFunc()
    {
        try
        {
            mrbind_test.ffi.MR.test_using_decls.H0.MR_UsingDecls_A_StaticFunc.invokeExact();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::UsingDecls::A` named `StaticVar`.
     *
     * Calls `MR_UsingDecls_A_Get_StaticVar()`.
     */
    public static int StaticVar()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_using_decls.H0.MR_UsingDecls_A_Get_StaticVar.invokeExact();
            return __ret.reinterpret(4).get(java.lang.foreign.ValueLayout.JAVA_INT, 0);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Modifies a member variable of class `MR::UsingDecls::A` named `StaticVar`.
     *
     * Calls `MR_UsingDecls_A_Set_StaticVar()`.
     */
    public static void setStaticVar(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_using_decls.H0.MR_UsingDecls_A_Set_StaticVar.invokeExact(value);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::UsingDecls::A` named `Field`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_UsingDecls_A_Get_Field()`.
     */
    public int Field()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_using_decls.H0.MR_UsingDecls_A_Get_Field.invokeExact(rawPointer());
            return __ret.reinterpret(4).get(java.lang.foreign.ValueLayout.JAVA_INT, 0);
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
     * Modifies a member variable of class `MR::UsingDecls::A` named `Field`.
     *
     * Calls `MR_UsingDecls_A_Set_Field()`.
     */
    public void setField(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_using_decls.H0.MR_UsingDecls_A_Set_Field.invokeExact(rawPointer(), value);
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
