package mrbind_test.mr.csharp;

/**
 * Generated from class `MR::CSharp::B`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::CSharp::A`
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class B extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public B(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? B::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_B_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_B_DefaultConstruct()`.
     */
    public B()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_B_DefaultConstruct.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::B::B`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_B_ConstructFromAnother()`.
     */
    public B(mrbind_test.mr.csharp.B _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.csharp.B _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_B_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from constructor `MR::CSharp::B::B`.
     *
     * Calls `MR_CSharp_B_Construct()`.
     */
    public B(int a, int b)
    {
        this(__ctor_construct(a, b), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct(int a, int b)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_B_Construct.invokeExact(a, b);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from method `MR::CSharp::B::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_B_AssignFromAnother()`.
     */
    public mrbind_test.mr.csharp.B assignFromAnother(mrbind_test.mr.csharp.B _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_B_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.B(__ret, false, __owner);
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
     * Generated from method `MR::CSharp::B::foo`.
     *
     * Calls `MR_CSharp_B_foo()`.
     */
    public void foo()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_B_foo.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::B::bar`.
     *
     * Calls `MR_CSharp_B_bar()`.
     */
    public void bar(int _1, int _2)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_B_bar.invokeExact(rawPointer(), _1, _2);
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
     * Generated from method `MR::CSharp::B::static_foo`.
     *
     * Calls `MR_CSharp_B_static_foo()`.
     */
    public static void static_foo()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_B_static_foo.invokeExact();
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from method `MR::CSharp::B::static_bar`.
     *
     * Calls `MR_CSharp_B_static_bar()`.
     */
    public static void static_bar(int _1, int _2)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_B_static_bar.invokeExact(_1, _2);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from method `MR::CSharp::B::virtual_foo`.
     *
     * Calls `MR_CSharp_B_virtual_foo()`.
     */
    public void virtual_foo()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_B_virtual_foo.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::B::virtual_bar`.
     *
     * Calls `MR_CSharp_B_virtual_bar()`.
     */
    public void virtual_bar(int _1, int _2)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_B_virtual_bar.invokeExact(rawPointer(), _1, _2);
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
     * Generated from method `MR::CSharp::B::refs`.
     *
     * Calls `MR_CSharp_B_refs()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment refs(mrbind_test.int_output x, mrbind_test.int_output _2)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_B_refs.invokeExact(rawPointer(), mrbind_test.ScalarOutput.ref(x, "x"), mrbind_test.ScalarOutput.ref(_2, "_2"));
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
            java.lang.ref.Reference.reachabilityFence(x);
            java.lang.ref.Reference.reachabilityFence(_2);
        }
    }

    /** Upcasts to the base class `MR::CSharp::A`. The result refers to this object.
     *
     * Calls `MR_CSharp_B_MutableUpcastTo_MR_CSharp_A()`. */
    public mrbind_test.mr.csharp.A upcastToA()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_B_MutableUpcastTo_MR_CSharp_A.invokeExact(rawPointer());
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

    /** Static downcast from the base class `MR::CSharp::A`. Undefined behavior if the object isn't actually a `B`. The result refers to `object`.
     *
     * Calls `MR_CSharp_B_MutableStaticDowncastFrom_MR_CSharp_A()`. */
    public static mrbind_test.mr.csharp.B staticDowncastFromA(mrbind_test.mr.csharp.A object)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_B_MutableStaticDowncastFrom_MR_CSharp_A.invokeExact(mrbind_test.Ffi.ptrNonNull(object, "object"));
            return new mrbind_test.mr.csharp.B(__ret, false, object);
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

    /** Dynamic downcast from the base class `MR::CSharp::A`. Returns null if the object isn't actually a `B`. The result refers to `object`.
     *
     * Calls `MR_CSharp_B_MutableDynamicDowncastFrom_MR_CSharp_A()`. */
    public static mrbind_test.mr.csharp.B dynamicDowncastFromA(mrbind_test.mr.csharp.A object)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_B_MutableDynamicDowncastFrom_MR_CSharp_A.invokeExact(mrbind_test.Ffi.ptrNonNull(object, "object"));
            return __ret.address() == 0 ? null : new mrbind_test.mr.csharp.B(__ret, false, object);
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
