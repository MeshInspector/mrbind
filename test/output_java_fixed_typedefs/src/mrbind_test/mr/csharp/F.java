package mrbind_test.mr.csharp;

/**
 * Generated from class `MR::CSharp::F`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::CSharp::A`
 *     `MR::CSharp::D`
 *     `MR::CSharp::E`
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class F extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public F(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? F::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_F_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_F_DefaultConstruct()`.
     */
    public F()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_F_DefaultConstruct.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::F::F`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_F_ConstructFromAnother()`.
     */
    public F(mrbind_test.mr.csharp.F _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.csharp.F _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_F_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::CSharp::F::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_F_AssignFromAnother()`.
     */
    public mrbind_test.mr.csharp.F assignFromAnother(mrbind_test.mr.csharp.F _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_F_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.F(__ret, false, __owner);
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

    /** Upcasts to the base class `MR::CSharp::A`. The result refers to this object.
     *
     * Calls `MR_CSharp_F_MutableUpcastTo_MR_CSharp_A()`. */
    public mrbind_test.mr.csharp.A upcastToA()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_F_MutableUpcastTo_MR_CSharp_A.invokeExact(rawPointer());
            return new mrbind_test.mr.csharp.A(__ret, false, this);
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

    /** Static downcast from the base class `MR::CSharp::A`. Undefined behavior if the object isn't actually a `F`. The result refers to `object`.
     *
     * Calls `MR_CSharp_F_MutableStaticDowncastFrom_MR_CSharp_A()`. */
    public static mrbind_test.mr.csharp.F staticDowncastFromA(mrbind_test.mr.csharp.A object)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_F_MutableStaticDowncastFrom_MR_CSharp_A.invokeExact(mrbind_test.Ffi.ptrNonNull(object, "object"));
            return new mrbind_test.mr.csharp.F(__ret, false, object);
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

    /** Dynamic downcast from the base class `MR::CSharp::A`. Returns null if the object isn't actually a `F`. The result refers to `object`.
     *
     * Calls `MR_CSharp_F_MutableDynamicDowncastFrom_MR_CSharp_A()`. */
    public static mrbind_test.mr.csharp.F dynamicDowncastFromA(mrbind_test.mr.csharp.A object)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_F_MutableDynamicDowncastFrom_MR_CSharp_A.invokeExact(mrbind_test.Ffi.ptrNonNull(object, "object"));
            return __ret.address() == 0 ? null : new mrbind_test.mr.csharp.F(__ret, false, object);
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

    /** Upcasts to the base class `MR::CSharp::D`. The result refers to this object.
     *
     * Calls `MR_CSharp_F_MutableUpcastTo_MR_CSharp_D()`. */
    public mrbind_test.mr.csharp.D upcastToD()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_F_MutableUpcastTo_MR_CSharp_D.invokeExact(rawPointer());
            return new mrbind_test.mr.csharp.D(__ret, false, this);
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

    /** Static downcast from the base class `MR::CSharp::D`. Undefined behavior if the object isn't actually a `F`. The result refers to `object`.
     *
     * Calls `MR_CSharp_F_MutableStaticDowncastFrom_MR_CSharp_D()`. */
    public static mrbind_test.mr.csharp.F staticDowncastFromD(mrbind_test.mr.csharp.D object)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_F_MutableStaticDowncastFrom_MR_CSharp_D.invokeExact(mrbind_test.Ffi.ptrNonNull(object, "object"));
            return new mrbind_test.mr.csharp.F(__ret, false, object);
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

    /** Upcasts to the base class `MR::CSharp::E`. The result refers to this object.
     *
     * Calls `MR_CSharp_F_MutableUpcastTo_MR_CSharp_E()`. */
    public mrbind_test.mr.csharp.E upcastToE()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_F_MutableUpcastTo_MR_CSharp_E.invokeExact(rawPointer());
            return new mrbind_test.mr.csharp.E(__ret, false, this);
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

    /** Static downcast from the base class `MR::CSharp::E`. Undefined behavior if the object isn't actually a `F`. The result refers to `object`.
     *
     * Calls `MR_CSharp_F_MutableStaticDowncastFrom_MR_CSharp_E()`. */
    public static mrbind_test.mr.csharp.F staticDowncastFromE(mrbind_test.mr.csharp.E object)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_F_MutableStaticDowncastFrom_MR_CSharp_E.invokeExact(mrbind_test.Ffi.ptrNonNull(object, "object"));
            return new mrbind_test.mr.csharp.F(__ret, false, object);
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
