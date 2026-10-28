package mrbind_test;

/** An array of `unsigned_short`, for the mutable parameters of this type. See `ScalarOutput`. */
public final class unsigned_short_output extends ScalarOutput
{
    /** One element, zero. */
    public unsigned_short_output() {this(1);}

    /** `size` elements, zero. */
    public unsigned_short_output(long size) {super(size, java.lang.foreign.ValueLayout.JAVA_SHORT);}

    /** `size` elements equal to `value`. */
    public unsigned_short_output(long size, short value)
    {
        this(size);
        for (long i = 0; i < size; i++)
            set(i, value);
    }

    /** The element `i`. */
    public short get(long i) {return segment.getAtIndex(java.lang.foreign.ValueLayout.JAVA_SHORT, index(i));}

    /** Sets the element `i`. */
    public void set(long i, short value) {segment.setAtIndex(java.lang.foreign.ValueLayout.JAVA_SHORT, index(i), value);}

    /** The only element. Throws unless there is exactly one. */
    public short value()
    {
        checkSingle();
        return get(0);
    }

    /** Sets the only element. Throws unless there is exactly one. */
    public void setValue(short value)
    {
        checkSingle();
        set(0, value);
    }

    /** A copy of the elements. */
    public short[] values()
    {
        short[] ret = new short[java.lang.Math.toIntExact(length())];
        for (int i = 0; i < ret.length; i++)
            ret[i] = get(i);
        return ret;
    }

    @java.lang.Override public java.lang.String toString() {return "unsigned_short_output" + java.util.Arrays.toString(values());}
}
