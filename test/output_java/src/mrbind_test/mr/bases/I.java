package mrbind_test.mr.bases;

/**
 * Generated from class `MR::Bases::I`.
 * Base classes:
 *   Virtual:
 *     `MR::Bases::F`
 *     `MR::Bases::A`
 *   Non-virtual along a virtual path:
 *     `MR::Bases::E`
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class I extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public I(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? I::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_bases.H0.MR_Bases_I_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_Bases_I_DefaultConstruct()`.
     */
    public I()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_bases.H0.MR_Bases_I_DefaultConstruct.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::Bases::I::I`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_Bases_I_ConstructFromAnother()`.
     */
    public I(mrbind_test.mr.bases.I _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.bases.I _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_bases.H0.MR_Bases_I_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::Bases::I::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_Bases_I_AssignFromAnother()`.
     */
    public mrbind_test.mr.bases.I assignFromAnother(mrbind_test.mr.bases.I _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_bases.H0.MR_Bases_I_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.bases.I(__ret, false, __owner);
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

    /** Upcasts to the base class `MR::Bases::E`. The result refers to this object.
     *
     * Calls `MR_Bases_I_MutableUpcastTo_MR_Bases_E()`. */
    public mrbind_test.mr.bases.E upcastToE()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_bases.H0.MR_Bases_I_MutableUpcastTo_MR_Bases_E.invokeExact(rawPointer());
            return new mrbind_test.mr.bases.E(__ret, false, this);
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

    /** Upcasts to the base class `MR::Bases::F`. The result refers to this object.
     *
     * Calls `MR_Bases_I_MutableUpcastTo_MR_Bases_F()`. */
    public mrbind_test.mr.bases.F upcastToF()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_bases.H0.MR_Bases_I_MutableUpcastTo_MR_Bases_F.invokeExact(rawPointer());
            return new mrbind_test.mr.bases.F(__ret, false, this);
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

    /** Upcasts to the base class `MR::Bases::A`. The result refers to this object.
     *
     * Calls `MR_Bases_I_MutableUpcastTo_MR_Bases_A()`. */
    public mrbind_test.mr.bases.A upcastToA()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_bases.H0.MR_Bases_I_MutableUpcastTo_MR_Bases_A.invokeExact(rawPointer());
            return new mrbind_test.mr.bases.A(__ret, false, this);
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
