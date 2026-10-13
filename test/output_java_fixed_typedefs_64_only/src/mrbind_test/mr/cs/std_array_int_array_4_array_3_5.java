package mrbind_test.mr.cs;

/**
 * A fixed-size array of `int[3][4]` of size 5.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in native memory.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_array_int_array_4_array_3_5 extends mrbind_test.CppStruct
{
    /** The native layout of the struct. */
    public static final java.lang.foreign.StructLayout LAYOUT = mrbind_test.Ffi.structLayout(new java.lang.String[]{"elems"}, new java.lang.foreign.MemoryLayout[]{java.lang.foreign.MemoryLayout.sequenceLayout(5, java.lang.foreign.MemoryLayout.sequenceLayout(3, java.lang.foreign.MemoryLayout.sequenceLayout(4, java.lang.foreign.ValueLayout.JAVA_INT)))});
    public static final long OFF_elems = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("elems"));
    static {mrbind_test.Ffi.checkLayout(LAYOUT, 240, 4, "std::array<int[3][4], 5>");}

    /** Wraps a segment holding the struct. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_array_int_array_4_array_3_5(java.lang.foreign.MemorySegment segment, java.lang.Object owner) {super(segment, owner);}

    /** A copy of the struct, in its own memory. */
    public std_array_int_array_4_array_3_5 copy() {return new std_array_int_array_4_array_3_5(mrbind_test.Ffi.allocStruct(LAYOUT).copyFrom(segment), null);}

    /** Overwrites the contents with those of another struct. */
    public void set(std_array_int_array_4_array_3_5 other) {segment.copyFrom(mrbind_test.Ffi.ptrNonNull(other, "other"));}

    public int elems(int i0, int i1, int i2) {return segment.get(java.lang.foreign.ValueLayout.JAVA_INT, OFF_elems + (((java.util.Objects.checkIndex(i0, 5)) * 3 + java.util.Objects.checkIndex(i1, 3)) * 4 + java.util.Objects.checkIndex(i2, 4)) * 4);}
    public void setElems(int i0, int i1, int i2, int value) {segment.set(java.lang.foreign.ValueLayout.JAVA_INT, OFF_elems + (((java.util.Objects.checkIndex(i0, 5)) * 3 + java.util.Objects.checkIndex(i1, 3)) * 4 + java.util.Objects.checkIndex(i2, 4)) * 4, value);}

    /** Zero-initialized. */
    public std_array_int_array_4_array_3_5() {super(mrbind_test.Ffi.allocStruct(LAYOUT), null);}
}
