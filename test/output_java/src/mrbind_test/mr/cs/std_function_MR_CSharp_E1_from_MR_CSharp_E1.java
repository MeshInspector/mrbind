package mrbind_test.mr.cs;

/**
 * Stores a functor of type: `MR::CSharp::E1(MR::CSharp::E1)`. Possibly stateful.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_function_MR_CSharp_E1_from_MR_CSharp_E1 extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_function_MR_CSharp_E1_from_MR_CSharp_E1(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_function_MR_CSharp_E1_from_MR_CSharp_E1::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.std_function_MR_CSharp_E1_from_MR_CSharp_E1.H0.MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_DefaultConstruct()`.
     */
    public std_function_MR_CSharp_E1_from_MR_CSharp_E1()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_function_MR_CSharp_E1_from_MR_CSharp_E1.H0.MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_DefaultConstruct.invokeExact();
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
     * Calls `MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_ConstructFromAnother()`.
     */
    public std_function_MR_CSharp_E1_from_MR_CSharp_E1(mrbind_test.mr.cs.std_function_MR_CSharp_E1_from_MR_CSharp_E1 other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.cs.std_function_MR_CSharp_E1_from_MR_CSharp_E1 other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_function_MR_CSharp_E1_from_MR_CSharp_E1.H0.MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_AssignFromAnother()`.
     */
    public void assignFromAnother(mrbind_test.mr.cs.std_function_MR_CSharp_E1_from_MR_CSharp_E1 other)
    {
        try
        {
            mrbind_test.ffi.std_function_MR_CSharp_E1_from_MR_CSharp_E1.H0.MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Returns true if this instance stores a callable, as opposed to being null.
     *
     * Calls `MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_has_value()`.
     */
    public boolean has_value()
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_function_MR_CSharp_E1_from_MR_CSharp_E1.H0.MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_has_value.invokeExact(rawPointer());
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
     * Destroys the stored callable, making this instance null.
     *
     * Calls `MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_reset()`.
     */
    public void reset()
    {
        try
        {
            mrbind_test.ffi.std_function_MR_CSharp_E1_from_MR_CSharp_E1.H0.MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_reset.invokeExact(rawPointer());
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
     * Calls the stored callable.
     *
     * Calls `MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_call()`.
     */
    public mrbind_test.mr.csharp.E1 call(mrbind_test.mr.csharp.E1 _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.std_function_MR_CSharp_E1_from_MR_CSharp_E1.H0.MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_call.invokeExact(rawPointer(), java.util.Objects.requireNonNull(_1, "_1").value);
            mrbind_test.Ffi.checkException();
            return mrbind_test.mr.csharp.E1.of(__ret);
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
