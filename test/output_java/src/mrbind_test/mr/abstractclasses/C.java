package mrbind_test.mr.abstractclasses;

/**
 * Generated from class `MR::AbstractClasses::C`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::AbstractClasses::B`
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
            mrbind_test.ffi.MR.test_abstract_classes.H0.MR_AbstractClasses_C_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Generated from method `MR::AbstractClasses::C::foo`.
     *
     * Calls `MR_AbstractClasses_C_foo()`.
     */
    public void foo()
    {
        try
        {
            mrbind_test.ffi.MR.test_abstract_classes.H0.MR_AbstractClasses_C_foo.invokeExact(rawPointer());
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

    /** Upcasts to the base class `MR::AbstractClasses::B`. The result refers to this object.
     *
     * Calls `MR_AbstractClasses_C_MutableUpcastTo_MR_AbstractClasses_B()`. */
    public mrbind_test.mr.abstractclasses.B upcastToB()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_abstract_classes.H0.MR_AbstractClasses_C_MutableUpcastTo_MR_AbstractClasses_B.invokeExact(rawPointer());
            return new mrbind_test.mr.abstractclasses.B(__ret, false, this);
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

    /** Static downcast from the base class `MR::AbstractClasses::B`. Undefined behavior if the object isn't actually a `C`. The result refers to `object`.
     *
     * Calls `MR_AbstractClasses_C_MutableStaticDowncastFrom_MR_AbstractClasses_B()`. */
    public static mrbind_test.mr.abstractclasses.C staticDowncastFromB(mrbind_test.mr.abstractclasses.B object)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_abstract_classes.H0.MR_AbstractClasses_C_MutableStaticDowncastFrom_MR_AbstractClasses_B.invokeExact(mrbind_test.Ffi.ptrNonNull(object, "object"));
            return new mrbind_test.mr.abstractclasses.C(__ret, false, object);
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

    /** Dynamic downcast from the base class `MR::AbstractClasses::B`. Returns null if the object isn't actually a `C`. The result refers to `object`.
     *
     * Calls `MR_AbstractClasses_C_MutableDynamicDowncastFrom_MR_AbstractClasses_B()`. */
    public static mrbind_test.mr.abstractclasses.C dynamicDowncastFromB(mrbind_test.mr.abstractclasses.B object)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_abstract_classes.H0.MR_AbstractClasses_C_MutableDynamicDowncastFrom_MR_AbstractClasses_B.invokeExact(mrbind_test.Ffi.ptrNonNull(object, "object"));
            return __ret.address() == 0 ? null : new mrbind_test.mr.abstractclasses.C(__ret, false, object);
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
