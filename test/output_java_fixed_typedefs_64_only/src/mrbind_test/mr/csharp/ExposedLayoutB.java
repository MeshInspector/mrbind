package mrbind_test.mr.csharp;

/**
 * Generated from class `MR::CSharp::ExposedLayoutB`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in native memory.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class ExposedLayoutB extends mrbind_test.CppStruct
{
    /** The native layout of the struct. */
    public static final java.lang.foreign.StructLayout LAYOUT = mrbind_test.Ffi.structLayout(new java.lang.String[]{"x"}, new java.lang.foreign.MemoryLayout[]{java.lang.foreign.ValueLayout.JAVA_INT});
    public static final long OFF_x = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("x"));
    static {mrbind_test.Ffi.checkLayout(LAYOUT, 4, 4, "MR::CSharp::ExposedLayoutB");}

    /** Wraps a segment holding the struct. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public ExposedLayoutB(java.lang.foreign.MemorySegment segment, java.lang.Object owner) {super(segment, owner);}

    /** A copy of the struct, in its own memory. */
    public ExposedLayoutB copy() {return new ExposedLayoutB(mrbind_test.Ffi.allocStruct(LAYOUT).copyFrom(segment), null);}

    /** Overwrites the contents with those of another struct. */
    public void set(ExposedLayoutB other) {segment.copyFrom(mrbind_test.Ffi.ptrNonNull(other, "other"));}

    public int x() {return segment.get(java.lang.foreign.ValueLayout.JAVA_INT, OFF_x);}
    public void setX(int value) {segment.set(java.lang.foreign.ValueLayout.JAVA_INT, OFF_x, value);}

    /**
     * Some random ctor.
     * Generated from constructor `MR::CSharp::ExposedLayoutB::ExposedLayoutB`.
     *
     * Calls `MR_CSharp_ExposedLayoutB_Construct_2()`.
     */
    public ExposedLayoutB(int _1, int _2)
    {
        super(__ctor_construct_2(_1, _2), null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct_2(int _1, int _2)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H2.MR_CSharp_ExposedLayoutB_Construct_2.invokeExact((java.lang.foreign.SegmentAllocator)java.lang.foreign.Arena.ofAuto(), _1, _2);
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * This gets a lifetime annotation from `--infer-lifetime-constructors`, but it should be a no-op in an exposed struct.
     * Generated from constructor `MR::CSharp::ExposedLayoutB::ExposedLayoutB`.
     *
     * Calls `MR_CSharp_ExposedLayoutB_Construct_1()`.
     */
    public ExposedLayoutB(mrbind_test.mr.csharp.A _1)
    {
        super(__ctor_construct_1(_1), null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct_1(mrbind_test.mr.csharp.A _1)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_csharp.H3.MR_CSharp_ExposedLayoutB_Construct_1.invokeExact((java.lang.foreign.SegmentAllocator)java.lang.foreign.Arena.ofAuto(), mrbind_test.Ffi.ptrNonNull(_1, "_1"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(_1);
        }
    }

    /** Zero-initialized. */
    public ExposedLayoutB() {super(mrbind_test.Ffi.allocStruct(LAYOUT), null);}
}
