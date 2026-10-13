package mrbind_test.mr.matchinglayout;

/**
 * Generated from class `MR::MatchingLayout::A`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in native memory.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class A extends mrbind_test.CppStruct
{
    /** The native layout of the struct. */
    public static final java.lang.foreign.StructLayout LAYOUT = mrbind_test.Ffi.structLayout(new java.lang.String[]{"a", "b", "c", "ll", "arr", "arr2d"}, new java.lang.foreign.MemoryLayout[]{java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.JAVA_SHORT, java.lang.foreign.ValueLayout.JAVA_FLOAT, java.lang.foreign.ValueLayout.JAVA_LONG, java.lang.foreign.MemoryLayout.sequenceLayout(3, java.lang.foreign.ValueLayout.JAVA_INT), java.lang.foreign.MemoryLayout.sequenceLayout(4, java.lang.foreign.MemoryLayout.sequenceLayout(5, java.lang.foreign.ValueLayout.JAVA_INT))});
    public static final long OFF_a = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("a"));
    public static final long OFF_b = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("b"));
    public static final long OFF_c = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("c"));
    public static final long OFF_ll = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("ll"));
    public static final long OFF_arr = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("arr"));
    public static final long OFF_arr2d = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("arr2d"));
    static {mrbind_test.Ffi.checkLayout(LAYOUT, 120, 8, "MR::MatchingLayout::A");}

    /** Wraps a segment holding the struct. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public A(java.lang.foreign.MemorySegment segment, java.lang.Object owner) {super(segment, owner);}

    /** A copy of the struct, in its own memory. */
    public A copy() {return new A(mrbind_test.Ffi.allocStruct(LAYOUT).copyFrom(segment), null);}

    /** Overwrites the contents with those of another struct. */
    public void set(A other) {segment.copyFrom(mrbind_test.Ffi.ptrNonNull(other, "other"));}

    /**
     * first
     */
    public int a() {return segment.get(java.lang.foreign.ValueLayout.JAVA_INT, OFF_a);}
    public void setA(int value) {segment.set(java.lang.foreign.ValueLayout.JAVA_INT, OFF_a, value);}

    /**
     * second
     */
    public short b() {return segment.get(java.lang.foreign.ValueLayout.JAVA_SHORT, OFF_b);}
    public void setB(short value) {segment.set(java.lang.foreign.ValueLayout.JAVA_SHORT, OFF_b, value);}

    /**
     * third
     */
    public float c() {return segment.get(java.lang.foreign.ValueLayout.JAVA_FLOAT, OFF_c);}
    public void setC(float value) {segment.set(java.lang.foreign.ValueLayout.JAVA_FLOAT, OFF_c, value);}

    public long ll() {return segment.get(java.lang.foreign.ValueLayout.JAVA_LONG, OFF_ll);}
    public void setLl(long value) {segment.set(java.lang.foreign.ValueLayout.JAVA_LONG, OFF_ll, value);}

    public int arr(int i0) {return segment.get(java.lang.foreign.ValueLayout.JAVA_INT, OFF_arr + (java.util.Objects.checkIndex(i0, 3)) * 4);}
    public void setArr(int i0, int value) {segment.set(java.lang.foreign.ValueLayout.JAVA_INT, OFF_arr + (java.util.Objects.checkIndex(i0, 3)) * 4, value);}

    public int arr2d(int i0, int i1) {return segment.get(java.lang.foreign.ValueLayout.JAVA_INT, OFF_arr2d + ((java.util.Objects.checkIndex(i0, 4)) * 5 + java.util.Objects.checkIndex(i1, 5)) * 4);}
    public void setArr2d(int i0, int i1, int value) {segment.set(java.lang.foreign.ValueLayout.JAVA_INT, OFF_arr2d + ((java.util.Objects.checkIndex(i0, 4)) * 5 + java.util.Objects.checkIndex(i1, 5)) * 4, value);}

    /**
     * Having static fields is not an error! Those get their normal getters and setters.
     * Returns a pointer to a member variable of class `MR::MatchingLayout::A` named `x`.
     *
     * Calls `MR_MatchingLayout_A_Get_x()`.
     */
    public static int x()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_matching_layout.H0.MR_MatchingLayout_A_Get_x.invokeExact();
            return __ret.reinterpret(4).get(java.lang.foreign.ValueLayout.JAVA_INT, 0);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Having static fields is not an error! Those get their normal getters and setters.
     * Modifies a member variable of class `MR::MatchingLayout::A` named `x`.
     *
     * Calls `MR_MatchingLayout_A_Set_x()`.
     */
    public static void setX(int value)
    {
        try
        {
            mrbind_test.ffi.MR.test_matching_layout.H0.MR_MatchingLayout_A_Set_x.invokeExact(value);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /** Zero-initialized. */
    public A() {super(mrbind_test.Ffi.allocStruct(LAYOUT), null);}
}
