package mrbind_test.mr.abstractclasses;

/**
 * Generated from class `MR::AbstractClasses::A`.
 *
 * Can't be created from Java, only references to it are used.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class A extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public A(java.lang.foreign.MemorySegment ptr, java.lang.Object owner) {super(ptr, null, owner);}

    /**
     * Generated from method `MR::AbstractClasses::A::foo`.
     *
     * Calls `MR_AbstractClasses_A_foo()`.
     */
    public void foo()
    {
        try
        {
            mrbind_test.ffi.MR.test_abstract_classes.H0.MR_AbstractClasses_A_foo.invokeExact(rawPointer());
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
}
