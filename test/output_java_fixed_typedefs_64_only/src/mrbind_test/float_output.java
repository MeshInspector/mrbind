package mrbind_test;

/** An array of `float`, for the mutable parameters of this type. See `ScalarOutput`. */
public final class float_output extends ScalarOutput
{
    /** One element, zero. */
    public float_output() {this(1);}

    /** `size` elements, zero. */
    public float_output(long size) {super(size, java.lang.foreign.ValueLayout.JAVA_FLOAT);}

    /** `size` elements equal to `value`. */
    public float_output(long size, float value)
    {
        this(size);
        for (long i = 0; i < size; i++)
            set(i, value);
    }

    /** The element `i`. */
    public float get(long i) {return segment.getAtIndex(java.lang.foreign.ValueLayout.JAVA_FLOAT, index(i));}

    /** Sets the element `i`. */
    public void set(long i, float value) {segment.setAtIndex(java.lang.foreign.ValueLayout.JAVA_FLOAT, index(i), value);}

    /** The only element. Throws unless there is exactly one. */
    public float value()
    {
        checkSingle();
        return get(0);
    }

    /** Sets the only element. Throws unless there is exactly one. */
    public void setValue(float value)
    {
        checkSingle();
        set(0, value);
    }

    /** A copy of the elements. */
    public float[] values()
    {
        float[] ret = new float[java.lang.Math.toIntExact(length())];
        for (int i = 0; i < ret.length; i++)
            ret[i] = get(i);
        return ret;
    }

    @java.lang.Override public java.lang.String toString() {return "float_output" + java.util.Arrays.toString(values());}
}
