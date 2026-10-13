package mrbind_test.mr.testsizet;

/**
 * Generated from class `MR::TestSizeT::A<unsigned long>`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class A_unsigned_long extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public A_unsigned_long(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? A_unsigned_long::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_size_t_ptrdiff_t.H0.MR_TestSizeT_A_unsigned_long_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_TestSizeT_A_unsigned_long_DefaultConstruct()`.
     */
    public A_unsigned_long()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_size_t_ptrdiff_t.H0.MR_TestSizeT_A_unsigned_long_DefaultConstruct.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::TestSizeT::A<unsigned long>::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_TestSizeT_A_unsigned_long_ConstructFromAnother()`.
     */
    public A_unsigned_long(mrbind_test.mr.testsizet.A_unsigned_long _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.testsizet.A_unsigned_long _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_size_t_ptrdiff_t.H0.MR_TestSizeT_A_unsigned_long_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::TestSizeT::A<unsigned long>::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_TestSizeT_A_unsigned_long_AssignFromAnother()`.
     */
    public mrbind_test.mr.testsizet.A_unsigned_long assignFromAnother(mrbind_test.mr.testsizet.A_unsigned_long _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_size_t_ptrdiff_t.H0.MR_TestSizeT_A_unsigned_long_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.testsizet.A_unsigned_long(__ret, false, __owner);
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

    /**
     * Generated from method `MR::TestSizeT::A<unsigned long>::foo`.
     *
     * Calls `MR_TestSizeT_A_unsigned_long_foo()`.
     */
    public long foo()
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.MR.test_size_t_ptrdiff_t.H0.MR_TestSizeT_A_unsigned_long_foo.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            return __ret;
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
