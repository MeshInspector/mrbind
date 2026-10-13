package mrbind_test.mr.aggregates;

/**
 * Test the optional limit on the number of fields that we aggregate-initialize.
 * Generated from class `MR::Aggregates::C`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class C extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public C(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? C::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_C_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_Aggregates_C_DefaultConstruct()`.
     */
    public C()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_C_DefaultConstruct.invokeExact();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Constructs `MR::Aggregates::C` elementwise.
     *
     * Calls `MR_Aggregates_C_ConstructFrom()`.
     */
    public C(int a, int b, int c, int d, int e, int f, int g, int h)
    {
        this(__ctor_constructFrom(a, b, c, d, e, f, g, h), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFrom(int a, int b, int c, int d, int e, int f, int g, int h)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_C_ConstructFrom.invokeExact(a, b, c, d, e, f, g, h);
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::Aggregates::C::C`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_Aggregates_C_ConstructFromAnother()`.
     */
    public C(mrbind_test.mr.aggregates.C _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.aggregates.C _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_C_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::Aggregates::C::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_Aggregates_C_AssignFromAnother()`.
     */
    public mrbind_test.mr.aggregates.C assignFromAnother(mrbind_test.mr.aggregates.C _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_C_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            java.lang.Object __owner = this;
            return new mrbind_test.mr.aggregates.C(__ret, false, __owner);
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
     * Returns a pointer to a member variable of class `MR::Aggregates::C` named `a`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_C_Get_a()`.
     */
    public int a()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_C_Get_a.invokeExact(rawPointer());
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
     * Modifies a member variable of class `MR::Aggregates::C` named `a`.
     *
     * Calls `MR_Aggregates_C_Set_a()`.
     */
    public void setA(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_C_Set_a.invokeExact(rawPointer(), value);
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
     * Returns a pointer to a member variable of class `MR::Aggregates::C` named `b`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_C_Get_b()`.
     */
    public int b()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_C_Get_b.invokeExact(rawPointer());
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
     * Modifies a member variable of class `MR::Aggregates::C` named `b`.
     *
     * Calls `MR_Aggregates_C_Set_b()`.
     */
    public void setB(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_C_Set_b.invokeExact(rawPointer(), value);
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
     * Returns a pointer to a member variable of class `MR::Aggregates::C` named `c`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_C_Get_c()`.
     */
    public int c()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_C_Get_c.invokeExact(rawPointer());
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
     * Modifies a member variable of class `MR::Aggregates::C` named `c`.
     *
     * Calls `MR_Aggregates_C_Set_c()`.
     */
    public void setC(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_C_Set_c.invokeExact(rawPointer(), value);
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
     * Returns a pointer to a member variable of class `MR::Aggregates::C` named `d`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_C_Get_d()`.
     */
    public int d()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_C_Get_d.invokeExact(rawPointer());
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
     * Modifies a member variable of class `MR::Aggregates::C` named `d`.
     *
     * Calls `MR_Aggregates_C_Set_d()`.
     */
    public void setD(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_C_Set_d.invokeExact(rawPointer(), value);
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
     * Returns a pointer to a member variable of class `MR::Aggregates::C` named `e`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_C_Get_e()`.
     */
    public int e()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_C_Get_e.invokeExact(rawPointer());
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
     * Modifies a member variable of class `MR::Aggregates::C` named `e`.
     *
     * Calls `MR_Aggregates_C_Set_e()`.
     */
    public void setE(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_C_Set_e.invokeExact(rawPointer(), value);
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
     * Returns a pointer to a member variable of class `MR::Aggregates::C` named `f`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_C_Get_f()`.
     */
    public int f()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_C_Get_f.invokeExact(rawPointer());
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
     * Modifies a member variable of class `MR::Aggregates::C` named `f`.
     *
     * Calls `MR_Aggregates_C_Set_f()`.
     */
    public void setF(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_C_Set_f.invokeExact(rawPointer(), value);
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
     * Returns a pointer to a member variable of class `MR::Aggregates::C` named `g`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_C_Get_g()`.
     */
    public int g()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_C_Get_g.invokeExact(rawPointer());
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
     * Modifies a member variable of class `MR::Aggregates::C` named `g`.
     *
     * Calls `MR_Aggregates_C_Set_g()`.
     */
    public void setG(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_C_Set_g.invokeExact(rawPointer(), value);
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
     * Returns a pointer to a member variable of class `MR::Aggregates::C` named `h`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_C_Get_h()`.
     */
    public int h()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_C_Get_h.invokeExact(rawPointer());
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
     * Modifies a member variable of class `MR::Aggregates::C` named `h`.
     *
     * Calls `MR_Aggregates_C_Set_h()`.
     */
    public void setH(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_C_Set_h.invokeExact(rawPointer(), value);
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
