package mrbind_test.mr.testsimpletypes;

/**
 * Class templates.
 * Generated from class `MR::TestSimpleTypes::ClassTemplate<unsigned long>`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class ClassTemplate_unsigned_long extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public ClassTemplate_unsigned_long(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? ClassTemplate_unsigned_long::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_ClassTemplate_unsigned_long_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Generated from constructor `MR::TestSimpleTypes::ClassTemplate<unsigned long>::ClassTemplate`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_TestSimpleTypes_ClassTemplate_unsigned_long_ConstructFromAnother()`.
     */
    public ClassTemplate_unsigned_long(mrbind_test.mr.testsimpletypes.ClassTemplate_unsigned_long _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.testsimpletypes.ClassTemplate_unsigned_long _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_ClassTemplate_unsigned_long_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Constructors.
     * Generated from constructor `MR::TestSimpleTypes::ClassTemplate<unsigned long>::ClassTemplate`.
     * The reference to the parameter `_1` might be preserved in the constructed object.
     *
     * Calls `MR_TestSimpleTypes_ClassTemplate_unsigned_long_Construct_unsigned_long()`.
     */
    public ClassTemplate_unsigned_long(long _1)
    {
        this(__ctor_construct_unsigned_long(_1), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct_unsigned_long(long _1)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_ClassTemplate_unsigned_long_Construct_unsigned_long.invokeExact(_1);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Constructors.
     * Generated from constructor `MR::TestSimpleTypes::ClassTemplate<unsigned long>::ClassTemplate`.
     *
     * Calls `MR_TestSimpleTypes_ClassTemplate_unsigned_long_Construct_int()`.
     */
    public ClassTemplate_unsigned_long(int _1)
    {
        this(__ctor_construct_int(_1), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct_int(int _1)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_ClassTemplate_unsigned_long_Construct_int.invokeExact(_1);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from method `MR::TestSimpleTypes::ClassTemplate<unsigned long>::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_TestSimpleTypes_ClassTemplate_unsigned_long_AssignFromAnother()`.
     */
    public mrbind_test.mr.testsimpletypes.ClassTemplate_unsigned_long assignFromAnother(mrbind_test.mr.testsimpletypes.ClassTemplate_unsigned_long _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_ClassTemplate_unsigned_long_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.testsimpletypes.ClassTemplate_unsigned_long(__ret, false, __owner);
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
     * Generated from method `MR::TestSimpleTypes::ClassTemplate<unsigned long>::foo<unsigned long>`.
     *
     * Calls `MR_TestSimpleTypes_ClassTemplate_unsigned_long_foo_unsigned_long()`.
     */
    public void foo_unsigned_long()
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_ClassTemplate_unsigned_long_foo_unsigned_long.invokeExact(rawPointer());
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
     * Methods.
     * Generated from method `MR::TestSimpleTypes::ClassTemplate<unsigned long>::foo<int>`.
     *
     * Calls `MR_TestSimpleTypes_ClassTemplate_unsigned_long_foo_int()`.
     */
    public void foo_int()
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_ClassTemplate_unsigned_long_foo_int.invokeExact(rawPointer());
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
     * Returns a pointer to a member variable of class `MR::TestSimpleTypes::ClassTemplate<unsigned long>` named `var<unsigned long>`.
     *
     * Calls `MR_TestSimpleTypes_ClassTemplate_unsigned_long_Get_var_unsigned_long()`.
     */
    public static long var_()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_ClassTemplate_unsigned_long_Get_var_unsigned_long.invokeExact();
            return mrbind_test.Ffi.getCLong(__ret.reinterpret(8), 0);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Modifies a member variable of class `MR::TestSimpleTypes::ClassTemplate<unsigned long>` named `var<unsigned long>`.
     * The reference to the parameter `value` might be preserved in this object in element `var<unsigned long>`.
     *
     * Calls `MR_TestSimpleTypes_ClassTemplate_unsigned_long_Set_var_unsigned_long()`.
     */
    public static void setVar(long value)
    {
        try
        {
            mrbind_test.ffi.MR.test_simple_types.H0.MR_TestSimpleTypes_ClassTemplate_unsigned_long_Set_var_unsigned_long.invokeExact(value);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }
}
