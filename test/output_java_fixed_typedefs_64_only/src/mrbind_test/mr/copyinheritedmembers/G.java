package mrbind_test.mr.copyinheritedmembers;

/**
 * Generated from class `MR::CopyInheritedMembers::G`.
 * Base classes:
 *   Virtual:
 *     `MR::CopyInheritedMembers::A`
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::H`
 *     `MR::CopyInheritedMembers::I`
 *     `MR::CopyInheritedMembers::K`
 *     `MR::CopyInheritedMembers::L`
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class G extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public G(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? G::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_copy_inherited_members.H0.MR_CopyInheritedMembers_G_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CopyInheritedMembers_G_DefaultConstruct()`.
     */
    public G()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_copy_inherited_members.H0.MR_CopyInheritedMembers_G_DefaultConstruct.invokeExact();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::CopyInheritedMembers::G::G`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CopyInheritedMembers_G_ConstructFromAnother()`.
     */
    public G(mrbind_test.mr.copyinheritedmembers.G _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.copyinheritedmembers.G _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_copy_inherited_members.H0.MR_CopyInheritedMembers_G_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from conversion operator `MR::CopyInheritedMembers::G::operator int`.
     *
     * Calls `MR_CopyInheritedMembers_G_ConvertTo_int()`.
     */
    public int convertTo_int()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_copy_inherited_members.H0.MR_CopyInheritedMembers_G_ConvertTo_int.invokeExact(rawPointer());
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
     * Generated from method `MR::CopyInheritedMembers::G::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CopyInheritedMembers_G_AssignFromAnother()`.
     */
    public mrbind_test.mr.copyinheritedmembers.G assignFromAnother(mrbind_test.mr.copyinheritedmembers.G _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_copy_inherited_members.H0.MR_CopyInheritedMembers_G_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            java.lang.Object __owner = this;
            return new mrbind_test.mr.copyinheritedmembers.G(__ret, false, __owner);
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
     * Generated from method `MR::CopyInheritedMembers::G::Method`.
     *
     * Calls `MR_CopyInheritedMembers_G_Method()`.
     */
    public void Method()
    {
        try
        {
            mrbind_test.ffi.MR.test_copy_inherited_members.H0.MR_CopyInheritedMembers_G_Method.invokeExact(rawPointer());
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
     * Generated from method `MR::CopyInheritedMembers::G::StaticFunc`.
     *
     * Calls `MR_CopyInheritedMembers_G_StaticFunc()`.
     */
    public static void StaticFunc()
    {
        try
        {
            mrbind_test.ffi.MR.test_copy_inherited_members.H0.MR_CopyInheritedMembers_G_StaticFunc.invokeExact();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CopyInheritedMembers::G` named `StaticField`.
     *
     * Calls `MR_CopyInheritedMembers_G_Get_StaticField()`.
     */
    public static int StaticField()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_copy_inherited_members.H0.MR_CopyInheritedMembers_G_Get_StaticField.invokeExact();
            return __ret.reinterpret(4).get(java.lang.foreign.ValueLayout.JAVA_INT, 0);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Modifies a member variable of class `MR::CopyInheritedMembers::G` named `StaticField`.
     *
     * Calls `MR_CopyInheritedMembers_G_Set_StaticField()`.
     */
    public static void setStaticField(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_copy_inherited_members.H0.MR_CopyInheritedMembers_G_Set_StaticField.invokeExact(value);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CopyInheritedMembers::G` named `Field`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CopyInheritedMembers_G_Get_Field()`.
     */
    public int Field()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_copy_inherited_members.H0.MR_CopyInheritedMembers_G_Get_Field.invokeExact(rawPointer());
            return __ret.reinterpret(4).get(java.lang.foreign.ValueLayout.JAVA_INT, 0);
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
     * Modifies a member variable of class `MR::CopyInheritedMembers::G` named `Field`.
     *
     * Calls `MR_CopyInheritedMembers_G_Set_Field()`.
     */
    public void setField(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_copy_inherited_members.H0.MR_CopyInheritedMembers_G_Set_Field.invokeExact(rawPointer(), value);
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
