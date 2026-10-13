package mrbind_test.mr.lifetimeinference;

/**
 * Generated from class `MR::LifetimeInference::C`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class C extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public C(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? C::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_lifetime_inference.H0.MR_LifetimeInference_C_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Generated from constructor `MR::LifetimeInference::C::C`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_LifetimeInference_C_ConstructFromAnother()`.
     */
    public C(mrbind_test.mr.lifetimeinference.C _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.lifetimeinference.C _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_lifetime_inference.H0.MR_LifetimeInference_C_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from constructor `MR::LifetimeInference::C::C`.
     *
     * Calls `MR_LifetimeInference_C_Construct()`. Some types are raw C types, see the C bindings for the details.
     */
    public C(mrbind_test.mr.lifetimeinference.A _1, java.lang.foreign.MemorySegment _2, int _3)
    {
        this(__ctor_construct(_1, _2, _3), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct(mrbind_test.mr.lifetimeinference.A _1, java.lang.foreign.MemorySegment _2, int _3)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_lifetime_inference.H0.MR_LifetimeInference_C_Construct.invokeExact(mrbind_test.Ffi.ptrNonNull(_1, "_1"), _2, _3);
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Generated from method `MR::LifetimeInference::C::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_LifetimeInference_C_AssignFromAnother()`.
     */
    public mrbind_test.mr.lifetimeinference.C assignFromAnother(mrbind_test.mr.lifetimeinference.C _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_lifetime_inference.H0.MR_LifetimeInference_C_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            java.lang.Object __owner = this;
            return new mrbind_test.mr.lifetimeinference.C(__ret, false, __owner);
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
}
