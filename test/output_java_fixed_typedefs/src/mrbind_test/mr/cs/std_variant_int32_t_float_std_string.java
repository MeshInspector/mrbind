package mrbind_test.mr.cs;

/**
 * Stores one of 3 objects: `int32_t`, `float`, `std::string`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_variant_int32_t_float_std_string extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_variant_int32_t_float_std_string(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_variant_int32_t_float_std_string::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.std_variant_int32_t_float_std_string.H0.MR_C_std_variant_int32_t_float_std_string_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_variant_int32_t_float_std_string_DefaultConstruct()`.
     */
    public std_variant_int32_t_float_std_string()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_variant_int32_t_float_std_string.H0.MR_C_std_variant_int32_t_float_std_string_DefaultConstruct.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
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
     * Calls `MR_C_std_variant_int32_t_float_std_string_ConstructFromAnother()`.
     */
    public std_variant_int32_t_float_std_string(mrbind_test.mr.cs.std_variant_int32_t_float_std_string other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.cs.std_variant_int32_t_float_std_string other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_variant_int32_t_float_std_string.H0.MR_C_std_variant_int32_t_float_std_string_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_variant_int32_t_float_std_string_AssignFromAnother()`.
     */
    public void assignFromAnother(mrbind_test.mr.cs.std_variant_int32_t_float_std_string other)
    {
        try
        {
            mrbind_test.ffi.std_variant_int32_t_float_std_string.H0.MR_C_std_variant_int32_t_float_std_string_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_variant_int32_t_float_std_string_index()`.
     */
    public long index()
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_variant_int32_t_float_std_string.H0.MR_C_std_variant_int32_t_float_std_string_index.invokeExact(rawPointer());
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
     * Constructs the variant storing the element 0, of type `int32_t`.
     * The reference to the parameter `value` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_variant_int32_t_float_std_string_ConstructAs_int32_t()`.
     */
    public std_variant_int32_t_float_std_string(int value)
    {
        this(__ctor_constructAs_int32_t(value), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructAs_int32_t(int value)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_variant_int32_t_float_std_string.H0.MR_C_std_variant_int32_t_float_std_string_ConstructAs_int32_t.invokeExact(value);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Constructs the variant storing the element 1, of type `float`.
     *
     * Calls `MR_C_std_variant_int32_t_float_std_string_ConstructAs_float()`.
     */
    public std_variant_int32_t_float_std_string(float value)
    {
        this(__ctor_constructAs_float(value), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructAs_float(float value)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_variant_int32_t_float_std_string.H0.MR_C_std_variant_int32_t_float_std_string_ConstructAs_float.invokeExact(value);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Constructs the variant storing the element 2, of type `std::string`.
     * The reference to the parameter `value` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_variant_int32_t_float_std_string_ConstructAs_std_string()`.
     */
    public std_variant_int32_t_float_std_string(java.lang.String value)
    {
        this(__ctor_constructAs_std_string(value), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructAs_std_string(java.lang.String value)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            java.lang.foreign.MemorySegment __str_value = mrbind_test.Ffi.utf8(__arena, java.util.Objects.requireNonNull(value, "value"));
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_variant_int32_t_float_std_string.H0.MR_C_std_variant_int32_t_float_std_string_ConstructAs_std_string.invokeExact(__str_value, mrbind_test.Ffi.end(__str_value));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Assigns to the variant, making it store the element 0, of type `int32_t`.
     * The reference to the parameter `value` might be preserved in this object.
     *
     * Calls `MR_C_std_variant_int32_t_float_std_string_AssignAs_int32_t()`.
     */
    public void AssignAs_int32_t(int value)
    {
        try
        {
            mrbind_test.ffi.std_variant_int32_t_float_std_string.H0.MR_C_std_variant_int32_t_float_std_string_AssignAs_int32_t.invokeExact(rawPointer(), value);
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
     * Assigns to the variant, making it store the element 1, of type `float`.
     *
     * Calls `MR_C_std_variant_int32_t_float_std_string_AssignAs_float()`.
     */
    public void AssignAs_float(float value)
    {
        try
        {
            mrbind_test.ffi.std_variant_int32_t_float_std_string.H0.MR_C_std_variant_int32_t_float_std_string_AssignAs_float.invokeExact(rawPointer(), value);
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
     * Assigns to the variant, making it store the element 2, of type `std::string`.
     * The reference to the parameter `value` might be preserved in this object.
     *
     * Calls `MR_C_std_variant_int32_t_float_std_string_AssignAs_std_string()`.
     */
    public void AssignAs_std_string(java.lang.String value)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            java.lang.foreign.MemorySegment __str_value = mrbind_test.Ffi.utf8(__arena, java.util.Objects.requireNonNull(value, "value"));
            mrbind_test.ffi.std_variant_int32_t_float_std_string.H0.MR_C_std_variant_int32_t_float_std_string_AssignAs_std_string.invokeExact(rawPointer(), __str_value, mrbind_test.Ffi.end(__str_value));
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
     * Returns the element 0, of type `int32_t`, read-only. If it's not the active element, returns null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_variant_int32_t_float_std_string_get_int32_t()`.
     */
    public java.lang.Integer get_int32_t()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_variant_int32_t_float_std_string.H0.MR_C_std_variant_int32_t_float_std_string_get_int32_t.invokeExact(rawPointer());
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
     * Returns the element 0, of type `int32_t`, mutable. If it's not the active element, returns null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_variant_int32_t_float_std_string_get_int32_t_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment get_int32_t_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_variant_int32_t_float_std_string.H0.MR_C_std_variant_int32_t_float_std_string_get_int32_t_mut.invokeExact(rawPointer());
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
     * Returns the element 1, of type `float`, read-only. If it's not the active element, returns null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_variant_int32_t_float_std_string_get_float()`.
     */
    public java.lang.Float get_float()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_variant_int32_t_float_std_string.H0.MR_C_std_variant_int32_t_float_std_string_get_float.invokeExact(rawPointer());
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
     * Returns the element 1, of type `float`, mutable. If it's not the active element, returns null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_variant_int32_t_float_std_string_get_float_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment get_float_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_variant_int32_t_float_std_string.H0.MR_C_std_variant_int32_t_float_std_string_get_float_mut.invokeExact(rawPointer());
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
     * Returns the element 2, of type `std::string`, read-only. If it's not the active element, returns null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_variant_int32_t_float_std_string_get_std_string()`.
     */
    public mrbind_test.mr.cs.std_string get_std_string()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_variant_int32_t_float_std_string.H0.MR_C_std_variant_int32_t_float_std_string_get_std_string.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return __ret.address() == 0 ? null : new mrbind_test.mr.cs.std_string(__ret, false, __owner);
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
     * Returns the element 2, of type `std::string`, mutable. If it's not the active element, returns null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_variant_int32_t_float_std_string_get_std_string_mut()`.
     */
    public mrbind_test.mr.cs.std_string get_std_string_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_variant_int32_t_float_std_string.H0.MR_C_std_variant_int32_t_float_std_string_get_std_string_mut.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return __ret.address() == 0 ? null : new mrbind_test.mr.cs.std_string(__ret, false, __owner);
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
