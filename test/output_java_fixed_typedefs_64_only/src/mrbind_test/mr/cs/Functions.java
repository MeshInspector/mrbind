package mrbind_test.mr.cs;

/** The free functions of this namespace. */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class Functions
{
    private Functions() {}

    /**
     * Computes the signed difference between two const iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_vector_MR_A_const_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_vector_MR_A_const_iterator a, mrbind_test.mr.cs.std_vector_MR_A_const_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_vector_MR_A.H0.MR_C_sub_MR_C_std_vector_MR_A_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_vector_MR_A_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_vector_MR_A_const_iterator a, mrbind_test.mr.cs.std_vector_MR_A_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_MR_A.H0.MR_C_equal_MR_C_std_vector_MR_A_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Computes the signed difference between two mutable iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_vector_MR_A_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_vector_MR_A_iterator a, mrbind_test.mr.cs.std_vector_MR_A_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_vector_MR_A.H0.MR_C_sub_MR_C_std_vector_MR_A_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_vector_MR_A_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_vector_MR_A_iterator a, mrbind_test.mr.cs.std_vector_MR_A_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_MR_A.H0.MR_C_equal_MR_C_std_vector_MR_A_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Computes the signed difference between two const iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_vector_MR_SeparateA_const_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_vector_MR_SeparateA_const_iterator a, mrbind_test.mr.cs.std_vector_MR_SeparateA_const_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.AB.common.std_vector_MR_SeparateA.H0.MR_C_sub_MR_C_std_vector_MR_SeparateA_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_vector_MR_SeparateA_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_vector_MR_SeparateA_const_iterator a, mrbind_test.mr.cs.std_vector_MR_SeparateA_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.AB.common.std_vector_MR_SeparateA.H0.MR_C_equal_MR_C_std_vector_MR_SeparateA_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Computes the signed difference between two mutable iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_vector_MR_SeparateA_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_vector_MR_SeparateA_iterator a, mrbind_test.mr.cs.std_vector_MR_SeparateA_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.AB.common.std_vector_MR_SeparateA.H0.MR_C_sub_MR_C_std_vector_MR_SeparateA_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_vector_MR_SeparateA_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_vector_MR_SeparateA_iterator a, mrbind_test.mr.cs.std_vector_MR_SeparateA_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.AB.common.std_vector_MR_SeparateA.H0.MR_C_equal_MR_C_std_vector_MR_SeparateA_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Computes the signed difference between two const iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_vector_MR_SeparateB_const_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_vector_MR_SeparateB_const_iterator a, mrbind_test.mr.cs.std_vector_MR_SeparateB_const_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.AB.common.std_vector_MR_SeparateB.H0.MR_C_sub_MR_C_std_vector_MR_SeparateB_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_vector_MR_SeparateB_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_vector_MR_SeparateB_const_iterator a, mrbind_test.mr.cs.std_vector_MR_SeparateB_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.AB.common.std_vector_MR_SeparateB.H0.MR_C_equal_MR_C_std_vector_MR_SeparateB_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Computes the signed difference between two mutable iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_vector_MR_SeparateB_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_vector_MR_SeparateB_iterator a, mrbind_test.mr.cs.std_vector_MR_SeparateB_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.AB.common.std_vector_MR_SeparateB.H0.MR_C_sub_MR_C_std_vector_MR_SeparateB_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_vector_MR_SeparateB_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_vector_MR_SeparateB_iterator a, mrbind_test.mr.cs.std_vector_MR_SeparateB_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.AB.common.std_vector_MR_SeparateB.H0.MR_C_equal_MR_C_std_vector_MR_SeparateB_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Computes the signed difference between two const iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator a, mrbind_test.mr.cs.std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.AB.common.std_vector_std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_sub_MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator a, mrbind_test.mr.cs.std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.AB.common.std_vector_std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_equal_MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Computes the signed difference between two mutable iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator a, mrbind_test.mr.cs.std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.AB.common.std_vector_std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_sub_MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator a, mrbind_test.mr.cs.std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.AB.common.std_vector_std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_equal_MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Computes the signed difference between two const iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_vector_MR_CSharp_ExposedLayout_const_iterator a, mrbind_test.mr.cs.std_vector_MR_CSharp_ExposedLayout_const_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_sub_MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_vector_MR_CSharp_ExposedLayout_const_iterator a, mrbind_test.mr.cs.std_vector_MR_CSharp_ExposedLayout_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_equal_MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Computes the signed difference between two mutable iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_vector_MR_CSharp_ExposedLayout_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_vector_MR_CSharp_ExposedLayout_iterator a, mrbind_test.mr.cs.std_vector_MR_CSharp_ExposedLayout_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_sub_MR_C_std_vector_MR_CSharp_ExposedLayout_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_vector_MR_CSharp_ExposedLayout_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_vector_MR_CSharp_ExposedLayout_iterator a, mrbind_test.mr.cs.std_vector_MR_CSharp_ExposedLayout_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_equal_MR_C_std_vector_MR_CSharp_ExposedLayout_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Returns the `stdout` stream.
     *
     * Calls `MR_C_GetStdCout()`.
     */
    public static mrbind_test.mr.cs.std_ostream GetStdCout()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.iostream.H0.MR_C_GetStdCout.invokeExact();
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = null;
            return new mrbind_test.mr.cs.std_ostream(__ret, __owner);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns the `stderr` stream, buffered.
     *
     * Calls `MR_C_GetStdCerr()`.
     */
    public static mrbind_test.mr.cs.std_ostream GetStdCerr()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.iostream.H0.MR_C_GetStdCerr.invokeExact();
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = null;
            return new mrbind_test.mr.cs.std_ostream(__ret, __owner);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns the `stderr` stream, unbuffered.
     *
     * Calls `MR_C_GetStdClog()`.
     */
    public static mrbind_test.mr.cs.std_ostream GetStdClog()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.iostream.H0.MR_C_GetStdClog.invokeExact();
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = null;
            return new mrbind_test.mr.cs.std_ostream(__ret, __owner);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Returns the `stdin` stream.
     *
     * Calls `MR_C_GetStdCin()`.
     */
    public static mrbind_test.mr.cs.std_istream GetStdCin()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.iostream.H0.MR_C_GetStdCin.invokeExact();
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = null;
            return new mrbind_test.mr.cs.std_istream(__ret, __owner);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Computes the signed difference between two const iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_vector_MR_CSharp_A_ptr_const_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_vector_MR_CSharp_A_ptr_const_iterator a, mrbind_test.mr.cs.std_vector_MR_CSharp_A_ptr_const_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_vector_MR_CSharp_A_ptr.H0.MR_C_sub_MR_C_std_vector_MR_CSharp_A_ptr_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_vector_MR_CSharp_A_ptr_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_vector_MR_CSharp_A_ptr_const_iterator a, mrbind_test.mr.cs.std_vector_MR_CSharp_A_ptr_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_MR_CSharp_A_ptr.H0.MR_C_equal_MR_C_std_vector_MR_CSharp_A_ptr_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Computes the signed difference between two mutable iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_vector_MR_CSharp_A_ptr_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_vector_MR_CSharp_A_ptr_iterator a, mrbind_test.mr.cs.std_vector_MR_CSharp_A_ptr_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_vector_MR_CSharp_A_ptr.H0.MR_C_sub_MR_C_std_vector_MR_CSharp_A_ptr_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_vector_MR_CSharp_A_ptr_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_vector_MR_CSharp_A_ptr_iterator a, mrbind_test.mr.cs.std_vector_MR_CSharp_A_ptr_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_MR_CSharp_A_ptr.H0.MR_C_equal_MR_C_std_vector_MR_CSharp_A_ptr_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Computes the signed difference between two const iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_vector_const_MR_CSharp_A_ptr_const_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_vector_const_MR_CSharp_A_ptr_const_iterator a, mrbind_test.mr.cs.std_vector_const_MR_CSharp_A_ptr_const_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_vector_const_MR_CSharp_A_ptr.H0.MR_C_sub_MR_C_std_vector_const_MR_CSharp_A_ptr_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_vector_const_MR_CSharp_A_ptr_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_vector_const_MR_CSharp_A_ptr_const_iterator a, mrbind_test.mr.cs.std_vector_const_MR_CSharp_A_ptr_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_const_MR_CSharp_A_ptr.H0.MR_C_equal_MR_C_std_vector_const_MR_CSharp_A_ptr_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Computes the signed difference between two mutable iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_vector_const_MR_CSharp_A_ptr_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_vector_const_MR_CSharp_A_ptr_iterator a, mrbind_test.mr.cs.std_vector_const_MR_CSharp_A_ptr_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_vector_const_MR_CSharp_A_ptr.H0.MR_C_sub_MR_C_std_vector_const_MR_CSharp_A_ptr_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_vector_const_MR_CSharp_A_ptr_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_vector_const_MR_CSharp_A_ptr_iterator a, mrbind_test.mr.cs.std_vector_const_MR_CSharp_A_ptr_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_const_MR_CSharp_A_ptr.H0.MR_C_equal_MR_C_std_vector_const_MR_CSharp_A_ptr_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_phmap_flat_hash_set_int_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.phmap.phmap_flat_hash_set_int_const_iterator a, mrbind_test.phmap.phmap_flat_hash_set_int_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.phmap_flat_hash_set_int.H0.MR_C_equal_MR_C_phmap_flat_hash_set_int_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_phmap_flat_hash_map_int_float_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.phmap.phmap_flat_hash_map_int_float_const_iterator a, mrbind_test.phmap.phmap_flat_hash_map_int_float_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.phmap_flat_hash_map_int_float.H0.MR_C_equal_MR_C_phmap_flat_hash_map_int_float_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_phmap_flat_hash_map_int_float_iterator()`.
     */
    public static boolean opEqual(mrbind_test.phmap.phmap_flat_hash_map_int_float_iterator a, mrbind_test.phmap.phmap_flat_hash_map_int_float_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.phmap_flat_hash_map_int_float.H0.MR_C_equal_MR_C_phmap_flat_hash_map_int_float_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_phmap_node_hash_set_int_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.phmap.phmap_node_hash_set_int_const_iterator a, mrbind_test.phmap.phmap_node_hash_set_int_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.phmap_node_hash_set_int.H0.MR_C_equal_MR_C_phmap_node_hash_set_int_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_phmap_node_hash_map_int_float_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.phmap.phmap_node_hash_map_int_float_const_iterator a, mrbind_test.phmap.phmap_node_hash_map_int_float_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.phmap_node_hash_map_int_float.H0.MR_C_equal_MR_C_phmap_node_hash_map_int_float_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_phmap_node_hash_map_int_float_iterator()`.
     */
    public static boolean opEqual(mrbind_test.phmap.phmap_node_hash_map_int_float_iterator a, mrbind_test.phmap.phmap_node_hash_map_int_float_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.phmap_node_hash_map_int_float.H0.MR_C_equal_MR_C_phmap_node_hash_map_int_float_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_phmap_parallel_flat_hash_set_int_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.phmap.phmap_parallel_flat_hash_set_int_const_iterator a, mrbind_test.phmap.phmap_parallel_flat_hash_set_int_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.phmap_parallel_flat_hash_set_int.H0.MR_C_equal_MR_C_phmap_parallel_flat_hash_set_int_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.phmap.phmap_parallel_flat_hash_map_int_float_const_iterator a, mrbind_test.phmap.phmap_parallel_flat_hash_map_int_float_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.phmap_parallel_flat_hash_map_int_float.H0.MR_C_equal_MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_phmap_parallel_flat_hash_map_int_float_iterator()`.
     */
    public static boolean opEqual(mrbind_test.phmap.phmap_parallel_flat_hash_map_int_float_iterator a, mrbind_test.phmap.phmap_parallel_flat_hash_map_int_float_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.phmap_parallel_flat_hash_map_int_float.H0.MR_C_equal_MR_C_phmap_parallel_flat_hash_map_int_float_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_phmap_parallel_node_hash_set_int_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.phmap.phmap_parallel_node_hash_set_int_const_iterator a, mrbind_test.phmap.phmap_parallel_node_hash_set_int_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.phmap_parallel_node_hash_set_int.H0.MR_C_equal_MR_C_phmap_parallel_node_hash_set_int_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_phmap_parallel_node_hash_map_int_float_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.phmap.phmap_parallel_node_hash_map_int_float_const_iterator a, mrbind_test.phmap.phmap_parallel_node_hash_map_int_float_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.phmap_parallel_node_hash_map_int_float.H0.MR_C_equal_MR_C_phmap_parallel_node_hash_map_int_float_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_phmap_parallel_node_hash_map_int_float_iterator()`.
     */
    public static boolean opEqual(mrbind_test.phmap.phmap_parallel_node_hash_map_int_float_iterator a, mrbind_test.phmap.phmap_parallel_node_hash_map_int_float_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.phmap_parallel_node_hash_map_int_float.H0.MR_C_equal_MR_C_phmap_parallel_node_hash_map_int_float_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_phmap_btree_set_int_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.phmap.phmap_btree_set_int_const_iterator a, mrbind_test.phmap.phmap_btree_set_int_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.phmap_btree_set_int.H0.MR_C_equal_MR_C_phmap_btree_set_int_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_phmap_btree_map_int_float_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.phmap.phmap_btree_map_int_float_const_iterator a, mrbind_test.phmap.phmap_btree_map_int_float_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.phmap_btree_map_int_float.H0.MR_C_equal_MR_C_phmap_btree_map_int_float_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_phmap_btree_map_int_float_iterator()`.
     */
    public static boolean opEqual(mrbind_test.phmap.phmap_btree_map_int_float_iterator a, mrbind_test.phmap.phmap_btree_map_int_float_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.phmap_btree_map_int_float.H0.MR_C_equal_MR_C_phmap_btree_map_int_float_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_phmap_btree_multiset_int_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.phmap.phmap_btree_multiset_int_const_iterator a, mrbind_test.phmap.phmap_btree_multiset_int_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.phmap_btree_multiset_int.H0.MR_C_equal_MR_C_phmap_btree_multiset_int_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_phmap_btree_multimap_int_float_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.phmap.phmap_btree_multimap_int_float_const_iterator a, mrbind_test.phmap.phmap_btree_multimap_int_float_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.phmap_btree_multimap_int_float.H0.MR_C_equal_MR_C_phmap_btree_multimap_int_float_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_phmap_btree_multimap_int_float_iterator()`.
     */
    public static boolean opEqual(mrbind_test.phmap.phmap_btree_multimap_int_float_iterator a, mrbind_test.phmap.phmap_btree_multimap_int_float_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.phmap_btree_multimap_int_float.H0.MR_C_equal_MR_C_phmap_btree_multimap_int_float_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Computes the signed difference between two const iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_vector_uint64_t_const_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_vector_uint64_t_const_iterator a, mrbind_test.mr.cs.std_vector_uint64_t_const_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_vector_uint64_t.H0.MR_C_sub_MR_C_std_vector_uint64_t_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_vector_uint64_t_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_vector_uint64_t_const_iterator a, mrbind_test.mr.cs.std_vector_uint64_t_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_uint64_t.H0.MR_C_equal_MR_C_std_vector_uint64_t_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Computes the signed difference between two mutable iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_vector_uint64_t_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_vector_uint64_t_iterator a, mrbind_test.mr.cs.std_vector_uint64_t_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_vector_uint64_t.H0.MR_C_sub_MR_C_std_vector_uint64_t_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_vector_uint64_t_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_vector_uint64_t_iterator a, mrbind_test.mr.cs.std_vector_uint64_t_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_uint64_t.H0.MR_C_equal_MR_C_std_vector_uint64_t_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Computes the signed difference between two const iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_vector_int64_t_const_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_vector_int64_t_const_iterator a, mrbind_test.mr.cs.std_vector_int64_t_const_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_vector_int64_t.H0.MR_C_sub_MR_C_std_vector_int64_t_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_vector_int64_t_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_vector_int64_t_const_iterator a, mrbind_test.mr.cs.std_vector_int64_t_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_int64_t.H0.MR_C_equal_MR_C_std_vector_int64_t_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Computes the signed difference between two mutable iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_vector_int64_t_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_vector_int64_t_iterator a, mrbind_test.mr.cs.std_vector_int64_t_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_vector_int64_t.H0.MR_C_sub_MR_C_std_vector_int64_t_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_vector_int64_t_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_vector_int64_t_iterator a, mrbind_test.mr.cs.std_vector_int64_t_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_int64_t.H0.MR_C_equal_MR_C_std_vector_int64_t_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Computes the signed difference between two const iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_vector_int_const_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_vector_int_const_iterator a, mrbind_test.mr.cs.std_vector_int_const_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_vector_int.H0.MR_C_sub_MR_C_std_vector_int_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_vector_int_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_vector_int_const_iterator a, mrbind_test.mr.cs.std_vector_int_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_int.H0.MR_C_equal_MR_C_std_vector_int_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Computes the signed difference between two mutable iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_vector_int_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_vector_int_iterator a, mrbind_test.mr.cs.std_vector_int_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_vector_int.H0.MR_C_sub_MR_C_std_vector_int_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_vector_int_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_vector_int_iterator a, mrbind_test.mr.cs.std_vector_int_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_int.H0.MR_C_equal_MR_C_std_vector_int_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Computes the signed difference between two const iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_deque_int_const_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_deque_int_const_iterator a, mrbind_test.mr.cs.std_deque_int_const_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_deque_int.H0.MR_C_sub_MR_C_std_deque_int_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_deque_int_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_deque_int_const_iterator a, mrbind_test.mr.cs.std_deque_int_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_deque_int.H0.MR_C_equal_MR_C_std_deque_int_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Computes the signed difference between two mutable iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_deque_int_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_deque_int_iterator a, mrbind_test.mr.cs.std_deque_int_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_deque_int.H0.MR_C_sub_MR_C_std_deque_int_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_deque_int_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_deque_int_iterator a, mrbind_test.mr.cs.std_deque_int_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_deque_int.H0.MR_C_equal_MR_C_std_deque_int_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_list_int_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_list_int_const_iterator a, mrbind_test.mr.cs.std_list_int_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_list_int.H0.MR_C_equal_MR_C_std_list_int_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_list_int_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_list_int_iterator a, mrbind_test.mr.cs.std_list_int_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_list_int.H0.MR_C_equal_MR_C_std_list_int_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_set_int_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_set_int_const_iterator a, mrbind_test.mr.cs.std_set_int_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_set_int.H0.MR_C_equal_MR_C_std_set_int_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_multiset_int_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_multiset_int_const_iterator a, mrbind_test.mr.cs.std_multiset_int_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_multiset_int.H0.MR_C_equal_MR_C_std_multiset_int_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_unordered_set_int_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_unordered_set_int_const_iterator a, mrbind_test.mr.cs.std_unordered_set_int_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_unordered_set_int.H0.MR_C_equal_MR_C_std_unordered_set_int_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_unordered_multiset_int_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_unordered_multiset_int_const_iterator a, mrbind_test.mr.cs.std_unordered_multiset_int_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_unordered_multiset_int.H0.MR_C_equal_MR_C_std_unordered_multiset_int_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_map_int_float_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_map_int_float_const_iterator a, mrbind_test.mr.cs.std_map_int_float_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_map_int_float.H0.MR_C_equal_MR_C_std_map_int_float_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_map_int_float_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_map_int_float_iterator a, mrbind_test.mr.cs.std_map_int_float_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_map_int_float.H0.MR_C_equal_MR_C_std_map_int_float_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_multimap_int_float_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_multimap_int_float_const_iterator a, mrbind_test.mr.cs.std_multimap_int_float_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_multimap_int_float.H0.MR_C_equal_MR_C_std_multimap_int_float_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_multimap_int_float_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_multimap_int_float_iterator a, mrbind_test.mr.cs.std_multimap_int_float_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_multimap_int_float.H0.MR_C_equal_MR_C_std_multimap_int_float_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_unordered_map_int_float_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_unordered_map_int_float_const_iterator a, mrbind_test.mr.cs.std_unordered_map_int_float_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_unordered_map_int_float.H0.MR_C_equal_MR_C_std_unordered_map_int_float_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_unordered_map_int_float_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_unordered_map_int_float_iterator a, mrbind_test.mr.cs.std_unordered_map_int_float_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_unordered_map_int_float.H0.MR_C_equal_MR_C_std_unordered_map_int_float_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_unordered_multimap_int_float_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_unordered_multimap_int_float_const_iterator a, mrbind_test.mr.cs.std_unordered_multimap_int_float_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_unordered_multimap_int_float.H0.MR_C_equal_MR_C_std_unordered_multimap_int_float_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_unordered_multimap_int_float_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_unordered_multimap_int_float_iterator a, mrbind_test.mr.cs.std_unordered_multimap_int_float_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_unordered_multimap_int_float.H0.MR_C_equal_MR_C_std_unordered_multimap_int_float_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_multiset_float_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_multiset_float_const_iterator a, mrbind_test.mr.cs.std_multiset_float_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_multiset_float.H0.MR_C_equal_MR_C_std_multiset_float_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_set_float_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_set_float_const_iterator a, mrbind_test.mr.cs.std_set_float_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_set_float.H0.MR_C_equal_MR_C_std_set_float_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Computes the signed difference between two const iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator a, mrbind_test.mr.cs.std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_sub_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator a, mrbind_test.mr.cs.std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_equal_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Computes the signed difference between two mutable iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_vector_MR_StdContainers_NonDefaultConstructible_iterator a, mrbind_test.mr.cs.std_vector_MR_StdContainers_NonDefaultConstructible_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_sub_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_vector_MR_StdContainers_NonDefaultConstructible_iterator a, mrbind_test.mr.cs.std_vector_MR_StdContainers_NonDefaultConstructible_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_equal_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Computes the signed difference between two const iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_vector_MR_StdContainers_NonAssignable_const_iterator a, mrbind_test.mr.cs.std_vector_MR_StdContainers_NonAssignable_const_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_vector_MR_StdContainers_NonAssignable.H0.MR_C_sub_MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_vector_MR_StdContainers_NonAssignable_const_iterator a, mrbind_test.mr.cs.std_vector_MR_StdContainers_NonAssignable_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_MR_StdContainers_NonAssignable.H0.MR_C_equal_MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Computes the signed difference between two mutable iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_vector_MR_StdContainers_NonAssignable_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_vector_MR_StdContainers_NonAssignable_iterator a, mrbind_test.mr.cs.std_vector_MR_StdContainers_NonAssignable_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_vector_MR_StdContainers_NonAssignable.H0.MR_C_sub_MR_C_std_vector_MR_StdContainers_NonAssignable_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_vector_MR_StdContainers_NonAssignable_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_vector_MR_StdContainers_NonAssignable_iterator a, mrbind_test.mr.cs.std_vector_MR_StdContainers_NonAssignable_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_MR_StdContainers_NonAssignable.H0.MR_C_equal_MR_C_std_vector_MR_StdContainers_NonAssignable_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Computes the signed difference between two const iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_deque_MR_StdContainers_NonAssignable_const_iterator a, mrbind_test.mr.cs.std_deque_MR_StdContainers_NonAssignable_const_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_sub_MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_deque_MR_StdContainers_NonAssignable_const_iterator a, mrbind_test.mr.cs.std_deque_MR_StdContainers_NonAssignable_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_equal_MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Computes the signed difference between two mutable iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_deque_MR_StdContainers_NonAssignable_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_deque_MR_StdContainers_NonAssignable_iterator a, mrbind_test.mr.cs.std_deque_MR_StdContainers_NonAssignable_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_sub_MR_C_std_deque_MR_StdContainers_NonAssignable_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_deque_MR_StdContainers_NonAssignable_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_deque_MR_StdContainers_NonAssignable_iterator a, mrbind_test.mr.cs.std_deque_MR_StdContainers_NonAssignable_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_equal_MR_C_std_deque_MR_StdContainers_NonAssignable_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_list_MR_StdContainers_NonAssignable_const_iterator a, mrbind_test.mr.cs.std_list_MR_StdContainers_NonAssignable_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_list_MR_StdContainers_NonAssignable.H0.MR_C_equal_MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_list_MR_StdContainers_NonAssignable_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_list_MR_StdContainers_NonAssignable_iterator a, mrbind_test.mr.cs.std_list_MR_StdContainers_NonAssignable_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_list_MR_StdContainers_NonAssignable.H0.MR_C_equal_MR_C_std_list_MR_StdContainers_NonAssignable_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_set_MR_StdContainers_NonAssignable_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_set_MR_StdContainers_NonAssignable_const_iterator a, mrbind_test.mr.cs.std_set_MR_StdContainers_NonAssignable_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_set_MR_StdContainers_NonAssignable.H0.MR_C_equal_MR_C_std_set_MR_StdContainers_NonAssignable_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_multiset_MR_StdContainers_NonAssignable_const_iterator a, mrbind_test.mr.cs.std_multiset_MR_StdContainers_NonAssignable_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_multiset_MR_StdContainers_NonAssignable.H0.MR_C_equal_MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_unordered_set_MR_StdContainers_NonAssignable_const_iterator a, mrbind_test.mr.cs.std_unordered_set_MR_StdContainers_NonAssignable_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_unordered_set_MR_StdContainers_NonAssignable.H0.MR_C_equal_MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_unordered_multiset_MR_StdContainers_NonAssignable_const_iterator a, mrbind_test.mr.cs.std_unordered_multiset_MR_StdContainers_NonAssignable_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_unordered_multiset_MR_StdContainers_NonAssignable.H0.MR_C_equal_MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_map_MR_StdContainers_NonAssignable_float_const_iterator a, mrbind_test.mr.cs.std_map_MR_StdContainers_NonAssignable_float_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_map_MR_StdContainers_NonAssignable_float.H0.MR_C_equal_MR_C_std_map_MR_StdContainers_NonAssignable_float_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_map_MR_StdContainers_NonAssignable_float_iterator a, mrbind_test.mr.cs.std_map_MR_StdContainers_NonAssignable_float_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_map_MR_StdContainers_NonAssignable_float.H0.MR_C_equal_MR_C_std_map_MR_StdContainers_NonAssignable_float_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_multimap_MR_StdContainers_NonAssignable_float_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_multimap_MR_StdContainers_NonAssignable_float_const_iterator a, mrbind_test.mr.cs.std_multimap_MR_StdContainers_NonAssignable_float_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_multimap_MR_StdContainers_NonAssignable_float.H0.MR_C_equal_MR_C_std_multimap_MR_StdContainers_NonAssignable_float_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_multimap_MR_StdContainers_NonAssignable_float_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_multimap_MR_StdContainers_NonAssignable_float_iterator a, mrbind_test.mr.cs.std_multimap_MR_StdContainers_NonAssignable_float_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_multimap_MR_StdContainers_NonAssignable_float.H0.MR_C_equal_MR_C_std_multimap_MR_StdContainers_NonAssignable_float_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator a, mrbind_test.mr.cs.std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_unordered_map_MR_StdContainers_NonAssignable_float.H0.MR_C_equal_MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_unordered_map_MR_StdContainers_NonAssignable_float_iterator a, mrbind_test.mr.cs.std_unordered_map_MR_StdContainers_NonAssignable_float_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_unordered_map_MR_StdContainers_NonAssignable_float.H0.MR_C_equal_MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_unordered_multimap_MR_StdContainers_NonAssignable_float_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_unordered_multimap_MR_StdContainers_NonAssignable_float_const_iterator a, mrbind_test.mr.cs.std_unordered_multimap_MR_StdContainers_NonAssignable_float_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_unordered_multimap_MR_StdContainers_NonAssignable_float.H0.MR_C_equal_MR_C_std_unordered_multimap_MR_StdContainers_NonAssignable_float_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_unordered_multimap_MR_StdContainers_NonAssignable_float_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_unordered_multimap_MR_StdContainers_NonAssignable_float_iterator a, mrbind_test.mr.cs.std_unordered_multimap_MR_StdContainers_NonAssignable_float_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_unordered_multimap_MR_StdContainers_NonAssignable_float.H0.MR_C_equal_MR_C_std_unordered_multimap_MR_StdContainers_NonAssignable_float_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Computes the signed difference between two const iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_vector_std_expected_int_std_string_const_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_vector_std_expected_int_std_string_const_iterator a, mrbind_test.mr.cs.std_vector_std_expected_int_std_string_const_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_vector_std_expected_int_std_string.H0.MR_C_sub_MR_C_std_vector_std_expected_int_std_string_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two const iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_vector_std_expected_int_std_string_const_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_vector_std_expected_int_std_string_const_iterator a, mrbind_test.mr.cs.std_vector_std_expected_int_std_string_const_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_std_expected_int_std_string.H0.MR_C_equal_MR_C_std_vector_std_expected_int_std_string_const_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Computes the signed difference between two mutable iterators. Completes in constant time.
     *
     * Calls `MR_C_sub_MR_C_std_vector_std_expected_int_std_string_iterator()`.
     */
    public static long opSub(mrbind_test.mr.cs.std_vector_std_expected_int_std_string_iterator a, mrbind_test.mr.cs.std_vector_std_expected_int_std_string_iterator b)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_vector_std_expected_int_std_string.H0.MR_C_sub_MR_C_std_vector_std_expected_int_std_string_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }

    /**
     * Compares two mutable iterators for equality.
     *
     * Calls `MR_C_equal_MR_C_std_vector_std_expected_int_std_string_iterator()`.
     */
    public static boolean opEqual(mrbind_test.mr.cs.std_vector_std_expected_int_std_string_iterator a, mrbind_test.mr.cs.std_vector_std_expected_int_std_string_iterator b)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_std_expected_int_std_string.H0.MR_C_equal_MR_C_std_vector_std_expected_int_std_string_iterator.invokeExact(mrbind_test.Ffi.ptrNonNull(a, "a"), mrbind_test.Ffi.ptrNonNull(b, "b"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(a);
            java.lang.ref.Reference.reachabilityFence(b);
        }
    }
}
