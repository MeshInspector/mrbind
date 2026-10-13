package mrbind_test.mr.aggregates;

/**
 * Generated from class `MR::Aggregates::D`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class D extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public D(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? D::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_D_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_Aggregates_D_DefaultConstruct()`.
     */
    public D()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_D_DefaultConstruct.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::Aggregates::D::D`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_Aggregates_D_ConstructFromAnother()`.
     */
    public D(mrbind_test.mr.aggregates.D _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.aggregates.D _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_D_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::Aggregates::D::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_Aggregates_D_AssignFromAnother()`.
     */
    public mrbind_test.mr.aggregates.D assignFromAnother(mrbind_test.mr.aggregates.D _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_D_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.aggregates.D(__ret, false, __owner);
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
     * Returns a pointer to a member variable of class `MR::Aggregates::D` named `a`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_D_Get_a()`.
     */
    public int a()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_D_Get_a.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
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
     * Modifies a member variable of class `MR::Aggregates::D` named `a`.
     * The reference to the parameter `value` might be preserved in this object in element `a`.
     *
     * Calls `MR_Aggregates_D_Set_a()`.
     */
    public void setA(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_D_Set_a.invokeExact(rawPointer(), value);
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
     * Returns a pointer to a member variable of class `MR::Aggregates::D` named `b`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_D_Get_b()`.
     */
    public int b()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_D_Get_b.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
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
     * Modifies a member variable of class `MR::Aggregates::D` named `b`.
     * The reference to the parameter `value` might be preserved in this object in element `b`.
     *
     * Calls `MR_Aggregates_D_Set_b()`.
     */
    public void setB(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_D_Set_b.invokeExact(rawPointer(), value);
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
     * Returns a pointer to a member variable of class `MR::Aggregates::D` named `c`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_D_Get_c()`.
     */
    public int c()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_D_Get_c.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
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
     * Modifies a member variable of class `MR::Aggregates::D` named `c`.
     * The reference to the parameter `value` might be preserved in this object in element `c`.
     *
     * Calls `MR_Aggregates_D_Set_c()`.
     */
    public void setC(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_D_Set_c.invokeExact(rawPointer(), value);
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
     * Returns a pointer to a member variable of class `MR::Aggregates::D` named `d`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_D_Get_d()`.
     */
    public int d()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_D_Get_d.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
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
     * Modifies a member variable of class `MR::Aggregates::D` named `d`.
     * The reference to the parameter `value` might be preserved in this object in element `d`.
     *
     * Calls `MR_Aggregates_D_Set_d()`.
     */
    public void setD(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_D_Set_d.invokeExact(rawPointer(), value);
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
     * Returns a pointer to a member variable of class `MR::Aggregates::D` named `e`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_D_Get_e()`.
     */
    public int e()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_D_Get_e.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
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
     * Modifies a member variable of class `MR::Aggregates::D` named `e`.
     * The reference to the parameter `value` might be preserved in this object in element `e`.
     *
     * Calls `MR_Aggregates_D_Set_e()`.
     */
    public void setE(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_D_Set_e.invokeExact(rawPointer(), value);
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
     * Returns a pointer to a member variable of class `MR::Aggregates::D` named `f`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_D_Get_f()`.
     */
    public int f()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_D_Get_f.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
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
     * Modifies a member variable of class `MR::Aggregates::D` named `f`.
     * The reference to the parameter `value` might be preserved in this object in element `f`.
     *
     * Calls `MR_Aggregates_D_Set_f()`.
     */
    public void setF(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_D_Set_f.invokeExact(rawPointer(), value);
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
     * Returns a pointer to a member variable of class `MR::Aggregates::D` named `g`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_D_Get_g()`.
     */
    public int g()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_D_Get_g.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
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
     * Modifies a member variable of class `MR::Aggregates::D` named `g`.
     * The reference to the parameter `value` might be preserved in this object in element `g`.
     *
     * Calls `MR_Aggregates_D_Set_g()`.
     */
    public void setG(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_D_Set_g.invokeExact(rawPointer(), value);
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
     * Returns a pointer to a member variable of class `MR::Aggregates::D` named `h`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_D_Get_h()`.
     */
    public int h()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_D_Get_h.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
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
     * Modifies a member variable of class `MR::Aggregates::D` named `h`.
     * The reference to the parameter `value` might be preserved in this object in element `h`.
     *
     * Calls `MR_Aggregates_D_Set_h()`.
     */
    public void setH(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_D_Set_h.invokeExact(rawPointer(), value);
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
     * Returns a pointer to a member variable of class `MR::Aggregates::D` named `i`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_D_Get_i()`.
     */
    public int i()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_D_Get_i.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
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
     * Modifies a member variable of class `MR::Aggregates::D` named `i`.
     * The reference to the parameter `value` might be preserved in this object in element `i`.
     *
     * Calls `MR_Aggregates_D_Set_i()`.
     */
    public void setI(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_D_Set_i.invokeExact(rawPointer(), value);
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
}
