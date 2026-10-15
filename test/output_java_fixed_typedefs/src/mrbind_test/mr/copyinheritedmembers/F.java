package mrbind_test.mr.copyinheritedmembers;

/**
 * Generated from class `MR::CopyInheritedMembers::F`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::D`
 *     `MR::CopyInheritedMembers::A`
 *   Indirect: (non-virtual)
 *     `MR::CopyInheritedMembers::B`
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class F extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public F(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? F::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_copy_inherited_members.H0.MR_CopyInheritedMembers_F_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CopyInheritedMembers_F_DefaultConstruct()`.
     */
    public F()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_copy_inherited_members.H0.MR_CopyInheritedMembers_F_DefaultConstruct.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::CopyInheritedMembers::F::F`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CopyInheritedMembers_F_ConstructFromAnother()`.
     */
    public F(mrbind_test.mr.copyinheritedmembers.F _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.copyinheritedmembers.F _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_copy_inherited_members.H0.MR_CopyInheritedMembers_F_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::CopyInheritedMembers::F::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CopyInheritedMembers_F_AssignFromAnother()`.
     */
    public mrbind_test.mr.copyinheritedmembers.F assignFromAnother(mrbind_test.mr.copyinheritedmembers.F _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_copy_inherited_members.H0.MR_CopyInheritedMembers_F_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.copyinheritedmembers.F(__ret, false, __owner);
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

    /** Upcasts to the base class `MR::CopyInheritedMembers::B`. The result refers to this object.
     *
     * Calls `MR_CopyInheritedMembers_F_MutableUpcastTo_MR_CopyInheritedMembers_B()`. */
    public mrbind_test.mr.copyinheritedmembers.B upcastToB()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_copy_inherited_members.H0.MR_CopyInheritedMembers_F_MutableUpcastTo_MR_CopyInheritedMembers_B.invokeExact(rawPointer());
            return new mrbind_test.mr.copyinheritedmembers.B(__ret, false, this);
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

    /** Static downcast from the base class `MR::CopyInheritedMembers::B`. Undefined behavior if the object isn't actually a `F`. The result refers to `object`.
     *
     * Calls `MR_CopyInheritedMembers_F_MutableStaticDowncastFrom_MR_CopyInheritedMembers_B()`. */
    public static mrbind_test.mr.copyinheritedmembers.F staticDowncastFromB(mrbind_test.mr.copyinheritedmembers.B object)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_copy_inherited_members.H0.MR_CopyInheritedMembers_F_MutableStaticDowncastFrom_MR_CopyInheritedMembers_B.invokeExact(mrbind_test.Ffi.ptrNonNull(object, "object"));
            return new mrbind_test.mr.copyinheritedmembers.F(__ret, false, object);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(object);
        }
    }

    /** Upcasts to the base class `MR::CopyInheritedMembers::D`. The result refers to this object.
     *
     * Calls `MR_CopyInheritedMembers_F_MutableUpcastTo_MR_CopyInheritedMembers_D()`. */
    public mrbind_test.mr.copyinheritedmembers.D upcastToD()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_copy_inherited_members.H0.MR_CopyInheritedMembers_F_MutableUpcastTo_MR_CopyInheritedMembers_D.invokeExact(rawPointer());
            return new mrbind_test.mr.copyinheritedmembers.D(__ret, false, this);
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

    /** Static downcast from the base class `MR::CopyInheritedMembers::D`. Undefined behavior if the object isn't actually a `F`. The result refers to `object`.
     *
     * Calls `MR_CopyInheritedMembers_F_MutableStaticDowncastFrom_MR_CopyInheritedMembers_D()`. */
    public static mrbind_test.mr.copyinheritedmembers.F staticDowncastFromD(mrbind_test.mr.copyinheritedmembers.D object)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_copy_inherited_members.H0.MR_CopyInheritedMembers_F_MutableStaticDowncastFrom_MR_CopyInheritedMembers_D.invokeExact(mrbind_test.Ffi.ptrNonNull(object, "object"));
            return new mrbind_test.mr.copyinheritedmembers.F(__ret, false, object);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(object);
        }
    }

    /** Upcasts to the base class `MR::CopyInheritedMembers::A`. The result refers to this object.
     *
     * Calls `MR_CopyInheritedMembers_F_MutableUpcastTo_MR_CopyInheritedMembers_A()`. */
    public mrbind_test.mr.copyinheritedmembers.A upcastToA()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_copy_inherited_members.H0.MR_CopyInheritedMembers_F_MutableUpcastTo_MR_CopyInheritedMembers_A.invokeExact(rawPointer());
            return new mrbind_test.mr.copyinheritedmembers.A(__ret, false, this);
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

    /** Static downcast from the base class `MR::CopyInheritedMembers::A`. Undefined behavior if the object isn't actually a `F`. The result refers to `object`.
     *
     * Calls `MR_CopyInheritedMembers_F_MutableStaticDowncastFrom_MR_CopyInheritedMembers_A()`. */
    public static mrbind_test.mr.copyinheritedmembers.F staticDowncastFromA(mrbind_test.mr.copyinheritedmembers.A object)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_copy_inherited_members.H0.MR_CopyInheritedMembers_F_MutableStaticDowncastFrom_MR_CopyInheritedMembers_A.invokeExact(mrbind_test.Ffi.ptrNonNull(object, "object"));
            return new mrbind_test.mr.copyinheritedmembers.F(__ret, false, object);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(object);
        }
    }
}
