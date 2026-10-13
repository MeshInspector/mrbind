package mrbind_test.mr.overloads;

/** The free functions of this namespace. */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class Functions
{
    private Functions() {}

    /**
     * Generated from function `MR::Overloads::a`.
     *
     * Calls `MR_Overloads_a_1()`.
     */
    public static void a(int _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overloads.H0.MR_Overloads_a_1.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::Overloads::a`.
     *
     * Calls `MR_Overloads_a_2()`.
     */
    public static void a(int _1, int _2)
    {
        try
        {
            mrbind_test.ffi.MR.test_overloads.H0.MR_Overloads_a_2.invokeExact(_1, _2);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::Overloads::b<int32_t>`.
     *
     * Calls `MR_Overloads_b_int32_t()`.
     */
    public static void b_int32_t()
    {
        try
        {
            mrbind_test.ffi.MR.test_overloads.H0.MR_Overloads_b_int32_t.invokeExact();
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::Overloads::b<float>`.
     *
     * Calls `MR_Overloads_b_float()`.
     */
    public static void b_float()
    {
        try
        {
            mrbind_test.ffi.MR.test_overloads.H0.MR_Overloads_b_float.invokeExact();
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::Overloads::c`.
     *
     * Calls `MR_Overloads_c_int32_t()`.
     */
    public static void c(int _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overloads.H0.MR_Overloads_c_int32_t.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::Overloads::c`.
     *
     * Calls `MR_Overloads_c_float()`.
     */
    public static void c(float _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overloads.H0.MR_Overloads_c_float.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::Overloads::d`.
     *
     * Calls `MR_Overloads_d_int32_t()`.
     */
    public static void d(byte _1, int _2, byte _3)
    {
        try
        {
            mrbind_test.ffi.MR.test_overloads.H0.MR_Overloads_d_int32_t.invokeExact(_1, _2, _3);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::Overloads::d`.
     *
     * Calls `MR_Overloads_d_float()`.
     */
    public static void d(byte _1, float _2, byte _3)
    {
        try
        {
            mrbind_test.ffi.MR.test_overloads.H0.MR_Overloads_d_float.invokeExact(_1, _2, _3);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::Overloads::e`.
     *
     * Calls `MR_Overloads_e_const_int32_t_ref()`. Some types are raw C types, see the C bindings for the details.
     */
    public static void e(int _1, java.lang.foreign.MemorySegment _2)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            mrbind_test.ffi.MR.test_overloads.H0.MR_Overloads_e_const_int32_t_ref.invokeExact(mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_INT, _1), _2);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::Overloads::e`.
     *
     * Calls `MR_Overloads_e_int32_t_rvalue_ref_int32_t()`. Some types are raw C types, see the C bindings for the details.
     */
    public static void e_int32_t_rvalue_ref_int32_t(java.lang.foreign.MemorySegment _1, java.lang.foreign.MemorySegment _2)
    {
        try
        {
            mrbind_test.ffi.MR.test_overloads.H0.MR_Overloads_e_int32_t_rvalue_ref_int32_t.invokeExact(_1, _2);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::Overloads::e`.
     *
     * Calls `MR_Overloads_e_int32_t_rvalue_ref_float()`. Some types are raw C types, see the C bindings for the details.
     */
    public static void e_int32_t_rvalue_ref_float(java.lang.foreign.MemorySegment _1, java.lang.foreign.MemorySegment _2)
    {
        try
        {
            mrbind_test.ffi.MR.test_overloads.H0.MR_Overloads_e_int32_t_rvalue_ref_float.invokeExact(_1, _2);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * This is a fun testcase. Here we must not omit cvref on the first parameter, even if it partially helps with disambiguation,
     *   because that ultimately leads to an ambiguity.
     * So we can only omit cvref if each function has cvref in that parameter).
     * Generated from function `MR::Overloads::f`.
     *
     * Calls `MR_Overloads_f_float()`.
     */
    public static void f(float _1, int _2)
    {
        try
        {
            mrbind_test.ffi.MR.test_overloads.H0.MR_Overloads_f_float.invokeExact(_1, _2);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::Overloads::f`.
     *
     * Calls `MR_Overloads_f_int32_t_rvalue_ref()`. Some types are raw C types, see the C bindings for the details.
     */
    public static void f(java.lang.foreign.MemorySegment _1, float _2)
    {
        try
        {
            mrbind_test.ffi.MR.test_overloads.H0.MR_Overloads_f_int32_t_rvalue_ref.invokeExact(_1, _2);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::Overloads::f`.
     *
     * Calls `MR_Overloads_f_const_int32_t_ref()`.
     */
    public static void f(int _1, float _2)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            mrbind_test.ffi.MR.test_overloads.H0.MR_Overloads_f_const_int32_t_ref.invokeExact(mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_INT, _1), _2);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }
}
