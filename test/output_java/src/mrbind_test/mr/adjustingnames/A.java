package mrbind_test.mr.adjustingnames;

/**
 * And test that `uint64_t` is correctly adjusted in some other kinds of names.
 * Though here we don't really test that each of them brings its own includes.
 * Generated from class `MR::AdjustingNames::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class A extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public A(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? A::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_adjusting_names.H0.MR_AdjustingNames_A_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_AdjustingNames_A_DefaultConstruct()`.
     */
    public A()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_adjusting_names.H0.MR_AdjustingNames_A_DefaultConstruct.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::AdjustingNames::A::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_AdjustingNames_A_ConstructFromAnother()`.
     */
    public A(mrbind_test.mr.adjustingnames.A _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.adjustingnames.A _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_adjusting_names.H0.MR_AdjustingNames_A_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from conversion operator `MR::AdjustingNames::A::operator unsigned long`.
     *
     * Calls `MR_AdjustingNames_A_ConvertTo_unsigned_long()`.
     */
    public long convertTo_unsigned_long()
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.MR.test_adjusting_names.H0.MR_AdjustingNames_A_ConvertTo_unsigned_long.invokeExact(rawPointer());
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
     * Generated from method `MR::AdjustingNames::A::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_AdjustingNames_A_AssignFromAnother()`.
     */
    public mrbind_test.mr.adjustingnames.A assignFromAnother(mrbind_test.mr.adjustingnames.A _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_adjusting_names.H0.MR_AdjustingNames_A_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.adjustingnames.A(__ret, false, __owner);
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
     * Generated from method `MR::AdjustingNames::A::foo<unsigned long>`.
     *
     * Calls `MR_AdjustingNames_A_foo()`.
     */
    public void foo()
    {
        try
        {
            mrbind_test.ffi.MR.test_adjusting_names.H0.MR_AdjustingNames_A_foo.invokeExact(rawPointer());
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
     * Generated from method `MR::AdjustingNames::A::bar`.
     *
     * Calls `MR_AdjustingNames_A_bar()`.
     */
    public void bar()
    {
        try
        {
            mrbind_test.ffi.MR.test_adjusting_names.H0.MR_AdjustingNames_A_bar.invokeExact(rawPointer());
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
     * Returns a pointer to a member variable of class `MR::AdjustingNames::A` named `var<unsigned long>`.
     *
     * Calls `MR_AdjustingNames_A_Get_var_unsigned_long()`.
     */
    public static long var_()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_adjusting_names.H0.MR_AdjustingNames_A_Get_var_unsigned_long.invokeExact();
            return mrbind_test.Ffi.getCLong(__ret.reinterpret(8), 0);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Modifies a member variable of class `MR::AdjustingNames::A` named `var<unsigned long>`.
     * The reference to the parameter `value` might be preserved in this object in element `var<unsigned long>`.
     *
     * Calls `MR_AdjustingNames_A_Set_var_unsigned_long()`.
     */
    public static void setVar(long value)
    {
        try
        {
            mrbind_test.ffi.MR.test_adjusting_names.H0.MR_AdjustingNames_A_Set_var_unsigned_long.invokeExact(value);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }
}
