package mrbind_test.mr.overloadedops;

/**
 * Member functions.
 * Generated from class `MR::OverloadedOps::A`.
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
            mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_A_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Since we have a custom assignment, we also need a custom copy ctor to avoid the deprecation warning.
     * Generated from constructor `MR::OverloadedOps::A::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_OverloadedOps_A_ConstructFromAnother()`.
     */
    public A(mrbind_test.mr.overloadedops.A _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.overloadedops.A _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_A_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Assign.
     * Generated from method `MR::OverloadedOps::A::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_OverloadedOps_A_AssignFromAnother()`.
     */
    public int assignFromAnother(mrbind_test.mr.overloadedops.A _other)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_A_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
            java.lang.ref.Reference.reachabilityFence(_other);
        }
    }

    /**
     * Unary plus.
     * Generated from method `MR::OverloadedOps::A::operator+`.
     *
     * Calls `MR_C_pos_MR_OverloadedOps_A()`.
     */
    public int opAdd()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_pos_MR_OverloadedOps_A.invokeExact(rawPointer());
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
     * Binary plus.
     * Generated from method `MR::OverloadedOps::A::operator+`.
     *
     * Calls `MR_C_add_MR_OverloadedOps_A()`.
     */
    public int opAdd(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_add_MR_OverloadedOps_A.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Unary minus.
     * Generated from method `MR::OverloadedOps::A::operator-`.
     *
     * Calls `MR_C_neg_MR_OverloadedOps_A()`.
     */
    public int opSub()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_neg_MR_OverloadedOps_A.invokeExact(rawPointer());
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
     * Binary minus.
     * Generated from method `MR::OverloadedOps::A::operator-`.
     *
     * Calls `MR_C_sub_MR_OverloadedOps_A()`.
     */
    public int opSub(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_sub_MR_OverloadedOps_A.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Dereference (unary star).
     * Generated from method `MR::OverloadedOps::A::operator*`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_C_deref_MR_OverloadedOps_A()`.
     */
    public int opMul()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_deref_MR_OverloadedOps_A.invokeExact(rawPointer());
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
     * Multiply (binary star).
     * Generated from method `MR::OverloadedOps::A::operator*`.
     *
     * Calls `MR_C_mul_MR_OverloadedOps_A()`.
     */
    public int opMul(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_mul_MR_OverloadedOps_A.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Divide.
     * Generated from method `MR::OverloadedOps::A::operator/`.
     *
     * Calls `MR_C_div_MR_OverloadedOps_A()`.
     */
    public int opDiv(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_div_MR_OverloadedOps_A.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Modulo.
     * Generated from method `MR::OverloadedOps::A::operator%`.
     *
     * Calls `MR_C_mod_MR_OverloadedOps_A()`.
     */
    public int opMod(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_mod_MR_OverloadedOps_A.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Bit xor.
     * Generated from method `MR::OverloadedOps::A::operator^`.
     *
     * Calls `MR_C_xor_MR_OverloadedOps_A()`.
     */
    public int opXor(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_xor_MR_OverloadedOps_A.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Bit and.
     * Generated from method `MR::OverloadedOps::A::operator&`.
     *
     * Calls `MR_C_bitand_MR_OverloadedOps_A()`.
     */
    public int opBitand(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_bitand_MR_OverloadedOps_A.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Bit or.
     * Generated from method `MR::OverloadedOps::A::operator|`.
     *
     * Calls `MR_C_bitor_MR_OverloadedOps_A()`.
     */
    public int opBitor(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_bitor_MR_OverloadedOps_A.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Bit negate.
     * Generated from method `MR::OverloadedOps::A::operator~`.
     *
     * Calls `MR_C_compl_MR_OverloadedOps_A()`.
     */
    public int opCompl()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_compl_MR_OverloadedOps_A.invokeExact(rawPointer());
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
     * Boolean negate.
     * Generated from method `MR::OverloadedOps::A::operator!`.
     *
     * Calls `MR_C_not_MR_OverloadedOps_A()`.
     */
    public int opNot()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_not_MR_OverloadedOps_A.invokeExact(rawPointer());
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
     * Less.
     * Generated from method `MR::OverloadedOps::A::operator<`.
     *
     * Calls `MR_C_less_MR_OverloadedOps_A()`.
     */
    public int opLess(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_less_MR_OverloadedOps_A.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Greater.
     * Generated from method `MR::OverloadedOps::A::operator>`.
     *
     * Calls `MR_C_greater_MR_OverloadedOps_A()`.
     */
    public int opGreater(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_greater_MR_OverloadedOps_A.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Plus assign.
     * Generated from method `MR::OverloadedOps::A::operator+=`.
     *
     * Calls `MR_OverloadedOps_A_add_assign()`.
     */
    public int add_assign(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_A_add_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Minus assign.
     * Generated from method `MR::OverloadedOps::A::operator-=`.
     *
     * Calls `MR_OverloadedOps_A_sub_assign()`.
     */
    public int sub_assign(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_A_sub_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Multiply assign.
     * Generated from method `MR::OverloadedOps::A::operator*=`.
     *
     * Calls `MR_OverloadedOps_A_mul_assign()`.
     */
    public int mul_assign(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_A_mul_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Divide assign.
     * Generated from method `MR::OverloadedOps::A::operator/=`.
     *
     * Calls `MR_OverloadedOps_A_div_assign()`.
     */
    public int div_assign(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_A_div_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Modulo assign.
     * Generated from method `MR::OverloadedOps::A::operator%=`.
     *
     * Calls `MR_OverloadedOps_A_mod_assign()`.
     */
    public int mod_assign(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_A_mod_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Bit xor assign.
     * Generated from method `MR::OverloadedOps::A::operator^=`.
     *
     * Calls `MR_OverloadedOps_A_xor_assign()`.
     */
    public int xor_assign(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_A_xor_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Bit and assign.
     * Generated from method `MR::OverloadedOps::A::operator&=`.
     *
     * Calls `MR_OverloadedOps_A_bitand_assign()`.
     */
    public int bitand_assign(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_A_bitand_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Bit or assign.
     * Generated from method `MR::OverloadedOps::A::operator|=`.
     *
     * Calls `MR_OverloadedOps_A_bitor_assign()`.
     */
    public int bitor_assign(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_A_bitor_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Left shift.
     * Generated from method `MR::OverloadedOps::A::operator<<`.
     *
     * Calls `MR_C_lshift_MR_OverloadedOps_A()`.
     */
    public int opLshift(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_lshift_MR_OverloadedOps_A.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Right shift.
     * Generated from method `MR::OverloadedOps::A::operator>>`.
     *
     * Calls `MR_C_rshift_MR_OverloadedOps_A()`.
     */
    public int opRshift(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_rshift_MR_OverloadedOps_A.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Left shift assign.
     * Generated from method `MR::OverloadedOps::A::operator<<=`.
     *
     * Calls `MR_OverloadedOps_A_lshift_assign()`.
     */
    public int lshift_assign(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_A_lshift_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Right shift assign.
     * Generated from method `MR::OverloadedOps::A::operator>>=`.
     *
     * Calls `MR_OverloadedOps_A_rshift_assign()`.
     */
    public int rshift_assign(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_A_rshift_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Equal.
     * Generated from method `MR::OverloadedOps::A::operator==`.
     *
     * Calls `MR_C_equal_MR_OverloadedOps_A()`.
     */
    public int opEqual(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_equal_MR_OverloadedOps_A.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Not equal.
     * Generated from method `MR::OverloadedOps::A::operator!=`.
     *
     * Calls `MR_C_not_equal_MR_OverloadedOps_A()`.
     */
    public int opNotEqual(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_not_equal_MR_OverloadedOps_A.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Less equal.
     * Generated from method `MR::OverloadedOps::A::operator<=`.
     *
     * Calls `MR_C_less_equal_MR_OverloadedOps_A()`.
     */
    public int opLessEqual(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_less_equal_MR_OverloadedOps_A.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Greater equal.
     * Generated from method `MR::OverloadedOps::A::operator>=`.
     *
     * Calls `MR_C_greater_equal_MR_OverloadedOps_A()`.
     */
    public int opGreaterEqual(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_greater_equal_MR_OverloadedOps_A.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Compare three way.
     * Generated from method `MR::OverloadedOps::A::operator<=>`.
     *
     * Calls `MR_C_compare_three_way_MR_OverloadedOps_A()`.
     */
    public int opCompareThreeWay(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_compare_three_way_MR_OverloadedOps_A.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * And.
     * Generated from method `MR::OverloadedOps::A::operator&&`.
     *
     * Calls `MR_C_and_MR_OverloadedOps_A()`.
     */
    public int opAnd(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_and_MR_OverloadedOps_A.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Or.
     * Generated from method `MR::OverloadedOps::A::operator||`.
     *
     * Calls `MR_C_or_MR_OverloadedOps_A()`.
     */
    public int opOr(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_or_MR_OverloadedOps_A.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Pre-increment.
     * Generated from method `MR::OverloadedOps::A::operator++`.
     *
     * Calls `MR_C_incr_MR_OverloadedOps_A()`.
     */
    public int opIncr()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_incr_MR_OverloadedOps_A.invokeExact(rawPointer());
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
     * Post-increment.
     * Generated from method `MR::OverloadedOps::A::operator++`.
     *
     * Calls `MR_C_post_incr_MR_OverloadedOps_A()`.
     */
    public int opPostIncr()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_post_incr_MR_OverloadedOps_A.invokeExact(rawPointer());
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
     * Pre-decrement.
     * Generated from method `MR::OverloadedOps::A::operator--`.
     *
     * Calls `MR_C_decr_MR_OverloadedOps_A()`.
     */
    public int opDecr()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_decr_MR_OverloadedOps_A.invokeExact(rawPointer());
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
     * Post-decrement.
     * Generated from method `MR::OverloadedOps::A::operator--`.
     *
     * Calls `MR_C_post_decr_MR_OverloadedOps_A()`.
     */
    public int opPostDecr()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_post_decr_MR_OverloadedOps_A.invokeExact(rawPointer());
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
     * Comma.
     * Generated from method `MR::OverloadedOps::A::operator,`.
     *
     * Calls `MR_C_comma_MR_OverloadedOps_A()`.
     */
    public int opComma(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_C_comma_MR_OverloadedOps_A.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Arrow star.
     * Generated from method `MR::OverloadedOps::A::operator->*`.
     *
     * Calls `MR_OverloadedOps_A_arrow_star()`.
     */
    public int arrow_star(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_A_arrow_star.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Arrow.
     * Generated from method `MR::OverloadedOps::A::operator->`.
     *
     * Calls `MR_OverloadedOps_A_arrow()`.
     */
    public int arrow()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_A_arrow.invokeExact(rawPointer());
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
     * Function call.
     * Generated from method `MR::OverloadedOps::A::operator()`.
     *
     * Calls `MR_OverloadedOps_A_call()`.
     */
    public int call(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_A_call.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /**
     * Indexing.
     * Generated from method `MR::OverloadedOps::A::operator[]`.
     *
     * Calls `MR_OverloadedOps_A_index()`.
     */
    public int index(mrbind_test.mr.overloadedops.A _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_overloaded_operators.H0.MR_OverloadedOps_A_index.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }
}
