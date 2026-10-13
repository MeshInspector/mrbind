package mrbind_test.mr.csharp;

/**
 * Conversion operators to references.
 * Generated from class `MR::CSharp::ConvOpToRef`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class ConvOpToRef extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public ConvOpToRef(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? ConvOpToRef::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ConvOpToRef_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_ConvOpToRef_DefaultConstruct()`.
     */
    public ConvOpToRef()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ConvOpToRef_DefaultConstruct.invokeExact();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::ConvOpToRef::ConvOpToRef`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_ConvOpToRef_ConstructFromAnother()`.
     */
    public ConvOpToRef(mrbind_test.mr.csharp.ConvOpToRef _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.csharp.ConvOpToRef _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ConvOpToRef_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Not to a reference.
     * Generated from conversion operator `MR::CSharp::ConvOpToRef::operator int32_t`.
     *
     * Calls `MR_CSharp_ConvOpToRef_ConvertTo_int32_t()`.
     */
    public int convertTo_int32_t()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ConvOpToRef_ConvertTo_int32_t.invokeExact(rawPointer());
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
     * To a reference.
     * Generated from conversion operator `MR::CSharp::ConvOpToRef::operator float &`.
     *
     * Calls `MR_CSharp_ConvOpToRef_ConvertTo_float_ref()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment convertTo_float_ref()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ConvOpToRef_ConvertTo_float_ref.invokeExact(rawPointer());
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
     * To a reference, explicit.
     * Generated from conversion operator `MR::CSharp::ConvOpToRef::operator uint16_t &`.
     *
     * Calls `MR_CSharp_ConvOpToRef_ConvertTo_uint16_t_ref()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment convertTo_uint16_t_ref()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ConvOpToRef_ConvertTo_uint16_t_ref.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::ConvOpToRef::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_ConvOpToRef_AssignFromAnother()`.
     */
    public mrbind_test.mr.csharp.ConvOpToRef assignFromAnother(mrbind_test.mr.csharp.ConvOpToRef _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ConvOpToRef_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.ConvOpToRef(__ret, false, __owner);
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
