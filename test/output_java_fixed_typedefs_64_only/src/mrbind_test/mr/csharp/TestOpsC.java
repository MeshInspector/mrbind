package mrbind_test.mr.csharp;

/**
 * Generated from class `MR::CSharp::TestOpsC`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class TestOpsC extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public TestOpsC(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? TestOpsC::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestOpsC_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Generated from constructor `MR::CSharp::TestOpsC::TestOpsC`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_TestOpsC_ConstructFromAnother()`.
     */
    public TestOpsC(mrbind_test.mr.csharp.TestOpsC _other)
    {
        this(__ctor_constructFromAnother(_other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.csharp.TestOpsC _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestOpsC_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(_other, "_other"));
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
     * Generated from method `MR::CSharp::TestOpsC::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_TestOpsC_AssignFromAnother()`.
     */
    public mrbind_test.mr.csharp.TestOpsC assignFromAnother(mrbind_test.mr.csharp.TestOpsC _other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestOpsC_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_other, "_other"));
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.TestOpsC(__ret, false, __owner);
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
     * Generated from method `MR::CSharp::TestOpsC::operator+`.
     *
     * Calls `MR_C_pos_MR_CSharp_TestOpsC()`.
     */
    public void opAdd()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_C_pos_MR_CSharp_TestOpsC.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::TestOpsC::operator+`.
     *
     * Calls `MR_C_add_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    public void opAdd(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_C_add_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::TestOpsC::operator-`.
     *
     * Calls `MR_C_neg_MR_CSharp_TestOpsC()`.
     */
    public void opSub()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_C_neg_MR_CSharp_TestOpsC.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::TestOpsC::operator-`.
     *
     * Calls `MR_C_sub_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    public void opSub(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_C_sub_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::TestOpsC::operator*`.
     *
     * Calls `MR_C_deref_MR_CSharp_TestOpsC()`.
     */
    public void opMul()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_C_deref_MR_CSharp_TestOpsC.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::TestOpsC::operator*`.
     *
     * Calls `MR_C_mul_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    public void opMul(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_C_mul_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::TestOpsC::operator/`.
     *
     * Calls `MR_C_div_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    public void opDiv(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_C_div_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::TestOpsC::operator%`.
     *
     * Calls `MR_C_mod_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    public void opMod(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_C_mod_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::TestOpsC::operator^`.
     *
     * Calls `MR_C_xor_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    public void opXor(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_C_xor_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::TestOpsC::operator&`.
     *
     * Calls `MR_C_addressof_MR_CSharp_TestOpsC()`.
     */
    public void opBitand()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_C_addressof_MR_CSharp_TestOpsC.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::TestOpsC::operator&`.
     *
     * Calls `MR_C_bitand_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    public void opBitand(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_C_bitand_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::TestOpsC::operator|`.
     *
     * Calls `MR_C_bitor_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    public void opBitor(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_C_bitor_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::TestOpsC::operator~`.
     *
     * Calls `MR_C_compl_MR_CSharp_TestOpsC()`.
     */
    public void opCompl()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_C_compl_MR_CSharp_TestOpsC.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::TestOpsC::operator!`.
     *
     * Calls `MR_C_not_MR_CSharp_TestOpsC()`.
     */
    public void opNot()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_C_not_MR_CSharp_TestOpsC.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::TestOpsC::operator=`.
     *
     * Calls `MR_CSharp_TestOpsC_assign()`.
     */
    public void assign(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestOpsC_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::TestOpsC::operator+=`.
     *
     * Calls `MR_CSharp_TestOpsC_add_assign()`.
     */
    public void add_assign(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestOpsC_add_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::TestOpsC::operator-=`.
     *
     * Calls `MR_CSharp_TestOpsC_sub_assign()`.
     */
    public void sub_assign(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestOpsC_sub_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::TestOpsC::operator*=`.
     *
     * Calls `MR_CSharp_TestOpsC_mul_assign()`.
     */
    public void mul_assign(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestOpsC_mul_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::TestOpsC::operator/=`.
     *
     * Calls `MR_CSharp_TestOpsC_div_assign()`.
     */
    public void div_assign(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestOpsC_div_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::TestOpsC::operator%=`.
     *
     * Calls `MR_CSharp_TestOpsC_mod_assign()`.
     */
    public void mod_assign(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestOpsC_mod_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::TestOpsC::operator^=`.
     *
     * Calls `MR_CSharp_TestOpsC_xor_assign()`.
     */
    public void xor_assign(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestOpsC_xor_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::TestOpsC::operator&=`.
     *
     * Calls `MR_CSharp_TestOpsC_bitand_assign()`.
     */
    public void bitand_assign(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestOpsC_bitand_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::TestOpsC::operator|=`.
     *
     * Calls `MR_CSharp_TestOpsC_bitor_assign()`.
     */
    public void bitor_assign(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestOpsC_bitor_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::TestOpsC::operator<<`.
     *
     * Calls `MR_C_lshift_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    public void opLshift(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_C_lshift_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::TestOpsC::operator>>`.
     *
     * Calls `MR_C_rshift_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    public void opRshift(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_C_rshift_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::TestOpsC::operator<<=`.
     *
     * Calls `MR_CSharp_TestOpsC_lshift_assign()`.
     */
    public void lshift_assign(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestOpsC_lshift_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::TestOpsC::operator>>=`.
     *
     * Calls `MR_CSharp_TestOpsC_rshift_assign()`.
     */
    public void rshift_assign(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestOpsC_rshift_assign.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::TestOpsC::operator<=>`.
     *
     * Calls `MR_C_compare_three_way_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    public void opCompareThreeWay(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_C_compare_three_way_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::TestOpsC::operator&&`.
     *
     * Calls `MR_C_and_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    public void opAnd(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_C_and_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::TestOpsC::operator||`.
     *
     * Calls `MR_C_or_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    public void opOr(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_C_or_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::TestOpsC::operator,`.
     *
     * Calls `MR_C_comma_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    public void opComma(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_C_comma_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::TestOpsC::operator->*`.
     *
     * Calls `MR_CSharp_TestOpsC_arrow_star()`.
     */
    public void arrow_star(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestOpsC_arrow_star.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::TestOpsC::operator->`.
     *
     * Calls `MR_CSharp_TestOpsC_arrow()`.
     */
    public void arrow()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestOpsC_arrow.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::TestOpsC::operator()`.
     *
     * Calls `MR_CSharp_TestOpsC_call()`.
     */
    public void call(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestOpsC_call.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
     * Generated from method `MR::CSharp::TestOpsC::operator[]`.
     *
     * Calls `MR_CSharp_TestOpsC_index()`.
     */
    public void index(mrbind_test.mr.csharp.TestOpsA _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H6.MR_CSharp_TestOpsC_index.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
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
