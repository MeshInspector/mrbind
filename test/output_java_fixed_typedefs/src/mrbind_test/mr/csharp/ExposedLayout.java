package mrbind_test.mr.csharp;

/**
 * Exposed structs:
 * Generated from class `MR::CSharp::ExposedLayout`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in native memory.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class ExposedLayout extends mrbind_test.CppStruct
{
    /** The native layout of the struct. */
    public static final java.lang.foreign.StructLayout LAYOUT = mrbind_test.Ffi.structLayout(new java.lang.String[]{"x", "y", "z", "arr", "b", "ba"}, new java.lang.foreign.MemoryLayout[]{java.lang.foreign.ValueLayout.JAVA_SHORT, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.JAVA_DOUBLE, java.lang.foreign.MemoryLayout.sequenceLayout(3, java.lang.foreign.ValueLayout.JAVA_INT), java.lang.foreign.ValueLayout.JAVA_BOOLEAN, java.lang.foreign.MemoryLayout.sequenceLayout(4, java.lang.foreign.MemoryLayout.sequenceLayout(5, java.lang.foreign.ValueLayout.JAVA_BOOLEAN))});
    public static final long OFF_x = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("x"));
    public static final long OFF_y = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("y"));
    public static final long OFF_z = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("z"));
    public static final long OFF_arr = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("arr"));
    public static final long OFF_b = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("b"));
    public static final long OFF_ba = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("ba"));
    static {mrbind_test.Ffi.checkLayout(LAYOUT, 56, 8, "MR::CSharp::ExposedLayout");}

    /** Wraps a segment holding the struct. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public ExposedLayout(java.lang.foreign.MemorySegment segment, java.lang.Object owner) {super(segment, owner);}

    /** A copy of the struct, in its own memory. */
    public ExposedLayout copy() {return new ExposedLayout(mrbind_test.Ffi.allocStruct(LAYOUT).copyFrom(segment), null);}

    /** Overwrites the contents with those of another struct. */
    public void set(ExposedLayout other) {segment.copyFrom(mrbind_test.Ffi.ptrNonNull(other, "other"));}

    public short x() {return segment.get(java.lang.foreign.ValueLayout.JAVA_SHORT, OFF_x);}
    public void setX(short value) {segment.set(java.lang.foreign.ValueLayout.JAVA_SHORT, OFF_x, value);}

    /**
     * This is field `y`!
     */
    public int y() {return segment.get(java.lang.foreign.ValueLayout.JAVA_INT, OFF_y);}
    public void setY(int value) {segment.set(java.lang.foreign.ValueLayout.JAVA_INT, OFF_y, value);}

    public double z() {return segment.get(java.lang.foreign.ValueLayout.JAVA_DOUBLE, OFF_z);}
    public void setZ(double value) {segment.set(java.lang.foreign.ValueLayout.JAVA_DOUBLE, OFF_z, value);}

    public int arr(int i0) {return segment.get(java.lang.foreign.ValueLayout.JAVA_INT, OFF_arr + (java.util.Objects.checkIndex(i0, 3)) * 4);}
    public void setArr(int i0, int value) {segment.set(java.lang.foreign.ValueLayout.JAVA_INT, OFF_arr + (java.util.Objects.checkIndex(i0, 3)) * 4, value);}

    public boolean b() {return segment.get(java.lang.foreign.ValueLayout.JAVA_BOOLEAN, OFF_b);}
    public void setB(boolean value) {segment.set(java.lang.foreign.ValueLayout.JAVA_BOOLEAN, OFF_b, value);}

    public boolean ba(int i0, int i1) {return segment.get(java.lang.foreign.ValueLayout.JAVA_BOOLEAN, OFF_ba + ((java.util.Objects.checkIndex(i0, 4)) * 5 + java.util.Objects.checkIndex(i1, 5)) * 1);}
    public void setBa(int i0, int i1, boolean value) {segment.set(java.lang.foreign.ValueLayout.JAVA_BOOLEAN, OFF_ba + ((java.util.Objects.checkIndex(i0, 4)) * 5 + java.util.Objects.checkIndex(i1, 5)) * 1, value);}

    /**
     * Generated from method `MR::CSharp::ExposedLayout::foo`.
     *
     * Calls `MR_CSharp_ExposedLayout_foo()`.
     */
    public void foo()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ExposedLayout_foo.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::ExposedLayout::bar`.
     *
     * Calls `MR_CSharp_ExposedLayout_bar()`.
     */
    public void bar()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ExposedLayout_bar.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::ExposedLayout::blah`.
     *
     * Calls `MR_CSharp_ExposedLayout_blah()`.
     */
    public static void blah()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ExposedLayout_blah.invokeExact();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Try some jank operators.
     * Generated from method `MR::CSharp::ExposedLayout::operator++`.
     *
     * Calls `MR_C_incr_MR_CSharp_ExposedLayout()`.
     */
    public void opIncr()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_C_incr_MR_CSharp_ExposedLayout.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::ExposedLayout::operator+`.
     *
     * Calls `MR_C_add_MR_CSharp_ExposedLayout_ref_int32_t()`.
     */
    public int opAdd_ref_int32_t(int _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H2.MR_C_add_MR_CSharp_ExposedLayout_ref_int32_t.invokeExact(rawPointer(), _1);
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
     * Test how returning references to an exposed struct works, since C# overloaded operators can't return `ref`.
     * Note that this operator must be `const` to test this correctly, since we turn non-const operators in exposed structs into functions.
     * Generated from method `MR::CSharp::ExposedLayout::operator*`.
     *
     * Calls `MR_C_mul_MR_CSharp_ExposedLayout_int32_t()`.
     */
    public mrbind_test.mr.csharp.ExposedLayout opMul(int _1)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_C_mul_MR_CSharp_ExposedLayout_int32_t.invokeExact(rawPointer(), _1);
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.ExposedLayout(__ret.reinterpret(mrbind_test.mr.csharp.ExposedLayout.LAYOUT.byteSize()), __owner);
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
     * Generated from method `MR::CSharp::ExposedLayout::operator+`.
     *
     * Calls `MR_C_add_const_MR_CSharp_ExposedLayout_ref_int32_t()`.
     */
    public mrbind_test.mr.csharp.ExposedLayout opAdd_const_ref_int32_t(int _1)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_C_add_const_MR_CSharp_ExposedLayout_ref_int32_t.invokeExact(rawPointer(), _1);
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.ExposedLayout(__ret.reinterpret(mrbind_test.mr.csharp.ExposedLayout.LAYOUT.byteSize()), __owner);
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
     * Generated from method `MR::CSharp::ExposedLayout::operator<`.
     *
     * Calls `MR_C_less_MR_CSharp_ExposedLayout()`.
     */
    public boolean opLess(mrbind_test.mr.csharp.ExposedLayout _1)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.MR.test_csharp.H2.MR_C_less_MR_CSharp_ExposedLayout.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::ExposedLayout::operator==`.
     *
     * Calls `MR_C_equal_MR_CSharp_ExposedLayout_float()`.
     */
    public boolean opEqual(float _1)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.MR.test_csharp.H2.MR_C_equal_MR_CSharp_ExposedLayout_float.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::CSharp::ExposedLayout::operator<`.
     *
     * Calls `MR_C_less_MR_CSharp_ExposedLayout_char()`.
     */
    public boolean opLess(byte _1)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.MR.test_csharp.H2.MR_C_less_MR_CSharp_ExposedLayout_char.invokeExact(rawPointer(), _1);
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
    public ExposedLayout() {super(mrbind_test.Ffi.allocStruct(LAYOUT), null);}
}
