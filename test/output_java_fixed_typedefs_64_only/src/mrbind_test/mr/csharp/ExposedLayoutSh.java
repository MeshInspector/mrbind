package mrbind_test.mr.csharp;

/**
 * This one is backed by a shared pointer.
 * Generated from class `MR::CSharp::ExposedLayoutSh`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in native memory.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class ExposedLayoutSh extends mrbind_test.CppStruct
{
    /** The native layout of the struct. */
    public static final java.lang.foreign.StructLayout LAYOUT = mrbind_test.Ffi.structLayout(new java.lang.String[]{"x", "y", "z", "arr", "b", "ba"}, new java.lang.foreign.MemoryLayout[]{java.lang.foreign.ValueLayout.JAVA_SHORT, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.JAVA_DOUBLE, java.lang.foreign.MemoryLayout.sequenceLayout(3, java.lang.foreign.ValueLayout.JAVA_INT), java.lang.foreign.ValueLayout.JAVA_BOOLEAN, java.lang.foreign.MemoryLayout.sequenceLayout(4, java.lang.foreign.MemoryLayout.sequenceLayout(5, java.lang.foreign.ValueLayout.JAVA_BOOLEAN))});
    public static final long OFF_x = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("x"));
    public static final long OFF_y = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("y"));
    public static final long OFF_z = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("z"));
    public static final long OFF_arr = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("arr"));
    public static final long OFF_b = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("b"));
    public static final long OFF_ba = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("ba"));
    static {mrbind_test.Ffi.checkLayout(LAYOUT, 56, 8, "MR::CSharp::ExposedLayoutSh");}

    /** Wraps a segment holding the struct. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public ExposedLayoutSh(java.lang.foreign.MemorySegment segment, java.lang.Object owner) {super(segment, owner);}

    /** A copy of the struct, in its own memory. */
    public ExposedLayoutSh copy() {return new ExposedLayoutSh(mrbind_test.Ffi.allocStruct(LAYOUT).copyFrom(segment), null);}

    /** Overwrites the contents with those of another struct. */
    public void set(ExposedLayoutSh other) {segment.copyFrom(mrbind_test.Ffi.ptrNonNull(other, "other"));}

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
     * Generated from method `MR::CSharp::ExposedLayoutSh::foo`.
     *
     * Calls `MR_CSharp_ExposedLayoutSh_foo()`.
     */
    public void foo()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ExposedLayoutSh_foo.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::ExposedLayoutSh::bar`.
     *
     * Calls `MR_CSharp_ExposedLayoutSh_bar()`.
     */
    public void bar()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ExposedLayoutSh_bar.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::ExposedLayoutSh::blah`.
     *
     * Calls `MR_CSharp_ExposedLayoutSh_blah()`.
     */
    public static void blah()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ExposedLayoutSh_blah.invokeExact();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Try some jank operators.
     * Generated from method `MR::CSharp::ExposedLayoutSh::operator++`.
     *
     * Calls `MR_C_incr_MR_CSharp_ExposedLayoutSh()`.
     */
    public void opIncr()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H2.MR_C_incr_MR_CSharp_ExposedLayoutSh.invokeExact(rawPointer());
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
     * Generated from method `MR::CSharp::ExposedLayoutSh::operator+`.
     *
     * Calls `MR_C_add_MR_CSharp_ExposedLayoutSh_int()`.
     */
    public int opAdd(int _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H3.MR_C_add_MR_CSharp_ExposedLayoutSh_int.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::CSharp::ExposedLayoutSh::operator*`.
     *
     * Calls `MR_C_mul_MR_CSharp_ExposedLayoutSh_int()`.
     */
    public int opMul(int _1)
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_csharp.H3.MR_C_mul_MR_CSharp_ExposedLayoutSh_int.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::CSharp::ExposedLayoutSh::operator<`.
     *
     * Calls `MR_C_less_MR_CSharp_ExposedLayoutSh()`.
     */
    public boolean opLess(mrbind_test.mr.csharp.ExposedLayoutSh _1)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.MR.test_csharp.H3.MR_C_less_MR_CSharp_ExposedLayoutSh.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * Generated from method `MR::CSharp::ExposedLayoutSh::operator==`.
     *
     * Calls `MR_C_equal_MR_CSharp_ExposedLayoutSh_float()`.
     */
    public boolean opEqual(float _1)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.MR.test_csharp.H3.MR_C_equal_MR_CSharp_ExposedLayoutSh_float.invokeExact(rawPointer(), _1);
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
     * Generated from method `MR::CSharp::ExposedLayoutSh::operator<`.
     *
     * Calls `MR_C_less_MR_CSharp_ExposedLayoutSh_char()`.
     */
    public boolean opLess(byte _1)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.MR.test_csharp.H3.MR_C_less_MR_CSharp_ExposedLayoutSh_char.invokeExact(rawPointer(), _1);
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
     * While we're at it, test comparison against another exposed struct, since this is apparently non-trivial.
     * Generated from method `MR::CSharp::ExposedLayoutSh::operator==`.
     *
     * Calls `MR_C_equal_MR_CSharp_ExposedLayoutSh_MR_CSharp_ExposedLayout()`.
     */
    public boolean opEqual(mrbind_test.mr.csharp.ExposedLayout _1)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.MR.test_csharp.H3.MR_C_equal_MR_CSharp_ExposedLayoutSh_MR_CSharp_ExposedLayout.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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
     * And against itself, too.
     * Generated from method `MR::CSharp::ExposedLayoutSh::operator==`.
     *
     * Calls `MR_C_equal_MR_CSharp_ExposedLayoutSh()`.
     */
    public boolean opEqual(mrbind_test.mr.csharp.ExposedLayoutSh _1)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.MR.test_csharp.H3.MR_C_equal_MR_CSharp_ExposedLayoutSh.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
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

    /** Zero-initialized. */
    public ExposedLayoutSh() {super(mrbind_test.Ffi.allocStruct(LAYOUT), null);}
}
