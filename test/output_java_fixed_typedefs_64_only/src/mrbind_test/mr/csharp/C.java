package mrbind_test.mr.csharp;

/**
 * Generated from class `MR::CSharp::C`.
 * Base classes:
 *   Virtual:
 *     `MR::CSharp::A`
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
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_C_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_C_DefaultConstruct()`.
     */
    public C()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_C_DefaultConstruct.invokeExact();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::C::C`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_C_ConstructFromAnother()`.
     */
    public C(mrbind_test.mr.csharp.C _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.csharp.C _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_C_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::CSharp::C::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_C_AssignFromAnother()`.
     */
    public mrbind_test.mr.csharp.C assignFromAnother(mrbind_test.mr.csharp.C _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_C_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.C(__ret, false, __owner);
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
     * Generated from method `MR::CSharp::C::foo`.
     *
     * Calls `MR_CSharp_C_foo()`.
     */
    public void foo()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_C_foo.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::C::bar`.
     *
     * Calls `MR_CSharp_C_bar()`.
     */
    public void bar(int _1, int _2)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_C_bar.invokeExact(rawPointer(), _1, _2);
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
     * Generated from method `MR::CSharp::C::static_foo`.
     *
     * Calls `MR_CSharp_C_static_foo()`.
     */
    public static void static_foo()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_C_static_foo.invokeExact();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from method `MR::CSharp::C::static_bar`.
     *
     * Calls `MR_CSharp_C_static_bar()`.
     */
    public static void static_bar(int _1, int _2)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_C_static_bar.invokeExact(_1, _2);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from method `MR::CSharp::C::virtual_foo`.
     *
     * Calls `MR_CSharp_C_virtual_foo()`.
     */
    public void virtual_foo()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_C_virtual_foo.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::C::virtual_bar`.
     *
     * Calls `MR_CSharp_C_virtual_bar()`.
     */
    public void virtual_bar(int _1, int _2)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_C_virtual_bar.invokeExact(rawPointer(), _1, _2);
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
     * Generated from method `MR::CSharp::C::refs`.
     *
     * Calls `MR_CSharp_C_refs()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment refs(java.lang.foreign.MemorySegment x, java.lang.foreign.MemorySegment _2)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_C_refs.invokeExact(rawPointer(), x, _2);
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
