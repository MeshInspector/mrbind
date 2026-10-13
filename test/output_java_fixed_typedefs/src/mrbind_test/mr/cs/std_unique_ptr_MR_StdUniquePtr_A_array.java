package mrbind_test.mr.cs;

/**
 * Wraps a pointer to a heap-allocated array of type `MR::StdUniquePtr::A`, of an unspecified size.
 * Doesn't store the size, it has to be obtained separately.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_unique_ptr_MR_StdUniquePtr_A_array extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_unique_ptr_MR_StdUniquePtr_A_array(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_unique_ptr_MR_StdUniquePtr_A_array::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.std_unique_ptr_MR_StdUniquePtr_A_array.H0.MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_DefaultConstruct()`.
     */
    public std_unique_ptr_MR_StdUniquePtr_A_array()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_unique_ptr_MR_StdUniquePtr_A_array.H0.MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_DefaultConstruct.invokeExact();
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
     * Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFromAnother()`.
     */
    public std_unique_ptr_MR_StdUniquePtr_A_array(mrbind_test.mr.cs.std_unique_ptr_MR_StdUniquePtr_A_array other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.cs.std_unique_ptr_MR_StdUniquePtr_A_array other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_unique_ptr_MR_StdUniquePtr_A_array.H0.MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Constructs a new instance.
     *
     * Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFrom()`.
     */
    public std_unique_ptr_MR_StdUniquePtr_A_array(mrbind_test.mr.stduniqueptr.A other)
    {
        this(__ctor_constructFrom(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFrom(mrbind_test.mr.stduniqueptr.A other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_unique_ptr_MR_StdUniquePtr_A_array.H0.MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFrom.invokeExact(java.util.Objects.requireNonNull(other, "other").release());
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_AssignFromAnother()`.
     */
    public void assignFromAnother(mrbind_test.mr.cs.std_unique_ptr_MR_StdUniquePtr_A_array other)
    {
        try
        {
            mrbind_test.ffi.std_unique_ptr_MR_StdUniquePtr_A_array.H0.MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Assigns the contents.
     *
     * Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_AssignFrom()`.
     */
    public void assignFrom(mrbind_test.mr.stduniqueptr.A other)
    {
        try
        {
            mrbind_test.ffi.std_unique_ptr_MR_StdUniquePtr_A_array.H0.MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_AssignFrom.invokeExact(rawPointer(), java.util.Objects.requireNonNull(other, "other").release());
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
     * Returns the stored pointer, possibly null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_get()`.
     */
    public mrbind_test.mr.stduniqueptr.A get()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_unique_ptr_MR_StdUniquePtr_A_array.H0.MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_get.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return __ret.address() == 0 ? null : new mrbind_test.mr.stduniqueptr.A(__ret, false, __owner);
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
     * Returns an element from the stored array. The stored pointer must not be null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_at()`.
     */
    public mrbind_test.mr.stduniqueptr.A at(long i)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_unique_ptr_MR_StdUniquePtr_A_array.H0.MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_at.invokeExact(rawPointer(), i);
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.stduniqueptr.A(__ret, false, __owner);
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
     * Releases the pointer ownership. Returns the stored pointer and zeroes the source. If the source is already null, returns null and does nothing.
     * The returned pointer is owning! It must be deallocated using `MR_StdUniquePtr_A_DestroyArray()`.
     *
     * Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_release()`.
     */
    public mrbind_test.mr.stduniqueptr.A release_2()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_unique_ptr_MR_StdUniquePtr_A_array.H0.MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_release.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return __ret.address() == 0 ? null : new mrbind_test.mr.stduniqueptr.A(__ret, false, __owner);
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
