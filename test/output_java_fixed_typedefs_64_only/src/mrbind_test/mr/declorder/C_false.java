package mrbind_test.mr.declorder;

/**
 * Generated from class `MR::DeclOrder::C<false>`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in native memory.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class C_false extends mrbind_test.CppStruct
{
    /** The native layout of the struct. */
    public static final java.lang.foreign.StructLayout LAYOUT = mrbind_test.Ffi.structLayout(new java.lang.String[]{"bleh"}, new java.lang.foreign.MemoryLayout[]{java.lang.foreign.ValueLayout.JAVA_INT});
    public static final long OFF_bleh = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("bleh"));
    static {mrbind_test.Ffi.checkLayout(LAYOUT, 4, 4, "MR::DeclOrder::C<false>");}

    /** Wraps a segment holding the struct. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public C_false(java.lang.foreign.MemorySegment segment, java.lang.Object owner) {super(segment, owner);}

    /** A copy of the struct, in its own memory. */
    public C_false copy() {return new C_false(mrbind_test.Ffi.allocStruct(LAYOUT).copyFrom(segment), null);}

    /** Overwrites the contents with those of another struct. */
    public void set(C_false other) {segment.copyFrom(mrbind_test.Ffi.ptrNonNull(other, "other"));}

    public int bleh() {return segment.get(java.lang.foreign.ValueLayout.JAVA_INT, OFF_bleh);}
    public void setBleh(int value) {segment.set(java.lang.foreign.ValueLayout.JAVA_INT, OFF_bleh, value);}

    /**
     * Generated from method `MR::DeclOrder::C<false>::blah`.
     *
     * Calls `MR_DeclOrder_C_false_blah()`.
     */
    public mrbind_test.mr.declorder.C_true blah()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_declaration_order.H0.MR_DeclOrder_C_false_blah.invokeExact((java.lang.foreign.SegmentAllocator)java.lang.foreign.Arena.ofAuto(), rawPointer());
            return new mrbind_test.mr.declorder.C_true(__ret, null);
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
    public C_false() {super(mrbind_test.Ffi.allocStruct(LAYOUT), null);}
}
