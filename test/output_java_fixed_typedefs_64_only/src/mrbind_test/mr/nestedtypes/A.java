package mrbind_test.mr.nestedtypes;

/**
 * Generated from class `MR::NestedTypes::A`.
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
            mrbind_test.ffi.MR.test_nested_types.H0.MR_NestedTypes_A_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_NestedTypes_A_DefaultConstruct()`.
     */
    public A()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_nested_types.H0.MR_NestedTypes_A_DefaultConstruct.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Constructs `MR::NestedTypes::A` elementwise.
     * The reference to the parameter `b` might be preserved in the constructed object.
     * The reference to the parameter `e` might be preserved in the constructed object.
     *
     * Calls `MR_NestedTypes_A_ConstructFrom()`.
     */
    public A(mrbind_test.mr.nestedtypes.A_B b, mrbind_test.mr.nestedtypes.A_E e)
    {
        this(__ctor_constructFrom(b, e), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFrom(mrbind_test.mr.nestedtypes.A_B b, mrbind_test.mr.nestedtypes.A_E e)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_nested_types.H0.MR_NestedTypes_A_ConstructFrom.invokeExact(mrbind_test.Ffi.ptrNonNull(b, "b"), java.util.Objects.requireNonNull(e, "e").value);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Generated from constructor `MR::NestedTypes::A::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_NestedTypes_A_ConstructFromAnother()`.
     */
    public A(mrbind_test.mr.nestedtypes.A _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.nestedtypes.A _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_nested_types.H0.MR_NestedTypes_A_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::NestedTypes::A::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_NestedTypes_A_AssignFromAnother()`.
     */
    public mrbind_test.mr.nestedtypes.A assignFromAnother(mrbind_test.mr.nestedtypes.A _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_nested_types.H0.MR_NestedTypes_A_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.nestedtypes.A(__ret, false, __owner);
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
     * Returns a pointer to a member variable of class `MR::NestedTypes::A` named `b`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_NestedTypes_A_Get_b()`.
     */
    public mrbind_test.mr.nestedtypes.A_B b()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_nested_types.H0.MR_NestedTypes_A_Get_b.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.nestedtypes.A_B(__ret, false, __owner);
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
     * Modifies a member variable of class `MR::NestedTypes::A` named `b`.
     * The reference to the parameter `value` might be preserved in this object in element `b`.
     *
     * Calls `MR_NestedTypes_A_Set_b()`.
     */
    public void setB(mrbind_test.mr.nestedtypes.A_B value)
    {
        try
        {
            mrbind_test.ffi.MR.test_nested_types.H0.MR_NestedTypes_A_Set_b.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(value, "value"));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(value);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::NestedTypes::A` named `e`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_NestedTypes_A_Get_e()`.
     */
    public mrbind_test.mr.nestedtypes.A_E e()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_nested_types.H0.MR_NestedTypes_A_Get_e.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            return mrbind_test.mr.nestedtypes.A_E.of(__ret.reinterpret(4).get(java.lang.foreign.ValueLayout.JAVA_INT, 0));
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
     * Modifies a member variable of class `MR::NestedTypes::A` named `e`.
     * The reference to the parameter `value` might be preserved in this object in element `e`.
     *
     * Calls `MR_NestedTypes_A_Set_e()`.
     */
    public void setE(mrbind_test.mr.nestedtypes.A_E value)
    {
        try
        {
            mrbind_test.ffi.MR.test_nested_types.H0.MR_NestedTypes_A_Set_e.invokeExact(rawPointer(), java.util.Objects.requireNonNull(value, "value").value);
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
