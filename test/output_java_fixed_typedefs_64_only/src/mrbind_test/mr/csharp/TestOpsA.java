package mrbind_test.mr.csharp;

/**
 * Generated from class `MR::CSharp::TestOpsA`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class TestOpsA extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public TestOpsA(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? TestOpsA::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestOpsA_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::TestOpsA::TestOpsA`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_TestOpsA_ConstructFromAnother()`.
     */
    public TestOpsA(mrbind_test.mr.csharp.TestOpsA _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.csharp.TestOpsA _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestOpsA_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::CSharp::TestOpsA::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_TestOpsA_AssignFromAnother()`.
     */
    public int assignFromAnother(mrbind_test.mr.csharp.TestOpsA _other)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestOpsA_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::CSharp::TestOpsA::operator+`.
     *
     * Calls `MR_C_pos_MR_CSharp_TestOpsA()`.
     */
    public int opAdd()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_C_pos_MR_CSharp_TestOpsA.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::TestOpsA::operator+`.
     *
     * Calls `MR_C_add_MR_CSharp_TestOpsA()`.
     */
    public int opAdd(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_C_add_MR_CSharp_TestOpsA.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::TestOpsA::operator-`.
     *
     * Calls `MR_C_neg_MR_CSharp_TestOpsA()`.
     */
    public int opSub()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_C_neg_MR_CSharp_TestOpsA.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::TestOpsA::operator-`.
     *
     * Calls `MR_C_sub_MR_CSharp_TestOpsA()`.
     */
    public int opSub(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_C_sub_MR_CSharp_TestOpsA.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::TestOpsA::operator*`.
     *
     * Calls `MR_C_deref_MR_CSharp_TestOpsA()`.
     */
    public int opMul()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_C_deref_MR_CSharp_TestOpsA.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::TestOpsA::operator*`.
     *
     * Calls `MR_C_mul_MR_CSharp_TestOpsA()`.
     */
    public int opMul(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_C_mul_MR_CSharp_TestOpsA.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::TestOpsA::operator/`.
     *
     * Calls `MR_C_div_MR_CSharp_TestOpsA()`.
     */
    public int opDiv(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_C_div_MR_CSharp_TestOpsA.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::TestOpsA::operator%`.
     *
     * Calls `MR_C_mod_MR_CSharp_TestOpsA()`.
     */
    public int opMod(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_C_mod_MR_CSharp_TestOpsA.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::TestOpsA::operator^`.
     *
     * Calls `MR_C_xor_MR_CSharp_TestOpsA()`.
     */
    public int opXor(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_C_xor_MR_CSharp_TestOpsA.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::TestOpsA::operator&`.
     *
     * Calls `MR_C_addressof_MR_CSharp_TestOpsA()`.
     */
    public int opBitand()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_C_addressof_MR_CSharp_TestOpsA.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::TestOpsA::operator&`.
     *
     * Calls `MR_C_bitand_MR_CSharp_TestOpsA()`.
     */
    public int opBitand(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_C_bitand_MR_CSharp_TestOpsA.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::TestOpsA::operator|`.
     *
     * Calls `MR_C_bitor_MR_CSharp_TestOpsA()`.
     */
    public int opBitor(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_C_bitor_MR_CSharp_TestOpsA.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::TestOpsA::operator~`.
     *
     * Calls `MR_C_compl_MR_CSharp_TestOpsA()`.
     */
    public int opCompl()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_C_compl_MR_CSharp_TestOpsA.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::TestOpsA::operator!`.
     *
     * Calls `MR_C_not_MR_CSharp_TestOpsA()`.
     */
    public int opNot()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_C_not_MR_CSharp_TestOpsA.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::TestOpsA::operator+=`.
     *
     * Calls `MR_CSharp_TestOpsA_add_assign()`.
     */
    public int add_assign(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestOpsA_add_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::TestOpsA::operator-=`.
     *
     * Calls `MR_CSharp_TestOpsA_sub_assign()`.
     */
    public int sub_assign(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestOpsA_sub_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::TestOpsA::operator*=`.
     *
     * Calls `MR_CSharp_TestOpsA_mul_assign()`.
     */
    public int mul_assign(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestOpsA_mul_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::TestOpsA::operator/=`.
     *
     * Calls `MR_CSharp_TestOpsA_div_assign()`.
     */
    public int div_assign(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestOpsA_div_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::TestOpsA::operator%=`.
     *
     * Calls `MR_CSharp_TestOpsA_mod_assign()`.
     */
    public int mod_assign(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestOpsA_mod_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::TestOpsA::operator^=`.
     *
     * Calls `MR_CSharp_TestOpsA_xor_assign()`.
     */
    public int xor_assign(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestOpsA_xor_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::TestOpsA::operator&=`.
     *
     * Calls `MR_CSharp_TestOpsA_bitand_assign()`.
     */
    public int bitand_assign(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestOpsA_bitand_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::TestOpsA::operator|=`.
     *
     * Calls `MR_CSharp_TestOpsA_bitor_assign()`.
     */
    public int bitor_assign(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestOpsA_bitor_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::TestOpsA::operator<<`.
     *
     * Calls `MR_C_lshift_MR_CSharp_TestOpsA()`.
     */
    public int opLshift(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_C_lshift_MR_CSharp_TestOpsA.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::TestOpsA::operator>>`.
     *
     * Calls `MR_C_rshift_MR_CSharp_TestOpsA()`.
     */
    public int opRshift(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_C_rshift_MR_CSharp_TestOpsA.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::TestOpsA::operator<<=`.
     *
     * Calls `MR_CSharp_TestOpsA_lshift_assign()`.
     */
    public int lshift_assign(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestOpsA_lshift_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::TestOpsA::operator>>=`.
     *
     * Calls `MR_CSharp_TestOpsA_rshift_assign()`.
     */
    public int rshift_assign(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestOpsA_rshift_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::TestOpsA::operator<=>`.
     *
     * Calls `MR_C_compare_three_way_MR_CSharp_TestOpsA()`.
     */
    public int opCompareThreeWay(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_C_compare_three_way_MR_CSharp_TestOpsA.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::TestOpsA::operator&&`.
     *
     * Calls `MR_C_and_MR_CSharp_TestOpsA()`.
     */
    public int opAnd(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_C_and_MR_CSharp_TestOpsA.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::TestOpsA::operator||`.
     *
     * Calls `MR_C_or_MR_CSharp_TestOpsA()`.
     */
    public int opOr(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_C_or_MR_CSharp_TestOpsA.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::TestOpsA::operator,`.
     *
     * Calls `MR_C_comma_MR_CSharp_TestOpsA()`.
     */
    public int opComma(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_C_comma_MR_CSharp_TestOpsA.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::TestOpsA::operator->*`.
     *
     * Calls `MR_CSharp_TestOpsA_arrow_star()`.
     */
    public int arrow_star(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestOpsA_arrow_star.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::TestOpsA::operator->`.
     *
     * Calls `MR_CSharp_TestOpsA_arrow()`.
     */
    public int arrow()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestOpsA_arrow.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::TestOpsA::operator()`.
     *
     * Calls `MR_CSharp_TestOpsA_call()`.
     */
    public int call(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestOpsA_call.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::TestOpsA::operator[]`.
     *
     * Calls `MR_CSharp_TestOpsA_index()`.
     */
    public int index(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H5.MR_CSharp_TestOpsA_index.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
