package mrbind_test;

/** An array of `bool`, for the mutable parameters of this type. See `ScalarOutput`. */
public final class bool_output extends ScalarOutput
{
    /** One element, zero. */
    public bool_output() {this(1);}

    /** `size` elements, zero. */
    public bool_output(long size) {super(size, java.lang.foreign.ValueLayout.JAVA_BOOLEAN);}

    /** `size` elements equal to `value`. */
    public bool_output(long size, boolean value)
    {
        this(size);
        for (long i = 0; i < size; i++)
            set(i, value);
    }

    /** The element `i`. */
    public boolean get(long i) {return segment.getAtIndex(java.lang.foreign.ValueLayout.JAVA_BOOLEAN, index(i));}

    /** Sets the element `i`. */
    public void set(long i, boolean value) {segment.setAtIndex(java.lang.foreign.ValueLayout.JAVA_BOOLEAN, index(i), value);}

    /** The only element. Throws unless there is exactly one. */
    public boolean value()
    {
        checkSingle();
        return get(0);
    }

    /** Sets the only element. Throws unless there is exactly one. */
    public void setValue(boolean value)
    {
        checkSingle();
        set(0, value);
    }

    /** A copy of the elements. */
    public boolean[] values()
    {
        boolean[] ret = new boolean[java.lang.Math.toIntExact(length())];
        for (int i = 0; i < ret.length; i++)
            ret[i] = get(i);
        return ret;
    }

    @java.lang.Override public java.lang.String toString() {return "bool_output" + java.util.Arrays.toString(values());}
}
