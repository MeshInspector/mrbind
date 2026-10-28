package mrbind_test;

/**
 * The base class of `int_output`, `float_output`, ... (named after the C type, like in the Python bindings), which the wrappers take for
 * the mutable scalar parameters: `int &` needs exactly one element, `int *` accepts null, one element, or an array.
 * An instance owns `length()` scalars in native memory (freed by the garbage collector), which the C++ functions read and write.
 */
public abstract class ScalarOutput implements Native
{
    protected final java.lang.foreign.MemorySegment segment;
    private final long length;

    protected ScalarOutput(long size, java.lang.foreign.MemoryLayout layout)
    {
        if (size < 0)
            throw new java.lang.IllegalArgumentException("The size must be non-negative.");
        this.length = size;
        this.segment = java.lang.foreign.Arena.ofAuto().allocate(layout, java.lang.Math.max(size, 1));
    }

    @java.lang.Override public final java.lang.foreign.MemorySegment rawPointer() {return segment;}

    /** The number of elements. */
    public final long length() {return length;}

    protected final long index(long i)
    {
        if (i < 0 || i >= length)
            throw new java.lang.IndexOutOfBoundsException("Index " + i + " is out of range, the size is " + length + ".");
        return i;
    }

    protected final void checkSingle()
    {
        if (length != 1)
            throw new java.lang.IllegalStateException("Expected exactly one value, the size is " + length + ".");
    }

    /** The pointer for a reference parameter: checks that there is exactly one element. */
    public static java.lang.foreign.MemorySegment ref(ScalarOutput object, java.lang.String name)
    {
        if (object == null)
            throw new java.lang.NullPointerException("The parameter `" + name + "` must not be null.");
        object.checkSingle();
        return object.segment;
    }
}
