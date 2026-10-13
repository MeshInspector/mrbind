package mrbind_test.mr.omittingtargsandquals;

/**
 * Here the generated code will omit the template arguments for operators (to avoid unwanted instantiations),
 *   and omit qualifiers for friend functions (since they are normally only accessible via ADL).
 * Generated from class `MR::OmittingTargsAndQuals::A<float>`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class A_float extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public A_float(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? A_float::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_omitting_template_args_and_quals.H0.MR_OmittingTargsAndQuals_A_float_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_OmittingTargsAndQuals_A_float_DefaultConstruct()`.
     */
    public A_float()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_omitting_template_args_and_quals.H0.MR_OmittingTargsAndQuals_A_float_DefaultConstruct.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::OmittingTargsAndQuals::A<float>::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_OmittingTargsAndQuals_A_float_ConstructFromAnother()`.
     */
    public A_float(mrbind_test.mr.omittingtargsandquals.A_float _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.omittingtargsandquals.A_float _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_omitting_template_args_and_quals.H0.MR_OmittingTargsAndQuals_A_float_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::OmittingTargsAndQuals::A<float>::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_OmittingTargsAndQuals_A_float_AssignFromAnother()`.
     */
    public mrbind_test.mr.omittingtargsandquals.A_float assignFromAnother(mrbind_test.mr.omittingtargsandquals.A_float _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_omitting_template_args_and_quals.H0.MR_OmittingTargsAndQuals_A_float_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.omittingtargsandquals.A_float(__ret, false, __owner);
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
     * Generated from method `MR::OmittingTargsAndQuals::A<float>::operator+`.
     *
     * Calls `MR_C_pos_MR_OmittingTargsAndQuals_A_float()`.
     */
    public void opAdd()
    {
        try
        {
            mrbind_test.ffi.MR.test_omitting_template_args_and_quals.H0.MR_C_pos_MR_OmittingTargsAndQuals_A_float.invokeExact(rawPointer());
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
