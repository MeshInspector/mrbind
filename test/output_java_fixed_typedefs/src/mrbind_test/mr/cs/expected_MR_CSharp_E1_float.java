package mrbind_test.mr.cs;

/**
 * Stores either a `MR::CSharp::E1` that represents success or a `float` that represents an error.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class expected_MR_CSharp_E1_float extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public expected_MR_CSharp_E1_float(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? expected_MR_CSharp_E1_float::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.expected_MR_CSharp_E1_float.H0.MR_C_expected_MR_CSharp_E1_float_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_expected_MR_CSharp_E1_float_DefaultConstruct()`.
     */
    public expected_MR_CSharp_E1_float()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.expected_MR_CSharp_E1_float.H0.MR_C_expected_MR_CSharp_E1_float_DefaultConstruct.invokeExact();
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
     * Calls `MR_C_expected_MR_CSharp_E1_float_ConstructFromAnother()`.
     */
    public expected_MR_CSharp_E1_float(mrbind_test.mr.cs.expected_MR_CSharp_E1_float other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.cs.expected_MR_CSharp_E1_float other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.expected_MR_CSharp_E1_float.H0.MR_C_expected_MR_CSharp_E1_float_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_expected_MR_CSharp_E1_float_AssignFromAnother()`.
     */
    public void assignFromAnother(mrbind_test.mr.cs.expected_MR_CSharp_E1_float other)
    {
        try
        {
            mrbind_test.ffi.expected_MR_CSharp_E1_float.H0.MR_C_expected_MR_CSharp_E1_float_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Returns true if this instance represents success, or false if it represents an error.
     *
     * Calls `MR_C_expected_MR_CSharp_E1_float_success()`.
     */
    public boolean success()
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.expected_MR_CSharp_E1_float.H0.MR_C_expected_MR_CSharp_E1_float_success.invokeExact(rawPointer());
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
     * If this instance represents success, returns the stored `MR::CSharp::E1`. Otherwise null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_expected_MR_CSharp_E1_float_value()`.
     */
    public mrbind_test.mr.csharp.E1 value()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.expected_MR_CSharp_E1_float.H0.MR_C_expected_MR_CSharp_E1_float_value.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            return __ret.address() == 0 ? null : mrbind_test.mr.csharp.E1.of(__ret.reinterpret(4).get(java.lang.foreign.ValueLayout.JAVA_INT, 0));
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
     * If this instance represents an error, returns the stored `float`. Otherwise null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_expected_MR_CSharp_E1_float_error()`.
     */
    public java.lang.Float error()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.expected_MR_CSharp_E1_float.H0.MR_C_expected_MR_CSharp_E1_float_error.invokeExact(rawPointer());
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
     * If this instance represents success, returns the stored `MR::CSharp::E1`. Otherwise null. This version returns a mutable pointer.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_expected_MR_CSharp_E1_float_value_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment value_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.expected_MR_CSharp_E1_float.H0.MR_C_expected_MR_CSharp_E1_float_value_mut.invokeExact(rawPointer());
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
     * If this instance represents an error, returns the stored `float`. Otherwise null. This version returns a mutable pointer.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_expected_MR_CSharp_E1_float_error_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment error_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.expected_MR_CSharp_E1_float.H0.MR_C_expected_MR_CSharp_E1_float_error_mut.invokeExact(rawPointer());
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
