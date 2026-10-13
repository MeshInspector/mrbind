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
