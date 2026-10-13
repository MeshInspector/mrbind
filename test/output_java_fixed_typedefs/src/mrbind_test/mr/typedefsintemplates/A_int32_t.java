package mrbind_test.mr.typedefsintemplates;

/**
 * This tests a specific Clang bug/quirk.
 * Certain typedefs in templates get their names printed without the template arguments of the enclosing class template, breaking our code generation.
 * Generated from class `MR::TypedefsInTemplates::A<int32_t>`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class A_int32_t extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public A_int32_t(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? A_int32_t::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_typedefs_in_templates.H0.MR_TypedefsInTemplates_A_int32_t_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_TypedefsInTemplates_A_int32_t_DefaultConstruct()`.
     */
    public A_int32_t()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_typedefs_in_templates.H0.MR_TypedefsInTemplates_A_int32_t_DefaultConstruct.invokeExact();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::TypedefsInTemplates::A<int32_t>::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_TypedefsInTemplates_A_int32_t_ConstructFromAnother()`.
     */
    public A_int32_t(mrbind_test.mr.typedefsintemplates.A_int32_t _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.typedefsintemplates.A_int32_t _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_typedefs_in_templates.H0.MR_TypedefsInTemplates_A_int32_t_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::TypedefsInTemplates::A<int32_t>::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_TypedefsInTemplates_A_int32_t_AssignFromAnother()`.
     */
    public mrbind_test.mr.typedefsintemplates.A_int32_t assignFromAnother(mrbind_test.mr.typedefsintemplates.A_int32_t _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_typedefs_in_templates.H0.MR_TypedefsInTemplates_A_int32_t_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            java.lang.Object __owner = this;
            return new mrbind_test.mr.typedefsintemplates.A_int32_t(__ret, false, __owner);
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
     * Generated from method `MR::TypedefsInTemplates::A<int32_t>::foo`.
     *
     * Calls `MR_TypedefsInTemplates_A_int32_t_foo()`.
     */
    public int foo()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_typedefs_in_templates.H0.MR_TypedefsInTemplates_A_int32_t_foo.invokeExact(rawPointer());
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
