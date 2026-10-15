package mrbind_test.mr.declorder;

/**
 * Here all classes are whitelisted using `--expose-as-struct`.
 * Generated from class `MR::DeclOrder::A`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in native memory.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class A extends mrbind_test.CppStruct
{
    /** The native layout of the struct. */
    public static final java.lang.foreign.StructLayout LAYOUT = mrbind_test.Ffi.structLayout(new java.lang.String[]{"blah"}, new java.lang.foreign.MemoryLayout[]{java.lang.foreign.ValueLayout.JAVA_INT});
    public static final long OFF_blah = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("blah"));
    static {mrbind_test.Ffi.checkLayout(LAYOUT, 4, 4, "MR::DeclOrder::A");}

    /** Wraps a segment holding the struct. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public A(java.lang.foreign.MemorySegment segment, java.lang.Object owner) {super(segment, owner);}

    /** A copy of the struct, in its own memory. */
    public A copy() {return new A(mrbind_test.Ffi.allocStruct(LAYOUT).copyFrom(segment), null);}

    /** Overwrites the contents with those of another struct. */
    public void set(A other) {segment.copyFrom(mrbind_test.Ffi.ptrNonNull(other, "other"));}

    public int blah() {return segment.get(java.lang.foreign.ValueLayout.JAVA_INT, OFF_blah);}
    public void setBlah(int value) {segment.set(java.lang.foreign.ValueLayout.JAVA_INT, OFF_blah, value);}

    /**
     * Generated from method `MR::DeclOrder::A::c`.
     *
     * Calls `MR_DeclOrder_A_c()`.
     */
    public mrbind_test.mr.declorder.A_B c()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.MR.test_declaration_order.H0.MR_DeclOrder_A_c.invokeExact((java.lang.foreign.SegmentAllocator)java.lang.foreign.Arena.ofAuto(), rawPointer());
            mrbind_test.Ffi.checkException();
            return new mrbind_test.mr.declorder.A_B(__ret, null);
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
     * Generated from method `MR::DeclOrder::A::d`.
     *
     * Calls `MR_DeclOrder_A_d()`.
     */
    public mrbind_test.mr.declorder.A_E d()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.MR.test_declaration_order.H0.MR_DeclOrder_A_d.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
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
    public A() {super(mrbind_test.Ffi.allocStruct(LAYOUT), null);}
}
