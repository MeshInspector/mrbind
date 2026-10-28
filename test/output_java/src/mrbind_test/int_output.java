package mrbind_test;

/** An array of `int`, for the mutable parameters of this type. See `ScalarOutput`. */
public final class int_output extends ScalarOutput
{
    /** One element, zero. */
    public int_output() {this(1);}

    /** `size` elements, zero. */
    public int_output(long size) {super(size, java.lang.foreign.ValueLayout.JAVA_INT);}

    /** `size` elements equal to `value`. */
    public int_output(long size, int value)
    {
        this(size);
        for (long i = 0; i < size; i++)
            set(i, value);
    }

    /** The element `i`. */
    public int get(long i) {return segment.getAtIndex(java.lang.foreign.ValueLayout.JAVA_INT, index(i));}

    /** Sets the element `i`. */
    public void set(long i, int value) {segment.setAtIndex(java.lang.foreign.ValueLayout.JAVA_INT, index(i), value);}

    /** The only element. Throws unless there is exactly one. */
    public int value()
    {
        checkSingle();
        return get(0);
    }

    /** Sets the only element. Throws unless there is exactly one. */
    public void setValue(int value)
    {
        checkSingle();
        set(0, value);
    }

    /** A copy of the elements. */
    public int[] values()
    {
        int[] ret = new int[java.lang.Math.toIntExact(length())];
        for (int i = 0; i < ret.length; i++)
            ret[i] = get(i);
        return ret;
    }

    @java.lang.Override public java.lang.String toString() {return "int_output" + java.util.Arrays.toString(values());}
}
