package mrbind_test.mr.csharp;

/**
 * Generated from class `MR::CSharp::NameConflictsExposed`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in native memory.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class NameConflictsExposed extends mrbind_test.CppStruct
{
    /** The native layout of the struct. */
    public static final java.lang.foreign.StructLayout LAYOUT = mrbind_test.Ffi.structLayout(new java.lang.String[]{"name_conflicts_exposed", "a"}, new java.lang.foreign.MemoryLayout[]{java.lang.foreign.ValueLayout.JAVA_INT, mrbind_test.mr.csharp.NameConflictsExposed_A.LAYOUT});
    public static final long OFF_name_conflicts_exposed = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("name_conflicts_exposed"));
    public static final long OFF_a = LAYOUT.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("a"));
    static {mrbind_test.Ffi.checkLayout(LAYOUT, 8, 4, "MR::CSharp::NameConflictsExposed");}

    /** Wraps a segment holding the struct. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public NameConflictsExposed(java.lang.foreign.MemorySegment segment, java.lang.Object owner) {super(segment, owner);}

    /** A copy of the struct, in its own memory. */
    public NameConflictsExposed copy() {return new NameConflictsExposed(mrbind_test.Ffi.allocStruct(LAYOUT).copyFrom(segment), null);}

    /** Overwrites the contents with those of another struct. */
    public void set(NameConflictsExposed other) {segment.copyFrom(mrbind_test.Ffi.ptrNonNull(other, "other"));}

    public int name_conflicts_exposed() {return segment.get(java.lang.foreign.ValueLayout.JAVA_INT, OFF_name_conflicts_exposed);}
    public void setName_conflicts_exposed(int value) {segment.set(java.lang.foreign.ValueLayout.JAVA_INT, OFF_name_conflicts_exposed, value);}

    public mrbind_test.mr.csharp.NameConflictsExposed_A a() {return new mrbind_test.mr.csharp.NameConflictsExposed_A(segment.asSlice(OFF_a, mrbind_test.mr.csharp.NameConflictsExposed_A.LAYOUT.byteSize()), this);}
    public void setA(mrbind_test.mr.csharp.NameConflictsExposed_A value) {segment.asSlice(OFF_a, mrbind_test.mr.csharp.NameConflictsExposed_A.LAYOUT.byteSize()).copyFrom(mrbind_test.Ffi.ptrNonNull(value, "value"));}

    /**
     * Generated from method `MR::CSharp::NameConflictsExposed::name_Conflicts_exposed`.
     *
     * Calls `MR_CSharp_NameConflictsExposed_name_Conflicts_exposed()`.
     */
    public void name_Conflicts_exposed()
    {
        try
        {
            mrbind_test.ffi.MR.test_csharp.H4.MR_CSharp_NameConflictsExposed_name_Conflicts_exposed.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
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
    public NameConflictsExposed() {super(mrbind_test.Ffi.allocStruct(LAYOUT), null);}
}
