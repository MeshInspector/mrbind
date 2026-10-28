package mrbind_test;

/** An array of `int8_t`, for the mutable parameters of this type. See `ScalarOutput`. */
public final class int8_t_output extends ScalarOutput
{
    /** One element, zero. */
    public int8_t_output() {this(1);}

    /** `size` elements, zero. */
    public int8_t_output(long size) {super(size, java.lang.foreign.ValueLayout.JAVA_BYTE);}

    /** `size` elements equal to `value`. */
    public int8_t_output(long size, byte value)
    {
        this(size);
        for (long i = 0; i < size; i++)
            set(i, value);
    }

    /** The element `i`. */
    public byte get(long i) {return segment.getAtIndex(java.lang.foreign.ValueLayout.JAVA_BYTE, index(i));}

    /** Sets the element `i`. */
    public void set(long i, byte value) {segment.setAtIndex(java.lang.foreign.ValueLayout.JAVA_BYTE, index(i), value);}

    /** The only element. Throws unless there is exactly one. */
    public byte value()
    {
        checkSingle();
        return get(0);
    }

    /** Sets the only element. Throws unless there is exactly one. */
    public void setValue(byte value)
    {
        checkSingle();
        set(0, value);
    }

    /** A copy of the elements. */
    public byte[] values()
    {
        byte[] ret = new byte[java.lang.Math.toIntExact(length())];
        for (int i = 0; i < ret.length; i++)
            ret[i] = get(i);
        return ret;
    }

    @java.lang.Override public java.lang.String toString() {return "int8_t_output" + java.util.Arrays.toString(values());}
}
