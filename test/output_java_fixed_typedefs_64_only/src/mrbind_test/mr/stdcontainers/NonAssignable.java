package mrbind_test.mr.stdcontainers;

/**
 * A non-assignable type?
 * Generated from class `MR::StdContainers::NonAssignable`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class NonAssignable extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public NonAssignable(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? NonAssignable::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_std_containers.H0.MR_StdContainers_NonAssignable_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_StdContainers_NonAssignable_DefaultConstruct()`.
     */
    public NonAssignable()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_std_containers.H0.MR_StdContainers_NonAssignable_DefaultConstruct.invokeExact();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::StdContainers::NonAssignable::NonAssignable`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_StdContainers_NonAssignable_ConstructFromAnother()`.
     */
    public NonAssignable(mrbind_test.mr.stdcontainers.NonAssignable _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.stdcontainers.NonAssignable _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_std_containers.H0.MR_StdContainers_NonAssignable_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::StdContainers::NonAssignable::operator<`.
     *
     * Calls `MR_C_less_MR_StdContainers_NonAssignable()`.
     */
    public boolean opLess(mrbind_test.mr.stdcontainers.NonAssignable _1)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.MR.test_std_containers.H0.MR_C_less_MR_StdContainers_NonAssignable.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Generated from method `MR::StdContainers::NonAssignable::operator==`.
     *
     * Calls `MR_C_equal_MR_StdContainers_NonAssignable()`.
     */
    public boolean opEqual(mrbind_test.mr.stdcontainers.NonAssignable _1)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.MR.test_std_containers.H0.MR_C_equal_MR_StdContainers_NonAssignable.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }
}
