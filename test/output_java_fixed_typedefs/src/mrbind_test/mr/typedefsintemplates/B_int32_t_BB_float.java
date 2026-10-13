package mrbind_test.mr.typedefsintemplates;

/**
 * Generated from class `MR::TypedefsInTemplates::B<int32_t>::BB<float>`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class B_int32_t_BB_float extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public B_int32_t_BB_float(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? B_int32_t_BB_float::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_typedefs_in_templates.H0.MR_TypedefsInTemplates_B_int32_t_BB_float_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_TypedefsInTemplates_B_int32_t_BB_float_DefaultConstruct()`.
     */
    public B_int32_t_BB_float()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_typedefs_in_templates.H0.MR_TypedefsInTemplates_B_int32_t_BB_float_DefaultConstruct.invokeExact();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::TypedefsInTemplates::B<int32_t>::BB<float>::BB`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_TypedefsInTemplates_B_int32_t_BB_float_ConstructFromAnother()`.
     */
    public B_int32_t_BB_float(mrbind_test.mr.typedefsintemplates.B_int32_t_BB_float _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.typedefsintemplates.B_int32_t_BB_float _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_typedefs_in_templates.H0.MR_TypedefsInTemplates_B_int32_t_BB_float_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::TypedefsInTemplates::B<int32_t>::BB<float>::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_TypedefsInTemplates_B_int32_t_BB_float_AssignFromAnother()`.
     */
    public mrbind_test.mr.typedefsintemplates.B_int32_t_BB_float assignFromAnother(mrbind_test.mr.typedefsintemplates.B_int32_t_BB_float _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_typedefs_in_templates.H0.MR_TypedefsInTemplates_B_int32_t_BB_float_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            java.lang.Object __owner = this;
            return new mrbind_test.mr.typedefsintemplates.B_int32_t_BB_float(__ret, false, __owner);
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
     * Generated from method `MR::TypedefsInTemplates::B<int32_t>::BB<float>::foo`.
     *
     * Calls `MR_TypedefsInTemplates_B_int32_t_BB_float_foo()`.
     */
    public int foo()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_typedefs_in_templates.H0.MR_TypedefsInTemplates_B_int32_t_BB_float_foo.invokeExact(rawPointer());
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
     * Generated from method `MR::TypedefsInTemplates::B<int32_t>::BB<float>::foo2`.
     *
     * Calls `MR_TypedefsInTemplates_B_int32_t_BB_float_foo2()`.
     */
    public int foo2()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_typedefs_in_templates.H0.MR_TypedefsInTemplates_B_int32_t_BB_float_foo2.invokeExact(rawPointer());
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
