package mrbind_test.mr.cs;

/**
 * Stores one of 4 objects: `std::monostate`, `int`, `float`, `float`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_variant_std_monostate_int_float_float extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_variant_std_monostate_int_float_float(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_variant_std_monostate_int_float_float::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.std_variant_std_monostate_int_float_float.H0.MR_C_std_variant_std_monostate_int_float_float_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_DefaultConstruct()`.
     */
    public static mrbind_test.mr.cs.std_variant_std_monostate_int_float_float defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_variant_std_monostate_int_float_float.H0.MR_C_std_variant_std_monostate_int_float_float_DefaultConstruct.invokeExact();
            mrbind_test.Ffi.checkException();
            return new mrbind_test.mr.cs.std_variant_std_monostate_int_float_float(__ret, true, null);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_ConstructFromAnother()`.
     */
    public std_variant_std_monostate_int_float_float(mrbind_test.mr.cs.std_variant_std_monostate_int_float_float other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.cs.std_variant_std_monostate_int_float_float other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_variant_std_monostate_int_float_float.H0.MR_C_std_variant_std_monostate_int_float_float_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(other, "other"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(other);
        }
    }

    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_AssignFromAnother()`.
     */
    public void assignFromAnother(mrbind_test.mr.cs.std_variant_std_monostate_int_float_float other)
    {
        try
        {
            mrbind_test.ffi.std_variant_std_monostate_int_float_float.H0.MR_C_std_variant_std_monostate_int_float_float_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(other, "other"));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(other);
        }
    }

    /**
     * Returns the index of the stored element type. In rare cases may return -1 if this variant is "valueless by exception".
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_index()`.
     */
    public long index()
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_variant_std_monostate_int_float_float.H0.MR_C_std_variant_std_monostate_int_float_float_index.invokeExact(rawPointer());
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
     * Constructs the variant storing the element 0, of type `std::monostate`.
     * The reference to the parameter `value` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_ConstructAs_std_monostate()`.
     */
    public static mrbind_test.mr.cs.std_variant_std_monostate_int_float_float constructAs_std_monostate()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_variant_std_monostate_int_float_float.H0.MR_C_std_variant_std_monostate_int_float_float_ConstructAs_std_monostate.invokeExact();
            mrbind_test.Ffi.checkException();
            return new mrbind_test.mr.cs.std_variant_std_monostate_int_float_float(__ret, true, null);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Constructs the variant storing the element 1, of type `int`.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_ConstructAs_int()`.
     */
    public std_variant_std_monostate_int_float_float(int value)
    {
        this(__ctor_constructAs_int(value), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructAs_int(int value)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_variant_std_monostate_int_float_float.H0.MR_C_std_variant_std_monostate_int_float_float_ConstructAs_int.invokeExact(value);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Constructs the variant storing the element 2, of type `float`.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_ConstructAs_float_2()`.
     */
    public static mrbind_test.mr.cs.std_variant_std_monostate_int_float_float constructAs_float_2(float value)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_variant_std_monostate_int_float_float.H0.MR_C_std_variant_std_monostate_int_float_float_ConstructAs_float_2.invokeExact(value);
            mrbind_test.Ffi.checkException();
            return new mrbind_test.mr.cs.std_variant_std_monostate_int_float_float(__ret, true, null);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Constructs the variant storing the element 3, of type `float`.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_ConstructAs_float_3()`.
     */
    public static mrbind_test.mr.cs.std_variant_std_monostate_int_float_float constructAs_float_3(float value)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_variant_std_monostate_int_float_float.H0.MR_C_std_variant_std_monostate_int_float_float_ConstructAs_float_3.invokeExact(value);
            mrbind_test.Ffi.checkException();
            return new mrbind_test.mr.cs.std_variant_std_monostate_int_float_float(__ret, true, null);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Assigns to the variant, making it store the element 0, of type `std::monostate`.
     * The reference to the parameter `value` might be preserved in this object.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_AssignAs_std_monostate()`.
     */
    public void AssignAs_std_monostate()
    {
        try
        {
            mrbind_test.ffi.std_variant_std_monostate_int_float_float.H0.MR_C_std_variant_std_monostate_int_float_float_AssignAs_std_monostate.invokeExact(rawPointer());
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
     * Assigns to the variant, making it store the element 1, of type `int`.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_AssignAs_int()`.
     */
    public void AssignAs_int(int value)
    {
        try
        {
            mrbind_test.ffi.std_variant_std_monostate_int_float_float.H0.MR_C_std_variant_std_monostate_int_float_float_AssignAs_int.invokeExact(rawPointer(), value);
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
     * Assigns to the variant, making it store the element 2, of type `float`.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_AssignAs_float_2()`.
     */
    public void AssignAs_float_2(float value)
    {
        try
        {
            mrbind_test.ffi.std_variant_std_monostate_int_float_float.H0.MR_C_std_variant_std_monostate_int_float_float_AssignAs_float_2.invokeExact(rawPointer(), value);
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
     * Assigns to the variant, making it store the element 3, of type `float`.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_AssignAs_float_3()`.
     */
    public void AssignAs_float_3(float value)
    {
        try
        {
            mrbind_test.ffi.std_variant_std_monostate_int_float_float.H0.MR_C_std_variant_std_monostate_int_float_float_AssignAs_float_3.invokeExact(rawPointer(), value);
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
     * Returns the element 0, of type `std::monostate`, read-only. If it's not the active element, returns null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_get_std_monostate()`.
     */
    public boolean get_std_monostate()
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_variant_std_monostate_int_float_float.H0.MR_C_std_variant_std_monostate_int_float_float_get_std_monostate.invokeExact(rawPointer());
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
     * Returns the element 1, of type `int`, read-only. If it's not the active element, returns null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_get_int()`.
     */
    public java.lang.Integer get_int()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_variant_std_monostate_int_float_float.H0.MR_C_std_variant_std_monostate_int_float_float_get_int.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            return __ret.address() == 0 ? null : (java.lang.Integer)__ret.reinterpret(4).get(java.lang.foreign.ValueLayout.JAVA_INT, 0);
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
     * Returns the element 1, of type `int`, mutable. If it's not the active element, returns null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_get_int_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment get_int_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_variant_std_monostate_int_float_float.H0.MR_C_std_variant_std_monostate_int_float_float_get_int_mut.invokeExact(rawPointer());
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
     * Returns the element 2, of type `float`, read-only. If it's not the active element, returns null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_get_float_2()`.
     */
    public java.lang.Float get_float_2()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_variant_std_monostate_int_float_float.H0.MR_C_std_variant_std_monostate_int_float_float_get_float_2.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            return __ret.address() == 0 ? null : (java.lang.Float)__ret.reinterpret(4).get(java.lang.foreign.ValueLayout.JAVA_FLOAT, 0);
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
     * Returns the element 2, of type `float`, mutable. If it's not the active element, returns null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_get_float_2_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment get_float_2_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_variant_std_monostate_int_float_float.H0.MR_C_std_variant_std_monostate_int_float_float_get_float_2_mut.invokeExact(rawPointer());
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
     * Returns the element 3, of type `float`, read-only. If it's not the active element, returns null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_get_float_3()`.
     */
    public java.lang.Float get_float_3()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_variant_std_monostate_int_float_float.H0.MR_C_std_variant_std_monostate_int_float_float_get_float_3.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            return __ret.address() == 0 ? null : (java.lang.Float)__ret.reinterpret(4).get(java.lang.foreign.ValueLayout.JAVA_FLOAT, 0);
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
     * Returns the element 3, of type `float`, mutable. If it's not the active element, returns null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_variant_std_monostate_int_float_float_get_float_3_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment get_float_3_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_variant_std_monostate_int_float_float.H0.MR_C_std_variant_std_monostate_int_float_float_get_float_3_mut.invokeExact(rawPointer());
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
}
