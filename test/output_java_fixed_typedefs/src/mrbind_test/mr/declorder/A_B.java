package mrbind_test.mr.declorder;

/**
 * Generated from class `MR::DeclOrder::A::B`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in native memory.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class A_B extends mrbind_test.CppStruct
{
    /** The native layout of the struct. */
    public static final java.lang.foreign.StructLayout LAYOUT = mrbind_test.Ffi.structLayout(new java.lang.String[]{"bleh"}, new java.lang.foreign.MemoryLayout[]{java.lang.foreign.ValueLayout.JAVA_INT});
    public static final long OFF_bleh = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("bleh"));
    static {mrbind_test.Ffi.checkLayout(LAYOUT, 4, 4, "MR::DeclOrder::A::B");}

    /** Wraps a segment holding the struct. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public A_B(java.lang.foreign.MemorySegment segment, java.lang.Object owner) {super(segment, owner);}

    /** A copy of the struct, in its own memory. */
    public A_B copy() {return new A_B(mrbind_test.Ffi.allocStruct(LAYOUT).copyFrom(segment), null);}

    /** Overwrites the contents with those of another struct. */
    public void set(A_B other) {segment.copyFrom(mrbind_test.Ffi.ptrNonNull(other, "other"));}

    public int bleh() {return segment.get(java.lang.foreign.ValueLayout.JAVA_INT, OFF_bleh);}
    public void setBleh(int value) {segment.set(java.lang.foreign.ValueLayout.JAVA_INT, OFF_bleh, value);}

    /**
     * Generated from method `MR::DeclOrder::A::B::a`.
     *
     * Calls `MR_DeclOrder_A_B_a()`.
     */
    public mrbind_test.mr.declorder.A a()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_declaration_order.H0.MR_DeclOrder_A_B_a.invokeExact((java.lang.foreign.SegmentAllocator)java.lang.foreign.Arena.ofAuto(), rawPointer());
            return new mrbind_test.mr.declorder.A(__ret, null);
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
     * Generated from method `MR::DeclOrder::A::B::b`.
     *
     * Calls `MR_DeclOrder_A_B_b()`.
     */
    public mrbind_test.mr.declorder.A_E b()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_declaration_order.H0.MR_DeclOrder_A_B_b.invokeExact(rawPointer());
            return mrbind_test.mr.declorder.A_E.of(__ret);
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
    public A_B() {super(mrbind_test.Ffi.allocStruct(LAYOUT), null);}
}
