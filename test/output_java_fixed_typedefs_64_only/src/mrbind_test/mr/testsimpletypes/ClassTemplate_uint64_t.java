package mrbind_test.mr.testsimpletypes;

/**
 * Class templates.
 * Generated from class `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class ClassTemplate_uint64_t extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public ClassTemplate_uint64_t(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? ClassTemplate_uint64_t::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_ClassTemplate_uint64_t_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Generated from constructor `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>::ClassTemplate`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_TestSimpleTypes_ClassTemplate_uint64_t_ConstructFromAnother()`.
     */
    public ClassTemplate_uint64_t(mrbind_test.mr.testsimpletypes.ClassTemplate_uint64_t _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.testsimpletypes.ClassTemplate_uint64_t _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_ClassTemplate_uint64_t_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Constructors.
     * Generated from constructor `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>::ClassTemplate`.
     *
     * Calls `MR_TestSimpleTypes_ClassTemplate_uint64_t_Construct_uint64_t()`.
     */
    public ClassTemplate_uint64_t(long _1)
    {
        this(__ctor_construct_uint64_t(_1), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct_uint64_t(long _1)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_ClassTemplate_uint64_t_Construct_uint64_t.invokeExact(_1);
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Constructors.
     * Generated from constructor `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>::ClassTemplate`.
     *
     * Calls `MR_TestSimpleTypes_ClassTemplate_uint64_t_Construct_int()`.
     */
    public ClassTemplate_uint64_t(int _1)
    {
        this(__ctor_construct_int(_1), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct_int(int _1)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_ClassTemplate_uint64_t_Construct_int.invokeExact(_1);
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from method `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_TestSimpleTypes_ClassTemplate_uint64_t_AssignFromAnother()`.
     */
    public mrbind_test.mr.testsimpletypes.ClassTemplate_uint64_t assignFromAnother(mrbind_test.mr.testsimpletypes.ClassTemplate_uint64_t _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_ClassTemplate_uint64_t_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            java.lang.Object __owner = this;
            return new mrbind_test.mr.testsimpletypes.ClassTemplate_uint64_t(__ret, false, __owner);
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
     * Methods.
     * Generated from method `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>::foo<MR_C_uint64_t>`.
     *
     * Calls `MR_TestSimpleTypes_ClassTemplate_uint64_t_foo_uint64_t()`.
     */
    public void foo_uint64_t()
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_ClassTemplate_uint64_t_foo_uint64_t.invokeExact(rawPointer());
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
     * Methods.
     * Generated from method `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>::foo<int>`.
     *
     * Calls `MR_TestSimpleTypes_ClassTemplate_uint64_t_foo_int()`.
     */
    public void foo_int()
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_ClassTemplate_uint64_t_foo_int.invokeExact(rawPointer());
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
     * Returns a pointer to a member variable of class `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>` named `var<MR_C_uint64_t>`.
     *
     * Calls `MR_TestSimpleTypes_ClassTemplate_uint64_t_Get_var_uint64_t()`.
     */
    public static long var_()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_ClassTemplate_uint64_t_Get_var_uint64_t.invokeExact();
            return __ret.reinterpret(8).get(java.lang.foreign.ValueLayout.JAVA_LONG, 0);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Modifies a member variable of class `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>` named `var<MR_C_uint64_t>`.
     * The reference to the parameter `value` might be preserved in this object in element `var<MR_C_uint64_t>`.
     *
     * Calls `MR_TestSimpleTypes_ClassTemplate_uint64_t_Set_var_uint64_t()`.
     */
    public static void setVar(long value)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_ClassTemplate_uint64_t_Set_var_uint64_t.invokeExact(value);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }
}
