package mrbind_test.mr;

/**
 * Generated from class `MR::SeparateB`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::CommonBaseAB`
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class SeparateB extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public SeparateB(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? SeparateB::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.B.b.H0.MR_SeparateB_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Generated from constructor `MR::SeparateB::SeparateB`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_SeparateB_ConstructFromAnother()`.
     */
    public SeparateB(mrbind_test.mr.SeparateB _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.SeparateB _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.B.b.H0.MR_SeparateB_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::SeparateB::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_SeparateB_AssignFromAnother()`.
     */
    public mrbind_test.mr.SeparateB assignFromAnother(mrbind_test.mr.SeparateB _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.B.b.H0.MR_SeparateB_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
            java.lang.ref.Reference.reachabilityFence(_other);
        }
    }

    /** Upcasts to the base class `MR::CommonBaseAB`. The result refers to this object.
     *
     * Calls `MR_SeparateB_MutableUpcastTo_MR_CommonBaseAB()`. */
    public mrbind_test.mr.CommonBaseAB upcastToCommonBaseAB()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.B.b.H0.MR_SeparateB_MutableUpcastTo_MR_CommonBaseAB.invokeExact(rawPointer());
            return new mrbind_test.mr.CommonBaseAB(__ret, false, this);
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

    /** Static downcast from the base class `MR::CommonBaseAB`. Undefined behavior if the object isn't actually a `SeparateB`. The result refers to `object`.
     *
     * Calls `MR_SeparateB_MutableStaticDowncastFrom_MR_CommonBaseAB()`. */
    public static mrbind_test.mr.SeparateB staticDowncastFromCommonBaseAB(mrbind_test.mr.CommonBaseAB object)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.B.b.H0.MR_SeparateB_MutableStaticDowncastFrom_MR_CommonBaseAB.invokeExact(mrbind_test.Ffi.ptrNonNull(object, "object"));
            return new mrbind_test.mr.SeparateB(__ret, false, object);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(object);
        }
    }

    /** Dynamic downcast from the base class `MR::CommonBaseAB`. Returns null if the object isn't actually a `SeparateB`. The result refers to `object`.
     *
     * Calls `MR_SeparateB_MutableDynamicDowncastFrom_MR_CommonBaseAB()`. */
    public static mrbind_test.mr.SeparateB dynamicDowncastFromCommonBaseAB(mrbind_test.mr.CommonBaseAB object)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.B.b.H0.MR_SeparateB_MutableDynamicDowncastFrom_MR_CommonBaseAB.invokeExact(mrbind_test.Ffi.ptrNonNull(object, "object"));
            return __ret.address() == 0 ? null : new mrbind_test.mr.SeparateB(__ret, false, object);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(object);
        }
    }
}
