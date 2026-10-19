package mrbind_test.mr.overloadsuffix;

/** The free functions of this namespace. */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class Functions
{
    private Functions() {}

    /**
     * Just normal stuff with no annotations:
     * Generated from function `MR::OverloadSuffix::foo_a`.
     *
     * Calls `MR_OverloadSuffix_foo_a_1_int32_t()`.
     */
    public static void foo_a(int _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_foo_a_1_int32_t.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::OverloadSuffix::foo_a`.
     *
     * Calls `MR_OverloadSuffix_foo_a_1_float()`.
     */
    public static void foo_a(float _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_foo_a_1_float.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::OverloadSuffix::foo_a`.
     *
     * Calls `MR_OverloadSuffix_foo_a_2()`.
     */
    public static void foo_a(int _1, int _2)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_foo_a_2.invokeExact(_1, _2);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::OverloadSuffix::bar_a`.
     *
     * Calls `MR_OverloadSuffix_bar_a_int32_t()`.
     */
    public static void bar_a(int _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_bar_a_int32_t.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::OverloadSuffix::bar_a`.
     *
     * Calls `MR_OverloadSuffix_bar_a_float()`.
     */
    public static void bar_a(float _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_bar_a_float.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::OverloadSuffix::baz_a`.
     *
     * Calls `MR_OverloadSuffix_baz_a_1()`.
     */
    public static void baz_a(int _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_baz_a_1.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::OverloadSuffix::baz_a`.
     *
     * Calls `MR_OverloadSuffix_baz_a_2()`.
     */
    public static void baz_a(int _1, int _2)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_baz_a_2.invokeExact(_1, _2);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::OverloadSuffix::operator+`.
     *
     * Calls `MR_C_pos_MR_OverloadSuffix_A_ref()`.
     */
    public static void opPos_MR_OverloadSuffix_A_ref(mrbind_test.mr.overloadsuffix.A _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_C_pos_MR_OverloadSuffix_A_ref.invokeExact(mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Generated from function `MR::OverloadSuffix::operator+`.
     *
     * Calls `MR_C_pos_const_MR_OverloadSuffix_A_ref()`.
     */
    public static void opPos_const_MR_OverloadSuffix_A_ref(mrbind_test.mr.overloadsuffix.A _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_C_pos_const_MR_OverloadSuffix_A_ref.invokeExact(mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * With empty suffix:
     * Generated from function `MR::OverloadSuffix::foo_b`.
     *
     * Calls `MR_OverloadSuffix_foo_b()`.
     */
    public static void foo_b(int _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_foo_b.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::OverloadSuffix::foo_b`.
     *
     * Calls `MR_OverloadSuffix_foo_b_1()`.
     */
    public static void foo_b(float _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_foo_b_1.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::OverloadSuffix::foo_b`.
     *
     * Calls `MR_OverloadSuffix_foo_b_2()`.
     */
    public static void foo_b(int _1, int _2)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_foo_b_2.invokeExact(_1, _2);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::OverloadSuffix::bar_b`.
     *
     * Calls `MR_OverloadSuffix_bar_b()`.
     */
    public static void bar_b(int _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_bar_b.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::OverloadSuffix::bar_b`.
     *
     * Calls `MR_OverloadSuffix_bar_b_float()`.
     */
    public static void bar_b(float _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_bar_b_float.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::OverloadSuffix::baz_b`.
     *
     * Calls `MR_OverloadSuffix_baz_b()`.
     */
    public static void baz_b(int _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_baz_b.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::OverloadSuffix::baz_b`.
     *
     * Calls `MR_OverloadSuffix_baz_b_int32_t()`.
     */
    public static void baz_b(int _1, int _2)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_baz_b_int32_t.invokeExact(_1, _2);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Currently has no effect on those.
     * Generated from function `MR::OverloadSuffix::operator+`.
     *
     * Calls `MR_C_pos_MR_OverloadSuffix_B_ref()`.
     */
    public static void opPos_MR_OverloadSuffix_B_ref(mrbind_test.mr.overloadsuffix.B _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_C_pos_MR_OverloadSuffix_B_ref.invokeExact(mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Generated from function `MR::OverloadSuffix::operator+`.
     *
     * Calls `MR_C_pos_const_MR_OverloadSuffix_B_ref()`.
     */
    public static void opPos_const_MR_OverloadSuffix_B_ref(mrbind_test.mr.overloadsuffix.B _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_C_pos_const_MR_OverloadSuffix_B_ref.invokeExact(mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * With custom suffix:
     * Generated from function `MR::OverloadSuffix::foo_c`.
     *
     * Calls `MR_OverloadSuffix_foo_c_blah()`.
     */
    public static void foo_c(int _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_foo_c_blah.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::OverloadSuffix::foo_c`.
     *
     * Calls `MR_OverloadSuffix_foo_c_1()`.
     */
    public static void foo_c(float _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_foo_c_1.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::OverloadSuffix::foo_c`.
     *
     * Calls `MR_OverloadSuffix_foo_c_2()`.
     */
    public static void foo_c(int _1, int _2)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_foo_c_2.invokeExact(_1, _2);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::OverloadSuffix::bar_c`.
     *
     * Calls `MR_OverloadSuffix_bar_c_blah()`.
     */
    public static void bar_c(int _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_bar_c_blah.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::OverloadSuffix::bar_c`.
     *
     * Calls `MR_OverloadSuffix_bar_c()`.
     */
    public static void bar_c(float _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_bar_c.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::OverloadSuffix::baz_c`.
     *
     * Calls `MR_OverloadSuffix_baz_c_blah()`.
     */
    public static void baz_c(int _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_baz_c_blah.invokeExact(_1);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Generated from function `MR::OverloadSuffix::baz_c`.
     *
     * Calls `MR_OverloadSuffix_baz_c()`.
     */
    public static void baz_c(int _1, int _2)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_OverloadSuffix_baz_c.invokeExact(_1, _2);
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Currently has no effect on those.
     * Generated from function `MR::OverloadSuffix::operator+`.
     *
     * Calls `MR_C_pos_MR_OverloadSuffix_C_ref()`.
     */
    public static void opPos_MR_OverloadSuffix_C_ref(mrbind_test.mr.overloadsuffix.C _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_C_pos_MR_OverloadSuffix_C_ref.invokeExact(mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Generated from function `MR::OverloadSuffix::operator+`.
     *
     * Calls `MR_C_pos_const_MR_OverloadSuffix_C_ref()`.
     */
    public static void opPos_const_MR_OverloadSuffix_C_ref(mrbind_test.mr.overloadsuffix.C _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_overload_suffix.H0.MR_C_pos_const_MR_OverloadSuffix_C_ref.invokeExact(mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }
}
