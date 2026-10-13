package mrbind_test.mr.csharp;

/**
 * A converting ctor in an exposed struct.
 * Generated from class `MR::CSharp::ConvCtorExposed`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in native memory.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class ConvCtorExposed extends mrbind_test.CppStruct
{
    /** The native layout of the struct. */
    public static final java.lang.foreign.StructLayout LAYOUT = mrbind_test.Ffi.structLayout(new java.lang.String[]{"x"}, new java.lang.foreign.MemoryLayout[]{java.lang.foreign.ValueLayout.JAVA_INT});
    public static final long OFF_x = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("x"));
    static {mrbind_test.Ffi.checkLayout(LAYOUT, 4, 4, "MR::CSharp::ConvCtorExposed");}

    /** Wraps a segment holding the struct. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public ConvCtorExposed(java.lang.foreign.MemorySegment segment, java.lang.Object owner) {super(segment, owner);}

    /** A copy of the struct, in its own memory. */
    public ConvCtorExposed copy() {return new ConvCtorExposed(mrbind_test.Ffi.allocStruct(LAYOUT).copyFrom(segment), null);}

    /** Overwrites the contents with those of another struct. */
    public void set(ConvCtorExposed other) {segment.copyFrom(mrbind_test.Ffi.ptrNonNull(other, "other"));}

    public int x() {return segment.get(java.lang.foreign.ValueLayout.JAVA_INT, OFF_x);}
    public void setX(int value) {segment.set(java.lang.foreign.ValueLayout.JAVA_INT, OFF_x, value);}

    /**
     * Generated from constructor `MR::CSharp::ConvCtorExposed::ConvCtorExposed`.
     *
     * Calls `MR_CSharp_ConvCtorExposed_Construct()`.
     */
    public ConvCtorExposed(int _1)
    {
        super(__ctor_construct(_1), null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct(int _1)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ConvCtorExposed_Construct.invokeExact((java.lang.foreign.SegmentAllocator)java.lang.foreign.Arena.ofAuto(), _1);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /** Zero-initialized. */
    public ConvCtorExposed() {super(mrbind_test.Ffi.allocStruct(LAYOUT), null);}
}
