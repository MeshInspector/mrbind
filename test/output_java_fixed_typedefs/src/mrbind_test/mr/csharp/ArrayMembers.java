package mrbind_test.mr.csharp;

/**
 * Test various array members.
 * Generated from class `MR::CSharp::ArrayMembers`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class ArrayMembers extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public ArrayMembers(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? ArrayMembers::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_ArrayMembers_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_ArrayMembers_DefaultConstruct()`.
     */
    public ArrayMembers()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_ArrayMembers_DefaultConstruct.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::ArrayMembers::ArrayMembers`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_ArrayMembers_ConstructFromAnother()`.
     */
    public ArrayMembers(mrbind_test.mr.csharp.ArrayMembers _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.csharp.ArrayMembers _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_ArrayMembers_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `i`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ArrayMembers_Get_i()`.
     */
    public int i()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_ArrayMembers_Get_i.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
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
     * Modifies a member variable of class `MR::CSharp::ArrayMembers` named `i`.
     * The reference to the parameter `value` might be preserved in this object in element `i`.
     *
     * Calls `MR_CSharp_ArrayMembers_Set_i()`.
     */
    public void setI(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_ArrayMembers_Set_i.invokeExact(rawPointer(), value);
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
     * Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `ia`. This is a pointer to the first element of an array.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ArrayMembers_Get_ia()`.
     */
    public int ia()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_ArrayMembers_Get_ia.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
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
     * Returns the size of the array member of class `MR::CSharp::ArrayMembers` named `ia`. The size is `2`.
     *
     * Calls `MR_CSharp_ArrayMembers_GetSize_ia()`.
     */
    public static long iaSize()
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_ArrayMembers_GetSize_ia.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `iaa`. This is a pointer to the first element of an array.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ArrayMembers_Get_iaa()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment iaa()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_ArrayMembers_Get_iaa.invokeExact(rawPointer());
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
     * Returns the size of the array member of class `MR::CSharp::ArrayMembers` named `iaa`. The size is `3`.
     *
     * Calls `MR_CSharp_ArrayMembers_GetSize_iaa()`.
     */
    public static long iaaSize()
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_ArrayMembers_GetSize_iaa.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `ci`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ArrayMembers_Get_ci()`.
     */
    public int ci()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_ArrayMembers_Get_ci.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
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
     * Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `cia`. This is a pointer to the first element of an array.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ArrayMembers_Get_cia()`.
     */
    public int cia()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_ArrayMembers_Get_cia.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
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
     * Returns the size of the array member of class `MR::CSharp::ArrayMembers` named `cia`. The size is `2`.
     *
     * Calls `MR_CSharp_ArrayMembers_GetSize_cia()`.
     */
    public static long ciaSize()
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_ArrayMembers_GetSize_cia.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `ciaa`. This is a pointer to the first element of an array.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ArrayMembers_Get_ciaa()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment ciaa()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_ArrayMembers_Get_ciaa.invokeExact(rawPointer());
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
     * Returns the size of the array member of class `MR::CSharp::ArrayMembers` named `ciaa`. The size is `3`.
     *
     * Calls `MR_CSharp_ArrayMembers_GetSize_ciaa()`.
     */
    public static long ciaaSize()
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_ArrayMembers_GetSize_ciaa.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `s`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ArrayMembers_Get_s()`.
     */
    public mrbind_test.mr.cs.std_string s()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_ArrayMembers_Get_s.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.cs.std_string(__ret, false, __owner);
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
     * Modifies a member variable of class `MR::CSharp::ArrayMembers` named `s`.
     * The reference to the parameter `value` might be preserved in this object in element `s`.
     *
     * Calls `MR_CSharp_ArrayMembers_Set_s()`.
     */
    public void setS(java.lang.String value)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            java.lang.foreign.MemorySegment __str_value = mrbind_test.Ffi.utf8(__arena, java.util.Objects.requireNonNull(value, "value"));
            mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_ArrayMembers_Set_s.invokeExact(rawPointer(), __str_value, mrbind_test.Ffi.end(__str_value));
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
     * Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `sa`. This is a pointer to the first element of an array.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ArrayMembers_Get_sa()`.
     */
    public mrbind_test.mr.cs.std_string sa()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_ArrayMembers_Get_sa.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.cs.std_string(__ret, false, __owner);
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
     * Returns the size of the array member of class `MR::CSharp::ArrayMembers` named `sa`. The size is `2`.
     *
     * Calls `MR_CSharp_ArrayMembers_GetSize_sa()`.
     */
    public static long saSize()
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_ArrayMembers_GetSize_sa.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * std::string saa[3][4]; // The C generator doesn't support those yet. We'd need to expose them as flat arrays, with N size getters, I think?
     * Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `cs`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ArrayMembers_Get_cs()`.
     */
    public mrbind_test.mr.cs.std_string cs()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_ArrayMembers_Get_cs.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.cs.std_string(__ret, false, __owner);
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
     * Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `csa`. This is a pointer to the first element of an array.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ArrayMembers_Get_csa()`.
     */
    public mrbind_test.mr.cs.std_string csa()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_ArrayMembers_Get_csa.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.cs.std_string(__ret, false, __owner);
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
     * Returns the size of the array member of class `MR::CSharp::ArrayMembers` named `csa`. The size is `2`.
     *
     * Calls `MR_CSharp_ArrayMembers_GetSize_csa()`.
     */
    public static long csaSize()
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.MR.test_csharp.H1.MR_CSharp_ArrayMembers_GetSize_csa.invokeExact();
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }
}
