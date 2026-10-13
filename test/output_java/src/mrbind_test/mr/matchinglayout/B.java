package mrbind_test.mr.matchinglayout;

/**
 * Generated from class `MR::MatchingLayout::B`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in native memory.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class B extends mrbind_test.CppStruct
{
    /** The native layout of the struct. */
    public static final java.lang.foreign.StructLayout LAYOUT = mrbind_test.Ffi.structLayout(new java.lang.String[]{"x", "a", "y"}, new java.lang.foreign.MemoryLayout[]{java.lang.foreign.ValueLayout.JAVA_SHORT, mrbind_test.mr.matchinglayout.A.LAYOUT, java.lang.foreign.ValueLayout.JAVA_BYTE});
    public static final long OFF_x = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("x"));
    public static final long OFF_a = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("a"));
    public static final long OFF_y = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("y"));
    // No layout check: this struct has platform-sized fields, and the sizes in the description JSON are for the platform the C bindings were generated on.

    /** Wraps a segment holding the struct. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public B(java.lang.foreign.MemorySegment segment, java.lang.Object owner) {super(segment, owner);}

    /** A copy of the struct, in its own memory. */
    public B copy() {return new B(mrbind_test.Ffi.allocStruct(LAYOUT).copyFrom(segment), null);}

    /** Overwrites the contents with those of another struct. */
    public void set(B other) {segment.copyFrom(mrbind_test.Ffi.ptrNonNull(other, "other"));}

    public short x() {return segment.get(java.lang.foreign.ValueLayout.JAVA_SHORT, OFF_x);}
    public void setX(short value) {segment.set(java.lang.foreign.ValueLayout.JAVA_SHORT, OFF_x, value);}

    public mrbind_test.mr.matchinglayout.A a() {return new mrbind_test.mr.matchinglayout.A(segment.asSlice(OFF_a, mrbind_test.mr.matchinglayout.A.LAYOUT.byteSize()), this);}
    public void setA(mrbind_test.mr.matchinglayout.A value) {segment.asSlice(OFF_a, mrbind_test.mr.matchinglayout.A.LAYOUT.byteSize()).copyFrom(mrbind_test.Ffi.ptrNonNull(value, "value"));}

    public byte y() {return segment.get(java.lang.foreign.ValueLayout.JAVA_BYTE, OFF_y);}
    public void setY(byte value) {segment.set(java.lang.foreign.ValueLayout.JAVA_BYTE, OFF_y, value);}

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_MatchingLayout_B_DefaultConstruct()`.
     */
    public B()
    {
        super(__ctor_defaultConstruct(), null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_matching_layout.H0.MR_MatchingLayout_B_DefaultConstruct.invokeExact((java.lang.foreign.SegmentAllocator)java.lang.foreign.Arena.ofAuto());
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }
}
