package mrbind_test.mr.includesforenumconstants;

/**
 * Generated from class `MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class A_MR_IncludesForEnumConstants_E_e1 extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public A_MR_IncludesForEnumConstants_E_e1(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? A_MR_IncludesForEnumConstants_E_e1::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_includes_for_enum_constants_2.H0.MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_DefaultConstruct()`.
     */
    public A_MR_IncludesForEnumConstants_E_e1()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_includes_for_enum_constants_2.H0.MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_DefaultConstruct.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_ConstructFromAnother()`.
     */
    public A_MR_IncludesForEnumConstants_E_e1(mrbind_test.mr.includesforenumconstants.A_MR_IncludesForEnumConstants_E_e1 _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.includesforenumconstants.A_MR_IncludesForEnumConstants_E_e1 _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_includes_for_enum_constants_2.H0.MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_AssignFromAnother()`.
     */
    public mrbind_test.mr.includesforenumconstants.A_MR_IncludesForEnumConstants_E_e1 assignFromAnother(mrbind_test.mr.includesforenumconstants.A_MR_IncludesForEnumConstants_E_e1 _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_includes_for_enum_constants_2.H0.MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.includesforenumconstants.A_MR_IncludesForEnumConstants_E_e1(__ret, false, __owner);
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
