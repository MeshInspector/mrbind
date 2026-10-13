package mrbind_test.mr.cs;

/**
 * Stores two objects: `MR::SeparateA` and `MR::SeparateA`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_pair_MR_SeparateA_MR_SeparateB extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_pair_MR_SeparateA_MR_SeparateB(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_pair_MR_SeparateA_MR_SeparateB::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.AB.std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_pair_MR_SeparateA_MR_SeparateB_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_pair_MR_SeparateA_MR_SeparateB_ConstructFromAnother()`.
     */
    public std_pair_MR_SeparateA_MR_SeparateB(mrbind_test.mr.cs.std_pair_MR_SeparateA_MR_SeparateB other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.cs.std_pair_MR_SeparateA_MR_SeparateB other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.AB.std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_pair_MR_SeparateA_MR_SeparateB_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_pair_MR_SeparateA_MR_SeparateB_AssignFromAnother()`.
     */
    public void assignFromAnother(mrbind_test.mr.cs.std_pair_MR_SeparateA_MR_SeparateB other)
    {
        try
        {
            mrbind_test.ffi.AB.std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_pair_MR_SeparateA_MR_SeparateB_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Constructs the pair elementwise.
     * The reference to the parameter `first` might be preserved in the constructed object.
     * The reference to the parameter `second` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_pair_MR_SeparateA_MR_SeparateB_Construct()`.
     */
    public std_pair_MR_SeparateA_MR_SeparateB(mrbind_test.mr.SeparateA first, mrbind_test.mr.SeparateB second)
    {
        this(__ctor_construct(first, second), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct(mrbind_test.mr.SeparateA first, mrbind_test.mr.SeparateB second)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.AB.std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_pair_MR_SeparateA_MR_SeparateB_Construct.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(first, "first"), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(second, "second"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(first);
            java.lang.ref.Reference.reachabilityFence(second);
        }
    }

    /**
     * The first of the two elements, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_pair_MR_SeparateA_MR_SeparateB_first()`.
     */
    public mrbind_test.mr.SeparateA first()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.AB.std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_pair_MR_SeparateA_MR_SeparateB_first.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.SeparateA(__ret, false, __owner);
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
     * The first of the two elements, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_pair_MR_SeparateA_MR_SeparateB_first_mut()`.
     */
    public mrbind_test.mr.SeparateA first_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.AB.std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_pair_MR_SeparateA_MR_SeparateB_first_mut.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.SeparateA(__ret, false, __owner);
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
     * The second of the two elements, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_pair_MR_SeparateA_MR_SeparateB_second()`.
     */
    public mrbind_test.mr.SeparateB second()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.AB.std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_pair_MR_SeparateA_MR_SeparateB_second.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.SeparateB(__ret, false, __owner);
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
     * The second of the two elements, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_pair_MR_SeparateA_MR_SeparateB_second_mut()`.
     */
    public mrbind_test.mr.SeparateB second_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.AB.std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_pair_MR_SeparateA_MR_SeparateB_second_mut.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.SeparateB(__ret, false, __owner);
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
