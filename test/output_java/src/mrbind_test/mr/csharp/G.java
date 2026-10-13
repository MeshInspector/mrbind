package mrbind_test.mr.csharp;

/**
 * Even if the secondary bases are virtual, this doesn't affect anything.
 * Generated from class `MR::CSharp::G`.
 * Base classes:
 *   Virtual:
 *     `MR::CSharp::E`
 *   Direct: (non-virtual)
 *     `MR::CSharp::A`
 *     `MR::CSharp::D`
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class G extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public G(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? G::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_G_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_G_DefaultConstruct()`.
     */
    public G()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_G_DefaultConstruct.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::G::G`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_G_ConstructFromAnother()`.
     */
    public G(mrbind_test.mr.csharp.G _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.csharp.G _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_G_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::CSharp::G::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_G_AssignFromAnother()`.
     */
    public mrbind_test.mr.csharp.G assignFromAnother(mrbind_test.mr.csharp.G _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_G_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.G(__ret, false, __owner);
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
     * Generated from method `MR::CSharp::G::foo`.
     *
     * Calls `MR_CSharp_G_foo()`.
     */
    public void foo()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_G_foo.invokeExact(rawPointer());
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

    /**
     * Generated from method `MR::CSharp::G::bar`.
     *
     * Calls `MR_CSharp_G_bar()`.
     */
    public void bar(int _1, int _2)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_G_bar.invokeExact(rawPointer(), _1, _2);
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

    /**
     * Generated from method `MR::CSharp::G::static_foo`.
     *
     * Calls `MR_CSharp_G_static_foo()`.
     */
    public static void static_foo()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_G_static_foo.invokeExact();
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from method `MR::CSharp::G::static_bar`.
     *
     * Calls `MR_CSharp_G_static_bar()`.
     */
    public static void static_bar(int _1, int _2)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_G_static_bar.invokeExact(_1, _2);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from method `MR::CSharp::G::virtual_foo`.
     *
     * Calls `MR_CSharp_G_virtual_foo()`.
     */
    public void virtual_foo()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_G_virtual_foo.invokeExact(rawPointer());
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

    /**
     * Generated from method `MR::CSharp::G::virtual_bar`.
     *
     * Calls `MR_CSharp_G_virtual_bar()`.
     */
    public void virtual_bar(int _1, int _2)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_G_virtual_bar.invokeExact(rawPointer(), _1, _2);
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

    /**
     * Generated from method `MR::CSharp::G::refs`.
     *
     * Calls `MR_CSharp_G_refs()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment refs(java.lang.foreign.MemorySegment x, java.lang.foreign.MemorySegment _2)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_G_refs.invokeExact(rawPointer(), x, _2);
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

    /**
     * Generated from method `MR::CSharp::G::d1`.
     *
     * Calls `MR_CSharp_G_d1()`.
     */
    public void d1()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_G_d1.invokeExact(rawPointer());
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

    /**
     * Generated from method `MR::CSharp::G::d2`.
     *
     * Calls `MR_CSharp_G_d2()`.
     */
    public void d2()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_G_d2.invokeExact(rawPointer());
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

    /**
     * Generated from method `MR::CSharp::G::e1`.
     *
     * Calls `MR_CSharp_G_e1()`.
     */
    public void e1()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_G_e1.invokeExact(rawPointer());
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

    /**
     * Generated from method `MR::CSharp::G::e2`.
     *
     * Calls `MR_CSharp_G_e2()`.
     */
    public void e2()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_G_e2.invokeExact(rawPointer());
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

    /** Upcasts to the base class `MR::CSharp::A`. The result refers to this object.
     *
     * Calls `MR_CSharp_G_MutableUpcastTo_MR_CSharp_A()`. */
    public mrbind_test.mr.csharp.A upcastToA()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_G_MutableUpcastTo_MR_CSharp_A.invokeExact(rawPointer());
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

    /** Static downcast from the base class `MR::CSharp::A`. Undefined behavior if the object isn't actually a `G`. The result refers to `object`.
     *
     * Calls `MR_CSharp_G_MutableStaticDowncastFrom_MR_CSharp_A()`. */
    public static mrbind_test.mr.csharp.G staticDowncastFromA(mrbind_test.mr.csharp.A object)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_G_MutableStaticDowncastFrom_MR_CSharp_A.invokeExact(mrbind_test.Ffi.ptrNonNull(object, "object"));
            return new mrbind_test.mr.csharp.G(__ret, false, object);
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

    /** Dynamic downcast from the base class `MR::CSharp::A`. Returns null if the object isn't actually a `G`. The result refers to `object`.
     *
     * Calls `MR_CSharp_G_MutableDynamicDowncastFrom_MR_CSharp_A()`. */
    public static mrbind_test.mr.csharp.G dynamicDowncastFromA(mrbind_test.mr.csharp.A object)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_G_MutableDynamicDowncastFrom_MR_CSharp_A.invokeExact(mrbind_test.Ffi.ptrNonNull(object, "object"));
            return __ret.address() == 0 ? null : new mrbind_test.mr.csharp.G(__ret, false, object);
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
     * Calls `MR_CSharp_G_MutableUpcastTo_MR_CSharp_D()`. */
    public mrbind_test.mr.csharp.D upcastToD()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_G_MutableUpcastTo_MR_CSharp_D.invokeExact(rawPointer());
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

    /** Static downcast from the base class `MR::CSharp::D`. Undefined behavior if the object isn't actually a `G`. The result refers to `object`.
     *
     * Calls `MR_CSharp_G_MutableStaticDowncastFrom_MR_CSharp_D()`. */
    public static mrbind_test.mr.csharp.G staticDowncastFromD(mrbind_test.mr.csharp.D object)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_G_MutableStaticDowncastFrom_MR_CSharp_D.invokeExact(mrbind_test.Ffi.ptrNonNull(object, "object"));
            return new mrbind_test.mr.csharp.G(__ret, false, object);
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
     * Calls `MR_CSharp_G_MutableUpcastTo_MR_CSharp_E()`. */
    public mrbind_test.mr.csharp.E upcastToE()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_G_MutableUpcastTo_MR_CSharp_E.invokeExact(rawPointer());
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
}
