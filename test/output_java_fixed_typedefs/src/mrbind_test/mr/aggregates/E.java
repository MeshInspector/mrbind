package mrbind_test.mr.aggregates;

/**
 * Generated from class `MR::Aggregates::E`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class E extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public E(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? E::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_E_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Generated from constructor `MR::Aggregates::E::E`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_Aggregates_E_ConstructFromAnother()`.
     */
    public E(mrbind_test.mr.aggregates.E _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.aggregates.E _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_E_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Constructs `MR::Aggregates::E` elementwise.
     * The reference to the parameter `a` might be preserved in the constructed object.
     * The reference to the parameter `b` might be preserved in the constructed object.
     * The reference to the parameter `c` might be preserved in the constructed object.
     * The reference to the parameter `d` might be preserved in the constructed object.
     * The reference to the parameter `e` might be preserved in the constructed object.
     * The reference to the parameter `f` might be preserved in the constructed object.
     * The reference to the parameter `g` might be preserved in the constructed object.
     * The reference to the parameter `h` might be preserved in the constructed object.
     * The reference to the parameter `i` might be preserved in the constructed object.
     * The reference to the parameter `j` might be preserved in the constructed object.
     *
     * Calls `MR_Aggregates_E_ConstructFrom()`.
     */
    public E(int a, int b, int c, int d, int e, int f, int g, int h, int i, mrbind_test.mr.aggregates.NonDefaultConstructible j)
    {
        this(__ctor_constructFrom(a, b, c, d, e, f, g, h, i, j), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFrom(int a, int b, int c, int d, int e, int f, int g, int h, int i, mrbind_test.mr.aggregates.NonDefaultConstructible j)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_E_ConstructFrom.invokeExact(a, b, c, d, e, f, g, h, i, mrbind_test.Ffi.ptrNonNull(j, "j"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(j);
        }
    }

    /**
     * Generated from method `MR::Aggregates::E::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_Aggregates_E_AssignFromAnother()`.
     */
    public mrbind_test.mr.aggregates.E assignFromAnother(mrbind_test.mr.aggregates.E _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_E_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.aggregates.E(__ret, false, __owner);
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
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Returns a pointer to a member variable of class `MR::Aggregates::E` named `a`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_E_Get_a()`.
     */
    public int a()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_E_Get_a.invokeExact(rawPointer());
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
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Modifies a member variable of class `MR::Aggregates::E` named `a`.
     * The reference to the parameter `value` might be preserved in this object in element `a`.
     *
     * Calls `MR_Aggregates_E_Set_a()`.
     */
    public void setA(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_E_Set_a.invokeExact(rawPointer(), value);
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
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Returns a pointer to a member variable of class `MR::Aggregates::E` named `b`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_E_Get_b()`.
     */
    public int b()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_E_Get_b.invokeExact(rawPointer());
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
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Modifies a member variable of class `MR::Aggregates::E` named `b`.
     * The reference to the parameter `value` might be preserved in this object in element `b`.
     *
     * Calls `MR_Aggregates_E_Set_b()`.
     */
    public void setB(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_E_Set_b.invokeExact(rawPointer(), value);
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
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Returns a pointer to a member variable of class `MR::Aggregates::E` named `c`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_E_Get_c()`.
     */
    public int c()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_E_Get_c.invokeExact(rawPointer());
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
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Modifies a member variable of class `MR::Aggregates::E` named `c`.
     * The reference to the parameter `value` might be preserved in this object in element `c`.
     *
     * Calls `MR_Aggregates_E_Set_c()`.
     */
    public void setC(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_E_Set_c.invokeExact(rawPointer(), value);
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
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Returns a pointer to a member variable of class `MR::Aggregates::E` named `d`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_E_Get_d()`.
     */
    public int d()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_E_Get_d.invokeExact(rawPointer());
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
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Modifies a member variable of class `MR::Aggregates::E` named `d`.
     * The reference to the parameter `value` might be preserved in this object in element `d`.
     *
     * Calls `MR_Aggregates_E_Set_d()`.
     */
    public void setD(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_E_Set_d.invokeExact(rawPointer(), value);
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
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Returns a pointer to a member variable of class `MR::Aggregates::E` named `e`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_E_Get_e()`.
     */
    public int e()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_E_Get_e.invokeExact(rawPointer());
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
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Modifies a member variable of class `MR::Aggregates::E` named `e`.
     * The reference to the parameter `value` might be preserved in this object in element `e`.
     *
     * Calls `MR_Aggregates_E_Set_e()`.
     */
    public void setE(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_E_Set_e.invokeExact(rawPointer(), value);
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
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Returns a pointer to a member variable of class `MR::Aggregates::E` named `f`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_E_Get_f()`.
     */
    public int f()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_E_Get_f.invokeExact(rawPointer());
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
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Modifies a member variable of class `MR::Aggregates::E` named `f`.
     * The reference to the parameter `value` might be preserved in this object in element `f`.
     *
     * Calls `MR_Aggregates_E_Set_f()`.
     */
    public void setF(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_E_Set_f.invokeExact(rawPointer(), value);
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
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Returns a pointer to a member variable of class `MR::Aggregates::E` named `g`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_E_Get_g()`.
     */
    public int g()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_E_Get_g.invokeExact(rawPointer());
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
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Modifies a member variable of class `MR::Aggregates::E` named `g`.
     * The reference to the parameter `value` might be preserved in this object in element `g`.
     *
     * Calls `MR_Aggregates_E_Set_g()`.
     */
    public void setG(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_E_Set_g.invokeExact(rawPointer(), value);
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
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Returns a pointer to a member variable of class `MR::Aggregates::E` named `h`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_E_Get_h()`.
     */
    public int h()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_E_Get_h.invokeExact(rawPointer());
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
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Modifies a member variable of class `MR::Aggregates::E` named `h`.
     * The reference to the parameter `value` might be preserved in this object in element `h`.
     *
     * Calls `MR_Aggregates_E_Set_h()`.
     */
    public void setH(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_E_Set_h.invokeExact(rawPointer(), value);
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
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Returns a pointer to a member variable of class `MR::Aggregates::E` named `i`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_E_Get_i()`.
     */
    public int i()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_E_Get_i.invokeExact(rawPointer());
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
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Modifies a member variable of class `MR::Aggregates::E` named `i`.
     * The reference to the parameter `value` might be preserved in this object in element `i`.
     *
     * Calls `MR_Aggregates_E_Set_i()`.
     */
    public void setI(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_E_Set_i.invokeExact(rawPointer(), value);
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
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Returns a pointer to a member variable of class `MR::Aggregates::E` named `j`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_E_Get_j()`.
     */
    public mrbind_test.mr.aggregates.NonDefaultConstructible j()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_E_Get_j.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.aggregates.NonDefaultConstructible(__ret, false, __owner);
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
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Modifies a member variable of class `MR::Aggregates::E` named `j`.
     * The reference to the parameter `value` might be preserved in this object in element `j`.
     *
     * Calls `MR_Aggregates_E_Set_j()`.
     */
    public void setJ(mrbind_test.mr.aggregates.NonDefaultConstructible value)
    {
        try
        {
            mrbind_test.ffi.MR.test_aggregates.H0.MR_Aggregates_E_Set_j.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(value, "value"));
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
