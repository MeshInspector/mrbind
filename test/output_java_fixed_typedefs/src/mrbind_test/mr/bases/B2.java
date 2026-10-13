package mrbind_test.mr.bases;

/**
 * Generated from class `MR::Bases::B2`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::Bases::B`
 *   Indirect: (non-virtual)
 *     `MR::Bases::A`
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class B2 extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public B2(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? B2::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_bases.H0.MR_Bases_B2_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_Bases_B2_DefaultConstruct()`.
     */
    public B2()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_bases.H0.MR_Bases_B2_DefaultConstruct.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::Bases::B2::B2`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_Bases_B2_ConstructFromAnother()`.
     */
    public B2(mrbind_test.mr.bases.B2 _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.bases.B2 _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_bases.H0.MR_Bases_B2_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::Bases::B2::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_Bases_B2_AssignFromAnother()`.
     */
    public mrbind_test.mr.bases.B2 assignFromAnother(mrbind_test.mr.bases.B2 _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_bases.H0.MR_Bases_B2_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.bases.B2(__ret, false, __owner);
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

    /** Upcasts to the base class `MR::Bases::A`. The result refers to this object.
     *
     * Calls `MR_Bases_B2_MutableUpcastTo_MR_Bases_A()`. */
    public mrbind_test.mr.bases.A upcastToA()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_bases.H0.MR_Bases_B2_MutableUpcastTo_MR_Bases_A.invokeExact(rawPointer());
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

    /** Static downcast from the base class `MR::Bases::A`. Undefined behavior if the object isn't actually a `B2`. The result refers to `object`.
     *
     * Calls `MR_Bases_B2_MutableStaticDowncastFrom_MR_Bases_A()`. */
    public static mrbind_test.mr.bases.B2 staticDowncastFromA(mrbind_test.mr.bases.A object)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_bases.H0.MR_Bases_B2_MutableStaticDowncastFrom_MR_Bases_A.invokeExact(mrbind_test.Ffi.ptrNonNull(object, "object"));
            return new mrbind_test.mr.bases.B2(__ret, false, object);
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

    /** Upcasts to the base class `MR::Bases::B`. The result refers to this object.
     *
     * Calls `MR_Bases_B2_MutableUpcastTo_MR_Bases_B()`. */
    public mrbind_test.mr.bases.B upcastToB()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_bases.H0.MR_Bases_B2_MutableUpcastTo_MR_Bases_B.invokeExact(rawPointer());
            return new mrbind_test.mr.bases.B(__ret, false, this);
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

    /** Static downcast from the base class `MR::Bases::B`. Undefined behavior if the object isn't actually a `B2`. The result refers to `object`.
     *
     * Calls `MR_Bases_B2_MutableStaticDowncastFrom_MR_Bases_B()`. */
    public static mrbind_test.mr.bases.B2 staticDowncastFromB(mrbind_test.mr.bases.B object)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_bases.H0.MR_Bases_B2_MutableStaticDowncastFrom_MR_Bases_B.invokeExact(mrbind_test.Ffi.ptrNonNull(object, "object"));
            return new mrbind_test.mr.bases.B2(__ret, false, object);
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
