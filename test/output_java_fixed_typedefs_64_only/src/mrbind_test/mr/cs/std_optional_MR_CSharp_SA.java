package mrbind_test.mr.cs;

/**
 * Stores either a single `MR::CSharp::SA` or nothing.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_optional_MR_CSharp_SA extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_optional_MR_CSharp_SA(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_optional_MR_CSharp_SA::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.std_optional_MR_CSharp_SA.H0.MR_C_std_optional_MR_CSharp_SA_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_optional_MR_CSharp_SA_DefaultConstruct()`.
     */
    public std_optional_MR_CSharp_SA()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_optional_MR_CSharp_SA.H0.MR_C_std_optional_MR_CSharp_SA_DefaultConstruct.invokeExact();
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
     * Calls `MR_C_std_optional_MR_CSharp_SA_ConstructFromAnother()`.
     */
    public std_optional_MR_CSharp_SA(mrbind_test.mr.cs.std_optional_MR_CSharp_SA other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.cs.std_optional_MR_CSharp_SA other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_optional_MR_CSharp_SA.H0.MR_C_std_optional_MR_CSharp_SA_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Constructs a new instance.
     *
     * Calls `MR_C_std_optional_MR_CSharp_SA_ConstructFrom()`.
     */
    public std_optional_MR_CSharp_SA(mrbind_test.mr.csharp.SA other)
    {
        this(__ctor_constructFrom(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFrom(mrbind_test.mr.csharp.SA other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_optional_MR_CSharp_SA.H0.MR_C_std_optional_MR_CSharp_SA_ConstructFrom.invokeExact(mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_optional_MR_CSharp_SA_AssignFromAnother()`.
     */
    public void assignFromAnother(mrbind_test.mr.cs.std_optional_MR_CSharp_SA other)
    {
        try
        {
            mrbind_test.ffi.std_optional_MR_CSharp_SA.H0.MR_C_std_optional_MR_CSharp_SA_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Assigns the contents.
     *
     * Calls `MR_C_std_optional_MR_CSharp_SA_AssignFrom()`.
     */
    public void assignFrom(mrbind_test.mr.csharp.SA other)
    {
        try
        {
            mrbind_test.ffi.std_optional_MR_CSharp_SA.H0.MR_C_std_optional_MR_CSharp_SA_AssignFrom.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Returns true if this instance stores an object, as opposed to being empty.
     *
     * Calls `MR_C_std_optional_MR_CSharp_SA_has_value()`.
     */
    public boolean has_value()
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_optional_MR_CSharp_SA.H0.MR_C_std_optional_MR_CSharp_SA_has_value.invokeExact(rawPointer());
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
     * The stored element or null if none, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_optional_MR_CSharp_SA_value()`.
     */
    public mrbind_test.mr.csharp.SA value()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_optional_MR_CSharp_SA.H0.MR_C_std_optional_MR_CSharp_SA_value.invokeExact(rawPointer());
            java.lang.Object __owner = this;
            return __ret.address() == 0 ? null : new mrbind_test.mr.csharp.SA(__ret, false, __owner);
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
     * The stored element or null if none, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_optional_MR_CSharp_SA_value_mut()`.
     */
    public mrbind_test.mr.csharp.SA value_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_optional_MR_CSharp_SA.H0.MR_C_std_optional_MR_CSharp_SA_value_mut.invokeExact(rawPointer());
            java.lang.Object __owner = this;
            return __ret.address() == 0 ? null : new mrbind_test.mr.csharp.SA(__ret, false, __owner);
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
