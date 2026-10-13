package mrbind_test.mr.csharp;

/**
 * A non-trivial move-only class with a converting ctor.
 * Here we test that our converting constructors injected into `_ByValue_...` don't attempt to copy the class.
 * Generated from class `MR::CSharp::ConvCtorNonTrivialRestricted`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class ConvCtorNonTrivialRestricted extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public ConvCtorNonTrivialRestricted(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? ConvCtorNonTrivialRestricted::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ConvCtorNonTrivialRestricted_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::ConvCtorNonTrivialRestricted::ConvCtorNonTrivialRestricted`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_ConvCtorNonTrivialRestricted_ConstructFromAnother()`.
     */
    public ConvCtorNonTrivialRestricted(mrbind_test.mr.csharp.ConvCtorNonTrivialRestricted _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.csharp.ConvCtorNonTrivialRestricted _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ConvCtorNonTrivialRestricted_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_MOVE_AND_DESTROY, java.util.Objects.requireNonNull(_other, "_other").release());
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
     * Generated from constructor `MR::CSharp::ConvCtorNonTrivialRestricted::ConvCtorNonTrivialRestricted`.
     *
     * Calls `MR_CSharp_ConvCtorNonTrivialRestricted_Construct()`.
     */
    public ConvCtorNonTrivialRestricted(int _1)
    {
        this(__ctor_construct(_1), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct(int _1)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ConvCtorNonTrivialRestricted_Construct.invokeExact(_1);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from method `MR::CSharp::ConvCtorNonTrivialRestricted::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_ConvCtorNonTrivialRestricted_AssignFromAnother()`.
     */
    public mrbind_test.mr.csharp.ConvCtorNonTrivialRestricted assignFromAnother(mrbind_test.mr.csharp.ConvCtorNonTrivialRestricted _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ConvCtorNonTrivialRestricted_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_MOVE_AND_DESTROY, java.util.Objects.requireNonNull(_other, "_other").release());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.ConvCtorNonTrivialRestricted(__ret, false, __owner);
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
