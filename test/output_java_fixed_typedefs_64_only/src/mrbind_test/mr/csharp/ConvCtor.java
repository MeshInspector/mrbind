package mrbind_test.mr.csharp;

/**
 * Conversion constructors. Right now we only provide conversion operators for implicit ones,
 *   because I have no idea when the explicit ones could be useful.
 * Generated from class `MR::CSharp::ConvCtor`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class ConvCtor extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public ConvCtor(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? ConvCtor::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ConvCtor_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_ConvCtor_DefaultConstruct()`.
     */
    public ConvCtor()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ConvCtor_DefaultConstruct.invokeExact();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_ConvCtor_ConstructFromAnother()`.
     */
    public ConvCtor(mrbind_test.mr.csharp.ConvCtor _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.csharp.ConvCtor _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ConvCtor_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
     *
     * Calls `MR_CSharp_ConvCtor_Construct_1_int()`.
     */
    public ConvCtor(int _1)
    {
        this(__ctor_construct_1_int(_1), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct_1_int(int _1)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ConvCtor_Construct_1_int.invokeExact(_1);
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
     *
     * Calls `MR_CSharp_ConvCtor_Construct_2_int()`.
     */
    public ConvCtor(int _1, int _2)
    {
        this(__ctor_construct_2_int(_1, _2), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct_2_int(int _1, int _2)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ConvCtor_Construct_2_int.invokeExact(_1, _2);
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
     *
     * Calls `MR_CSharp_ConvCtor_Construct_2_short()`.
     */
    public ConvCtor(short _1, java.lang.Integer _2)
    {
        this(__ctor_construct_2_short(_1, _2), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct_2_short(short _1, java.lang.Integer _2)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ConvCtor_Construct_2_short.invokeExact(_1, (java.lang.foreign.MemorySegment)(_2 == null ? java.lang.foreign.MemorySegment.NULL : mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_INT, _2)));
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
     *
     * Calls `MR_CSharp_ConvCtor_Construct_1_float()`.
     */
    public ConvCtor(float _1)
    {
        this(__ctor_construct_1_float(_1), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct_1_float(float _1)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ConvCtor_Construct_1_float.invokeExact(_1);
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
     *
     * Calls `MR_CSharp_ConvCtor_Construct_2_float()`.
     */
    public ConvCtor(float _1, float _2)
    {
        this(__ctor_construct_2_float(_1, _2), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct_2_float(float _1, float _2)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ConvCtor_Construct_2_float.invokeExact(_1, _2);
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from method `MR::CSharp::ConvCtor::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_ConvCtor_AssignFromAnother()`.
     */
    public mrbind_test.mr.csharp.ConvCtor assignFromAnother(mrbind_test.mr.csharp.ConvCtor _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ConvCtor_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.ConvCtor(__ret, false, __owner);
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
}
