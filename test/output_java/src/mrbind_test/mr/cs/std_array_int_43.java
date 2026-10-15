package mrbind_test.mr.cs;

/**
 * A fixed-size array of `int` of size 43.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in native memory.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_array_int_43 extends mrbind_test.CppStruct
{
    /** The native layout of the struct. */
    public static final java.lang.foreign.StructLayout LAYOUT = mrbind_test.Ffi.structLayout(new java.lang.String[]{"elems"}, new java.lang.foreign.MemoryLayout[]{java.lang.foreign.MemoryLayout.sequenceLayout(43, java.lang.foreign.ValueLayout.JAVA_INT)});
    public static final long OFF_elems = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("elems"));
    static {mrbind_test.Ffi.checkLayout(LAYOUT, 172, 4, "std::array<int, 43>");}

    /** Wraps a segment holding the struct. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_array_int_43(java.lang.foreign.MemorySegment segment, java.lang.Object owner) {super(segment, owner);}

    /** A copy of the struct, in its own memory. */
    public std_array_int_43 copy() {return new std_array_int_43(mrbind_test.Ffi.allocStruct(LAYOUT).copyFrom(segment), null);}

    /** Overwrites the contents with those of another struct. */
    public void set(std_array_int_43 other) {segment.copyFrom(mrbind_test.Ffi.ptrNonNull(other, "other"));}

    public int elems(int i0) {return segment.get(java.lang.foreign.ValueLayout.JAVA_INT, OFF_elems + (java.util.Objects.checkIndex(i0, 43)) * 4);}
    public void setElems(int i0, int value) {segment.set(java.lang.foreign.ValueLayout.JAVA_INT, OFF_elems + (java.util.Objects.checkIndex(i0, 43)) * 4, value);}

    /** Zero-initialized. */
    public std_array_int_43() {super(mrbind_test.Ffi.allocStruct(LAYOUT), null);}
}
