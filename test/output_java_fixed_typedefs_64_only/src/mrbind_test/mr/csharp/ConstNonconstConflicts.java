package mrbind_test.mr.csharp;

/**
 * Test that we don't produce the const and non-const overloads of the same function under the same name in C#, as that would be a compilation error in C#.
 * Generated from class `MR::CSharp::ConstNonconstConflicts`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in native memory.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class ConstNonconstConflicts extends mrbind_test.CppStruct
{
    /** The native layout of the struct. */
    public static final java.lang.foreign.StructLayout LAYOUT = mrbind_test.Ffi.structLayout(new java.lang.String[]{"x"}, new java.lang.foreign.MemoryLayout[]{java.lang.foreign.ValueLayout.JAVA_INT});
    public static final long OFF_x = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("x"));
    static {mrbind_test.Ffi.checkLayout(LAYOUT, 4, 4, "MR::CSharp::ConstNonconstConflicts");}

    /** Wraps a segment holding the struct. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public ConstNonconstConflicts(java.lang.foreign.MemorySegment segment, java.lang.Object owner) {super(segment, owner);}

    /** A copy of the struct, in its own memory. */
    public ConstNonconstConflicts copy() {return new ConstNonconstConflicts(mrbind_test.Ffi.allocStruct(LAYOUT).copyFrom(segment), null);}

    /** Overwrites the contents with those of another struct. */
    public void set(ConstNonconstConflicts other) {segment.copyFrom(mrbind_test.Ffi.ptrNonNull(other, "other"));}

    public int x() {return segment.get(java.lang.foreign.ValueLayout.JAVA_INT, OFF_x);}
    public void setX(int value) {segment.set(java.lang.foreign.ValueLayout.JAVA_INT, OFF_x, value);}

    /**
     * Generated from method `MR::CSharp::ConstNonconstConflicts::foo`.
     *
     * Calls `MR_CSharp_ConstNonconstConflicts_foo_mut_int()`.
     */
    public void foo(int _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ConstNonconstConflicts_foo_mut_int.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::CSharp::ConstNonconstConflicts::foo`.
     *
     * Calls `MR_CSharp_ConstNonconstConflicts_foo_float()`.
     */
    public void foo(float _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ConstNonconstConflicts_foo_float.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::CSharp::ConstNonconstConflicts::foo`.
     *
     * Calls `MR_CSharp_ConstNonconstConflicts_foo_mut_char()`.
     */
    public void foo_mut_char(byte _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ConstNonconstConflicts_foo_mut_char.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::CSharp::ConstNonconstConflicts::foo`.
     *
     * Calls `MR_CSharp_ConstNonconstConflicts_foo_char()`.
     */
    public void foo_char(byte _1)
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ConstNonconstConflicts_foo_char.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::CSharp::ConstNonconstConflicts::operator+`.
     *
     * Calls `MR_C_pos_MR_CSharp_ConstNonconstConflicts_ref()`.
     */
    public int opPos_ref()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H2.MR_C_pos_MR_CSharp_ConstNonconstConflicts_ref.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::ConstNonconstConflicts::operator+`.
     *
     * Calls `MR_C_pos_const_MR_CSharp_ConstNonconstConflicts_ref()`.
     */
    public int opPos_const_ref()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H2.MR_C_pos_const_MR_CSharp_ConstNonconstConflicts_ref.invokeExact(rawPointer());
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
     * Since this returns void, it gets rewritten into a method.
     * Generated from method `MR::CSharp::ConstNonconstConflicts::operator~`.
     *
     * Calls `MR_C_compl_MR_CSharp_ConstNonconstConflicts_ref()`.
     */
    public void opCompl_ref()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_C_compl_MR_CSharp_ConstNonconstConflicts_ref.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::ConstNonconstConflicts::operator~`.
     *
     * Calls `MR_C_compl_const_MR_CSharp_ConstNonconstConflicts_ref()`.
     */
    public void opCompl_const_ref()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_C_compl_const_MR_CSharp_ConstNonconstConflicts_ref.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::ConstNonconstConflicts::operator/`.
     *
     * Calls `MR_C_div_MR_CSharp_ConstNonconstConflicts_ref_int()`.
     */
    public int opDiv_ref_int(int _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H2.MR_C_div_MR_CSharp_ConstNonconstConflicts_ref_int.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::CSharp::ConstNonconstConflicts::operator/`.
     *
     * Calls `MR_C_div_const_MR_CSharp_ConstNonconstConflicts_ref_int()`.
     */
    public int opDiv_const_ref_int(int _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H2.MR_C_div_const_MR_CSharp_ConstNonconstConflicts_ref_int.invokeExact(rawPointer(), _1);
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

    /** Zero-initialized. */
    public ConstNonconstConflicts() {super(mrbind_test.Ffi.allocStruct(LAYOUT), null);}
}
