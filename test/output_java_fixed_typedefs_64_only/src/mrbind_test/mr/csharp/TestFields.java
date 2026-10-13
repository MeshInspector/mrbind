package mrbind_test.mr.csharp;

/**
 * Generated from class `MR::CSharp::TestFields`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class TestFields extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public TestFields(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? TestFields::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestFields_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::TestFields::TestFields`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_TestFields_ConstructFromAnother()`.
     */
    public TestFields(mrbind_test.mr.csharp.TestFields _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.csharp.TestFields _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestFields_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Constructs `MR::CSharp::TestFields` elementwise.
     * The reference to the parameter `i_ref` might be preserved in the constructed object.
     * The reference to the parameter `const_i_ref` might be preserved in the constructed object.
     * The reference to the parameter `s` might be preserved in the constructed object.
     * The reference to the parameter `const_s` might be preserved in the constructed object.
     * The reference to the parameter `s_ref` might be preserved in the constructed object.
     * The reference to the parameter `const_s_ref` might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_TestFields_ConstructFrom()`. Some types are raw C types, see the C bindings for the details.
     */
    public TestFields(int i, int const_i, java.lang.foreign.MemorySegment i_ref, int const_i_ref, java.lang.String s, java.lang.String const_s, mrbind_test.mr.cs.std_string s_ref, java.lang.String const_s_ref)
    {
        this(__ctor_constructFrom(i, const_i, i_ref, const_i_ref, s, const_s, s_ref, const_s_ref), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFrom(int i, int const_i, java.lang.foreign.MemorySegment i_ref, int const_i_ref, java.lang.String s, java.lang.String const_s, mrbind_test.mr.cs.std_string s_ref, java.lang.String const_s_ref)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            java.lang.foreign.MemorySegment __str_s = mrbind_test.Ffi.utf8(__arena, java.util.Objects.requireNonNull(s, "s"));
            java.lang.foreign.MemorySegment __str_const_s = mrbind_test.Ffi.utf8(__arena, java.util.Objects.requireNonNull(const_s, "const_s"));
            java.lang.foreign.MemorySegment __str_const_s_ref = mrbind_test.Ffi.utf8(__arena, java.util.Objects.requireNonNull(const_s_ref, "const_s_ref"));
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestFields_ConstructFrom.invokeExact(i, const_i, i_ref, mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_INT, const_i_ref), __str_s, mrbind_test.Ffi.end(__str_s), __str_const_s, mrbind_test.Ffi.end(__str_const_s), mrbind_test.Ffi.ptrNonNull(s_ref, "s_ref"), __str_const_s_ref, mrbind_test.Ffi.end(__str_const_s_ref));
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(s_ref);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_i`.
     *
     * Calls `MR_CSharp_TestFields_Get_static_i()`.
     */
    public static int static_i()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestFields_Get_static_i.invokeExact();
            return __ret.reinterpret(4).get(java.lang.foreign.ValueLayout.JAVA_INT, 0);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Modifies a member variable of class `MR::CSharp::TestFields` named `static_i`.
     *
     * Calls `MR_CSharp_TestFields_Set_static_i()`.
     */
    public static void setStatic_i(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestFields_Set_static_i.invokeExact(value);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_const_i`.
     *
     * Calls `MR_CSharp_TestFields_Get_static_const_i()`.
     */
    public static int static_const_i()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestFields_Get_static_const_i.invokeExact();
            return __ret.reinterpret(4).get(java.lang.foreign.ValueLayout.JAVA_INT, 0);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_i_ref`.
     *
     * Calls `MR_CSharp_TestFields_Get_static_i_ref()`. Some types are raw C types, see the C bindings for the details.
     */
    public static java.lang.foreign.MemorySegment static_i_ref()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestFields_Get_static_i_ref.invokeExact();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_const_i_ref`.
     *
     * Calls `MR_CSharp_TestFields_Get_static_const_i_ref()`.
     */
    public static int static_const_i_ref()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestFields_Get_static_const_i_ref.invokeExact();
            return __ret.reinterpret(4).get(java.lang.foreign.ValueLayout.JAVA_INT, 0);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_s`.
     *
     * Calls `MR_CSharp_TestFields_Get_static_s()`.
     */
    public static mrbind_test.mr.cs.std_string static_s()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestFields_Get_static_s.invokeExact();
            java.lang.Object __owner = null;
            return new mrbind_test.mr.cs.std_string(__ret, false, __owner);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Modifies a member variable of class `MR::CSharp::TestFields` named `static_s`.
     * The reference to the parameter `value` might be preserved in this object in element `static_s`.
     *
     * Calls `MR_CSharp_TestFields_Set_static_s()`.
     */
    public static void setStatic_s(java.lang.String value)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            java.lang.foreign.MemorySegment __str_value = mrbind_test.Ffi.utf8(__arena, java.util.Objects.requireNonNull(value, "value"));
            mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestFields_Set_static_s.invokeExact(__str_value, mrbind_test.Ffi.end(__str_value));
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_const_s`.
     *
     * Calls `MR_CSharp_TestFields_Get_static_const_s()`.
     */
    public static mrbind_test.mr.cs.std_string static_const_s()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestFields_Get_static_const_s.invokeExact();
            java.lang.Object __owner = null;
            return new mrbind_test.mr.cs.std_string(__ret, false, __owner);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_s_ref`.
     *
     * Calls `MR_CSharp_TestFields_Get_static_s_ref()`.
     */
    public static mrbind_test.mr.cs.std_string static_s_ref()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestFields_Get_static_s_ref.invokeExact();
            java.lang.Object __owner = null;
            return new mrbind_test.mr.cs.std_string(__ret, false, __owner);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_const_s_ref`.
     *
     * Calls `MR_CSharp_TestFields_Get_static_const_s_ref()`.
     */
    public static mrbind_test.mr.cs.std_string static_const_s_ref()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestFields_Get_static_const_s_ref.invokeExact();
            java.lang.Object __owner = null;
            return new mrbind_test.mr.cs.std_string(__ret, false, __owner);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * < Test same-line documentation comment.
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `i`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestFields_Get_i()`.
     */
    public int i()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestFields_Get_i.invokeExact(rawPointer());
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
     * < Test same-line documentation comment.
     * Modifies a member variable of class `MR::CSharp::TestFields` named `i`.
     *
     * Calls `MR_CSharp_TestFields_Set_i()`.
     */
    public void setI(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestFields_Set_i.invokeExact(rawPointer(), value);
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
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `const_i`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestFields_Get_const_i()`.
     */
    public int const_i()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestFields_Get_const_i.invokeExact(rawPointer());
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
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `i_ref`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestFields_Get_i_ref()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment i_ref()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestFields_Get_i_ref.invokeExact(rawPointer());
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
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `const_i_ref`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestFields_Get_const_i_ref()`.
     */
    public int const_i_ref()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestFields_Get_const_i_ref.invokeExact(rawPointer());
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
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `s`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestFields_Get_s()`.
     */
    public mrbind_test.mr.cs.std_string s()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestFields_Get_s.invokeExact(rawPointer());
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
     * Modifies a member variable of class `MR::CSharp::TestFields` named `s`.
     * The reference to the parameter `value` might be preserved in this object in element `s`.
     *
     * Calls `MR_CSharp_TestFields_Set_s()`.
     */
    public void setS(java.lang.String value)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            java.lang.foreign.MemorySegment __str_value = mrbind_test.Ffi.utf8(__arena, java.util.Objects.requireNonNull(value, "value"));
            mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestFields_Set_s.invokeExact(rawPointer(), __str_value, mrbind_test.Ffi.end(__str_value));
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
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `const_s`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestFields_Get_const_s()`.
     */
    public mrbind_test.mr.cs.std_string const_s()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestFields_Get_const_s.invokeExact(rawPointer());
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
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `s_ref`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestFields_Get_s_ref()`.
     */
    public mrbind_test.mr.cs.std_string s_ref()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestFields_Get_s_ref.invokeExact(rawPointer());
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
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `const_s_ref`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestFields_Get_const_s_ref()`.
     */
    public mrbind_test.mr.cs.std_string const_s_ref()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestFields_Get_const_s_ref.invokeExact(rawPointer());
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
}
