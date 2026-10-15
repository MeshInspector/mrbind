package mrbind_test.mr.csharp;

/**
 * Just a simple exposed struct to test other things.
 * Generated from class `MR::CSharp::ExposedLayoutC`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in native memory.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class ExposedLayoutC extends mrbind_test.CppStruct
{
    /** The native layout of the struct. */
    public static final java.lang.foreign.StructLayout LAYOUT = mrbind_test.Ffi.structLayout(new java.lang.String[]{"x"}, new java.lang.foreign.MemoryLayout[]{java.lang.foreign.ValueLayout.JAVA_INT});
    public static final long OFF_x = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("x"));
    static {mrbind_test.Ffi.checkLayout(LAYOUT, 4, 4, "MR::CSharp::ExposedLayoutC");}

    /** Wraps a segment holding the struct. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public ExposedLayoutC(java.lang.foreign.MemorySegment segment, java.lang.Object owner) {super(segment, owner);}

    /** A copy of the struct, in its own memory. */
    public ExposedLayoutC copy() {return new ExposedLayoutC(mrbind_test.Ffi.allocStruct(LAYOUT).copyFrom(segment), null);}

    /** Overwrites the contents with those of another struct. */
    public void set(ExposedLayoutC other) {segment.copyFrom(mrbind_test.Ffi.ptrNonNull(other, "other"));}

    public int x() {return segment.get(java.lang.foreign.ValueLayout.JAVA_INT, OFF_x);}
    public void setX(int value) {segment.set(java.lang.foreign.ValueLayout.JAVA_INT, OFF_x, value);}

    /** Zero-initialized. */
    public ExposedLayoutC() {super(mrbind_test.Ffi.allocStruct(LAYOUT), null);}
}
